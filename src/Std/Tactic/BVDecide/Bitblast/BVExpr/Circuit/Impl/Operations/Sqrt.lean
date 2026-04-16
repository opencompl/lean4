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
public import Std.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Impl.Operations.Mul
public import Std.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Impl.Operations.ZeroExtend
public import Std.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Impl.Operations.ShiftLeft
public import Std.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Impl.Operations.Ult
public import Std.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Impl.Operations.Eq
public import Std.Sat.AIG.If

import Init.Omega

@[expose] public section

namespace Std.Tactic.BVDecide

open Std.Sat

variable [Hashable α] [DecidableEq α]

namespace BVExpr
namespace bitblast

/-!
This module contains the implementation of a bitblaster for `BitVec.sqrt`, i.e.,
the square root rounding algorithm.

The implementation is based on the SymmFPU one:

    bwt inputWidth(x.getWidth());
    bwt outputWidth(inputWidth - 1);

    // To compare against, we need to pad x to 2/2p
    ubv xcomp(x.append(ubv::zero(inputWidth - 2)));

    // Start at 1
    ubv working(ubv::one(outputWidth) << ubv(outputWidth, outputWidth - 1));

    bwt location;
    for (location = outputWidth - 1; location > 0; --location) { // Offset by 1 for easy termination
      ubv shift(ubv(outputWidth, location - 1));

      ubv candidate(working | (ubv::one(outputWidth) << shift));

      prop addBit(expandingMultiply<t, ubv>(candidate, candidate) <= xcomp);

      working = working | (ubv(addBit).extend(outputWidth - 1) << shift);
    }

    return resultWithRemainderBit<t>(working, !(expandingMultiply<t, ubv>(working, working) == xcomp));

-/

def blastCandidate (aig : AIG α) (location w : Nat) :=
      /- ubv shift(ubv(outputWidth, location - 1)); -/
      let shift := blastConst aig (w := w - 1) (val := location - 1)
      /- ubv candidate(working | (ubv::one(outputWidth) << shift)); -/
      let one := blastConst aig (w := w - 1) (val := 1)
      blastShiftLeft aig ⟨w - 1, one, shift⟩

theorem blastCandidate_le_size (aig : AIG α)  :
    aig.decls.size ≤ (blastCandidate aig location w).aig.decls.size := by
  unfold blastCandidate
  dsimp only
  apply AIG.LawfulVecOperator.le_size

theorem blastCandidate_decl_eq (aig : AIG α) :
    ∀ (idx : Nat) h1 h2, (blastCandidate aig location w).aig.decls[idx]'h1 = aig.decls[idx]'h2 := by
  unfold blastCandidate
  dsimp only
  intros
  apply AIG.LawfulVecOperator.decl_eq

def blastExpandingMultiply (aig : AIG α) (candidate : aig.RefVec (w - 1)) :=
  let res := blastZeroExtend aig (newWidth := w + w - 2) ⟨w - 1, candidate⟩
  let candidate := res.vec
  let aig := res.aig
  blastMul aig ⟨candidate, candidate⟩

theorem blastExpandingMultiply_le_size (aig : AIG α) (candidate : aig.RefVec (w - 1)) :
    aig.decls.size ≤ (blastExpandingMultiply aig candidate).aig.decls.size := by
  unfold blastExpandingMultiply
  dsimp only
  apply AIG.LawfulVecOperator.le_size_of_le_aig_size
  apply AIG.LawfulVecOperator.le_size

theorem blastExpandingMultiply_decl_eq (aig : AIG α) (candidate : aig.RefVec (w - 1)) :
    ∀ (idx : Nat) h1 h2, (blastExpandingMultiply aig candidate).aig.decls[idx]'h1 = aig.decls[idx]'h2 := by
  unfold blastExpandingMultiply
  dsimp only
  intros
  rw [AIG.LawfulVecOperator.decl_eq (f := blastMul),
      AIG.LawfulVecOperator.decl_eq (f := blastZeroExtend)]
  apply AIG.LawfulVecOperator.lt_size_of_lt_aig_size
  omega

def blastUle (aig : AIG α) (mul xcomp : aig.RefVec (w + w - 2)) :=
  let res := BVPred.mkUlt aig ⟨mul, xcomp⟩
  have := AIG.LawfulOperator.le_size (f := BVPred.mkUlt) ..
  let ult := res.ref
  let aig := res.aig
  let xcomp := xcomp.cast (aig2 := aig) this
  let mul := mul.cast (aig2 := aig) this
  let res := BVPred.mkEq aig ⟨mul, xcomp⟩
  have := AIG.LawfulOperator.le_size (f := BVPred.mkEq) ..
  let eq := res.ref
  let aig := res.aig
  let ult := ult.cast (aig2 := aig) this
  let res := aig.mkOrCached ⟨ult, eq⟩
  let addBitTmp := res.ref
  let aig := res.aig
  let empty := AIG.RefVec.empty (aig := aig)
  let addBit : AIG.RefVec aig 1 := empty.push addBitTmp
  blastZeroExtend aig (newWidth := w - 1) ⟨1, addBit⟩

theorem blastUle_le_size (aig : AIG α) (mul xcomp : aig.RefVec (w + w - 2))  :
    aig.decls.size ≤ (blastUle aig mul xcomp).aig.decls.size := by
  unfold blastUle
  dsimp only
  apply AIG.LawfulVecOperator.le_size_of_le_aig_size (f := blastZeroExtend)
  apply AIG.LawfulOperator.le_size_of_le_aig_size (f := AIG.mkOrCached)
  apply AIG.LawfulOperator.le_size_of_le_aig_size (f := BVPred.mkEq)
  apply AIG.LawfulOperator.le_size_of_le_aig_size (f := BVPred.mkUlt)
  omega

-- theorem blastUle_decl_eq (aig : AIG α) (candidate : aig.RefVec (w - 1)) :
--     ∀ (idx : Nat) h1 h2, (blastUle aig mul xcomp).aig.decls[idx]'h1 = aig.decls[idx]'h2 := by
--   unfold blastOrShift
--   dsimp only
--   sorry

--  working = working | (ubv(addBit).extend(outputWidth - 1) << shift);
def blastOrShift (aig : AIG α) (working addBit : aig.RefVec (w - 1)) (location : Nat) :=
  let shift := blastConst aig (w := w - 1) (val := location - 1)
  let res := blastShiftLeft aig ⟨w - 1, addBit, shift⟩
  let aig := res.aig
  let working := working.cast (aig2 := aig) (by apply AIG.LawfulVecOperator.le_size)
  AIG.RefVec.zip aig ⟨working, res.vec⟩ AIG.mkOrCached

theorem blastOrShift_le_size (aig : AIG α) (working addBit  : aig.RefVec (w - 1)) (location : Nat) :
    aig.decls.size ≤ (blastOrShift aig working addBit location).aig.decls.size := by
  unfold blastOrShift
  dsimp only
  apply AIG.RefVec.zip_le_size_of_le_aig_size
  apply AIG.LawfulVecOperator.le_size

-- theorem blastOrShift_decl_eq (aig : AIG α) (working addBit  : aig.RefVec (w - 1)) (location : Nat) :
--     ∀ (idx : Nat) h1 h2, (blastOrShift aig working addBit location).aig.decls[idx]'h1 = aig.decls[idx]'h2 := by
--   unfold blastOrShift
--   dsimp only
--   sorry

def blastSqrt (aig : AIG α) (x : AIG.RefVec aig w) :
    AIG.RefVecEntry α w :=
  if h1 : w = 1 then
    ⟨aig, x⟩
  else
    /- bwt inputWidth(x.getWidth()); -/
    let inputWidth := w
    let outputWidth := w - 1
    /- bwt outputWidth(inputWidth - 1); -/
    /- // To compare against, we need to pad x to 2/2p
      ubv xcomp(x.append(ubv::zero(inputWidth - 2))); -/
    let res := blastZeroExtend aig (newWidth := w + w - 2) ⟨w, x⟩
    let aig := res.aig
    let xcomp := res.vec
    have := AIG.LawfulVecOperator.le_size (f := blastZeroExtend) ..
    let x := x.cast this
    /- // Start at 1
      ubv working(ubv::one(outputWidth) << ubv(outputWidth, outputWidth - 1)); -/
    let one := blastConst aig (w := w - 1) (val := 1)
    let shift := blastConst aig (w := w - 1) (val := outputWidth - 1)
    let res := blastShiftLeft aig ⟨w - 1, one, shift⟩
    let aig := res.aig
    let working := res.vec
    have := AIG.LawfulVecOperator.le_size (f := blastShiftLeft) ..
    let x := x.cast (aig2 := aig) this
    let xcomp := xcomp.cast this
    let res := go aig xcomp working (outputWidth - 1)
    let aig := res.aig
    let sqrt := res.vec
    let res := blastZeroExtend aig (newWidth := w) ⟨w - 1, sqrt⟩
    ⟨res.aig, res.vec⟩
where
  go (aig : AIG α) (xcomp : AIG.RefVec aig (w + w - 2)) (working : AIG.RefVec aig (w - 1)) (location : Nat) :
    AIG.RefVecEntry α (w - 1):=
    if 0 < location then
      /- ubv shift(ubv(outputWidth, location - 1)); -/
      /- ubv candidate(working | (ubv::one(outputWidth) << shift)); -/
      let res := blastCandidate aig location w
      let shifted := res.vec
      let aig := res.aig
      have := by apply blastCandidate_le_size
      let working := working.cast (aig2 := aig) this
      let comp := xcomp.cast this
      let res := AIG.RefVec.zip aig ⟨working, shifted⟩ AIG.mkOrCached
      let candidate := res.vec
      let aig := res.aig
      /- casting? -/
      let xcomp := xcomp.cast (aig2 := aig) (by apply AIG.RefVec.zip_le_size_of_le_aig_size _ _ AIG.mkOrCached this)
      let working := working.cast (aig2 := aig) (by apply AIG.RefVec.zip_le_size _ _ AIG.mkOrCached)
      /- prop addBit(expandingMultiply<t, ubv>(candidate, candidate) <= xcomp); -/
      let res := blastExpandingMultiply aig candidate
      let mul := res.vec
      let aig := res.aig
      let xcomp := xcomp.cast (aig2 := aig) (by apply blastExpandingMultiply_le_size)
      let working := working.cast (aig2 := aig) (by apply blastExpandingMultiply_le_size)
      let res := blastUle aig mul xcomp
      let addBit := res.vec
      let aig := res.aig
      let working := working.cast (aig2 := aig) (by apply blastUle_le_size)
      let xcomp := xcomp.cast (aig2 := aig) (by apply blastUle_le_size)
      /- working = working | (ubv(addBit).extend(outputWidth - 1) << shift); -/
      let res := blastOrShift aig working addBit location
      let aig := res.aig
      let xcomp := xcomp.cast (aig2 := aig) (by apply blastOrShift_le_size)
      go aig xcomp res.vec (location - 1)
    else
      ⟨aig, working⟩

theorem blastSqrt.go_le_size {w} (aig : AIG α) (xcomp : AIG.RefVec aig (w + w - 2)) (working : AIG.RefVec aig (w - 1)) (location : Nat) :
    aig.decls.size ≤ (blastSqrt.go aig xcomp working location).aig.decls.size := by
  generalize hres : blastSqrt.go aig xcomp working location = res
  unfold blastSqrt.go at hres
  split at hres
  · rw [← hres]
    simp
    sorry
  · rw [← hres]
    simp


theorem blastSqrt_le_size {w} (aig : AIG α) (input : AIG.RefVec aig w) :
    aig.decls.size ≤ (blastSqrt aig input).aig.decls.size := by
  unfold blastSqrt
  dsimp only
  split
  · sorry
  · simp
    apply AIG.LawfulVecOperator.le_size_of_le_aig_size _ _ _
    sorry

theorem blastSqrt_decl_eq (aig : AIG α) (input : AIG.RefVec aig w) :
    ∀ (idx : Nat) h1 h2, (blastSqrt aig input).aig.decls[idx]'h1 = aig.decls[idx]'h2 := by
  sorry

instance : AIG.LawfulVecOperator α AIG.RefVec blastSqrt where
  le_size := by
    intros
    unfold blastSqrt
    sorry
  decl_eq := by
    intros
    unfold blastSqrt
    sorry


end bitblast
end BVExpr

end Std.Tactic.BVDecide
