/-
Copyright (c) 2024 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Alex Keizer
-/
prelude
import Lean.Meta.Tactic.AC.Main
import Lean.Elab.Tactic.BVDecide.Frontend.Normalize.Basic
import Init.Grind.Lemmas

namespace Lean.Elab.Tactic.BVDecide
namespace Frontend.Normalize

open Lean Meta

/-! ### Types -/

abbrev AtomIndex := Nat

/-- The associative commutative operator we are canonicalizing with respect to -/
inductive OpKind
| mul
deriving DecidableEq, Hashable, Repr


structure VarState where
  /-- Map from atomic expressions to an index. -/
  exprToAtomIndex : Std.HashMap Expr AtomIndex := {}

/-- A representation of an expression as a map from variable index to the number
of occurences of the expression represented by that variable.

See `CoefficientsMap.toExpr` for the explicit conversion. -/
abbrev CoefficientsMap := Std.HashMap AtomIndex Nat

/-! ### AtomM monadic boilerplate  -/

abbrev AtomM  := ReaderT Context (StateT VarState MetaM)

def AtomM.run' (x : AtomM α) (ctx : Context) (s : VarState) : MetaM α :=
  x.run ctx |>.run' s

namespace AtomM

def isNeutral (op : OpKind) (e : Expr) : AtomM Bool := do
  match op with
  | .mul =>
    let some ⟨n, v⟩ ← getBitVecValue? e | return false
    return v == 1#n

def mkAtom (e : Expr) : AtomM AtomIndex := do
  let { exprToAtomIndex, .. } ← get
  match exprToAtomIndex[e]? with
  | some idx => return idx
  | none =>
    -- Insert new atom.
    let nextIndex := exprToAtomIndex.size
    modify fun state@{exprToAtomIndex, ..} => { state with
      exprToAtomIndex := exprToAtomIndex.insert e nextIndex
    }
    return nextIndex

def getKind (e : Expr) : AtomM (Option OpKind) :=
  match_expr e with
  | HMul.hMul _α _β _γ _inst _a _b =>
     return some .mul
  | _ => return none

def normalizeCoeffsEq (lhs rhs : Expr) : AtomM (CoefficientsMap × CoefficientsMap) := do
  sorry

structure NormalizeEqMulResult where
  left' : Expr
  right' : Expr

def _normalizeEqMul (lhs rhs : Expr) (cf0 cf1 : CoefficientsMap) : AtomM NormalizeEqMulResult := do
  sorry

/--
Given two expressions `x, y` which are equal up to associativity and commutativity,
construct and return a proof of `x = y`.

Uses `ac_nf` internally to contruct said proof. -/
def proveEqualityByAC (x y : Expr) : MetaM Expr := do
  let expectedType ← mkEq x y
  let proof ← mkFreshExprMVar expectedType
  AC.rewriteUnnormalizedRefl proof.mvarId! -- invoke `ac_rfl`
  instantiateMVars proof


structure NormalizeEqResult where
  result : Expr
  eqProof : Expr


/--
Note: In Bitwuzla, this is known as 'normalizeEqAddMul'
-/
def normalizeEq (op : OpKind) (lhs rhs : Expr) : AtomM NormalizeEqResult := do
  let (coeffs0, coeffs1) ← normalizeCoeffsEq lhs rhs
  let result ← match op with
    | .mul => _normalizeEqMul lhs rhs coeffs0 coeffs1
  -- let lhsEqProof := sorry
  sorry -- (lhs, rhs, true)


structure SharedCoefficients where
  common : CoefficientsMap := {}
  x : CoefficientsMap
  y : CoefficientsMap

/-- Return a range with all variable indices that have a mapping.

Note that this is always a complete sequence `0, 1, ..., (n-1)`, without skipping
numbers. -/
def getAllVarIndices : AtomM Std.Range := do
  pure <| [0:(← get).exprToAtomIndex.size]


/-- Given two sets of coefficients `x` and `y` (computed with the same variable
mapping), extract the shared coefficients, such that `x` (resp. `y`) is the sum of
coefficients in `common` and `x` (resp `y`) of the result.

That is, if `{ common, x', y' } ← SharedCoeffients.compute x y`, then
  `x[idx] = common[idx] + x'[idx]` and
  `y[idx] = common[idx] + y'[idx]`
for all valid variable indices `idx`.
-/
def SharedCoefficients.compute (x y : CoefficientsMap) : AtomM SharedCoefficients := do
  let mut res : SharedCoefficients := { x, y }
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


/-- Given a binary, associative and commutative operation `op`,
decompose expression `e` into its variable coefficients.

For example `a ⊕ b ⊕ (a ⊕ c)` will give the coefficients:
```
a => 2
b => 1
c => 1
```

Any compound expression which is not an application of the given `op` will be
abstracted away and treated as a variable (see `AtomM.mkAtom`).
-/
def computeCoefficients (op : Expr) (e : Expr) : AtomM CoefficientsMap :=
  go {} e
where
  incrVar (coeff : CoefficientsMap) (e : Expr) : AtomM CoefficientsMap := do
    let idx ← mkAtom e
    return coeff.alter idx (fun c => some <| (c.getD 0) + 1)
  go (coeff : CoefficientsMap) : Expr → AtomM CoefficientsMap
  | e@(AC.bin op' x y) => do
      if ← isDefEq op op' then
        let coeff ← go coeff x
        let coeff ← go coeff y
        return coeff
      else
        incrVar coeff e
  | e => incrVar coeff e


/--
Compute the canonical expression for a given set of coefficients.
Returns `none` if all coefficients are zero.
-/
def CoefficientsMap.toExpr (coeff : CoefficientsMap) (op : Expr) : AtomM Expr := do
  let exprs := (← get).varExprs
  let mut acc := none
  -- Note: we iterate over indices directly to ensure a canonical order of variables in the
  -- returned expression. Iterating over `coeff` seems more efficient, but would not be canonical.
  for h : idx in [0:exprs.size] do
    let cnt := coeff[idx]?.getD 0
    for _ in [0:cnt] do
      let expr := exprs[idx]
      acc :=
        match acc with
        | none => expr
        | some acc => some <| mkApp2 op acc expr

  return acc


/-
structure VarState where
  /-- The associative and commutative operator we are currently canonicalizing with respect to. -/
  op : OpKind
  /-- Map from atomic expressions to an index. -/
  exprToAtomIndex : Std.HashMap Expr AtomIndex := {}

def VarState.varExprs (s : VarState) : Array Expr := Id.run do
  let mut exprs : Array Expr := mkArray s.exprToAtomIndex.size default
  for (e, i) in s.exprToAtomIndex do
    exprs := exprs.set! i e
  return exprs

/-!
We don't verify the state manipulations, but if we would, these are the invariants:
```
structure LegalVarState extends VarState where
  h_size  : varExprs.size = exprToAtomIndex.size := by omega
  h_elems : ∀ h_lt : i < varExprs.size, exprToAtomIndex[varExprs[i]]? = some i
```
-/

/-- A representation of an expression as a map from variable index to the number
of occurences of the expression represented by that variable.

See `CoefficientsMap.toExpr` for the explicit conversion. -/
abbrev CoefficientsMap := Std.HashMap AtomIndex Nat

/-! ### VarState monadic boilerplate  -/

abbrev AtomM  := StateT VarState MetaM

def AtomM.run' (x : AtomM α) (s : VarState) : MetaM α :=
  StateT.run' x s

/-! ### Implementation -/


/-- Return `true` if `e` is a neutral element for operation `op`.
That is, if an instance of `LawfulIdentity op e` exists -/
def AtomM.isNeutral (op : OpKind) (e : Expr) : AtomM Bool := do
  match op with
  | .add =>
    let some ⟨n, v⟩ ← getBitVecValue? e | return false
    return v == 0#n
  | .mul =>
    let some ⟨n, v⟩ ← getBitVecValue? e | return false
    return v == 1#n

/-- Return the unique variable index for an expression, or `none` if the expression
is a neutral element (see `isNeutral`).

Modifies the monadic state to add a new mapping and increment the index,
if needed. -/
def AtomM.mkAtom (e : Expr) : AtomM (Option AtomIndex) := do
  let { exprToAtomIndex, .. } ← get
  match exprToAtomIndex[e]? with
  | some idx => return idx
  | none =>
    if ← isNeutral e then
      return none

    -- TODO: is this linear usage?
    let nextIndex := exprToAtomIndex.size
    modify fun state@{exprToAtomIndex, ..} => { state with
      exprToAtomIndex := varIndices.insert e nextIndex
    }
    return nextIndex

/-- Return the expression that is represented by a specific variable index. -/
def AtomM.varToExpr (idx : AtomIndex) : AtomM Expr := do
  let varExprs := (← get).varExprs
  if h : idx < varExprs.size then
    pure varExprs[idx]
  else
    throwError "internal error (this is a bug!): index {idx} out of range, \
      the current state only has {varExprs.size} variables:\n\n{varExprs}"
open AtomM Lean.Meta Lean.Elab Term


/--
Given two expressions `x, y` which are equal up to associativity and commutativity,
construct and return a proof of `x = y`.

Uses `ac_nf` internally to contruct said proof. -/
def proveEqualityByAC (x y : Expr) : MetaM Expr := do
  let expectedType ← mkEq x y
  let proof ← mkFreshExprMVar expectedType
  AC.rewriteUnnormalizedRefl proof.mvarId! -- invoke `ac_rfl`
  instantiateMVars proof
-/

end AtomM

/--
Given an expression `P lhs rhs`, where `lhs, rhs : ty` and `P : $ty → $ty → _`,
canonicalize top-level applications of some associative and commutative operation
on both the `lhs` and the `rhs` such that the final expression is:
  `P ($common ⊕ $lhs') ($common ⊕ $rhs')`
That is, in a way that exposes terms that are shared between the lhs and rhs.

Note that if both lhs and rhs are applications of a *different* operation, we
canonicalize according to the *left* operation, meaning we treat the entire rhs
as an atom. This is still useful, as it will pull out an occurence of the rhs
in the lhs (if present) to the front (such an occurence would be the common
expression). For example `x + y + ((x * y) + x) = x * y` will be canonicalized
to `(x * y) + ... = x * y`
-/
def canonicalizeWithSharing (P : Expr) (ty lhs rhs : Expr) : SimpM Simp.Step := do
  withTraceNode (collapsed := true)  `Meta.AC (fun _ => pure m!"canonicalizeWithSharing") <| do

  let u ← getLevel ty
  let op ← match lhs with
    | AC.bin op _ _ => pure op
    | _             => let AC.bin op .. := rhs | return .continue
                       pure op

  -- Check that `op` is associative and commutative, so that we don't get
  -- inscrutable errors later. If it's not, bail out.
  let some _ ← AC.getInstance ``Std.Associative #[op] | return .continue
  let some _ ← AC.getInstance ``Std.Commutative #[op] | return .continue

  AtomM.run' (s:= { }) <| do
    let lCoeff ← AtomM.computeCoefficients op lhs
    let rCoeff ← AtomM.computeCoefficients op rhs

    let ⟨commonCoeff, lCoeff, rCoeff⟩ ← AtomM.SharedCoefficients.compute lCoeff rCoeff
    let commonExpr? : Option Expr ← commonCoeff.toExpr op
    let lNew? : Option Expr ← lCoeff.toExpr op
    let rNew? : Option Expr ← rCoeff.toExpr op

    -- Since `lCoeff_{old} = commonCoeff + lCoeff_{new}`, and all coefficients
    -- of `lCoeff_{old}` are zero iff `lExpr` contains only neutral elements,
    -- we default to `lNew` being some canonical neutral element if both
    -- `commonExpr?` and `lNew?` are `none`.
    let lNew ← Option.merge (mkApp2 op) commonExpr? lNew? |>.getDM getNeutral
    let rNew ← Option.merge (mkApp2 op) commonExpr? rNew? |>.getDM getNeutral

    let oldExpr := mkApp2 P lhs rhs
    let expr := mkApp2 P lNew rNew

    let proof ← proveEqualityByAC oldExpr expr

    trace[Meta.AC] "rewrote to:\n\t{expr}"
    return Simp.Step.continue <| some {
      expr := expr
      proof? := some proof
    }

def post : Simp.Simproc := fun e => do
  match_expr e with
  | Eq ty lhs rhs =>
      let u ← getLevel ty
      let P := mkApp (.const ``Eq [u]) ty
      canonicalizeWithSharing P ty lhs rhs
  | BEq.beq ty inst lhs rhs =>
      let uLvl ← getDecLevel ty
      let P := mkApp2 (.const ``BEq.beq [uLvl]) ty inst
      canonicalizeWithSharing P ty lhs rhs
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

def acNfHypMeta' (goal : MVarId) (fvarId : FVarId) : MetaM (Option MVarId) := do
  goal.withContext do
    let simpCtx ← Simp.mkContext
      (simpTheorems  := {})
      (congrTheorems := (← getSimpCongrTheorems))
      (config        := Simp.neutralConfig)
    let tgt ← instantiateMVars (← fvarId.getType)
    let (res, _) ← Simp.main tgt simpCtx (methods := { post })
    return (← applySimpResultToLocalDecl goal fvarId res false).map (·.snd)

/-- Implementation of the `ac_nf'` tactic when operating on the main goal. -/
def acNfTargetTactic' : TacticM Unit := do
  liftMetaTactic1 fun goal => rewriteUnnormalizedWithSharing goal

/-- Implementation of the `ac_nf'` tactic when operating on a hypothesis. -/
def acNfHypTactic' (fvarId : FVarId) : TacticM Unit :=
  liftMetaTactic1 fun goal => acNfHypMeta' goal fvarId

example (x y : Nat) : x + y = y + x :=  by ac_nf

def acNormalizePass : Pass where
  name := `ac_nf
  run' goal := do
    let mut newGoal := goal
    for hyp in (← goal.getNondepPropHyps) do
      if let .some nextGoal ← acNfHypMeta' newGoal hyp then
        newGoal := nextGoal
    return newGoal

open Lean.Parser.Tactic (location) in
/--
`bv_ac_nf` normalizes equalities up to application of an associative and commutative operator,
in a way that exposes common terms among both sides of an equality.
- `ac_nf'` normalizes all hypotheses and the goal target of the goal.
- `ac_nf' at l` normalizes at location(s) `l`, where `l` is either `*` or a
  list of hypotheses in the local context. In the latter case, a turnstile `⊢` or `|-`
  can also be used, to signify the target of the goal.

`bv_ac_nf'` differs from `bv_ac_nf` in how the canonical form of the left-hand-side of
an equality can depend on the right-hand-side, in particular, to expose shared terms.
For example, `x₁ * (y₁ * z) = x₂ * (y₂ * z)` is normalized to
`z * (x₁ * y₁) = z * (x₂ * y₂)`, pulling the shared variable `z` to the front on
both sides.
-/
elab "bv_ac_nf" loc?:(location)? : tactic => do
  let loc := match loc? with
  | some loc => expandLocation loc
  | none => Location.targets #[] true
  withMainContext do
    match loc with
    | Location.targets hyps target =>
      if target then do
        acNfTargetTactic'
      (← getFVarIds hyps).forM acNfHypTactic'
    | Location.wildcard =>
      acNfTargetTactic'
      (← (← getMainGoal).getNondepPropHyps).forM acNfHypTactic'


section Examples


/--
info: a b c d : Nat
⊢ a * b * (c + d) = a * b * (c + d)
-/
#guard_msgs in example {a b c d : Nat} : (a * b * (d + c)) = (b * a * (c + d)) := by
  bv_ac_nf
  trace_state
  rfl

/--
info: a b c d : BitVec 8
⊢ (a * b * (c + d) == a * b * (c + d)) = true
-/
#guard_msgs in example {a b c d : BitVec 8} : (a * b * (d + c)) == (b * a * (c + d)) := by
  bv_ac_nf
  trace_state
  simp
