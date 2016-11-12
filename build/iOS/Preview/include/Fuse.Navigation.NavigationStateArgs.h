// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigationStateArgs;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// internal sealed class NavigationStateArgs :1061
// {
uType* NavigationStateArgs_typeof();
void NavigationStateArgs__ctor_1_fn(NavigationStateArgs* __this);
void NavigationStateArgs__New2_fn(NavigationStateArgs** __retval);
void NavigationStateArgs__get_State_fn(NavigationStateArgs* __this, int* __retval);
void NavigationStateArgs__set_State_fn(NavigationStateArgs* __this, int* value);

struct NavigationStateArgs : ::g::Uno::EventArgs
{
    int _State;

    void ctor_1();
    int State();
    void State(int value);
    static NavigationStateArgs* New2();
};
// }

}}} // ::g::Fuse::Navigation
