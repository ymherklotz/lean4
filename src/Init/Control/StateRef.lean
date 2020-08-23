/-
Copyright (c) 2016 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura, Sebastian Ullrich

The State monad transformer using IO references.
-/
prelude
import Init.System.IO
import Init.Control.State

def StateRefT' (ω : Type) (σ : Type) (m : Type → Type) (α : Type) : Type := ReaderT (ST.Ref ω σ) m α
abbrev StateRefT {ω : Type} (σ : Type) (m : Type → Type) [STWorld ω m] (α : Type) := StateRefT' ω σ m α

@[inline] def StateRefT'.run {ω σ : Type} {m : Type → Type} [Monad m] [HasMonadLiftT (ST ω) m] {α : Type} (x : StateRefT' ω σ m α) (s : σ) : m (α × σ) := do
ref ← ST.mkRef s;
a ← x ref;
s ← ref.get;
pure (a, s)

@[inline] def StateRefT'.run' {ω σ : Type} {m : Type → Type} [Monad m] [HasMonadLiftT (ST ω) m] {α : Type} (x : StateRefT' ω σ m α) (s : σ) : m α := do
(a, _) ← x.run s;
pure a

namespace StateRefT'
variables {ω σ : Type} {m : Type → Type} {α : Type}

@[inline] protected def lift (x : m α) : StateRefT' ω σ m α :=
fun _ => x

instance [Monad m] : Monad (StateRefT' ω σ m) := inferInstanceAs (Monad (ReaderT _ _))
instance : HasMonadLift m (StateRefT' ω σ m) := ⟨fun _ => StateRefT'.lift⟩
instance [Monad m] [MonadIO m] : MonadIO (StateRefT' ω σ m) := inferInstanceAs (MonadIO (ReaderT _ _))
instance (σ m m') [Monad m] [Monad m'] : MonadFunctor m m' (StateRefT' ω σ m) (StateRefT' ω σ m') :=
inferInstanceAs (MonadFunctor m m' (ReaderT _ _) (ReaderT _ _))

@[inline] protected def get [Monad m] [HasMonadLiftT (ST ω) m] : StateRefT' ω σ m σ :=
fun ref => ref.get

@[inline] protected def set [Monad m] [HasMonadLiftT (ST ω) m] (s : σ) : StateRefT' ω σ m PUnit :=
fun ref => ref.set s

@[inline] protected def modifyGet [Monad m] [HasMonadLiftT (ST ω) m] (f : σ → α × σ) : StateRefT' ω σ m α :=
fun ref => ref.modifyGet f

instance [HasMonadLiftT (ST ω) m] [Monad m] : MonadStateOf σ (StateRefT' ω σ m) :=
{ get       := StateRefT'.get,
  set       := StateRefT'.set,
  modifyGet := fun α f => StateRefT'.modifyGet f }

instance (ε) [MonadExceptOf ε m] : MonadExceptOf ε (StateRefT' ω σ m) :=
{ throw := fun α => StateRefT'.lift ∘ throwThe ε,
  catch := fun α x c s => catchThe ε (x s) (fun e => c e s) }

end StateRefT'
