// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.LayoutControl.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.ICommonViewport.h>
#include <Fuse.IRenderViewport.h>
#include <Fuse.IViewport.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct GraphicsView;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct FrustumViewport;}}
namespace g{namespace Fuse{struct OrthographicFrustum;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Fuse{struct VisualBounds;}}
namespace g{namespace Uno{namespace Geometry{struct Ray;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class GraphicsView :225
// {
struct GraphicsView_type : ::g::Fuse::Controls::Control_type
{
    ::g::Fuse::IViewport interface13;
    ::g::Fuse::IRenderViewport interface14;
    ::g::Fuse::ICommonViewport interface15;
};

GraphicsView_type* GraphicsView_typeof();
void GraphicsView__ctor_6_fn(GraphicsView* __this);
void GraphicsView__get_BootstrapNativeViewGroup_fn(GraphicsView* __this, bool* __retval);
void GraphicsView__CalcRenderBounds_fn(GraphicsView* __this, ::g::Fuse::VisualBounds** __retval);
void GraphicsView__get_Color_fn(GraphicsView* __this, ::g::Uno::Float4* __retval);
void GraphicsView__set_Color_fn(GraphicsView* __this, ::g::Uno::Float4* value);
void GraphicsView__CreateNativeView_fn(GraphicsView* __this, uObject** __retval);
void GraphicsView__DrawFrame_fn(GraphicsView* __this);
void GraphicsView__DrawWithChildren_fn(GraphicsView* __this, ::g::Fuse::DrawContext* dc);
void GraphicsView__EjectTemplate_fn(GraphicsView* __this);
void GraphicsView__InjectTemplate_fn(GraphicsView* __this);
void GraphicsView__New3_fn(GraphicsView** __retval);
void GraphicsView__OnEnteringBackground_fn(GraphicsView* __this, int* s);
void GraphicsView__OnEnteringForeground_fn(GraphicsView* __this, int* s);
void GraphicsView__OnInvalidateVisual_fn(GraphicsView* __this);
void GraphicsView__OnRooted_fn(GraphicsView* __this);
void GraphicsView__OnUnrooted_fn(GraphicsView* __this);
void GraphicsView__get_PixelSize_fn(GraphicsView* __this, ::g::Uno::Float2* __retval);
void GraphicsView__get_PixelsPerPoint_fn(GraphicsView* __this, float* __retval);
void GraphicsView__PointToWorldRay_fn(GraphicsView* __this, ::g::Uno::Float2* pixelPos, ::g::Uno::Geometry::Ray* __retval);
void GraphicsView__get_ProjectionTransform_fn(GraphicsView* __this, ::g::Uno::Float4x4* __retval);
void GraphicsView__get_ProjectionTransformInverse_fn(GraphicsView* __this, ::g::Uno::Float4x4* __retval);
void GraphicsView__ScheduleFrame_fn(GraphicsView* __this);
void GraphicsView__get_Size_fn(GraphicsView* __this, ::g::Uno::Float2* __retval);
void GraphicsView__get_ViewOrigin_fn(GraphicsView* __this, ::g::Uno::Float3* __retval);
void GraphicsView__get_ViewProjectionTransform_fn(GraphicsView* __this, ::g::Uno::Float4x4* __retval);
void GraphicsView__get_ViewProjectionTransformInverse_fn(GraphicsView* __this, ::g::Uno::Float4x4* __retval);
void GraphicsView__get_ViewRange_fn(GraphicsView* __this, ::g::Uno::Float2* __retval);
void GraphicsView__get_ViewTransform_fn(GraphicsView* __this, ::g::Uno::Float4x4* __retval);
void GraphicsView__get_ViewTransformInverse_fn(GraphicsView* __this, ::g::Uno::Float4x4* __retval);
void GraphicsView__get_VisualContext_fn(GraphicsView* __this, int* __retval);
void GraphicsView__WorldToLocalRay_fn(GraphicsView* __this, uObject* world, ::g::Uno::Geometry::Ray* worldRay, ::g::Fuse::Visual* where, ::g::Uno::Geometry::Ray* __retval);

struct GraphicsView : ::g::Fuse::Controls::LayoutControl
{
    ::g::Uno::Float4 _color;
    uStrong< ::g::Fuse::DrawContext*> _dc;
    bool _frameScheduled;
    uStrong< ::g::Fuse::OrthographicFrustum*> _frustum;
    uStrong< ::g::Fuse::FrustumViewport*> _frustumViewport;
    bool _inBackground;
    int rotationHackRedrawCount;

    void ctor_6();
    ::g::Uno::Float4 Color();
    void Color(::g::Uno::Float4 value);
    void DrawFrame();
    void OnEnteringBackground(int s);
    void OnEnteringForeground(int s);
    ::g::Uno::Float2 PixelSize();
    float PixelsPerPoint();
    ::g::Uno::Geometry::Ray PointToWorldRay(::g::Uno::Float2 pixelPos);
    ::g::Uno::Float4x4 ProjectionTransform();
    ::g::Uno::Float4x4 ProjectionTransformInverse();
    void ScheduleFrame();
    ::g::Uno::Float2 Size();
    ::g::Uno::Float3 ViewOrigin();
    ::g::Uno::Float4x4 ViewProjectionTransform();
    ::g::Uno::Float4x4 ViewProjectionTransformInverse();
    ::g::Uno::Float2 ViewRange();
    ::g::Uno::Float4x4 ViewTransform();
    ::g::Uno::Float4x4 ViewTransformInverse();
    ::g::Uno::Geometry::Ray WorldToLocalRay(uObject* world, ::g::Uno::Geometry::Ray worldRay, ::g::Fuse::Visual* where);
    static GraphicsView* New3();
};
// }

}}} // ::g::Fuse::Controls
