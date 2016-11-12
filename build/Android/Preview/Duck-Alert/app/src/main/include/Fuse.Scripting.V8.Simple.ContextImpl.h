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

// internal extern struct ContextImpl :1054
// {
uStructType* ContextImpl_typeof();
void ContextImpl__op_Equality_fn(::V8Simple::Context** x, ::V8Simple::Context** y, bool* __retval);
void ContextImpl__op_Inequality_fn(::V8Simple::Context** x, ::V8Simple::Context** y, bool* __retval);

struct ContextImpl
{
    static bool op_Equality(::V8Simple::Context* x, ::V8Simple::Context* y);
    static bool op_Inequality(::V8Simple::Context* x, ::V8Simple::Context* y);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
