/-
Copyright (c) 2014 Parikshit Khanna. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Parikshit Khanna, Jeremy Avigad, Leonardo de Moura, Floris van Doorn, Mario Carneiro,
  Kim Morrison, Jannis Limperg
-/
prelude
import Init.Data.List.Lemmas

/-!
# Lemmas about `List.find?`, `List.findSome?`, `List.findIdx`, `List.findIdx?`, and `List.indexOf`.
-/

namespace List

open Nat

/-! ### find? -/

@[simp] theorem find?_cons_of_pos (l) (h : p a) : find? p (a :: l) = some a := by
  simp [find?, h]

@[simp] theorem find?_cons_of_neg (l) (h : ¬p a) : find? p (a :: l) = find? p l := by
  simp [find?, h]

@[simp] theorem find?_eq_none : find? p l = none ↔ ∀ x ∈ l, ¬ p x := by
  induction l <;> simp [find?_cons]; split <;> simp [*]

theorem find?_some : ∀ {l}, find? p l = some a → p a
  | b :: l, H => by
    by_cases h : p b <;> simp [find?, h] at H
    · exact H ▸ h
    · exact find?_some H

@[simp] theorem mem_of_find?_eq_some : ∀ {l}, find? p l = some a → a ∈ l
  | b :: l, H => by
    by_cases h : p b <;> simp [find?, h] at H
    · exact H ▸ .head _
    · exact .tail _ (mem_of_find?_eq_some H)

@[simp] theorem find?_map (f : β → α) (l : List β) : find? p (l.map f) = (l.find? (p ∘ f)).map f := by
  induction l with
  | nil => simp
  | cons x xs ih =>
    simp only [map_cons, find?]
    by_cases h : p (f x) <;> simp [h, ih]

theorem find?_replicate : find? p (replicate n a) = if n = 0 then none else if p a then some a else none := by
  cases n
  · simp
  · by_cases p a <;> simp_all [replicate_succ]

@[simp] theorem find?_replicate_of_length_pos (h : 0 < n) : find? p (replicate n a) = if p a then some a else none := by
  simp [find?_replicate, Nat.ne_of_gt h]

@[simp] theorem find?_replicate_of_pos (h : p a) : find? p (replicate n a) = if n = 0 then none else some a := by
  simp [find?_replicate, h]

@[simp] theorem find?_replicate_of_neg (h : ¬ p a) : find? p (replicate n a) = none := by
  simp [find?_replicate, h]

theorem find?_isSome_of_sublist {l₁ l₂ : List α} (h : l₁ <+ l₂) : (l₁.find? p).isSome → (l₂.find? p).isSome := by
  induction h with
  | slnil => simp
  | cons a h ih
  | cons₂ a h ih =>
    simp only [find?]
    split <;> simp_all

/-! ### findSome? -/

@[simp] theorem findSome?_cons_of_isSome (l) (h : (f a).isSome) : findSome? f (a :: l) = f a := by
  simp only [findSome?]
  split <;> simp_all

@[simp] theorem findSome?_cons_of_isNone (l) (h : (f a).isNone) : findSome? f (a :: l) = findSome? f l := by
  simp only [findSome?]
  split <;> simp_all

theorem exists_of_findSome?_eq_some {l : List α} {f : α → Option β} (w : l.findSome? f = some b) :
    ∃ a, a ∈ l ∧ f a = b := by
  induction l with
  | nil => simp_all
  | cons h l ih =>
    simp_all only [findSome?_cons, mem_cons, exists_eq_or_imp]
    split at w <;> simp_all

@[simp] theorem findSome?_map (f : β → γ) (l : List β) : findSome? p (l.map f) = l.findSome? (p ∘ f) := by
  induction l with
  | nil => simp
  | cons x xs ih =>
    simp only [map_cons, findSome?]
    split <;> simp_all

theorem findSome?_replicate : findSome? f (replicate n a) = if n = 0 then none else f a := by
  induction n with
  | zero => simp
  | succ n ih =>
    simp only [replicate_succ, findSome?_cons]
    split <;> simp_all

@[simp] theorem findSome?_replicate_of_pos (h : 0 < n) : findSome? f (replicate n a) = f a := by
  simp [findSome?_replicate, Nat.ne_of_gt h]

-- Argument is unused, but used to decide whether `simp` should unfold.
@[simp] theorem find?_replicate_of_isSome (_ : (f a).isSome) : findSome? f (replicate n a) = if n = 0 then none else f a := by
  simp [findSome?_replicate]

@[simp] theorem find?_replicate_of_isNone (h : (f a).isNone) : findSome? f (replicate n a) = none := by
  rw [Option.isNone_iff_eq_none] at h
  simp [findSome?_replicate, h]

theorem findSome?_isSome_of_sublist {l₁ l₂ : List α} (h : l₁ <+ l₂) :
    (l₁.findSome? f).isSome → (l₂.findSome? f).isSome := by
  induction h with
  | slnil => simp
  | cons a h ih
  | cons₂ a h ih =>
    simp only [findSome?]
    split <;> simp_all

/-! ### findIdx -/

theorem findIdx_cons (p : α → Bool) (b : α) (l : List α) :
    (b :: l).findIdx p = bif p b then 0 else (l.findIdx p) + 1 := by
  cases H : p b with
  | true => simp [H, findIdx, findIdx.go]
  | false => simp [H, findIdx, findIdx.go, findIdx_go_succ]
where
  findIdx_go_succ (p : α → Bool) (l : List α) (n : Nat) :
      List.findIdx.go p l (n + 1) = (findIdx.go p l n) + 1 := by
    cases l with
    | nil => unfold findIdx.go; exact Nat.succ_eq_add_one n
    | cons head tail =>
      unfold findIdx.go
      cases p head <;> simp only [cond_false, cond_true]
      exact findIdx_go_succ p tail (n + 1)

theorem findIdx_of_getElem?_eq_some {xs : List α} (w : xs[xs.findIdx p]? = some y) : p y := by
  induction xs with
  | nil => simp_all
  | cons x xs ih => by_cases h : p x <;> simp_all [findIdx_cons]

theorem findIdx_getElem {xs : List α} {w : xs.findIdx p < xs.length} :
    p xs[xs.findIdx p] :=
  xs.findIdx_of_getElem?_eq_some (getElem?_eq_getElem w)

@[deprecated findIdx_of_getElem?_eq_some (since := "2024-08-12")]
theorem findIdx_of_get?_eq_some {xs : List α} (w : xs.get? (xs.findIdx p) = some y) : p y :=
  findIdx_of_getElem?_eq_some (by simpa using w)

@[deprecated findIdx_getElem (since := "2024-08-12")]
theorem findIdx_get {xs : List α} {w : xs.findIdx p < xs.length} :
    p (xs.get ⟨xs.findIdx p, w⟩) :=
  xs.findIdx_of_getElem?_eq_some (getElem?_eq_getElem w)

theorem findIdx_lt_length_of_exists {xs : List α} (h : ∃ x ∈ xs, p x) :
    xs.findIdx p < xs.length := by
  induction xs with
  | nil => simp_all
  | cons x xs ih =>
    by_cases p x
    · simp_all only [forall_exists_index, and_imp, mem_cons, exists_eq_or_imp, true_or,
        findIdx_cons, cond_true, length_cons]
      apply Nat.succ_pos
    · simp_all [findIdx_cons]
      refine Nat.succ_lt_succ ?_
      obtain ⟨x', m', h'⟩ := h
      exact ih x' m' h'

theorem findIdx_getElem?_eq_getElem_of_exists {xs : List α} (h : ∃ x ∈ xs, p x) :
    xs[xs.findIdx p]? = some (xs[xs.findIdx p]'(xs.findIdx_lt_length_of_exists h)) :=
  getElem?_eq_getElem (findIdx_lt_length_of_exists h)

@[deprecated findIdx_getElem?_eq_getElem_of_exists (since := "2024-08-12")]
theorem findIdx_get?_eq_get_of_exists {xs : List α} (h : ∃ x ∈ xs, p x) :
    xs.get? (xs.findIdx p) = some (xs.get ⟨xs.findIdx p, xs.findIdx_lt_length_of_exists h⟩) :=
  get?_eq_get (findIdx_lt_length_of_exists h)

@[simp]
theorem findIdx_eq_length {p : α → Bool} {xs : List α} :
    xs.findIdx p = xs.length ↔ ∀ x ∈ xs, p x = false := by
  induction xs with
  | nil => simp_all
  | cons x xs ih =>
    rw [findIdx_cons, length_cons]
    simp only [cond_eq_if]
    split <;> simp_all [Nat.succ.injEq]

theorem findIdx_le_length (p : α → Bool) {xs : List α} : xs.findIdx p ≤ xs.length := by
  by_cases e : ∃ x ∈ xs, p x
  · exact Nat.le_of_lt (findIdx_lt_length_of_exists e)
  · simp at e
    exact Nat.le_of_eq (findIdx_eq_length.mpr e)

@[simp]
theorem findIdx_lt_length {p : α → Bool} {xs : List α} :
    xs.findIdx p < xs.length ↔ ∃ x ∈ xs, p x := by
  rw [← Decidable.not_iff_not, Nat.not_lt]
  have := @Nat.le_antisymm_iff (xs.findIdx p) xs.length
  simp only [findIdx_le_length, true_and] at this
  rw [← this, findIdx_eq_length, not_exists]
  simp only [Bool.not_eq_true, not_and]

/-- `p` does not hold for elements with indices less than `xs.findIdx p`. -/
theorem not_of_lt_findIdx {p : α → Bool} {xs : List α} {i : Nat} (h : i < xs.findIdx p) :
    ¬p (xs[i]'(Nat.le_trans h (findIdx_le_length p))) := by
  revert i
  induction xs with
  | nil => intro i h; rw [findIdx_nil] at h; simp at h
  | cons x xs ih =>
    intro i h
    have ho := h
    rw [findIdx_cons] at h
    have npx : ¬p x := by intro y; rw [y, cond_true] at h; simp at h
    simp [npx, cond_false] at h
    cases i.eq_zero_or_pos with
    | inl e => simpa only [e, Fin.zero_eta, get_cons_zero]
    | inr e =>
      have ipm := Nat.succ_pred_eq_of_pos e
      have ilt := Nat.le_trans ho (findIdx_le_length p)
      simp (config := { singlePass := true }) only [← ipm, getElem_cons_succ]
      rw [← ipm, Nat.succ_lt_succ_iff] at h
      simpa using ih h

/-- If `¬ p xs[j]` for all `j < i`, then `i ≤ xs.findIdx p`. -/
theorem le_findIdx_of_not {p : α → Bool} {xs : List α} {i : Nat} (h : i < xs.length)
    (h2 : ∀ j (hji : j < i), ¬p (xs[j]'(Nat.lt_trans hji h))) : i ≤ xs.findIdx p := by
  apply Decidable.byContradiction
  intro f
  simp only [Nat.not_le] at f
  exact absurd (@findIdx_getElem _ p xs (Nat.lt_trans f h)) (h2 (xs.findIdx p) f)

/-- If `¬ p xs[j]` for all `j ≤ i`, then `i < xs.findIdx p`. -/
theorem lt_findIdx_of_not {p : α → Bool} {xs : List α} {i : Nat} (h : i < xs.length)
    (h2 : ∀ j (hji : j ≤ i), ¬p (xs.get ⟨j, Nat.lt_of_le_of_lt hji h⟩)) : i < xs.findIdx p := by
  apply Decidable.byContradiction
  intro f
  simp only [Nat.not_lt] at f
  exact absurd (@findIdx_getElem _ p xs (Nat.lt_of_le_of_lt f h)) (h2 (xs.findIdx p) f)

/-- `xs.findIdx p = i` iff `p xs[i]` and `¬ p xs [j]` for all `j < i`. -/
theorem findIdx_eq {p : α → Bool} {xs : List α} {i : Nat} (h : i < xs.length) :
    xs.findIdx p = i ↔ p xs[i] ∧ ∀ j (hji : j < i), ¬p (xs[j]'(Nat.lt_trans hji h)) := by
  refine ⟨fun f ↦ ⟨f ▸ (@findIdx_getElem _ p xs (f ▸ h)), fun _ hji ↦ not_of_lt_findIdx (f ▸ hji)⟩,
    fun ⟨h1, h2⟩ ↦ ?_⟩
  apply Nat.le_antisymm _ (le_findIdx_of_not h h2)
  apply Decidable.byContradiction
  intro h3
  simp at h3
  exact not_of_lt_findIdx h3 h1

/-! ### findIdx? -/

@[simp] theorem findIdx?_nil : ([] : List α).findIdx? p i = none := rfl

@[simp] theorem findIdx?_cons :
    (x :: xs).findIdx? p i = if p x then some i else findIdx? p xs (i + 1) := rfl

@[simp] theorem findIdx?_succ :
    (xs : List α).findIdx? p (i+1) = (xs.findIdx? p i).map fun i => i + 1 := by
  induction xs generalizing i with simp
  | cons _ _ _ => split <;> simp_all

theorem findIdx?_eq_some_iff (xs : List α) (p : α → Bool) :
    xs.findIdx? p = some i ↔ (xs.take (i + 1)).map p = replicate i false ++ [true] := by
  induction xs generalizing i with
  | nil => simp
  | cons x xs ih =>
    simp only [findIdx?_cons, Nat.zero_add, findIdx?_succ, take_succ_cons, map_cons]
    split <;> cases i <;> simp_all [replicate_succ, succ_inj']

theorem findIdx?_of_eq_some {xs : List α} {p : α → Bool} (w : xs.findIdx? p = some i) :
    match xs.get? i with | some a => p a | none => false := by
  induction xs generalizing i with
  | nil => simp_all
  | cons x xs ih =>
    simp_all only [findIdx?_cons, Nat.zero_add, findIdx?_succ]
    split at w <;> cases i <;> simp_all [succ_inj']

theorem findIdx?_of_eq_none {xs : List α} {p : α → Bool} (w : xs.findIdx? p = none) :
    ∀ i, match xs.get? i with | some a => ¬ p a | none => true := by
  intro i
  induction xs generalizing i with
  | nil => simp_all
  | cons x xs ih =>
    simp_all only [Bool.not_eq_true, findIdx?_cons, Nat.zero_add, findIdx?_succ]
    cases i with
    | zero =>
      split at w <;> simp_all
    | succ i =>
      simp only [get?_cons_succ]
      apply ih
      split at w <;> simp_all

@[simp] theorem findIdx?_append :
    (xs ++ ys : List α).findIdx? p =
      (xs.findIdx? p <|> (ys.findIdx? p).map fun i => i + xs.length) := by
  induction xs with simp
  | cons _ _ _ => split <;> simp_all [Option.map_orElse, Option.map_map]; rfl

@[simp] theorem findIdx?_replicate :
    (replicate n a).findIdx? p = if 0 < n ∧ p a then some 0 else none := by
  induction n with
  | zero => simp
  | succ n ih =>
    simp only [replicate, findIdx?_cons, Nat.zero_add, findIdx?_succ, Nat.zero_lt_succ, true_and]
    split <;> simp_all

/-! ### indexOf -/

theorem indexOf_cons [BEq α] :
    (x :: xs : List α).indexOf y = bif x == y then 0 else xs.indexOf y + 1 := by
  dsimp [indexOf]
  simp [findIdx_cons]

end List
