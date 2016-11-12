// This file was generated based on /usr/local/share/uno/Packages/Fuse.Entities/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Drawing{namespace Batching{struct Batch;}}}}
namespace g{namespace Fuse{namespace Entities{struct Entity;}}}
namespace g{namespace Fuse{namespace Entities{struct Material;}}}
namespace g{namespace Fuse{namespace Entities{struct Mesh;}}}
namespace g{namespace Fuse{namespace Entities{struct MeshRenderer;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct HitTestContext;}}
namespace g{namespace Fuse{struct VisualBounds;}}
namespace g{namespace Uno{namespace Geometry{struct Ray;}}}

namespace g{
namespace Fuse{
namespace Entities{

// public class MeshRenderer :1226
// {
struct MeshRenderer_type : ::g::Fuse::Visual_type
{
    void(*fp_Validate)(::g::Fuse::Entities::MeshRenderer*);
};

MeshRenderer_type* MeshRenderer_typeof();
void MeshRenderer__ctor_3_fn(MeshRenderer* __this);
void MeshRenderer__Draw_fn(MeshRenderer* __this, ::g::Fuse::DrawContext* dc);
void MeshRenderer__DrawDepth_fn(MeshRenderer* __this, ::g::Fuse::Drawing::Batching::Batch* batch);
void MeshRenderer__DrawDepthInternal_fn(MeshRenderer* __this, ::g::Fuse::DrawContext* dc);
void MeshRenderer__DrawSelectionCue_fn(MeshRenderer* __this, ::g::Fuse::Drawing::Batching::Batch* batch, bool* selected, bool* previewSelected, bool* selectedSubtree);
void MeshRenderer__DrawSelectionCueInternal_fn(MeshRenderer* __this, bool* isSelected, bool* isPreviewSelected, bool* isSelectedSubtree);
void MeshRenderer__get_Entity_fn(MeshRenderer* __this, ::g::Fuse::Entities::Entity** __retval);
void MeshRenderer__get_HitTestLocalBounds_fn(MeshRenderer* __this, ::g::Fuse::VisualBounds** __retval);
void MeshRenderer__get_HitTestMode_fn(MeshRenderer* __this, int* __retval);
void MeshRenderer__set_HitTestMode_fn(MeshRenderer* __this, int* value);
void MeshRenderer__init_DrawCalls_fn(MeshRenderer* __this);
void MeshRenderer__get_Material_fn(MeshRenderer* __this, ::g::Fuse::Entities::Material** __retval);
void MeshRenderer__set_Material_fn(MeshRenderer* __this, ::g::Fuse::Entities::Material* value);
void MeshRenderer__get_Mesh_fn(MeshRenderer* __this, ::g::Fuse::Entities::Mesh** __retval);
void MeshRenderer__set_Mesh_fn(MeshRenderer* __this, ::g::Fuse::Entities::Mesh* value);
void MeshRenderer__New2_fn(MeshRenderer** __retval);
void MeshRenderer__OnHitTest_fn(MeshRenderer* __this, ::g::Fuse::HitTestContext* args);
void MeshRenderer__RayIntersectObjectSpace_fn(MeshRenderer* __this, ::g::Uno::Geometry::Ray* objectSpaceRay, float* distance, bool* __retval);
void MeshRenderer__RayIntersectWorldSpace_fn(MeshRenderer* __this, ::g::Uno::Geometry::Ray* worldSpaceRay, float* distance, bool* __retval);
void MeshRenderer__Validate_fn(MeshRenderer* __this);

struct MeshRenderer : ::g::Fuse::Visual
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_649dad79;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_e4fe16dd;
    int _hitTestMode;
    uStrong< ::g::Fuse::Entities::Material*> _material;
    uStrong< ::g::Fuse::Entities::Mesh*> _mesh;

    void ctor_3();
    void DrawDepth(::g::Fuse::Drawing::Batching::Batch* batch);
    void DrawDepthInternal(::g::Fuse::DrawContext* dc);
    void DrawSelectionCue(::g::Fuse::Drawing::Batching::Batch* batch, bool selected, bool previewSelected, bool selectedSubtree);
    void DrawSelectionCueInternal(bool isSelected, bool isPreviewSelected, bool isSelectedSubtree);
    ::g::Fuse::Entities::Entity* Entity();
    int HitTestMode();
    void HitTestMode(int value);
    void init_DrawCalls();
    ::g::Fuse::Entities::Material* Material();
    void Material(::g::Fuse::Entities::Material* value);
    ::g::Fuse::Entities::Mesh* Mesh();
    void Mesh(::g::Fuse::Entities::Mesh* value);
    bool RayIntersectObjectSpace(::g::Uno::Geometry::Ray objectSpaceRay, float* distance);
    bool RayIntersectWorldSpace(::g::Uno::Geometry::Ray worldSpaceRay, float* distance);
    void Validate() { (((MeshRenderer_type*)__type)->fp_Validate)(this); }
    static MeshRenderer* New2();
    static void Validate(MeshRenderer* __this) { MeshRenderer__Validate_fn(__this); }
};
// }

}}} // ::g::Fuse::Entities
