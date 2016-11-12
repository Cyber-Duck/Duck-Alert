// This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Size.h>
#include <Uno.UX.Value.h>
namespace g{namespace Uno{namespace UX{struct SizeValue;}}}

namespace g{
namespace Uno{
namespace UX{

// internal sealed class SizeValue :1204
// {
::g::Uno::UX::Value_type* SizeValue_typeof();
void SizeValue__ctor_1_fn(SizeValue* __this, ::g::Uno::UX::Size* value);
void SizeValue__Add_fn(SizeValue* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval);
void SizeValue__Divide_fn(SizeValue* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval);
void SizeValue__Multiply_fn(SizeValue* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval);
void SizeValue__New1_fn(::g::Uno::UX::Size* value, SizeValue** __retval);
void SizeValue__Subtract_fn(SizeValue* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval);
void SizeValue__ToDouble_fn(SizeValue* __this, double* __retval);
void SizeValue__ToObject_fn(SizeValue* __this, uObject** __retval);
void SizeValue__ToSize_fn(SizeValue* __this, ::g::Uno::UX::Size* __retval);
void SizeValue__ToString_fn(SizeValue* __this, uString** __retval);

struct SizeValue : ::g::Uno::UX::Value
{
    ::g::Uno::UX::Size _value;

    void ctor_1(::g::Uno::UX::Size value);
    static SizeValue* New1(::g::Uno::UX::Size value);
};
// }

}}} // ::g::Uno::UX
