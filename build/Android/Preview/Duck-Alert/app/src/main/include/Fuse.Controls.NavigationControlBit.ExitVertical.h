// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Navigation/0.40.8/navigationcontrolbit/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Navigation.ExitingAnimation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Controls{namespace NavigationControlBit{struct ExitVertical;}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace NavigationControlBit{

// public partial sealed class ExitVertical :60
// {
::g::Fuse::Navigation::NavigationAnimation_type* ExitVertical_typeof();
void ExitVertical__ctor_7_fn(ExitVertical* __this);
void ExitVertical__InitializeUX_fn(ExitVertical* __this);
void ExitVertical__New3_fn(ExitVertical** __retval);

struct ExitVertical : ::g::Fuse::Navigation::ExitingAnimation
{
    void ctor_7();
    void InitializeUX();
    static ExitVertical* New3();
};
// }

}}}} // ::g::Fuse::Controls::NavigationControlBit
