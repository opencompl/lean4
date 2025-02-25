/-
Copyright (c) 2025 Amazon.com, Inc. or its affiliates. All Rights Reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
prelude
import Lean.Meta.Tactic.Grind.Types

namespace Int.Linear

def Poly.isZero : Poly → Bool
  | .num 0 => true
  | _ => false

/--
Returns `true` if the variables in the given polynomial are sorted
in decreasing order.
-/
def Poly.isSorted (p : Poly) : Bool :=
  go none p
where
  go : Option Var → Poly → Bool
  | _,      .num _     => true
  | none,   .add _ y p => go (some y) p
  | some x, .add _ y p => x > y && go (some y) p

def DvdCnstr.isSorted (c : DvdCnstr) : Bool :=
  c.p.isSorted

def DvdCnstr.isTrivial (c : DvdCnstr) : Bool :=
  match c.p with
  | .num k' => k' % c.k == 0
  | _ => c.k == 1

end Int.Linear

namespace Lean.Meta.Grind.Arith.Cutsat

def get' : GoalM State := do
  return (← get).arith.cutsat

@[inline] def modify' (f : State → State) : GoalM Unit := do
  modify fun s => { s with arith.cutsat := f s.arith.cutsat }

def getVars : GoalM (PArray Expr) :=
  return (← get').vars

def DvdCnstrWithProof.denoteExpr (cₚ : DvdCnstrWithProof) : GoalM Expr := do
  let vars ← getVars
  cₚ.c.denoteExpr (vars[·]!)

def toContextExpr : GoalM Expr := do
  let vars ← getVars
  if h : 0 < vars.size then
    return RArray.toExpr (mkConst ``Int) id (RArray.ofFn (vars[·]) h)
  else
    return RArray.toExpr (mkConst ``Int) id (RArray.leaf (mkIntLit 0))

/-- Auxiliary monad for constructing cutsat proofs. -/
abbrev ProofM := ReaderT Expr GoalM

/-- Returns a Lean expression representing the variable context used to construct cutsat proofs. -/
abbrev getContext : ProofM Expr := do
  read

abbrev withProofContext (x : ProofM α) : GoalM α := do
  x (← toContextExpr)

end Lean.Meta.Grind.Arith.Cutsat
