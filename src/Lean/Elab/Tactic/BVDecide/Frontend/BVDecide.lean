/-
Copyright (c) 2024 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Henrik Böving
-/
prelude
import Std.Sat.AIG.CNF
import Std.Sat.AIG.RelabelNat
import Std.Tactic.BVDecide.Bitblast
import Std.Tactic.BVDecide.Syntax
import Lean.Elab.Tactic.BVDecide.Frontend.BVDecide.SatAtBVLogical
import Lean.Elab.Tactic.BVDecide.Frontend.Normalize
import Lean.Elab.Tactic.BVDecide.Frontend.LRAT

/-!
This module provides the implementation of the `bv_decide` frontend itself.
-/

namespace Lean.Elab.Tactic.BVDecide
namespace Frontend

open Std.Sat
open Std.Tactic.BVDecide
open Std.Tactic.BVDecide.Reflect
open Lean.Meta

/--
Given:
- `var2Cnf`: The mapping from AIG to CNF variables.
- `assignments`: A model for the CNF as provided by a SAT solver.
- `aigSize`: The amount of nodes in the AIG that was used to produce the CNF.
- `atomsAssignment`: The mapping of the reflection monad from atom indices to `Expr`.

Reconstruct bit by bit which value expression must have had which `BitVec` value and return all
expression - pair values.
-/
def reconstructCounterExample (var2Cnf : Std.HashMap BVBit Nat) (assignment : Array (Bool × Nat))
    (aigSize : Nat) (atomsAssignment : Std.HashMap Nat Expr) :
    Array (Expr × BVExpr.PackedBitVec) := Id.run do
  let mut sparseMap : Std.HashMap Nat (RBMap Nat Bool Ord.compare) := {}
  for (bitVar, cnfVar) in var2Cnf.toArray do
    /-
    The setup of the variables in CNF is as follows:
    1. One auxiliary variable for each node in the AIG
    2. The actual BitVec bitwise variables
    Hence we access the assignment array offset by the AIG size to obtain the value for a BitVec bit.
    We assume that a variable can be found at its index as CaDiCal prints them in order.

    Note that cadical will report an assignment for all literals up to the maximum literal from the
    CNF. So even if variable or AIG bits below the maximum literal did not occur in the CNF they
    will still occur in the assignment that cadical reports.

    There is one crucial thing to consider in addition: If the highest literal that ended up in the
    CNF does not represent the highest variable bit not all variable bits show up in the assignment.
    For this situation we do the same as cadical for literals that did not show up in the CNF:
    set them to true.
    -/
    let idx := cnfVar + aigSize
    let varSet := if h : idx < assignment.size then assignment[idx].fst else true
    let mut bitMap := sparseMap.getD bitVar.var {}
    bitMap := bitMap.insert bitVar.idx varSet
    sparseMap := sparseMap.insert bitVar.var bitMap

  let mut finalMap := #[]
  for (bitVecVar, bitMap) in sparseMap.toArray do
    let mut value : Nat := 0
    let mut currentBit := 0
    for (bitIdx, bitValue) in bitMap.toList do
      assert! bitIdx == currentBit
      if bitValue then
        value := value ||| (1 <<< currentBit)
      currentBit := currentBit + 1
    let atomExpr := atomsAssignment.get! bitVecVar
    finalMap := finalMap.push (atomExpr, ⟨BitVec.ofNat currentBit value⟩)
  return finalMap

structure ReflectionResult where
  bvExpr : BVLogicalExpr
  proveFalse : Expr → M Expr
  unusedHypotheses : Std.HashSet FVarId

structure UnsatProver.Result where
  proof : Expr
  lratCert : LratCert

abbrev UnsatProver := ReflectionResult → Std.HashMap Nat Expr → MetaM UnsatProver.Result

/--
Contains values that will be used to diagnose spurious counter examples.
-/
structure DiagnosisInput where
  unusedHypotheses : Std.HashSet FVarId
  atomsAssignment : Std.HashMap Nat Expr

/--
The result of a spurious counter example diagnosis.
-/
structure Diagnosis where
  uninterpretedSymbols : Std.HashSet Expr := {}
  unusedRelevantHypotheses : Std.HashSet FVarId := {}

abbrev DiagnosisM : Type → Type := ReaderT DiagnosisInput <| StateRefT Diagnosis MetaM

namespace DiagnosisM

def run (x : DiagnosisM Unit) (unusedHypotheses : Std.HashSet FVarId)
    (atomsAssignment : Std.HashMap Nat Expr) : MetaM Diagnosis := do
  let (_, issues) ← ReaderT.run x { unusedHypotheses, atomsAssignment } |>.run {}
  return issues

def unusedHyps : DiagnosisM (Std.HashSet FVarId) := do
  return (← read).unusedHypotheses

def atomsAssignment : DiagnosisM (Std.HashMap Nat Expr) := do
  return (← read).atomsAssignment

def addUninterpretedSymbol (e : Expr) : DiagnosisM Unit :=
  modify fun s => { s with uninterpretedSymbols := s.uninterpretedSymbols.insert e }

def addUnusedRelevantHypothesis (fvar : FVarId) : DiagnosisM Unit :=
  modify fun s => { s with unusedRelevantHypotheses := s.unusedRelevantHypotheses.insert fvar }

def checkRelevantHypsUsed (fvar : FVarId) : DiagnosisM Unit := do
  for hyp in ← unusedHyps do
    if (← hyp.getType).containsFVar fvar then
      addUnusedRelevantHypothesis hyp

/--
Diagnose spurious counter examples, currently this checks:
- Whether uninterpreted symbols were used
- Whether all hypotheses which contain any variable that was bitblasted were included
-/
def diagnose : DiagnosisM Unit := do
  for (_, expr) in ← atomsAssignment do
    match_expr expr with
    | BitVec.ofBool x =>
      match x with
      | .fvar fvarId => checkRelevantHypsUsed fvarId
      | _ => addUninterpretedSymbol expr
    | _ =>
      match expr with
      | .fvar fvarId => checkRelevantHypsUsed fvarId
      | _ => addUninterpretedSymbol expr

end DiagnosisM

def uninterpretedExplainer (d : Diagnosis) : Option MessageData := do
  guard !d.uninterpretedSymbols.isEmpty
  let symList := d.uninterpretedSymbols.toList
  return m!"It abstracted the following unsupported expressions as opaque variables: {symList}"

def unusedRelevantHypothesesExplainer (d : Diagnosis) : Option MessageData := do
  guard !d.unusedRelevantHypotheses.isEmpty
  let hypList := d.unusedRelevantHypotheses.toList.map mkFVar
  return m!"The following potentially relevant hypotheses could not be used: {hypList}"

def explainers : List (Diagnosis → Option MessageData) :=
  [uninterpretedExplainer, unusedRelevantHypothesesExplainer]

def explainCounterExampleQuality (unusedHypotheses : Std.HashSet FVarId)
    (atomsAssignment : Std.HashMap Nat Expr) : MetaM MessageData := do
  let diagnosis ← DiagnosisM.run DiagnosisM.diagnose unusedHypotheses atomsAssignment
  let folder acc explainer := if let some m := explainer diagnosis then acc.push m else acc
  let explanations := explainers.foldl (init := #[]) folder

  if explanations.isEmpty then
    return m!"The prover found a counterexample, consider the following assignment:\n"
  else
    let mut err := m!"The prover found a potentially spurious counterexample:\n"
    err := err ++ explanations.foldl (init := m!"") (fun acc exp => acc ++ m!"- " ++ exp ++ m!"\n")
    err := err ++ m!"Consider the following assignment:\n"
    return err

def lratBitblaster (cfg : TacticContext) (reflectionResult : ReflectionResult)
    (atomsAssignment : Std.HashMap Nat Expr) :
    MetaM UnsatProver.Result := do
  let bvExpr := reflectionResult.bvExpr
  let entry ←
    withTraceNode `bv (fun _ => return "Bitblasting BVLogicalExpr to AIG") do
      -- lazyPure to prevent compiler lifting
      IO.lazyPure (fun _ => bvExpr.bitblast)
  let aigSize := entry.aig.decls.size
  trace[Meta.Tactic.bv] s!"AIG has {aigSize} nodes."

  if cfg.graphviz then
    IO.FS.writeFile ("." / "aig.gv") <| AIG.toGraphviz entry

  let (cnf, map) ←
    withTraceNode `sat (fun _ => return "Converting AIG to CNF") do
      -- lazyPure to prevent compiler lifting
      IO.lazyPure (fun _ =>
        let (entry, map) := entry.relabelNat'
        let cnf := AIG.toCNF entry
        (cnf, map)
      )

  let res ←
    withTraceNode `sat (fun _ => return "Obtaining external proof certificate") do
      runExternal cnf cfg.solver cfg.lratPath cfg.trimProofs cfg.timeout cfg.binaryProofs

  match res with
  | .ok cert =>
    let proof ← cert.toReflectionProof cfg bvExpr ``verifyBVExpr ``unsat_of_verifyBVExpr_eq_true
    return ⟨proof, cert⟩
  | .error assignment =>
    let reconstructed := reconstructCounterExample map assignment aigSize atomsAssignment
    let mut error ← explainCounterExampleQuality reflectionResult.unusedHypotheses atomsAssignment
    for (var, value) in reconstructed do
      error := error ++ m!"{var} = {value.bv}\n"
    throwError error


def reflectBV (g : MVarId) : M ReflectionResult := g.withContext do
  let hyps ← getPropHyps
  let mut sats := #[]
  let mut unusedHypotheses := {}
  for hyp in hyps do
    if let some reflected ← SatAtBVLogical.of (mkFVar hyp) then
      sats := sats.push reflected
    else
      unusedHypotheses := unusedHypotheses.insert hyp
  if sats.size = 0 then
    let mut error := "None of the hypotheses are in the supported BitVec fragment.\n"
    error := error ++ "There are two potential fixes for this:\n"
    error := error ++ "1. If you are using custom BitVec constructs simplify them to built-in ones.\n"
    error := error ++ "2. If your problem is using only built-in ones it might currently be out of reach.\n"
    error := error ++ "   Consider expressing it in terms of different operations that are better supported."
    throwError error
  let sat := sats.foldl (init := SatAtBVLogical.trivial) SatAtBVLogical.and
  return {
    bvExpr := sat.bvExpr,
    proveFalse := sat.proveFalse,
    unusedHypotheses := unusedHypotheses
  }


def closeWithBVReflection (g : MVarId) (unsatProver : UnsatProver) :
    MetaM LratCert := M.run do
  g.withContext do
    let reflectionResult ←
      withTraceNode `bv (fun _ => return "Reflecting goal into BVLogicalExpr") do
        reflectBV g
    trace[Meta.Tactic.bv] "Reflected bv logical expression: {reflectionResult.bvExpr}"

    let atomsPairs := (← getThe State).atoms.toList.map (fun (expr, _, ident) => (ident, expr))
    let atomsAssignment := Std.HashMap.ofList atomsPairs
    let ⟨bvExprUnsat, cert⟩ ← unsatProver reflectionResult atomsAssignment
    let proveFalse ← reflectionResult.proveFalse bvExprUnsat
    g.assign proveFalse
    return cert

def bvUnsat (g : MVarId) (cfg : TacticContext) : MetaM LratCert := M.run do
  let unsatProver : UnsatProver := fun reflectionResult atomsAssignment => do
    withTraceNode `bv (fun _ => return "Preparing LRAT reflection term") do
      lratBitblaster cfg reflectionResult atomsAssignment
  closeWithBVReflection g unsatProver

structure Result where
  simpTrace : Simp.Stats
  lratCert : Option LratCert

def bvDecide (g : MVarId) (cfg : TacticContext) : MetaM Result := do
  let ⟨g?, simpTrace⟩ ← Normalize.bvNormalize g
  let some g := g? | return ⟨simpTrace, none⟩
  let lratCert ← bvUnsat g cfg
  return ⟨simpTrace, some lratCert⟩

@[builtin_tactic Lean.Parser.Tactic.bvDecide]
def evalBvTrace : Tactic := fun
  | `(tactic| bv_decide) => do
    IO.FS.withTempFile fun _ lratFile => do
      let cfg ← BVDecide.Frontend.TacticContext.new lratFile
      liftMetaFinishingTactic fun g => do
        discard <| bvDecide g cfg
  | _ => throwUnsupportedSyntax

end Frontend
end Lean.Elab.Tactic.BVDecide

