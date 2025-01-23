import Lean
import Lean.Meta.Tactic.AC.Sharing -- TODO: this should be imported somewhere such that it is included in the `import Lean` above
/-!
# Tests for normalization up to associativity and commutativity
-/

open Lean

theorem mul_mul_eq_mul_mul (x₁ x₂ y₁ y₂ z : BitVec 4) (h₁ : x₁ = x₂) (h₂ : y₁ = y₂) :
    x₁ * (y₁ * z) = x₂ * (y₂ * z) := by
  ac_nf!
  show z * (x₁ * y₁) = z * (x₂ * y₂)
  sorry

-- This theorem is short-circuited and scales to standard bitwidths.
theorem mul_eq_mul_eq_right (x y z : BitVec 64) (h : x = y) :
    x * z = y * z := by
  ac_nf!
  show z * x = z * y
  sorry

-- This theorem is short-circuited and scales to standard bitwidths.
theorem mul_eq_mul_eq_left (x y z : BitVec 64) (h : x = y) :
    z * x = z * y := by
  ac_nf!
  show z * x = z * y
  sorry

theorem short_circuit_triple_mul (x x_1 x_2 : BitVec 32) (h : ¬x_2 &&& 4096#32 == 0#32) :
    (x_1 ||| 4096#32) * x * (x_1 ||| 4096#32) = (x_1 ||| x_2 &&& 4096#32) * x * (x_1 ||| 4096#32) := by
  ac_nf!
  sorry
