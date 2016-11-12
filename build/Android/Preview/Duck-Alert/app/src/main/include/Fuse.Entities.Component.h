// This file was generated based on /usr/local/share/uno/Packages/Fuse.Entities/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Entities{struct Component;}}}
namespace g{namespace Fuse{namespace Entities{struct Entity;}}}

namespace g{
namespace Fuse{
namespace Entities{

// public abstract class Component :10
// {
::g::Fuse::Node_type* Component_typeof();
void Component__ctor_3_fn(Component* __this);
void Component__get_Entity_fn(Component* __this, ::g::Fuse::Entities::Entity** __retval);

struct Component : ::g::Fuse::Behavior
{
    void ctor_3();
    ::g::Fuse::Entities::Entity* Entity();
};
// }

}}} // ::g::Fuse::Entities
