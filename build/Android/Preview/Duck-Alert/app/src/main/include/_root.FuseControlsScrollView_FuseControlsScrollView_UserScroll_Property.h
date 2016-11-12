// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/0.40.8/.uno/ux11/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct ScrollView;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property;}

namespace g{

// internal sealed class FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property :132
// {
::g::Uno::UX::Property1_type* FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property_typeof();
void FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property__ctor_2_fn(FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property* __this, ::g::Fuse::Controls::ScrollView* obj, ::g::Uno::UX::Selector* name);
void FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property__Get_fn(FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property* __this, bool* __retval);
void FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property__New1_fn(::g::Fuse::Controls::ScrollView* obj, ::g::Uno::UX::Selector* name, FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property** __retval);
void FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property__get_Object_fn(FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property__Set_fn(FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property* __this, bool* v, uObject* origin);
void FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property__get_SupportsOriginSetter_fn(FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property* __this, bool* __retval);

struct FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::ScrollView*> _obj;

    void ctor_2(::g::Fuse::Controls::ScrollView* obj, ::g::Uno::UX::Selector name);
    static FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property* New1(::g::Fuse::Controls::ScrollView* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
