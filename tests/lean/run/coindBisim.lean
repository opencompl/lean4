structure FSM where
  S : Type
  d : S → Nat → S
  A : S → Prop

-- Example of a coinductive predicate defined over FSMs

coinductive Bisim (fsm : FSM) : fsm.S → fsm.S → Prop :=
  | step {s t : fsm.S} :
    (fsm.A s ↔ fsm.A t)
    → (∀ c, Bisim fsm (fsm.d s c) (fsm.d t c))
    → Bisim fsm s t

/--
info: inductive Bisim.Shape : (fsm : FSM) → ((fsm : FSM) → fsm.S → fsm.S → Prop) → fsm.S → fsm.S → Prop
number of parameters: 4
constructors:
Bisim.Shape.step : ∀ {fsm : FSM} {Bisim : (fsm : FSM) → fsm.S → fsm.S → Prop} {s t : fsm.S},
  (fsm.A s ↔ fsm.A t) → (∀ (c : Nat), Bisim fsm (fsm.d s c) (fsm.d t c)) → Bisim.Shape fsm Bisim s t
-/
#guard_msgs in
#print Bisim.Shape

/--
info: @[reducible] def Bisim.Is : FSM → ((fsm : FSM) → fsm.S → fsm.S → Prop) → Prop :=
fun fsm x => ∀ {x_1 x_2 : fsm.S}, x fsm x_1 x_2 → Bisim.Shape fsm x x_1 x_2
-/
#guard_msgs in
#print Bisim.Is

/--
info: def Bisim : (fsm : FSM) → fsm.S → fsm.S → Prop :=
fun fsm x x_1 => ∃ x_2, Bisim.Is fsm x_2 ∧ x_2 fsm x x_1
-/
#guard_msgs in
#print Bisim

/-- info: 'Bisim' does not depend on any axioms -/
#guard_msgs in
#print axioms Bisim

theorem bisim_refl : Bisim f a a := by
  exists fun _ a b => a = b
  simp only [and_true]
  intro s t seqt
  constructor <;> simp_all

theorem bisim_symm (h : Bisim f a b): Bisim f b a := by
  rcases h with ⟨rel, relIsBisim, rab⟩
  exists fun f a b => rel f b a
  simp_all
  intro a b holds
  specialize relIsBisim holds
  rcases relIsBisim with ⟨imp, z⟩
  constructor <;> simp_all only [implies_true, and_self]

theorem Bisim.unfold {f} : Bisim.Is f Bisim := by
  rintro s t ⟨R, h_is, h_Rst⟩
  constructor
  · exact (h_is h_Rst).1
  · intro c; exact ⟨R, h_is, (h_is h_Rst).2 c⟩

theorem bisim_trans (h_ab : Bisim f a b) (h_bc : Bisim f b c) :
    Bisim f a c := by
  exists (fun f s t => ∃ u, Bisim f s u ∧ Bisim f u t)
  constructor
  intro s t h_Rst
  · rcases h_Rst with ⟨u, h_su, h_ut⟩
    have ⟨h_su₁, h_su₂⟩ := h_su.unfold
    have ⟨h_ut₁, h_ut₂⟩ := h_ut.unfold
    refine ⟨?_, ?_⟩
    · rw [h_su₁, h_ut₁]
    · intro c; exact ⟨_, h_su₂ c, h_ut₂ c⟩
  · exact ⟨b, h_ab, h_bc⟩

/-- info: 'bisim_refl' depends on axioms: [propext, Quot.sound] -/
#guard_msgs in
#print axioms bisim_refl

/-- info: 'bisim_symm' depends on axioms: [propext, Quot.sound] -/
#guard_msgs in
#print axioms bisim_symm

/-- info: 'bisim_trans' depends on axioms: [propext] -/
#guard_msgs in
#print axioms bisim_trans

