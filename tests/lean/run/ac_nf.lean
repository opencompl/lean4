import Lean
/-!
# Tests for normalization up to associativity and commutativity
-/

open Lean

/-- warning: declaration uses 'sorry' -/
theorem bv_ac_nf_docstring (x₁ x₂ y z : BitVec 4) :
    x₁ * y * y * z * z = x₂ * z * z * y * y := by
  bv_ac_nf
  guard_target =ₛ (y * y * z * z * x₁ = y * y * z * z * x₂)
  sorry

/-- warning: declaration uses 'sorry' -/
#guard_msgs in
theorem mul_mul_eq_mul_mul (x₁ x₂ y₁ y₂ z : BitVec 4) (h₁ : x₁ = x₂) (h₂ : y₁ = y₂) :
    x₁ * (y₁ * z) = x₂ * (y₂ * z) := by
  bv_ac_nf
  guard_target =ₛ z * (x₁ * y₁) = z * (x₂ * y₂)
  sorry

theorem ex_1 (x y z k₁ k₂ l₁ l₂ m₁ m₂ v : BitVec w)
    (h₁ : k₁ = k₂) (h₂ : l₁ = l₂) (h₃ : m₁ = m₂) :
    m₁ * x * (y * l₁ * k₁) * z = v * (k₂ * l₂ * x * y) * z * m₂ := by
  bv_ac_nf
  guard_target =ₛ x * y * z * (m₁ * l₁ * k₁) = x * y * z * (v * k₂ * l₂ * m₂)
  sorry

theorem ex_2 (x y : BitVec w) (h₁ : y = x) :
    x * x * x * x = y * x * x * y := by
  bv_ac_nf
  guard_target =ₛ x * x * (x * x) = x * x * (y * y)
  sorry

-- This theorem is short-circuited and scales to standard bitwidths.
/-- warning: declaration uses 'sorry' -/
#guard_msgs in
theorem mul_eq_mul_eq_right (x y z : BitVec 64) (h : x = y) :
    x * z = y * z := by
  bv_ac_nf
  guard_target =ₛ z * x = z * y
  sorry

-- This theorem is short-circuited and scales to standard bitwidths.
/-- warning: declaration uses 'sorry' -/
#guard_msgs in
theorem mul_eq_mul_eq_left (x y z : BitVec 64) (h : x = y) :
    z * x = z * y := by
  bv_ac_nf
  guard_target =ₛ z * x = z * y
  sorry

/-- warning: declaration uses 'sorry' -/
#guard_msgs in
theorem short_circuit_triple_mul (x x_1 x_2 : BitVec 32) (h : ¬x_2 &&& 4096#32 == 0#32) :
    (x_1 ||| 4096#32) * x * (x_1 ||| 4096#32) = (x_1 ||| x_2 &&& 4096#32) * x * (x_1 ||| 4096#32) := by
  bv_ac_nf
  guard_target =ₛ
    ((x_1 ||| 4096#32) * x) * (x_1 ||| 4096#32)
    = ((x_1 ||| 4096#32) * x) * (x_1 ||| x_2 &&& 4096#32)
  sorry

theorem add_mul_mixed (x y z : BitVec 64) :
    z * (y + x) = (y + x) * z := by
  bv_ac_nf; rfl

theorem add_mul_mixed' (x y z : BitVec 64)
    (h : z * (x + y) = x + y) :
    z * (x + y) = (x + y) := by
  bv_ac_nf; exact h

/-! ### Scaling Test -/

/-- `repeat_add $n with $t` expands to `$t + $t + ... + $t`, with `n` repetitions
of `t` -/
local macro "repeat_mul" n:num "with" x:term  : term =>
  let rec go : Nat → MacroM Term
    | 0   => `($x)
    | n+1 => do
      let r ← go n
      `($r * $x)
  go n.getNat

/-
This test showcases that the runtime of `bv_ac_nf` is not a bottleneck:
* Testing with 100 as the repetition amount runs in about 200ms with `skipKernelTC` set,
    or ~3.3 seconds without (c.q. 2.3s for `ac_rfl`), and
* Putting in 125 for the repetition amount wil give a `maximum recursion depth has been reached`
    error thrown by simp anyway, so the runtime is not a limiting factor to begin with.
-/
set_option debug.skipKernelTC true in
example (x y : BitVec 64) :
    (repeat_mul 100 with x * y) = (repeat_mul 100 with x) * (repeat_mul 100 with y) := by
  bv_ac_nf; rfl
