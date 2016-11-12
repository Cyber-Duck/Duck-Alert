// This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/platform2/implementation/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Attribute.h>
namespace g{namespace Uno{namespace Platform2{namespace Implementation{struct InvokedFromNativeCodeAttribute;}}}}

namespace g{
namespace Uno{
namespace Platform2{
namespace Implementation{

// public sealed class InvokedFromNativeCodeAttribute :9
// {
uType* InvokedFromNativeCodeAttribute_typeof();
void InvokedFromNativeCodeAttribute__ctor_1_fn(InvokedFromNativeCodeAttribute* __this);
void InvokedFromNativeCodeAttribute__New1_fn(InvokedFromNativeCodeAttribute** __retval);

struct InvokedFromNativeCodeAttribute : ::g::Uno::Attribute
{
    void ctor_1();
    static InvokedFromNativeCodeAttribute* New1();
};
// }

}}}} // ::g::Uno::Platform2::Implementation
