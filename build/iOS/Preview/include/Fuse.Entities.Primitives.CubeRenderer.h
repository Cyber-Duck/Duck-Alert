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
namespace g{namespace Fuse{namespace Entities{namespace Primitives{struct CubeRenderer;}}}}

namespace g{
namespace Fuse{
namespace Entities{
namespace Primitives{

// public sealed class CubeRenderer :1611
// {
::g::Fuse::Entities::MeshRenderer_type* CubeRenderer_typeof();
void CubeRenderer__ctor_4_fn(CubeRenderer* __this);
void CubeRenderer__New3_fn(CubeRenderer** __retval);

struct CubeRenderer : ::g::Fuse::Entities::MeshRenderer
{
    void ctor_4();
    static CubeRenderer* New3();
};
// }

}}}} // ::g::Fuse::Entities::Primitives
