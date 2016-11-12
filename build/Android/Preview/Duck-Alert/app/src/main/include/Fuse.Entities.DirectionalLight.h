// This file was generated based on /usr/local/share/uno/Packages/Fuse.Entities/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Entities.Light.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Geometry.Box.h>
namespace g{namespace Fuse{namespace Entities{struct DirectionalLight;}}}

namespace g{
namespace Fuse{
namespace Entities{

// public sealed class DirectionalLight :794
// {
::g::Fuse::Entities::Light_type* DirectionalLight_typeof();
void DirectionalLight__ctor_5_fn(DirectionalLight* __this);
void DirectionalLight__Accept_fn(DirectionalLight* __this, uObject* visitor);
void DirectionalLight__get_Box_fn(DirectionalLight* __this, ::g::Uno::Geometry::Box* __retval);
void DirectionalLight__set_Box_fn(DirectionalLight* __this, ::g::Uno::Geometry::Box* value);
void DirectionalLight__New2_fn(DirectionalLight** __retval);

struct DirectionalLight : ::g::Fuse::Entities::Light
{
    ::g::Uno::Geometry::Box _Box;

    void ctor_5();
    ::g::Uno::Geometry::Box Box();
    void Box(::g::Uno::Geometry::Box value);
    static DirectionalLight* New2();
};
// }

}}} // ::g::Fuse::Entities
