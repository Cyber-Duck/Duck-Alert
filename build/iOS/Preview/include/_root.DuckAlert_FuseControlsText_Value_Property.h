// This file was generated based on /Users/JLMacAir/development/hackathons/Duck-Alert/build/iOS/Preview/cache/ux11/Duck-Alert.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct Text;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct DuckAlert_FuseControlsText_Value_Property;}

namespace g{

// internal sealed class DuckAlert_FuseControlsText_Value_Property :1
// {
::g::Uno::UX::Property1_type* DuckAlert_FuseControlsText_Value_Property_typeof();
void DuckAlert_FuseControlsText_Value_Property__ctor_2_fn(DuckAlert_FuseControlsText_Value_Property* __this, ::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name);
void DuckAlert_FuseControlsText_Value_Property__Get_fn(DuckAlert_FuseControlsText_Value_Property* __this, uString** __retval);
void DuckAlert_FuseControlsText_Value_Property__New1_fn(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name, DuckAlert_FuseControlsText_Value_Property** __retval);
void DuckAlert_FuseControlsText_Value_Property__get_Object_fn(DuckAlert_FuseControlsText_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void DuckAlert_FuseControlsText_Value_Property__Set_fn(DuckAlert_FuseControlsText_Value_Property* __this, uString* v, uObject* origin);
void DuckAlert_FuseControlsText_Value_Property__get_SupportsOriginSetter_fn(DuckAlert_FuseControlsText_Value_Property* __this, bool* __retval);

struct DuckAlert_FuseControlsText_Value_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::Text*> _obj;

    void ctor_2(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name);
    static DuckAlert_FuseControlsText_Value_Property* New1(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
