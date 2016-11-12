// This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Value.h>
namespace g{namespace Uno{namespace UX{struct NumberValue;}}}

namespace g{
namespace Uno{
namespace UX{

// internal sealed class NumberValue :1181
// {
::g::Uno::UX::Value_type* NumberValue_typeof();
void NumberValue__ctor_1_fn(NumberValue* __this, double* value);
void NumberValue__Add_fn(NumberValue* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval);
void NumberValue__Divide_fn(NumberValue* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval);
void NumberValue__Multiply_fn(NumberValue* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval);
void NumberValue__New1_fn(double* value, NumberValue** __retval);
void NumberValue__Subtract_fn(NumberValue* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval);
void NumberValue__ToDouble_fn(NumberValue* __this, double* __retval);
void NumberValue__ToObject_fn(NumberValue* __this, uObject** __retval);
void NumberValue__ToString_fn(NumberValue* __this, uString** __retval);

struct NumberValue : ::g::Uno::UX::Value
{
    double _value;

    void ctor_1(double value);
    static NumberValue* New1(double value);
};
// }

}}} // ::g::Uno::UX
