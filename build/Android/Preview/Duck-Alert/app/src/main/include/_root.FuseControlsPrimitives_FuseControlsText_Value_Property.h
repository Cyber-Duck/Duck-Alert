// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.40.8/.uno/ux11/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct Text;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseControlsPrimitives_FuseControlsText_Value_Property;}

namespace g{

// internal sealed class FuseControlsPrimitives_FuseControlsText_Value_Property :605
// {
::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsText_Value_Property_typeof();
void FuseControlsPrimitives_FuseControlsText_Value_Property__ctor_2_fn(FuseControlsPrimitives_FuseControlsText_Value_Property* __this, ::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name);
void FuseControlsPrimitives_FuseControlsText_Value_Property__Get_fn(FuseControlsPrimitives_FuseControlsText_Value_Property* __this, uString** __retval);
void FuseControlsPrimitives_FuseControlsText_Value_Property__New1_fn(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseControlsText_Value_Property** __retval);
void FuseControlsPrimitives_FuseControlsText_Value_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsText_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FuseControlsPrimitives_FuseControlsText_Value_Property__Set_fn(FuseControlsPrimitives_FuseControlsText_Value_Property* __this, uString* v, uObject* origin);
void FuseControlsPrimitives_FuseControlsText_Value_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsText_Value_Property* __this, bool* __retval);

struct FuseControlsPrimitives_FuseControlsText_Value_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::Text*> _obj;

    void ctor_2(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name);
    static FuseControlsPrimitives_FuseControlsText_Value_Property* New1(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
