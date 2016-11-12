// This file was generated based on /usr/local/share/uno/Packages/Fuse.Entities/0.40.8/filters/$.uno.
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
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Entities{namespace Filters{struct FindEdges;}}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace Graphics{struct IndexBuffer;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}

namespace g{
namespace Fuse{
namespace Entities{
namespace Filters{

// public sealed class FindEdges :156
// {
::g::Fuse::Entities::RenderNode_type* FindEdges_typeof();
void FindEdges__ctor_4_fn(FindEdges* __this);
void FindEdges__get_BackgroundColor_fn(FindEdges* __this, ::g::Uno::Float4* __retval);
void FindEdges__set_BackgroundColor_fn(FindEdges* __this, ::g::Uno::Float4* value);
void FindEdges__get_BlendDst_fn(FindEdges* __this, int* __retval);
void FindEdges__set_BlendDst_fn(FindEdges* __this, int* value);
void FindEdges__get_BlendEnabled_fn(FindEdges* __this, bool* __retval);
void FindEdges__set_BlendEnabled_fn(FindEdges* __this, bool* value);
void FindEdges__get_BlendSrc_fn(FindEdges* __this, int* __retval);
void FindEdges__set_BlendSrc_fn(FindEdges* __this, int* value);
void FindEdges__get_EdgeColor_fn(FindEdges* __this, ::g::Uno::Float4* __retval);
void FindEdges__set_EdgeColor_fn(FindEdges* __this, ::g::Uno::Float4* value);
void FindEdges__init_DrawCalls_fn(FindEdges* __this);
void FindEdges__New3_fn(FindEdges** __retval);
void FindEdges__OnDraw_fn(FindEdges* __this, ::g::Fuse::DrawContext* dc);
void FindEdges__get_Spread_fn(FindEdges* __this, float* __retval);
void FindEdges__set_Spread_fn(FindEdges* __this, float* value);
void FindEdges__get_Strength_fn(FindEdges* __this, float* __retval);
void FindEdges__set_Strength_fn(FindEdges* __this, float* value);

struct FindEdges : ::g::Fuse::Entities::RenderNode
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_97ae18b8;
    uStrong< ::g::Uno::Graphics::IndexBuffer*> OnDraw_VertexData_97ae18b8_9_5_2;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> OnDraw_VertexData_97ae18b8_9_5_3;
    ::g::Uno::Float4 _BackgroundColor;
    int _BlendDst;
    bool _BlendEnabled;
    int _BlendSrc;
    ::g::Uno::Float4 _EdgeColor;
    float _Spread;
    float _Strength;

    void ctor_4();
    ::g::Uno::Float4 BackgroundColor();
    void BackgroundColor(::g::Uno::Float4 value);
    int BlendDst();
    void BlendDst(int value);
    bool BlendEnabled();
    void BlendEnabled(bool value);
    int BlendSrc();
    void BlendSrc(int value);
    ::g::Uno::Float4 EdgeColor();
    void EdgeColor(::g::Uno::Float4 value);
    void init_DrawCalls();
    float Spread();
    void Spread(float value);
    float Strength();
    void Strength(float value);
    static FindEdges* New3();
};
// }

}}}} // ::g::Fuse::Entities::Filters
