// This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyObject.h>
namespace g{namespace Uno{namespace UX{struct BinaryOperator;}}}
namespace g{namespace Uno{namespace UX{struct Property;}}}
namespace g{namespace Uno{namespace UX{struct Value;}}}

namespace g{
namespace Uno{
namespace UX{

// public abstract class BinaryOperator :340
// {
struct BinaryOperator_type : uType
{
    void(*fp_Compute)(::g::Uno::UX::BinaryOperator*, ::g::Uno::UX::Value*, ::g::Uno::UX::Value*, ::g::Uno::UX::Value**);
};

BinaryOperator_type* BinaryOperator_typeof();
void BinaryOperator__ctor_1_fn(BinaryOperator* __this);
void BinaryOperator__get_Left_fn(BinaryOperator* __this, ::g::Uno::UX::Value** __retval);
void BinaryOperator__set_Left_fn(BinaryOperator* __this, ::g::Uno::UX::Value* value);
void BinaryOperator__get_Right_fn(BinaryOperator* __this, ::g::Uno::UX::Value** __retval);
void BinaryOperator__set_Right_fn(BinaryOperator* __this, ::g::Uno::UX::Value* value);
void BinaryOperator__SetValue_fn(BinaryOperator* __this, ::g::Uno::UX::Value* v);
void BinaryOperator__get_Target_fn(BinaryOperator* __this, ::g::Uno::UX::Property** __retval);
void BinaryOperator__set_Target_fn(BinaryOperator* __this, ::g::Uno::UX::Property* value);

struct BinaryOperator : ::g::Uno::UX::PropertyObject
{
    bool _hasLeft;
    bool _hasRight;
    uStrong< ::g::Uno::UX::Value*> _left;
    uStrong< ::g::Uno::UX::Value*> _right;
    uStrong< ::g::Uno::UX::Property*> _Target;

    void ctor_1();
    ::g::Uno::UX::Value* Compute(::g::Uno::UX::Value* a, ::g::Uno::UX::Value* b) { ::g::Uno::UX::Value* __retval; return (((BinaryOperator_type*)__type)->fp_Compute)(this, a, b, &__retval), __retval; }
    ::g::Uno::UX::Value* Left();
    void Left(::g::Uno::UX::Value* value);
    ::g::Uno::UX::Value* Right();
    void Right(::g::Uno::UX::Value* value);
    void SetValue(::g::Uno::UX::Value* v);
    ::g::Uno::UX::Property* Target();
    void Target(::g::Uno::UX::Property* value);
};
// }

}}} // ::g::Uno::UX
