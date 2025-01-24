import Lean
import Lean.Meta.Tactic.AC.Sharing -- TODO: this should be imported somewhere such that it is included in the `import Lean` above
/-!
# Tests for normalization up to associativity and commutativity
-/

open Lean

theorem mul_mul_eq_mul_mul (x₁ x₂ y₁ y₂ z : BitVec 4) (h₁ : x₁ = x₂) (h₂ : y₁ = y₂) :
    x₁ * (y₁ * z) = x₂ * (y₂ * z) := by
  ac_nf'
  show z * (x₁ * y₁) = z * (x₂ * y₂)
  sorry

-- This theorem is short-circuited and scales to standard bitwidths.
theorem mul_eq_mul_eq_right (x y z : BitVec 64) (h : x = y) :
    x * z = y * z := by
  ac_nf'
  show z * x = z * y
  sorry

-- This theorem is short-circuited and scales to standard bitwidths.
theorem mul_eq_mul_eq_left (x y z : BitVec 64) (h : x = y) :
    z * x = z * y := by
  ac_nf'
  show z * x = z * y
  sorry

theorem short_circuit_triple_mul (x x_1 x_2 : BitVec 32) (h : ¬x_2 &&& 4096#32 == 0#32) :
    (x_1 ||| 4096#32) * x * (x_1 ||| 4096#32) = (x_1 ||| x_2 &&& 4096#32) * x * (x_1 ||| 4096#32) := by
  ac_nf'
  sorry

/-! ### Scaling Test -/

/-- `repeat_add $n with $t` expands to `$t + $t + ... + $t`, with `n` repetitions
of `t` -/
local macro "repeat_add" n:num "with" x:term  : term =>
  let rec go : Nat → MacroM Term
    | 0   => `($x)
    | n+1 => do
      let r ← go n
      `($r + $x)
  go n.getNat

/-
This test showcases that the runtime of `ac_nf'` is not a bottleneck:
* The current example runs in about 250ms with a disabled kernel, or ~5 seconds with,
    showing that the tactic runtime is tiny compared to the proof-checking time, and
* Putting in 125 for the repitition amount wil give a `maximum recursion depth has been reached`
    error thrown by simp anyway, so the runtime is not a limiting factor to begin with.
-/
set_option debug.skipKernelTC true in
example (x y : BitVec 64) :
    (repeat_add 124 with x + y) = (repeat_add 124 with x) + (repeat_add 124 with y) := by
  ac_nf'; rfl
