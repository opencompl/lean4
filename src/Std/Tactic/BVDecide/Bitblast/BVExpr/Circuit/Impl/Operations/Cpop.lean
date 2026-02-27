/-
Copyright (c) 2026 University of Cambridge. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Luisa Cicolini, Siddharth Bhat, Henrik Böving
-/
module

prelude
public import Std.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Impl.Const
public import Std.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Impl.Operations.Sub
public import Std.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Impl.Operations.Extract
public import Std.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Impl.Operations.Append
public import Std.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Impl.Operations.ZeroExtend
public import Std.Sat.AIG.If

import Init.Omega

@[expose] public section

/-!
This module contains the implementation of a bitblaster for `BitVec.cpop`.
-/

namespace Std.Tactic.BVDecide

open Std.Sat

variable [Hashable α] [DecidableEq α]

namespace BVExpr
namespace bitblast

structure ExtractAndExtendBitTarget (aig : AIG α) (w : Nat) where
  start : Nat
  x : AIG.RefVec aig w

/-- We extract a single bit in position `start` and extend it to have width `w`-/
def blastExtractAndExtendBit (aig : AIG α) (target : ExtractAndExtendBitTarget aig w) :
    AIG.RefVecEntry α w :=
  -- extract 1 bit starting from start
  let ⟨start, x⟩ := target
  let res := blastExtract aig ⟨x, start⟩
  let aig := res.aig
  let extract := res.vec
  -- zero-extend the extracted portion to have
  let res := blastZeroExtend aig (newWidth := w) ⟨1, extract⟩
  let aig := res.aig
  let extend := res.vec
  ⟨aig, extend⟩

instance : AIG.LawfulVecOperator α ExtractAndExtendBitTarget blastExtractAndExtendBit where
  le_size := by
    intros
    unfold blastExtractAndExtendBit
    dsimp only
    apply AIG.LawfulVecOperator.le_size_of_le_aig_size (f := blastZeroExtend)
    apply AIG.LawfulVecOperator.le_size_of_le_aig_size (f := blastExtract)
    omega
  decl_eq := by
    intros
    unfold blastExtractAndExtendBit
    dsimp only
    rw [AIG.LawfulVecOperator.decl_eq (f := blastZeroExtend),
      AIG.LawfulVecOperator.decl_eq (f := blastExtract)]
    apply AIG.LawfulVecOperator.lt_size_of_lt_aig_size
    omega

/-- We extract one bit at a time from the initial vector and zero-extend them to width `w`,
  appending the result to `acc` which eventually will have size `w * w`-/
def blastExtractAndExtend (aig : AIG α) (idx : Nat) (x : AIG.RefVec aig w)
    (acc : AIG.RefVec aig (w * idx)) (hlt : idx ≤ w) : AIG.RefVecEntry α (w * w) :=
  if hidx : idx < w then
    let res := blastExtractAndExtendBit aig ⟨idx, x⟩
    have := AIG.LawfulVecOperator.le_size (f := blastExtractAndExtendBit) ..
    let aig := res.aig
    let bv := res.vec
    let acc := acc.cast this
    let x := x.cast this
    let acc := acc.append bv
    have hcast : w * (idx + 1) = w * idx + w := by simp [Nat.mul_add]
    have acc := hcast ▸ acc
    blastExtractAndExtend aig (idx + 1) (x := x) (acc := acc) (by omega)
  else
    have : idx = w := by omega
    have hcast : w * idx = w * w := by rw [this]
    ⟨aig, hcast ▸ acc⟩

theorem blastExtractAndExtend_le_size (aig : AIG α) (idx : Nat) (x : AIG.RefVec aig w)
    (acc : AIG.RefVec aig (w * idx)) (hlt : idx ≤ w) :
    aig.decls.size ≤ (blastExtractAndExtend aig idx x acc hlt).aig.decls.size := by
  unfold blastExtractAndExtend
  dsimp only
  split
  · apply Nat.le_trans ?_ (by apply blastExtractAndExtend_le_size)
    apply AIG.LawfulVecOperator.le_size (f := blastExtractAndExtendBit)
  · simp

theorem extractAndExtend_decl_eq (aig : AIG α) (idx' : Nat) (x : AIG.RefVec aig w)
    (acc : AIG.RefVec aig (w * idx')) (hlt : idx' ≤ w) :
    ∀ (idx : Nat) (h1) (h2),
      (blastExtractAndExtend aig idx' x acc hlt).aig.decls[idx]'h2 = aig.decls[idx]'h1 := by
  generalize hres : blastExtractAndExtend aig idx' x acc hlt = res
  unfold blastExtractAndExtend at hres
  dsimp only at hres
  split at hres
  · rw [← hres]
    intros
    rw [extractAndExtend_decl_eq, AIG.LawfulVecOperator.decl_eq (f := blastExtractAndExtendBit)]
    apply AIG.LawfulVecOperator.lt_size_of_lt_aig_size (f := blastZeroExtend)
    apply AIG.LawfulVecOperator.lt_size_of_lt_aig_size (f := blastExtract)
    omega
  · simp [← hres]

/-- Given a vector of references belonging to the same AIG `oldParSum`,
  we create a node to add the `curr`-th couple of elements and push the add node to `newParSum` -/
def blastCpopLayer (aig : AIG α) (iterNum : Nat)
    (oldLayer : AIG.RefVec aig (len * w)) (newLayer : AIG.RefVec aig (iterNum * w))
    (hold : 2 * (iterNum - 1) < len) : AIG.RefVecEntry α ((len + 1)/2 * w) :=
  if  hlen : 0 < len - (iterNum * 2) then
    -- lhs
    let res := blastExtract aig ⟨oldLayer, 2 * iterNum * w⟩
    let aig := res.aig
    let op1 : aig.RefVec w := res.vec
    have := AIG.LawfulVecOperator.le_size (f := blastExtract) ..
    let oldLayer := oldLayer.cast this
    let newLayer := newLayer.cast this
    -- rhs
    let res := blastExtract aig ⟨oldLayer, (2 * iterNum + 1) * w⟩
    let aig := res.aig
    let op2 : aig.RefVec w := res.vec
    have := AIG.LawfulVecOperator.le_size (f := blastExtract) ..
    let oldLayer := oldLayer.cast this
    let newLayer := newLayer.cast this
    let op1 := op1.cast this
    -- add
    let res := blastAdd aig ⟨op1, op2⟩
    let aig := res.aig
    let add := res.vec
    have := AIG.LawfulVecOperator.le_size (f := blastAdd) ..
    let oldLayer := oldLayer.cast this
    let newLayer := newLayer.cast this
    let op1 := op1.cast this
    let op2 := op2.cast this
    have hcast : w + iterNum * w = (iterNum + 1) * w := by simp [Nat.add_mul]; omega
    let res := blastAppend (aig := aig) ⟨add, newLayer, by omega⟩
    let aig := res.aig
    let newLayer' := res.vec
    have := AIG.LawfulVecOperator.le_size (f := blastAppend) ..
    let oldLayer := oldLayer.cast this
    blastCpopLayer aig (iterNum + 1) oldLayer newLayer' (by omega)
  else
    have h : iterNum = (len + 1) / 2 := by omega
    ⟨aig, h ▸ newLayer⟩
termination_by len - iterNum * 2

theorem blastCpopLayer_le_size (aig : AIG α) (iterNum: Nat) (oldLayer : AIG.RefVec aig (len * w))
    (newLayer : AIG.RefVec aig (iterNum * w)) (hold : 2 * (iterNum - 1) < len) :
    aig.decls.size ≤ (blastCpopLayer aig iterNum oldLayer newLayer hold).aig.decls.size := by
  unfold blastCpopLayer
  dsimp only
  split
  · simp
    <;> (refine Nat.le_trans ?_ (by apply blastCpopLayer_le_size); apply AIG.LawfulVecOperator.le_size)
  · simp

theorem blastCpopLayer_decl_eq (aig : AIG α) (iterNum: Nat) (oldLayer : AIG.RefVec aig (len * w))
    (newLayer : AIG.RefVec aig (iterNum * w)) (hold : 2 * (iterNum - 1) < len) :
    ∀ (idx : Nat) h1 h2,
      (blastCpopLayer aig iterNum oldLayer newLayer hold).aig.decls[idx]'h1 = aig.decls[idx]'h2 := by
  generalize hres : blastCpopLayer aig iterNum oldLayer newLayer hold= res
  unfold blastCpopLayer at hres
  dsimp only at hres
  split at hres
  · simp at hres
    · rw [← hres]
      intros
      rw [blastCpopLayer_decl_eq]
      · apply AIG.LawfulVecOperator.decl_eq (f := blastAdd)
      · apply AIG.LawfulVecOperator.lt_size_of_lt_aig_size (f := blastAdd)
        assumption
  · simp [← hres]

def blastCpopTree (aig : AIG α) (l : AIG.RefVec aig (len * w)) (h : 0 < len) :
    AIG.RefVecEntry α w :=
  if hlt : 1 < len  then
    have hcastZero : 0 = 0 / 2 * w := by omega
    let initAcc := blastConst (aig := aig) (w := 0) (val := 0)
    let res := blastCpopLayer aig 0 l (hcastZero ▸ initAcc) (by omega)
    let aig := res.aig
    let newLayer := res.vec
    blastCpopTree (aig := aig) (l := newLayer) (by omega)
  else
    have hcast : len * w = w := by simp [show len = 1 by omega]
    ⟨aig, hcast ▸ l⟩
termination_by len

theorem blastCpopTree_le_size (aig : AIG α) (oldLayer : AIG.RefVec aig (len * w))
    (h : 0 < len) :
    aig.decls.size ≤ (blastCpopTree aig oldLayer h).aig.decls.size := by
  unfold blastCpopTree
  dsimp only
  split
  · simp only [BitVec.ofNat_eq_ofNat, Nat.reduceDiv]
    apply Nat.le_trans _ (by apply blastCpopTree_le_size)
    apply blastCpopLayer_le_size
  · simp

theorem blastCpopTree_decl_eq (aig : AIG α) (oldLayer : AIG.RefVec aig (len * w)) (h : 0 < len) :
    ∀ (idx : Nat) h1 h2,
      (blastCpopTree aig oldLayer h).aig.decls[idx]'h1 = aig.decls[idx]'h2 := by
  generalize hres : blastCpopTree aig oldLayer h = res
  unfold blastCpopTree at hres
  dsimp only at hres
  split at hres
  · simp at hres
    · rw [← hres]
      intros i h1 h2
      rw [blastCpopTree_decl_eq]
      · apply blastCpopLayer_decl_eq
      · apply Nat.lt_of_lt_of_le h2
        apply blastCpopLayer_le_size
  · simp [← hres]

/-- We first extend all the single bits in the input BitVec w to have width `w`, then compute
the parallel prefix sum given these bits.-/
def blastCpop (aig : AIG α) (x : AIG.RefVec aig w) : AIG.RefVecEntry α w :=
  if hw : 1 < w then
    -- init
    let initAcc := blastConst (aig := aig) (w := 0) (val := 0)
    let res := blastExtractAndExtend aig 0 x initAcc (by omega)
    let aig := res.aig
    let extendedBits := res.vec
    blastCpopTree aig extendedBits (by omega)
  else if hw' : 0 < w then
      ⟨aig, x⟩
  else
    let zero := blastConst aig (w := w) 0
    ⟨aig, zero⟩

theorem blastCpop_le_size (aig : AIG α) (input : AIG.RefVec aig w) :
    aig.decls.size ≤ (blastCpop aig input).aig.decls.size := by
  unfold blastCpop
  split
  · let initAcc := blastConst (aig := aig) (w := 0) (val := 0)
    let res := blastExtractAndExtend aig 0 input initAcc (by omega)
    have hext := blastExtractAndExtend_le_size aig 0 input initAcc (by omega)
    have htree := blastCpopTree_le_size (aig := res.aig) (oldLayer := res.vec) (by omega)
    apply Nat.le_trans hext htree
  · split
    · simp
    · simp

theorem blastCpop_decl_eq (aig : AIG α) (input : AIG.RefVec aig w) :
    ∀ (idx : Nat) h1 h2, (blastCpop aig input).aig.decls[idx]'h1 = aig.decls[idx]'h2 := by
  unfold blastCpop
  split
  · simp only [BitVec.ofNat_eq_ofNat, Lean.Elab.WF.paramLet]
    intros idx hidx hidx'
    let initAcc := blastConst (aig := aig) (w := 0) (val := 0)
    let res := blastExtractAndExtend aig 0 input initAcc (by omega)
    have hext := extractAndExtend_decl_eq aig 0 input initAcc (by omega) (idx := idx)
    have htree := blastCpopTree_decl_eq (aig := res.aig) (oldLayer := res.vec) (by omega) (idx := idx)
    simp only [BitVec.ofNat_eq_ofNat, res, initAcc] at htree hext
    rw [htree (by omega) (by apply Nat.lt_of_lt_of_le hidx' (by apply blastExtractAndExtend_le_size)),
      hext (by omega) (by apply Nat.lt_of_lt_of_le hidx' (by apply blastExtractAndExtend_le_size))]
  · split
    · simp
    · simp

instance : AIG.LawfulVecOperator α AIG.RefVec blastCpop where
  le_size := by
    intros
    unfold blastCpop
    apply blastCpop_le_size
  decl_eq := by
    intros
    unfold blastCpop
    apply blastCpop_decl_eq

end bitblast
end BVExpr

end Std.Tactic.BVDecide
