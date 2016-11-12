// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Navigation{

// internal abstract interface IPagePropertyListener :1594
// {
uInterfaceType* IPagePropertyListener_typeof();

struct IPagePropertyListener
{
    void(*fp_PageChanged)(uObject*, ::g::Fuse::Visual*);
    static void PageChanged(const uInterface& __this, ::g::Fuse::Visual* where) { __this.VTable<IPagePropertyListener>()->fp_PageChanged(__this, where); }
};
// }

}}} // ::g::Fuse::Navigation
