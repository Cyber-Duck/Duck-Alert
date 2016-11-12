// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.40.8/.uno/ux11/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct Circle;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseControlsPrimitives_FuseControlsCircle_Opacity_Property;}

namespace g{

// internal sealed class FuseControlsPrimitives_FuseControlsCircle_Opacity_Property :668
// {
::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsCircle_Opacity_Property_typeof();
void FuseControlsPrimitives_FuseControlsCircle_Opacity_Property__ctor_2_fn(FuseControlsPrimitives_FuseControlsCircle_Opacity_Property* __this, ::g::Fuse::Controls::Circle* obj, ::g::Uno::UX::Selector* name);
void FuseControlsPrimitives_FuseControlsCircle_Opacity_Property__Get_fn(FuseControlsPrimitives_FuseControlsCircle_Opacity_Property* __this, float* __retval);
void FuseControlsPrimitives_FuseControlsCircle_Opacity_Property__New1_fn(::g::Fuse::Controls::Circle* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseControlsCircle_Opacity_Property** __retval);
void FuseControlsPrimitives_FuseControlsCircle_Opacity_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsCircle_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FuseControlsPrimitives_FuseControlsCircle_Opacity_Property__Set_fn(FuseControlsPrimitives_FuseControlsCircle_Opacity_Property* __this, float* v, uObject* origin);
void FuseControlsPrimitives_FuseControlsCircle_Opacity_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsCircle_Opacity_Property* __this, bool* __retval);

struct FuseControlsPrimitives_FuseControlsCircle_Opacity_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::Circle*> _obj;

    void ctor_2(::g::Fuse::Controls::Circle* obj, ::g::Uno::UX::Selector name);
    static FuseControlsPrimitives_FuseControlsCircle_Opacity_Property* New1(::g::Fuse::Controls::Circle* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
