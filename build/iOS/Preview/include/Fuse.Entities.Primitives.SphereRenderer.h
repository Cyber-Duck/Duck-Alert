// This file was generated based on /usr/local/share/uno/Packages/Fuse.Entities/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Entities.MeshRenderer.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Entities{namespace Primitives{struct SphereRenderer;}}}}

namespace g{
namespace Fuse{
namespace Entities{
namespace Primitives{

// public sealed class SphereRenderer :1621
// {
::g::Fuse::Entities::MeshRenderer_type* SphereRenderer_typeof();
void SphereRenderer__ctor_4_fn(SphereRenderer* __this);
void SphereRenderer__New3_fn(SphereRenderer** __retval);
void SphereRenderer__get_Quality_fn(SphereRenderer* __this, int* __retval);
void SphereRenderer__set_Quality_fn(SphereRenderer* __this, int* value);
void SphereRenderer__get_Radius_fn(SphereRenderer* __this, float* __retval);
void SphereRenderer__set_Radius_fn(SphereRenderer* __this, float* value);
void SphereRenderer__Validate_fn(SphereRenderer* __this);

struct SphereRenderer : ::g::Fuse::Entities::MeshRenderer
{
    bool _isDirty;
    int _quality;
    float _radius;

    void ctor_4();
    int Quality();
    void Quality(int value);
    float Radius();
    void Radius(float value);
    static SphereRenderer* New3();
};
// }

}}}} // ::g::Fuse::Entities::Primitives
