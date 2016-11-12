// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Navigation.BackForwardNavigationTriggerAction.h>
namespace g{namespace Fuse{namespace Navigation{struct GoForward;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class GoForward :3819
// {
::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type* GoForward_typeof();
void GoForward__ctor_3_fn(GoForward* __this);
void GoForward__New2_fn(GoForward** __retval);
void GoForward__Perform1_fn(GoForward* __this, uObject* ctx, ::g::Fuse::Node* node);

struct GoForward : ::g::Fuse::Navigation::BackForwardNavigationTriggerAction
{
    void ctor_3();
    static GoForward* New2();
};
// }

}}} // ::g::Fuse::Navigation
