// This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/attributes/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Attribute.h>
namespace g{namespace Uno{namespace UX{struct UXGlobalResourceAttribute;}}}

namespace g{
namespace Uno{
namespace UX{

// public sealed class UXGlobalResourceAttribute :183
// {
uType* UXGlobalResourceAttribute_typeof();
void UXGlobalResourceAttribute__ctor_1_fn(UXGlobalResourceAttribute* __this);
void UXGlobalResourceAttribute__ctor_2_fn(UXGlobalResourceAttribute* __this, uString* alias);
void UXGlobalResourceAttribute__New1_fn(UXGlobalResourceAttribute** __retval);
void UXGlobalResourceAttribute__New2_fn(uString* alias, UXGlobalResourceAttribute** __retval);

struct UXGlobalResourceAttribute : ::g::Uno::Attribute
{
    uStrong<uString*> Alias;

    void ctor_1();
    void ctor_2(uString* alias);
    static UXGlobalResourceAttribute* New1();
    static UXGlobalResourceAttribute* New2(uString* alias);
};
// }

}}} // ::g::Uno::UX
