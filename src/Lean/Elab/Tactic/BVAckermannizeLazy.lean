/-
Copyright (c) 2024 Siddharth Bhat. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Siddharth Bhat

This file implements lazy ackermannization [1, 2]

[1] https://lara.epfl.ch/w/_media/model-based.pdf
[2] https://leodemoura.github.io/files/oregon08.pdf
[3] https://github.com/Z3Prover/z3/blob/d047b86439ec209446d211f0f6b251ebfba070d8/src/ackermannization/lackr.cpp#L206
[4] https://github.com/Z3Prover/z3/blob/d047b86439ec209446d211f0f6b251ebfba070d8/src/ackermannization/lackr_model_constructor.cpp#L344
-/
prelude
import Lean.Expr
import Lean.Message
import Std.Tactic.BVDecide.Bitblast
import Std.Tactic.BVAckermannize.Syntax
import Lean.Meta.Basic
import Lean.Elab.Tactic.Basic
import Lean.Meta.LitValues
import Lean.Meta.InferType
import Lean.Elab.Tactic.FalseOrByContra
import Lean.Meta.Tactic.Assert
import Lean.Meta.Tactic.Util
import Lean.Meta.Tactic.Congr
import Lean.Meta.Tactic.Replace
import Lean.Elab.Tactic.BVAckermannize

open Lean Elab Meta Tactic


namespace Ack

abbrev Fn2Args2Call := Std.HashMap Function (Std.HashMap ArgumentList CallVal) 
/--
A lazily built model,
which knows whch assignments need the funext axiom to be added.
-/
structure LazyState where
  /-- The set of calls for which we should add the extensionality axiom -/
  fn2args2callUnfolded : Fn2Args2Call

/-- Uninterpreted functions that created violations. -/
def findViolations : Fn2Args2Call := sorry

/--
Lazy ackermannization maintains the ackermannization state,
and enriches it with information necessary for lazy unfolding.
-/
abbrev AckLazyM := StateRefT LazyState AckM
namespace AckLazyM

/-- Create a trace node in trace class (i.e. `set_option traceClass true`),
with header `header`, whose default collapsed state is `collapsed`. -/
private def withTraceNode (header : MessageData) (k : AckM α)
    (collapsed : Bool := true)
    (traceClass : Name := `bv_ack) : AckM α :=
  Lean.withTraceNode traceClass (fun _ => return header) k (collapsed := collapsed)

def ackLazyOnce (g : MVarId) : AckLazyM MVarId := do
  g.withContext do
    let (target', g) ← Ack.AckM.introAckForExpr g (← inferType (Expr.mvar g))
    let g ← g.replaceTargetDefEq target'

    let hyps ← g.getNondepPropHyps
    let mut g := g
    for hyp in hyps do
      g ← g.withContext do
        withTraceNode m!"🎯 hyp '{← hyp.getType}'" (collapsed := false) do
          let hypG ← Ack.AckM.introAckForExpr g (← hyp.getType)
          pure hypG.2

    for (fn, arg2call) in (← getThe Ack.State).fn2args2call do
      let argCallsArr := arg2call.toArray
      for i in [0:argCallsArr.size] do
        let (arg₁, call₁) := argCallsArr[i]!
        for j in [i+1:argCallsArr.size] do
          let (arg₂, call₂) := argCallsArr[j]!
          if ← Ack.AckM.areArgListsTriviallyDifferent arg₁ arg₂ then
            continue
          g ← Ack.AckM.mkAckThm g fn arg₁ arg₂ call₁ call₂
    trace[bv_ack] "{checkEmoji} ack.{indentD g}"
    return g


def ack (g : MVarId) : AckM MVarId := do
  let mut madeProgress := true
  let mut g := g
  while true do
    if !madeProgress then
      throwError "{crossEmoji} unable to prove goal with lazy ackermannization"
  return g

end AckLazyM

/-- Entry point for programmatic usage of `bv_ackermannize` -/
def ackLazyTac : TacticM Unit := do
  withoutRecover do
    liftMetaTactic fun g => do
      let g ← (AckLazyM.ack g).run
      return [g]

end Ack

@[builtin_tactic Lean.Parser.Tactic.bvAckLazy]
def evalBvLazy : Tactic := fun
  | `(tactic| bv_ack_eager) => 
    Ack.ackLazyTac
  | _ => throwUnsupportedSyntax

