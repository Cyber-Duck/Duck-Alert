// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Triggers{struct BusyTaskModule;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class BusyTaskModule :319
// {
::g::Fuse::Scripting::NativeModule_type* BusyTaskModule_typeof();
void BusyTaskModule__ctor_2_fn(BusyTaskModule* __this);
void BusyTaskModule__create_fn(BusyTaskModule* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);
void BusyTaskModule__New2_fn(BusyTaskModule** __retval);

struct BusyTaskModule : ::g::Fuse::Scripting::NativeModule
{
    static uSStrong<BusyTaskModule*> _module_;
    static uSStrong<BusyTaskModule*>& _module() { return _module_; }

    void ctor_2();
    uObject* create(::g::Fuse::Scripting::Context* c, uArray* args);
    static BusyTaskModule* New2();
};
// }

}}} // ::g::Fuse::Triggers
