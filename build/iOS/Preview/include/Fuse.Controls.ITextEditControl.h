// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.40.8/textcontrols/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Controls{

// public abstract interface ITextEditControl :1811
// {
uInterfaceType* ITextEditControl_typeof();

struct ITextEditControl
{
    void(*fp_add_ActionTriggered)(uObject*, uDelegate*);
    void(*fp_remove_ActionTriggered)(uObject*, uDelegate*);
    void(*fp_get_IsPassword)(uObject*, bool*);
    void(*fp_set_IsPassword)(uObject*, bool*);
    static void add_ActionTriggered(const uInterface& __this, uDelegate* value) { __this.VTable<ITextEditControl>()->fp_add_ActionTriggered(__this, value); }
    static void remove_ActionTriggered(const uInterface& __this, uDelegate* value) { __this.VTable<ITextEditControl>()->fp_remove_ActionTriggered(__this, value); }
    static bool IsPassword(const uInterface& __this) { bool __retval; return __this.VTable<ITextEditControl>()->fp_get_IsPassword(__this, &__retval), __retval; }
    static void IsPassword(const uInterface& __this, bool value) { __this.VTable<ITextEditControl>()->fp_set_IsPassword(__this, &value); }
};
// }

}}} // ::g::Fuse::Controls
