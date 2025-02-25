/-
Copyright (c) 2025 Amazon.com, Inc. or its affiliates. All Rights Reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
prelude
import Lean.Meta.Tactic.Simp.Arith.Int
import Lean.Meta.Tactic.Grind.PropagatorAttr
import Lean.Meta.Tactic.Grind.Arith.Cutsat.Var
import Lean.Meta.Tactic.Grind.Arith.Cutsat.Proof

namespace Lean.Meta.Grind.Arith.Cutsat
/--
`gcdExt a b` returns the triple `(g, α, β)` such that
- `g = gcd a b` (with `g ≥ 0`), and
- `g = α * a + β * β`.
-/
partial def gcdExt (a b : Int) : Int × Int × Int :=
  if b = 0 then
    (a.natAbs, if a = 0 then 0 else a / a.natAbs, 0)
  else
    let (g, α, β) := gcdExt b (a % b)
    (g, β, α - (a / b) * β)

abbrev DvdCnstrWithProof.isUnsat (cₚ : DvdCnstrWithProof) : Bool :=
  cₚ.c.isUnsat

abbrev DvdCnstrWithProof.isTrivial (cₚ : DvdCnstrWithProof) : Bool :=
  cₚ.c.isTrivial

def DvdCnstrWithProof.norm (cₚ : DvdCnstrWithProof) : DvdCnstrWithProof :=
  let cₚ := if cₚ.c.isSorted then cₚ else { cₚ with c.p := cₚ.c.p.norm, h := .norm cₚ }
  let g := cₚ.c.p.gcdCoeffs cₚ.c.k
  if cₚ.c.p.getConst % g == 0 then
    { cₚ with c := cₚ.c.div g, h := .divCoeffs cₚ }
  else
    cₚ

/-- Asserts divisibility constraint. -/
partial def assertDvdCnstr (cₚ : DvdCnstrWithProof) : GoalM Unit := withIncRecDepth do
  if (← isInconsistent) then return ()
  let cₚ := cₚ.norm
  if cₚ.isUnsat then
    trace[grind.cutsat.dvd.unsat] "{← cₚ.denoteExpr}"
    withProofContext do
      let h ← cₚ.toExprProof
      let heq := mkApp3 (mkConst ``Int.Linear.DvdCnstr.eq_false_of_isUnsat) (← getContext) (toExpr cₚ.c) reflBoolTrue
      let c ← cₚ.denoteExpr
      let heq ← mkExpectedTypeHint heq (← mkEq c (← getFalseExpr))
      closeGoal (← mkEqMP heq h)
  else if cₚ.isTrivial then
    trace[grind.cutsat.dvd.trivial] "{← cₚ.denoteExpr}"
    return ()
  else
    let d₁ := cₚ.c.k
    let .add a₁ x p₁ := cₚ.c.p
      | throwError "internal `grind` error, unexpected divisibility constraint {indentExpr (← cₚ.denoteExpr)}"
    if let some cₚ' := (← get').dvdCnstrs[x]! then
      trace[grind.cutsat.dvd.solve] "{← cₚ.denoteExpr}, {← cₚ'.denoteExpr}"
      let d₂ := cₚ'.c.k
      let .add a₂ _ p₂ := cₚ'.c.p
        | throwError "internal `grind` error, unexpected divisibility constraint {indentExpr (← cₚ'.denoteExpr)}"
      let (d, α, β) := gcdExt (a₁*d₂) (a₂*d₁)
      /-
      We have that
      `d = α*a₁*d₂ + β*a₂*d₁`
      `d = gcd (a₁*d₂) (a₂*d₁)`
      and two implied divisibility constraints:
      - `d₁*d₂ ∣ d*x + α*d₂*p₁ + β*d₁*p₂`
      - `d ∣ a₂*p₁ - a₁*p₂`
      -/
      let α_d₂_p₁ := p₁.mul (α*d₂)
      let β_d₁_p₂ := p₂.mul (β*d₁)
      let combine := { c.k := d₁*d₂, c.p := .add d x (α_d₂_p₁.combine β_d₁_p₂), h := .solveCombine cₚ cₚ' }
      trace[grind.cutsat.dvd.solve.combine] "{← combine.denoteExpr}"
      modify' fun s => { s with dvdCnstrs := s.dvdCnstrs.set x none}
      assertDvdCnstr combine
      let a₂_p₁ := p₁.mul a₂
      let a₁_p₂ := p₂.mul (-a₁)
      let elim := { c.k := d, c.p := a₂_p₁.combine a₁_p₂, h := .solveElim cₚ cₚ' }
      trace[grind.cutsat.dvd.solve.elim] "{← elim.denoteExpr}"
      assertDvdCnstr elim
    else
      trace[grind.cutsat.dvd.update] "{← cₚ.denoteExpr}"
      modify' fun s => { s with dvdCnstrs := s.dvdCnstrs.set x (some cₚ) }

builtin_grind_propagator propagateDvd ↓Dvd.dvd := fun e => do
  let_expr Dvd.dvd _ inst a b ← e | return ()
  unless (← isInstDvdInt inst) do return ()
  let some k ← getIntValue? a
    | reportIssue! "non-linear divisibility constraint found{indentExpr e}"
      return ()
  if (← isEqTrue e) then
    let p ← toPoly b
    let cₚ := { c.k := k, c.p := p, h := .expr (← mkOfEqTrue (← mkEqTrueProof e)) }
    trace[grind.cutsat.assert.dvd] "{← cₚ.denoteExpr}"
    assertDvdCnstr cₚ
  else if (← isEqFalse e) then
    /-
    TODO: we have `¬ a ∣ b`, we should assert
    `∃ x z, b = a*x + z ∧ 1 ≤ z < a`
    -/
    return ()

end Lean.Meta.Grind.Arith.Cutsat
