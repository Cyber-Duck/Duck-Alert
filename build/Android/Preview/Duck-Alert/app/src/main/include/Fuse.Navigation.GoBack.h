// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Navigation.BackForwardNavigationTriggerAction.h>
namespace g{namespace Fuse{namespace Navigation{struct GoBack;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class GoBack :3788
// {
::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type* GoBack_typeof();
void GoBack__ctor_3_fn(GoBack* __this);
void GoBack__New2_fn(GoBack** __retval);
void GoBack__Perform1_fn(GoBack* __this, uObject* ctx, ::g::Fuse::Node* node);

struct GoBack : ::g::Fuse::Navigation::BackForwardNavigationTriggerAction
{
    void ctor_3();
    static GoBack* New2();
};
// }

}}} // ::g::Fuse::Navigation
