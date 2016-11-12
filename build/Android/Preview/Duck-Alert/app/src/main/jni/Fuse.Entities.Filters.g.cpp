// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseEffects_bundle.h>
#include <_root.FuseEntities_bundle.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Entities.Filters.Blitter.h>
#include <Fuse.Entities.Filters.Blur.h>
#include <Fuse.Entities.Filters.FindEdges.h>
#include <Fuse.FramebufferPool.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.Framebuffer.h>
#include <Uno.Graphics.IndexBuffer.h>
#include <Uno.Graphics.IndexType.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.RenderTarget.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.UShort.h>
static uType* TYPES[2];

namespace g{
namespace Fuse{
namespace Entities{
namespace Filters{

// /usr/local/share/uno/Packages/Fuse.Entities/0.40.8/filters/$.uno
// ----------------------------------------------------------------

// internal sealed class Blitter :122
// {
static void Blitter_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UShort_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Float2_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Entities::Filters::Blitter, _draw_525d1e24), 0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(::g::Fuse::Entities::Filters::Blitter, Blit_VertexData_525d1e24_2_5_2), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Entities::Filters::Blitter, Blit_VertexData_525d1e24_2_5_3), 0,
        Blitter_typeof(), (uintptr_t)&::g::Fuse::Entities::Filters::Blitter::_instance_, uFieldFlagsStatic);
}

uType* Blitter_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Blitter);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Entities.Filters.Blitter", options);
    type->fp_build_ = Blitter_build;
    type->fp_ctor_ = (void*)Blitter__New1_fn;
    return type;
}

// public generated Blitter() :122
void Blitter__ctor__fn(Blitter* __this)
{
    __this->ctor_();
}

// public void Blit(texture2D tex, bool blend) :130
void Blitter__Blit_fn(Blitter* __this, ::g::Uno::Graphics::Texture2D* tex, bool* blend)
{
    __this->Blit(tex, *blend);
}

// private generated void init_DrawCalls() :122
void Blitter__init_DrawCalls_fn(Blitter* __this)
{
    __this->init_DrawCalls();
}

// public static Fuse.Entities.Filters.Blitter get_Instance() :127
void Blitter__get_Instance_fn(Blitter** __retval)
{
    *__retval = Blitter::Instance();
}

// public generated Blitter New() :122
void Blitter__New1_fn(Blitter** __retval)
{
    *__retval = Blitter::New1();
}

uSStrong<Blitter*> Blitter::_instance_;

// public generated Blitter() [instance] :122
void Blitter::ctor_()
{
    uStackFrame __("Fuse.Entities.Filters.Blitter", ".ctor()");
    init_DrawCalls();
}

// public void Blit(texture2D tex, bool blend) [instance] :130
void Blitter::Blit(::g::Uno::Graphics::Texture2D* tex, bool blend)
{
    uStackFrame __("Fuse.Entities.Filters.Blitter", "Blit(texture2D,bool)");
    _draw_525d1e24.BlendEnabled(blend);
    _draw_525d1e24.DepthTestEnabled(false);
    _draw_525d1e24.CullFace(0);
    _draw_525d1e24.Use();
    _draw_525d1e24.Attrib1(0, 2, Blit_VertexData_525d1e24_2_5_3, 8, 0);
    _draw_525d1e24.Sampler2(1, tex);
    _draw_525d1e24.Draw(6, 2, Blit_VertexData_525d1e24_2_5_2);
}

// private generated void init_DrawCalls() [instance] :122
void Blitter::init_DrawCalls()
{
    uStackFrame __("Fuse.Entities.Filters.Blitter", "init_DrawCalls()");
    Blit_VertexData_525d1e24_2_5_2 = ::g::Uno::Graphics::IndexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer9(uArray::Init<int>(::TYPES[0/*ushort[]*/], 6, 0, 1, 2, 2, 3, 0)), 0);
    Blit_VertexData_525d1e24_2_5_3 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(uArray::Init< ::g::Uno::Float2>(::TYPES[1/*float2[]*/], 4, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 1.0f))), 0);
    _draw_525d1e24 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseEffects_bundle::EffectHelpers9b892494());
}

// public generated Blitter New() [static] :122
Blitter* Blitter::New1()
{
    Blitter* obj2 = (Blitter*)uNew(Blitter_typeof());
    obj2->ctor_();
    return obj2;
}

// public static Fuse.Entities.Filters.Blitter get_Instance() [static] :127
Blitter* Blitter::Instance()
{
    uStackFrame __("Fuse.Entities.Filters.Blitter", "get_Instance()");
    Blitter* ind1 = Blitter::_instance_;
    return (ind1 != NULL) ? ind1 : (Blitter*)(Blitter::_instance_ = Blitter::New1());
}
// }

// /usr/local/share/uno/Packages/Fuse.Entities/0.40.8/filters/$.uno
// ----------------------------------------------------------------

// public sealed class Blur :11
// {
static void Blur_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UShort_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Float2_typeof()->Array();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Entities::RenderNode_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Entities::RenderNode_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Entities::RenderNode_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Entities::RenderNode_type, interface3),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Entities::RenderNode_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Entities::RenderNode_type, interface5),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Entities::RenderNode_type, interface6),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Entities::RenderNode_type, interface7));
    type->SetFields(55,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Entities::Filters::Blur, _draw_a9804dff), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Entities::Filters::Blur, _passes), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Entities::Filters::Blur, _quality), 0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(::g::Fuse::Entities::Filters::Blur, DirectionalBlur_VertexData_a9804dff_2_5_2), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Entities::Filters::Blur, DirectionalBlur_VertexData_a9804dff_2_5_3), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Entities::Filters::Blur, _ClearColor), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Entities::Filters::Blur, _Glow), 0);
    type->Reflection.SetFunctions(9,
        new uFunction("get_ClearColor", NULL, (void*)Blur__get_ClearColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_ClearColor", NULL, (void*)Blur__set_ClearColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_Glow", NULL, (void*)Blur__get_Glow_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Glow", NULL, (void*)Blur__set_Glow_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)Blur__New3_fn, 0, true, Blur_typeof(), 0),
        new uFunction("get_Passes", NULL, (void*)Blur__get_Passes_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_Passes", NULL, (void*)Blur__set_Passes_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_Quality", NULL, (void*)Blur__get_Quality_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Quality", NULL, (void*)Blur__set_Quality_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

::g::Fuse::Entities::RenderNode_type* Blur_typeof()
{
    static uSStrong< ::g::Fuse::Entities::RenderNode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Entities::RenderNode_typeof();
    options.FieldCount = 62;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(Blur);
    options.TypeSize = sizeof(::g::Fuse::Entities::RenderNode_type);
    type = (::g::Fuse::Entities::RenderNode_type*)uClassType::New("Fuse.Entities.Filters.Blur", options);
    type->fp_build_ = Blur_build;
    type->fp_ctor_ = (void*)Blur__New3_fn;
    type->fp_OnDraw = (void(*)(::g::Fuse::Entities::RenderNode*, ::g::Fuse::DrawContext*))Blur__OnDraw_fn;
    type->interface6.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface6.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface4.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface7.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface6.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface4.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface4.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface5.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Visual__OnPropertyChanged2_fn;
    type->interface6.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface6.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Blur() :49
void Blur__ctor_4_fn(Blur* __this)
{
    __this->ctor_4();
}

// public generated float4 get_ClearColor() :47
void Blur__get_ClearColor_fn(Blur* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->ClearColor();
}

// public generated void set_ClearColor(float4 value) :47
void Blur__set_ClearColor_fn(Blur* __this, ::g::Uno::Float4* value)
{
    __this->ClearColor(*value);
}

// private void DirectionalBlur(texture2D tex, float2 dir) :98
void Blur__DirectionalBlur_fn(Blur* __this, ::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Float2* dir)
{
    __this->DirectionalBlur(tex, *dir);
}

// public generated bool get_Glow() :54
void Blur__get_Glow_fn(Blur* __this, bool* __retval)
{
    *__retval = __this->Glow();
}

// public generated void set_Glow(bool value) :54
void Blur__set_Glow_fn(Blur* __this, bool* value)
{
    __this->Glow(*value);
}

// private generated void init_DrawCalls() :11
void Blur__init_DrawCalls_fn(Blur* __this)
{
    __this->init_DrawCalls();
}

// public Blur New() :49
void Blur__New3_fn(Blur** __retval)
{
    *__retval = Blur::New3();
}

// protected override sealed void OnDraw(Fuse.DrawContext dc) :56
void Blur__OnDraw_fn(Blur* __this, ::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Entities.Filters.Blur", "OnDraw(Fuse.DrawContext)");
    int width = (int)(((float)uPtr(dc)->GLViewportPixelSize().X * __this->Quality()) / 100.0f);
    int height = (int)(((float)dc->GLViewportPixelSize().Y * __this->Quality()) / 100.0f);

    if (width < 1)
        width = 1;

    if (height < 1)
        height = 1;

    ::g::Uno::Graphics::Framebuffer* fb1 = ::g::Fuse::FramebufferPool::Lock(width, height, 3, true);
    ::g::Uno::Graphics::Framebuffer* fb2 = ::g::Fuse::FramebufferPool::Lock(width, height, 3, false);
    dc->PushRenderTarget1(uPtr(fb1)->RenderTarget());
    dc->Clear(__this->ClearColor(), 1.0f);
    ::g::Fuse::Entities::RenderNode__OnDraw_fn(__this, dc);
    dc->PopRenderTarget();

    for (int i = 1; i < __this->Passes(); i++)
    {
        uPtr(dc)->PushRenderTarget1(uPtr(fb2)->RenderTarget());
        dc->Clear(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.0f), 1.0f);
        __this->DirectionalBlur(uPtr(fb1)->ColorBuffer(), ::g::Uno::Float2__New2(0.5f, 0.0f));
        dc->PopRenderTarget();
        dc->PushRenderTarget1(fb1->RenderTarget());
        dc->Clear(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.0f), 1.0f);
        __this->DirectionalBlur(fb2->ColorBuffer(), ::g::Uno::Float2__New2(0.0f, 0.5f));
        dc->PopRenderTarget();
    }

    if (__this->Glow())
    {
        ::g::Fuse::Entities::RenderNode__OnDraw_fn(__this, dc);
        uPtr(dc)->Flush();
    }

    uPtr(::g::Fuse::Entities::Filters::Blitter::Instance())->Blit(fb1->ColorBuffer(), __this->Glow());
    ::g::Fuse::FramebufferPool::Release(fb1);
    ::g::Fuse::FramebufferPool::Release(fb2);
}

// public int get_Passes() :34
void Blur__get_Passes_fn(Blur* __this, int* __retval)
{
    *__retval = __this->Passes();
}

// public void set_Passes(int value) :35
void Blur__set_Passes_fn(Blur* __this, int* value)
{
    __this->Passes(*value);
}

// public float get_Quality() :18
void Blur__get_Quality_fn(Blur* __this, float* __retval)
{
    *__retval = __this->Quality();
}

// public void set_Quality(float value) :19
void Blur__set_Quality_fn(Blur* __this, float* value)
{
    __this->Quality(*value);
}

// public Blur() [instance] :49
void Blur::ctor_4()
{
    uStackFrame __("Fuse.Entities.Filters.Blur", ".ctor()");
    _quality = 100.0f;
    _passes = 4;
    ctor_3();
    ClearColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    init_DrawCalls();
}

// public generated float4 get_ClearColor() [instance] :47
::g::Uno::Float4 Blur::ClearColor()
{
    uStackFrame __("Fuse.Entities.Filters.Blur", "get_ClearColor()");
    return _ClearColor;
}

// public generated void set_ClearColor(float4 value) [instance] :47
void Blur::ClearColor(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Entities.Filters.Blur", "set_ClearColor(float4)");
    _ClearColor = value;
}

// private void DirectionalBlur(texture2D tex, float2 dir) [instance] :98
void Blur::DirectionalBlur(::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Float2 dir)
{
    uStackFrame __("Fuse.Entities.Filters.Blur", "DirectionalBlur(texture2D,float2)");
    _draw_a9804dff.DepthTestEnabled(false);
    _draw_a9804dff.CullFace(0);
    _draw_a9804dff.Use();
    _draw_a9804dff.Attrib1(0, 2, DirectionalBlur_VertexData_a9804dff_2_5_3, 8, 0);
    _draw_a9804dff.Uniform2(1, ::g::Uno::Float2__New2(dir.X / (float)uPtr(tex)->Size().X, dir.Y / (float)uPtr(tex)->Size().Y));
    _draw_a9804dff.Uniform2(2, ::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__New2(dir.X / (float)tex->Size().X, dir.Y / (float)tex->Size().Y), 3.0f));
    _draw_a9804dff.Sampler2(3, tex);
    _draw_a9804dff.Draw(6, 2, DirectionalBlur_VertexData_a9804dff_2_5_2);
}

// public generated bool get_Glow() [instance] :54
bool Blur::Glow()
{
    uStackFrame __("Fuse.Entities.Filters.Blur", "get_Glow()");
    return _Glow;
}

// public generated void set_Glow(bool value) [instance] :54
void Blur::Glow(bool value)
{
    uStackFrame __("Fuse.Entities.Filters.Blur", "set_Glow(bool)");
    _Glow = value;
}

// private generated void init_DrawCalls() [instance] :11
void Blur::init_DrawCalls()
{
    uStackFrame __("Fuse.Entities.Filters.Blur", "init_DrawCalls()");
    DirectionalBlur_VertexData_a9804dff_2_5_2 = ::g::Uno::Graphics::IndexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer9(uArray::Init<int>(::TYPES[0/*ushort[]*/], 6, 0, 1, 2, 2, 3, 0)), 0);
    DirectionalBlur_VertexData_a9804dff_2_5_3 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(uArray::Init< ::g::Uno::Float2>(::TYPES[1/*float2[]*/], 4, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 1.0f))), 0);
    _draw_a9804dff = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseEntities_bundle::Blurc28c2aab());
}

// public int get_Passes() [instance] :34
int Blur::Passes()
{
    uStackFrame __("Fuse.Entities.Filters.Blur", "get_Passes()");
    return _passes;
}

// public void set_Passes(int value) [instance] :35
void Blur::Passes(int value)
{
    uStackFrame __("Fuse.Entities.Filters.Blur", "set_Passes(int)");

    if (_passes != value)
    {
        _passes = value;

        if (_passes < 0)
            _passes = 0;

        if (_passes > 20)
            _passes = 20;
    }
}

// public float get_Quality() [instance] :18
float Blur::Quality()
{
    uStackFrame __("Fuse.Entities.Filters.Blur", "get_Quality()");
    return _quality;
}

// public void set_Quality(float value) [instance] :19
void Blur::Quality(float value)
{
    uStackFrame __("Fuse.Entities.Filters.Blur", "set_Quality(float)");

    if (_quality != value)
    {
        _quality = value;

        if (_quality < 1.0f)
            _quality = 1.0f;

        if (_quality > 100.0f)
            _quality = 100.0f;
    }
}

// public Blur New() [static] :49
Blur* Blur::New3()
{
    Blur* obj1 = (Blur*)uNew(Blur_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Entities/0.40.8/filters/$.uno
// ----------------------------------------------------------------

// public sealed class FindEdges :156
// {
static void FindEdges_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UShort_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Float2_typeof()->Array();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Entities::RenderNode_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Entities::RenderNode_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Entities::RenderNode_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Entities::RenderNode_type, interface3),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Entities::RenderNode_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Entities::RenderNode_type, interface5),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Entities::RenderNode_type, interface6),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Entities::RenderNode_type, interface7));
    type->SetFields(55,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Entities::Filters::FindEdges, _draw_97ae18b8), 0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(::g::Fuse::Entities::Filters::FindEdges, OnDraw_VertexData_97ae18b8_9_5_2), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Entities::Filters::FindEdges, OnDraw_VertexData_97ae18b8_9_5_3), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Entities::Filters::FindEdges, _BackgroundColor), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Entities::Filters::FindEdges, _BlendDst), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Entities::Filters::FindEdges, _BlendEnabled), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Entities::Filters::FindEdges, _BlendSrc), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Entities::Filters::FindEdges, _EdgeColor), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Entities::Filters::FindEdges, _Spread), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Entities::Filters::FindEdges, _Strength), 0);
    type->Reflection.SetFunctions(15,
        new uFunction("get_BackgroundColor", NULL, (void*)FindEdges__get_BackgroundColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_BackgroundColor", NULL, (void*)FindEdges__set_BackgroundColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_BlendDst", NULL, (void*)FindEdges__get_BlendDst_fn, 0, false, ::g::Uno::Graphics::BlendOperand_typeof(), 0),
        new uFunction("set_BlendDst", NULL, (void*)FindEdges__set_BlendDst_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Graphics::BlendOperand_typeof()),
        new uFunction("get_BlendEnabled", NULL, (void*)FindEdges__get_BlendEnabled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_BlendEnabled", NULL, (void*)FindEdges__set_BlendEnabled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_BlendSrc", NULL, (void*)FindEdges__get_BlendSrc_fn, 0, false, ::g::Uno::Graphics::BlendOperand_typeof(), 0),
        new uFunction("set_BlendSrc", NULL, (void*)FindEdges__set_BlendSrc_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Graphics::BlendOperand_typeof()),
        new uFunction("get_EdgeColor", NULL, (void*)FindEdges__get_EdgeColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_EdgeColor", NULL, (void*)FindEdges__set_EdgeColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction(".ctor", NULL, (void*)FindEdges__New3_fn, 0, true, FindEdges_typeof(), 0),
        new uFunction("get_Spread", NULL, (void*)FindEdges__get_Spread_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Spread", NULL, (void*)FindEdges__set_Spread_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Strength", NULL, (void*)FindEdges__get_Strength_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Strength", NULL, (void*)FindEdges__set_Strength_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

::g::Fuse::Entities::RenderNode_type* FindEdges_typeof()
{
    static uSStrong< ::g::Fuse::Entities::RenderNode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Entities::RenderNode_typeof();
    options.FieldCount = 65;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(FindEdges);
    options.TypeSize = sizeof(::g::Fuse::Entities::RenderNode_type);
    type = (::g::Fuse::Entities::RenderNode_type*)uClassType::New("Fuse.Entities.Filters.FindEdges", options);
    type->fp_build_ = FindEdges_build;
    type->fp_ctor_ = (void*)FindEdges__New3_fn;
    type->fp_OnDraw = (void(*)(::g::Fuse::Entities::RenderNode*, ::g::Fuse::DrawContext*))FindEdges__OnDraw_fn;
    type->interface6.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface6.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface4.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface7.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface6.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface4.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface4.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface5.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Visual__OnPropertyChanged2_fn;
    type->interface6.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface6.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public FindEdges() :158
void FindEdges__ctor_4_fn(FindEdges* __this)
{
    __this->ctor_4();
}

// public generated float4 get_BackgroundColor() :173
void FindEdges__get_BackgroundColor_fn(FindEdges* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->BackgroundColor();
}

// public generated void set_BackgroundColor(float4 value) :173
void FindEdges__set_BackgroundColor_fn(FindEdges* __this, ::g::Uno::Float4* value)
{
    __this->BackgroundColor(*value);
}

// public generated Uno.Graphics.BlendOperand get_BlendDst() :180
void FindEdges__get_BlendDst_fn(FindEdges* __this, int* __retval)
{
    *__retval = __this->BlendDst();
}

// public generated void set_BlendDst(Uno.Graphics.BlendOperand value) :180
void FindEdges__set_BlendDst_fn(FindEdges* __this, int* value)
{
    __this->BlendDst(*value);
}

// public generated bool get_BlendEnabled() :178
void FindEdges__get_BlendEnabled_fn(FindEdges* __this, bool* __retval)
{
    *__retval = __this->BlendEnabled();
}

// public generated void set_BlendEnabled(bool value) :178
void FindEdges__set_BlendEnabled_fn(FindEdges* __this, bool* value)
{
    __this->BlendEnabled(*value);
}

// public generated Uno.Graphics.BlendOperand get_BlendSrc() :179
void FindEdges__get_BlendSrc_fn(FindEdges* __this, int* __retval)
{
    *__retval = __this->BlendSrc();
}

// public generated void set_BlendSrc(Uno.Graphics.BlendOperand value) :179
void FindEdges__set_BlendSrc_fn(FindEdges* __this, int* value)
{
    __this->BlendSrc(*value);
}

// public generated float4 get_EdgeColor() :176
void FindEdges__get_EdgeColor_fn(FindEdges* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->EdgeColor();
}

// public generated void set_EdgeColor(float4 value) :176
void FindEdges__set_EdgeColor_fn(FindEdges* __this, ::g::Uno::Float4* value)
{
    __this->EdgeColor(*value);
}

// private generated void init_DrawCalls() :156
void FindEdges__init_DrawCalls_fn(FindEdges* __this)
{
    __this->init_DrawCalls();
}

// public FindEdges New() :158
void FindEdges__New3_fn(FindEdges** __retval)
{
    *__retval = FindEdges::New3();
}

// protected override sealed void OnDraw(Fuse.DrawContext dc) :182
void FindEdges__OnDraw_fn(FindEdges* __this, ::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Entities.Filters.FindEdges", "OnDraw(Fuse.DrawContext)");
    ::g::Uno::Graphics::Framebuffer* fb = ::g::Fuse::FramebufferPool::Lock(uPtr(dc)->GLViewportPixelSize().X, uPtr(dc)->GLViewportPixelSize().Y, 3, true);
    dc->PushRenderTarget1(uPtr(fb)->RenderTarget());
    dc->Clear(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 0.0f), 1.0f);
    ::g::Fuse::Entities::RenderNode__OnDraw_fn(__this, dc);
    dc->PopRenderTarget();

    if (__this->BlendEnabled())
    {
        ::g::Fuse::Entities::RenderNode__OnDraw_fn(__this, dc);
        uPtr(dc)->Flush();
    }

    __this->_draw_97ae18b8.BlendEnabled(__this->BlendEnabled());
    __this->_draw_97ae18b8.BlendSrcRgb(__this->BlendSrc());
    __this->_draw_97ae18b8.BlendSrcAlpha(__this->BlendSrc());
    __this->_draw_97ae18b8.BlendDstRgb(__this->BlendDst());
    __this->_draw_97ae18b8.BlendDstAlpha(__this->BlendDst());
    __this->_draw_97ae18b8.Use();
    __this->_draw_97ae18b8.Attrib1(0, 2, __this->OnDraw_VertexData_97ae18b8_9_5_3, 8, 0);
    __this->_draw_97ae18b8.Uniform2(1, ::g::Uno::Float2__New2(::g::Uno::Float2__New2(__this->Spread() / (float)uPtr(fb)->Size().X, __this->Spread() / (float)uPtr(fb)->Size().Y).X, 0.0f));
    __this->_draw_97ae18b8.Uniform2(2, ::g::Uno::Float2__New2(0.0f, ::g::Uno::Float2__New2(__this->Spread() / (float)fb->Size().X, __this->Spread() / (float)fb->Size().Y).Y));
    __this->_draw_97ae18b8.Uniform2(3, ::g::Uno::Float2__New2(-::g::Uno::Float2__New2(__this->Spread() / (float)fb->Size().X, __this->Spread() / (float)fb->Size().Y).X, 0.0f));
    __this->_draw_97ae18b8.Uniform2(4, ::g::Uno::Float2__New2(0.0f, -::g::Uno::Float2__New2(__this->Spread() / (float)fb->Size().X, __this->Spread() / (float)fb->Size().Y).Y));
    __this->_draw_97ae18b8.Uniform(5, __this->Strength());
    __this->_draw_97ae18b8.Uniform10(6, __this->BackgroundColor());
    __this->_draw_97ae18b8.Uniform10(7, __this->EdgeColor());
    __this->_draw_97ae18b8.Sampler2(8, fb->ColorBuffer());
    __this->_draw_97ae18b8.Draw(6, 2, __this->OnDraw_VertexData_97ae18b8_9_5_2);
    ::g::Fuse::FramebufferPool::Release(fb);
}

// public generated float get_Spread() :167
void FindEdges__get_Spread_fn(FindEdges* __this, float* __retval)
{
    *__retval = __this->Spread();
}

// public generated void set_Spread(float value) :167
void FindEdges__set_Spread_fn(FindEdges* __this, float* value)
{
    __this->Spread(*value);
}

// public generated float get_Strength() :170
void FindEdges__get_Strength_fn(FindEdges* __this, float* __retval)
{
    *__retval = __this->Strength();
}

// public generated void set_Strength(float value) :170
void FindEdges__set_Strength_fn(FindEdges* __this, float* value)
{
    __this->Strength(*value);
}

// public FindEdges() [instance] :158
void FindEdges::ctor_4()
{
    uStackFrame __("Fuse.Entities.Filters.FindEdges", ".ctor()");
    ctor_3();
    Spread(1.0f);
    Strength(0.25f);
    BackgroundColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    EdgeColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    init_DrawCalls();
}

// public generated float4 get_BackgroundColor() [instance] :173
::g::Uno::Float4 FindEdges::BackgroundColor()
{
    uStackFrame __("Fuse.Entities.Filters.FindEdges", "get_BackgroundColor()");
    return _BackgroundColor;
}

// public generated void set_BackgroundColor(float4 value) [instance] :173
void FindEdges::BackgroundColor(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Entities.Filters.FindEdges", "set_BackgroundColor(float4)");
    _BackgroundColor = value;
}

// public generated Uno.Graphics.BlendOperand get_BlendDst() [instance] :180
int FindEdges::BlendDst()
{
    uStackFrame __("Fuse.Entities.Filters.FindEdges", "get_BlendDst()");
    return _BlendDst;
}

// public generated void set_BlendDst(Uno.Graphics.BlendOperand value) [instance] :180
void FindEdges::BlendDst(int value)
{
    uStackFrame __("Fuse.Entities.Filters.FindEdges", "set_BlendDst(Uno.Graphics.BlendOperand)");
    _BlendDst = value;
}

// public generated bool get_BlendEnabled() [instance] :178
bool FindEdges::BlendEnabled()
{
    uStackFrame __("Fuse.Entities.Filters.FindEdges", "get_BlendEnabled()");
    return _BlendEnabled;
}

// public generated void set_BlendEnabled(bool value) [instance] :178
void FindEdges::BlendEnabled(bool value)
{
    uStackFrame __("Fuse.Entities.Filters.FindEdges", "set_BlendEnabled(bool)");
    _BlendEnabled = value;
}

// public generated Uno.Graphics.BlendOperand get_BlendSrc() [instance] :179
int FindEdges::BlendSrc()
{
    uStackFrame __("Fuse.Entities.Filters.FindEdges", "get_BlendSrc()");
    return _BlendSrc;
}

// public generated void set_BlendSrc(Uno.Graphics.BlendOperand value) [instance] :179
void FindEdges::BlendSrc(int value)
{
    uStackFrame __("Fuse.Entities.Filters.FindEdges", "set_BlendSrc(Uno.Graphics.BlendOperand)");
    _BlendSrc = value;
}

// public generated float4 get_EdgeColor() [instance] :176
::g::Uno::Float4 FindEdges::EdgeColor()
{
    uStackFrame __("Fuse.Entities.Filters.FindEdges", "get_EdgeColor()");
    return _EdgeColor;
}

// public generated void set_EdgeColor(float4 value) [instance] :176
void FindEdges::EdgeColor(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Entities.Filters.FindEdges", "set_EdgeColor(float4)");
    _EdgeColor = value;
}

// private generated void init_DrawCalls() [instance] :156
void FindEdges::init_DrawCalls()
{
    uStackFrame __("Fuse.Entities.Filters.FindEdges", "init_DrawCalls()");
    OnDraw_VertexData_97ae18b8_9_5_2 = ::g::Uno::Graphics::IndexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer9(uArray::Init<int>(::TYPES[0/*ushort[]*/], 6, 0, 1, 2, 2, 3, 0)), 0);
    OnDraw_VertexData_97ae18b8_9_5_3 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(uArray::Init< ::g::Uno::Float2>(::TYPES[1/*float2[]*/], 4, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 1.0f))), 0);
    _draw_97ae18b8 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseEntities_bundle::FindEdges06a48cc8());
}

// public generated float get_Spread() [instance] :167
float FindEdges::Spread()
{
    uStackFrame __("Fuse.Entities.Filters.FindEdges", "get_Spread()");
    return _Spread;
}

// public generated void set_Spread(float value) [instance] :167
void FindEdges::Spread(float value)
{
    uStackFrame __("Fuse.Entities.Filters.FindEdges", "set_Spread(float)");
    _Spread = value;
}

// public generated float get_Strength() [instance] :170
float FindEdges::Strength()
{
    uStackFrame __("Fuse.Entities.Filters.FindEdges", "get_Strength()");
    return _Strength;
}

// public generated void set_Strength(float value) [instance] :170
void FindEdges::Strength(float value)
{
    uStackFrame __("Fuse.Entities.Filters.FindEdges", "set_Strength(float)");
    _Strength = value;
}

// public FindEdges New() [static] :158
FindEdges* FindEdges::New3()
{
    FindEdges* obj1 = (FindEdges*)uNew(FindEdges_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

}}}} // ::g::Fuse::Entities::Filters
