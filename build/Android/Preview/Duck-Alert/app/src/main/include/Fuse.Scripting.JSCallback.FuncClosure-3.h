// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct JSCallback__FuncClosure2;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class JSCallback.FuncClosure<TArg, TArg1, TResult> :920
// {
uType* JSCallback__FuncClosure2_typeof();
void JSCallback__FuncClosure2__ctor__fn(JSCallback__FuncClosure2* __this, uDelegate* method);
void JSCallback__FuncClosure2__New1_fn(uType* __type, uDelegate* method, JSCallback__FuncClosure2** __retval);
void JSCallback__FuncClosure2__Run_fn(JSCallback__FuncClosure2* __this, uArray* args, uObject** __retval);

struct JSCallback__FuncClosure2 : uObject
{
    uStrong<uDelegate*> _method;

    void ctor_(uDelegate* method);
    uObject* Run(uArray* args);
    static JSCallback__FuncClosure2* New1(uType* __type, uDelegate* method);
};
// }

}}} // ::g::Fuse::Scripting
