-- Coinductive currently does only work on Prop

/-- error: Expected return type to be a Prop -/
#guard_msgs in
coinductive S (α : Type) : Type :=
  | cons (hd : α) (tl : S α)

