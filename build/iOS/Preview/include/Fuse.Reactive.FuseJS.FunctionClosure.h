// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/fusejs/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct FunctionClosure;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// internal sealed class FunctionClosure :710
// {
uType* FunctionClosure_typeof();
void FunctionClosure__ctor__fn(FunctionClosure* __this, ::g::Fuse::Scripting::Context* context, uDelegate* callback);
void FunctionClosure__get_Callback_fn(FunctionClosure* __this, uDelegate** __retval);
void FunctionClosure__function_fn(FunctionClosure* __this, uArray* args, uObject** __retval);
void FunctionClosure__New1_fn(::g::Fuse::Scripting::Context* context, uDelegate* callback, FunctionClosure** __retval);

struct FunctionClosure : uObject
{
    uStrong<uDelegate*> _callback;
    uStrong< ::g::Fuse::Scripting::Context*> _context;

    void ctor_(::g::Fuse::Scripting::Context* context, uDelegate* callback);
    uDelegate* Callback();
    uObject* function(uArray* args);
    static FunctionClosure* New1(::g::Fuse::Scripting::Context* context, uDelegate* callback);
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
