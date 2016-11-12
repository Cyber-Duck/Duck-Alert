// This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Size2.h>
#include <Uno.UX.Value.h>
namespace g{namespace Uno{namespace UX{struct Size;}}}
namespace g{namespace Uno{namespace UX{struct Size2Value;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Uno{
namespace UX{

// internal sealed class Size2Value :1218
// {
::g::Uno::UX::Value_type* Size2Value_typeof();
void Size2Value__ctor_1_fn(Size2Value* __this, ::g::Uno::UX::Size2* value);
void Size2Value__Add_fn(Size2Value* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval);
void Size2Value__Divide_fn(Size2Value* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval);
void Size2Value__Multiply_fn(Size2Value* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval);
void Size2Value__New1_fn(::g::Uno::UX::Size2* value, Size2Value** __retval);
void Size2Value__Subtract_fn(Size2Value* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval);
void Size2Value__ToDouble_fn(Size2Value* __this, double* __retval);
void Size2Value__ToFloat2_fn(Size2Value* __this, ::g::Uno::Float2* __retval);
void Size2Value__ToObject_fn(Size2Value* __this, uObject** __retval);
void Size2Value__ToSize_fn(Size2Value* __this, ::g::Uno::UX::Size* __retval);
void Size2Value__ToSize2_fn(Size2Value* __this, ::g::Uno::UX::Size2* __retval);
void Size2Value__ToString_fn(Size2Value* __this, uString** __retval);

struct Size2Value : ::g::Uno::UX::Value
{
    ::g::Uno::UX::Size2 _value;

    void ctor_1(::g::Uno::UX::Size2 value);
    static Size2Value* New1(::g::Uno::UX::Size2 value);
};
// }

}}} // ::g::Uno::UX
