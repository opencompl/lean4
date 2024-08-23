/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: William Sørensen
-/
prelude
import Lean.Elab.Command
import Lean.Elab.DeclarationRange
import Lean.Elab.Exception
import Lean.Elab.Inductive
import Lean.Util.Trace

namespace Lean.Elab.Command

open Lean Lean.Elab Lean.Elab.Term Lean.Parser Command

builtin_initialize
  registerTraceClass `Elab.Coinductive

structure CoinductiveView.CtorView where
  ref       : Syntax
  modifiers : Modifiers
  declName  : Name
  binders   : TSyntaxArray ``Lean.Parser.Term.bracketedBinder
  type?     : Option Term
  deriving Inhabited

structure CoinductiveView where
  ref             : TSyntax ``Lean.Parser.Command.coinductive
  declId          : TSyntax ``Parser.Command.declId
  modifiers       : Modifiers
  shortDeclName   : Name
  declName        : Name
  levelNames      : List Name
  binders         : TSyntaxArray ``Lean.Parser.Term.bracketedBinder
  type            : Term
  ctors           : Array CoinductiveView.CtorView
  deriving Inhabited

namespace CoinductiveView

/--
  Create a CtorView from a Name, some Modifiers, and Syntax
-/
def CtorView.ofStx (declName : Name) (modifiers : Modifiers) (ref : Syntax) : CommandElabM CoinductiveView.CtorView := do
  let mut ctorModifiers ← elabModifiers ref[2]
  if let some leadingDocComment := ref[0].getOptional? then
    if ctorModifiers.docString?.isSome then
      logErrorAt leadingDocComment "duplicate doc string"
    ctorModifiers := { ctorModifiers with docString? := TSyntax.getDocString ⟨leadingDocComment⟩ }
  if ctorModifiers.isPrivate && modifiers.isPrivate then
    throwError "invalid 'private' constructor in a 'private' inductive datatype"
  if ctorModifiers.isProtected && modifiers.isPrivate then
    throwError "invalid 'protected' constructor in a 'private' inductive datatype"

  checkValidCtorModifier ctorModifiers
  let ctorName := ref.getIdAt 3
  let ctorName := declName ++ ctorName
  let ctorName ← withRef ref[3] $ applyVisibility ctorModifiers.visibility ctorName
  let (binders, type?) := expandOptDeclSig ref[4]
  addDocString' ctorName ctorModifiers.docString?
  addAuxDeclarationRanges ctorName ref ref[3]

  return { ref, modifiers := ctorModifiers, declName := ctorName, binders := binders.getArgs.map (⟨·⟩), type? := type?.map (⟨·⟩) }

/--
  Create a CoinductiveView from Modifiers and Syntax
-/
def ofModifiersAndStx (modifiers : Modifiers) (decl : Syntax) : CommandElabM CoinductiveView := do
  let (binders, type) := expandDeclSig decl[2]!

  let binders := binders.getArgs.map (⟨·⟩)

  let declId  := ⟨decl[1]⟩
  let ⟨shortDeclName, declName, levelNames⟩ ← expandDeclId declId.raw modifiers

  let ctors ← decl[4].getArgs.mapM $ CtorView.ofStx declName modifiers

  addDeclarationRanges declName decl

  return {
    ref := ⟨decl⟩

    declName
    shortDeclName

    levelNames
    type := ⟨type⟩

    binders
    ctors

    declId
    modifiers
  }

def ofStx (stx : Syntax) : CommandElabM CoinductiveView := elabModifiers stx[0] >>= (ofModifiersAndStx · stx[1])

def toBinderIds (c : CoinductiveView) : Array Ident := (c.binders.map getBracketedBinderIds).flatten.map mkIdent

def toRelType (c : CoinductiveView) : CommandElabM Term :=
  c.binders.reverse.foldlM (fun curr acc => `($acc:bracketedBinder → $curr)) c.type

end CoinductiveView

open Parser.Term in
section

/-- `bb`s are an alias for `bracketedBinder` and used in quotations -/
private abbrev bb := bracketedBinder
/-- Since `bb` is an alias for `bracketedBinder`, we can safely coerce syntax of these categories  -/
instance : Coe (TSyntax ``bb) (TSyntax ``bracketedBinder) where coe x := ⟨x.raw⟩

end

-- TODO: Use elaboration over syntax manipulation
/--
  Extract the types and the bottom value like the following:

  > a → ⋯ → bot
  > ⟨#[a, ⋯], bot⟩
-/
private partial def typeToArgArr (type : Term) : Array Term × Term := Prod.map List.toArray id $ go type.raw
  where go
    | .node _ ``Parser.Term.arrow #[hd, _, tail] => Prod.map (⟨hd⟩ :: ·) id $ go tail
    | rest => ⟨[], ⟨rest⟩⟩

/--
  Extract the args of a function

  > bot a ⋯
  > ⟨#[a, ⋯], bot⟩
-/
private def appsToArgArr (type : Term) : Array Term × Term := match type.raw with
  | .node _ ``Parser.Term.app #[v, cont] => ⟨cont.getArgs.map (⟨·⟩), ⟨v⟩⟩
  | rest => ⟨#[], ⟨rest⟩⟩

/--
  Given a list [a, b, c] split lets you split it into two arrays

  > example : split 2 [1, 2, 3] = ⟨[1, 2], [3]⟩ := by simp [split]
-/
private def split : Nat → List α → (List α) × (List α)
  | _, []  => ⟨[], []⟩
  | 0, arr => ⟨[], arr⟩
  | n+1, hd :: tl => Prod.map (hd :: ·) id $ split n tl

/--
  Coming in these have the form of  | name ... : ... → Nm       topBinders...         args...
  But we want them to have the form | name ... : ... → Nm.Shape topBinders... RecName args...

  To do this we simply replace the out type.
-/
private def handleCtor (names : Array Ident) (topView : CoinductiveView) (isTy : Ident) (view : CoinductiveView.CtorView) : CommandElabM CtorView := do
  let nm := view.declName.replacePrefix topView.declName (topView.declName ++ `Shape)

  let type? ← view.type?.mapM fun type => do
    let ⟨args, out⟩ := typeToArgArr type
    let ⟨arr, _⟩ := appsToArgArr out

    let ⟨pre, post⟩ := (split topView.binders.size arr.toList).map (·.toArray) (·.toArray)

    let out ← `($isTy $pre* $names* $post*)

    args.reverse.foldlM (fun acc curr => `($curr → $acc)) out

  return {
    ref       := .missing
    modifiers := view.modifiers
    declName  := nm
    binders   := .node .none `null (view.binders.map (·.raw))
    type?     := type?
  }

/--
  Coinductive predicates need a shape construct.
  These are inductive datatypes that have the same constructors without any level of recursion.
  These are then applied in the fixed point.
-/
private def generateShapes (vss : Array (CoinductiveView × Array Ident)) : CommandElabM Unit := do
  -- It could be worth making this extract only the names that are required.
  let coRecArgs   ← vss.mapM (fun ⟨v, _⟩ => do `(bb| ( $(mkIdent $ v.shortDeclName) : $(←v.toRelType))))
  let names      := vss.map  (mkIdent ·.fst.shortDeclName)

  elabInductiveViews $ ←vss.mapM fun ⟨topView, _⟩ => do
    let shortDeclName := topView.shortDeclName ++ `Shape

    let view := {
      ref             := .missing
      declId          := ←`(declId| $(mkIdent shortDeclName))
      modifiers       := topView.modifiers
      shortDeclName
      declName        := topView.declName ++ `Shape
      levelNames      := topView.levelNames
      binders         := .node .none `null $ topView.binders.append coRecArgs
      type?           := some topView.type
      ctors           := ←topView.ctors.mapM $ handleCtor names topView $ mkIdent shortDeclName
      derivingClasses := #[]
      computedFields  := #[]
    }

    trace[Elab.Coinductive] s!"{repr topView.binders}"

    return view
/--
  `Is` is a predicate on the relation used to generate the coinductive predicate.
  It ensures it satisfies the declaration given.
-/
private def generateIs (vss : Array (CoinductiveView × Array Ident)) (rNameEntries : Array (Ident × Term)) : CommandElabM Unit := do
  -- It could be worth making this extract only the names that are required.
  let boundRNames ← rNameEntries.mapM fun ⟨i, v⟩ => do `(bb| ( $i : $v ) )

  for ⟨idx, topView, argArr⟩ in vss.toList.enum do
    let shortDeclName := topView.shortDeclName ++ `Shape

    let boundNames := rNameEntries.map Prod.fst
    let i := boundNames[idx]! -- OK since these come from the same source

    let stx ← `(command|
      abbrev $(mkIdent $ topView.shortDeclName ++ `Is) $(topView.binders)* $boundRNames* : Prop :=
        ∀ { $argArr* }, $i $(topView.toBinderIds)* $argArr* → $(mkIdent shortDeclName) $(topView.toBinderIds)* $boundNames* $argArr*)

    trace[Elab.Coinductive] "Generating Is check:"
    trace[Elab.Coinductive] stx

    elabCommand stx

private def generateCoinductive (vss : Array (CoinductiveView × Array Ident)) (rNameEntries : Array (Ident × Term)) : CommandElabM Unit := do
  for ⟨idx, view, argArr⟩ in vss.toList.enum do
    let boundNames := rNameEntries.map Prod.fst
    let i := boundNames[idx]!

    let stx ← `(def $(mkIdent view.shortDeclName) $(view.binders)* : $(view.type) := fun $argArr* =>
      ∃ $[$boundNames:ident]*, @$(mkIdent $ view.shortDeclName ++ `Is) $(view.toBinderIds)* $boundNames* ∧ $i $(view.toBinderIds)* $argArr*)

    trace[Elab.Coinductive] "Generating co-inductive:"
    trace[Elab.Coinductive] stx
    elabCommand stx

def elabCoinductiveViews (views : Array CoinductiveView) : CommandElabM Unit := do
  let viewCheck ← views.mapM fun view => do
    let ⟨tyArr, out⟩ := typeToArgArr view.type
    let argArr := (← tyArr.mapM (fun _ => mkFreshBinderName)).map mkIdent

    let .node _ ``Parser.Term.prop _ := out.raw | throwErrorAt out "Expected return type to be a Prop"
    return Prod.mk view argArr

  let rNameEntries ← viewCheck.mapM (fun ⟨v, _⟩ => return Prod.mk (mkIdent $ ←mkFreshBinderName) (←v.toRelType))

  generateShapes viewCheck
  generateIs viewCheck rNameEntries
  generateCoinductive viewCheck rNameEntries

