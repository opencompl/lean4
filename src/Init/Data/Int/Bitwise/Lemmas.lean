/-
Copyright (c) 2023 Siddharth Bhat. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Siddharth Bhat, Jeremy Avigad
-- https://github.com/leanprover-community/mathlib4/blob/12b9e3064e35636d35f0c349bf2be29fb9b75bf2/Mathlib/Data/Int/Bitwise.lean#L490-L490
-/
prelude
import Init.Data.Nat.Bitwise.Basic
import Init.Data.Nat.Bitwise.Lemmas
import Init.Data.Int.Basic
import Init.Data.Int.Bitwise
import Init.Data.Int.Pow
import Init.Data.Bool
import Init.Data.Fin.Lemmas
import Init.Data.Nat.Lemmas
import Init.Omega.Int

namespace Int

theorem shiftRight_eq (n : Int) (s : Nat) : n >>> s = Int.shiftRight n s := rfl
@[simp]
theorem shiftRight_ofNat (n s : Nat) : (n : Int) >>> s = Int.ofNat (n >>> s) := rfl
theorem natCast_shiftRight (n s : Nat) : ((↑n) : Int) >>> s = n >>> s := rfl

@[simp]
theorem shiftRight_negSucc (m : Nat) (n : Nat) :
  -[m+1] >>> n = -[m >>>n +1] := rfl

theorem Int.shiftRight_shiftRight (i : Int) (m n : Nat) :
    i >>> m >>> n = i >>> (m + n) := by
  cases i
  case ofNat i =>
    simp [natCast_shiftRight, Nat.shiftRight_add]
  case negSucc i =>
    simp [Int.shiftRight_negSucc, Nat.shiftRight_add]

theorem shiftRight_eq_div_pow (m : Int) (n : Nat) : m >>> n = m / ((((2 : Nat) ^ n) : Nat) : Int) := by
  rcases m
  case ofNat m =>
    simp only [Int.ofNat_eq_coe, shiftRight_eq, Int.shiftRight, Nat.shiftRight_eq_div_pow]
    simp [Int.natCast_pow]
  case negSucc m =>
    rw [Int.shiftRight_negSucc]
    rw [negSucc_ediv]
    rw [Nat.shiftRight_eq_div_pow]
    . norm_cast
    · norm_cast
      apply Nat.pow_pos
      omega

@[simp]
theorem zero_shiftRight (n : Nat) : (0 : Int) >>> n = 0 := by
  simp [Int.shiftRight_eq_div_pow]

@[simp] theorem zero_testBit (i : Nat) : Int.testBit 0 i = false := by
  simp only [testBit, zero_shiftRight, Nat.zero_and, bne_self_eq_false, Nat.zero_testBit i]

-- @[simp] theorem testBit_zero (x : Int) : Int.testBit x 0 = decide (x % 2 = 1) := by
--   unfold testBit
--   cases x <;> simp [Nat.testBit_zero]
--   case ofNat x =>
--     omega

@[simp] theorem testBit_succ (x : Int) (i : Nat) : Int.testBit x (Nat.succ i) = testBit (x/2) i := by
  unfold testBit
  cases x <;> simp <;> rfl

theorem toNat_testBit (x i : Nat) :
    (x.testBit i).toNat = x / 2 ^ i % 2 := by
  rw [Nat.testBit_to_div_mod]
  rcases Nat.mod_two_eq_zero_or_one (x / 2^i) <;> simp_all

@[simp] theorem testBit_shiftRight (x : Int) (i j : Nat) : testBit (x >>> i) j = testBit x (i+j) := by
  cases x <;> simp [testBit]

end Int
