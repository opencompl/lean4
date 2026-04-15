/-
Copyright (c) 2026 University of Cambridge. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Luisa Cicolini, Siddharth Bhat, Henrik Böving
-/


@[simp]
public theorem denote_blastSqrt
    (aig : AIG α) (xc : AIG.RefVec aig w) (x : BitVec w)
    (assign : α → Bool)
    (hx : ∀ (idx : Nat) (hidx : idx < w), ⟦aig, xc.get idx hidx, assign⟧ = x.getLsbD idx) :

    ∀ (idx : Nat) (hidx : idx < w),
      ⟦
        (blastSqrt aig xc).aig,
        (blastSqrt aig xc).vec.get idx hidx,
        assign
      ⟧ = (BitVec.sqrt x).getLsbD idx := by
  sorry
