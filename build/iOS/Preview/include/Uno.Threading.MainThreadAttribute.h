// This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/threading/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Attribute.h>
namespace g{namespace Uno{namespace Threading{struct MainThreadAttribute;}}}

namespace g{
namespace Uno{
namespace Threading{

// public sealed class MainThreadAttribute :8
// {
uType* MainThreadAttribute_typeof();
void MainThreadAttribute__ctor_1_fn(MainThreadAttribute* __this);
void MainThreadAttribute__New1_fn(MainThreadAttribute** __retval);

struct MainThreadAttribute : ::g::Uno::Attribute
{
    void ctor_1();
    static MainThreadAttribute* New1();
};
// }

}}} // ::g::Uno::Threading
