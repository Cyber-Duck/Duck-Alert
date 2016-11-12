// This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Value.h>
namespace g{namespace Uno{namespace UX{struct Float4Value;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Uno{
namespace UX{

// internal sealed class Float4Value :1266
// {
::g::Uno::UX::Value_type* Float4Value_typeof();
void Float4Value__ctor_1_fn(Float4Value* __this, ::g::Uno::Float4* value);
void Float4Value__Add_fn(Float4Value* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval);
void Float4Value__Divide_fn(Float4Value* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval);
void Float4Value__Multiply_fn(Float4Value* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval);
void Float4Value__New1_fn(::g::Uno::Float4* value, Float4Value** __retval);
void Float4Value__Subtract_fn(Float4Value* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval);
void Float4Value__ToDouble_fn(Float4Value* __this, double* __retval);
void Float4Value__ToFloat_fn(Float4Value* __this, float* __retval);
void Float4Value__ToFloat2_fn(Float4Value* __this, ::g::Uno::Float2* __retval);
void Float4Value__ToFloat3_fn(Float4Value* __this, ::g::Uno::Float3* __retval);
void Float4Value__ToFloat4_fn(Float4Value* __this, ::g::Uno::Float4* __retval);
void Float4Value__ToObject_fn(Float4Value* __this, uObject** __retval);
void Float4Value__ToString_fn(Float4Value* __this, uString** __retval);

struct Float4Value : ::g::Uno::UX::Value
{
    ::g::Uno::Float4 _value;

    void ctor_1(::g::Uno::Float4 value);
    static Float4Value* New1(::g::Uno::Float4 value);
};
// }

}}} // ::g::Uno::UX
