// This file was generated based on /usr/local/share/uno/Packages/FuseJS/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeEvent;}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeProperty;}}}
namespace g{namespace FuseJS{struct Lifecycle;}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace FuseJS{

// public sealed class Lifecycle :132
// {
::g::Fuse::Scripting::NativeModule_type* Lifecycle_typeof();
void Lifecycle__ctor_2_fn(Lifecycle* __this);
void Lifecycle__Converter_fn(::g::Fuse::Scripting::Context* context, int* state, int* __retval);
void Lifecycle__GetApplicationStateBackground_fn(int* __retval);
void Lifecycle__GetApplicationStateForeground_fn(int* __retval);
void Lifecycle__GetApplicationStateInteractive_fn(int* __retval);
void Lifecycle__GetCurrentState_fn(int* __retval);
void Lifecycle__New2_fn(Lifecycle** __retval);
void Lifecycle__OnEnteringBackground_fn(int* newState);
void Lifecycle__OnEnteringForeground_fn(int* newState);
void Lifecycle__OnEnteringInteractive_fn(int* newState);
void Lifecycle__OnExitedInteractive_fn(int* newState);
void Lifecycle__OnJsInitialized_fn(uObject* sender, ::g::Uno::EventArgs* args);

struct Lifecycle : ::g::Fuse::Scripting::NativeModule
{
    static uSStrong< ::g::Fuse::Scripting::NativeProperty*> _background_;
    static uSStrong< ::g::Fuse::Scripting::NativeProperty*>& _background() { return _background_; }
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*> _enteringBackground_;
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*>& _enteringBackground() { return _enteringBackground_; }
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*> _enteringForeground_;
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*>& _enteringForeground() { return _enteringForeground_; }
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*> _enteringInteractive_;
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*>& _enteringInteractive() { return _enteringInteractive_; }
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*> _exitedInteractive_;
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*>& _exitedInteractive() { return _exitedInteractive_; }
    static uSStrong< ::g::Fuse::Scripting::NativeProperty*> _foreground_;
    static uSStrong< ::g::Fuse::Scripting::NativeProperty*>& _foreground() { return _foreground_; }
    static uSStrong<Lifecycle*> _instance_;
    static uSStrong<Lifecycle*>& _instance() { return _instance_; }
    static uSStrong< ::g::Fuse::Scripting::NativeProperty*> _interactive_;
    static uSStrong< ::g::Fuse::Scripting::NativeProperty*>& _interactive() { return _interactive_; }
    static uSStrong< ::g::Fuse::Scripting::NativeProperty*> _state_;
    static uSStrong< ::g::Fuse::Scripting::NativeProperty*>& _state() { return _state_; }

    void ctor_2();
    static int Converter(::g::Fuse::Scripting::Context* context, int state);
    static int GetApplicationStateBackground();
    static int GetApplicationStateForeground();
    static int GetApplicationStateInteractive();
    static int GetCurrentState();
    static Lifecycle* New2();
    static void OnEnteringBackground(int newState);
    static void OnEnteringForeground(int newState);
    static void OnEnteringInteractive(int newState);
    static void OnExitedInteractive(int newState);
    static void OnJsInitialized(uObject* sender, ::g::Uno::EventArgs* args);
};
// }

}} // ::g::FuseJS
