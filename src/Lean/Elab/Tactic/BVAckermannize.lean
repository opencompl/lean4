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
  g.withContext do
    if let some val ← getCallVal? fn args then 
      trace[bv_ack] "using cached call {val} for {fn} {args}"
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

mutual
partial def ackAppChildren (g : MVarId) (e : Expr) : AckM (Expr × MVarId) := do
  g.withContext do
    trace[bv_ack] "{crossEmoji} bailing out on illegal application {e}"
    let mut g := g
    let f := e.getAppFn
    let args := e.getAppArgs

    g ← g.withContext do
          pure (← introAckForExpr g f).2
    for arg in args do
      g ← g.withContext do
            pure (← introAckForExpr g arg).2
    return (e, g)
    

partial def introAckForExpr (g : MVarId) (e : Expr) : AckM (Expr × MVarId) := do
  g.withContext do
    traceLargeMsg m!"🔝 TOPLEVEL '{e}'" m!"{toString e}"
    match e with
    | .mdata _ e => introAckForExpr g e
    | .bvar .. | .fvar .. | .mvar .. | .sort .. | .const .. | .proj .. | .lit .. => return (e, g)
    | .lam .. | .letE .. => lambdaLetTelescope e (fun _args e => introAckForExpr g e)
    | .forallE .. => forallTelescope e (fun _args e => introAckForExpr g e)
    | .app .. => do 
      withTraceNode m!"ackermannizing application '{e}'" do
        let f := e.getAppFn
        let te ← inferType e
        let .some codTy ← BVTy.ofExpr? te |>.run
          | do
            trace[bv_ack] "unable to convert type of the expression '{te}' into a 'BVTy'."
            ackAppChildren g e
        trace[bv_ack] "found application with legal codomain '{f}'"

        let fn := { f, codTy : Function }

        let args := e.getAppArgs
        assert! args.size > 0 -- since we are an application, we must have at least one argument.
         -- run ackermannization on all the arguments.
        -- This ensures that we process bottom-up, and at this stage, our argument
        -- has been ackermannized, if such an opportunity exists.
        let mut ackArgs := #[]
        for arg in args do
          let (arg, g) ← introAckForExpr g arg
          -- do I need a `withContext` here? :(
          if let .some ackArg ← Argument.ofExpr? arg |>.run then
            trace[bv_ack] "found legal argument {arg}"
            ackArgs := ackArgs.push ackArg
          else
            -- bail out, and recurse into the `app` since we can't ackermannize it.
            trace[bv_ack] "{crossEmoji} bailing out on illegal argument {arg}"
            return (← ackAppChildren g e)
           
        trace[bv_ack] "replacing call with fvar..."
        let (call, g) ← replaceCallWithFVar g fn ackArgs
        g.withContext do
          trace[bv_ack] "replaced! call {call}."
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

/-
f : δ → ε → ω
want : (h₁ : x1 = y1) -> (h₂ : x2 = y2) -> f x1 x2 = f y1 y2

c1 : congr δ (ε → ω) f f x1 y1 rfl h₁ : f x1 = f y1
c2 : congr ε ω (f x1) (f y1) x2 y2 c1 h₂ : f x2 = f y2

-/

/- We can reuse `congr` to prove this -/
example (f : α → β → γ) (x x' : α) (y y' : β) (hx : x = x') (hy : y = y') : f x y = f x' y' := by congr


/-
Make the ackermannization theorem, which states that: `(∀ i, arg₁[i] = arg₂[i]) -> call₁ = call₂`.
Formally, we build an expr such as `arg₁ = arg'₁ -> arg₂ = arg'₂ -> ... argₙ = arg'ₙ -> call₁ = call₂`,
where the proof is by congruence over the equalities.
-/
def mkAckThm (g : MVarId) (fn : Function) (args args' : Array Argument) (call call' : CallVal): AckM MVarId := do
  withContext g do
    trace[bv_ack] "making ack congr thm for '{fn}' '{args}' ~ '{args'}',  calls '{call}', '{call'}'"
    if args.size = 0 then
      throwTacticEx `bv_ack_eagerg g m!"expected {args} to have more than zero arguments when building congr theorem for {fn}."
    if args'.size = 0 then
      throwTacticEx `bv_ack_eagerg g m!"expected {args'} to have more than zero arguments when building congr theorem for {fn}."

    if args.size ≠ args'.size then
      throwTacticEx `bv_ack_eagerg g m!"internal error: expected {args} to have the same size as {args'} when building congr thm for {fn}."
    let mut eqHyps := #[]
    for (arg, arg') in args.zip args' do
      eqHyps := eqHyps.push (← mkEq arg.x arg'.x)
    -- | TODO: cache info to not need inferType here.
    eqHyps := eqHyps.push (← inferType call.heqProof)
    eqHyps := eqHyps.push (← inferType  call'.heqProof)
    trace[bv_ack] "made equality hypotheses {eqHyps}"
    let fArgsEq ← mkEq (.fvar call.fvar) (.fvar call'.fvar)
    trace[bv_ack] "made arguments equal theorem {fArgsEq}"
    let thmTy ← mkArrowN eqHyps fArgsEq 
    trace[bv_ack] "making proof obligation ⊢ {thmTy} for congr."
    let mvar ← mkFreshExprMVar thmTy
    trace[bv_ack] "made new goal mvar {mvar}"
    mvar.mvarId!.withContext do
      let mvarId := mvar.mvarId!
      let (_, mvarId) ← mvarId.note .anonymous call.heqProof
      let (_, mvarId) ← mvarId.note .anonymous call'.heqProof
      let congrResult ← mvarId.congrN
      if congrResult.length ≠ 0 then
        trace[bv_ack] m!"expected congr theorem '{mvarId}' to be automatically proved with 'congr', but failed."
        throwTacticEx `bv_ack_eager g m!"expected congr theorem '{mvar}' to be automatically proved with 'congr', but failed."
      trace[bv_ack] "proved goal with type {mvar}. Now reifying value"
      let outExpr ← instantiateMVars mvar
      trace[bv_ack] "proved goal with value {outExpr}"
      -- Add the ackermannization theorem
      g.withContext do
        trace[bv_ack] "made congr thm for {fn} {args} ~ {args'} for calls {call} and {call'}. outExpr is {outExpr}"
        let (_fvar, g) ← g.note (Name.mkSimple "ack_" ++ call.fvar.name ++ call'.fvar.name) outExpr
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
    let mut g := g
    let hyps ← g.getNondepPropHyps
    (_, g) ← introAckForExpr g (← inferType (Expr.mvar g))
    for hyp in hyps do
      trace[bv_ack] "ackermannizing '{← hyp.getType}'"
      (_, g) ← introAckForExpr g (← hyp.getType)
      trace[bv_ack] "acerkmannized, new goal {g}"
    trace[bv_ack] "done with ackermannization, now adding new theorems..."
    for (fn, arg2call) in (← get).fn2args2call do
      for (arg₁, call₁) in arg2call do
        for (arg₂, call₂) in arg2call do
          if ← areArgListsTriviallyDifferent arg₁ arg₂ then
            continue
          if arg₁ == arg₂ then continue
          g ← mkAckThm g fn arg₁ arg₂ call₁ call₂

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
