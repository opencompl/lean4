/-
Copyright (c) 2024 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Henrik Böving
-/
prelude
import Lean.Elab.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Lemmas.Basic
import Lean.Elab.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Lemmas.Const
import Lean.Elab.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Lemmas.Var
import Lean.Elab.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Lemmas.Operations.Not
import Lean.Elab.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Lemmas.Operations.ShiftLeft
import Lean.Elab.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Lemmas.Operations.ShiftRight
import Lean.Elab.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Lemmas.Operations.Add
import Lean.Elab.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Lemmas.Operations.ZeroExtend
import Lean.Elab.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Lemmas.Operations.Append
import Lean.Elab.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Lemmas.Operations.Replicate
import Lean.Elab.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Lemmas.Operations.Extract
import Lean.Elab.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Lemmas.Operations.RotateLeft
import Lean.Elab.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Lemmas.Operations.RotateRight
import Lean.Elab.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Lemmas.Operations.SignExtend
import Lean.Elab.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Impl.Expr
import Lean.Elab.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Lemmas.Operations.Mul

/-!
This module contains the verification of the `BitVec` expressions (`BVExpr`) bitblaster from
`Impl.Expr`.
-/

namespace Lean.Elab.Tactic.BVDecide

open Std.Sat
open Std.Sat.AIG

namespace BVExpr
namespace bitblast

theorem go_val_eq_bitblast (aig : AIG BVBit) (expr : BVExpr w) :
    (go aig expr).val = bitblast aig expr := by
  rfl

theorem go_denote_mem_prefix (aig : AIG BVBit) (expr : BVExpr w) (assign : Assignment) (start : Nat)
    (hstart) :
    ⟦
      (go aig expr).val.aig,
      ⟨start, by apply Nat.lt_of_lt_of_le; exact hstart; apply (go aig expr).property⟩,
      assign.toAIGAssignment
    ⟧
      =
    ⟦aig, ⟨start, hstart⟩, assign.toAIGAssignment⟧ := by
  apply denote.eq_of_isPrefix (entry := ⟨aig, start,hstart⟩)
  apply IsPrefix.of
  · intros
    apply go_decl_eq
  · intros
    apply (go aig expr).property

theorem go_denote_eq (aig : AIG BVBit) (expr : BVExpr w) (assign : Assignment) :
    ∀ (idx : Nat) (hidx : idx < w),
        ⟦(go aig expr).val.aig, (go aig expr).val.vec.get idx hidx, assign.toAIGAssignment⟧
          =
        (expr.eval assign).getLsb idx := by
  intro idx hidx
  induction expr generalizing aig idx with
  | const =>
    simp [go, denote_blastConst]
  | var =>
    simp [go, hidx, denote_blastVar]
  | zeroExtend v inner ih =>
    simp only [go, denote_blastZeroExtend, ih, dite_eq_ite, Bool.if_false_right,
      eval_zeroExtend, BitVec.getLsb_zeroExtend, hidx, decide_True, Bool.true_and,
      Bool.and_iff_right_iff_imp, decide_eq_true_eq]
    apply BitVec.lt_of_getLsb
  | append lhs rhs lih rih =>
    rename_i lw rw
    simp only [go, denote_blastAppend, RefVec.get_cast, Ref.cast_eq, eval_append,
      BitVec.getLsb_append]
    split
    · next hsplit =>
      simp only [hsplit, decide_True, cond_true]
      rw [rih]
    · next hsplit =>
      simp only [hsplit, decide_False, cond_false]
      rw [go_denote_mem_prefix, lih]
  | replicate n expr ih => simp [go, ih, hidx]
  | signExtend v inner ih =>
    rename_i originalWidth
    generalize hgo : (go aig (signExtend v inner)).val = res
    unfold go at hgo
    dsimp only at hgo
    have : 0 ≤ originalWidth := by omega
    cases Nat.eq_or_lt_of_le this with
    | inl heq =>
      rw [blastSignExtend_empty_eq_zeroExtend] at hgo
      · rw [← hgo]
        simp only [eval_signExtend]
        rw [BitVec.signExtend_eq_not_zeroExtend_not_of_msb_false]
        · simp only [denote_blastZeroExtend, ih, dite_eq_ite, Bool.if_false_right,
            BitVec.getLsb_zeroExtend, hidx, decide_True, Bool.true_and, Bool.and_iff_right_iff_imp,
            decide_eq_true_eq]
          apply BitVec.lt_of_getLsb
        · subst heq
          rw [BitVec.msb_zero_length]
      · simp [heq]
    | inr hlt =>
      rw [← hgo]
      rw [denote_blastSignExtend]
      simp only [eval_signExtend]
      rw [BitVec.getLsb_signExtend]
      · simp only [hidx, decide_True, Bool.true_and]
        split
        · rw [ih]
        · rw [BitVec.msb_eq_getLsb_last]
          rw [ih]
      · dsimp only; omega
  | extract hi lo inner ih =>
    simp only [go, denote_blastExtract, Bool.if_false_right, eval_extract,
      BitVec.getLsb_extract]
    have : idx ≤ hi - lo := by omega
    simp only [this, decide_True, Bool.true_and]
    split
    · next hsplit =>
      rw [ih]
    · apply Eq.symm
      apply BitVec.getLsb_ge
      omega
  | shiftLeft lhs rhs lih rih =>
    simp only [go, eval_shiftLeft]
    apply denote_blastShiftLeft
    · intros
      dsimp only
      rw [go_denote_mem_prefix]
      rw [← lih (aig := aig)]
      · simp
      · assumption
      · simp [Ref.hgate]
    · intros
      rw [← rih]
  | shiftRight lhs rhs lih rih =>
    simp only [go, eval_shiftRight]
    apply denote_blastShiftRight
    · intros
      dsimp only
      rw [go_denote_mem_prefix]
      rw [← lih (aig := aig)]
      · simp
      · assumption
      · simp [Ref.hgate]
    · intros
      rw [← rih]
  | bin lhs op rhs lih rih =>
    cases op with
    | and =>
      simp only [go, RefVec.denote_zip, denote_mkAndCached, rih, eval_bin, BVBinOp.eval_and,
        BitVec.getLsb_and]
      simp only [go_val_eq_bitblast, RefVec.get_cast]
      rw [AIG.LawfulVecOperator.denote_input_vec (f := bitblast)]
      rw [← go_val_eq_bitblast]
      rw [lih]
    | or =>
      simp only [go, RefVec.denote_zip, denote_mkOrCached, rih, eval_bin, BVBinOp.eval_or,
        BitVec.getLsb_or]
      simp only [go_val_eq_bitblast, RefVec.get_cast]
      rw [AIG.LawfulVecOperator.denote_input_vec (f := bitblast)]
      rw [← go_val_eq_bitblast]
      rw [lih]
    | xor =>
      simp only [go, RefVec.denote_zip, denote_mkXorCached, rih, eval_bin, BVBinOp.eval_xor,
        BitVec.getLsb_xor]
      simp only [go_val_eq_bitblast, RefVec.get_cast]
      rw [AIG.LawfulVecOperator.denote_input_vec (f := bitblast)]
      rw [← go_val_eq_bitblast]
      rw [lih]
    | add =>
      simp only [go, eval_bin, BVBinOp.eval_add]
      apply denote_blastAdd
      · intros
        dsimp only
        rw [go_denote_mem_prefix]
        rw [← lih (aig := aig)]
        · simp
        · assumption
        · simp [Ref.hgate]
      · intros
        rw [← rih]
    | mul =>
      simp only [go, eval_bin, BVBinOp.eval_mul]
      apply denote_blastMul
      · intros
        dsimp only
        rw [go_denote_mem_prefix]
        rw [← lih (aig := aig)]
        · simp
        · assumption
        · simp [Ref.hgate]
      · intros
        rw [← rih]
  | un op expr ih =>
    cases op with
    | not => simp [go, ih, hidx]
    | shiftLeftConst => simp [go, ih, hidx]
    | shiftRightConst =>
      simp only [go, denote_blastShiftRightConst, ih, dite_eq_ite, Bool.if_false_right, eval_un,
        BVUnOp.eval_shiftRightConst, BitVec.getLsb_ushiftRight, Bool.and_iff_right_iff_imp,
        decide_eq_true_eq]
      intro h
      apply BitVec.lt_of_getLsb
      assumption
    | rotateLeft => simp [go, ih, hidx]
    | rotateRight => simp [go, ih, hidx]
    | arithShiftRightConst n =>
      rename_i w
      have : ¬(w ≤ idx) := by omega
      simp [go, ih, this, BitVec.getLsb_sshiftRight, BitVec.msb_eq_getLsb_last ]

end bitblast

@[simp]
theorem denote_bitblast (aig : AIG BVBit) (expr : BVExpr w) (assign : Assignment) :
    ∀ (idx : Nat) (hidx : idx < w),
        ⟦(bitblast aig expr).aig, (bitblast aig expr).vec.get idx hidx, assign.toAIGAssignment⟧
          =
        (expr.eval assign).getLsb idx
    := by
  intros
  rw [← bitblast.go_val_eq_bitblast]
  rw [bitblast.go_denote_eq]

end BVExpr

end Lean.Elab.Tactic.BVDecide
