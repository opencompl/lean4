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

/-!
### Multiplication
We implement [Booth's multiplication circuit](https://en.wikipedia.org/wiki/Booth%27s_multiplication_algorithm)
on bitvectors, and show that this circuit is equal to our straightforward `BitVec.mul` implementation.
-/

def mulAdd (a : BitVec (w+v)) (x : BitVec w) (y : BitVec v) : BitVec (w+v) :=
  let x : BitVec (w+v) := x.zeroExtend' (le_add_right w v)
  Prod.snd <| iunfoldr (s:=a) fun (i : Fin (w+v)) a =>
    let a := if y.getLsb i = true then a + x else a
    (a >>> 1, a.getLsb 0)

def mulAddAccumulator (a : BitVec (w+v)) (x : BitVec w) (y : BitVec v) (i : Nat) : BitVec (w+v) :=
  (a + (x.zeroExtend' <| le_add_right w v) * ((y.extractLsb' 0 i).zeroExtend _) ) >>> i

@[simp]
theorem zeroExtend_zero_width (x : BitVec 0) : zeroExtend w x = 0#w := by
  sorry

@[simp] theorem shiftRight_zero (x : BitVec w) : x >>> 0 = x := rfl
@[simp] theorem mul_zero (x : BitVec w) : x * 0#w = 0#w := rfl

theorem extractLsb'_succ_eq_concat (x : BitVec w) (s n : Nat) :
    x.extractLsb' s (n+1) = cons (x.getLsb (s+n)) (x.extractLsb' s n) := by
  sorry

theorem mulAdd_spec (a : BitVec (w+v)) (x : BitVec w) (y : BitVec v) :
    mulAdd a x y = a + (x.zeroExtend' <| le_add_right w v) * (y.zeroExtend' <| le_add_left v w) := by
  simp only [mulAdd]
  rw [iunfoldr_replace (state := mulAddAccumulator a x y)]
  · simp [mulAddAccumulator]
  · intro i
    simp only [mulAddAccumulator, Prod.mk.injEq]
    simp only [extractLsb'_succ_eq_concat y 0 i, Nat.zero_add]
    cases y.getLsb i <;> simp
    · sorry
    · sorry

@[simp] theorem zeroExtend'_mul_zeroExtend' (x y : BitVec w) (h : w ≤ v) :
    x.zeroExtend' h * y.zeroExtend' h = (x * y).zeroExtend' h := by
  sorry


@[simp] theorem zeroExtend'_rfl (x : BitVec w) (h : w ≤ w := by rfl) : x.zeroExtend' h = x := rfl

@[simp]
theorem truncate_zeroExtend' (x : BitVec w) (h : w ≤ v) : truncate w (x.zeroExtend' h) = x := by
  simp [truncate, zeroExtend]
  intro h'
  have h_eq : w = v := Nat.le_antisymm h h'
  subst h_eq
  simp [h']

theorem mul_eq_mulAdd (x y : BitVec w) :
    x * y = (mulAdd 0 x y).truncate w := by
  simp [mulAdd_spec]

@[simp]
theorem extractLsb'_zero (x : BitVec w) : extractLsb' 0 n x = truncate n x := by
  simp [extractLsb']

@[simp]
theorem extractLsb'_succ_concat : extractLsb' (start+1) n (concat x a) = extractLsb' start n x := by
  simp [extractLsb']
  sorry

-- theorem mulAdd_eq

theorem mul_eq_mulAdd (x y : BitVec w) :
    x * y = (mulAdd 0 x y).truncate _ := by
  suffices ∀ {v w} (x : BitVec (w+v)) (y : BitVec w) (z : BitVec v),
    x * (y ++ z) = (mulAdd (x*z) x y).truncate _
  by simpa using @this 0 w x y 0
  induction w
  case zero =>
    sorry
  case succ w ih =>
    have ⟨x, x₀, hx⟩ : ∃ (x' : BitVec w) (x₀ : Bool), x = BitVec.concat x' x₀ := sorry
    have ⟨y, y₀, hy⟩ : ∃ (y' : BitVec w) (y₀ : Bool), y = BitVec.concat y' y₀ := sorry
    subst hx hy
    cases y₀ <;> simp [mulAdd]
    · simp [extractLsb']
      rw [show 0#w = 0 from rfl, ← ih]
    · sorry

def mulC (x y : BitVec w) : BitVec w :=
  go _
  where go (acc : BitVec w) (x y : BitVec w) : BitVec w

-- def boothMul (x y : BitVec w) : BitVec w :=
--   let a : BitVec (w+w+1) :=  x ++ (0 : BitVec (w+1))
--   let s : BitVec (w+w+1) := -x ++ (0 : BitVec (w+1))
--   let p : BitVec (w+w+1) := (0 : BitVec w) ++ (y : BitVec w) ++ (0 : BitVec 1)
--   go a s p w
--   where
--     go (a s p : BitVec (w+w+1)) : Nat → BitVec w
--       | 0   => p
--       | n+1 =>

end BitVec
