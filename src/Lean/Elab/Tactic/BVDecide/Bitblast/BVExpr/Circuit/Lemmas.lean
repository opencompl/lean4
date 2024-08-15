/-
Copyright (c) 2024 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Henrik Böving
-/
prelude
import Lean.Elab.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Impl
import Lean.Elab.Tactic.BVDecide.Bitblast.BVExpr.Circuit.Lemmas.Pred

/-!
This module contains the verification of the bitblaster for general `BitVec` problems with boolean
substructure (`BVLogicalExpr`). It is the main entrypoint for verification of the bitblasting
framework.
-/

namespace Lean.Elab.Tactic.BVDecide

open Std.Sat
open Std.Sat.AIG

namespace BVLogicalExpr

theorem bitblast.go_eval_eq_eval (expr : BVLogicalExpr) (aig : AIG BVBit) (assign : BVExpr.Assignment) :
    ⟦ofBoolExprCached.go aig expr BVPred.bitblast, assign.toAIGAssignment⟧ = expr.eval assign := by
  induction expr generalizing aig with
  | const => simp [ofBoolExprCached.go]
  | literal => simp [ofBoolExprCached.go]
  | not expr ih => simp [ofBoolExprCached.go, ih]
  | gate g lhs rhs lih rih => cases g <;> simp [ofBoolExprCached.go, Gate.eval, lih, rih]

theorem denote_bitblast (expr : BVLogicalExpr) (assign : BVExpr.Assignment) :
    ⟦bitblast expr, assign.toAIGAssignment⟧ = expr.eval assign := by
  unfold bitblast
  unfold ofBoolExprCached
  rw [bitblast.go_eval_eq_eval]

theorem unsat_of_bitblast (expr : BVLogicalExpr) : expr.bitblast.Unsat → expr.Unsat :=  by
  intro h assign
  rw [← denote_bitblast]
  apply h

end BVLogicalExpr

end Lean.Elab.Tactic.BVDecide
