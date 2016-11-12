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
namespace g{namespace Fuse{namespace Entities{struct Entity;}}}
namespace g{namespace Fuse{namespace Entities{struct SkinnedMeshRenderer;}}}
namespace g{namespace Fuse{namespace Entities{struct Skinner;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Entities{

// internal sealed class SkinnedMeshRenderer :2237
// {
::g::Fuse::Entities::MeshRenderer_type* SkinnedMeshRenderer_typeof();
void SkinnedMeshRenderer__ctor_4_fn(SkinnedMeshRenderer* __this);
void SkinnedMeshRenderer__get_Bones_fn(SkinnedMeshRenderer* __this, ::g::Uno::Collections::List** __retval);
void SkinnedMeshRenderer__New3_fn(SkinnedMeshRenderer** __retval);
void SkinnedMeshRenderer__UpdateMesh_fn(SkinnedMeshRenderer* __this);

struct SkinnedMeshRenderer : ::g::Fuse::Entities::MeshRenderer
{
    uStrong< ::g::Fuse::Entities::Skinner*> _assDir;
    uStrong< ::g::Uno::Collections::List*> _bones;

    void ctor_4();
    ::g::Uno::Collections::List* Bones();
    void UpdateMesh();
    static SkinnedMeshRenderer* New3();
};
// }

}}} // ::g::Fuse::Entities
