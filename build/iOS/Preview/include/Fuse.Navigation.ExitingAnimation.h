// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Navigation.EnterExitAnimation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Navigation{struct ExitingAnimation;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public class ExitingAnimation :893
// {
::g::Fuse::Navigation::NavigationAnimation_type* ExitingAnimation_typeof();
void ExitingAnimation__ctor_6_fn(ExitingAnimation* __this);
void ExitingAnimation__New2_fn(ExitingAnimation** __retval);

struct ExitingAnimation : ::g::Fuse::Navigation::EnterExitAnimation
{
    void ctor_6();
    static ExitingAnimation* New2();
};
// }

}}} // ::g::Fuse::Navigation
