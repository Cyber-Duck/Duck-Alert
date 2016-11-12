// This file was generated based on /usr/local/share/uno/Packages/Fuse.Entities/0.40.8/processing/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{

// public abstract interface IOutput<T> :17
// {
uInterfaceType* IOutput_typeof();

struct IOutput
{
    void(*fp_get_Output)(uObject*, uTRef);
    void(*fp_add_OutputChanged)(uObject*, uDelegate*);
    void(*fp_remove_OutputChanged)(uObject*, uDelegate*);
    template<class T>
    static T Output(const uInterface& __this) { T __retval; return __this.VTable<IOutput>()->fp_get_Output(__this, &__retval), __retval; }
    static void get_Output_ex(const uInterface& __this, uTRef __retval) { __this.VTable<IOutput>()->fp_get_Output(__this, __retval); }
    static void add_OutputChanged(const uInterface& __this, uDelegate* value) { __this.VTable<IOutput>()->fp_add_OutputChanged(__this, value); }
    static void remove_OutputChanged(const uInterface& __this, uDelegate* value) { __this.VTable<IOutput>()->fp_remove_OutputChanged(__this, value); }
};
// }

}} // ::g::Fuse
