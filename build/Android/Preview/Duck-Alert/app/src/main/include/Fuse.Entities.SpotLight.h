// This file was generated based on /usr/local/share/uno/Packages/Fuse.Entities/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Entities.Light.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Entities{struct SpotLight;}}}

namespace g{
namespace Fuse{
namespace Entities{

// public sealed class SpotLight :762
// {
::g::Fuse::Entities::Light_type* SpotLight_typeof();
void SpotLight__ctor_5_fn(SpotLight* __this);
void SpotLight__Accept_fn(SpotLight* __this, uObject* visitor);
void SpotLight__get_Extent_fn(SpotLight* __this, float* __retval);
void SpotLight__set_Extent_fn(SpotLight* __this, float* value);
void SpotLight__New2_fn(SpotLight** __retval);

struct SpotLight : ::g::Fuse::Entities::Light
{
    float _Extent;

    void ctor_5();
    float Extent();
    void Extent(float value);
    static SpotLight* New2();
};
// }

}}} // ::g::Fuse::Entities
