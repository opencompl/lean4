/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: William Sørensen
-/
prelude
import Lean.Util.CollectLevelParams
import Lean.Elab.DeclUtil
import Lean.Elab.DefView
import Lean.Elab.Inductive
import Lean.Elab.Structure
import Lean.Elab.MutualDef
import Lean.Elab.DeclarationRange

import Lean.Util.Trace
import Lean.Elab.Binders
import Lean.Elab.DeclarationRange
import Lean.Elab.Command
import Lean.Elab.Inductive
import Lean.Elab.Exception

namespace Lean.Elab.Command

open Lean Lean.Elab Lean.Elab.Term Lean.Parser Command

builtin_initialize
  registerTraceClass `Elab.CoInductive

structure CoInductiveView.CtorView where
  ref       : Syntax
  modifiers : Modifiers
  declName  : Name
  binders   : TSyntaxArray ``Lean.Parser.Term.bracketedBinder
  type?     : Option Term
  deriving Inhabited

structure CoInductiveView where
  ref             : TSyntax ``Lean.Parser.Command.coinductive
  declId          : TSyntax ``Parser.Command.declId
  modifiers       : Modifiers
  shortDeclName   : Name
  declName        : Name
  levelNames      : List Name
  binders         : TSyntaxArray ``Lean.Parser.Term.bracketedBinder
  type            : Term
  ctors           : Array CoInductiveView.CtorView
  /- derivingClasses : Array Lean.Elab.DerivingClassView -/
  /- computedFields  : Array Lean.Elab.Command.ComputedFieldView -/
  deriving Inhabited

namespace CoInductiveView

def CtorView.ofStx (declName : Name) (modifiers : Modifiers) (ref : Syntax) : CommandElabM CoInductiveView.CtorView := do
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

def ofModifiersAndStx (modifiers : Modifiers) (decl : Syntax) : CommandElabM CoInductiveView := do
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

def ofStx (stx : Syntax) := elabModifiers stx[0] >>= (ofModifiersAndStx · stx[1])

def extractIds : TSyntax ``Parser.Term.bracketedBinder → Array Ident
  | ⟨.node _ _ #[.atom _ _, .node _ `null ids, _, _,  .atom _ _]⟩ => ids.map (⟨·⟩)
  | _ => #[]

def toBinderIds (c : CoInductiveView) : Array Ident := (c.binders.map extractIds).flatten

def toRelType (c : CoInductiveView) : CommandElabM Term :=
  c.binders.reverse.foldlM (fun curr acc => `($acc:bracketedBinder → $curr)) c.type

end CoInductiveView

open Parser.Term in
section
abbrev bb := bracketedBinder
/- Since `bb` is an alias for `bracketedBinder`, we can safely coerce syntax of these categories  -/
instance : Coe (TSyntax ``bb) (TSyntax ``bracketedBinder) where coe x := ⟨x.raw⟩
end


partial def typeToArgArr (type : Term) : Array Term × Term := Prod.map List.toArray id $ go type.raw
  where go
    | .node _ ``Parser.Term.arrow #[hd, _, tail] => Prod.map (⟨hd⟩ :: ·) id $ go tail
    | rest => ⟨[], ⟨rest⟩⟩

def appsToArgArr (type : Term) : Array Term × Term := match type.raw with
  | .node _ ``Parser.Term.app #[v, cont] => ⟨cont.getArgs.map (⟨·⟩), ⟨v⟩⟩
  | rest => ⟨#[], ⟨rest⟩⟩

def extractName : Syntax → Name
  | .ident _ _ nm _ => nm
  | _ => .anonymous

def split : Nat → List α → (List α) × (List α)
  | _, []  => ⟨[], []⟩
  | 0, arr => ⟨[], arr⟩
  | n+1, hd :: tl => Prod.map (hd :: ·) id $ split n tl


    -- Coming in these have the form of  | name ... : ... Nm       topBinders...         args...
    -- But we want them to have the form | name ... : ... Nm.Shape topBinders... RecName args...
def handleCtor (names : Array Ident) (topView : CoInductiveView) (isTy : Ident) (view : CoInductiveView.CtorView) : CommandElabM CtorView := do
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

def generateIs (vss : Array (CoInductiveView × Array Ident)) (rNameEntries : Array (Ident × Term)) : CommandElabM Unit := do
  -- It could be worth making this extract only the names that are required.
  let boundRNames ← rNameEntries.mapM (fun ⟨i, v⟩ => do `(bb| ( $i : $v) ))
  let coRecArgs   ← vss.mapM (fun ⟨v, _⟩ => do `(bb| ( $(mkIdent $ v.shortDeclName) : $(←v.toRelType))))
  let names      := vss.map  (mkIdent ·.fst.shortDeclName)

  for ⟨idx, topView, argArr⟩ in vss.toList.enum.toArray do
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

    trace[Elab.CoInductive] s!"{repr topView.binders}"
    trace[Elab.CoInductive] s!"{topView.toBinderIds}"

    let boundNames := rNameEntries.map Prod.fst
    let i := boundNames[idx]! -- OK since these come from the same source

    let stx ← `(command|
      abbrev $(mkIdent $ topView.shortDeclName ++ `Is) $(topView.binders)* $boundRNames* : Prop :=
        ∀ { $argArr* }, $i $(topView.toBinderIds)* $argArr* → $(mkIdent shortDeclName) $(topView.toBinderIds)* $boundNames* $argArr*)

    trace[Elab.CoInductive] "Generating Is check:"
    trace[Elab.CoInductive] stx

    elabInductiveViews #[view]
    elabCommand stx

def elabCoInductiveViews (views : Array CoInductiveView) : CommandElabM Unit := do
  let viewCheck ← views.mapM fun view => do
    let ⟨tyArr, out⟩ := typeToArgArr view.type
    let argArr := (← tyArr.mapM (fun _ => mkFreshBinderName)).map mkIdent

    -- In theory we could make this handle types by simply changing the existential quantification but this would yield some pretty funny results
    let .node _ ``Parser.Term.prop _ := out.raw | throwErrorAt out "Expected return type to be a Prop"
    return Prod.mk view argArr

  let rNameEntries ← viewCheck.mapM (fun ⟨v, _⟩ => return Prod.mk (mkIdent $ ←mkFreshBinderName) (←v.toRelType))

  generateIs viewCheck rNameEntries
  for ⟨idx, view, argArr⟩ in viewCheck.toList.enum.toArray do
    let boundNames := rNameEntries.map Prod.fst
    let i := boundNames[idx]! -- OK since these come from the same source

    let stx ← `(def $(mkIdent view.shortDeclName) $(view.binders)* : $(view.type) := fun $argArr* =>
      ∃ $[$boundNames:ident]*, @$(mkIdent $ view.shortDeclName ++ `Is) $(view.toBinderIds)* $boundNames* ∧ $i $(view.toBinderIds)* $argArr*)

    trace[Elab.CoInductive] stx
    elabCommand stx

