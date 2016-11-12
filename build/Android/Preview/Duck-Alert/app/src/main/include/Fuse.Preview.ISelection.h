// This file was generated based on /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Preview{

// public abstract interface ISelection :9436
// {
uInterfaceType* ISelection_typeof();

struct ISelection
{
    void(*fp_IsPropertySelected)(uObject*, uObject*, uString*, bool*);
    void(*fp_IsSelected)(uObject*, uObject*, bool*);
    static bool IsPropertySelected(const uInterface& __this, uObject* obj, uString* property) { bool __retval; return __this.VTable<ISelection>()->fp_IsPropertySelected(__this, obj, property, &__retval), __retval; }
    static bool IsSelected(const uInterface& __this, uObject* obj) { bool __retval; return __this.VTable<ISelection>()->fp_IsSelected(__this, obj, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Preview
