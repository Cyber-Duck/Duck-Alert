// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.40.8/.uno/ux11/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Effects{struct DropShadow;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property;}

namespace g{

// internal sealed class FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property :704
// {
::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_typeof();
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__ctor_2_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, ::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector* name);
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Get_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, float* __retval);
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__New1_fn(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property** __retval);
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__get_Object_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Set_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, float* v, uObject* origin);
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, bool* __retval);

struct FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Effects::DropShadow*> _obj;

    void ctor_2(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector name);
    static FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* New1(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
