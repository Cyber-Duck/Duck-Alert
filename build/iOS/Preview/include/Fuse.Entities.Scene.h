// This file was generated based on /usr/local/share/uno/Packages/Fuse.Entities/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Entities.RenderNode.h>
#include <Fuse.ICommonViewport.h>
#include <Fuse.IRenderViewport.h>
#include <Fuse.IViewport.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Entities{struct Entity;}}}
namespace g{namespace Fuse{namespace Entities{struct Scene;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct HitTestContext;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Geometry{struct Ray;}}}
namespace g{namespace Uno{namespace Platform{struct ClosingEventArgs;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Entities{

// public sealed class Scene :1983
// {
struct Scene_type : ::g::Fuse::Entities::RenderNode_type
{
    ::g::Fuse::IViewport interface8;
    ::g::Fuse::IRenderViewport interface9;
    ::g::Fuse::ICommonViewport interface10;
};

Scene_type* Scene_typeof();
void Scene__ctor_4_fn(Scene* __this);
void Scene__get_AlwaysClear_fn(Scene* __this, bool* __retval);
void Scene__set_AlwaysClear_fn(Scene* __this, bool* value);
void Scene__get_AlwaysUseOwnCamera_fn(Scene* __this, bool* __retval);
void Scene__set_AlwaysUseOwnCamera_fn(Scene* __this, bool* value);
void Scene__get_Camera_fn(Scene* __this, ::g::Fuse::Entities::Entity** __retval);
void Scene__set_Camera_fn(Scene* __this, ::g::Fuse::Entities::Entity* value);
void Scene__get_ClearColor_fn(Scene* __this, ::g::Uno::Float4* __retval);
void Scene__set_ClearColor_fn(Scene* __this, ::g::Uno::Float4* value);
void Scene__get_HasCamera_fn(Scene* __this, bool* __retval);
void Scene__New3_fn(Scene** __retval);
void Scene__OnDraw_fn(Scene* __this, ::g::Fuse::DrawContext* dc);
void Scene__OnHitTest_fn(Scene* __this, ::g::Fuse::HitTestContext* args);
void Scene__get_PixelSize_fn(Scene* __this, ::g::Uno::Float2* __retval);
void Scene__get_PixelsPerPoint_fn(Scene* __this, float* __retval);
void Scene__PointToWorldRay_fn(Scene* __this, ::g::Uno::Float2* pointPos, ::g::Uno::Geometry::Ray* __retval);
void Scene__get_ProjectionTransform_fn(Scene* __this, ::g::Uno::Float4x4* __retval);
void Scene__get_ProjectionTransformInverse_fn(Scene* __this, ::g::Uno::Float4x4* __retval);
void Scene__get_Size_fn(Scene* __this, ::g::Uno::Float2* __retval);
void Scene__get_ViewOrigin_fn(Scene* __this, ::g::Uno::Float3* __retval);
void Scene__get_ViewProjectionTransform_fn(Scene* __this, ::g::Uno::Float4x4* __retval);
void Scene__get_ViewProjectionTransformInverse_fn(Scene* __this, ::g::Uno::Float4x4* __retval);
void Scene__get_ViewRange_fn(Scene* __this, ::g::Uno::Float2* __retval);
void Scene__get_ViewTransform_fn(Scene* __this, ::g::Uno::Float4x4* __retval);
void Scene__get_ViewTransformInverse_fn(Scene* __this, ::g::Uno::Float4x4* __retval);
void Scene__add_WindowClosed_fn(Scene* __this, uDelegate* value);
void Scene__remove_WindowClosed_fn(Scene* __this, uDelegate* value);
void Scene__add_WindowClosing_fn(Scene* __this, uDelegate* value);
void Scene__remove_WindowClosing_fn(Scene* __this, uDelegate* value);
void Scene__add_WindowResized_fn(Scene* __this, uDelegate* value);
void Scene__remove_WindowResized_fn(Scene* __this, uDelegate* value);
void Scene__WorldToLocalRay_fn(Scene* __this, uObject* world, ::g::Uno::Geometry::Ray* worldRay, ::g::Fuse::Visual* where, ::g::Uno::Geometry::Ray* __retval);

struct Scene : ::g::Fuse::Entities::RenderNode
{
    bool _AlwaysClear;
    bool _AlwaysUseOwnCamera;
    uStrong< ::g::Fuse::Entities::Entity*> _Camera;
    ::g::Uno::Float4 _ClearColor;

    void ctor_4();
    bool AlwaysClear();
    void AlwaysClear(bool value);
    bool AlwaysUseOwnCamera();
    void AlwaysUseOwnCamera(bool value);
    ::g::Fuse::Entities::Entity* Camera();
    void Camera(::g::Fuse::Entities::Entity* value);
    ::g::Uno::Float4 ClearColor();
    void ClearColor(::g::Uno::Float4 value);
    bool HasCamera();
    ::g::Uno::Float2 PixelSize();
    float PixelsPerPoint();
    ::g::Uno::Geometry::Ray PointToWorldRay(::g::Uno::Float2 pointPos);
    ::g::Uno::Float4x4 ProjectionTransform();
    ::g::Uno::Float4x4 ProjectionTransformInverse();
    ::g::Uno::Float2 Size();
    ::g::Uno::Float3 ViewOrigin();
    ::g::Uno::Float4x4 ViewProjectionTransform();
    ::g::Uno::Float4x4 ViewProjectionTransformInverse();
    ::g::Uno::Float2 ViewRange();
    ::g::Uno::Float4x4 ViewTransform();
    ::g::Uno::Float4x4 ViewTransformInverse();
    void add_WindowClosed(uDelegate* value);
    void remove_WindowClosed(uDelegate* value);
    void add_WindowClosing(uDelegate* value);
    void remove_WindowClosing(uDelegate* value);
    void add_WindowResized(uDelegate* value);
    void remove_WindowResized(uDelegate* value);
    ::g::Uno::Geometry::Ray WorldToLocalRay(uObject* world, ::g::Uno::Geometry::Ray worldRay, ::g::Fuse::Visual* where);
    static Scene* New3();
};
// }

}}} // ::g::Fuse::Entities
