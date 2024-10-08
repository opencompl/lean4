/-
Copyright (c) 2024 Siddharth Bhat. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Siddharth Bhat

This file implements lazy ackermannization [1, 2]

[1] https://lara.epfl.ch/w/_media/model-based.pdf
[2]  https://leodemoura.github.io/files/oregon08.pdf
[3] https://github.com/Z3Prover/z3/blob/d047b86439ec209446d211f0f6b251ebfba070d8/src/ackermannization/lackr.cpp#L206
[4]https://github.com/Z3Prover/z3/blob/d047b86439ec209446d211f0f6b251ebfba070d8/src/ackermannization/lackr_model_constructor.cpp#L344
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

open Lean Elab Meta Tactic

structure Result where

namespace Ack

structure Config where

structure Context where
 config : Config

 /-- Types that can be bitblasted by bv_decide -/
 inductive BVTy
 /-- booleans -/
 | Bool
 /-- Bitvectors of a fixed width `w` -/
 | BitVec (w : Nat)
 deriving Hashable, DecidableEq, Inhabited

instance : ToMessageData BVTy where
  toMessageData 
  | .Bool => m!"bool"
  | .BitVec w => m!"BitVec {w}"

namespace BVTy

/-- Reify a raw expression into the types of bitvectors we can bitblast -/
def ofExpr? (e : Expr) : OptionT MetaM BVTy :=
  match_expr e.consumeMData with
  | Bool => return Bool
  | BitVec w => do
     let w ← getNatValue? w
     return .BitVec w
  | _ => OptionT.fail

def toExpr : BVTy → Expr
| .Bool => mkConst ``Bool
| .BitVec w => mkApp (mkConst ``BitVec) (mkNatLit w)

end BVTy

structure Argument where
  /-- The expression corresponding to the argument -/
  x : Expr
  /-- The cached type of the expression x -/
  xTy : BVTy
deriving Hashable, BEq, Inhabited

namespace Argument

instance : ToMessageData Argument where
  toMessageData arg := m!"{arg.x} : {arg.xTy}"

/-- Build an `Argument` from a raw expression -/
def ofExpr? (e : Expr) : OptionT MetaM Argument := do
  let t ← BVTy.ofExpr? (← inferType e)
  return { x := e, xTy := t}

end Argument


structure Function where
  /-- The function -/
  f : Expr
  codTy : BVTy
 deriving Hashable, BEq, Inhabited


namespace Function

instance : ToMessageData Function where
  toMessageData fn := m!"{fn.f} (cod: {fn.codTy})"

/--
Reify an expression `e` of the kind 
`f x₁ ... xₙ`, where all the arguments and the return type are a `BVTy` into an Ap
-/
def reifyAp (f : Expr) : OptionT MetaM (Function × Array Argument) := do
  let xs := f.getAppArgs
  /- We need at least one argument for this to be a function call we can ackermannize -/
  guard <| xs.size > 0
  let codTy ← BVTy.ofExpr? (← inferType f)
  let args ← xs.mapM Argument.ofExpr?
  let fn : Function := { f, codTy }
  return (fn, args)
end Function


/--
TODO: is it sensible to hash an array of arguments?
We may want to use something like a trie to index these.
Consider swiching to something like `Trie`.
-/
abbrev ArgumentList := Array Argument


/--
The data stored for an ackermannized call to allow us to build proofs.
-/
structure CallVal where
  /-- the free variable `ack_fx₁...xₙ := (f x₁ x₂ ... xₙ)`. -/
  fvar : FVarId 
  /-- heqProof : The proof that the value of the fvar `ack_fx₁...fxₙ` equals the application `f x₁ x₂ ... xₙ`. -/
  heqProof : Expr  
deriving Hashable, BEq, Inhabited

namespace CallVal
instance : ToMessageData CallVal where
  toMessageData cv := m!"{Expr.fvar cv.fvar} ({cv.heqProof})"
end CallVal


structure State where
  /--
  A maping from a function `f`, to a map of arguments `x₁ ... xₙ`, to the information stored about the call.
  This is used to generate equations of the form `x₁ = y₁ → x₂ = y₂ → ... → xₙ = yₙ → ack_fx₁...xₙ = ack_fy₁...yₙ on-demand.
  -/
  fn2args2call : Std.HashMap Function (Std.HashMap ArgumentList CallVal) := {}
  /-- A counter for generating fresh names. -/
  gensymCounter : Nat := 0


def State.init (_cfg : Config) : State where

abbrev AckM := StateRefT State (ReaderT Context MetaM)

namespace AckM

def run (m : AckM α) (ctx : Context) : MetaM α :=
  m.run' (State.init ctx.config) |>.run ctx

/-- Generate a fresh name. -/
def gensym : AckM Name := do
  modify fun s => { s with gensymCounter := s.gensymCounter + 1 }
  return Name.mkNum `ack (← get).gensymCounter

def withContext (g : MVarId) (ma : AckM α) : AckM α := g.withContext ma

/-- Get the calls to a function `fn`. -/
def getCallMap (fn : Function) : AckM (Std.HashMap ArgumentList CallVal) := do
  return (← get).fn2args2call.getD fn {}

/-- Get the calls to a function `fn`. -/
def getCallVal? (fn : Function) (args : Array Argument) : AckM (Option CallVal) := do
  let calls ← getCallMap fn
  if let .some val := calls.get? args then
    return some val
  return none

structure IntroDefResult where
  -- the new fvar of the defn.
  defn : FVarId
  -- a proof 'hdefn : defn = expr'
  eqProof : FVarId
  
/-
Introduce a new definition with name `name : hdefTy` into the local context,
and return the FVarId of the new definition in the new goal (the MVarId) returned.
-/
def introDefExt (g : MVarId) (name : Name) (hdefTy : Expr) (hdefVal : Expr) : AckM (IntroDefResult × MVarId) := do
  withContext g do
    let g ← g.assertExt name hdefTy hdefVal
    let (defn, g) ← g.intro1P
    let (eqProof, g) ← g.intro1P
    return ({ defn, eqProof}, g)

/-- Insert the CallVal `cv` at `(fn, args)` into the state. -/
private def _insertCallVal (fn : Function) (args : ArgumentList) (cv : CallVal) : AckM Unit := do
  let calls ← getCallMap fn
  modify fun s => { s with fn2args2call := s.fn2args2call.insert fn (calls.insert args cv) }
      

/--
Replace a call to the function `f` with an `fvar`. Since the `fvar` is defeq to the call,
we can just replace occurrences of the call with the fvar `f`.

We will later need to add another hypothesis with the equality that the `fvar = f x₁ ... xₙ`
-/

def replaceCallWithFVar (g : MVarId) (fn : Function) (args : ArgumentList) : AckM (CallVal × MVarId) := do
  if let some val ← getCallVal? fn args then 
    return (val, g)
  let name ← gensym
  let e := (mkAppN fn.f (args.map Argument.x))
  let (introDef, g) ← introDefExt g name fn.codTy.toExpr e
  let cv := { fvar := introDef.defn, heqProof := Expr.fvar introDef.eqProof : CallVal }
  _insertCallVal fn args cv
  return (cv, g)

/-- create a trace node in trace class (i.e. `set_option traceClass true`),
with header `header`, whose default collapsed state is `collapsed`. -/
def withTraceNode (header : MessageData) (k : AckM α)
    (collapsed : Bool := true)
    (traceClass : Name := `ack) : AckM α :=
  Lean.withTraceNode traceClass (fun _ => return header) k (collapsed := collapsed)

/-- An emoji used to report intemediate states where the tactic is processing hypotheses. -/
def processingEmoji : String := "⚙️"

/--
Create a trace note that folds `header` with `(NOTE: can be large)`,
and prints `msg` under such a trace node.
Used to print goal states, which can be quite noisy in the trace.
-/
def traceLargeMsg (header : MessageData) (msg : MessageData) : AckM Unit :=
    withTraceNode m!"{header} (NOTE: can be large)" do
      trace[ack] msg


/-- The proof of correctness of the Ackermannization transform. -/
theorem ackermannize_proof (A : Type _) (B : Type _)
    (f : A → B)
    (x y : A)
    (fx fy : B)
    (hfx : f x = fx) -- In the same order that `generalize h : f x = fx` would produce.
    (hfy : f y = fy) :
    x = y → fx = fy := by
  intros h
  subst h
  simp [← hfx, ← hfy]

/-- Returns `True` if the type is a function type that is understood by the bitblaster. -/
def isBitblastTy (e : Expr) : Bool :=
  match_expr e with
  | BitVec _ => true
  | Bool => true
  | _ => false

partial def doAck (g : MVarId) (e : Expr) : AckM (Expr × MVarId) := do
  g.withContext do
    traceLargeMsg m!"🔝 TOPLEVEL '{e}'" m!"{toString e}"
    match e with
    | .mdata _ e => doAck g e
    | .bvar .. | .fvar .. | .mvar .. | .sort .. | .const .. | .proj .. | .lit .. => return (e, g)
    | .lam .. | .letE .. => lambdaLetTelescope e (fun _args e => doAck g e)
    | .forallE .. => forallTelescope e (fun _args e => doAck g e)
    | .app .. => do 
      let f := e.getAppFn
      let .some codTy ← BVTy.ofExpr? (← inferType e) |>.run
        -- return type of `f` cannot be ackermannized, so bail out of processing `f`.
        | return (e, g)
      let fn := { f, codTy : Function }

      let args := e.getAppArgs
      assert! args.size > 0 -- since we are an application, we must have at least one argument.
       -- run ackermannization on all the arguments.
      -- This ensures that we process bottom-up, and at this stage, our argument
      -- has been ackermannized, if such an opportunity exists.
      let mut ackArgs := #[]
      for arg in args do
        let (arg, g) ← doAck g arg
        if let .some ackArg ← Argument.ofExpr? arg |>.run then
          ackArgs := ackArgs.push ackArg
        else
          -- we can't ackermannize this argument, so we bail out.
          return (e, g) 
         
      let (call, g) ← replaceCallWithFVar g fn ackArgs
      return (Expr.fvar call.fvar, g)


/-
For every bitvector (x : BitVec w), for every function `(f : BitVec w → BitVec w')`,
walk every function application (f x), and add a new fvar (fx : BitVec w').
- Keep an equality that says `fx = f x`.
- For function application of f, for each pair of bitvectors x, y,
  add a hypothesis that says `x = y => fx = fy, with proof.
-/
def ack (g : MVarId) : AckM Unit := do
    let mut g := g
    for hyp in (← g.getNondepPropHyps) do
      (_, g) ← doAck g (← hyp.getType)

end AckM

/-- Entry point for programmatic usage of `bv_ackermannize` -/
def ackTac (ctx : Context) : TacticM Unit := do
  liftMetaFinishingTactic fun g => do
    let some g ← g.falseOrByContra | return ()
    (AckM.ack g).run ctx

end Ack

@[builtin_tactic Lean.Parser.Tactic.bvAckEager]
def evalBvAckEager : Tactic := fun
  | `(tactic| bv_ack_eager) => 
    let config : Ack.Config := {}
    let ctx : Ack.Context := { config := config }
    Ack.ackTac ctx
  | _ => throwUnsupportedSyntax
