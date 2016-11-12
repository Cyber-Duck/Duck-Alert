// This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float3.h>
#include <Uno.UX.Value.h>
namespace g{namespace Uno{namespace UX{struct Float3Value;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Uno{
namespace UX{

// internal sealed class Float3Value :1249
// {
::g::Uno::UX::Value_type* Float3Value_typeof();
void Float3Value__ctor_1_fn(Float3Value* __this, ::g::Uno::Float3* value);
void Float3Value__Add_fn(Float3Value* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval);
void Float3Value__Divide_fn(Float3Value* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval);
void Float3Value__Multiply_fn(Float3Value* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval);
void Float3Value__New1_fn(::g::Uno::Float3* value, Float3Value** __retval);
void Float3Value__Subtract_fn(Float3Value* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval);
void Float3Value__ToDouble_fn(Float3Value* __this, double* __retval);
void Float3Value__ToFloat_fn(Float3Value* __this, float* __retval);
void Float3Value__ToFloat2_fn(Float3Value* __this, ::g::Uno::Float2* __retval);
void Float3Value__ToFloat3_fn(Float3Value* __this, ::g::Uno::Float3* __retval);
void Float3Value__ToFloat4_fn(Float3Value* __this, ::g::Uno::Float4* __retval);
void Float3Value__ToObject_fn(Float3Value* __this, uObject** __retval);
void Float3Value__ToString_fn(Float3Value* __this, uString** __retval);

struct Float3Value : ::g::Uno::UX::Value
{
    ::g::Uno::Float3 _value;

    void ctor_1(::g::Uno::Float3 value);
    static Float3Value* New1(::g::Uno::Float3 value);
};
// }

}}} // ::g::Uno::UX
