// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public abstract interface IRouterOutlet :703
// {
uInterfaceType* IRouterOutlet_typeof();

struct IRouterOutlet
{
    void(*fp_GetCurrent)(uObject*, uString**, uString**, ::g::Fuse::Visual**);
    void(*fp_Goto)(uObject*, uString*, uString*, int*, int*, int*);
    void(*fp_get_Type)(uObject*, int*);
    static void GetCurrent(const uInterface& __this, uString** path, uString** parameter, ::g::Fuse::Visual** active) { __this.VTable<IRouterOutlet>()->fp_GetCurrent(__this, path, parameter, active); }
    static int Goto(const uInterface& __this, uString* path, uString* parameter, int gotoMode, int operation) { int __retval; return __this.VTable<IRouterOutlet>()->fp_Goto(__this, path, parameter, &gotoMode, &operation, &__retval), __retval; }
    static int Type(const uInterface& __this) { int __retval; return __this.VTable<IRouterOutlet>()->fp_get_Type(__this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Navigation
