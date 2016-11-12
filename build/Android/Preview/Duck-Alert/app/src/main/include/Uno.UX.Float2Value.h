// This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.UX.Value.h>
namespace g{namespace Uno{namespace UX{struct Float2Value;}}}

namespace g{
namespace Uno{
namespace UX{

// internal sealed class Float2Value :1234
// {
::g::Uno::UX::Value_type* Float2Value_typeof();
void Float2Value__ctor_1_fn(Float2Value* __this, ::g::Uno::Float2* value);
void Float2Value__Add_fn(Float2Value* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval);
void Float2Value__Divide_fn(Float2Value* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval);
void Float2Value__Multiply_fn(Float2Value* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval);
void Float2Value__New1_fn(::g::Uno::Float2* value, Float2Value** __retval);
void Float2Value__Subtract_fn(Float2Value* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval);
void Float2Value__ToDouble_fn(Float2Value* __this, double* __retval);
void Float2Value__ToFloat_fn(Float2Value* __this, float* __retval);
void Float2Value__ToFloat2_fn(Float2Value* __this, ::g::Uno::Float2* __retval);
void Float2Value__ToObject_fn(Float2Value* __this, uObject** __retval);
void Float2Value__ToString_fn(Float2Value* __this, uString** __retval);

struct Float2Value : ::g::Uno::UX::Value
{
    ::g::Uno::Float2 _value;

    void ctor_1(::g::Uno::Float2 value);
    static Float2Value* New1(::g::Uno::Float2 value);
};
// }

}}} // ::g::Uno::UX
