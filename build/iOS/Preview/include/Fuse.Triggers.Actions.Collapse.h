// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/0.40.8/actions/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct Collapse;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class Collapse :1003
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Collapse_typeof();
void Collapse__ctor_2_fn(Collapse* __this);
void Collapse__New2_fn(Collapse** __retval);
void Collapse__Perform_fn(Collapse* __this, ::g::Fuse::Node* target);

struct Collapse : ::g::Fuse::Triggers::Actions::TriggerAction
{
    void ctor_2();
    static Collapse* New2();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
