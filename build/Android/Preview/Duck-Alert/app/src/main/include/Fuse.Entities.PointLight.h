// This file was generated based on /usr/local/share/uno/Packages/Fuse.Entities/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Entities.Light.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Entities{struct PointLight;}}}

namespace g{
namespace Fuse{
namespace Entities{

// public sealed class PointLight :780
// {
::g::Fuse::Entities::Light_type* PointLight_typeof();
void PointLight__ctor_5_fn(PointLight* __this);
void PointLight__Accept_fn(PointLight* __this, uObject* visitor);
void PointLight__New2_fn(PointLight** __retval);

struct PointLight : ::g::Fuse::Entities::Light
{
    void ctor_5();
    static PointLight* New2();
};
// }

}}} // ::g::Fuse::Entities
