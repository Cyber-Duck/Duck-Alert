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
namespace g{namespace Fuse{namespace Navigation{struct EnteringAnimation;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public class EnteringAnimation :926
// {
::g::Fuse::Navigation::NavigationAnimation_type* EnteringAnimation_typeof();
void EnteringAnimation__ctor_6_fn(EnteringAnimation* __this);
void EnteringAnimation__New2_fn(EnteringAnimation** __retval);

struct EnteringAnimation : ::g::Fuse::Navigation::EnterExitAnimation
{
    void ctor_6();
    static EnteringAnimation* New2();
};
// }

}}} // ::g::Fuse::Navigation
