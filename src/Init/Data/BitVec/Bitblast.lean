/-
Copyright (c) 2024 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Harun Khan, Abdalrhman M Mohamed, Joe Hendrix
-/
prelude
import Init.Data.BitVec.Folds
import Init.Data.Nat.Mod

/-!
# Bitblasting of bitvectors

This module provides theorems for showing the equivalence between BitVec operations using
the `Fin 2^n` representation and Boolean vectors.  It is still under development, but
intended to provide a path for converting SAT and SMT solver proofs about BitVectors
as vectors of bits into proofs about Lean `BitVec` values.

The module is named for the bit-blasting operation in an SMT solver that converts bitvector
expressions into expressions about individual bits in each vector.

## Main results
* `x + y : BitVec w` is `(adc x y false).2`.


## Future work
All other operations are to be PR'ed later and are already proved in
https://github.com/mhk119/lean-smt/blob/bitvec/Smt/Data/Bitwise.lean.

-/

open Nat Bool

namespace Bool

/-- At least two out of three booleans are true. -/
abbrev atLeastTwo (a b c : Bool) : Bool := a && b || a && c || b && c

@[simp] theorem atLeastTwo_false_left  : atLeastTwo false b c = (b && c) := by simp [atLeastTwo]
@[simp] theorem atLeastTwo_false_mid   : atLeastTwo a false c = (a && c) := by simp [atLeastTwo]
@[simp] theorem atLeastTwo_false_right : atLeastTwo a b false = (a && b) := by simp [atLeastTwo]
@[simp] theorem atLeastTwo_true_left   : atLeastTwo true b c  = (b || c) := by cases b <;> cases c <;> simp [atLeastTwo]
@[simp] theorem atLeastTwo_true_mid    : atLeastTwo a true c  = (a || c) := by cases a <;> cases c <;> simp [atLeastTwo]
@[simp] theorem atLeastTwo_true_right  : atLeastTwo a b true  = (a || b) := by cases a <;> cases b <;> simp [atLeastTwo]

end Bool

/-! ### Preliminaries -/

namespace BitVec

private theorem testBit_limit {x i : Nat} (x_lt_succ : x < 2^(i+1)) :
    testBit x i = decide (x ≥ 2^i) := by
  cases xi : testBit x i with
  | true =>
    simp [testBit_implies_ge xi]
  | false =>
    simp
    cases Nat.lt_or_ge x (2^i) with
    | inl x_lt =>
      exact x_lt
    | inr x_ge =>
      have ⟨j, ⟨j_ge, jp⟩⟩  := ge_two_pow_implies_high_bit_true x_ge
      cases Nat.lt_or_eq_of_le j_ge with
      | inr x_eq =>
        simp [x_eq, jp] at xi
      | inl x_lt =>
        exfalso
        apply Nat.lt_irrefl
        calc x < 2^(i+1) := x_lt_succ
             _ ≤ 2 ^ j := Nat.pow_le_pow_of_le_right Nat.zero_lt_two x_lt
             _ ≤ x := testBit_implies_ge jp

private theorem mod_two_pow_succ (x i : Nat) :
    x % 2^(i+1) = 2^i*(x.testBit i).toNat + x % (2 ^ i):= by
  rw [Nat.mod_pow_succ, Nat.add_comm, Nat.toNat_testBit]

private theorem mod_two_pow_add_mod_two_pow_add_bool_lt_two_pow_succ
     (x y i : Nat) (c : Bool) : x % 2^i + (y % 2^i + c.toNat) < 2^(i+1) := by
  have : c.toNat ≤ 1 := Bool.toNat_le c
  rw [Nat.pow_succ]
  omega

/-! ### Addition -/

/-- carry i x y c returns true if the `i` carry bit is true when computing `x + y + c`. -/
def carry (i : Nat) (x y : BitVec w) (c : Bool) : Bool :=
  decide (x.toNat % 2^i + y.toNat % 2^i + c.toNat ≥ 2^i)

@[simp] theorem carry_zero : carry 0 x y c = c := by
  cases c <;> simp [carry, mod_one]

theorem carry_succ (i : Nat) (x y : BitVec w) (c : Bool) :
    carry (i+1) x y c = atLeastTwo (x.getLsb i) (y.getLsb i) (carry i x y c) := by
  simp only [carry, mod_two_pow_succ, atLeastTwo, getLsb]
  simp only [Nat.pow_succ']
  have sum_bnd : x.toNat%2^i + (y.toNat%2^i + c.toNat) < 2*2^i := by
    simp only [← Nat.pow_succ']
    exact mod_two_pow_add_mod_two_pow_add_bool_lt_two_pow_succ ..
  cases x.toNat.testBit i <;> cases y.toNat.testBit i <;> (simp; omega)

/-- Carry function for bitwise addition. -/
def adcb (x y c : Bool) : Bool × Bool := (atLeastTwo x y c, Bool.xor x (Bool.xor y c))

/-- Bitwise addition implemented via a ripple carry adder. -/
def adc (x y : BitVec w) : Bool → Bool × BitVec w :=
  iunfoldr fun (i : Fin w) c => adcb (x.getLsb i) (y.getLsb i) c

theorem getLsb_add_add_bool {i : Nat} (i_lt : i < w) (x y : BitVec w) (c : Bool) :
    getLsb (x + y + zeroExtend w (ofBool c)) i =
      Bool.xor (getLsb x i) (Bool.xor (getLsb y i) (carry i x y c)) := by
  let ⟨x, x_lt⟩ := x
  let ⟨y, y_lt⟩ := y
  simp only [getLsb, toNat_add, toNat_zeroExtend, i_lt, toNat_ofFin, toNat_ofBool,
    Nat.mod_add_mod, Nat.add_mod_mod]
  apply Eq.trans
  rw [← Nat.div_add_mod x (2^i), ← Nat.div_add_mod y (2^i)]
  simp only
    [ Nat.testBit_mod_two_pow,
      Nat.testBit_mul_two_pow_add_eq,
      i_lt,
      decide_True,
      Bool.true_and,
      Nat.add_assoc,
      Nat.add_left_comm (_%_) (_ * _) _,
      testBit_limit (mod_two_pow_add_mod_two_pow_add_bool_lt_two_pow_succ x y i c)
    ]
  simp [testBit_to_div_mod, carry, Nat.add_assoc]

theorem getLsb_add {i : Nat} (i_lt : i < w) (x y : BitVec w) :
    getLsb (x + y) i =
      Bool.xor (getLsb x i) (Bool.xor (getLsb y i) (carry i x y false)) := by
  simpa using getLsb_add_add_bool i_lt x y false

theorem adc_spec (x y : BitVec w) (c : Bool) :
    adc x y c = (carry w x y c, x + y + zeroExtend w (ofBool c)) := by
  simp only [adc]
  apply iunfoldr_replace
          (fun i => carry i x y c)
          (x + y + zeroExtend w (ofBool c))
          c
  case init =>
    simp [carry, Nat.mod_one]
    cases c <;> rfl
  case step =>
    simp [adcb, Prod.mk.injEq, carry_succ, getLsb_add_add_bool]

theorem add_eq_adc (w : Nat) (x y : BitVec w) : x + y = (adc x y false).snd := by
  simp [adc_spec]

/-! ### add -/

/-- Adding a bitvector to its own complement yields the all ones bitpattern -/
@[simp] theorem add_not_self (x : BitVec w) : x + ~~~x = allOnes w := by
  rw [add_eq_adc, adc, iunfoldr_replace (fun _ => false) (allOnes w)]
  · rfl
  · simp [adcb, atLeastTwo]

/-- Subtracting `x` from the all ones bitvector is equivalent to taking its complement -/
theorem allOnes_sub_eq_not (x : BitVec w) : allOnes w - x = ~~~x := by
  rw [← add_not_self x, BitVec.add_comm, add_sub_cancel]

/-- Adding two bitvectors equals or-ing them if they are 1 in mutually exclusive locations. -/
theorem add_eq_or_of_and_eq_zero {w : Nat} (x y : BitVec w)
    (h : x &&& y = 0#w) : x + y = x ||| y := by
  rw [add_eq_adc, adc, iunfoldr_replace (fun _ => false) (x ||| y)]
  · rfl
  · simp [adcb, atLeastTwo, h]
    intros i
    replace h : (x &&& y).getLsb i = (0#w).getLsb i := by rw [h]
    simp only [getLsb_and, getLsb_zero, and_eq_false_imp] at h
    constructor
    · intros hx
      simp_all [hx]
    · by_cases hx : x.getLsb i <;> simp_all [hx]

/-! ### Negation -/

theorem bit_not_testBit (x : BitVec w) (i : Fin w) :
  getLsb (((iunfoldr (fun (i : Fin w) c => (c, !(x.getLsb i)))) ()).snd) i.val = !(getLsb x i.val) := by
  apply iunfoldr_getLsb (fun _ => ()) i (by simp)

theorem bit_not_add_self (x : BitVec w) :
  ((iunfoldr (fun (i : Fin w) c => (c, !(x.getLsb i)))) ()).snd + x  = -1 := by
  simp only [add_eq_adc]
  apply iunfoldr_replace_snd (fun _ => false) (-1) false rfl
  intro i; simp only [ BitVec.not, adcb, testBit_toNat]
  rw [iunfoldr_replace_snd (fun _ => ()) (((iunfoldr (fun i c => (c, !(x.getLsb i)))) ()).snd)]
  <;> simp [bit_not_testBit, negOne_eq_allOnes, getLsb_allOnes]

theorem bit_not_eq_not (x : BitVec w) :
  ((iunfoldr (fun i c => (c, !(x.getLsb i)))) ()).snd = ~~~ x := by
  simp [←allOnes_sub_eq_not, BitVec.eq_sub_iff_add_eq.mpr (bit_not_add_self x), ←negOne_eq_allOnes]

theorem bit_neg_eq_neg (x : BitVec w) : -x = (adc (((iunfoldr (fun (i : Fin w) c => (c, !(x.getLsb i)))) ()).snd) (BitVec.ofNat w 1) false).snd:= by
  simp only [← add_eq_adc]
  rw [iunfoldr_replace_snd ((fun _ => ())) (((iunfoldr (fun (i : Fin w) c => (c, !(x.getLsb i)))) ()).snd) _ rfl]
  · rw [BitVec.eq_sub_iff_add_eq.mpr (bit_not_add_self x), sub_toAdd, BitVec.add_comm _ (-x)]
    simp [← sub_toAdd, BitVec.sub_add_cancel]
  · simp [bit_not_testBit x _]

/-! ### Inequalities (le / lt) -/

theorem ult_eq_not_carry (x y : BitVec w) : x.ult y = !carry w x (~~~y) true := by
  simp only [BitVec.ult, carry, toNat_mod_cancel, toNat_not, toNat_true, ge_iff_le, ← decide_not,
    Nat.not_le, decide_eq_decide]
  rw [Nat.mod_eq_of_lt (by omega)]
  omega

theorem ule_eq_not_ult (x y : BitVec w) : x.ule y = !y.ult x := by
  simp [BitVec.ule, BitVec.ult, ← decide_not]

theorem ule_eq_carry (x y : BitVec w) : x.ule y = carry w y (~~~x) true := by
  simp [ule_eq_not_ult, ult_eq_not_carry]

/-- If two bitvectors have the same `msb`, then signed and unsigned comparisons coincide -/
theorem slt_eq_ult_of_msb_eq {x y : BitVec w} (h : x.msb = y.msb) :
    x.slt y = x.ult y := by
  simp only [BitVec.slt, toInt_eq_msb_cond, BitVec.ult, decide_eq_decide, h]
  cases y.msb <;> simp

/-- If two bitvectors have different `msb`s, then unsigned comparison is determined by this bit -/
theorem ult_eq_msb_of_msb_neq {x y : BitVec w} (h : x.msb ≠ y.msb) :
    x.ult y = y.msb := by
  simp only [BitVec.ult, msb_eq_decide, ne_eq, decide_eq_decide] at *
  omega

/-- If two bitvectors have different `msb`s, then signed and unsigned comparisons are opposites -/
theorem slt_eq_not_ult_of_msb_neq {x y : BitVec w} (h : x.msb ≠ y.msb) :
    x.slt y = !x.ult y := by
  simp only [BitVec.slt, toInt_eq_msb_cond, Bool.eq_not_of_ne h, ult_eq_msb_of_msb_neq h]
  cases y.msb <;> (simp; omega)

theorem slt_eq_ult (x y : BitVec w) :
    x.slt y = (x.msb != y.msb).xor (x.ult y) := by
  by_cases h : x.msb = y.msb
  · simp [h, slt_eq_ult_of_msb_eq]
  · have h' : x.msb != y.msb := by simp_all
    simp [slt_eq_not_ult_of_msb_neq h, h']

theorem slt_eq_not_carry (x y : BitVec w) :
    x.slt y = (x.msb == y.msb).xor (carry w x (~~~y) true) := by
  simp only [slt_eq_ult, bne, ult_eq_not_carry]
  cases x.msb == y.msb <;> simp

theorem sle_eq_not_slt (x y : BitVec w) : x.sle y = !y.slt x := by
  simp only [BitVec.sle, BitVec.slt, ← decide_not, decide_eq_decide]; omega

theorem sle_eq_carry (x y : BitVec w) :
    x.sle y = !((x.msb == y.msb).xor (carry w y (~~~x) true)) := by
  rw [sle_eq_not_slt, slt_eq_not_carry, beq_comm]

/-! ### mul recurrence for bitblasting -/

def mulRec (l r : BitVec w) (s : Nat) : BitVec w :=
  let cur := if r.getLsb s then (l <<< s) else 0
  match s with
  | 0 => cur
  | s + 1 => mulRec l r s + cur

theorem mulRec_zero_eq (l r : BitVec w) :
    mulRec l r 0 = if r.getLsb 0 then l else 0 := by
  simp [mulRec]

theorem mulRec_succ_eq (l r : BitVec w) (s : Nat) :
    mulRec l r (s + 1) = mulRec l r s + if r.getLsb (s + 1) then (l <<< (s + 1)) else 0 := by
  simp [mulRec]

theorem zeroExtend_truncate_succ_eq_zeroExtend_truncate_of_getLsb_false
  {x : BitVec w} {i : Nat} {hx : x.getLsb i = false} :
    zeroExtend w₂ (x.truncate (i + 1)) =
      zeroExtend w₂ (x.truncate i) := by
  ext k
  simp only [getLsb_zeroExtend, Fin.is_lt, decide_True, Bool.true_and, getLsb_or, getLsb_and]
  by_cases hik:i = k
  · subst hik
    simp [hx]
  · by_cases hik' : k < i + 1 <;> simp [hik'] <;> omega

theorem zeroExtend_truncate_succ_eq_zeroExtend_truncate_or_twoPow_of_getLsb_true
    (x : BitVec w) (i : Nat) (hx : x.getLsb i = true) :
    zeroExtend w₂ (x.truncate (i + 1)) =
      zeroExtend w₂ (x.truncate i) ||| (twoPow w₂ i) := by
  ext k
  simp only [getLsb_zeroExtend, Fin.is_lt, decide_True, Bool.true_and, getLsb_or, getLsb_and]
  by_cases hik : i = k
  · subst hik
    simp [hx]
  · by_cases hik' : k < i + 1 <;> simp [hik, hik'] <;> omega

/-- Recurrence lemma: truncating to `i+1` bits and then zero extending to `w`
equals truncating upto `i` bits `[0..i-1]`, and then adding the `i`th bit of `x`. -/
theorem zeroExtend_truncate_succ_eq_zeroExtend_truncate_add_twoPow (x : BitVec w) (i : Nat) :
    zeroExtend w (x.truncate (i + 1)) =
      zeroExtend w (x.truncate i) + (x &&& twoPow w i) := by
  rw [add_eq_or_of_and_eq_zero]
  · ext k
    simp only [getLsb_zeroExtend, Fin.is_lt, decide_True, Bool.true_and, getLsb_or, getLsb_and]
    by_cases hik:i = k
    · subst hik
      simp
    · simp [hik]
      /- Really, 'omega' should be able to do this-/
      by_cases hik' : k < (i + 1)
      · have hik'' : k < i := by omega
        simp [hik', hik'']
      · have hik'' : ¬ (k < i) := by omega
        simp [hik', hik'']
  · ext k
    simp
    by_cases hi : x.getLsb i <;> simp [hi] <;> omega

theorem mulRec_eq_mul_signExtend_truncate (l r : BitVec w) (s : Nat) :
    mulRec l r s = l * ((r.truncate (s + 1)).zeroExtend w) := by
  induction s
  case zero =>
    simp [mulRec_zero_eq]
    by_cases r.getLsb 0
    case pos hr =>
      simp only [hr, ↓reduceIte, truncate, zeroExtend_one_eq_ofBool_getLsb_zero,
        hr, ofBool_true, ofNat_eq_ofNat]
      rw [zeroExtend_ofNat_one_eq_ofNat_one_of_lt (by omega)]; simp
    case neg hr =>
      simp [hr, zeroExtend_one_eq_ofBool_getLsb_zero]
  case succ s' hs =>
    rw [mulRec_succ_eq, hs]
    have heq :
      (if r.getLsb (s' + 1) = true then l <<< (s' + 1) else 0) =
        (l * (r &&& (BitVec.twoPow w (s' + 1)))) := by
      simp only [ofNat_eq_ofNat, and_twoPow_eq_getLsb]
      by_cases hr : r.getLsb (s' + 1) <;> simp [hr]
    rw [heq, ← BitVec.mul_add, ← zeroExtend_truncate_succ_eq_zeroExtend_truncate_add_twoPow]

/-- Zero extending by number of bits larger than the bitwidth has no effect. -/
theorem zeroExtend_of_ge {x : BitVec w} {i j : Nat} (hi : i ≥ w) :
    (x.zeroExtend i).zeroExtend j = x.zeroExtend j := by
  ext k
  simp
  intros hx;
  have hi' : k < w := BitVec.lt_of_getLsb _ _ hx
  omega

/-- Zero extending by the bitwidth has no effect. -/
theorem zeroExtend_eq_self {x : BitVec w} : x.zeroExtend w = x := by
  ext i
  simp [getLsb_zeroExtend]

theorem getLsb_mul (x y : BitVec w) (i : Nat) :
    (x * y).getLsb i = (mulRec x y w).getLsb i := by
  simp [mulRec_eq_mul_signExtend_truncate]
  rw [truncate, zeroExtend_of_ge (by omega), zeroExtend_eq_self]
/- ## Shift left for arbitrary bit width -/

@[simp]
theorem shiftLeft_zero (x : BitVec w) : x <<< 0 = x := by
  simp [bv_toNat]

@[simp]
theorem zero_shiftLeft (n : Nat) : (0#w) <<< n = 0 := by
  simp [bv_toNat]

@[simp]
theorem truncate_one_eq_ofBool_getLsb (x : BitVec w) :
    x.truncate 1 = ofBool (x.getLsb 0) := by
  ext i
  simp [show i = 0 by omega]

/-## shiftLeft recurrence -/

def shiftLeftRec (x : BitVec w₁) (y : BitVec w₂) (n : Nat) : BitVec w₁ :=
  let shiftAmt := (y &&& (twoPow w₂ n))
  match n with
  | 0 => x <<< shiftAmt
  | n + 1 => (shiftLeftRec x y n) <<< shiftAmt

@[simp]
theorem shiftLeftRec_zero (x : BitVec w₁) (y : BitVec w₂) :
    shiftLeftRec x y 0 = x <<< (y &&& twoPow w₂ 0)  := by
  simp [shiftLeftRec]

@[simp]
theorem shiftLeftRec_succ (x : BitVec w₁) (y : BitVec w₂) :
    shiftLeftRec x y (n + 1) =
      (shiftLeftRec x y n) <<< (y &&& twoPow w₂ (n + 1)) := by
  simp [shiftLeftRec]

-- | TODO: should this be a simp-lemma? Probably not.
theorem shiftLeft_eq' (x : BitVec w) (y : BitVec w₂) :
  x <<< y = x <<< y.toNat := by rfl

-- | TODO: what to name these theorems?
@[simp]
theorem shiftLeft_zero' (x : BitVec w) :
    x <<< (0#w₂) = x := by
  simp [shiftLeft_eq']

@[simp]
theorem getLsb_ofNat_one (w i : Nat) :
    (1#w).getLsb i = (decide (i = 0) && decide (i < w)) := by
  rcases w with rfl | w
  · simp;
  · simp [getLsb]
    by_cases hi : i = 0
    · simp [hi]
    · simp [hi]
      intros _; simp [testBit, shiftRight_eq_div_pow];
      suffices 1 / 2^i = 0 by simp [this]
      apply Nat.div_eq_of_lt;
      exact Nat.one_lt_two_pow_iff.mpr hi

theorem shiftLeft'_shiftLeft' {x y z : BitVec w} :
    x <<< y <<< z = x <<< (y.toNat + z.toNat) := by
  simp [shiftLeft_eq', shiftLeft_shiftLeft]

theorem shiftLeft_or_eq_shiftLeft_shiftLeft_of_and_eq_zero {x : BitVec w} {y z : BitVec w₂}
    (h : y &&& z = 0#w₂) (h' : y.toNat + z.toNat < 2^w₂):
    x <<< (y ||| z) = x <<< y <<< z := by
  simp [← add_eq_or_of_and_eq_zero _ _ h, shiftLeft_eq', shiftLeft_shiftLeft,
    toNat_add, Nat.mod_eq_of_lt h']


theorem getLsb_shiftLeft' (x : BitVec w) (y : BitVec w₂) (i : Nat) :
    (x <<< y).getLsb i = (decide (i < w) && !decide (i < y.toNat) && x.getLsb (i - y.toNat)) := by
  simp [shiftLeft_eq', getLsb_shiftLeft]

theorem shiftLeftRec_eq (x : BitVec w₁) (y : BitVec w₂) (n : Nat) (hn : n + 1 ≤ w₂) :
  shiftLeftRec x y n = x <<< (y.truncate (n + 1)).zeroExtend w₂ := by
  induction n generalizing x y
  case zero =>
    ext i
    simp only [shiftLeftRec_zero, twoPow_zero_eq_one, Nat.reduceAdd, truncate_one_eq_ofBool_getLsb]
    have heq : (y &&& 1#w₂) = zeroExtend w₂ (ofBool (y.getLsb 0)) := by
      ext i
      by_cases h : (↑i : Nat) = 0 <;> simp [h, Bool.and_comm]
    simp [heq]
  case succ n ih =>
    simp
    by_cases h : y.getLsb (n + 1) <;> simp [h]
    · rw [ih (hn := by omega)]
      rw [zeroExtend_truncate_succ_eq_zeroExtend_truncate_or_twoPow_of_getLsb_true _ _ h]
      rw [shiftLeft_or_eq_shiftLeft_shiftLeft_of_and_eq_zero]
      · simp
      · simp;
        have hpow : 2 ^ (n + 1) < 2 ^ w₂ := by
          apply Nat.pow_lt_pow_of_lt (by decide) (by omega)
        have h₂ : 2 ^ (n + 1) % 2 ^ w₂ = 2 ^ (n + 1) := Nat.mod_eq_of_lt (by omega)
        have h₁ : y.toNat % 2 ^ (n + 1) % 2 ^ w₂ = y.toNat % 2 ^ (n + 1) := by
          apply Nat.mod_eq_of_lt
          apply Nat.lt_of_lt_of_le (m := 2 ^ (n + 1))
          apply Nat.mod_lt
          apply Nat.pow_pos (by decide); omega
        obtain h₁ : y.toNat % 2 ^ (n + 1) % 2 ^ w₂ = y.toNat % 2 ^ (n + 1) := by
          apply Nat.mod_eq_of_lt
          apply Nat.lt_of_lt_of_le (m := 2 ^ (n + 1)) <;> omega
        rw [h₁, h₂]
        rcases w₂ with rfl | w₂
        · omega
        · apply Nat.add_lt_add_of_lt_of_le
          · simp only [pow_eq, Nat.mul_eq, Nat.mul_one]
            apply Nat.lt_of_lt_of_le (m := 2 ^ (n + 1))
            · apply Nat.mod_lt
              · apply Nat.pow_pos (by decide)
            · apply Nat.pow_le_pow_of_le_right (by decide) (by omega)
          · simp
            apply Nat.pow_le_pow_of_le_right (by decide) (by omega)
    · rw [ih (hn := by omega)]
      rw [zeroExtend_truncate_succ_eq_zeroExtend_truncate_of_getLsb_false (i := n + 1)]
      simp [h]

#print axioms shiftLeftRec_eq

theorem shiftLeft_eq_shiftLeft_rec (x : BitVec ℘) (y : BitVec w₂) :
    x <<< y = shiftLeftRec x y (w₂ - 1) := by
  rcases w₂ with rfl | w₂
  · simp [of_length_zero]
  · simp [shiftLeftRec_eq x y w₂ (by omega)]


/-## (Logical) ushiftRight recurrence -/

def ushiftRight_rec (x : BitVec w₁) (y : BitVec w₂) (n : Nat) : BitVec w₁ :=
  let shiftAmt := (y &&& (twoPow w₂ n))
  match n with
  | 0 => x >>> shiftAmt
  | n + 1 => (ushiftRight_rec x y n) >>> shiftAmt

@[simp]
theorem ushiftRight_rec_zero (x : BitVec w₁) (y : BitVec w₂) :
    ushiftRight_rec x y 0 = x >>> (y &&& twoPow w₂ 0)  := by
  simp [ushiftRight_rec]

@[simp]
theorem ushiftRight_rec_succ (x : BitVec w₁) (y : BitVec w₂) :
    ushiftRight_rec x y (n + 1) =
      (ushiftRight_rec x y n) >>> (y &&& twoPow w₂ (n + 1)) := by
  simp [ushiftRight_rec]

-- | TODO: should this be a simp-lemma? Probably not.
theorem ushiftRight_eq' (x : BitVec w) (y : BitVec w₂) :
  x >>> y = x >>> y.toNat := by rfl


@[simp]
theorem BitVec.ushiftRight_zero (x : BitVec w) : x >>> 0 = x := by
  simp [bv_toNat]

-- | TODO: what to name these theorems?
@[simp]
theorem ushiftRight_zero' (x : BitVec w) :
    x >>> (0#w₂) = x := by
  simp [ushiftRight_eq']

theorem ushiftRight'_ushiftRight' {x y z : BitVec w} :
    x >>> y >>> z = x >>> (y.toNat + z.toNat) := by
  simp [ushiftRight_eq', shiftRight_shiftRight]

theorem ushiftRight_or_eq_ushiftRight_ushiftRight_of_and_eq_zero {x : BitVec w} {y z : BitVec w₂}
    (h : y &&& z = 0#w₂) (h' : y.toNat + z.toNat < 2^w₂):
    x >>> (y ||| z) = x >>> y >>> z := by
  simp [← add_eq_or_of_and_eq_zero _ _ h, ushiftRight_eq', shiftRight_shiftRight,
    toNat_add, Nat.mod_eq_of_lt h']

theorem getLsb_ushiftRight' (x : BitVec w) (y : BitVec w₂) (i : Nat) :
    (x >>>  y).getLsb i = x.getLsb (y.toNat + i) := by
  simp [ushiftRight_eq', getLsb_ushiftRight]

theorem ushiftRight_rec_eq (x : BitVec w₁) (y : BitVec w₂) (n : Nat) (hn : n + 1 ≤ w₂) :
  ushiftRight_rec x y n = x >>> (y.truncate (n + 1)).zeroExtend w₂ := by
  induction n generalizing x y
  case zero =>
    ext i
    simp only [ushiftRight_rec_zero, twoPow_zero_eq_one, Nat.reduceAdd, truncate_one_eq_ofBool_getLsb]
    have heq : (y &&& 1#w₂) = zeroExtend w₂ (ofBool (y.getLsb 0)) := by
      ext i
      by_cases h : (↑i : Nat) = 0 <;> simp [h, Bool.and_comm]
    simp [heq]
  case succ n ih =>
    simp
    by_cases h : y.getLsb (n + 1) <;> simp [h]
    · rw [ih (hn := by omega)]
      rw [zeroExtend_truncate_succ_eq_zeroExtend_truncate_or_twoPow_of_getLsb_true _ _ h]
      rw [ushiftRight_or_eq_ushiftRight_ushiftRight_of_and_eq_zero]
      · simp
      · simp;
        have hpow : 2 ^ (n + 1) < 2 ^ w₂ := by
          apply Nat.pow_lt_pow_of_lt (by decide) (by omega)
        have h₂ : 2 ^ (n + 1) % 2 ^ w₂ = 2 ^ (n + 1) := Nat.mod_eq_of_lt (by omega)
        have h₁ : y.toNat % 2 ^ (n + 1) % 2 ^ w₂ = y.toNat % 2 ^ (n + 1) := by
          apply Nat.mod_eq_of_lt
          apply Nat.lt_of_lt_of_le (m := 2 ^ (n + 1))
          apply Nat.mod_lt
          apply Nat.pow_pos (by decide); omega
        obtain h₁ : y.toNat % 2 ^ (n + 1) % 2 ^ w₂ = y.toNat % 2 ^ (n + 1) := by
          apply Nat.mod_eq_of_lt
          apply Nat.lt_of_lt_of_le (m := 2 ^ (n + 1)) <;> omega
        rw [h₁, h₂]
        rcases w₂ with rfl | w₂
        · omega
        · apply Nat.add_lt_add_of_lt_of_le
          · simp only [pow_eq, Nat.mul_eq, Nat.mul_one]
            apply Nat.lt_of_lt_of_le (m := 2 ^ (n + 1))
            · apply Nat.mod_lt
              · apply Nat.pow_pos (by decide)
            · apply Nat.pow_le_pow_of_le_right (by decide) (by omega)
          · simp
            apply Nat.pow_le_pow_of_le_right (by decide) (by omega)
    · rw [ih (hn := by omega)]
      rw [zeroExtend_truncate_succ_eq_zeroExtend_truncate_of_getLsb_false (i := n + 1)]
      simp [h]

#print axioms ushiftRight_rec_eq

theorem shiftRight_eq_shiftRight_rec (x : BitVec ℘) (y : BitVec w₂) :
    x >>> y = ushiftRight_rec x y (w₂ - 1) := by
  rcases w₂ with rfl | w₂
  · simp [of_length_zero]
  · simp [ushiftRight_rec_eq x y w₂ (by omega)]


/- ### Arithmetic (sshiftRight) recurrence -/

def sshiftRightRec (x : BitVec w) (y : BitVec w₂) (n : Nat) : BitVec w :=
  let shiftAmt := (y &&& (twoPow w₂ n))
  match n with
  | 0 => x.sshiftRight' shiftAmt
  | n + 1 => (sshiftRightRec x y n) >>> shiftAmt

theorem sshiftRight_eq_sshiftRightRec (x : BitVec w₁) (y : BitVec w₂) :
  (x >>> y).getLsb i = (sshiftRightRec x y w).getLsb i := sorry



/- ## udiv/urem bitblasting -/

/-
r = n - d * q
r = n - d * (∑ i, 2^i * q.getLsb i)

-/


/-!
Let us study an instructive counterexample to the claim that
  `n = d * q + r` for (`0 ≤ r < d`) uniquely determining q and r *over bitvectors*.

- Let `bitwidth = 3`
- Let `n = 0, d = 3`
- If we choose `q = 2, r = 2`, then d * q + r = 6 + 2 = 8 ≃ 0 (mod 8) so satisfies.
- But see that `q = 0, r = 0` also satisfies, as 0 * 3 + 0 = 0.
- So for (`n = 0, d = 3`), both:
    `q = 2, r = 2` as well as
    `q = 0, r = 0` are solutions!

It's easy to cook up such examples, by chosing `(q, r)` for a fixed `(d, n)`
such that `(d * q + r)` overflows.
-/

/-!
References:
- Fast 32-bit Division on the DSP56800E: Minimized nonrestoring division algorithm by David Baca
- Bitwuzla sources for bitblasting.h
-/


/-- TODO: This theorem surely exists somewhere. -/
theorem Nat.div_add_eq_left_of_lt {x y z : Nat} (hx : z ∣ x) (hy : y < z) (hz : 0 < z):
    (x + y) / z = x / z := by
  refine Nat.div_eq_of_lt_le ?lo ?hi
  · apply Nat.le_trans
    · exact div_mul_le_self x z
    · omega
  · simp only [succ_eq_add_one, Nat.add_mul, Nat.one_mul]
    apply Nat.add_lt_add_of_le_of_lt
    · apply Nat.le_of_eq
      exact (Nat.div_eq_iff_eq_mul_left hz hx).mp rfl
    · exact hy

theorem div_characterized_of_mul_add_toNat {d n q r : BitVec w} (hd : 0 < d)
    (hrd : r < d)
    (hdqnr : d.toNat * q.toNat + r.toNat = n.toNat) :
    (n.udiv d = q ∧ n.umod d = r) := by
  constructor
  · apply BitVec.eq_of_toNat_eq
    rw [toNat_udiv hd]
    replace hdqnr : (d.toNat * q.toNat + r.toNat) / d.toNat = n.toNat / d.toNat := by
      simp [hdqnr]
    rw [Nat.div_add_eq_left_of_lt] at hdqnr
    · rw [← hdqnr]
      exact mul_div_right q.toNat hd
    · exact Nat.dvd_mul_right d.toNat q.toNat
    · exact hrd
    · exact hd
  · apply BitVec.eq_of_toNat_eq
    rw [toNat_umod]
    replace hdqnr : (d.toNat * q.toNat + r.toNat) % d.toNat = n.toNat % d.toNat := by
      simp [hdqnr]
    rw [Nat.add_mod, Nat.mul_mod_right] at hdqnr
    simp at hdqnr
    replace hrd : r.toNat < d.toNat := by
      rw [BitVec.lt_def] at hrd
      exact hrd -- TODO: golf
    rw [Nat.mod_eq_of_lt hrd] at hdqnr
    simp [hdqnr]

theorem div_characterized_of_mul_add_of_lt {d n q r : BitVec w} (hd : 0 < d)
    (hrd : r < d)
    (hdqnr : d * q + r = n)
    (hlt : d.toNat * q.toNat + r.toNat < 2^w) :
    (n.udiv d = q ∧ n.umod d = r) := by
  apply div_characterized_of_mul_add_toNat <;> try assumption
  apply Eq.symm
  have hlt' : d.toNat * q.toNat < 2^w := by omega
  calc
    n.toNat = (d * q + r).toNat := by rw [← hdqnr]
    _ = ((d * q).toNat + r.toNat) % 2^w := by simp [BitVec.toNat_add]
    _ = ((d.toNat * q.toNat) % 2^w + r.toNat) % 2^w := by simp [BitVec.toNat_mul]
    _ = ((d.toNat * q.toNat) + r.toNat) % 2^w := by simp [Nat.mod_eq_of_lt hlt']
    _ = ((d.toNat * q.toNat) + r.toNat)  := by simp [Nat.mod_eq_of_lt hlt]

theorem div_characterized_toNat_of_eq_udiv_of_eq_umod {d n q r : BitVec w} (hd : 0 < d)
    (hq : n.udiv d = q) (hr : n.umod d = r) :
    (d.toNat * q.toNat + r.toNat = n.toNat) := by
  have hdiv : n.toNat / d.toNat = q.toNat := by
    rw [← toNat_udiv hd] -- TODO: squeeze
    rw [(toNat_eq _ _).mp hq]
  have hmod : n.toNat % d.toNat = r.toNat := by
    rw [← toNat_umod] -- TODO: squeeze
    rw [(toNat_eq _ _).mp hr]
  rw [← hdiv, ← hmod] -- TODO: flip
  rw [div_add_mod]

theorem div_characterized_toNat_of_eq_udiv_of_eq_umod_of_lt {d n q r : BitVec w} (hd : 0 < d)
    (hq : n.udiv d = q) (hr : n.umod d = r)
    (hlt : d.toNat * q.toNat + r.toNat < 2^w) :
    d * q + r = n := by
  apply eq_of_toNat_eq
  simp [toNat_add, toNat_mul]
  rw [Nat.mod_eq_of_lt hlt]
  apply div_characterized_toNat_of_eq_udiv_of_eq_umod hd hq hr

theorem div_iff_add_mod_of_lt {d n q r : BitVec w} (hd : 0 < d)
    (hrd : r < d)
    (hlt : d.toNat * q.toNat + r.toNat < 2^w) :
    (n.udiv d = q ∧ n.umod d = r) ↔ (d * q + r = n) := by
  constructor
  · intros h; obtain ⟨h₁, h₂⟩ := h
    apply div_characterized_toNat_of_eq_udiv_of_eq_umod_of_lt <;> assumption
  · intros h
    apply div_characterized_of_mul_add_of_lt <;> assumption

/- # Division Recurrence for Bitblasting -/

-- n = d * q + r
-- Two-stage subtraction:
-- For each bit of the dividend(n) starting from the MSB:
--
-- 1) Add ith bit of dividend as MSB of remainder `rem`.
--
-- 1) Compute carry bits when subtracting divisor `d` from current
--    remainder `rem`, which determines the current quotient bit.
-- 2) Perform subtraction operation based on current quotient bit and shift
--    remainder by one.
--
-- For example, n = 0111 (7 in base 10), d = 0010 (2 in base 10)
--
--   i   rem       d   q
--   0   0000             -- insert n.msb [0]
--              0010   0  -- subtract d, not successful
--       0000             -- result [unchanged]
--       0000             -- shift left
--
--   1   0001             -- insert n.msb [1]
--              0010   0  -- subtract d, not successful
--       0001             -- result [unchanged]
--       0010             -- shift
--
--   2   0011             -- insert n.msb [2]
--              0010   1  -- subtract d, successful
--       0001             -- result [CHANGED]
--       0010             -- shift
--
--   3   0011             -- insert n.msb [3]
--             0010   1  -- subtract d, successful
--       0001             -- remainder [CHANGED]
--
--   remainder: 0001 (1 in base 10)
--   quotient:  0011 (3 in base 10)
/-- A bundle of the quotient and remainder for the intermediate steps when computing n.div d -/
structure DivRecQuotRem (w : Nat) (n : BitVec w) (d : BitVec w) where
  r : BitVec w
  q : BitVec w
deriving DecidableEq, Repr


theorem BitVec.shiftLeft_eq_mul_twoPow (x : BitVec w) (n : Nat) :
    x <<< n = x * (BitVec.twoPow w n) := by
  ext i
  simp

/-- One round of the division algorithm, that tries to perform a subtract shift. -/
def tryDivSubtractShift (qr : DivRecQuotRem w n d) (ix : Nat) : DivRecQuotRem w n d :=
  let r' := (qr.r <<< 1) ||| (BitVec.ofBool (n.getLsb ix)).zeroExtend w
  if r' < d
  then { r := r', q := qr.q <<< 1  }
  else {
      r := r' - d,
      q := qr.q <<< 1 ||| 1
    }

/-- Same as tryDivSubtractShift, with if-then-else pushed into the record, -/
def tryDivSubtractShift' (qr : DivRecQuotRem w n d) (ix : Nat) : DivRecQuotRem w n d :=
  let r' := (qr.r <<< 1) ||| (BitVec.ofBool (n.getLsb ix)).zeroExtend w
  { r := if r' < d then r' else r' - d, q := qr.q <<< 1 ||| (if r' < d then 0 else 1)  }

@[simp]
theorem BitVec.or_zero (x : BitVec w) : x ||| 0#w = x := by
  ext i
  simp

theorem tryDivSubtractShift_eq_tryDivSubtractShift' (qr : DivRecQuotRem w n d) (ix : Nat) :
    tryDivSubtractShift qr ix = tryDivSubtractShift' qr ix := by
  simp [tryDivSubtractShift, tryDivSubtractShift']
  generalize qr.r <<< 1 ||| zeroExtend w (ofBool (n.getLsb ix)) = s
  by_cases hslt : s < d
  · simp [hslt]
  · simp [hslt]

theorem BitVec.sub_le_self_of_le {x y : BitVec w} (hx : y ≤ x) : x - y ≤ x := by
  simp [BitVec.lt_def, BitVec.le_def] at hx ⊢
  rw [← Nat.add_sub_assoc (by omega)]
  rw [Nat.add_comm]
  rw [Nat.add_sub_assoc (by omega)]
  rw [Nat.add_mod]
  simp only [mod_self, Nat.zero_add, mod_mod]
  rw [Nat.mod_eq_of_lt] <;> omega

theorem BitVec.sub_lt_self_of_lt_of_lt {x y : BitVec w} (hx : y < x) (hy : 0 < y): x - y < x := by
  simp [BitVec.lt_def] at hx hy ⊢
  rw [← Nat.add_sub_assoc (by omega)]
  rw [Nat.add_comm]
  rw [Nat.add_sub_assoc (by omega)]
  rw [Nat.add_mod]
  simp only [mod_self, Nat.zero_add, mod_mod]
  rw [Nat.mod_eq_of_lt] <;> omega

theorem BitVec.le_iff_not_lt {x y : BitVec w} : (¬ x < y) ↔ y ≤ x := by
  constructor <;>
    (intro h; simp [BitVec.lt_def, BitVec.le_def] at h ⊢; omega)

@[simp]
theorem BitVec.le_refl (x : BitVec w) : x ≤ x := by
  simp [BitVec.le_def]


/-- The tryDivSubtractShift's remainder is upper bounded by `r << 1 | 1`. -/
theorem tryDivSubtractShift_remainder_lt_shiftLeft_one_or_one {qr : DivRecQuotRem w n d} {ix : Nat} :
    (tryDivSubtractShift qr ix).r ≤ (qr.r <<< 1) ||| (BitVec.ofBool (n.getLsb ix)).zeroExtend w := by
  rw [tryDivSubtractShift_eq_tryDivSubtractShift']
  simp only [tryDivSubtractShift']
  generalize qr.r <<< 1 ||| zeroExtend w (ofBool (n.getLsb ix)) = s
  by_cases hslt : s < d
  · simp [hslt]
  · simp [hslt]
    apply BitVec.sub_le_self_of_le
    apply BitVec.le_iff_not_lt.mp hslt


/- Surely this exists somewhere, I remember proving this even -/
theorem Nat.sub_mod_self_eq_sub {x n : Nat} (hx₀ : 0 < x := by omega) (hxn : x < n := by omega) : (n - x) % n = n - x := by
  rw [Nat.mod_eq_of_lt]
  omega

@[simp]
theorem Bool.toNat_lt (b : Bool) : b.toNat < 2 := by
  have h := Bool.toNat_le b
  omega

/-- TODO: This shows that the remainer is always going to be below 'd', and does not overflow.  -/
theorem tryDivSubtractShift_lt_of_lt {qr : DivRecQuotRem w n d} {ix : Nat} (hrlt : qr.r < d) (hrltTwoPow : qr.r.toNat * 2 + 1 < 2 ^ w):
    (tryDivSubtractShift qr ix).r < d := by
  simp only [tryDivSubtractShift, ofNat_eq_ofNat]
  generalize hr₂ : qr.r <<< 1 ||| zeroExtend w (ofBool (n.getLsb ix)) = r₂
  by_cases hr₂lt : r₂ < d
  · simp [hr₂lt]
  · simp [hr₂lt]
    rw [← BitVec.add_eq_or_of_and_eq_zero] at hr₂
    rw [BitVec.shiftLeft_eq_mul_twoPow] at hr₂
    · simp only [BitVec.lt_def] at hr₂ hr₂lt ⊢
      simp only [toNat_sub, toNat_add, toNat_shiftLeft, toNat_truncate,
        toNat_ofBool, add_mod_mod, mod_add_mod, toNat_mul] at hr₂ hr₂lt ⊢
      -- simp only [toNat_twoPow, Nat.pow_one] at hr₂
      rcases w with rfl | rfl | w
      · have hr : qr.r = 0#0 := by apply Subsingleton.elim
        have hd : d = 0#0 := by apply Subsingleton.elim
        rw [hr, hd] at hrlt
        simp at hrlt -- TODO: golf this with simpa, ask alex.
      · simp only [Nat.reduceAdd, Nat.zero_add, Nat.pow_one, mod_self, Nat.mul_zero] at hrlt hr₂ ⊢
        simp only [Nat.reduceAdd, lt_def] at hrlt hr₂
        simp only [Nat.reduceAdd, zeroExtend_eq, lt_def, toNat_or, toNat_shiftLeft, Nat.pow_one,
          toNat_ofBool, Nat.not_lt] at hr₂
        have hd : d.toNat < 2 := d.isLt
        generalize hb : (n.getLsb ix) = b
        rw [hb] at hr₂
        replace hd : d.toNat = 0 ∨ d.toNat = 1 := by omega;
        rcases hd with hd | hd
        · omega -- d ≠ 0
        · rw [hd] at hr₂lt hrlt
          rcases b with rfl | rfl
          · replace hrlt : qr.r.toNat = 0 := by omega
            rw [← hr₂] at hr₂lt
            simp at hr₂lt
            rw [hrlt] at hr₂lt
            simp at hr₂lt
          · simp; omega
      · have hr₂lt₂ : r₂.toNat - d.toNat < d.toNat := by
          rw [← hr₂]
          simp only [mul_twoPow_eq_shiftLeft, toNat_add, toNat_shiftLeft, toNat_truncate,
            toNat_ofBool, add_mod_mod, mod_add_mod]
          rw [Nat.shiftLeft_eq]
          simp only [Nat.pow_one]
          have hd : d.toNat < 2^(w + 1 + 1) := d.isLt
          have hb : (n.getLsb ix).toNat < 2 := by simp
          simp only [lt_def] at hrlt
          rw [Nat.mod_eq_of_lt]
          · -- r < d [integers]
            -- r - 1 <= d
            -- 2(r - 2) <= 2d
            -- 2r - 2 - d <= d
            -- 2r - 1 - d < d
            omega
          · omega -- here is the use of hrltTwoPow
        calc
          _ =  (r₂.toNat + (2 ^ (w + 1 + 1) - d.toNat)) % 2 ^ (w + 1 + 1)  := by rfl
          _ =  ((r₂.toNat + (2 ^ (w + 1 + 1)) - d.toNat)) % 2 ^ (w + 1 + 1)  := by
            rw [Nat.add_sub_assoc]
            have := d.isLt
            omega
          _ =  (((2 ^ (w + 1 + 1) + r₂.toNat) - d.toNat)) % 2 ^ (w + 1 + 1) := by
            rw [Nat.add_comm]
          _ =  (2 ^ (w + 1 + 1) + (r₂.toNat - d.toNat)) % 2 ^ (w + 1 + 1) := by
            congr 1
            rw [Nat.add_sub_assoc]
            omega
          _ =  ((2 ^ (w + 1 + 1) % 2 ^ (w + 1 + 1)) + ((r₂.toNat - d.toNat) % 2 ^ (w + 1 + 1))) % (2 ^ (w + 1 + 1)) := by
            rw [Nat.add_mod]
          _ = (r₂.toNat - d.toNat) % 2 ^ (w + 1 + 1) := by
            simp
          _ = (r₂.toNat - d.toNat) := by
            rw [Nat.mod_eq_of_lt]
            omega
          _ < d.toNat := by omega
    · ext i
      simp
      intros hi _ hi'
      omega

/--
info: 'BitVec.tryDivSubtractShift_lt_of_lt' depends on axioms: [propext, Quot.sound, Classical.choice]
-/
#guard_msgs in #print axioms tryDivSubtractShift_lt_of_lt

/-- repeatedly apply `tryDivSubtractShift`. -/
def divRec (qr : DivRecQuotRem w n d) (j : Nat) :
    DivRecQuotRem w n d :=
  let qr' :=
    match j with
    | 0 => qr
    | j + 1 => divRec qr j
  tryDivSubtractShift qr' (w - 1 - j)

theorem BitVec.shiftLeft_mul_comm (x y : BitVec w) (n : Nat) :
    x <<< n * y = x * y <<< n := by
  rw [BitVec.shiftLeft_eq_mul_twoPow]
  rw [BitVec.shiftLeft_eq_mul_twoPow]
  rw [BitVec.mul_assoc]
  congr 1
  apply BitVec.mul_comm

theorem BitVec.shiftLeft_mul_assoc (x y : BitVec w) (n : Nat) :
    x * y <<< n = (x * y) <<< n := by
  rw [BitVec.shiftLeft_eq_mul_twoPow]
  rw [BitVec.shiftLeft_eq_mul_twoPow]
  rw [BitVec.mul_assoc]

theorem BitVec.add_mul (x y z : BitVec w) : (y + z) * x = y * x + z * x := by
  conv =>
    lhs
    rw [BitVec.mul_comm, BitVec.mul_add]
  congr 1 <;> rw [BitVec.mul_comm]


/--
TODO: what's a good theorem name?
If the LSB is false, then shifting to (w - 1) is the same as shifting to w and then right shifting 1.
-/
private theorem BitVec.shiftLeft_sub_eq_shiftLeft_shiftRight_or_zeroExtend_getLsb
    {x : BitVec w} :
    x >>> (w - 1) = ((x >>> w <<< 1) ||| (BitVec.ofBool (x.getLsb (w - 1))).zeroExtend w) := by
  ext i
  simp only [getLsb_ushiftRight, getLsb_or, getLsb_shiftLeft, Fin.is_lt, decide_True, Bool.true_and,
    getLsb_zeroExtend, getLsb_ofBool]
  by_cases (i : Nat) < 1
  case pos h =>
    simp only [h, decide_True, Bool.not_true, Bool.false_and]
    have hi : (i : Nat) = 0 := by omega
    simp [hi]
  case neg h =>
    simp only [h, decide_False, Bool.not_false, Bool.true_and]
    have hi : (i : Nat) ≠ 0 := by omega
    simp only [hi, decide_False, Bool.false_and, Bool.or_false]
    congr 1
    omega

private theorem BitVec.shiftLeft_sub_eq_shiftLeft_shiftRight_add_zeroExtend_getLsb
    {x : BitVec w} :
    x >>> (w - 1) = ((x >>> w <<< 1) + (BitVec.ofBool (x.getLsb (w - 1))).zeroExtend w) := by
  rw [BitVec.add_eq_or_of_and_eq_zero]
  · apply BitVec.shiftLeft_sub_eq_shiftLeft_shiftRight_or_zeroExtend_getLsb
  · ext i
    simp only [getLsb_and, getLsb_shiftLeft, Fin.is_lt, decide_True, Bool.true_and,
      getLsb_ushiftRight, getLsb_zeroExtend, getLsb_ofBool, getLsb_zero, and_eq_false_imp,
      and_eq_true, not_eq_true', decide_eq_false_iff_not, Nat.not_lt, decide_eq_true_eq, and_imp]
    intros i _ hi'
    omega

theorem BitVec.add_assoc {x y z : BitVec w} : x + y + z = x + (y + z) := by
  apply eq_of_toNat_eq
  simp[Nat.add_assoc]

theorem BitVec.add_sub_assoc  {m k : BitVec w} (h : k ≤ m) (n : BitVec w) :
    n + m - k = n + (m - k) := by
  apply BitVec.eq_of_toNat_eq
  simp only [toNat_sub, toNat_add, mod_add_mod, add_mod_mod, Nat.add_assoc]

/--
Bitwise or of (x <<< 1) with 1 is the same as addition.
This is useful to reason in mixed-arithmetic bitwise contexts.
-/
private theorem BitVec.shiftLeft_one_or_one_eq_shiftLeft_one_add_one {x : BitVec w} :
    x <<< 1 ||| 1#w = (x <<< 1) + 1#w := by
  rw [BitVec.add_eq_or_of_and_eq_zero]
  ext i
  simp
  intro i _ hi'
  omega

theorem BitVec.add_sub_self_left {x y : BitVec w} : x + y - x = y := by
  apply eq_of_toNat_eq
  simp
  calc
    (x.toNat + y.toNat + (2 ^ w - x.toNat)) % 2 ^ w = (x.toNat + y.toNat + 2 ^ w - x.toNat) % 2 ^ w := by
      rw [Nat.add_sub_assoc (Nat.le_of_lt x.isLt)]
    _ = (x.toNat + y.toNat - x.toNat + 2 ^ w) % 2 ^ w := by rw [Nat.sub_add_comm]; omega
    _ = (y.toNat + 2 ^ w) % 2 ^ w := by rw [Nat.add_sub_self_left]
    _ = y.toNat % 2 ^ w := by simp
    _ = y.toNat := by simp [Nat.mod_eq_of_lt]

theorem BitVec.add_sub_self_right {x y : BitVec w} : x + y - y = x := by
  rw [BitVec.add_comm]
  rw [BitVec.add_sub_self_left]

@[simp]
theorem BitVec.le_of_not_lt {x y : BitVec w} : ¬ x < y → y ≤ x := by
  simp [BitVec.lt_def, BitVec.le_def]

-- theorem div_iff_add_mod_of_lt {d n q r : BitVec w} (hd : 0 < d)
--     (hrd : r < d)
--     (hlt : d.toNat * q.toNat + r.toNat < 2^w) :
--     (n.udiv d = q ∧ n.umod d = r) ↔ (d * q + r = n) := by

theorem divRec_correct {w : Nat} {n d : BitVec w} {qr : DivRecQuotRem w n d} {j : Nat}
    (hj : j ≤ w - 1)
    (hqrd : qr.r < d)
    (hrn : qr.r < d)
    (hqrn : n >>> (w - j) = qr.q * d + qr.r) :
    ((n >>> ((w - 1) - j) = (divRec qr j).q * d + (divRec qr j).r)) ∧
    (d.toNat * (divRec qr j).q.toNat + (divRec qr j).r.toNat < 2^w) ∧
    (divRec qr j).r < d := by
  induction j generalizing qr
  case zero =>
    constructor
    · simp [divRec]
      simp at hqrn
      simp [tryDivSubtractShift_eq_tryDivSubtractShift']
      simp [tryDivSubtractShift']
      generalize hb : n.getLsb (w - 1) = b
      generalize hs : qr.r <<< 1 ||| zeroExtend w (ofBool b) = s
      have qd : qr.q <<< 1 * d = (qr.q * d) <<< 1 := by
        rw [BitVec.shiftLeft_mul_comm]
        rw [BitVec.shiftLeft_mul_assoc]
      by_cases hslt : s < d -- Note that the proof is identical on both sides of the case split.
      · simp [hslt]
        rw [← hs]
        rw [qd]
        rw [BitVec.shiftLeft_eq_mul_twoPow]
        rw [BitVec.shiftLeft_eq_mul_twoPow]
        rw [← add_eq_or_of_and_eq_zero]
        · rw [← BitVec.add_assoc]
          rw [← BitVec.add_mul]
          rw [← hqrn]
          rw [← BitVec.shiftLeft_eq_mul_twoPow]
          rw [BitVec.shiftLeft_sub_eq_shiftLeft_shiftRight_add_zeroExtend_getLsb, hb]
        · ext i
          simp
          intros i _ hi'
          omega
      · simp [hslt]
        rw [BitVec.shiftLeft_one_or_one_eq_shiftLeft_one_add_one]
        rw [BitVec.add_mul]
        simp only [BitVec.one_mul]
        rw [BitVec.add_assoc]
        rw [← BitVec.add_sub_assoc (by simp [hslt])]
        rw [BitVec.add_sub_self_left]
        rw [← hs]
        rw [qd]
        rw [BitVec.shiftLeft_eq_mul_twoPow]
        rw [BitVec.shiftLeft_eq_mul_twoPow]
        rw [← add_eq_or_of_and_eq_zero]
        · rw [← BitVec.add_assoc]
          rw [← BitVec.add_mul]
          rw [← hqrn]
          rw [← BitVec.shiftLeft_eq_mul_twoPow]
          rw [BitVec.shiftLeft_sub_eq_shiftLeft_shiftRight_add_zeroExtend_getLsb, hb]
        · ext i
          simp
          intros i _ hi'
          omega
    · constructor
      · simp [divRec]
        simp at hqrn
        sorry
      · -- r < d
        simp [divRec]
        apply tryDivSubtractShift_lt_of_lt
        apply hqrd
        sorry
  case succ j' ih =>
    sorry


theorem div_eq_divRec (n d : BitVec w) (hd : d > 0) :
    n.udiv d = (divRec (w := w) (n := n) (d := d) { r := 0, q := 0 } (w - 1)).q ∧
    n.umod d = (divRec (w := w) (n := n) (d := d) { r := 0, q := 0 } (w - 1)).r := by
  obtain ⟨h₁, h₂, h₃⟩ := divRec_correct (w := w) (n := n) (d := d) (j := w - 1) (qr := { r := 0, q := 0})
    (by omega)
    (by simpa using hd)
    (by simpa using hd)
    (by sorry)
  simp at h₃
  simp at h₂
  simp at h₁
  have k := div_characterized_of_mul_add_of_lt (d := d) (n := n)
    (q := (divRec (w := w) (n := n) (d := d) { r := 0, q := 0 } (w - 1)).q)
    (r := (divRec (w := w) (n := n) (d := d) { r := 0, q := 0 } (w - 1)).r)
    hd
    h₃
    (by rw [BitVec.mul_comm]; simp_all)
    (by simp_all)
  simp [k]

def checkDivRec : Bool × Array String := Id.run do
  let w := 4
  let max := (Nat.pow 2 w)
  let mut outputs := #[]
  let mut wrong := false
  for n in (List.range max) do
    for d in (List.range (max - 1)).map (fun n => Nat.add n 1) do
      have hd : d > 0 := by sorry
      let qr := divRec (w := w) (n := n) (d := d) { r := 0, q := 0 } (w - 1)
      if qr.q * d + qr.r != n then
        outputs := outputs.push s!"ERROR: n = {n}, d = {d}, q = {qr.q}, r = {qr.r}, n = {n}, d = {d}, q = {qr.q}, r = {qr.r}"
        wrong := true
  (wrong, outputs)

/-- info: (false, { data := [] }) -/
#guard_msgs in #reduce checkDivRec

-- theorem divRec_n (qr : DivRecQuotRem w n d) :
--   d * (tryDivSubtractShift qr j).q + (tryDivSubtractShift q j).r = n >>> (j + 1)

-- invariants:
-- 1) qr.r < d.
theorem div_rec_7_2 :
    (divRec (w := 4) (n := 7) (d := 2) { r := 0, q := 0 } 3) =
    { r := 1, q := 3 } := by
  simp [divRec, tryDivSubtractShift]

end BitVec
