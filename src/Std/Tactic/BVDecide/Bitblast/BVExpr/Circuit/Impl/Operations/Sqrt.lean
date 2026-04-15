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
      let shift := blastConst aig (w := w - 1) (val := location - 1)
      /- ubv candidate(working | (ubv::one(outputWidth) << shift)); -/
      let one := blastConst aig (w := w - 1) (val := 1)
      let res := blastShiftLeft aig ⟨w - 1, one, shift⟩
      let shifted := res.vec
      let aig := res.aig
      have := AIG.LawfulVecOperator.le_size (f := blastShiftLeft) ..
      let working := working.cast (aig2 := aig) this
      let comp := xcomp.cast this
      let shift := shift.cast this
      let res := AIG.RefVec.zip aig ⟨working, shifted⟩ AIG.mkOrCached
      let candidate := res.vec
      let aig := res.aig
      /- casting? -/
      let xcomp := xcomp.cast (aig2 := aig) (by apply AIG.RefVec.zip_le_size_of_le_aig_size _ _ AIG.mkOrCached this)
      let shift := shift.cast (aig2 := aig) (by apply AIG.RefVec.zip_le_size _ _ AIG.mkOrCached)
      let working := working.cast (aig2 := aig) (by apply AIG.RefVec.zip_le_size _ _ AIG.mkOrCached)
      /- prop addBit(expandingMultiply<t, ubv>(candidate, candidate) <= xcomp); -/
      let res := blastZeroExtend aig (newWidth := w + w - 2) ⟨w - 1, candidate⟩
      let candidate := res.vec
      let aig := res.aig
      have := AIG.LawfulVecOperator.le_size (f := blastZeroExtend) ..
      let xcomp := xcomp.cast this
      let shift := shift.cast this
      let working := working.cast this
      /- casting? -/
      let res := blastMul aig ⟨candidate, candidate⟩
      let mul := res.vec
      let aig := res.aig
      have := AIG.LawfulVecOperator.le_size (f := blastMul) ..
      let xcomp := xcomp.cast this
      let shift := shift.cast this
      let working := working.cast this
      /- ule = ult ∨ eq -/
      let res := BVPred.mkUlt aig ⟨mul, xcomp⟩
      have := AIG.LawfulOperator.le_size (f := BVPred.mkUlt) ..
      let ult := res.ref
      let aig := res.aig
      let xcomp := xcomp.cast (aig2 := aig) this
      let shift := shift.cast (aig2 := aig) this
      let mul := mul.cast (aig2 := aig) this
      let res := BVPred.mkEq aig ⟨mul, xcomp⟩
      have := AIG.LawfulOperator.le_size (f := BVPred.mkEq) ..
      let eq := res.ref
      let aig := res.aig
      let ult := ult.cast (aig2 := aig) this
      let res := aig.mkOrCached ⟨ult, eq⟩
      let aig := res.aig
      let shift := shift.cast (aig2 := aig)
          (by apply AIG.LawfulOperator.le_size_of_le_aig_size (f := AIG.mkOrCached)
              exact String.Pos.Raw.mk_le_mk.mp this)
      let working := working.cast (aig2 := aig)
          (by apply AIG.LawfulOperator.le_size_of_le_aig_size (f := AIG.mkOrCached)
              (expose_names; exact Nat.le_trans this_4 this))
      let xcomp := xcomp.cast (aig2 := aig)
          (by apply AIG.LawfulOperator.le_size_of_le_aig_size (f := AIG.mkOrCached)
              exact String.Pos.Raw.mk_le_mk.mp this)
      /- working = working | (ubv(addBit).extend(outputWidth - 1) << shift); -/
      let addBitTmp := res.ref
      let empty := AIG.RefVec.empty (aig := aig)
      let addBit : AIG.RefVec aig 1 := empty.push addBitTmp
      let res := blastZeroExtend aig (newWidth := w - 1) ⟨1, addBit⟩
      have := AIG.LawfulVecOperator.le_size (f := blastZeroExtend) ..
      let extended := res.vec
      let aig := res.aig
      let shift := shift.cast (aig2 := aig) this
      let xcomp := xcomp.cast (aig2 := aig) this
      let working := working.cast (aig2 := aig) this
      let res := blastShiftLeft aig ⟨w - 1, extended, shift⟩
      have := AIG.LawfulVecOperator.le_size (f := blastShiftLeft) ..
      let shifted := res.vec
      let aig := res.aig
      let working := working.cast this
      let xcomp := xcomp.cast (aig2 := aig) this
      let res := AIG.RefVec.zip aig ⟨working, shifted⟩ AIG.mkOrCached
      go aig xcomp working (location - 1)
    else
      ⟨aig, working⟩

theorem blastSqrt_le_size (aig : AIG α) (input : AIG.RefVec aig w) :
    aig.decls.size ≤ (blastSqrt aig input).aig.decls.size := by
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
