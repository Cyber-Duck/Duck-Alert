// This file was generated based on /usr/local/share/uno/Packages/Uno.Threading/0.40.2/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{
namespace Threading{

// public abstract interface IDispatcher :200
// {
uInterfaceType* IDispatcher_typeof();

struct IDispatcher
{
    void(*fp_Invoke)(uObject*, uDelegate*);
    static void Invoke(const uInterface& __this, uDelegate* action) { __this.VTable<IDispatcher>()->fp_Invoke(__this, action); }
};
// }

}}} // ::g::Uno::Threading
