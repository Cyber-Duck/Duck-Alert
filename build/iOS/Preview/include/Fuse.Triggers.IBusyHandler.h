// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Triggers{

// public abstract interface IBusyHandler :79
// {
uInterfaceType* IBusyHandler_typeof();

struct IBusyHandler
{
    void(*fp_get_IsBusyHandled)(uObject*, bool*);
    static bool IsBusyHandled(const uInterface& __this) { bool __retval; return __this.VTable<IBusyHandler>()->fp_get_IsBusyHandled(__this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Triggers
