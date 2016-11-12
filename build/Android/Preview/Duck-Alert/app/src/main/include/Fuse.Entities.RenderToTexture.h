// This file was generated based on /usr/local/share/uno/Packages/Fuse.Entities/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Entities.RenderNode.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4.h>
#include <Uno.Int2.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Entities{struct Entity;}}}
namespace g{namespace Fuse{namespace Entities{struct RenderToTexture;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace Graphics{struct Framebuffer;}}}
namespace g{namespace Uno{namespace Graphics{struct IndexBuffer;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}

namespace g{
namespace Fuse{
namespace Entities{

// public sealed class RenderToTexture :1856
// {
::g::Fuse::Entities::RenderNode_type* RenderToTexture_typeof();
void RenderToTexture__ctor_4_fn(RenderToTexture* __this);
void RenderToTexture__BlitFlipped_fn(RenderToTexture* __this, ::g::Uno::Graphics::Texture2D* tex);
void RenderToTexture__get_Clear_fn(RenderToTexture* __this, bool* __retval);
void RenderToTexture__set_Clear_fn(RenderToTexture* __this, bool* value);
void RenderToTexture__get_ClearColor_fn(RenderToTexture* __this, ::g::Uno::Float4* __retval);
void RenderToTexture__set_ClearColor_fn(RenderToTexture* __this, ::g::Uno::Float4* value);
void RenderToTexture__get_ClearDepth_fn(RenderToTexture* __this, float* __retval);
void RenderToTexture__set_ClearDepth_fn(RenderToTexture* __this, float* value);
void RenderToTexture__get_DepthBuffer_fn(RenderToTexture* __this, bool* __retval);
void RenderToTexture__set_DepthBuffer_fn(RenderToTexture* __this, bool* value);
void RenderToTexture__get_EventRaycastTarget_fn(RenderToTexture* __this, ::g::Fuse::Entities::Entity** __retval);
void RenderToTexture__set_EventRaycastTarget_fn(RenderToTexture* __this, ::g::Fuse::Entities::Entity* value);
void RenderToTexture__get_FlipVertically_fn(RenderToTexture* __this, bool* __retval);
void RenderToTexture__set_FlipVertically_fn(RenderToTexture* __this, bool* value);
void RenderToTexture__init_DrawCalls_fn(RenderToTexture* __this);
void RenderToTexture__New3_fn(RenderToTexture** __retval);
void RenderToTexture__OnDraw_fn(RenderToTexture* __this, ::g::Fuse::DrawContext* dc);
void RenderToTexture__get_PixelFormat_fn(RenderToTexture* __this, int* __retval);
void RenderToTexture__set_PixelFormat_fn(RenderToTexture* __this, int* value);
void RenderToTexture__get_Resolution_fn(RenderToTexture* __this, ::g::Uno::Int2* __retval);
void RenderToTexture__set_Resolution_fn(RenderToTexture* __this, ::g::Uno::Int2* value);
void RenderToTexture__get_Result_fn(RenderToTexture* __this, ::g::Uno::Graphics::Texture2D** __retval);

struct RenderToTexture : ::g::Fuse::Entities::RenderNode
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_8fe6861f;
    uStrong< ::g::Uno::Graphics::IndexBuffer*> BlitFlipped_VertexData_8fe6861f_9_5_2;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> BlitFlipped_VertexData_8fe6861f_9_5_3;
    bool depth;
    uStrong< ::g::Uno::Graphics::Framebuffer*> fb;
    int format;
    uStrong< ::g::Fuse::Entities::Entity*> raycastTarget;
    ::g::Uno::Int2 resolution;
    bool _Clear;
    ::g::Uno::Float4 _ClearColor;
    float _ClearDepth;
    bool _FlipVertically;

    void ctor_4();
    void BlitFlipped(::g::Uno::Graphics::Texture2D* tex);
    bool Clear2();
    void Clear2(bool value);
    ::g::Uno::Float4 ClearColor();
    void ClearColor(::g::Uno::Float4 value);
    float ClearDepth();
    void ClearDepth(float value);
    bool DepthBuffer();
    void DepthBuffer(bool value);
    ::g::Fuse::Entities::Entity* EventRaycastTarget();
    void EventRaycastTarget(::g::Fuse::Entities::Entity* value);
    bool FlipVertically();
    void FlipVertically(bool value);
    void init_DrawCalls();
    int PixelFormat();
    void PixelFormat(int value);
    ::g::Uno::Int2 Resolution();
    void Resolution(::g::Uno::Int2 value);
    ::g::Uno::Graphics::Texture2D* Result();
    static RenderToTexture* New3();
};
// }

}}} // ::g::Fuse::Entities
