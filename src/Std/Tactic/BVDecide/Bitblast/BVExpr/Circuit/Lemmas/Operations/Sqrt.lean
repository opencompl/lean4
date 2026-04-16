/-
Copyright (c) 2026 University of Cambridge. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Luisa Cicolini, Siddharth Bhat, Henrik Böving
-/

module

prelude
public import Std.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Lemmas.Basic
public import Std.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Lemmas.Const
public import Std.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Lemmas.Operations.Sub
public import Std.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Lemmas.Operations.Append
public import Std.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Lemmas.Operations.Eq
public import Std.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Lemmas.Operations.ZeroExtend
public import Std.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Lemmas.Operations.Extract
public import Std.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Lemmas.Operations.ShiftLeft
public import Std.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Impl.Operations.Sqrt

import Init.Data.BitVec.Bootstrap
import Init.Omega

/-!
This module contains the verification of the bitblaster for `BitVec.sqrt`, implemented in
`Impl.Operations.Sqrt`.
-/

namespace Std.Tactic.BVDecide

open Std.Sat
open Std.Sat.AIG

variable [Hashable α] [DecidableEq α]

namespace BVExpr

namespace bitblast
theorem denote_blastSqrt.go (aig : AIG α) (xcomp : AIG.RefVec aig (w + w - 2)) (working : AIG.RefVec aig (w - 1)) (location : Nat) (hw : 0 < w)
    (xcomp' : BitVec (w + w - 2)) (working' : BitVec (w - 1))
    (hxcomp : ∀ (idx : Nat) (hidx : idx < w + w - 2), ⟦aig, xcomp.get idx hidx, assign⟧ = xcomp'.getLsbD idx)
    (hworking : ∀ (idx : Nat) (hidx : idx < w - 1), ⟦aig, working.get idx hidx, assign⟧ = working'.getLsbD idx) :
    ∀ (idx : Nat) (hidx : idx < w - 1),
      ⟦
        (blastSqrt.go aig xcomp working location).aig,
        (blastSqrt.go aig xcomp working location).vec.get idx hidx,
        assign
      ⟧ = (BitVec.sqrtAux xcomp' working' location hw).getLsbD idx := by
  intros idx hidx
  generalize hgen : blastSqrt.go aig xcomp working location = res
  unfold blastSqrt.go at hgen
  split at hgen
  · rw [← hgen]


    sorry
  · unfold BitVec.sqrtAux
    rw [← hgen]
    simp [show location = 0 by omega, hworking]

@[simp]
public theorem denote_blastSqrt (aig : AIG α) (xc : AIG.RefVec aig w) (x : BitVec w)
    (assign : α → Bool)
    (hx : ∀ (idx : Nat) (hidx : idx < w), ⟦aig, xc.get idx hidx, assign⟧ = x.getLsbD idx) :
    ∀ (idx : Nat) (hidx : idx < w),
      ⟦
        (blastSqrt aig xc).aig,
        (blastSqrt aig xc).vec.get idx hidx,
        assign
      ⟧ = (BitVec.sqrt x).getLsbD idx := by

  sorry
