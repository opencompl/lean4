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

set_option linter.missingDocs true

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

/--
If `x &&& y = 0`, then the carry bit `(x + y + 0)` is always `false` for any index `i`.
Intuitively, this is because a carry is only produced when at least two of `x`, `y`, and the
previous carry are true. However, since `x &&& y = 0`, at most one of `x, y` can be true,
and thus we never have a previous carry, which means that the sum cannot produce a carry.
-/
theorem carry_of_and_eq_zero {x y : BitVec w} (h : x &&& y = 0#w) : carry i x y false = false := by
  induction i with
  | zero => simp
  | succ i ih =>
    replace h := congrArg (·.getLsb i) h
    simp_all [carry_succ]

/-- The final carry bit when computing `x + y + c` is `true` iff `x.toNat + y.toNat + c.toNat ≥ 2^w`. -/
theorem carry_width {x y : BitVec w} :
    carry w x y c = decide (x.toNat + y.toNat + c.toNat ≥ 2^w) := by
  simp [carry]

/--
If `x &&& y = 0`, then addition does not overflow, and thus `(x + y).toNat = x.toNat + y.toNat`.
-/
theorem toNat_add_of_and_eq_zero {x y : BitVec w} (h : x &&& y = 0#w) :
    (x + y).toNat = x.toNat + y.toNat := by
  rw [toNat_add]
  apply Nat.mod_eq_of_lt
  suffices ¬ decide (x.toNat + y.toNat + false.toNat ≥ 2^w) by
    simp only [decide_eq_true_eq] at this
    omega
  rw [← carry_width]
  simp [not_eq_true, carry_of_and_eq_zero h]

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

/-- Addition of bitvectors is the same as bitwise or, if bitwise and is zero. -/
theorem add_eq_or_of_and_eq_zero {w : Nat} (x y : BitVec w)
    (h : x &&& y = 0#w) : x + y = x ||| y := by
  rw [add_eq_adc, adc, iunfoldr_replace (fun _ => false) (x ||| y)]
  · rfl
  · simp only [adcb, atLeastTwo, Bool.and_false, Bool.or_false, bne_false, getLsb_or,
    Prod.mk.injEq, and_eq_false_imp]
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

/--
A recurrence that describes multiplication as repeated addition.
Is useful for bitblasting multiplication.
-/
def mulRec (x y : BitVec w) (s : Nat) : BitVec w :=
  let cur := if y.getLsb s then (x <<< s) else 0
  match s with
  | 0 => cur
  | s + 1 => mulRec x y s + cur

theorem mulRec_zero_eq (x y : BitVec w) :
    mulRec x y 0 = if y.getLsb 0 then x else 0 := by
  simp [mulRec]

theorem mulRec_succ_eq (x y : BitVec w) (s : Nat) :
    mulRec x y (s + 1) = mulRec x y s + if y.getLsb (s + 1) then (x <<< (s + 1)) else 0 := rfl

/--
Recurrence lemma: truncating to `i+1` bits and then zero extending to `w`
equals truncating upto `i` bits `[0..i-1]`, and then adding the `i`th bit of `x`.
-/
theorem zeroExtend_truncate_succ_eq_zeroExtend_truncate_add_twoPow (x : BitVec w) (i : Nat) :
    zeroExtend w (x.truncate (i + 1)) =
      zeroExtend w (x.truncate i) + (x &&& twoPow w i) := by
  rw [add_eq_or_of_and_eq_zero]
  · ext k
    simp only [getLsb_zeroExtend, Fin.is_lt, decide_True, Bool.true_and, getLsb_or, getLsb_and]
    by_cases hik : i = k
    · subst hik
      simp
    · simp only [getLsb_twoPow, hik, decide_False, Bool.and_false, Bool.or_false]
      by_cases hik' : k < (i + 1)
      · have hik'' : k < i := by omega
        simp [hik', hik'']
      · have hik'' : ¬ (k < i) := by omega
        simp [hik', hik'']
  · ext k
    simp
    by_cases hi : x.getLsb i <;> simp [hi] <;> omega

/--
Recurrence lemma: multiplying `x` with the first `s` bits of `y` is the
same as truncating `y` to `s` bits, then zero extending to the original length,
and performing the multplication. -/
theorem mulRec_eq_mul_signExtend_truncate (x y : BitVec w) (s : Nat) :
    mulRec x y s = x * ((y.truncate (s + 1)).zeroExtend w) := by
  induction s
  case zero =>
    simp only [mulRec_zero_eq, ofNat_eq_ofNat, Nat.reduceAdd]
    by_cases y.getLsb 0
    case pos hy =>
      simp only [hy, ↓reduceIte, truncate, zeroExtend_one_eq_ofBool_getLsb_zero,
        ofBool_true, ofNat_eq_ofNat]
      rw [zeroExtend_ofNat_one_eq_ofNat_one_of_lt (by omega)]
      simp
    case neg hy =>
      simp [hy, zeroExtend_one_eq_ofBool_getLsb_zero]
  case succ s' hs =>
    rw [mulRec_succ_eq, hs]
    have heq :
      (if y.getLsb (s' + 1) = true then x <<< (s' + 1) else 0) =
        (x * (y &&& (BitVec.twoPow w (s' + 1)))) := by
      simp only [ofNat_eq_ofNat, and_twoPow]
      by_cases hy : y.getLsb (s' + 1) <;> simp [hy]
    rw [heq, ← BitVec.mul_add, ← zeroExtend_truncate_succ_eq_zeroExtend_truncate_add_twoPow]

theorem getLsb_mul (x y : BitVec w) (i : Nat) :
    (x * y).getLsb i = (mulRec x y w).getLsb i := by
  simp only [mulRec_eq_mul_signExtend_truncate]
  rw [truncate, ← truncate_eq_zeroExtend, ← truncate_eq_zeroExtend,
    truncate_truncate_of_le]
  · simp
  · omega

/-! ## shiftLeft recurrence for bitblasting -/

/--
`shiftLeftRec x y n` shifts `x` to the left by the first `n` bits of `y`.

The theorem `shiftLeft_eq_shiftLeftRec` proves the equivalence of `(x <<< y)` and `shiftLeftRec`.

Together with equations `shiftLeftRec_zero`, `shiftLeftRec_succ`,
this allows us to unfold `shiftLeft` into a circuit for bitblasting.
 -/
def shiftLeftRec (x : BitVec w₁) (y : BitVec w₂) (n : Nat) : BitVec w₁ :=
  let shiftAmt := (y &&& (twoPow w₂ n))
  match n with
  | 0 => x <<< shiftAmt
  | n + 1 => (shiftLeftRec x y n) <<< shiftAmt

@[simp]
theorem shiftLeftRec_zero {x : BitVec w₁} {y : BitVec w₂} :
    shiftLeftRec x y 0 = x <<< (y &&& twoPow w₂ 0)  := by
  simp [shiftLeftRec]

@[simp]
theorem shiftLeftRec_succ {x : BitVec w₁} {y : BitVec w₂} :
    shiftLeftRec x y (n + 1) = (shiftLeftRec x y n) <<< (y &&& twoPow w₂ (n + 1)) := by
  simp [shiftLeftRec]

/--
If `y &&& z = 0`, `x <<< (y ||| z) = x <<< y <<< z`.
This follows as `y &&& z = 0` implies `y ||| z = y + z`,
and thus `x <<< (y ||| z) = x <<< (y + z) = x <<< y <<< z`.
-/
theorem shiftLeft_or_of_and_eq_zero {x : BitVec w₁} {y z : BitVec w₂}
    (h : y &&& z = 0#w₂) :
    x <<< (y ||| z) = x <<< y <<< z := by
  rw [← add_eq_or_of_and_eq_zero _ _ h,
    shiftLeft_eq', toNat_add_of_and_eq_zero h]
  simp [shiftLeft_add]

/--
`shiftLeftRec x y n` shifts `x` to the left by the first `n` bits of `y`.
-/
theorem shiftLeftRec_eq {x : BitVec w₁} {y : BitVec w₂} {n : Nat} :
    shiftLeftRec x y n = x <<< (y.truncate (n + 1)).zeroExtend w₂ := by
  induction n generalizing x y
  case zero =>
    ext i
    simp only [shiftLeftRec_zero, twoPow_zero, Nat.reduceAdd, truncate_one,
      and_one_eq_zeroExtend_ofBool_getLsb]
  case succ n ih =>
    simp only [shiftLeftRec_succ, and_twoPow]
    rw [ih]
    by_cases h : y.getLsb (n + 1)
    · simp only [h, ↓reduceIte]
      rw [zeroExtend_truncate_succ_eq_zeroExtend_truncate_or_twoPow_of_getLsb_true h,
        shiftLeft_or_of_and_eq_zero]
      simp
    · simp only [h, false_eq_true, ↓reduceIte, shiftLeft_zero']
      rw [zeroExtend_truncate_succ_eq_zeroExtend_truncate_of_getLsb_false (i := n + 1)]
      simp [h]

/--
Show that `x <<< y` can be written in terms of `shiftLeftRec`.
This can be unfolded in terms of `shiftLeftRec_zero`, `shiftLeftRec_succ` for bitblasting.
-/
theorem shiftLeft_eq_shiftLeftRec (x : BitVec w₁) (y : BitVec w₂) :
    x <<< y = shiftLeftRec x y (w₂ - 1) := by
  rcases w₂ with rfl | w₂
  · simp [of_length_zero]
  · simp [shiftLeftRec_eq]

/- # udiv/urem recurrence for bitblasting -/

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

/-# Tons of Lemmas for Proving Bitblasting Correct -/



theorem BitVec.shiftLeft_eq_mul_twoPow (x : BitVec w) (n : Nat) :
    x <<< n = x * (BitVec.twoPow w n) := by
  ext i
  simp


@[simp]
theorem BitVec.or_zero (x : BitVec w) : x ||| 0#w = x := by
  ext i
  simp


theorem BitVec.sub_le_self_of_le {x y : BitVec w} (hx : y ≤ x) : x - y ≤ x := by sorry
/-
  simp [BitVec.lt_def, BitVec.le_def] at hx ⊢
  rw [← Nat.add_sub_assoc (by omega)]
  rw [Nat.add_comm]
  rw [Nat.add_sub_assoc (by omega)]
  rw [Nat.add_mod]
  simp only [mod_self, Nat.zero_add, mod_mod]
  rw [Nat.mod_eq_of_lt] <;> omega
-/

theorem BitVec.sub_lt_self_of_lt_of_lt {x y : BitVec w} (hx : y < x) (hy : 0 < y): x - y < x := by sorry
/-
  simp [BitVec.lt_def] at hx hy ⊢
  rw [← Nat.add_sub_assoc (by omega)]
  rw [Nat.add_comm]
  rw [Nat.add_sub_assoc (by omega)]
  rw [Nat.add_mod]
  simp only [mod_self, Nat.zero_add, mod_mod]
  rw [Nat.mod_eq_of_lt] <;> omega
-/

theorem BitVec.le_iff_not_lt {x y : BitVec w} : (¬ x < y) ↔ y ≤ x := by
  constructor <;>
    (intro h; simp [BitVec.lt_def, BitVec.le_def] at h ⊢; omega)

@[simp]
theorem BitVec.le_refl (x : BitVec w) : x ≤ x := by
  simp [BitVec.le_def]


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

theorem BitVec.add_assoc {x y z : BitVec w} : x + y + z = x + (y + z) := by
  apply eq_of_toNat_eq
  simp[Nat.add_assoc]

theorem BitVec.add_sub_assoc  {m k : BitVec w} (h : k ≤ m) (n : BitVec w) :
    n + m - k = n + (m - k) := by sorry
/-
  apply BitVec.eq_of_toNat_eq
  simp only [toNat_sub, toNat_add, mod_add_mod, add_mod_mod, Nat.add_assoc]
-/

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

theorem BitVec.add_sub_self_left {x y : BitVec w} : x + y - x = y := by sorry
/-
  apply eq_of_toNat_eq
  simp
  calc
    (x.toNat + y.toNat + (2 ^ w - x.toNat)) % 2 ^ w = (x.toNat + y.toNat + 2 ^ w - x.toNat) % 2 ^ w := by
      rw [Nat.add_sub_assoc (Nat.le_of_lt x.isLt)]
    _ = (x.toNat + y.toNat - x.toNat + 2 ^ w) % 2 ^ w := by rw [Nat.sub_add_comm]; omega
    _ = (y.toNat + 2 ^ w) % 2 ^ w := by rw [Nat.add_sub_self_left]
    _ = y.toNat % 2 ^ w := by simp
    _ = y.toNat := by simp [Nat.mod_eq_of_lt]
-/

theorem BitVec.add_sub_self_right {x y : BitVec w} : x + y - y = x := by
  rw [BitVec.add_comm]
  rw [BitVec.add_sub_self_left]

@[simp]
theorem BitVec.le_of_not_lt {x y : BitVec w} : ¬ x < y → y ≤ x := by
  simp [BitVec.lt_def, BitVec.le_def]

/--
if the MSB is false, then the arithmetic value of shifting
is the same as the original value times 2.
That is, if the msb is false, then shifting by 1 does not overflow.
Can be generalized to talk about shifting by `k` if the top `k` bits are false.
-/
theorem BitVec.toNat_shiftLeft_one_eq_mul_two_of_msb_false
   (x : BitVec w)
   (h : x.msb = false) :
    (x <<< 1).toNat = x.toNat * 2 := by
  simp only [toNat_shiftLeft]
  have h := (BitVec.msb_eq_false_iff_two_mul_lt x).mp h
  rw [Nat.shiftLeft_eq, Nat.mod_eq_of_lt (by omega)]

/- upon shifting left by one, if times 2 is less than 2^w, then we cannot overflow. -/
theorem BitVec.toNat_shiftLeft_one_eq_mul_two_of_lt
  (x : BitVec w)
  (hlt : x.toNat * 2 < 2 ^ w) :
    (x <<< 1).toNat = x.toNat * 2 := by
  simp only [toNat_shiftLeft]
  rw [Nat.shiftLeft_eq, Nat.mod_eq_of_lt (by omega)]

/--
The arithmetic version of:
If `n : Bitvec w` has only the low `k < w` bits set,
then `(n <<< 1 | b)` does not overflow.
-/
theorem mul_two_add_lt_two_pow_of_lt_two_pow_of_lt_two
    (hn : n < 2 ^ k) (hb : b < 2) (hk : k < w) :
    n * 2 + b < 2 ^ w := by
  have : k + 1 ≤ w := by omega
  have : 2^(k + 1) ≤ 2 ^w := by
    apply Nat.pow_le_pow_of_le_right (by decide) (by assumption)
  have : n ≤ 2 ^k - 1 := by omega
  have : n * 2 ≤ 2^k * 2 - 2 := by omega
  have : n * 2 + b ≤ 2^k * 2 - 1 := by omega
  have : n * 2 + b ≤ 2 ^(k + 1) - 1 := by omega
  have : n * 2 + b ≤ 2 ^w - 1 := by omega
  have : n * 2 + b < 2^w := by omega
  assumption

/--
This is used when proving the correctness of the divison algorithm,
where we know that `r < d`.
We then want to show that `r <<< 1 | b - d < d` as the loop invariant.
In arithmethic, this is the same as showing that
`r * 2 + 1 - d < d`, which this theorem establishes.
-/
theorem two_mul_add_sub_lt_of_lt_of_lt_two -- HERE HERE
  (h : a < x) (hy : y < 2):
  2 * a + y - x < x := by omega

/--
Variant of `BitVec.toNat_sub` that does not introduce a modulo.
-/
theorem BitVec.toNat_sub_of_lt {x y : BitVec w} (hy : y ≤ x) :
    (x - y).toNat = x.toNat - y.toNat := by sorry
/-
  simp only [toNat_sub]
  rw [← Nat.add_sub_assoc]
  · rw [Nat.sub_add_comm]
    · rw [Nat.add_mod]
      simp only [mod_self, Nat.add_zero, mod_mod]
      rw [Nat.mod_eq_of_lt]
      omega
    · simp only [le_def] at hy
      omega
  · omega
-/

/--
If `n : Bitvec w` has only the low `k < w` bits set,
then `(n <<< 1 | b)` does not overflow, and we can compute its value
as a multiply and add.
-/
theorem toNat_shiftLeft_or_zeroExtend_ofBool_eq (w : Nat)
    (r : BitVec w)
    (b : Bool)
    (hk : k < w)
    (hr : r.toNat < 2 ^ k) :
    (r <<< 1 ||| zeroExtend w (ofBool b)).toNat =
    (r.toNat * 2 + b.toNat) := by
  have : b.toNat = if b then 1 else 0 := by rcases b <;> rfl
  rw [this]
  have hk' : 2^k < 2^w := by
    apply Nat.pow_lt_pow_of_lt (by decide) (by omega)
  rcases w with rfl | w
  · omega -- contradiction, k < w
  · rw [← BitVec.add_eq_or_of_and_eq_zero]
    · simp only [toNat_add, toNat_shiftLeft, toNat_truncate, toNat_ofBool, toNat, add_mod_mod,
      mod_add_mod]
      rw [Nat.shiftLeft_eq]
      simp only [show (2 ^ 1 = 2) by decide]
      rw [Nat.mod_eq_of_lt]
      · rcases b with rfl | rfl <;> simp
      · apply mul_two_add_lt_two_pow_of_lt_two_pow_of_lt_two
        · exact hr
        · rcases b <;> decide
        · assumption
    · ext i
      simp only [getLsb_and, getLsb_shiftLeft, Fin.is_lt, decide_True, Bool.true_and,
        getLsb_zeroExtend, getLsb_ofBool, getLsb_zero, and_eq_false_imp, and_eq_true, not_eq_true',
        decide_eq_false_iff_not, Nat.not_lt, decide_eq_true_eq, and_imp]
      intros hi _ hi'
      omega

structure DivRemInput (w wr wn : Nat)
    (n : BitVec w)
    (d : BitVec w) : Type where
  q : BitVec w
  r : BitVec w
  hwr : wr ≤ w
  hwn : wn ≤ w
  hwrn : wr + wn = w
  hd : 0 < d
  hrd : r.toNat < d.toNat
  hrwr : r.toNat < 2^wr
  hqwr : q.toNat < 2^wr
  hdiv : n.toNat >>> wn = d.toNat * q.toNat + r.toNat

/-- In a valid DivRemInput, it is implied that `w > 0`. -/
def DivRemInput.hw (h : DivRemInput w wr wn n d) : 0 < w := by
  have hd := h.hd
  rcases w with rfl | w
  · have hcontra : d = 0#0 := by apply Subsingleton.elim
    rw [hcontra] at hd
    simp at hd
  · omega

/--
Make an initial state of the DivRemInput, for a given choice of
`n, d, q, r`. -/
def DivRemInput_init (w : Nat) (n d : BitVec w) (hw : 0 < w) (hd : 0#w < d) :
    DivRemInput w 0 w n d:= {
  q := 0#w
  r := 0#w
  hwr := by omega,
  hwn := by omega,
  hwrn := by omega,
  hd := by assumption
  hrd := by simp [BitVec.lt_def] at hd ⊢; assumption
  hrwr := by simp,
  hqwr := by simp,
  hdiv := by
    simp;
    rw [Nat.shiftRight_eq_div_pow]
    apply Nat.div_eq_of_lt n.isLt
}

@[simp]
theorem DivRemInput_init_q (w : Nat) (n d : BitVec w) (hw : 0 < w) (hd : 0#w < d) :
    (DivRemInput_init w n d hw hd).q = 0#w := by
  rfl

@[simp]
theorem DivRemInput_init_r (w : Nat) (n d : BitVec w) (hw : 0 < w) (hd : 0#w < d) :
    (DivRemInput_init w n d hw hd).r = 0#w := by
  rfl

theorem DivRemInput_implies_udiv_urem
  (h : DivRemInput w w 0 n d) :
    n.udiv d = h.q ∧ n.umod d = h.r := by
  apply div_characterized_of_mul_add_toNat
    (n := n) (d := d) (q := h.q) (r := h.r)
    (h.hd)
    (h.hrd)
    (by
      have hdiv := h.hdiv
      simp at hdiv
      omega
    )

structure ShiftSubtractInput (w wr wn : Nat) (n d: BitVec w)
  extends DivRemInput w wr wn n d : Type where
  hwn_lt : 0 < wn -- we can only call this function legally if we have dividend bits.


/--
In the shift subtract input, we have one more bit to spare,
so we do not overflow.
-/
def ShiftSubtractInput.wr_add_one_le_w
    (h : ShiftSubtractInput w wr wn n d) : wr + 1 ≤ w := by
  have hwrn := h.hwrn
  have hwn_lt := h.hwn_lt
  omega

def ShiftSubtractInput.wr_lt_w
    (h : ShiftSubtractInput w wr wn n d) : wr < w := by
  have hwr := h.wr_add_one_le_w
  omega

/--
In the shift subtract input, we have one more bit to spare,
so we do not overflow.
-/
def ShiftSubtractInput.wr_le_wr_sub_one
    (h : ShiftSubtractInput w wr wn n d) : wr ≤ w - 1 := by
  have hw := h.hw
  have hwrn := h.hwrn
  have hwn_lt := h.hwn_lt
  omega

/-- If we have extra bits to spare in `n`,
then the div rem input can be converted into a shift subtract input
to run a round of the shift subtracter. -/
def DivRemInput.toShiftSubtractInput
    (h : DivRemInput w wr (wn + 1) n d) :
  ShiftSubtractInput w wr (wn + 1) n d := {
    q := h.q,
    r := h.r
    hwr := h.hwr,
    hwn := h.hwn,
    hwrn := by have := h.hwrn; omega,
    hd := h.hd,
    hrd := h.hrd,
    hrwr := h.hrwr,
    hqwr := h.hqwr,
    hdiv := h.hdiv,
    hwn_lt := by omega
  }

def ShiftSubtractInput.nmsb (_ : ShiftSubtractInput w wr wn n d) :
    Bool := n.getLsb (wn - 1)

def DivRemInput.wr_eq_w_of_wn_eq_zero
    (h : DivRemInput w wr 0 n d) : DivRemInput w w 0 n d :=
  {
    q := h.q,
    r := h.r,
    hwr := by have := h.hwr; omega,
    hwn := h.hwn,
    hwrn := by have := h.hwrn; omega,
    hd := h.hd,
    hrd := h.hrd,
    hrwr := by have := h.hrwr; omega,
    hqwr := by have := h.hqwr; omega,
    hdiv := h.hdiv
  }

def concatBit' (x : BitVec w) (b : Bool) : BitVec w :=
  x <<< 1 ||| (BitVec.ofBool b).zeroExtend w

theorem concatBit'_lt (x : BitVec w) (b : Bool) :
  (concatBit' x b).toNat < 2 ^ w := (concatBit' x b).isLt

theorem toNat_concatBit'_eq (x : BitVec w) (b : Bool) (k : Nat)
  (hk : k < w) (hx : x.toNat < 2 ^ k) :
    (concatBit' x b).toNat  = x.toNat * 2 + b.toNat:= by
  simp only [concatBit']
  rw [toNat_shiftLeft_or_zeroExtend_ofBool_eq (k := k)]
  · omega
  · omega

theorem toNat_concatBit'_false_eq (x : BitVec w) (k : Nat)
  (hk : k < w) (hx : x.toNat < 2 ^ k) :
    (concatBit' x false).toNat  = x.toNat * 2 := by
  rw [toNat_concatBit'_eq (k := k) (hk := hk) (hx := hx)]
  simp

theorem toNat_concatBit'_lt (x : BitVec w) (b : Bool) (k : Nat)
  (hk : k < w) (hx : x.toNat < 2 ^ k) :
    (concatBit' x b).toNat < 2 ^ (k + 1) := by
  rw [toNat_concatBit'_eq x b k hk hx]
  apply mul_two_add_lt_two_pow_of_lt_two_pow_of_lt_two hx
  · rcases b with rfl | rfl <;> decide
  · omega

private theorem BitVec.shiftLeft_sub_eq_shiftLeft_shiftRight_or_zeroExtend_getLsb
    {x : BitVec w} {k : Nat} (hk' : 0 < k) :
    x >>> (k - 1) = ((x >>> k <<< 1) ||| ((BitVec.ofBool (x.getLsb (k - 1))).zeroExtend w)) := by
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

theorem ShiftSubtractInput.n_shiftr_wl_minus_one_eq_n_shiftr_wl_or_nmsb
    (h : ShiftSubtractInput w wr wn n d) :
    n >>> (wn - 1) = (n >>> wn).concatBit' (ShiftSubtractInput.nmsb h) := by
  rw [concatBit']
  rw [ShiftSubtractInput.nmsb]
  rw [BitVec.shiftLeft_sub_eq_shiftLeft_shiftRight_or_zeroExtend_getLsb]
  have hwn_lt := h.hwn_lt
  omega

/--
Shifting right by `n < w` yields a bitvector whose value
is less than `2^(w - n)`
-/
theorem BitVec.ushiftRight_lt (x : BitVec w) (n : Nat) (hn : n ≤ w) :
    (x >>> n).toNat < 2 ^ (w - n) := by
  rw [toNat_ushiftRight]
  rw [shiftRight_eq_div_pow]
  rw [Nat.div_lt_iff_lt_mul]
  · rw [Nat.pow_sub_mul_pow]
    · apply x.isLt
    · apply hn
  · apply Nat.pow_pos (by decide)

/-- The value of shifting by `wn - 1` equals
shifting by `wn` and grabbing the lsb at (wn - 1) -/
theorem ShiftSubtractInput.toNat_n_shiftr_wl_minus_one_eq_n_shiftr_wl_plus_nmsb
    (h : ShiftSubtractInput w wr wn n d) :
    n.toNat >>> (wn - 1) = (n.toNat >>> wn) * 2 + h.nmsb.toNat := by
  have hn := ShiftSubtractInput.n_shiftr_wl_minus_one_eq_n_shiftr_wl_or_nmsb h
  obtain hn : (n >>> (wn - 1)).toNat = ((n >>> wn).concatBit' h.nmsb).toNat := by
    simp [hn]
  simp at hn
  rw [toNat_concatBit'_eq (k := w - wn)] at hn
  · rw [hn]
    rw [toNat_ushiftRight]
  · have := h.hwn_lt
    have := h.hw
    omega
  · apply BitVec.ushiftRight_lt
    have := h.hwrn
    omega

/--
One round of the division algorithm, that tries to perform a subtract shift.
Note that this is only called when `r.msb = false`, so we will not overflow.
This means that `r'.toNat = r.toNat *2 + q.toNat`
-/
def divSubtractShift (h : ShiftSubtractInput w wr wn n d) :
   DivRemInput w (wr + 1) (wn - 1) n d :=
  let r' := concatBit' h.r h.nmsb
  let rltd : Bool := r' < d -- true if r' < d. In this case, we don't have a quotient bit.
  let q := h.q.concatBit' !rltd -- if r ≥ d, then we have a quotient bit.
  if hrltd : rltd
  then {
    q := q,
    r := r',
    hwr := by
      have := h.hwr
      have := h.wr_add_one_le_w
      omega,
    hwn := by
      have := h.hwn
      omega,
    hwrn := by
      have := h.hwrn
      have := h.wr_add_one_le_w
      omega,
    hd := h.hd,
    hrd := by
      simp [rltd] at hrltd
      simp [BitVec.lt_def] at hrltd
      assumption,
    hrwr := by
      simp [r']
      apply toNat_concatBit'_lt
      · exact h.wr_add_one_le_w
      · exact h.hrwr,
    hqwr := by
      simp [q]
      apply toNat_concatBit'_lt
      · exact h.wr_add_one_le_w
      · exact h.hqwr,
    hdiv := by
      rw [h.toNat_n_shiftr_wl_minus_one_eq_n_shiftr_wl_plus_nmsb]
      simp only [r']
      rw [h.hdiv]
      rw [toNat_concatBit'_eq (x := h.r)
        (k := wr)
        (hk := h.wr_lt_w)
        (hx := h.hrwr)]
      simp only [q]
      simp only [hrltd, Bool.not_true]
      have hq' := toNat_concatBit'_false_eq h.q wr h.wr_lt_w h.hqwr
      rw [hq']
      rw [← Nat.mul_assoc]
      rw [Nat.add_mul]
      rw [Nat.add_assoc]
  }
  else {
    q := q,
    r := r' - d,
    hwr := by
      have := h.hwr
      have := h.wr_add_one_le_w
      omega,
    hwn := by
      have := h.hwn
      omega,
    hwrn := by
      have := h.hwrn
      have := h.wr_add_one_le_w
      omega,
    hd := h.hd,
    hrd := by
      simp [rltd] at hrltd
      simp [BitVec.lt_def] at hrltd
      have hr := h.hrd
      -- | TODO: make this a field.
      have hr' : h.r < d := by simp [BitVec.lt_def]; exact hr
      rw [BitVec.toNat_sub_of_lt hrltd]
      simp only [r']
      rw [toNat_concatBit'_eq (x := h.r)
        (k := wr)
        (hk := h.wr_lt_w)
        (hx := h.hrwr)]
      rw [Nat.mul_comm] -- TODO: canonicalize an order between w*2 and 2*w
      apply two_mul_add_sub_lt_of_lt_of_lt_two
      · exact hr
      · apply Bool.toNat_lt
    hrwr := by
      simp only [r']
      /- TODO: this proof is repeated, lift it to above the structure building. -/
      have hdr' : ¬ (r' < d) := by
        simp [rltd] at hrltd
        assumption
      have hdr' : d ≤ r' := BitVec.le_iff_not_lt.mp hdr'
      rw [BitVec.toNat_sub_of_lt hdr']
      have hr' : r'.toNat < 2 ^ (wr + 1) := by
        simp [r']
        apply toNat_concatBit'_lt
        · exact h.wr_add_one_le_w
        · exact h.hrwr
      omega
    hqwr := by
      simp [q]
      apply toNat_concatBit'_lt
      · exact h.wr_add_one_le_w
      · exact h.hqwr,
    hdiv := by
      rw [h.toNat_n_shiftr_wl_minus_one_eq_n_shiftr_wl_plus_nmsb]
      have hdr' : ¬ (r' < d) := by
        simp [rltd] at hrltd
        assumption
      have hdr' : d ≤ r' := BitVec.le_iff_not_lt.mp hdr'
      rw [BitVec.toNat_sub_of_lt hdr']
      simp only [r']
      rw [h.hdiv]
      rw [toNat_concatBit'_eq (x := h.r)
        (k := wr)
        (hk := h.wr_lt_w)
        (hx := h.hrwr)]
      simp only [q]
      rw [toNat_concatBit'_eq (x := h.q)
        (k := wr)
        (hk := h.wr_lt_w)
        (hx := h.hqwr)]
      simp only [hrltd, Bool.not_false, toNat_true]
      simp [Nat.mul_add]
      apply Eq.symm
      calc
        _ = d.toNat * (h.q.toNat * 2) + d.toNat + (h.r.toNat * 2 + h.nmsb.toNat - d.toNat) :=
          by rfl
        _ = d.toNat * (h.q.toNat * 2) + d.toNat - d.toNat + (h.r.toNat * 2 + h.nmsb.toNat) := by
          simp
          rw [Nat.add_assoc]
          congr 1
          rw [Nat.add_sub_cancel']
          simp only [r'] at hdr'
          simp only [BitVec.le_def] at hdr'
          rw [BitVec.toNat_concatBit'_eq
            (x := h.r)
            (b := h.nmsb)
            (k := wr)
            (hk := h.wr_lt_w)
            (hx := h.hrwr)] at hdr'
          assumption
        _ = d.toNat * (h.q.toNat * 2) + (h.r.toNat * 2 + h.nmsb.toNat) := by
          rw [Nat.add_sub_cancel]
        _ = (d.toNat * h.q.toNat + h.r.toNat) * 2 + h.nmsb.toNat := by
          rw [← Nat.add_assoc]
          rw [← Nat.mul_assoc]
          rw [Nat.add_mul]
        _ = (d.toNat * h.q.toNat + h.r.toNat) * 2 + h.nmsb.toNat := rfl
  }

/-- info: 'BitVec.divSubtractShift' depends on axioms: [propext, Classical.choice, Quot.sound] -/
#guard_msgs in #print axioms divSubtractShift

/--
Core divsion recurrence.
We have three widths at play:
- w, the total bitwidth
- wr, the effective bitwidth of the reminder
- wn, the effective bitwidth of the dividend.
- We have the invariant that wn + wr = w.

See that when it is called, we will know that :
  - r < [2^wr = 2^(w - wn)]
    which allows us to safely shift left, since it is of length n.
    In particular, since 'wn' decreases in the course of the recursion,
    will will allow larger and larger values, and at the step where 'wn = 0',
    we will have `r < 2^w`, which is no longer sufficient to allow for a shift left.
    Thus, at this step, we will stop and return a full remainder.
    So, the remainder is morally of length `w - wn`.
  - d > 0
  - r < d
  - n.toNat >>> wr =
-/
def divRec' (h : DivRemInput w wr wn n d) :
    DivRemInput w w 0 n d :=
  match wn with
  | 0 => h.wr_eq_w_of_wn_eq_zero
  | _ + 1 =>
    let new := divSubtractShift h.toShiftSubtractInput
    divRec' new

/-- info: 'BitVec.divRec'' depends on axioms: [propext, Classical.choice, Quot.sound] -/
#guard_msgs in #print axioms divRec'

theorem divRec'_correct (n d : BitVec w) (hw : 0 < w) (hd : 0 < d) :
    let out := divRec' (DivRemInput_init w n d hw hd)
    n.udiv d = out.q ∧ n.umod d = out.r := by
  simp
  apply DivRemInput_implies_udiv_urem

def divSubtractShiftNonDep (n q r d : BitVec w) (wn : Nat) : BitVec w × BitVec w :=
  let r' := concatBit' r (n.getLsb (wn - 1))
  let rltd : Bool := r' < d
  let q := q.concatBit' !rltd
  if rltd
  then (q, r')
  else (q, r' - d)

@[simp]
theorem DivRemInput.toShiftSubtractInput_r_eq_r
    (h : DivRemInput w wr (wn + 1) n d) :
    (h.toShiftSubtractInput).r = h.r := by
  simp [toShiftSubtractInput]

@[simp]
theorem DivRemInput.toShiftSubtractInput_q_eq_q
    (h : DivRemInput w wr (wn + 1) n d) :
    (h.toShiftSubtractInput).q = h.q := by
  simp only [toShiftSubtractInput]

theorem divSubtractShift_eq_divSubtractShiftNonDep
    (h : ShiftSubtractInput w wr wn n d) :
    ((divSubtractShift h).q, (divSubtractShift h).r) = divSubtractShiftNonDep n h.q h.r d wn := by
  simp [divSubtractShift, divSubtractShiftNonDep, ShiftSubtractInput.nmsb]
  by_cases h : h.r.concatBit' (n.getLsb (wn - 1)) < d <;>
    simp only [h, ↓reduceDite, decide_True, Bool.not_true, ↓reduceIte]

@[simp]
theorem q_divSubtractShift_eq_fst_divSubtractShiftNonDep'
    (h : DivRemInput w wr (wn + 1) n d) :
    (divSubtractShift h.toShiftSubtractInput).q  =
    (divSubtractShiftNonDep n h.q h.r d (wn + 1)).fst := by
  simp [divSubtractShift,
    divSubtractShiftNonDep,
    ShiftSubtractInput.nmsb]
  by_cases cond : h.r.concatBit' (n.getLsb wn) < d <;>
    simp only [cond, ↓reduceDite, decide_True, Bool.not_true, ↓reduceIte]

@[simp]
theorem r_divSubtractShift_eq_snd_divSubtractShiftNonDep'
    (h : DivRemInput w wr (wn + 1) n d) :
    (divSubtractShift h.toShiftSubtractInput).r =
    (divSubtractShiftNonDep n h.q h.r d (wn + 1)).snd := by
  simp [divSubtractShift,
    divSubtractShiftNonDep,
    ShiftSubtractInput.nmsb]
  by_cases cond : h.r.concatBit' (n.getLsb wn) < d <;>
    simp only [cond, ↓reduceDite, decide_True, Bool.not_true, ↓reduceIte]

theorem divSubtractShift_eq_divSubtractShiftNonDep'
    (h : DivRemInput w wr (wn + 1) n d) :
    ((divSubtractShift h.toShiftSubtractInput).q, (divSubtractShift h.toShiftSubtractInput).r) =
    divSubtractShiftNonDep n h.q h.r d (wn + 1) := by
  simp [divSubtractShift, divSubtractShiftNonDep, ShiftSubtractInput.nmsb]
  by_cases h : h.r.concatBit' (n.getLsb wn)  < d <;>
    simp only [h, ↓reduceDite, decide_True, Bool.not_true, ↓reduceIte]

def divRecNondep (n q r d : BitVec w) (wn : Nat) :
    BitVec w × BitVec w :=
  match wn with
  | 0 => (q, r)
  | wn + 1 =>
    let (q', r') := divSubtractShiftNonDep n q r d (wn + 1)
    divRecNondep n q' r' d wn

theorem divRec_eq_divRecNonDep  (h h' : DivRemInput w wr wn n d)
    (hh' : h.q = h'.q ∧ h.r = h'.r):
    ((divRec' h).q, (divRec' h).r) = divRecNondep n h'.q h'.r d wn := by
  induction wn generalizing w wr n d
  case zero =>
    simp [divRec', divRecNondep, DivRemInput.wr_eq_w_of_wn_eq_zero]
    simp [hh'.1, hh'.2]
  case succ wn ih =>
    simp [divRecNondep, divRec']
    rw[← divSubtractShift_eq_divSubtractShiftNonDep']
    apply ih <;>
      simp [q_divSubtractShift_eq_fst_divSubtractShiftNonDep',
        r_divSubtractShift_eq_snd_divSubtractShiftNonDep',
        hh'.1, hh'.2]

-- def concatBit' (x : BitVec w) (b : Bool) : BitVec w :=
--   x <<< 1 ||| (BitVec.ofBool b).zeroExtend w

theorem divSubtractShiftNonDep_fst (n q r d : BitVec w) (wn : Nat) :
    (divSubtractShiftNonDep n q r d wn).fst =
      q.concatBit' !decide (r.concatBit' (n.getLsb (wn - 1)) < d) := by
  simp [divSubtractShiftNonDep]
  by_cases h : r.concatBit' (n.getLsb (wn - 1)) < d <;>
    simp [h]

theorem divSubtractShiftNonDep_snd (n q r d : BitVec w) (wn : Nat) :
    (divSubtractShiftNonDep n q r d wn).snd =
    if r.concatBit' (n.getLsb (wn - 1)) < d then r.concatBit' (n.getLsb (wn - 1))
    else r.concatBit' (n.getLsb (wn - 1)) - d := by
  simp [divSubtractShiftNonDep]
  by_cases h : r.concatBit' (n.getLsb (wn - 1)) < d <;> simp [h]

theorem divRecNonDep_zero (n q r d : BitVec w) : divRecNondep n q r d 0 = (q, r) := by simp [divRecNondep]

theorem divRecNonDep_succ (n q r d : BitVec w) (wn : Nat) :
    (divRecNondep n q r d (wn + 1) =
      divRecNondep n (divSubtractShiftNonDep n q r d (wn + 1)).1
      (divSubtractShiftNonDep n q r d (wn + 1)).2 d wn) := by
  simp [divRecNondep, divSubtractShiftNonDep]

theorem divRecNonDep_correct (n d : BitVec w) (hw : 0 < w) (hd : 0 < d) :
    let out := divRecNondep n 0#w 0#w d w
    n.udiv d = out.fst ∧ n.umod d = out.snd := by
  simp
  have heq := divRec_eq_divRecNonDep (DivRemInput_init w n d hw hd) (DivRemInput_init w n d hw hd)
    (by simp)
  simp at heq
  have hcorrect := divRec'_correct n d hw hd
  obtain ⟨hqcorrect, hrcorrect⟩ := hcorrect
  rw [hqcorrect, hrcorrect]
  have heq_q : (divRec' (DivRemInput_init w n d hw hd)).q =
      (n.divRecNondep (0#w) (0#w) d w).fst := by
    rw [← heq]
  have heq_r : (divRec' (DivRemInput_init w n d hw hd)).r =
      (n.divRecNondep (0#w) (0#w) d w).snd := by
    rw [← heq]
  simp [heq_q, heq_r]
/--
info: 'BitVec.divRecNonDep_correct' depends on axioms: [propext, Classical.choice, Quot.sound]
-/
#guard_msgs in #print axioms divRecNonDep_correct
/- ### Arithmetic shift right (sshiftRight) recurrence -/

/--
`sshiftRightRec x y n` shifts `x` arithmetically/signed to the right by the first `n` bits of `y`.
The theorem `sshiftRight_eq_sshiftRightRec` proves the equivalence of `(x.sshiftRight y)` and `sshiftRightRec`.
Together with equations `sshiftRightRec_zero`, `sshiftRightRec_succ`,
this allows us to unfold `sshiftRight` into a circuit for bitblasting.
-/
def sshiftRightRec (x : BitVec w₁) (y : BitVec w₂) (n : Nat) : BitVec w₁ :=
  let shiftAmt := (y &&& (twoPow w₂ n))
  match n with
  | 0 => x.sshiftRight' shiftAmt
  | n + 1 => (sshiftRightRec x y n).sshiftRight' shiftAmt

@[simp]
theorem sshiftRightRec_zero_eq (x : BitVec w₁) (y : BitVec w₂) :
    sshiftRightRec x y 0 = x.sshiftRight' (y &&& 1#w₂) := by
  simp only [sshiftRightRec, twoPow_zero]

@[simp]
theorem sshiftRightRec_succ_eq (x : BitVec w₁) (y : BitVec w₂) (n : Nat) :
    sshiftRightRec x y (n + 1) = (sshiftRightRec x y n).sshiftRight' (y &&& twoPow w₂ (n + 1)) := by
  simp [sshiftRightRec]

/--
If `y &&& z = 0`, `x.sshiftRight (y ||| z) = (x.sshiftRight y).sshiftRight z`.
This follows as `y &&& z = 0` implies `y ||| z = y + z`,
and thus `x.sshiftRight (y ||| z) = x.sshiftRight (y + z) = (x.sshiftRight y).sshiftRight z`.
-/
theorem sshiftRight'_or_of_and_eq_zero {x : BitVec w₁} {y z : BitVec w₂}
    (h : y &&& z = 0#w₂) :
    x.sshiftRight' (y ||| z) = (x.sshiftRight' y).sshiftRight' z := by
  simp [sshiftRight', ← add_eq_or_of_and_eq_zero _ _ h,
    toNat_add_of_and_eq_zero h, sshiftRight_add]

theorem sshiftRightRec_eq (x : BitVec w₁) (y : BitVec w₂) (n : Nat) :
    sshiftRightRec x y n = x.sshiftRight' ((y.truncate (n + 1)).zeroExtend w₂) := by
  induction n generalizing x y
  case zero =>
    ext i
    simp [twoPow_zero, Nat.reduceAdd, and_one_eq_zeroExtend_ofBool_getLsb, truncate_one]
  case succ n ih =>
    simp only [sshiftRightRec_succ_eq, and_twoPow, ih]
    by_cases h : y.getLsb (n + 1)
    · rw [zeroExtend_truncate_succ_eq_zeroExtend_truncate_or_twoPow_of_getLsb_true h,
        sshiftRight'_or_of_and_eq_zero (by simp), h]
      simp
    · rw [zeroExtend_truncate_succ_eq_zeroExtend_truncate_of_getLsb_false (i := n + 1)
        (by simp [h])]
      simp [h]

/--
Show that `x.sshiftRight y` can be written in terms of `sshiftRightRec`.
This can be unfolded in terms of `sshiftRightRec_zero_eq`, `sshiftRightRec_succ_eq` for bitblasting.
-/
theorem sshiftRight_eq_sshiftRightRec (x : BitVec w₁) (y : BitVec w₂) :
    (x.sshiftRight' y).getLsb i = (sshiftRightRec x y (w₂ - 1)).getLsb i := by
  rcases w₂ with rfl | w₂
  · simp [of_length_zero]
  · simp [sshiftRightRec_eq]

/- ### Logical shift right (ushiftRight) recurrence for bitblasting -/

/--
`ushiftRightRec x y n` shifts `x` logically to the right by the first `n` bits of `y`.

The theorem `shiftRight_eq_ushiftRightRec` proves the equivalence
of `(x >>> y)` and `ushiftRightRec`.

Together with equations `ushiftRightRec_zero`, `ushiftRightRec_succ`,
this allows us to unfold `ushiftRight` into a circuit for bitblasting.
-/
def ushiftRightRec (x : BitVec w₁) (y : BitVec w₂) (n : Nat) : BitVec w₁ :=
  let shiftAmt := (y &&& (twoPow w₂ n))
  match n with
  | 0 => x >>> shiftAmt
  | n + 1 => (ushiftRightRec x y n) >>> shiftAmt

@[simp]
theorem ushiftRightRec_zero (x : BitVec w₁) (y : BitVec w₂) :
    ushiftRightRec x y 0 = x >>> (y &&& twoPow w₂ 0) := by
  simp [ushiftRightRec]

@[simp]
theorem ushiftRightRec_succ (x : BitVec w₁) (y : BitVec w₂) :
    ushiftRightRec x y (n + 1) = (ushiftRightRec x y n) >>> (y &&& twoPow w₂ (n + 1)) := by
  simp [ushiftRightRec]

/--
If `y &&& z = 0`, `x >>> (y ||| z) = x >>> y >>> z`.
This follows as `y &&& z = 0` implies `y ||| z = y + z`,
and thus `x >>> (y ||| z) = x >>> (y + z) = x >>> y >>> z`.
-/
theorem ushiftRight'_or_of_and_eq_zero {x : BitVec w₁} {y z : BitVec w₂}
    (h : y &&& z = 0#w₂) :
    x >>> (y ||| z) = x >>> y >>> z := by
  simp [← add_eq_or_of_and_eq_zero _ _ h, toNat_add_of_and_eq_zero h, shiftRight_add]

theorem ushiftRightRec_eq (x : BitVec w₁) (y : BitVec w₂) (n : Nat) :
    ushiftRightRec x y n = x >>> (y.truncate (n + 1)).zeroExtend w₂ := by
  induction n generalizing x y
  case zero =>
    ext i
    simp only [ushiftRightRec_zero, twoPow_zero, Nat.reduceAdd,
      and_one_eq_zeroExtend_ofBool_getLsb, truncate_one]
  case succ n ih =>
    simp only [ushiftRightRec_succ, and_twoPow]
    rw [ih]
    by_cases h : y.getLsb (n + 1) <;> simp only [h, ↓reduceIte]
    · rw [zeroExtend_truncate_succ_eq_zeroExtend_truncate_or_twoPow_of_getLsb_true h,
        ushiftRight'_or_of_and_eq_zero]
      simp
    · simp [zeroExtend_truncate_succ_eq_zeroExtend_truncate_of_getLsb_false, h]

/--
Show that `x >>> y` can be written in terms of `ushiftRightRec`.
This can be unfolded in terms of `ushiftRightRec_zero`, `ushiftRightRec_succ` for bitblasting.
-/
theorem shiftRight_eq_ushiftRightRec (x : BitVec w₁) (y : BitVec w₂) :
    x >>> y = ushiftRightRec x y (w₂ - 1) := by
  rcases w₂ with rfl | w₂
  · simp [of_length_zero]
  · simp [ushiftRightRec_eq]

end BitVec
