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
    carry (i+1) x y c = atLeastTwo (x.getLsbD i) (y.getLsbD i) (carry i x y c) := by
  simp only [carry, mod_two_pow_succ, atLeastTwo, getLsbD]
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
    replace h := congrArg (·.getLsbD i) h
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
def adcb (x y c : Bool) : Bool × Bool := (atLeastTwo x y c, x ^^ (y ^^ c))

/-- Bitwise addition implemented via a ripple carry adder. -/
def adc (x y : BitVec w) : Bool → Bool × BitVec w :=
  iunfoldr fun (i : Fin w) c => adcb (x.getLsbD i) (y.getLsbD i) c

theorem getLsbD_add_add_bool {i : Nat} (i_lt : i < w) (x y : BitVec w) (c : Bool) :
    getLsbD (x + y + setWidth w (ofBool c)) i =
      (getLsbD x i ^^ (getLsbD y i ^^ carry i x y c)) := by
  let ⟨x, x_lt⟩ := x
  let ⟨y, y_lt⟩ := y
  simp only [getLsbD, toNat_add, toNat_setWidth, i_lt, toNat_ofFin, toNat_ofBool,
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

theorem getLsbD_add {i : Nat} (i_lt : i < w) (x y : BitVec w) :
    getLsbD (x + y) i =
      (getLsbD x i ^^ (getLsbD y i ^^ carry i x y false)) := by
  simpa using getLsbD_add_add_bool i_lt x y false

theorem adc_spec (x y : BitVec w) (c : Bool) :
    adc x y c = (carry w x y c, x + y + setWidth w (ofBool c)) := by
  simp only [adc]
  apply iunfoldr_replace
          (fun i => carry i x y c)
          (x + y + setWidth w (ofBool c))
          c
  case init =>
    simp [carry, Nat.mod_one]
    cases c <;> rfl
  case step =>
    simp [adcb, Prod.mk.injEq, carry_succ, getLsbD_add_add_bool]

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
  · simp only [adcb, atLeastTwo, Bool.and_false, Bool.or_false, bne_false, getLsbD_or,
    Prod.mk.injEq, and_eq_false_imp]
    intros i
    replace h : (x &&& y).getLsbD i = (0#w).getLsbD i := by rw [h]
    simp only [getLsbD_and, getLsbD_zero, and_eq_false_imp] at h
    constructor
    · intros hx
      simp_all [hx]
    · by_cases hx : x.getLsbD i <;> simp_all [hx]

/-! ### Negation -/

theorem bit_not_testBit (x : BitVec w) (i : Fin w) :
  getLsbD (((iunfoldr (fun (i : Fin w) c => (c, !(x.getLsbD i)))) ()).snd) i.val = !(getLsbD x i.val) := by
  apply iunfoldr_getLsbD (fun _ => ()) i (by simp)

theorem bit_not_add_self (x : BitVec w) :
  ((iunfoldr (fun (i : Fin w) c => (c, !(x.getLsbD i)))) ()).snd + x  = -1 := by
  simp only [add_eq_adc]
  apply iunfoldr_replace_snd (fun _ => false) (-1) false rfl
  intro i; simp only [ BitVec.not, adcb, testBit_toNat]
  rw [iunfoldr_replace_snd (fun _ => ()) (((iunfoldr (fun i c => (c, !(x.getLsbD i)))) ()).snd)]
  <;> simp [bit_not_testBit, negOne_eq_allOnes, getLsbD_allOnes]

theorem bit_not_eq_not (x : BitVec w) :
  ((iunfoldr (fun i c => (c, !(x.getLsbD i)))) ()).snd = ~~~ x := by
  simp [←allOnes_sub_eq_not, BitVec.eq_sub_iff_add_eq.mpr (bit_not_add_self x), ←negOne_eq_allOnes]

theorem bit_neg_eq_neg (x : BitVec w) : -x = (adc (((iunfoldr (fun (i : Fin w) c => (c, !(x.getLsbD i)))) ()).snd) (BitVec.ofNat w 1) false).snd:= by
  simp only [← add_eq_adc]
  rw [iunfoldr_replace_snd ((fun _ => ())) (((iunfoldr (fun (i : Fin w) c => (c, !(x.getLsbD i)))) ()).snd) _ rfl]
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
  let cur := if y.getLsbD s then (x <<< s) else 0
  match s with
  | 0 => cur
  | s + 1 => mulRec x y s + cur

theorem mulRec_zero_eq (x y : BitVec w) :
    mulRec x y 0 = if y.getLsbD 0 then x else 0 := by
  simp [mulRec]

theorem mulRec_succ_eq (x y : BitVec w) (s : Nat) :
    mulRec x y (s + 1) = mulRec x y s + if y.getLsbD (s + 1) then (x <<< (s + 1)) else 0 := rfl

/--
Recurrence lemma: truncating to `i+1` bits and then zero extending to `w`
equals truncating upto `i` bits `[0..i-1]`, and then adding the `i`th bit of `x`.
-/
theorem setWidth_setWidth_succ_eq_setWidth_setWidth_add_twoPow (x : BitVec w) (i : Nat) :
    setWidth w (x.setWidth (i + 1)) =
      setWidth w (x.setWidth i) + (x &&& twoPow w i) := by
  rw [add_eq_or_of_and_eq_zero]
  · ext k
    simp only [getLsbD_setWidth, Fin.is_lt, decide_True, Bool.true_and, getLsbD_or, getLsbD_and]
    by_cases hik : i = k
    · subst hik
      simp
    · simp only [getLsbD_twoPow, hik, decide_False, Bool.and_false, Bool.or_false]
      by_cases hik' : k < (i + 1)
      · have hik'' : k < i := by omega
        simp [hik', hik'']
      · have hik'' : ¬ (k < i) := by omega
        simp [hik', hik'']
  · ext k
    simp only [and_twoPow, getLsbD_and, getLsbD_setWidth, Fin.is_lt, decide_True, Bool.true_and,
      getLsbD_zero, and_eq_false_imp, and_eq_true, decide_eq_true_eq, and_imp]
    by_cases hi : x.getLsbD i <;> simp [hi] <;> omega

@[deprecated setWidth_setWidth_succ_eq_setWidth_setWidth_add_twoPow (since := "2024-09-18"),
  inherit_doc setWidth_setWidth_succ_eq_setWidth_setWidth_add_twoPow]
abbrev zeroExtend_truncate_succ_eq_zeroExtend_truncate_add_twoPow :=
  @setWidth_setWidth_succ_eq_setWidth_setWidth_add_twoPow

/--
Recurrence lemma: multiplying `x` with the first `s` bits of `y` is the
same as truncating `y` to `s` bits, then zero extending to the original length,
and performing the multplication. -/
theorem mulRec_eq_mul_signExtend_setWidth (x y : BitVec w) (s : Nat) :
    mulRec x y s = x * ((y.setWidth (s + 1)).setWidth w) := by
  induction s
  case zero =>
    simp only [mulRec_zero_eq, ofNat_eq_ofNat, Nat.reduceAdd]
    by_cases y.getLsbD 0
    case pos hy =>
      simp only [hy, ↓reduceIte, setWidth_one_eq_ofBool_getLsb_zero,
        ofBool_true, ofNat_eq_ofNat]
      rw [setWidth_ofNat_one_eq_ofNat_one_of_lt (by omega)]
      simp
    case neg hy =>
      simp [hy, setWidth_one_eq_ofBool_getLsb_zero]
  case succ s' hs =>
    rw [mulRec_succ_eq, hs]
    have heq :
      (if y.getLsbD (s' + 1) = true then x <<< (s' + 1) else 0) =
        (x * (y &&& (BitVec.twoPow w (s' + 1)))) := by
      simp only [ofNat_eq_ofNat, and_twoPow]
      by_cases hy : y.getLsbD (s' + 1) <;> simp [hy]
    rw [heq, ← BitVec.mul_add, ← setWidth_setWidth_succ_eq_setWidth_setWidth_add_twoPow]

@[deprecated mulRec_eq_mul_signExtend_setWidth (since := "2024-09-18"),
  inherit_doc mulRec_eq_mul_signExtend_setWidth]
abbrev mulRec_eq_mul_signExtend_truncate := @mulRec_eq_mul_signExtend_setWidth

theorem getLsbD_mul (x y : BitVec w) (i : Nat) :
    (x * y).getLsbD i = (mulRec x y w).getLsbD i := by
  simp only [mulRec_eq_mul_signExtend_setWidth]
  rw [setWidth_setWidth_of_le]
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
    shiftLeftRec x y n = x <<< (y.setWidth (n + 1)).setWidth w₂ := by
  induction n generalizing x y
  case zero =>
    ext i
    simp only [shiftLeftRec_zero, twoPow_zero, Nat.reduceAdd, setWidth_one,
      and_one_eq_setWidth_ofBool_getLsbD]
  case succ n ih =>
    simp only [shiftLeftRec_succ, and_twoPow]
    rw [ih]
    by_cases h : y.getLsbD (n + 1)
    · simp only [h, ↓reduceIte]
      rw [setWidth_setWidth_succ_eq_setWidth_setWidth_or_twoPow_of_getLsbD_true h,
        shiftLeft_or_of_and_eq_zero]
      simp [and_twoPow]
    · simp only [h, false_eq_true, ↓reduceIte, shiftLeft_zero']
      rw [setWidth_setWidth_succ_eq_setWidth_setWidth_of_getLsbD_false (i := n + 1)]
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
    sshiftRightRec x y n = x.sshiftRight' ((y.setWidth (n + 1)).setWidth w₂) := by
  induction n generalizing x y
  case zero =>
    ext i
    simp [twoPow_zero, Nat.reduceAdd, and_one_eq_setWidth_ofBool_getLsbD, setWidth_one]
  case succ n ih =>
    simp only [sshiftRightRec_succ_eq, and_twoPow, ih]
    by_cases h : y.getLsbD (n + 1)
    · rw [setWidth_setWidth_succ_eq_setWidth_setWidth_or_twoPow_of_getLsbD_true h,
        sshiftRight'_or_of_and_eq_zero (by simp [and_twoPow]), h]
      simp
    · rw [setWidth_setWidth_succ_eq_setWidth_setWidth_of_getLsbD_false (i := n + 1)
        (by simp [h])]
      simp [h]

/--
Show that `x.sshiftRight y` can be written in terms of `sshiftRightRec`.
This can be unfolded in terms of `sshiftRightRec_zero_eq`, `sshiftRightRec_succ_eq` for bitblasting.
-/
theorem sshiftRight_eq_sshiftRightRec (x : BitVec w₁) (y : BitVec w₂) :
    (x.sshiftRight' y).getLsbD i = (sshiftRightRec x y (w₂ - 1)).getLsbD i := by
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
    ushiftRightRec x y n = x >>> (y.setWidth (n + 1)).setWidth w₂ := by
  induction n generalizing x y
  case zero =>
    ext i
    simp only [ushiftRightRec_zero, twoPow_zero, Nat.reduceAdd,
      and_one_eq_setWidth_ofBool_getLsbD, setWidth_one]
  case succ n ih =>
    simp only [ushiftRightRec_succ, and_twoPow]
    rw [ih]
    by_cases h : y.getLsbD (n + 1) <;> simp only [h, ↓reduceIte]
    · rw [setWidth_setWidth_succ_eq_setWidth_setWidth_or_twoPow_of_getLsbD_true h,
        ushiftRight'_or_of_and_eq_zero]
      simp [and_twoPow]
    · simp [setWidth_setWidth_succ_eq_setWidth_setWidth_of_getLsbD_false, h]

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
