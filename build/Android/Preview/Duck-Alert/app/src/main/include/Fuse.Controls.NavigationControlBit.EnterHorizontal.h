// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Navigation/0.40.8/navigationcontrolbit/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Navigation.EnteringAnimation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Controls{namespace NavigationControlBit{struct EnterHorizontal;}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace NavigationControlBit{

// public partial sealed class EnterHorizontal :11
// {
::g::Fuse::Navigation::NavigationAnimation_type* EnterHorizontal_typeof();
void EnterHorizontal__ctor_7_fn(EnterHorizontal* __this);
void EnterHorizontal__InitializeUX_fn(EnterHorizontal* __this);
void EnterHorizontal__New3_fn(EnterHorizontal** __retval);

struct EnterHorizontal : ::g::Fuse::Navigation::EnteringAnimation
{
    void ctor_7();
    void InitializeUX();
    static EnterHorizontal* New3();
};
// }

}}}} // ::g::Fuse::Controls::NavigationControlBit
