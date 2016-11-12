// This file was generated based on /usr/local/share/uno/Packages/Fuse.Entities/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Entities.Light.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Entities{struct EnvironmentLight;}}}

namespace g{
namespace Fuse{
namespace Entities{

// public sealed class EnvironmentLight :752
// {
::g::Fuse::Entities::Light_type* EnvironmentLight_typeof();
void EnvironmentLight__ctor_5_fn(EnvironmentLight* __this);
void EnvironmentLight__Accept_fn(EnvironmentLight* __this, uObject* visitor);
void EnvironmentLight__New2_fn(EnvironmentLight** __retval);

struct EnvironmentLight : ::g::Fuse::Entities::Light
{
    void ctor_5();
    static EnvironmentLight* New2();
};
// }

}}} // ::g::Fuse::Entities
