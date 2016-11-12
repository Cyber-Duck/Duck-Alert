// This file was generated based on /usr/local/share/uno/Packages/Fuse.Entities/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyObject.h>
namespace g{namespace Fuse{namespace Entities{struct Material;}}}
namespace g{namespace Fuse{namespace Entities{struct Mesh;}}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Entities{

// public abstract class Material :819
// {
uType* Material_typeof();
void Material__ctor_1_fn(Material* __this);
void Material__Draw_fn(Material* __this, ::g::Fuse::Entities::Mesh* m, ::g::Uno::Float4x4* transform, bool* __retval);
void Material__get_IsBatchable_fn(Material* __this, bool* __retval);

struct Material : ::g::Uno::UX::PropertyObject
{
    void ctor_1();
    bool Draw(::g::Fuse::Entities::Mesh* m, ::g::Uno::Float4x4 transform);
    bool IsBatchable();
};
// }

}}} // ::g::Fuse::Entities
