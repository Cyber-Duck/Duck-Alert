// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.WhileTrigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileFailed;}}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileFailed :3047
// {
::g::Fuse::Triggers::Trigger_type* WhileFailed_typeof();
void WhileFailed__ctor_5_fn(WhileFailed* __this);
void WhileFailed__IsFailed_fn(::g::Fuse::Visual* n, bool* __retval);
void WhileFailed__New2_fn(WhileFailed** __retval);
void WhileFailed__OnRooted_fn(WhileFailed* __this);
void WhileFailed__SetState_fn(::g::Fuse::Visual* n, bool* failed, uString* message);

struct WhileFailed : ::g::Fuse::Triggers::WhileTrigger
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _whileFailedProp_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _whileFailedProp() { return WhileFailed_typeof()->Init(), _whileFailedProp_; }

    void ctor_5();
    static bool IsFailed(::g::Fuse::Visual* n);
    static WhileFailed* New2();
    static void SetState(::g::Fuse::Visual* n, bool failed, uString* message);
};
// }

}}} // ::g::Fuse::Triggers
