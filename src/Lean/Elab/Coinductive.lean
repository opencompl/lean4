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
  binders   : Array BinderView
  type?     : Option Term
  deriving Inhabited

structure CoInductiveView : Type where
  ref             : TSyntax ``Lean.Parser.Command.coinductive
  declId          : TSyntax ``Parser.Command.declId
  modifiers       : Modifiers
  shortDeclName   : Name
  declName        : Name
  levelNames      : List Name
  binders         : Array BinderView
  type            : Term
  ctors           : Array CoInductiveView.CtorView
  /- derivingClasses : Array Lean.Elab.DerivingClassView -/
  /- computedFields  : Array Lean.Elab.Command.ComputedFieldView -/
  deriving Inhabited

namespace CoInductiveView

section -- toBinderViews defn
/--
  Given syntax of the forms
    a) (`:` term)?
    b) `:` term
  return `term` if it is present, or a hole if not. -/
private def expandBinderType (ref : Syntax) (stx : Syntax) : Syntax :=
  if stx.getNumArgs == 0 then
    mkHole ref
  else
    stx[1]

/-- Given syntax of the form `ident <|> hole`, return `ident`. If `hole`, then we create a new anonymous name. -/
private def expandBinderIdent (stx : Syntax) : TermElabM Syntax :=
  match stx with
  | `(_) => mkFreshIdent stx (canonical := true)
  | _    => pure stx

/--
Expand `optional (binderTactic <|> binderDefault)`
```
def binderTactic  := leading_parser " := " >> " by " >> tacticParser
def binderDefault := leading_parser " := " >> termParser
```
-/
private def expandBinderModifier (type : Syntax) (optBinderModifier : Syntax) : TermElabM Syntax := do
  if optBinderModifier.isNone then
    return type
  else
    let modifier := optBinderModifier[0]
    let kind     := modifier.getKind
    if kind == `Lean.Parser.Term.binderDefault then
      let defaultVal := modifier[1]
      `(optParam $(⟨type⟩) $(⟨defaultVal⟩))
    else if kind == `Lean.Parser.Term.binderTactic then
      let tac := modifier[2]
      let name ← declareTacticSyntax tac
      `(autoParam $(⟨type⟩) $(mkIdentFrom tac name))
    else
      throwUnsupportedSyntax
private def getBinderIds (ids : Syntax) : TermElabM (Array Syntax) :=
  ids.getArgs.mapM fun id =>
    let k := id.getKind
    if k == identKind || k == `Lean.Parser.Term.hole then
      return id
    else
      throwErrorAt id "identifier or `_` expected"

/-- Given syntax of the form `(ident >> " : ")?`, return `ident`, or a new instance name. -/
private def expandOptIdent (stx : Syntax) : TermElabM Syntax := do
  if stx.isNone then
    let id ← withFreshMacroScope <| MonadQuotation.addMacroScope `inst
    return mkIdentFrom stx id
  else
    return stx[0]

/--
Convert `stx` into an array of `BinderView`s.
`stx` must be an identifier, `_`, `explicitBinder`, `implicitBinder`, `strictImplicitBinder`, or `instBinder`.
-/
private def toBinderViews (stx : Syntax) : TermElabM (Array BinderView) := do
  let k := stx.getKind
  if stx.isIdent || k == ``Lean.Parser.Term.hole then
    -- binderIdent
    return #[{ ref := stx, id := (← expandBinderIdent stx), type := mkHole stx, bi := .default }]
  else if k == ``Lean.Parser.Term.explicitBinder then
    -- `(` binderIdent+ binderType (binderDefault <|> binderTactic)? `)`
    let ids ← getBinderIds stx[1]
    let type        := stx[2]
    let optModifier := stx[3]
    ids.mapM fun id => do pure { ref := id, id := (← expandBinderIdent id), type := (← expandBinderModifier (expandBinderType id type) optModifier), bi := .default }
  else if k == ``Lean.Parser.Term.implicitBinder then
    -- `{` binderIdent+ binderType `}`
    let ids ← getBinderIds stx[1]
    let type := stx[2]
    ids.mapM fun id => do pure { ref := id, id := (← expandBinderIdent id), type := expandBinderType id type, bi := .implicit }
  else if k == ``Lean.Parser.Term.strictImplicitBinder then
    -- `⦃` binderIdent+ binderType `⦄`
    let ids ← getBinderIds stx[1]
    let type := stx[2]
    ids.mapM fun id => do pure { ref := id, id := (← expandBinderIdent id), type := expandBinderType id type, bi := .strictImplicit }
  else if k == ``Lean.Parser.Term.instBinder then
    -- `[` optIdent type `]`
    let id ← expandOptIdent stx[1]
    let type := stx[2]
    return #[ { ref := id, id := id, type := type, bi := .instImplicit } ]
  else
    throwUnsupportedSyntax
end

/- #check Lean.Elab.Binders.to -/

/- open private toBinderViews from Lean.Elab.Binders in -/
private def toBViews (stx : Syntax) : CommandElabM $ Array Elab.Term.BinderView := do
  let x ← liftTermElabM $ stx.getArgs.mapM toBinderViews
  return x.flatten

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
  let ctorName ← withRef ref[3] $ Elab.applyVisibility ctorModifiers.visibility ctorName
  let (binders, type?) := Elab.expandOptDeclSig ref[4]
  addDocString' ctorName ctorModifiers.docString?
  Elab.addAuxDeclarationRanges ctorName ref ref[3]

  let binders ← toBViews binders

  return { ref, modifiers := ctorModifiers, declName := ctorName, binders, type? := type?.map (⟨·⟩) }

def ofModifiersAndStx (modifiers : Modifiers) (decl : Syntax) : CommandElabM CoInductiveView := do
  let (binders, type) := Elab.expandDeclSig decl[2]!

  let binders ← toBViews binders

  let declId  := ⟨decl[1]⟩
  let ⟨shortDeclName, declName, levelNames⟩ ← expandDeclId declId.raw modifiers

  let ctors ← decl[4].getArgs.mapM $ CtorView.ofStx declName modifiers

  Elab.addDeclarationRanges declName decl

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

end CoInductiveView

open Parser.Term in
section
abbrev bb            : Lean.Parser.Parser := bracketedBinder
abbrev matchAltExprs : Lean.Parser.Parser := matchAlts

/- Since `bb` and `matchAltExprs` are aliases for `bracketedBinder`, resp. `matchAlts`,
we can safely coerce syntax of these categories  -/
instance : Coe (TSyntax ``bb) (TSyntax ``bracketedBinder)      where coe x := ⟨x.raw⟩
instance : Coe (TSyntax ``matchAltExprs) (TSyntax ``matchAlts) where coe x := ⟨x.raw⟩
end

def binderViewtoBracketedBinder (v : BinderView) : CommandElabM $ TSyntax ``Parser.Term.bracketedBinder := do match v.bi with
  | .default =>        `(bb|( $(⟨v.id⟩):ident : $(⟨v.type⟩) ))
  | .implicit =>       `(bb|{ $(⟨v.id⟩):ident : $(⟨v.type⟩) })
  | .strictImplicit => `(bb|⦃ $(⟨v.id⟩):ident : $(⟨v.type⟩) ⦄)
  | .instImplicit =>   `(bb|[ $(⟨v.id⟩):ident : $(⟨v.type⟩) ])

partial def typeToArgArr (type : Term) : Array Term × Term := Prod.map List.toArray id $ go type.raw
  where go
    | Syntax.node _ ``Parser.Term.arrow #[hd, _, tail] => Prod.map (⟨hd⟩ :: ·) id $ go tail
    | rest => ⟨[], ⟨rest⟩⟩

def appsToArgArr (type : Term) : Array Term × Term := match type.raw with
    | Syntax.node _ ``Parser.Term.app #[v, cont] => ⟨cont.getArgs.map (⟨·⟩), ⟨v⟩⟩
    | rest => ⟨#[], ⟨rest⟩⟩

deriving instance Repr for BinderView

def extractName : Syntax → Name
  | .ident _ _ nm _ => nm
  | _ => .anonymous

def generateIs (topView : CoInductiveView) (argArr : Array Ident) (tyArr : Array Term) : CommandElabM Unit := do
  let id := topView.shortDeclName ++ `Invariant

  let isTy ← `($(mkIdent id) $(topView.binders.map (⟨·.id⟩))* $(mkIdent topView.shortDeclName) $argArr*)

  let v : Array (TSyntax ``ctor) ← topView.ctors.mapM $ handleCtor isTy

  let x ← argArr.zip tyArr |>.mapM (fun ⟨id, v⟩ => `(bb| ($id : $v) ))

  -- TODO: Use elabInductiveViews
  let invariant ← `(command|
    inductive $(mkIdent id) $(←topView.binders.mapM binderViewtoBracketedBinder)* ($(topView.shortDeclName |> mkIdent) : $(topView.type)) $x* : Prop := $v*
  )

  trace[Elab.CoInductive] "Generating invariant:"
  trace[Elab.CoInductive] invariant

  let stx ← `(command|
    abbrev $(topView.shortDeclName ++ `Is |> mkIdent) $(←topView.binders.mapM binderViewtoBracketedBinder)* (R : $(topView.type)) : Prop :=
      ∀ { $argArr* }, R $argArr* → $(mkIdent id) $(topView.binders.map (⟨·.id⟩))* R $argArr*)

  trace[Elab.CoInductive] "Generating Is check:"
  trace[Elab.CoInductive] stx

  Elab.Command.elabCommand invariant
  Elab.Command.elabCommand stx

  where
    correctorIterator (loc : Term)
      | ⟨.ident _ _ nm _⟩ :: tla, binderV :: tlb => do
        let .ident _ _ nmx _ := binderV.id | unreachable!
        if nm == nmx then correctorIterator loc tla tlb
        else throwErrorAt loc s!"Expected {binderV.id}"
      | loc :: _, binderV :: _ => throwErrorAt loc s!"Expected {binderV.id}"
      | rest, [] =>
        pure rest
      | [], _ => throwErrorAt loc "Insufficent arguments"

    handleRetty appl arr id := do
      let .ident _ _ nm _ := id.raw  | throwErrorAt id s!"Expected return type to be {topView.declId}" 
      if nm != topView.shortDeclName then throwErrorAt id s!"Expected return type to be {topView.declId}"

      correctorIterator appl arr.toList topView.binders.toList

    -- Removal array × Equational array
    equationalTransformer (loc : Term) : List Term → List Ident → CommandElabM ((List (Ident × Ident)) × (List Term))
      | [], [] => return Prod.mk [] []
      | x@⟨.ident _ _ _ _⟩ :: tla, hdb :: tlb => do
        let ⟨rem, eq⟩ ← equationalTransformer loc tla tlb
        return ⟨(Prod.mk ⟨x.raw⟩ hdb) :: rem, eq⟩
      | hda :: tla, hdb :: tlb => do
        let ⟨rem, eq⟩ ← equationalTransformer loc tla tlb
        return ⟨rem, (←`($hda = $hdb)) :: eq⟩
      | [], _ | _, [] => throwErrorAt loc "Incorrect number of arguments"

    handleCtor isTy view := do
      let nm := view.declName.replacePrefix topView.declName .anonymous

      let .some type := view.type? | throwErrorAt view.ref "An coinductive predicate without a retty could better be expressed inductively" -- TODO: is this the case
      let ⟨args, out⟩ := typeToArgArr type

      let ⟨arr, id⟩ := appsToArgArr out
      let arr ← handleRetty out arr id

      let ⟨eqRpl, eqs⟩ ← equationalTransformer out arr argArr.toList

      let binders := view.binders.filter (fun x => eqRpl.find? (fun v => (extractName x.id) == extractName v.fst.raw) |>.isNone )
      let binders ← binders.mapM binderViewtoBracketedBinder

      let out ← (eqs.toArray ++ args).reverse.foldlM (fun acc curr => `($curr → $acc)) isTy
      let out ← `(ctor| | $(mkIdent nm):ident $binders* : $out)

      let out ← eqRpl.foldlM (fun term ⟨src, rpl⟩ =>
        let src := extractName src
        term.replaceM (fun
          | .ident _ _ nm _ =>
            if nm == src then return some rpl
            else return none
          | _ => return none)) out.raw

      trace[Elab.CoInductive] "Generating ctor"
      trace[Elab.CoInductive] out

      return ⟨out⟩

-- TODO: handle mutual coinductive predicates

def elabCoInductiveViews (views : Array CoInductiveView) : CommandElabM Unit := do
  let view := views[0]!

  let ⟨tyArr, out⟩ := typeToArgArr view.type
  let argArr := (← tyArr.mapM (fun _ => Elab.Term.mkFreshBinderName)).map mkIdent

  let .node _ ``Parser.Term.prop _ := out.raw | throwErrorAt out "Expected return type to be a Prop"

  generateIs view argArr tyArr
  let stx ← `(
    def $(view.shortDeclName |> mkIdent) $(←view.binders.mapM binderViewtoBracketedBinder)* : $(view.type) :=
      fun $argArr* => ∃ R, @$(view.shortDeclName ++ `Is |> mkIdent) $(view.binders.map (⟨·.id⟩)):ident* R ∧ R $argArr* )
  Elab.Command.elabCommand stx

