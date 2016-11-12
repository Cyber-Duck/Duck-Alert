// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.40.8/.uno/ux11/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct Button;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseControlsPrimitives_FuseControlsButton_Text_Property;}

namespace g{

// internal sealed class FuseControlsPrimitives_FuseControlsButton_Text_Property :632
// {
::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsButton_Text_Property_typeof();
void FuseControlsPrimitives_FuseControlsButton_Text_Property__ctor_2_fn(FuseControlsPrimitives_FuseControlsButton_Text_Property* __this, ::g::Fuse::Controls::Button* obj, ::g::Uno::UX::Selector* name);
void FuseControlsPrimitives_FuseControlsButton_Text_Property__Get_fn(FuseControlsPrimitives_FuseControlsButton_Text_Property* __this, uString** __retval);
void FuseControlsPrimitives_FuseControlsButton_Text_Property__New1_fn(::g::Fuse::Controls::Button* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseControlsButton_Text_Property** __retval);
void FuseControlsPrimitives_FuseControlsButton_Text_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsButton_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FuseControlsPrimitives_FuseControlsButton_Text_Property__Set_fn(FuseControlsPrimitives_FuseControlsButton_Text_Property* __this, uString* v, uObject* origin);
void FuseControlsPrimitives_FuseControlsButton_Text_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsButton_Text_Property* __this, bool* __retval);

struct FuseControlsPrimitives_FuseControlsButton_Text_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::Button*> _obj;

    void ctor_2(::g::Fuse::Controls::Button* obj, ::g::Uno::UX::Selector name);
    static FuseControlsPrimitives_FuseControlsButton_Text_Property* New1(::g::Fuse::Controls::Button* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
