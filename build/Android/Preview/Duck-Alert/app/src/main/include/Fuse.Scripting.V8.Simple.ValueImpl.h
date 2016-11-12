// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.V8/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <include/V8Simple.h>
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Simple{

// internal extern struct ValueImpl :1296
// {
uStructType* ValueImpl_typeof();
void ValueImpl__op_Equality_fn(::V8Simple::Value** x, ::V8Simple::Value** y, bool* __retval);
void ValueImpl__op_Inequality_fn(::V8Simple::Value** x, ::V8Simple::Value** y, bool* __retval);

struct ValueImpl
{
    static bool op_Equality(::V8Simple::Value* x, ::V8Simple::Value* y);
    static bool op_Inequality(::V8Simple::Value* x, ::V8Simple::Value* y);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
