set_option linter.unusedVariables false

opaque f (x y : Nat) : Nat
opaque g (x : Nat) : Nat

theorem ex1 (x : Nat) (h₁ : f x x = g x) (h₂ : g x = x) : f x (f x x) = x := by
  fail_if_success simp
  simp [*]

theorem ex2 (x : Nat) (h₁ : f x x = g x) (h₂ : g x = x) : f x (f x x) = x := by
  simp [*]

axiom g_ax (x : Nat) : g x = 0

/--
trace: x y : Nat
h₁ : f x x = g x
h₂ : g x < 5
⊢ g x + g x = 0
-/
#guard_msgs in
theorem ex3 (x y : Nat) (h₁ : f x x = g x) (h₂ : f x x < 5) : f x x + f x x = 0 := by
  simp [*, -Nat.add_eq_zero] at *
  trace_state
  have aux₁ : f x x = g x := h₁
  have aux₂ : g x < 5     := h₂
  simp [g_ax]
