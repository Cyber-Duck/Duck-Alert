// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.WindowSizeTrigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileWindowAspect;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public abstract class WhileWindowAspect :3982
// {
::g::Fuse::Triggers::WindowSizeTrigger_type* WhileWindowAspect_typeof();
void WhileWindowAspect__ctor_6_fn(WhileWindowAspect* __this);
void WhileWindowAspect__get_Aspect_fn(WhileWindowAspect* __this, float* __retval);

struct WhileWindowAspect : ::g::Fuse::Triggers::WindowSizeTrigger
{
    void ctor_6();
    float Aspect();
};
// }

}}} // ::g::Fuse::Triggers
