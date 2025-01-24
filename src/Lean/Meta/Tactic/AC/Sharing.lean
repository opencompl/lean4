/-
Copyright (c) 2024 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Alex Keizer
-/
prelude
import Lean.Meta.Tactic.AC.Main
import Init.Grind.Lemmas

namespace Lean.Meta.AC.Sharing
open Lean Meta

/-! ### Types -/

abbrev VarIndex := Nat

structure VarState where
  /-- The associative and commutative operator we are currently canonicalizing with respect to. -/
  op : Expr
  /-- Map from atomic expressions to an index. -/
  varIndices : Std.HashMap Expr VarIndex := {}
  /-- Inverse of `varIndices`, which maps a `VarIndex` to the expression it represents. -/
  varExprs : Array Expr := #[]
  /-- A cache of confirmed neutral elements -/
  neutralCache : Std.HashSet Expr := {}

/-!
We don't verify the state manipulations, but if we would, these are the invariants:
```
structure LegalVarState extends VarState where
  h_size  : varExprs.size = varIndices.size := by omega
  h_elems : ∀ h_lt : i < varExprs.size, varIndices[varExprs[i]]? = some i
```
-/

/-- A representation of an expression as a map from variable index to the number
of occurences of the expression represented by that variable.

See `CoefficientsMap.toExpr` for the explicit conversion. -/
-- FIXME: @bollu would like this to be `RBMap VarIndex Nat compare`
abbrev CoefficientsMap := Std.HashMap VarIndex Nat

/-! ### VarState monadic boilerplate  -/

abbrev VarStateM  := StateT VarState MetaM

def VarStateM.run' (x : VarStateM α) (s : VarState := {}) : MetaM α :=
  StateT.run' x s

/-! ### Implementation -/

/-- Return a range with all variable indices that have a mapping.

Note that this is always a complete sequence `0, 1, ..., (n-1)`, without skipping
numbers. -/
def getAllVarIndices : VarStateM Std.Range := do
  pure <| [0:(← get).varIndices.size]

/-- Return `true` if `e` is a neutral element for operation `op`.

That is, if an instance of `LawfulIdentity op e` exists -/
def VarStateM.isNeutral (e : Expr) : VarStateM Bool :=
  --TODO: implement
  pure false

/-- Return an arbitrary neutral element for the current operations
(i.e., `VarState.op`), or throw an error if no such element exists -/
def VarStateM.getNeutral : VarStateM Expr :=
  let
  pure (.sort 0)

/-- Return the unique variable index for an expression, or `none` if the expression
is a neutral element (see `isNeutral`).

Modifies the monadic state to add a new mapping and increment the index,
if needed. -/
def VarStateM.exprToVar (e : Expr) : VarStateM (Option VarIndex) := do
  let { varIndices, .. } ← get
  match varIndices[e]? with
  | some idx => return idx
  | none =>
    if ← isNeutral e then
      return none

    let nextIndex := varIndices.size
    modify (fun state@{varIndices, varExprs, ..} => {state with
      varIndices := varIndices.insert e nextIndex
      varExprs := varExprs.push e })
    return nextIndex

/-- Return the expression that is represented by a specific variable index. -/
def VarStateM.varToExpr (idx : VarIndex) : VarStateM Expr := do
  let { varExprs, .. } ← get
  if h : idx < varExprs.size then
    pure varExprs[idx]
  else
    throwError "internal error (this is a bug!): index {idx} out of range, \
      the current state only has {varExprs.size} variables:\n\n{varExprs}"

/-- Given a binary, associative and commutative operation `op`,
decompose expression `e` into its variable coefficients.

For example `a ⊕ b ⊕ (a ⊕ c)` will give the coefficients:
```
a => 2
b => 1
c => 1
```

Any compound expression which is not an application of the given `op` will be
abstracted away and treated as a variable (see `VarStateM.exprToVar`).
-/
def VarStateM.computeCoefficients (op : Expr) (e : Expr) : VarStateM CoefficientsMap :=
  go {} e
where
  incrVar (coe : CoefficientsMap) (e : Expr) : VarStateM CoefficientsMap := do
    let some idx ← exprToVar e | return coe
    return coe.alter idx (fun c => some <| (c.getD 0) + 1)
  go (coe : CoefficientsMap) : Expr → VarStateM CoefficientsMap
  | e@(AC.bin op' x y) => do
      if ← isDefEq op op' then
        let coe ← go coe x
        let coe ← go coe y
        return coe
      else
        incrVar coe e
  | e => incrVar coe e

structure SharedCoefficients where
  common : CoefficientsMap := {}
  x : CoefficientsMap
  y : CoefficientsMap

/-- Given two sets of coefficients `x` and `y` (computed with the same variable
mapping), extract the shared coefficients, such that `x` (resp. `y`) is the sum of
coefficients in `common` and `x` (resp `y`) of the result. -/
def SharedCoefficients.compute (x y : CoefficientsMap) : VarStateM SharedCoefficients := do
  let mut res : SharedCoefficients := { x, y }
  -- FIXME: this could check the size of `x` and `y`, and choose to iterate over
  --  the keys of the smaller map. This would decrease the number of iterations
  --  needed to O(min |x| |y|), but this seems like it would be a non-linear usage
  --  of one of the maps, thus forcing a copy.
  for idx in ← getAllVarIndices do
    match x[idx]?, y[idx]? with
    | some xCnt, some yCnt =>
        let com := min xCnt yCnt
        res := {
          common := res.common.insert idx com
          x := res.x.insert idx (xCnt - com)
          y := res.y.insert idx (yCnt - com)
        }
    | _, _ => pure ()

  return res

/-- Compute the canonical expression for a given set of coefficients.

Returns `none` if all coefficients are zero.
-/
def CoefficientsMap.toExpr (coe : CoefficientsMap) (op : Expr) : VarStateM (Option Expr) := do
  let exprs := (← get).varExprs
  let mut acc := none
  for h : idx in [0:exprs.size] do
    let cnt := coe[idx]?.getD 0
    for _ in [0:cnt] do
      let expr := exprs[idx]
      acc :=
        match acc with
        | none => expr
        | some acc => some <| mkApp2 op acc expr

  return acc

open VarStateM Lean.Meta Lean.Elab Term

/-- Given two expressions `x, y : $ty`, where `ty : Sort $u`, which are equal
up to associativity and commutativity, construct and return a proof of `x = y`.

Uses `ac_nf` internally to contruct said proof. -/
def proveEqualityByAC (u : Level) (ty : Expr) (x y : Expr) : MetaM Expr := do
  let expectedType := mkApp3 (mkConst ``Eq [u]) ty x y
  let proof ← mkFreshExprMVar expectedType
  AC.rewriteUnnormalizedRefl proof.mvarId! -- invoke `ac_rfl`
  instantiateMVars proof

/--
Given an expression `lhs = rhs`, where `lhs, rhs : ty`,
canonicalize top-level applications of some associative and commutative operation
on both the `lhs` and the `rhs` such that the final expression is:
  `$common ⊕ $lhs' = $common ⊕ $rhs'`
That is, in a way that exposes terms that are shared between the lhs and rhs.

Note that if both lhs and rhs are applications of a *different* operation, we
canonicalize according to the *left* operation, meaning we treat the entire rhs
as an atom. This is still useful, as it will pull out an occurence of the rhs
in the lhs (if present) to the front (such an occurence would be the common
expression). For example `x + y + ((x * y) + x) = x * y` will be canonicalized
to `(x * y) + ... = x * y`
-/
def canonicalizeEqWithSharing (ty lhs rhs : Expr) : SimpM Simp.Step := do
  withTraceNode  `Meta.AC (fun _ => pure m!"canonicalizeEqWithSharing: {lhs} = {rhs}") <| do

  let u ← getLevel ty
  let op ← match lhs with
    | AC.bin op _ _ => pure op
    | _             => let AC.bin op .. := rhs | return .continue
                       pure op

  -- Check that `op` is associative and commutative, so that we don't get
  -- inscrutable errors later. If it's not, bail out.
  let some _ ← AC.getInstance ``Std.Associative #[op] | return .continue
  let some _ ← AC.getInstance ``Std.Commutative #[op] | return .continue

  VarStateM.run' <| do
    let lCoe ← computeCoefficients op lhs
    let rCoe ← computeCoefficients op rhs

    let ⟨commonCoe, lCoe, rCoe⟩ ← SharedCoefficients.compute lCoe rCoe
    let commonExpr? : Option Expr ← commonCoe.toExpr op
    let lNew? : Option Expr ← lCoe.toExpr op
    let rNew? : Option Expr ← rCoe.toExpr op

    -- FIXME: Sid would appreciate examples where commonExpr? and lNew? can be none.
    -- Since commonExpr + lCoe_{new} = lCoe_{old}, and lCoe_{old} ≠ 0,
    -- it is only possible for both `commonExpr?` and `lNew?` to be none if
    -- `lhs` contains only neutral elements, in which case we default to
    -- `lNew` being some canonical neutral element.
    let lNew ← Option.merge (mkApp2 op) commonExpr? lNew? |>.getDM getNeutral
    let rNew ← Option.merge (mkApp2 op) commonExpr? rNew? |>.getDM getNeutral

    let lEq : Expr /- of type `$lhs = $lNew` -/ ← proveEqualityByAC u ty lhs lNew
    let rEq : Expr /- of type `$rhs = $rNew` -/ ← proveEqualityByAC u ty rhs rNew

    let expr : Expr /- `$xNew = $yNew` -/ := -- @Eq (BitVec ?w) _ _
      mkApp3 (.const ``Eq [u]) ty lNew rNew

    let proof : Expr /- of type `($x = $y) = ($xNew = $yNew)` -/ :=
      mkAppN (mkConst ``Grind.eq_congr [u])
        #[ty, lhs, rhs, lNew, rNew, lEq, rEq]

    trace[Meta.AC] "rewrote to:\n\t{expr}"
    return Simp.Step.continue <| some {
      expr := expr
      proof? := some proof
    }

def post : Simp.Simproc := fun e => do
  match_expr e with
  | Eq ty lhs rhs => canonicalizeEqWithSharing ty lhs rhs
  | _ =>
    let mkApp2 op _ _ := e | return .continue
    match (← Simp.getContext).parent? with
    -- Note: the order of the following match-arms is significant, as `canonicalizeEqWithSharing`
    -- is biased towards the operation of the left-hand-side of the equality, if present.
    | mkApp3 (.const ``Eq _) _ (mkApp2 op' _ _) _
    | mkApp3 (.const ``Eq _) _ _ (mkApp2 op' _ _) =>
      if (← isDefEq op op') then
        -- In this case, the current expression will already be canonicalized by
        -- `canonicalizeEqWithSharing`, hence, we don't call regular ac_nf on it
        return .continue
      else
        AC.post e
    | _ => AC.post e

def rewriteUnnormalizedWithSharing (mvarId : MVarId) : MetaM MVarId := do
  let simpCtx ← Simp.mkContext
      (simpTheorems  := {})
      (congrTheorems := (← getSimpCongrTheorems))
      (config        := Simp.neutralConfig)
  let tgt ← instantiateMVars (← mvarId.getType)
  let (res, _) ← Simp.main tgt simpCtx (methods := { post := post })
  applySimpResultToTarget mvarId tgt res


/-! ## Tactic Boilerplate -/

open Tactic

def acNfHypMeta (goal : MVarId) (fvarId : FVarId) : MetaM (Option MVarId) := do
  goal.withContext do
    let simpCtx ← Simp.mkContext
      (simpTheorems  := {})
      (congrTheorems := (← getSimpCongrTheorems))
      (config        := Simp.neutralConfig)
    let tgt ← instantiateMVars (← fvarId.getType)
    let (res, _) ← Simp.main tgt simpCtx (methods := { post })
    return (← applySimpResultToLocalDecl goal fvarId res false).map (·.snd)

/-- Implementation of the `ac_nf'` tactic when operating on the main goal. -/
def acNfTargetTactic : TacticM Unit :=
  liftMetaTactic1 fun goal => rewriteUnnormalizedWithSharing goal

/-- Implementation of the `ac_nf'` tactic when operating on a hypothesis. -/
def acNfHypTactic (fvarId : FVarId) : TacticM Unit :=
  liftMetaTactic1 fun goal => acNfHypMeta goal fvarId

open Lean.Parser.Tactic (location) in
elab "ac_nf'" loc?:(location)? : tactic => do
  let loc := match loc? with
  | some loc => expandLocation loc
  | none => Location.targets #[] true
  withMainContext do
    match loc with
    | Location.targets hyps target =>
      if target then acNfTargetTactic
      (← getFVarIds hyps).forM acNfHypTactic
    | Location.wildcard =>
      acNfTargetTactic
      (← (← getMainGoal).getNondepPropHyps).forM acNfHypTactic
