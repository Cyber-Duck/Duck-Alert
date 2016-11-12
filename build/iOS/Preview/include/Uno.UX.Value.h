// This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace UX{struct Size;}}}
namespace g{namespace Uno{namespace UX{struct Size2;}}}
namespace g{namespace Uno{namespace UX{struct Value;}}}
namespace g{namespace Uno{struct Exception;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Uno{
namespace UX{

// public abstract class Value :1029
// {
struct Value_type : uType
{
    void(*fp_Add)(::g::Uno::UX::Value*, ::g::Uno::UX::Value*, ::g::Uno::UX::Value**);
    void(*fp_Divide)(::g::Uno::UX::Value*, ::g::Uno::UX::Value*, ::g::Uno::UX::Value**);
    void(*fp_Multiply)(::g::Uno::UX::Value*, ::g::Uno::UX::Value*, ::g::Uno::UX::Value**);
    void(*fp_Subtract)(::g::Uno::UX::Value*, ::g::Uno::UX::Value*, ::g::Uno::UX::Value**);
    void(*fp_ToDouble)(::g::Uno::UX::Value*, double*);
    void(*fp_ToFloat)(::g::Uno::UX::Value*, float*);
    void(*fp_ToFloat2)(::g::Uno::UX::Value*, ::g::Uno::Float2*);
    void(*fp_ToFloat3)(::g::Uno::UX::Value*, ::g::Uno::Float3*);
    void(*fp_ToFloat4)(::g::Uno::UX::Value*, ::g::Uno::Float4*);
    void(*fp_ToObject)(::g::Uno::UX::Value*, uObject**);
    void(*fp_ToSize)(::g::Uno::UX::Value*, ::g::Uno::UX::Size*);
    void(*fp_ToSize2)(::g::Uno::UX::Value*, ::g::Uno::UX::Size2*);
};

Value_type* Value_typeof();
void Value__ctor__fn(Value* __this);
void Value__Add_fn(Value* __this, Value* v, Value** __retval);
void Value__Cast_fn(uType* targetType, uObject* value, uObject** __retval);
void Value__Divide_fn(Value* __this, Value* v, Value** __retval);
void Value__Multiply_fn(Value* __this, Value* v, Value** __retval);
void Value__NotSupported_fn(Value* __this, uString* op, ::g::Uno::Exception** __retval);
void Value__op_Implicit_fn(double* f, Value** __retval);
void Value__op_Implicit2_fn(::g::Uno::Float2* f, Value** __retval);
void Value__op_Implicit3_fn(::g::Uno::Float3* f, Value** __retval);
void Value__op_Implicit4_fn(::g::Uno::Float4* f, Value** __retval);
void Value__op_Implicit6_fn(uString* f, Value** __retval);
void Value__op_Implicit8_fn(::g::Uno::UX::Size* f, Value** __retval);
void Value__op_Implicit9_fn(::g::Uno::UX::Size2* f, Value** __retval);
void Value__Subtract_fn(Value* __this, Value* v, Value** __retval);
void Value__ToAbstract_fn(uObject* value, uObject** __retval);
void Value__ToFloat_fn(Value* __this, float* __retval);
void Value__ToFloat2_fn(Value* __this, ::g::Uno::Float2* __retval);
void Value__ToFloat3_fn(Value* __this, ::g::Uno::Float3* __retval);
void Value__ToFloat4_fn(Value* __this, ::g::Uno::Float4* __retval);
void Value__ToInt_fn(Value* __this, int* __retval);
void Value__ToSize_fn(Value* __this, ::g::Uno::UX::Size* __retval);
void Value__ToSize2_fn(Value* __this, ::g::Uno::UX::Size2* __retval);
void Value__ToSpecific_fn(uType* t, uObject* obj, uObject** __retval);

struct Value : uObject
{
    void ctor_();
    Value* Add(Value* v) { Value* __retval; return (((Value_type*)__type)->fp_Add)(this, v, &__retval), __retval; }
    Value* Divide(Value* v) { Value* __retval; return (((Value_type*)__type)->fp_Divide)(this, v, &__retval), __retval; }
    Value* Multiply(Value* v) { Value* __retval; return (((Value_type*)__type)->fp_Multiply)(this, v, &__retval), __retval; }
    ::g::Uno::Exception* NotSupported(uString* op);
    Value* Subtract(Value* v) { Value* __retval; return (((Value_type*)__type)->fp_Subtract)(this, v, &__retval), __retval; }
    double ToDouble() { double __retval; return (((Value_type*)__type)->fp_ToDouble)(this, &__retval), __retval; }
    float ToFloat() { float __retval; return (((Value_type*)__type)->fp_ToFloat)(this, &__retval), __retval; }
    ::g::Uno::Float2 ToFloat2();
    ::g::Uno::Float3 ToFloat3();
    ::g::Uno::Float4 ToFloat4();
    int ToInt();
    uObject* ToObject() { uObject* __retval; return (((Value_type*)__type)->fp_ToObject)(this, &__retval), __retval; }
    ::g::Uno::UX::Size ToSize();
    ::g::Uno::UX::Size2 ToSize2();
    static Value* Add(Value* __this, Value* v) { Value* __retval; return Value__Add_fn(__this, v, &__retval), __retval; }
    static uObject* Cast(uType* targetType, uObject* value);
    static Value* Divide(Value* __this, Value* v) { Value* __retval; return Value__Divide_fn(__this, v, &__retval), __retval; }
    static Value* Multiply(Value* __this, Value* v) { Value* __retval; return Value__Multiply_fn(__this, v, &__retval), __retval; }
    static Value* op_Implicit(double f);
    static Value* op_Implicit2(::g::Uno::Float2 f);
    static Value* op_Implicit3(::g::Uno::Float3 f);
    static Value* op_Implicit4(::g::Uno::Float4 f);
    static Value* op_Implicit6(uString* f);
    static Value* op_Implicit8(::g::Uno::UX::Size f);
    static Value* op_Implicit9(::g::Uno::UX::Size2 f);
    static Value* Subtract(Value* __this, Value* v) { Value* __retval; return Value__Subtract_fn(__this, v, &__retval), __retval; }
    static uObject* ToAbstract(uObject* value);
    static float ToFloat(Value* __this) { float __retval; return Value__ToFloat_fn(__this, &__retval), __retval; }
    static ::g::Uno::Float2 ToFloat2(Value* __this);
    static ::g::Uno::Float3 ToFloat3(Value* __this);
    static ::g::Uno::Float4 ToFloat4(Value* __this);
    static ::g::Uno::UX::Size ToSize(Value* __this);
    static ::g::Uno::UX::Size2 ToSize2(Value* __this);
    static uObject* ToSpecific(uType* t, uObject* obj);
};

}}} // ::g::Uno::UX

#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Size2.h>

namespace g{
namespace Uno{
namespace UX{

inline ::g::Uno::Float2 Value::ToFloat2() { ::g::Uno::Float2 __retval; return (((Value_type*)__type)->fp_ToFloat2)(this, &__retval), __retval; }
inline ::g::Uno::Float3 Value::ToFloat3() { ::g::Uno::Float3 __retval; return (((Value_type*)__type)->fp_ToFloat3)(this, &__retval), __retval; }
inline ::g::Uno::Float4 Value::ToFloat4() { ::g::Uno::Float4 __retval; return (((Value_type*)__type)->fp_ToFloat4)(this, &__retval), __retval; }
inline ::g::Uno::UX::Size Value::ToSize() { ::g::Uno::UX::Size __retval; return (((Value_type*)__type)->fp_ToSize)(this, &__retval), __retval; }
inline ::g::Uno::UX::Size2 Value::ToSize2() { ::g::Uno::UX::Size2 __retval; return (((Value_type*)__type)->fp_ToSize2)(this, &__retval), __retval; }
inline ::g::Uno::Float2 Value::ToFloat2(Value* __this) { ::g::Uno::Float2 __retval; return Value__ToFloat2_fn(__this, &__retval), __retval; }
inline ::g::Uno::Float3 Value::ToFloat3(Value* __this) { ::g::Uno::Float3 __retval; return Value__ToFloat3_fn(__this, &__retval), __retval; }
inline ::g::Uno::Float4 Value::ToFloat4(Value* __this) { ::g::Uno::Float4 __retval; return Value__ToFloat4_fn(__this, &__retval), __retval; }
inline ::g::Uno::UX::Size Value::ToSize(Value* __this) { ::g::Uno::UX::Size __retval; return Value__ToSize_fn(__this, &__retval), __retval; }
inline ::g::Uno::UX::Size2 Value::ToSize2(Value* __this) { ::g::Uno::UX::Size2 __retval; return Value__ToSize2_fn(__this, &__retval), __retval; }
// }

}}} // ::g::Uno::UX
