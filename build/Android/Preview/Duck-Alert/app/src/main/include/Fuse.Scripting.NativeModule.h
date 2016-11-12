// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.Module.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct ModuleResult;}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeFunction;}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeMember;}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public class NativeModule :365
// {
struct NativeModule_type : ::g::Fuse::Scripting::Module_type
{
    ::g::Fuse::Scripting::IModuleProvider interface1;
};

NativeModule_type* NativeModule_typeof();
void NativeModule__ctor_1_fn(NativeModule* __this);
void NativeModule__AddMember_fn(NativeModule* __this, ::g::Fuse::Scripting::NativeMember* member);
void NativeModule__Evaluate_fn(NativeModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result);
void NativeModule__add_Evaluated_fn(NativeModule* __this, uDelegate* value);
void NativeModule__remove_Evaluated_fn(NativeModule* __this, uDelegate* value);
void NativeModule__FuseScriptingIModuleProviderGetModule_fn(NativeModule* __this, ::g::Fuse::Scripting::Module** __retval);
void NativeModule__InternalReset_fn(NativeModule* __this);
void NativeModule__New1_fn(NativeModule** __retval);
void NativeModule__add_Reset_fn(NativeModule* __this, uDelegate* value);
void NativeModule__remove_Reset_fn(NativeModule* __this, uDelegate* value);
void NativeModule__SetModuleFunction_fn(NativeModule* __this, ::g::Fuse::Scripting::NativeFunction* func);

struct NativeModule : ::g::Fuse::Scripting::Module
{
    uStrong<uDelegate*> _evaluated;
    uStrong< ::g::Fuse::Scripting::NativeFunction*> _func;
    bool _isEvaluated;
    uStrong< ::g::Uno::Collections::List*> _members;
    uStrong<uDelegate*> _reset;

    void ctor_1();
    void AddMember(::g::Fuse::Scripting::NativeMember* member);
    void add_Evaluated(uDelegate* value);
    void remove_Evaluated(uDelegate* value);
    void InternalReset();
    void add_Reset(uDelegate* value);
    void remove_Reset(uDelegate* value);
    void SetModuleFunction(::g::Fuse::Scripting::NativeFunction* func);
    static NativeModule* New1();
};
// }

}}} // ::g::Fuse::Scripting
