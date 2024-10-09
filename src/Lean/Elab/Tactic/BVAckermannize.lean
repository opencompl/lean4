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
import Lean.Meta.Tactic.Congr
import Lean.Meta.Tactic.Replace

open Lean Elab Meta Tactic

initialize Lean.registerTraceClass `bv_ack

namespace Ack

structure Config where

structure Context extends Config where
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

 /-- info: _root_.BitVec (w : Nat) : Type -/
 #guard_msgs in #check _root_.BitVec

/-- Reify a raw expression into the types of bitvectors we can bitblast -/
def ofExpr? (e : Expr) : OptionT MetaM BVTy :=
  match_expr e.consumeMData with
  | _root_.Bool => return Bool
  | _root_.BitVec w => do
     let w ← getNatValue? w
     return .BitVec w
  | _ => OptionT.fail

def toExpr : BVTy → Expr
| .Bool => mkConst ``_root_.Bool
| .BitVec w => mkApp (mkConst ``_root_.BitVec) (mkNatLit w)

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
  /-- heqProof : The proof that `ack_fx₁...fxₙ = f x₁ x₂ ... xₙ` (name/fvar = value/expr). -/
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
  return Name.mkNum (Name.mkSimple "ackConst") (← get).gensymCounter

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
  -- the new name/fvar of the defn.
  defn : FVarId
  -- a proof 'hdefn : name = value
  eqProof : FVarId
  
/-
Introduce a new definition with name `name : hdefTy` into the local context,
and return the FVarId of the new definition in the new goal (the MVarId) returned.
-/
def introDefExt (g : MVarId) (name : Name) (hdefTy : Expr) (hdefVal : Expr) : AckM (IntroDefResult × MVarId) := do
  withContext g do
    let g ← g.assertExt name (hName := Name.str name "value") hdefTy hdefVal
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
  g.withContext do
    if let some val ← getCallVal? fn args then 
      trace[bv_ack] "using cached call {val} for {fn} {args}"
      return (val, g)
    let e := mkAppN fn.f (args.map Argument.x)
    let name ← gensym
    let (introDef, g) ← introDefExt g name fn.codTy.toExpr e
    let cv := { fvar := introDef.defn, heqProof := Expr.fvar introDef.eqProof : CallVal }
    _insertCallVal fn args cv
    return (cv, g)

/-- create a trace node in trace class (i.e. `set_option traceClass true`),
with header `header`, whose default collapsed state is `collapsed`. -/
def withTraceNode (header : MessageData) (k : AckM α)
    (collapsed : Bool := true)
    (traceClass : Name := `bv_ack) : AckM α :=
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


/-- Returns `True` if the type is a function type that is understood by the bitblaster. -/
def isBitblastTy (e : Expr) : Bool :=
  match_expr e with
  | BitVec _ => true
  | Bool => true
  | _ => false

mutual
partial def ackAppChildren (g : MVarId) (e : Expr) : AckM (Expr × MVarId) := do
  g.withContext do
    trace[bv_ack] "{crossEmoji} bailing out on illegal application {e}"
    let f := e.getAppFn
    let (f, g) ← introAckForExpr g f
    -- | Rewrite as a fold? It's not too much cleaner, sadly.
    let mut args := #[]
    let mut g := g
    for arg in e.getAppArgs do
      let gArg ← introAckForExpr g arg
      g := gArg.2
      args := args.push gArg.1
    return (mkAppN f args, g)
    

partial def introAckForExpr (g : MVarId) (e : Expr) : AckM (Expr × MVarId) := do
  g.withContext do
    match e with
    | .mdata _ e => introAckForExpr g e
    | .bvar .. | .fvar .. | .mvar .. | .sort .. | .const .. | .proj .. | .lit .. => return (e, g)
    | .lam .. | .letE .. => 
      lambdaLetTelescope e fun args e => do 
        let (e, g) ← introAckForExpr g e
        return (← mkLambdaFVars args e, g)
    | .forallE .. => forallTelescope e fun args e => do 
        let (e, g) ← introAckForExpr g e
        return (← mkForallFVars args e, g)
    | .app .. => do 
      withTraceNode m!"@ Expr.app '{e}'" do
        let f := e.getAppFn
        let te ← inferType e
        let .some codTy ← BVTy.ofExpr? te |>.run
          | do
            trace[bv_ack] "{crossEmoji} '{te}' not BitVec/Bool."
            return (← ackAppChildren g e)
        trace[bv_ack] "{checkEmoji} {e}'s codomain '{te}'"

        let fn := { f, codTy : Function }

        let args := e.getAppArgs
        assert! args.size > 0 -- since we are an application, we must have at least one argument.
         -- run ackermannization on all the arguments.
        -- This ensures that we process bottom-up, and at this stage, our argument
        -- has been ackermannized, if such an opportunity exists.
        let mut ackArgs := #[]
        for arg in args do
          trace[bv_ack] "@ arg {arg}"
          let (arg, g) ← introAckForExpr g arg
          -- do I need a `withContext` here? :(
          if let .some ackArg ← Argument.ofExpr? arg |>.run then
            trace[bv_ack] "{checkEmoji} arg {arg}"
            ackArgs := ackArgs.push ackArg
          else
            -- bail out, and recurse into the `app` since we can't ackermannize it.
            trace[bv_ack] "{crossEmoji} {arg}"
            return (← ackAppChildren g e)
           
        let (call, g) ← replaceCallWithFVar g fn ackArgs
        g.withContext do
          trace[bv_ack] "{e} → {call}."
          return (Expr.fvar call.fvar, g)
end


/--
Return true if the argument lists are trivially different.
This is an optimization that we do not yet implement.
-/
def areArgListsTriviallyDifferent (_arg₁ _arg₂ : Array Argument) : AckM Bool := return false

/-
Return true if the argument lists are trivially the same.
This is an optimization that we do not yet implement.
If possible, return the simplified hypothesis of the equality of these expressions.
TODO: -- def areArgListsTriviallySame (arg₁ arg₂ : Array Argument) : AckM (Option Expr) := return none
-/


/-- info: congr.{u, v} {α : Sort u} {β : Sort v} {f₁ f₂ : α → β} {a₁ a₂ : α} (h₁ : f₁ = f₂) (h₂ : a₁ = a₂) : f₁ a₁ = f₂ a₂ -/
#guard_msgs in #check congr

/-- This is how we build the congruence lemma for `n` arguments -/
private example (f : X1 → X2 → O) 
    -- we have these already.
    (x1 x1' : X1) (x2 x2' : X2)
    (ackEqApp : fx1x2 = f x1 x2)
    (ackEqApp' : fx1'x2' = f x1' x2') 
    -- to be intros'd
    (h1 : x1 = x1')
    (h2 : x2 = x2') :
  fx1x2 = fx1'x2' := 
  let appEqApp : f x1 x2 = f x1' x2' := congr (congr (Eq.refl f) h1) h2
  Eq.trans (Eq.trans ackEqApp appEqApp) (Eq.symm ackEqApp')


/-
Make the ackermannization theorem, which states that: `(∀ i, arg₁[i] = arg₂[i]) -> call₁ = call₂`.
Formally, we build an expr such as `arg₁ = arg'₁ -> arg₂ = arg'₂ -> ... argₙ = arg'ₙ -> call₁ = call₂`,
where the proof is by congruence over the equalities.
-/
def mkAckThm (g : MVarId) (fn : Function) (args args' : Array Argument) (call call' : CallVal): AckM MVarId := do
  withContext g do
    trace[bv_ack] "making ack congr thm for '{fn}' '{args}' ~ '{args'}',  calls '{call}', '{call'}'"
    if args.size = 0 then
      throwTacticEx `bv_ack g
        m!"expected {args} to have more than zero arguments when building congr theorem for {fn}."
    if args'.size = 0 then
      throwTacticEx `bv_ack g
        m!"expected {args'} to have more than zero arguments when building congr theorem for {fn}."

    if args.size ≠ args'.size then
      throwTacticEx `bv_ack g 
        m!"internal error: expected {args} to have the same size as {args'} when building congr thm for {fn}."
    let mut eqHyps := #[]
    for (arg, arg') in args.zip args' do
      eqHyps := eqHyps.push (← mkEq arg.x arg'.x)
    -- we build the equality according to the example above.
    let mut localDecls : Array (Name × BinderInfo × (Array Expr → AckM Expr)) := #[]
    let mut i := 0
    for (arg, arg') in args.zip args' do
      let name := Name.num (Name.mkSimple "ack_arg") i
      localDecls := localDecls.push (name, BinderInfo.default, fun _ => mkEq arg.x arg'.x)
    let ackEqn ← withLocalDecls localDecls fun argsEq => do 
      let mut fEq ← mkEqRefl fn.f
      for argEq in argsEq do
        fEq ← mkCongr fEq argEq
      -- now fEq  ~ appEqApp
      let finalEq ←  mkEqTrans (← mkEqTrans call.heqProof fEq) (← mkEqSymm call'.heqProof)
      mkLambdaFVars argsEq  finalEq
    trace[bv_ack] "made ackermann equation: {ackEqn}"
    let (_ackEqn, g) ← g.note (Name.mkSimple s!"ackEqn{fn.f}") ackEqn
    return g

/-
For every bitvector (x : BitVec w), for every function `(f : BitVec w → BitVec w')`,
walk every function application (f x), and add a new fvar (fx : BitVec w').
- Keep an equality that says `fx = f x`.
- For function application of f, for each pair of bitvectors x, y,
  add a hypothesis that says `x = y => fx = fy, with proof.
-/
def ack (g : MVarId) : AckM MVarId := do
  g.withContext do
    let (target', g) ← introAckForExpr g (← inferType (Expr.mvar g))
    let g ← g.replaceTargetDefEq target'

    let hyps ← g.getNondepPropHyps
    let mut g := g
    for hyp in hyps do
      g ← g.withContext do
        withTraceNode m!"@ hyp '{← hyp.getType}'" do
          let hypG ← introAckForExpr g (← hyp.getType)
          pure hypG.2

    -- trace[bv_ack] "done with ackermannization collection, now adding new theorems..."
    for (fn, arg2call) in (← get).fn2args2call do
      let argCallsArr := arg2call.toArray
      for i in [0:argCallsArr.size] do
        let (arg₁, call₁) := argCallsArr[i]!
        for j in [i+1:argCallsArr.size] do
          let (arg₂, call₂) := argCallsArr[j]!
          if ← areArgListsTriviallyDifferent arg₁ arg₂ then
            continue
          g ← withContext g do
                mkAckThm g fn arg₁ arg₂ call₁ call₂
    trace[bv_ack] "{checkEmoji} ack.{indentD g}"
    return g

end AckM

/-- Entry point for programmatic usage of `bv_ackermannize` -/
def ackTac (ctx : Context) : TacticM Unit := do
  withoutRecover do
    liftMetaTactic fun g => do
      let g ← (AckM.ack g).run ctx
      return [g]

end Ack

@[builtin_tactic Lean.Parser.Tactic.bvAckEager]
def evalBvAckEager : Tactic := fun
  | `(tactic| bv_ack_eager) => 
    let config : Ack.Config := {}
    let ctx : Ack.Context := { config := config }
    Ack.ackTac ctx
  | _ => throwUnsupportedSyntax
