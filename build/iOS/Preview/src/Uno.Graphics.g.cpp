// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <OpenGL.GL.h>
#include <OpenGL.GLBufferHandle.h>
#include <OpenGL.GLBufferTarget.h>
#include <OpenGL.GLBufferUsage.h>
#include <OpenGL.GLClearBufferMask.h>
#include <OpenGL.GLEnableCap.h>
#include <OpenGL.GLFramebufferHandle.h>
#include <OpenGL.GLFramebufferTarget.h>
#include <OpenGL.GLIntegerName.h>
#include <OpenGL.GLRenderbufferHandle.h>
#include <OpenGL.GLTextureHandle.h>
#include <OpenGL.GLTextureParameterName.h>
#include <OpenGL.GLTextureParameterValue.h>
#include <OpenGL.GLTextureTarget.h>
#include <OpenGL.GLTextureUnit.h>
#include <uBase/Console.h>
#include <uBase/Memory.h>
#include <uImage/Texture.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.FormatException.h>
#include <Uno.Graphics.BlendEquation.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.CompareFunc.h>
#include <Uno.Graphics.CubeFace.h>
#include <Uno.Graphics.DeviceBuffer.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.FormatHelpers.h>
#include <Uno.Graphics.Framebuffer.h>
#include <Uno.Graphics.FramebufferFlags.h>
#include <Uno.Graphics.GraphicsContext.h>
#include <Uno.Graphics.IndexBuffer.h>
#include <Uno.Graphics.IndexType.h>
#include <Uno.Graphics.IndexTypeHelpers.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.PolygonWinding.h>
#include <Uno.Graphics.PrimitiveType.h>
#include <Uno.Graphics.RenderTarget.h>
#include <Uno.Graphics.SamplerState.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.TextureAddressMode.h>
#include <Uno.Graphics.TextureCube.h>
#include <Uno.Graphics.TextureFilter.h>
#include <Uno.Graphics.TextureHelpers.h>
#include <Uno.Graphics.VertexAttributeInfo.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexAttributeTypeHelpers.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Graphics.VideoTexture.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.InvalidOperationException.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.ObjectDisposedException.h>
#include <Uno.Runtime.Implementation.GraphicsContextHandle.h>
#include <Uno.Runtime.Implementation.GraphicsContextImpl.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLHelpers.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLInterop.h>
#include <Uno.String.h>
#include <Uno/Support.h>
#include <XliPlatform/GL.h>
static uString* STRINGS[11];

namespace g{
namespace Uno{
namespace Graphics{

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/graphics/$.uno
// ----------------------------------------------------------------------

// public enum BlendEquation :199
uEnumType* BlendEquation_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Graphics.BlendEquation", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Add", 0LL,
        "Subtract", 1LL,
        "ReverseSubtract", 2LL,
        "Min", 3LL,
        "Max", 4LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/graphics/$.uno
// ----------------------------------------------------------------------

// public enum BlendOperand :185
uEnumType* BlendOperand_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Graphics.BlendOperand", ::g::Uno::Int_typeof(), 10);
    type->SetLiterals(
        "Zero", 0LL,
        "One", 1LL,
        "SrcAlpha", 2LL,
        "OneMinusSrcAlpha", 3LL,
        "SrcColor", 4LL,
        "OneMinusSrcColor", 5LL,
        "DstAlpha", 6LL,
        "OneMinusDstAlpha", 7LL,
        "DstColor", 8LL,
        "OneMinusDstColor", 9LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/graphics/$.uno
// ----------------------------------------------------------------------

// public enum BufferUsage :125
uEnumType* BufferUsage_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Graphics.BufferUsage", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Immutable", 0LL,
        "Dynamic", 1LL,
        "Stream", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/graphics/$.uno
// ----------------------------------------------------------------------

// public enum CompareFunc :208
uEnumType* CompareFunc_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Graphics.CompareFunc", ::g::Uno::Int_typeof(), 8);
    type->SetLiterals(
        "Always", 0LL,
        "Less", 1LL,
        "LessOrEqual", 2LL,
        "Equal", 3LL,
        "NotEqual", 4LL,
        "GreaterOrEqual", 5LL,
        "Greater", 6LL,
        "Never", 7LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/graphics/$.uno
// ----------------------------------------------------------------------

// public enum CubeFace :175
uEnumType* CubeFace_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Graphics.CubeFace", ::g::Uno::Int_typeof(), 6);
    type->SetLiterals(
        "PositiveX", 0LL,
        "NegativeX", 1LL,
        "PositiveY", 2LL,
        "NegativeY", 3LL,
        "PositiveZ", 4LL,
        "NegativeZ", 5LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/graphics/$.uno
// ----------------------------------------------------------------------

// public abstract class DeviceBuffer :9
// {
static void DeviceBuffer_build(uType* type)
{
    ::STRINGS[0] = uString::Const("DeviceBuffer");
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(DeviceBuffer_type, interface0));
    type->SetFields(0,
        ::g::OpenGL::GLBufferHandle_typeof(), offsetof(::g::Uno::Graphics::DeviceBuffer, _GLBufferHandle), 0,
        ::g::OpenGL::GLBufferTarget_typeof(), offsetof(::g::Uno::Graphics::DeviceBuffer, _GLBufferTarget), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Graphics::DeviceBuffer, _IsDisposed), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Graphics::DeviceBuffer, _SizeInBytes), 0,
        ::g::Uno::Graphics::BufferUsage_typeof(), offsetof(::g::Uno::Graphics::DeviceBuffer, _Usage), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("Dispose", NULL, (void*)DeviceBuffer__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_GLBufferHandle", NULL, (void*)DeviceBuffer__get_GLBufferHandle_fn, 0, false, ::g::OpenGL::GLBufferHandle_typeof(), 0),
        new uFunction("get_GLBufferTarget", NULL, (void*)DeviceBuffer__get_GLBufferTarget_fn, 0, false, ::g::OpenGL::GLBufferTarget_typeof(), 0),
        new uFunction("get_IsDisposed", NULL, (void*)DeviceBuffer__get_IsDisposed_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_SizeInBytes", NULL, (void*)DeviceBuffer__get_SizeInBytes_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("Update", NULL, (void*)DeviceBuffer__Update_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Buffer_typeof()),
        new uFunction("get_Usage", NULL, (void*)DeviceBuffer__get_Usage_fn, 0, false, ::g::Uno::Graphics::BufferUsage_typeof(), 0));
}

DeviceBuffer_type* DeviceBuffer_typeof()
{
    static uSStrong<DeviceBuffer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DeviceBuffer);
    options.TypeSize = sizeof(DeviceBuffer_type);
    type = (DeviceBuffer_type*)uClassType::New("Uno.Graphics.DeviceBuffer", options);
    type->fp_build_ = DeviceBuffer_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))DeviceBuffer__Dispose_fn;
    return type;
}

// internal DeviceBuffer(Uno.Graphics.BufferUsage usage) :65
void DeviceBuffer__ctor__fn(DeviceBuffer* __this, int* usage)
{
    __this->ctor_(*usage);
}

// public void Dispose() :76
void DeviceBuffer__Dispose_fn(DeviceBuffer* __this)
{
    __this->Dispose();
}

// public generated extern OpenGL.GLBufferHandle get_GLBufferHandle() :31
void DeviceBuffer__get_GLBufferHandle_fn(DeviceBuffer* __this, uint32_t* __retval)
{
    *__retval = __this->GLBufferHandle();
}

// private generated extern void set_GLBufferHandle(OpenGL.GLBufferHandle value) :32
void DeviceBuffer__set_GLBufferHandle_fn(DeviceBuffer* __this, uint32_t* value)
{
    __this->GLBufferHandle(*value);
}

// public generated extern OpenGL.GLBufferTarget get_GLBufferTarget() :25
void DeviceBuffer__get_GLBufferTarget_fn(DeviceBuffer* __this, int* __retval)
{
    *__retval = __this->GLBufferTarget();
}

// private generated extern void set_GLBufferTarget(OpenGL.GLBufferTarget value) :26
void DeviceBuffer__set_GLBufferTarget_fn(DeviceBuffer* __this, int* value)
{
    __this->GLBufferTarget(*value);
}

// protected extern void GLInit(OpenGL.GLBufferTarget target) :35
void DeviceBuffer__GLInit_fn(DeviceBuffer* __this, int* target)
{
    __this->GLInit(*target);
}

// protected extern void GLInit(OpenGL.GLBufferTarget target, int sizeInBytes) :41
void DeviceBuffer__GLInit1_fn(DeviceBuffer* __this, int* target, int* sizeInBytes)
{
    __this->GLInit1(*target, *sizeInBytes);
}

// protected extern void GLInit(OpenGL.GLBufferTarget target, Uno.Buffer data) :53
void DeviceBuffer__GLInit2_fn(DeviceBuffer* __this, int* target, ::g::Uno::Buffer* data)
{
    __this->GLInit2(*target, data);
}

// public generated bool get_IsDisposed() :72
void DeviceBuffer__get_IsDisposed_fn(DeviceBuffer* __this, bool* __retval)
{
    *__retval = __this->IsDisposed();
}

// private generated void set_IsDisposed(bool value) :73
void DeviceBuffer__set_IsDisposed_fn(DeviceBuffer* __this, bool* value)
{
    __this->IsDisposed(*value);
}

// public generated int get_SizeInBytes() :13
void DeviceBuffer__get_SizeInBytes_fn(DeviceBuffer* __this, int* __retval)
{
    *__retval = __this->SizeInBytes();
}

// private generated void set_SizeInBytes(int value) :14
void DeviceBuffer__set_SizeInBytes_fn(DeviceBuffer* __this, int* value)
{
    __this->SizeInBytes(*value);
}

// public void Update(Uno.Buffer data) :88
void DeviceBuffer__Update_fn(DeviceBuffer* __this, ::g::Uno::Buffer* data)
{
    __this->Update(data);
}

// public generated Uno.Graphics.BufferUsage get_Usage() :19
void DeviceBuffer__get_Usage_fn(DeviceBuffer* __this, int* __retval)
{
    *__retval = __this->Usage();
}

// private generated void set_Usage(Uno.Graphics.BufferUsage value) :20
void DeviceBuffer__set_Usage_fn(DeviceBuffer* __this, int* value)
{
    __this->Usage(*value);
}

// internal DeviceBuffer(Uno.Graphics.BufferUsage usage) [instance] :65
void DeviceBuffer::ctor_(int usage)
{
    uStackFrame __("Uno.Graphics.DeviceBuffer", ".ctor(Uno.Graphics.BufferUsage)");
    Usage(usage);
}

// public void Dispose() [instance] :76
void DeviceBuffer::Dispose()
{
    uStackFrame __("Uno.Graphics.DeviceBuffer", "Dispose()");

    if (IsDisposed())
        U_THROW(::g::Uno::ObjectDisposedException::New4(::STRINGS[0/*"DeviceBuffer"*/]));
    else 
        ::g::OpenGL::GL::DeleteBuffer(GLBufferHandle());

    IsDisposed(true);
}

// public generated extern OpenGL.GLBufferHandle get_GLBufferHandle() [instance] :31
uint32_t DeviceBuffer::GLBufferHandle()
{
    uStackFrame __("Uno.Graphics.DeviceBuffer", "get_GLBufferHandle()");
    return _GLBufferHandle;
}

// private generated extern void set_GLBufferHandle(OpenGL.GLBufferHandle value) [instance] :32
void DeviceBuffer::GLBufferHandle(uint32_t value)
{
    uStackFrame __("Uno.Graphics.DeviceBuffer", "set_GLBufferHandle(OpenGL.GLBufferHandle)");
    _GLBufferHandle = value;
}

// public generated extern OpenGL.GLBufferTarget get_GLBufferTarget() [instance] :25
int DeviceBuffer::GLBufferTarget()
{
    uStackFrame __("Uno.Graphics.DeviceBuffer", "get_GLBufferTarget()");
    return _GLBufferTarget;
}

// private generated extern void set_GLBufferTarget(OpenGL.GLBufferTarget value) [instance] :26
void DeviceBuffer::GLBufferTarget(int value)
{
    uStackFrame __("Uno.Graphics.DeviceBuffer", "set_GLBufferTarget(OpenGL.GLBufferTarget)");
    _GLBufferTarget = value;
}

// protected extern void GLInit(OpenGL.GLBufferTarget target) [instance] :35
void DeviceBuffer::GLInit(int target)
{
    uStackFrame __("Uno.Graphics.DeviceBuffer", "GLInit(OpenGL.GLBufferTarget)");
    GLBufferTarget(target);
    GLBufferHandle(::g::OpenGL::GL::CreateBuffer());
}

// protected extern void GLInit(OpenGL.GLBufferTarget target, int sizeInBytes) [instance] :41
void DeviceBuffer::GLInit1(int target, int sizeInBytes)
{
    uStackFrame __("Uno.Graphics.DeviceBuffer", "GLInit(OpenGL.GLBufferTarget,int)");
    GLBufferTarget(target);
    GLBufferHandle(::g::OpenGL::GL::CreateBuffer());
    SizeInBytes(sizeInBytes);
    ::g::OpenGL::GL::BindBuffer(GLBufferTarget(), GLBufferHandle());
    ::g::OpenGL::GL::BufferData(GLBufferTarget(), sizeInBytes, ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop::ToGLBufferUsage(Usage()));
    ::g::OpenGL::GL::BindBuffer(GLBufferTarget(), ::g::OpenGL::GLBufferHandle::Zero_);
}

// protected extern void GLInit(OpenGL.GLBufferTarget target, Uno.Buffer data) [instance] :53
void DeviceBuffer::GLInit2(int target, ::g::Uno::Buffer* data)
{
    uStackFrame __("Uno.Graphics.DeviceBuffer", "GLInit(OpenGL.GLBufferTarget,Uno.Buffer)");
    GLBufferTarget(target);
    GLBufferHandle(::g::OpenGL::GL::CreateBuffer());
    SizeInBytes(uPtr(data)->SizeInBytes());
    ::g::OpenGL::GL::BindBuffer(GLBufferTarget(), GLBufferHandle());
    ::g::OpenGL::GL::BufferData1(GLBufferTarget(), data, ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop::ToGLBufferUsage(Usage()));
    ::g::OpenGL::GL::BindBuffer(GLBufferTarget(), ::g::OpenGL::GLBufferHandle::Zero_);
}

// public generated bool get_IsDisposed() [instance] :72
bool DeviceBuffer::IsDisposed()
{
    uStackFrame __("Uno.Graphics.DeviceBuffer", "get_IsDisposed()");
    return _IsDisposed;
}

// private generated void set_IsDisposed(bool value) [instance] :73
void DeviceBuffer::IsDisposed(bool value)
{
    uStackFrame __("Uno.Graphics.DeviceBuffer", "set_IsDisposed(bool)");
    _IsDisposed = value;
}

// public generated int get_SizeInBytes() [instance] :13
int DeviceBuffer::SizeInBytes()
{
    uStackFrame __("Uno.Graphics.DeviceBuffer", "get_SizeInBytes()");
    return _SizeInBytes;
}

// private generated void set_SizeInBytes(int value) [instance] :14
void DeviceBuffer::SizeInBytes(int value)
{
    uStackFrame __("Uno.Graphics.DeviceBuffer", "set_SizeInBytes(int)");
    _SizeInBytes = value;
}

// public void Update(Uno.Buffer data) [instance] :88
void DeviceBuffer::Update(::g::Uno::Buffer* data)
{
    uStackFrame __("Uno.Graphics.DeviceBuffer", "Update(Uno.Buffer)");

    if (IsDisposed())
        U_THROW(::g::Uno::ObjectDisposedException::New4(::STRINGS[0/*"DeviceBuffer"*/]));
    else 
    {
        ::g::OpenGL::GL::BindBuffer(GLBufferTarget(), GLBufferHandle());

        if (uPtr(data)->SizeInBytes() <= SizeInBytes())
            ::g::OpenGL::GL::BufferSubData(GLBufferTarget(), 0, data);
        else 
        {
            ::g::OpenGL::GL::BufferData1(GLBufferTarget(), data, ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop::ToGLBufferUsage(Usage()));
            SizeInBytes(uPtr(data)->SizeInBytes());
        }

        ::g::OpenGL::GL::BindBuffer(GLBufferTarget(), ::g::OpenGL::GLBufferHandle::Zero_);
    }
}

// public generated Uno.Graphics.BufferUsage get_Usage() [instance] :19
int DeviceBuffer::Usage()
{
    uStackFrame __("Uno.Graphics.DeviceBuffer", "get_Usage()");
    return _Usage;
}

// private generated void set_Usage(Uno.Graphics.BufferUsage value) [instance] :20
void DeviceBuffer::Usage(int value)
{
    uStackFrame __("Uno.Graphics.DeviceBuffer", "set_Usage(Uno.Graphics.BufferUsage)");
    _Usage = value;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/graphics/$.uno
// ----------------------------------------------------------------------

// public enum Format :245
uEnumType* Format_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Graphics.Format", ::g::Uno::Int_typeof(), 7);
    type->SetLiterals(
        "Unknown", 0LL,
        "L8", 1LL,
        "LA88", 2LL,
        "RGBA8888", 3LL,
        "RGBA4444", 4LL,
        "RGBA5551", 5LL,
        "RGB565", 6LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/graphics/$.uno
// ----------------------------------------------------------------------

// public static class FormatHelpers :265
// {
static void FormatHelpers_build(uType* type)
{
    ::STRINGS[1] = uString::Const("Invalid format <");
    ::STRINGS[2] = uString::Const(">");
    type->Reflection.SetFunctions(1,
        new uFunction("GetStrideInBytes", NULL, (void*)FormatHelpers__GetStrideInBytes_fn, 0, true, ::g::Uno::Int_typeof(), 1, ::g::Uno::Graphics::Format_typeof()));
}

uClassType* FormatHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Graphics.FormatHelpers", options);
    type->fp_build_ = FormatHelpers_build;
    return type;
}

// public static int GetStrideInBytes(Uno.Graphics.Format format) :267
void FormatHelpers__GetStrideInBytes_fn(int* format, int* __retval)
{
    *__retval = FormatHelpers::GetStrideInBytes(*format);
}

// public static int GetStrideInBytes(Uno.Graphics.Format format) [static] :267
int FormatHelpers::GetStrideInBytes(int format)
{
    uStackFrame __("Uno.Graphics.FormatHelpers", "GetStrideInBytes(Uno.Graphics.Format)");

    switch (format)
    {
        case 1:
            return 1;
        case 2:
            return 2;
        case 3:
            return 4;
        case 4:
            return 2;
        case 5:
            return 2;
        case 6:
            return 2;
    }

    U_THROW(::g::Uno::FormatException::New4(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[1/*"Invalid for...*/], uBox<int>(::g::Uno::Graphics::Format_typeof(), format)), ::STRINGS[2/*">"*/])));
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/graphics/$.uno
// ----------------------------------------------------------------------

// public sealed class Framebuffer :297
// {
static void Framebuffer_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Framebuffer_type, interface0));
    type->SetFields(0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(::g::Uno::Graphics::Framebuffer, _ColorBuffer), 0,
        ::g::Uno::Graphics::RenderTarget_typeof(), offsetof(::g::Uno::Graphics::Framebuffer, _RenderTarget), 0);
    type->Reflection.SetFunctions(8,
        new uFunction("get_ColorBuffer", NULL, (void*)Framebuffer__get_ColorBuffer_fn, 0, false, ::g::Uno::Graphics::Texture2D_typeof(), 0),
        new uFunction("Dispose", NULL, (void*)Framebuffer__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Format", NULL, (void*)Framebuffer__get_Format_fn, 0, false, ::g::Uno::Graphics::Format_typeof(), 0),
        new uFunction("get_HasDepth", NULL, (void*)Framebuffer__get_HasDepth_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Framebuffer__New1_fn, 0, true, Framebuffer_typeof(), 3, ::g::Uno::Int2_typeof(), ::g::Uno::Graphics::Format_typeof(), ::g::Uno::Graphics::FramebufferFlags_typeof()),
        new uFunction("get_RenderTarget", NULL, (void*)Framebuffer__get_RenderTarget_fn, 0, false, ::g::Uno::Graphics::RenderTarget_typeof(), 0),
        new uFunction("get_Size", NULL, (void*)Framebuffer__get_Size_fn, 0, false, ::g::Uno::Int2_typeof(), 0),
        new uFunction("get_SupportsMipmap", NULL, (void*)Framebuffer__get_SupportsMipmap_fn, 0, false, ::g::Uno::Bool_typeof(), 0));
}

Framebuffer_type* Framebuffer_typeof()
{
    static uSStrong<Framebuffer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Framebuffer);
    options.TypeSize = sizeof(Framebuffer_type);
    type = (Framebuffer_type*)uClassType::New("framebuffer", options);
    type->fp_build_ = Framebuffer_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))Framebuffer__Dispose_fn;
    return type;
}

// public Framebuffer(int2 size, Uno.Graphics.Format format, Uno.Graphics.FramebufferFlags flags) :331
void Framebuffer__ctor__fn(Framebuffer* __this, ::g::Uno::Int2* size, int* format, int* flags)
{
    __this->ctor_(*size, *format, *flags);
}

// public generated texture2D get_ColorBuffer() :301
void Framebuffer__get_ColorBuffer_fn(Framebuffer* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    *__retval = __this->ColorBuffer();
}

// private generated void set_ColorBuffer(texture2D value) :302
void Framebuffer__set_ColorBuffer_fn(Framebuffer* __this, ::g::Uno::Graphics::Texture2D* value)
{
    __this->ColorBuffer(value);
}

// public void Dispose() :337
void Framebuffer__Dispose_fn(Framebuffer* __this)
{
    __this->Dispose();
}

// public Uno.Graphics.Format get_Format() :328
void Framebuffer__get_Format_fn(Framebuffer* __this, int* __retval)
{
    *__retval = __this->Format();
}

// public bool get_HasDepth() :318
void Framebuffer__get_HasDepth_fn(Framebuffer* __this, bool* __retval)
{
    *__retval = __this->HasDepth();
}

// public Framebuffer New(int2 size, Uno.Graphics.Format format, Uno.Graphics.FramebufferFlags flags) :331
void Framebuffer__New1_fn(::g::Uno::Int2* size, int* format, int* flags, Framebuffer** __retval)
{
    *__retval = Framebuffer::New1(*size, *format, *flags);
}

// public generated Uno.Graphics.RenderTarget get_RenderTarget() :307
void Framebuffer__get_RenderTarget_fn(Framebuffer* __this, ::g::Uno::Graphics::RenderTarget** __retval)
{
    *__retval = __this->RenderTarget();
}

// private generated void set_RenderTarget(Uno.Graphics.RenderTarget value) :308
void Framebuffer__set_RenderTarget_fn(Framebuffer* __this, ::g::Uno::Graphics::RenderTarget* value)
{
    __this->RenderTarget(value);
}

// public int2 get_Size() :313
void Framebuffer__get_Size_fn(Framebuffer* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->Size();
}

// public bool get_SupportsMipmap() :323
void Framebuffer__get_SupportsMipmap_fn(Framebuffer* __this, bool* __retval)
{
    *__retval = __this->SupportsMipmap();
}

// public Framebuffer(int2 size, Uno.Graphics.Format format, Uno.Graphics.FramebufferFlags flags) [instance] :331
void Framebuffer::ctor_(::g::Uno::Int2 size, int format, int flags)
{
    uStackFrame __("framebuffer", ".ctor(int2,Uno.Graphics.Format,Uno.Graphics.FramebufferFlags)");
    ColorBuffer(::g::Uno::Graphics::Texture2D::New1(size, format, (flags & 2) == 2));
    RenderTarget(::g::Uno::Graphics::RenderTarget::Create(ColorBuffer(), 0, (flags & 1) == 1));
}

// public generated texture2D get_ColorBuffer() [instance] :301
::g::Uno::Graphics::Texture2D* Framebuffer::ColorBuffer()
{
    uStackFrame __("framebuffer", "get_ColorBuffer()");
    return _ColorBuffer;
}

// private generated void set_ColorBuffer(texture2D value) [instance] :302
void Framebuffer::ColorBuffer(::g::Uno::Graphics::Texture2D* value)
{
    uStackFrame __("framebuffer", "set_ColorBuffer(texture2D)");
    _ColorBuffer = value;
}

// public void Dispose() [instance] :337
void Framebuffer::Dispose()
{
    uStackFrame __("framebuffer", "Dispose()");
    uPtr(ColorBuffer())->Dispose();
    uPtr(RenderTarget())->Dispose();
}

// public Uno.Graphics.Format get_Format() [instance] :328
int Framebuffer::Format()
{
    uStackFrame __("framebuffer", "get_Format()");
    return uPtr(ColorBuffer())->Format();
}

// public bool get_HasDepth() [instance] :318
bool Framebuffer::HasDepth()
{
    uStackFrame __("framebuffer", "get_HasDepth()");
    return uPtr(RenderTarget())->HasDepth();
}

// public generated Uno.Graphics.RenderTarget get_RenderTarget() [instance] :307
::g::Uno::Graphics::RenderTarget* Framebuffer::RenderTarget()
{
    uStackFrame __("framebuffer", "get_RenderTarget()");
    return _RenderTarget;
}

// private generated void set_RenderTarget(Uno.Graphics.RenderTarget value) [instance] :308
void Framebuffer::RenderTarget(::g::Uno::Graphics::RenderTarget* value)
{
    uStackFrame __("framebuffer", "set_RenderTarget(Uno.Graphics.RenderTarget)");
    _RenderTarget = value;
}

// public int2 get_Size() [instance] :313
::g::Uno::Int2 Framebuffer::Size()
{
    uStackFrame __("framebuffer", "get_Size()");
    return uPtr(RenderTarget())->Size();
}

// public bool get_SupportsMipmap() [instance] :323
bool Framebuffer::SupportsMipmap()
{
    uStackFrame __("framebuffer", "get_SupportsMipmap()");
    return uPtr(ColorBuffer())->SupportsMipmap();
}

// public Framebuffer New(int2 size, Uno.Graphics.Format format, Uno.Graphics.FramebufferFlags flags) [static] :331
Framebuffer* Framebuffer::New1(::g::Uno::Int2 size, int format, int flags)
{
    Framebuffer* obj1 = (Framebuffer*)uNew(Framebuffer_typeof());
    obj1->ctor_(size, format, flags);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/graphics/$.uno
// ----------------------------------------------------------------------

// public enum FramebufferFlags :290
uEnumType* FramebufferFlags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Graphics.FramebufferFlags", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "DepthBuffer", 1LL,
        "Mipmap", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/graphics/$.uno
// ----------------------------------------------------------------------

// public sealed class GraphicsContext :360
// {
static void GraphicsContext_build(uType* type)
{
    ::STRINGS[3] = uString::Const("renderTarget");
    type->SetFields(0,
        ::g::Uno::Graphics::RenderTarget_typeof(), offsetof(::g::Uno::Graphics::GraphicsContext, _backbuffer), 0,
        ::g::Uno::Runtime::Implementation::GraphicsContextHandle_typeof(), offsetof(::g::Uno::Graphics::GraphicsContext, _handle), 0,
        ::g::Uno::Graphics::RenderTarget_typeof(), offsetof(::g::Uno::Graphics::GraphicsContext, _renderTarget), 0,
        ::g::Uno::Recti_typeof(), offsetof(::g::Uno::Graphics::GraphicsContext, _scissor), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Graphics::GraphicsContext, _scissorEnabled), 0,
        ::g::Uno::Recti_typeof(), offsetof(::g::Uno::Graphics::GraphicsContext, _viewport), 0);
    type->Reflection.SetFunctions(9,
        new uFunction("get_Backbuffer", NULL, (void*)GraphicsContext__get_Backbuffer_fn, 0, false, ::g::Uno::Graphics::RenderTarget_typeof(), 0),
        new uFunction("Clear", NULL, (void*)GraphicsContext__Clear_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float4_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("get_RenderTarget", NULL, (void*)GraphicsContext__get_RenderTarget_fn, 0, false, ::g::Uno::Graphics::RenderTarget_typeof(), 0),
        new uFunction("get_Scissor", NULL, (void*)GraphicsContext__get_Scissor_fn, 0, false, ::g::Uno::Recti_typeof(), 0),
        new uFunction("set_Scissor", NULL, (void*)GraphicsContext__set_Scissor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Recti_typeof()),
        new uFunction("SetRenderTarget", NULL, (void*)GraphicsContext__SetRenderTarget_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Graphics::RenderTarget_typeof()),
        new uFunction("SetRenderTarget", NULL, (void*)GraphicsContext__SetRenderTarget1_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Graphics::RenderTarget_typeof(), ::g::Uno::Recti_typeof(), ::g::Uno::Recti_typeof()),
        new uFunction("get_Viewport", NULL, (void*)GraphicsContext__get_Viewport_fn, 0, false, ::g::Uno::Recti_typeof(), 0),
        new uFunction("set_Viewport", NULL, (void*)GraphicsContext__set_Viewport_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Recti_typeof()));
}

uType* GraphicsContext_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(GraphicsContext);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Graphics.GraphicsContext", options);
    type->fp_build_ = GraphicsContext_build;
    type->fp_ctor_ = (void*)GraphicsContext__New1_fn;
    return type;
}

// internal GraphicsContext() :371
void GraphicsContext__ctor__fn(GraphicsContext* __this)
{
    __this->ctor_();
}

// public Uno.Graphics.RenderTarget get_Backbuffer() :409
void GraphicsContext__get_Backbuffer_fn(GraphicsContext* __this, ::g::Uno::Graphics::RenderTarget** __retval)
{
    *__retval = __this->Backbuffer();
}

// public void Clear(float4 color, float depth) :519
void GraphicsContext__Clear_fn(GraphicsContext* __this, ::g::Uno::Float4* color, float* depth)
{
    __this->Clear(*color, *depth);
}

// internal GraphicsContext New() :371
void GraphicsContext__New1_fn(GraphicsContext** __retval)
{
    *__retval = GraphicsContext::New1();
}

// public Uno.Graphics.RenderTarget get_RenderTarget() :414
void GraphicsContext__get_RenderTarget_fn(GraphicsContext* __this, ::g::Uno::Graphics::RenderTarget** __retval)
{
    *__retval = __this->RenderTarget();
}

// public Uno.Recti get_Scissor() :422
void GraphicsContext__get_Scissor_fn(GraphicsContext* __this, ::g::Uno::Recti* __retval)
{
    *__retval = __this->Scissor();
}

// public void set_Scissor(Uno.Recti value) :423
void GraphicsContext__set_Scissor_fn(GraphicsContext* __this, ::g::Uno::Recti* value)
{
    __this->Scissor(*value);
}

// public void SetRenderTarget(Uno.Graphics.RenderTarget renderTarget) :496
void GraphicsContext__SetRenderTarget_fn(GraphicsContext* __this, ::g::Uno::Graphics::RenderTarget* renderTarget)
{
    __this->SetRenderTarget(renderTarget);
}

// public void SetRenderTarget(Uno.Graphics.RenderTarget renderTarget, Uno.Recti viewport, Uno.Recti scissor) :505
void GraphicsContext__SetRenderTarget1_fn(GraphicsContext* __this, ::g::Uno::Graphics::RenderTarget* renderTarget, ::g::Uno::Recti* viewport, ::g::Uno::Recti* scissor)
{
    __this->SetRenderTarget1(renderTarget, *viewport, *scissor);
}

// internal void UpdateBackbuffer() :378
void GraphicsContext__UpdateBackbuffer_fn(GraphicsContext* __this)
{
    __this->UpdateBackbuffer();
}

// public Uno.Recti get_Viewport() :466
void GraphicsContext__get_Viewport_fn(GraphicsContext* __this, ::g::Uno::Recti* __retval)
{
    *__retval = __this->Viewport();
}

// public void set_Viewport(Uno.Recti value) :467
void GraphicsContext__set_Viewport_fn(GraphicsContext* __this, ::g::Uno::Recti* value)
{
    __this->Viewport(*value);
}

// internal GraphicsContext() [instance] :371
void GraphicsContext::ctor_()
{
    uStackFrame __("Uno.Graphics.GraphicsContext", ".ctor()");
    _handle = ::g::Uno::Runtime::Implementation::GraphicsContextImpl::GetInstance();
    _renderTarget = (_backbuffer = ::g::Uno::Graphics::RenderTarget::New1());
    UpdateBackbuffer();
}

// public Uno.Graphics.RenderTarget get_Backbuffer() [instance] :409
::g::Uno::Graphics::RenderTarget* GraphicsContext::Backbuffer()
{
    uStackFrame __("Uno.Graphics.GraphicsContext", "get_Backbuffer()");
    return _backbuffer;
}

// public void Clear(float4 color, float depth) [instance] :519
void GraphicsContext::Clear(::g::Uno::Float4 color, float depth)
{
    uStackFrame __("Uno.Graphics.GraphicsContext", "Clear(float4,float)");
    ::g::OpenGL::GL::ClearDepth(depth);
    ::g::OpenGL::GL::ClearColor(color.X, color.Y, color.Z, color.W);
    ::g::OpenGL::GL::Clear(17664);
}

// public Uno.Graphics.RenderTarget get_RenderTarget() [instance] :414
::g::Uno::Graphics::RenderTarget* GraphicsContext::RenderTarget()
{
    uStackFrame __("Uno.Graphics.GraphicsContext", "get_RenderTarget()");
    return _renderTarget;
}

// public Uno.Recti get_Scissor() [instance] :422
::g::Uno::Recti GraphicsContext::Scissor()
{
    uStackFrame __("Uno.Graphics.GraphicsContext", "get_Scissor()");
    return _scissor;
}

// public void set_Scissor(Uno.Recti value) [instance] :423
void GraphicsContext::Scissor(::g::Uno::Recti value)
{
    uStackFrame __("Uno.Graphics.GraphicsContext", "set_Scissor(Uno.Recti)");

    if (!_scissorEnabled)
    {
        ::g::OpenGL::GL::Enable(3089);
        _scissorEnabled = true;
    }

    _scissor = value;

    if (_renderTarget == _backbuffer)
    {
        ::g::Uno::Int2 offset = ::g::Uno::Runtime::Implementation::GraphicsContextImpl::GetBackbufferOffset(_handle);
        int realFbHeight = ::g::Uno::Runtime::Implementation::GraphicsContextImpl::GetRealBackbufferHeight(_handle);
        ::g::Uno::Recti offsetScissor = ::g::Uno::Recti__New2(::g::Uno::Int2__op_Addition1(_scissor.Position(), offset), _scissor.Size());
        ::g::Uno::Recti currentScissor = ::g::Uno::Runtime::Implementation::GraphicsContextImpl::GetBackbufferScissor(_handle);
        ::g::Uno::Recti clippedScissor = ::g::Uno::Recti__New1(::g::Uno::Math::Max8(offsetScissor.Left, currentScissor.Left), ::g::Uno::Math::Max8(offsetScissor.Top, currentScissor.Top), ::g::Uno::Math::Min8(offsetScissor.Right, currentScissor.Right), ::g::Uno::Math::Min8(offsetScissor.Bottom, currentScissor.Bottom));
        ::g::OpenGL::GL::Scissor(clippedScissor.Left, realFbHeight - clippedScissor.Bottom, ::g::Uno::Math::Max8(0, clippedScissor.Size().X), ::g::Uno::Math::Max8(0, clippedScissor.Size().Y));
    }
    else 
        ::g::OpenGL::GL::Scissor(_scissor.Left, uPtr(_renderTarget)->Size().Y - _scissor.Bottom, ::g::Uno::Math::Max8(0, _scissor.Size().X), ::g::Uno::Math::Max8(0, _scissor.Size().Y));
}

// public void SetRenderTarget(Uno.Graphics.RenderTarget renderTarget) [instance] :496
void GraphicsContext::SetRenderTarget(::g::Uno::Graphics::RenderTarget* renderTarget)
{
    uStackFrame __("Uno.Graphics.GraphicsContext", "SetRenderTarget(Uno.Graphics.RenderTarget)");

    if (renderTarget == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[3/*"renderTarget"*/]));

    ::g::Uno::Recti full = ::g::Uno::Recti__New2(::g::Uno::Int2__New1(0), uPtr(renderTarget)->Size());
    SetRenderTarget1(renderTarget, full, full);
}

// public void SetRenderTarget(Uno.Graphics.RenderTarget renderTarget, Uno.Recti viewport, Uno.Recti scissor) [instance] :505
void GraphicsContext::SetRenderTarget1(::g::Uno::Graphics::RenderTarget* renderTarget, ::g::Uno::Recti viewport, ::g::Uno::Recti scissor)
{
    uStackFrame __("Uno.Graphics.GraphicsContext", "SetRenderTarget(Uno.Graphics.RenderTarget,Uno.Recti,Uno.Recti)");

    if (renderTarget == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[3/*"renderTarget"*/]));

    _renderTarget = renderTarget;
    ::g::OpenGL::GL::BindFramebuffer(36160, uPtr(_renderTarget)->GLFramebufferHandle());
    Viewport(viewport);
    Scissor(scissor);
}

// internal void UpdateBackbuffer() [instance] :378
void GraphicsContext::UpdateBackbuffer()
{
    uStackFrame __("Uno.Graphics.GraphicsContext", "UpdateBackbuffer()");
    uPtr(_backbuffer)->GLFramebufferHandle(::g::Uno::Runtime::Implementation::GraphicsContextImpl::GetBackbufferGLHandle(_handle));
    uPtr(_backbuffer)->Size(::g::Uno::Runtime::Implementation::GraphicsContextImpl::GetBackbufferSize(_handle));
    uPtr(_backbuffer)->HasDepth(true);
}

// public Uno.Recti get_Viewport() [instance] :466
::g::Uno::Recti GraphicsContext::Viewport()
{
    uStackFrame __("Uno.Graphics.GraphicsContext", "get_Viewport()");
    return _viewport;
}

// public void set_Viewport(Uno.Recti value) [instance] :467
void GraphicsContext::Viewport(::g::Uno::Recti value)
{
    uStackFrame __("Uno.Graphics.GraphicsContext", "set_Viewport(Uno.Recti)");
    _viewport = value;

    if (_renderTarget == _backbuffer)
    {
        ::g::Uno::Int2 offset = ::g::Uno::Runtime::Implementation::GraphicsContextImpl::GetBackbufferOffset(_handle);
        int realFbHeight = ::g::Uno::Runtime::Implementation::GraphicsContextImpl::GetRealBackbufferHeight(_handle);
        ::g::Uno::Recti offsetViewport = ::g::Uno::Recti__New2(::g::Uno::Int2__op_Addition1(_viewport.Position(), offset), _viewport.Size());
        ::g::OpenGL::GL::Viewport(offsetViewport.Left, realFbHeight - offsetViewport.Bottom, ::g::Uno::Math::Max8(0, offsetViewport.Size().X), ::g::Uno::Math::Max8(0, offsetViewport.Size().Y));
    }
    else 
        ::g::OpenGL::GL::Viewport(_viewport.Left, uPtr(_renderTarget)->Size().Y - _viewport.Bottom, ::g::Uno::Math::Max8(0, _viewport.Size().X), ::g::Uno::Math::Max8(0, _viewport.Size().Y));
}

// internal GraphicsContext New() [static] :371
GraphicsContext* GraphicsContext::New1()
{
    GraphicsContext* obj1 = (GraphicsContext*)uNew(GraphicsContext_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/graphics/$.uno
// ----------------------------------------------------------------------

// public sealed class IndexBuffer :539
// {
static void IndexBuffer_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Graphics::DeviceBuffer_type, interface0));
    type->SetFields(5);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)IndexBuffer__New1_fn, 0, true, IndexBuffer_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Graphics::BufferUsage_typeof()),
        new uFunction(".ctor", NULL, (void*)IndexBuffer__New2_fn, 0, true, IndexBuffer_typeof(), 2, ::g::Uno::Buffer_typeof(), ::g::Uno::Graphics::BufferUsage_typeof()));
}

::g::Uno::Graphics::DeviceBuffer_type* IndexBuffer_typeof()
{
    static uSStrong< ::g::Uno::Graphics::DeviceBuffer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Graphics::DeviceBuffer_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(IndexBuffer);
    options.TypeSize = sizeof(::g::Uno::Graphics::DeviceBuffer_type);
    type = (::g::Uno::Graphics::DeviceBuffer_type*)uClassType::New("Uno.Graphics.IndexBuffer", options);
    type->fp_build_ = IndexBuffer_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::Graphics::DeviceBuffer__Dispose_fn;
    return type;
}

// public IndexBuffer(int sizeInBytes, Uno.Graphics.BufferUsage usage) :550
void IndexBuffer__ctor_1_fn(IndexBuffer* __this, int* sizeInBytes, int* usage)
{
    __this->ctor_1(*sizeInBytes, *usage);
}

// public IndexBuffer(Uno.Buffer data, Uno.Graphics.BufferUsage usage) :559
void IndexBuffer__ctor_2_fn(IndexBuffer* __this, ::g::Uno::Buffer* data, int* usage)
{
    __this->ctor_2(data, *usage);
}

// public IndexBuffer New(int sizeInBytes, Uno.Graphics.BufferUsage usage) :550
void IndexBuffer__New1_fn(int* sizeInBytes, int* usage, IndexBuffer** __retval)
{
    *__retval = IndexBuffer::New1(*sizeInBytes, *usage);
}

// public IndexBuffer New(Uno.Buffer data, Uno.Graphics.BufferUsage usage) :559
void IndexBuffer__New2_fn(::g::Uno::Buffer* data, int* usage, IndexBuffer** __retval)
{
    *__retval = IndexBuffer::New2(data, *usage);
}

// public IndexBuffer(int sizeInBytes, Uno.Graphics.BufferUsage usage) [instance] :550
void IndexBuffer::ctor_1(int sizeInBytes, int usage)
{
    uStackFrame __("Uno.Graphics.IndexBuffer", ".ctor(int,Uno.Graphics.BufferUsage)");
    ctor_(usage);
    GLInit1(34963, sizeInBytes);
}

// public IndexBuffer(Uno.Buffer data, Uno.Graphics.BufferUsage usage) [instance] :559
void IndexBuffer::ctor_2(::g::Uno::Buffer* data, int usage)
{
    uStackFrame __("Uno.Graphics.IndexBuffer", ".ctor(Uno.Buffer,Uno.Graphics.BufferUsage)");
    ctor_(usage);
    GLInit2(34963, data);
}

// public IndexBuffer New(int sizeInBytes, Uno.Graphics.BufferUsage usage) [static] :550
IndexBuffer* IndexBuffer::New1(int sizeInBytes, int usage)
{
    IndexBuffer* obj2 = (IndexBuffer*)uNew(IndexBuffer_typeof());
    obj2->ctor_1(sizeInBytes, usage);
    return obj2;
}

// public IndexBuffer New(Uno.Buffer data, Uno.Graphics.BufferUsage usage) [static] :559
IndexBuffer* IndexBuffer::New2(::g::Uno::Buffer* data, int usage)
{
    IndexBuffer* obj3 = (IndexBuffer*)uNew(IndexBuffer_typeof());
    obj3->ctor_2(data, usage);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/graphics/$.uno
// ----------------------------------------------------------------------

// public enum IndexType :141
uEnumType* IndexType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Graphics.IndexType", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Undefined", 0LL,
        "Byte", 1LL,
        "UShort", 2LL,
        "UInt", 4LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/graphics/$.uno
// ----------------------------------------------------------------------

// public static class IndexTypeHelpers :593
// {
static void IndexTypeHelpers_build(uType* type)
{
    ::STRINGS[4] = uString::Const("Invalid IndexType <");
    ::STRINGS[2] = uString::Const(">");
    type->Reflection.SetFunctions(1,
        new uFunction("GetStrideInBytes", NULL, (void*)IndexTypeHelpers__GetStrideInBytes_fn, 0, true, ::g::Uno::Int_typeof(), 1, ::g::Uno::Graphics::IndexType_typeof()));
}

uClassType* IndexTypeHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Graphics.IndexTypeHelpers", options);
    type->fp_build_ = IndexTypeHelpers_build;
    return type;
}

// public static int GetStrideInBytes(Uno.Graphics.IndexType type) :595
void IndexTypeHelpers__GetStrideInBytes_fn(int* type, int* __retval)
{
    *__retval = IndexTypeHelpers::GetStrideInBytes(*type);
}

// public static int GetStrideInBytes(Uno.Graphics.IndexType type) [static] :595
int IndexTypeHelpers::GetStrideInBytes(int type)
{
    uStackFrame __("Uno.Graphics.IndexTypeHelpers", "GetStrideInBytes(Uno.Graphics.IndexType)");

    switch (type)
    {
        case 1:
        case 2:
        case 4:
            return type;
        default:
            U_THROW(::g::Uno::FormatException::New4(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[4/*"Invalid Ind...*/], uBox<int>(::g::Uno::Graphics::IndexType_typeof(), type)), ::STRINGS[2/*">"*/])));
    }
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/graphics/$.uno
// ----------------------------------------------------------------------

// public enum PolygonFace :230
uEnumType* PolygonFace_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Graphics.PolygonFace", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "None", 0LL,
        "Front", 1LL,
        "Back", 2LL,
        "Both", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/graphics/$.uno
// ----------------------------------------------------------------------

// public enum PolygonWinding :238
uEnumType* PolygonWinding_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Graphics.PolygonWinding", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Clockwise", 0LL,
        "CounterClockwise", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/graphics/$.uno
// ----------------------------------------------------------------------

// public enum PrimitiveType :132
uEnumType* PrimitiveType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Graphics.PrimitiveType", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Triangles", 1LL,
        "Lines", 2LL,
        "Points", 3LL,
        "TriangleStrip", 4LL,
        "LineStrip", 5LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/graphics/$.uno
// ----------------------------------------------------------------------

// public sealed class RenderTarget :621
// {
static void RenderTarget_build(uType* type)
{
    ::STRINGS[5] = uString::Const("RenderTarget");
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(RenderTarget_type, interface0));
    type->SetFields(0,
        ::g::OpenGL::GLRenderbufferHandle_typeof(), offsetof(::g::Uno::Graphics::RenderTarget, _GLDepthBufferHandle), 0,
        ::g::OpenGL::GLFramebufferHandle_typeof(), offsetof(::g::Uno::Graphics::RenderTarget, _GLFramebufferHandle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Graphics::RenderTarget, _HasDepth), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Graphics::RenderTarget, _IsDisposed), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Graphics::RenderTarget, _OwnsGLDepthBufferHandle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Graphics::RenderTarget, _OwnsGLFramebufferHandle), 0,
        ::g::Uno::Int2_typeof(), offsetof(::g::Uno::Graphics::RenderTarget, _Size), 0);
    type->Reflection.SetFunctions(8,
        new uFunction("Create", NULL, (void*)RenderTarget__Create_fn, 0, true, RenderTarget_typeof(), 3, ::g::Uno::Graphics::Texture2D_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("Create", NULL, (void*)RenderTarget__Create1_fn, 0, true, RenderTarget_typeof(), 4, ::g::Uno::Graphics::TextureCube_typeof(), ::g::Uno::Graphics::CubeFace_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("Dispose", NULL, (void*)RenderTarget__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_GLDepthBufferHandle", NULL, (void*)RenderTarget__get_GLDepthBufferHandle_fn, 0, false, ::g::OpenGL::GLRenderbufferHandle_typeof(), 0),
        new uFunction("get_GLFramebufferHandle", NULL, (void*)RenderTarget__get_GLFramebufferHandle_fn, 0, false, ::g::OpenGL::GLFramebufferHandle_typeof(), 0),
        new uFunction("get_HasDepth", NULL, (void*)RenderTarget__get_HasDepth_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsDisposed", NULL, (void*)RenderTarget__get_IsDisposed_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Size", NULL, (void*)RenderTarget__get_Size_fn, 0, false, ::g::Uno::Int2_typeof(), 0));
}

RenderTarget_type* RenderTarget_typeof()
{
    static uSStrong<RenderTarget_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(RenderTarget);
    options.TypeSize = sizeof(RenderTarget_type);
    type = (RenderTarget_type*)uClassType::New("Uno.Graphics.RenderTarget", options);
    type->fp_build_ = RenderTarget_build;
    type->fp_ctor_ = (void*)RenderTarget__New1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))RenderTarget__Dispose_fn;
    return type;
}

// internal RenderTarget() :659
void RenderTarget__ctor__fn(RenderTarget* __this)
{
    __this->ctor_();
}

// public static Uno.Graphics.RenderTarget Create(texture2D texture, int mip, bool depth) :664
void RenderTarget__Create_fn(::g::Uno::Graphics::Texture2D* texture, int* mip, bool* depth, RenderTarget** __retval)
{
    *__retval = RenderTarget::Create(texture, *mip, *depth);
}

// public static Uno.Graphics.RenderTarget Create(textureCube texture, Uno.Graphics.CubeFace face, int mip, bool depth) :673
void RenderTarget__Create1_fn(::g::Uno::Graphics::TextureCube* texture, int* face, int* mip, bool* depth, RenderTarget** __retval)
{
    *__retval = RenderTarget::Create1(texture, *face, *mip, *depth);
}

// public void Dispose() :687
void RenderTarget__Dispose_fn(RenderTarget* __this)
{
    __this->Dispose();
}

// public generated extern OpenGL.GLRenderbufferHandle get_GLDepthBufferHandle() :643
void RenderTarget__get_GLDepthBufferHandle_fn(RenderTarget* __this, uint32_t* __retval)
{
    *__retval = __this->GLDepthBufferHandle();
}

// internal generated extern void set_GLDepthBufferHandle(OpenGL.GLRenderbufferHandle value) :644
void RenderTarget__set_GLDepthBufferHandle_fn(RenderTarget* __this, uint32_t* value)
{
    __this->GLDepthBufferHandle(*value);
}

// public generated extern OpenGL.GLFramebufferHandle get_GLFramebufferHandle() :637
void RenderTarget__get_GLFramebufferHandle_fn(RenderTarget* __this, uint32_t* __retval)
{
    *__retval = __this->GLFramebufferHandle();
}

// internal generated extern void set_GLFramebufferHandle(OpenGL.GLFramebufferHandle value) :638
void RenderTarget__set_GLFramebufferHandle_fn(RenderTarget* __this, uint32_t* value)
{
    __this->GLFramebufferHandle(*value);
}

// public generated bool get_HasDepth() :631
void RenderTarget__get_HasDepth_fn(RenderTarget* __this, bool* __retval)
{
    *__retval = __this->HasDepth();
}

// internal generated void set_HasDepth(bool value) :632
void RenderTarget__set_HasDepth_fn(RenderTarget* __this, bool* value)
{
    __this->HasDepth(*value);
}

// public generated bool get_IsDisposed() :683
void RenderTarget__get_IsDisposed_fn(RenderTarget* __this, bool* __retval)
{
    *__retval = __this->IsDisposed();
}

// private generated void set_IsDisposed(bool value) :684
void RenderTarget__set_IsDisposed_fn(RenderTarget* __this, bool* value)
{
    __this->IsDisposed(*value);
}

// internal RenderTarget New() :659
void RenderTarget__New1_fn(RenderTarget** __retval)
{
    *__retval = RenderTarget::New1();
}

// internal generated extern bool get_OwnsGLDepthBufferHandle() :655
void RenderTarget__get_OwnsGLDepthBufferHandle_fn(RenderTarget* __this, bool* __retval)
{
    *__retval = __this->OwnsGLDepthBufferHandle();
}

// internal generated extern void set_OwnsGLDepthBufferHandle(bool value) :656
void RenderTarget__set_OwnsGLDepthBufferHandle_fn(RenderTarget* __this, bool* value)
{
    __this->OwnsGLDepthBufferHandle(*value);
}

// internal generated extern bool get_OwnsGLFramebufferHandle() :649
void RenderTarget__get_OwnsGLFramebufferHandle_fn(RenderTarget* __this, bool* __retval)
{
    *__retval = __this->OwnsGLFramebufferHandle();
}

// internal generated extern void set_OwnsGLFramebufferHandle(bool value) :650
void RenderTarget__set_OwnsGLFramebufferHandle_fn(RenderTarget* __this, bool* value)
{
    __this->OwnsGLFramebufferHandle(*value);
}

// public generated int2 get_Size() :625
void RenderTarget__get_Size_fn(RenderTarget* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->Size();
}

// internal generated void set_Size(int2 value) :626
void RenderTarget__set_Size_fn(RenderTarget* __this, ::g::Uno::Int2* value)
{
    __this->Size(*value);
}

// internal RenderTarget() [instance] :659
void RenderTarget::ctor_()
{
}

// public void Dispose() [instance] :687
void RenderTarget::Dispose()
{
    uStackFrame __("Uno.Graphics.RenderTarget", "Dispose()");

    if (IsDisposed())
        U_THROW(::g::Uno::ObjectDisposedException::New4(::STRINGS[5/*"RenderTarget"*/]));
    else 
    {
        if (OwnsGLDepthBufferHandle() && ::g::OpenGL::GLRenderbufferHandle::op_Inequality(GLDepthBufferHandle(), ::g::OpenGL::GLRenderbufferHandle::Zero_))
            ::g::OpenGL::GL::DeleteRenderbuffer(GLDepthBufferHandle());

        if (OwnsGLFramebufferHandle() && ::g::OpenGL::GLFramebufferHandle::op_Inequality(GLFramebufferHandle(), ::g::OpenGL::GLFramebufferHandle::Zero_))
            ::g::OpenGL::GL::DeleteFramebuffer(GLFramebufferHandle());
    }

    IsDisposed(true);
}

// public generated extern OpenGL.GLRenderbufferHandle get_GLDepthBufferHandle() [instance] :643
uint32_t RenderTarget::GLDepthBufferHandle()
{
    uStackFrame __("Uno.Graphics.RenderTarget", "get_GLDepthBufferHandle()");
    return _GLDepthBufferHandle;
}

// internal generated extern void set_GLDepthBufferHandle(OpenGL.GLRenderbufferHandle value) [instance] :644
void RenderTarget::GLDepthBufferHandle(uint32_t value)
{
    uStackFrame __("Uno.Graphics.RenderTarget", "set_GLDepthBufferHandle(OpenGL.GLRenderbufferHandle)");
    _GLDepthBufferHandle = value;
}

// public generated extern OpenGL.GLFramebufferHandle get_GLFramebufferHandle() [instance] :637
uint32_t RenderTarget::GLFramebufferHandle()
{
    uStackFrame __("Uno.Graphics.RenderTarget", "get_GLFramebufferHandle()");
    return _GLFramebufferHandle;
}

// internal generated extern void set_GLFramebufferHandle(OpenGL.GLFramebufferHandle value) [instance] :638
void RenderTarget::GLFramebufferHandle(uint32_t value)
{
    uStackFrame __("Uno.Graphics.RenderTarget", "set_GLFramebufferHandle(OpenGL.GLFramebufferHandle)");
    _GLFramebufferHandle = value;
}

// public generated bool get_HasDepth() [instance] :631
bool RenderTarget::HasDepth()
{
    uStackFrame __("Uno.Graphics.RenderTarget", "get_HasDepth()");
    return _HasDepth;
}

// internal generated void set_HasDepth(bool value) [instance] :632
void RenderTarget::HasDepth(bool value)
{
    uStackFrame __("Uno.Graphics.RenderTarget", "set_HasDepth(bool)");
    _HasDepth = value;
}

// public generated bool get_IsDisposed() [instance] :683
bool RenderTarget::IsDisposed()
{
    uStackFrame __("Uno.Graphics.RenderTarget", "get_IsDisposed()");
    return _IsDisposed;
}

// private generated void set_IsDisposed(bool value) [instance] :684
void RenderTarget::IsDisposed(bool value)
{
    uStackFrame __("Uno.Graphics.RenderTarget", "set_IsDisposed(bool)");
    _IsDisposed = value;
}

// internal generated extern bool get_OwnsGLDepthBufferHandle() [instance] :655
bool RenderTarget::OwnsGLDepthBufferHandle()
{
    uStackFrame __("Uno.Graphics.RenderTarget", "get_OwnsGLDepthBufferHandle()");
    return _OwnsGLDepthBufferHandle;
}

// internal generated extern void set_OwnsGLDepthBufferHandle(bool value) [instance] :656
void RenderTarget::OwnsGLDepthBufferHandle(bool value)
{
    uStackFrame __("Uno.Graphics.RenderTarget", "set_OwnsGLDepthBufferHandle(bool)");
    _OwnsGLDepthBufferHandle = value;
}

// internal generated extern bool get_OwnsGLFramebufferHandle() [instance] :649
bool RenderTarget::OwnsGLFramebufferHandle()
{
    uStackFrame __("Uno.Graphics.RenderTarget", "get_OwnsGLFramebufferHandle()");
    return _OwnsGLFramebufferHandle;
}

// internal generated extern void set_OwnsGLFramebufferHandle(bool value) [instance] :650
void RenderTarget::OwnsGLFramebufferHandle(bool value)
{
    uStackFrame __("Uno.Graphics.RenderTarget", "set_OwnsGLFramebufferHandle(bool)");
    _OwnsGLFramebufferHandle = value;
}

// public generated int2 get_Size() [instance] :625
::g::Uno::Int2 RenderTarget::Size()
{
    uStackFrame __("Uno.Graphics.RenderTarget", "get_Size()");
    return _Size;
}

// internal generated void set_Size(int2 value) [instance] :626
void RenderTarget::Size(::g::Uno::Int2 value)
{
    uStackFrame __("Uno.Graphics.RenderTarget", "set_Size(int2)");
    _Size = value;
}

// public static Uno.Graphics.RenderTarget Create(texture2D texture, int mip, bool depth) [static] :664
RenderTarget* RenderTarget::Create(::g::Uno::Graphics::Texture2D* texture, int mip, bool depth)
{
    uStackFrame __("Uno.Graphics.RenderTarget", "Create(texture2D,int,bool)");
    return ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLHelpers::CreateRenderTarget(3553, uPtr(texture)->GLTextureHandle(), mip, ::g::Uno::Graphics::TextureHelpers::GetMipSize(texture, mip), depth);
}

// public static Uno.Graphics.RenderTarget Create(textureCube texture, Uno.Graphics.CubeFace face, int mip, bool depth) [static] :673
RenderTarget* RenderTarget::Create1(::g::Uno::Graphics::TextureCube* texture, int face, int mip, bool depth)
{
    uStackFrame __("Uno.Graphics.RenderTarget", "Create(textureCube,Uno.Graphics.CubeFace,int,bool)");
    return ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLHelpers::CreateRenderTarget(34069 + face, uPtr(texture)->GLTextureHandle(), mip, ::g::Uno::Graphics::TextureHelpers::GetMipSize1(texture, mip), depth);
}

// internal RenderTarget New() [static] :659
RenderTarget* RenderTarget::New1()
{
    RenderTarget* obj1 = (RenderTarget*)uNew(RenderTarget_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/graphics/$.uno
// ----------------------------------------------------------------------

// public struct SamplerState :766
// {
static void SamplerState_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Graphics::TextureFilter_typeof(), offsetof(::g::Uno::Graphics::SamplerState, MinFilter), 0,
        ::g::Uno::Graphics::TextureFilter_typeof(), offsetof(::g::Uno::Graphics::SamplerState, MagFilter), 0,
        ::g::Uno::Graphics::TextureAddressMode_typeof(), offsetof(::g::Uno::Graphics::SamplerState, AddressU), 0,
        ::g::Uno::Graphics::TextureAddressMode_typeof(), offsetof(::g::Uno::Graphics::SamplerState, AddressV), 0,
        ::g::Uno::Graphics::TextureAddressMode_typeof(), offsetof(::g::Uno::Graphics::SamplerState, AddressW), 0);
    type->Reflection.SetFields(5,
        new uField("AddressU", 2),
        new uField("AddressV", 3),
        new uField("AddressW", 4),
        new uField("MagFilter", 1),
        new uField("MinFilter", 0));
    type->Reflection.SetFunctions(6,
        new uFunction("get_LinearClamp", NULL, (void*)SamplerState__get_LinearClamp_fn, 0, true, SamplerState_typeof(), 0),
        new uFunction("get_LinearWrap", NULL, (void*)SamplerState__get_LinearWrap_fn, 0, true, SamplerState_typeof(), 0),
        new uFunction("get_MinFilterNoMipmap", NULL, (void*)SamplerState__get_MinFilterNoMipmap_fn, 0, false, ::g::Uno::Graphics::TextureFilter_typeof(), 0),
        new uFunction("get_NearestClamp", NULL, (void*)SamplerState__get_NearestClamp_fn, 0, true, SamplerState_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)SamplerState__New1_fn, 0, true, SamplerState_typeof(), 3, ::g::Uno::Graphics::TextureFilter_typeof(), ::g::Uno::Graphics::TextureFilter_typeof(), ::g::Uno::Graphics::TextureAddressMode_typeof()),
        new uFunction("get_TrilinearClamp", NULL, (void*)SamplerState__get_TrilinearClamp_fn, 0, true, SamplerState_typeof(), 0));
}

uStructType* SamplerState_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ValueSize = sizeof(SamplerState);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Graphics.SamplerState", options);
    type->fp_build_ = SamplerState_build;
    return type;
}

// public SamplerState(Uno.Graphics.TextureFilter minFilter, Uno.Graphics.TextureFilter magFilter, Uno.Graphics.TextureAddressMode addressMode) :794
void SamplerState__ctor__fn(SamplerState* __this, int* minFilter, int* magFilter, int* addressMode)
{
    __this->ctor_(*minFilter, *magFilter, *addressMode);
}

// public static Uno.Graphics.SamplerState get_LinearClamp() :829
void SamplerState__get_LinearClamp_fn(SamplerState* __retval)
{
    *__retval = SamplerState__LinearClamp();
}

// public static Uno.Graphics.SamplerState get_LinearWrap() :824
void SamplerState__get_LinearWrap_fn(SamplerState* __retval)
{
    *__retval = SamplerState__LinearWrap();
}

// public Uno.Graphics.TextureFilter get_MinFilterNoMipmap() :776
void SamplerState__get_MinFilterNoMipmap_fn(SamplerState* __this, int* __retval)
{
    *__retval = __this->MinFilterNoMipmap();
}

// public static Uno.Graphics.SamplerState get_NearestClamp() :819
void SamplerState__get_NearestClamp_fn(SamplerState* __retval)
{
    *__retval = SamplerState__NearestClamp();
}

// public SamplerState New(Uno.Graphics.TextureFilter minFilter, Uno.Graphics.TextureFilter magFilter, Uno.Graphics.TextureAddressMode addressMode) :794
void SamplerState__New1_fn(int* minFilter, int* magFilter, int* addressMode, SamplerState* __retval)
{
    *__retval = SamplerState__New1(*minFilter, *magFilter, *addressMode);
}

// public static Uno.Graphics.SamplerState get_TrilinearClamp() :839
void SamplerState__get_TrilinearClamp_fn(SamplerState* __retval)
{
    *__retval = SamplerState__TrilinearClamp();
}

// public SamplerState(Uno.Graphics.TextureFilter minFilter, Uno.Graphics.TextureFilter magFilter, Uno.Graphics.TextureAddressMode addressMode) [instance] :794
void SamplerState::ctor_(int minFilter, int magFilter, int addressMode)
{
    uStackFrame __("Uno.Graphics.SamplerState", ".ctor(Uno.Graphics.TextureFilter,Uno.Graphics.TextureFilter,Uno.Graphics.TextureAddressMode)");
    MinFilter = minFilter;
    MagFilter = magFilter;
    AddressU = addressMode;
    AddressV = addressMode;
    AddressW = addressMode;
}

// public Uno.Graphics.TextureFilter get_MinFilterNoMipmap() [instance] :776
int SamplerState::MinFilterNoMipmap()
{
    uStackFrame __("Uno.Graphics.SamplerState", "get_MinFilterNoMipmap()");

    switch (MinFilter)
    {
        case 9984:
        case 9985:
            return 9728;
        case 9986:
        case 9987:
            return 9729;
        default:
            return MinFilter;
    }
}

// public SamplerState New(Uno.Graphics.TextureFilter minFilter, Uno.Graphics.TextureFilter magFilter, Uno.Graphics.TextureAddressMode addressMode) [static] :794
SamplerState SamplerState__New1(int minFilter, int magFilter, int addressMode)
{
    SamplerState obj1;
    obj1.ctor_(minFilter, magFilter, addressMode);
    return obj1;
}

// public static Uno.Graphics.SamplerState get_LinearClamp() [static] :829
SamplerState SamplerState__LinearClamp()
{
    uStackFrame __("Uno.Graphics.SamplerState", "get_LinearClamp()");
    return SamplerState__New1(9729, 9729, 33071);
}

// public static Uno.Graphics.SamplerState get_LinearWrap() [static] :824
SamplerState SamplerState__LinearWrap()
{
    uStackFrame __("Uno.Graphics.SamplerState", "get_LinearWrap()");
    return SamplerState__New1(9729, 9729, 10497);
}

// public static Uno.Graphics.SamplerState get_NearestClamp() [static] :819
SamplerState SamplerState__NearestClamp()
{
    uStackFrame __("Uno.Graphics.SamplerState", "get_NearestClamp()");
    return SamplerState__New1(9728, 9728, 33071);
}

// public static Uno.Graphics.SamplerState get_TrilinearClamp() [static] :839
SamplerState SamplerState__TrilinearClamp()
{
    uStackFrame __("Uno.Graphics.SamplerState", "get_TrilinearClamp()");
    return SamplerState__New1(9987, 9729, 33071);
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/graphics/$.uno
// ----------------------------------------------------------------------

// public intrinsic sealed class Texture2D :860
// {
static void Texture2D_build(uType* type)
{
    ::STRINGS[6] = uString::Const("Texture2D");
    ::STRINGS[7] = uString::Const("Texture does not support mipmap");
    ::STRINGS[8] = uString::Const("Texture is immutable and cannot be updated");
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Texture2D_type, interface0));
    type->SetFields(0,
        ::g::Uno::Graphics::Format_typeof(), offsetof(::g::Uno::Graphics::Texture2D, _Format), 0,
        ::g::OpenGL::GLTextureHandle_typeof(), offsetof(::g::Uno::Graphics::Texture2D, _GLTextureHandle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Graphics::Texture2D, _IsDisposed), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Graphics::Texture2D, _MipCount), 0,
        ::g::Uno::Int2_typeof(), offsetof(::g::Uno::Graphics::Texture2D, _Size), 0,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Uno::Graphics::Texture2D::_maxSize_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(14,
        new uFunction("Dispose", NULL, (void*)Texture2D__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Format", NULL, (void*)Texture2D__get_Format_fn, 0, false, ::g::Uno::Graphics::Format_typeof(), 0),
        new uFunction("GenerateMipmap", NULL, (void*)Texture2D__GenerateMipmap_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_GLTextureHandle", NULL, (void*)Texture2D__get_GLTextureHandle_fn, 0, false, ::g::OpenGL::GLTextureHandle_typeof(), 0),
        new uFunction("get_IsDisposed", NULL, (void*)Texture2D__get_IsDisposed_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsMipmap", NULL, (void*)Texture2D__get_IsMipmap_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsPow2", NULL, (void*)Texture2D__get_IsPow2_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_MaxSize", NULL, (void*)Texture2D__get_MaxSize_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_MipCount", NULL, (void*)Texture2D__get_MipCount_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Texture2D__New1_fn, 0, true, Texture2D_typeof(), 3, ::g::Uno::Int2_typeof(), ::g::Uno::Graphics::Format_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)Texture2D__New2_fn, 0, true, Texture2D_typeof(), 4, ::g::OpenGL::GLTextureHandle_typeof(), ::g::Uno::Int2_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Graphics::Format_typeof()),
        new uFunction("get_Size", NULL, (void*)Texture2D__get_Size_fn, 0, false, ::g::Uno::Int2_typeof(), 0),
        new uFunction("get_SupportsMipmap", NULL, (void*)Texture2D__get_SupportsMipmap_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("Update", NULL, (void*)Texture2D__Update1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Buffer_typeof()));
}

Texture2D_type* Texture2D_typeof()
{
    static uSStrong<Texture2D_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Texture2D);
    options.TypeSize = sizeof(Texture2D_type);
    type = (Texture2D_type*)uClassType::New("Uno.Graphics.Texture2D", options);
    type->fp_build_ = Texture2D_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))Texture2D__Dispose_fn;
    return type;
}

// public Texture2D(int2 size, Uno.Graphics.Format format, bool mipmap) :978
void Texture2D__ctor__fn(Texture2D* __this, ::g::Uno::Int2* size, int* format, bool* mipmap)
{
    __this->ctor_(*size, *format, *mipmap);
}

// public extern Texture2D(OpenGL.GLTextureHandle handle, int2 size, int mipCount, Uno.Graphics.Format format) :968
void Texture2D__ctor_1_fn(Texture2D* __this, uint32_t* handle, ::g::Uno::Int2* size, int* mipCount, int* format)
{
    __this->ctor_1(*handle, *size, *mipCount, *format);
}

// public void Dispose() :1000
void Texture2D__Dispose_fn(Texture2D* __this)
{
    __this->Dispose();
}

// public generated Uno.Graphics.Format get_Format() :958
void Texture2D__get_Format_fn(Texture2D* __this, int* __retval)
{
    *__retval = __this->Format();
}

// private generated void set_Format(Uno.Graphics.Format value) :959
void Texture2D__set_Format_fn(Texture2D* __this, int* value)
{
    __this->Format(*value);
}

// public void GenerateMipmap() :1127
void Texture2D__GenerateMipmap_fn(Texture2D* __this)
{
    __this->GenerateMipmap();
}

// public generated extern OpenGL.GLTextureHandle get_GLTextureHandle() :964
void Texture2D__get_GLTextureHandle_fn(Texture2D* __this, uint32_t* __retval)
{
    *__retval = __this->GLTextureHandle();
}

// private generated extern void set_GLTextureHandle(OpenGL.GLTextureHandle value) :965
void Texture2D__set_GLTextureHandle_fn(Texture2D* __this, uint32_t* value)
{
    __this->GLTextureHandle(*value);
}

// public generated bool get_IsDisposed() :996
void Texture2D__get_IsDisposed_fn(Texture2D* __this, bool* __retval)
{
    *__retval = __this->IsDisposed();
}

// private generated void set_IsDisposed(bool value) :997
void Texture2D__set_IsDisposed_fn(Texture2D* __this, bool* value)
{
    __this->IsDisposed(*value);
}

// public bool get_IsMipmap() :1118
void Texture2D__get_IsMipmap_fn(Texture2D* __this, bool* __retval)
{
    *__retval = __this->IsMipmap();
}

// public bool get_IsPow2() :1113
void Texture2D__get_IsPow2_fn(Texture2D* __this, bool* __retval)
{
    *__retval = __this->IsPow2();
}

// public static int get_MaxSize() :937
void Texture2D__get_MaxSize_fn(int* __retval)
{
    *__retval = Texture2D::MaxSize();
}

// public generated int get_MipCount() :952
void Texture2D__get_MipCount_fn(Texture2D* __this, int* __retval)
{
    *__retval = __this->MipCount();
}

// private generated void set_MipCount(int value) :953
void Texture2D__set_MipCount_fn(Texture2D* __this, int* value)
{
    __this->MipCount(*value);
}

// public Texture2D New(int2 size, Uno.Graphics.Format format, bool mipmap) :978
void Texture2D__New1_fn(::g::Uno::Int2* size, int* format, bool* mipmap, Texture2D** __retval)
{
    *__retval = Texture2D::New1(*size, *format, *mipmap);
}

// public extern Texture2D New(OpenGL.GLTextureHandle handle, int2 size, int mipCount, Uno.Graphics.Format format) :968
void Texture2D__New2_fn(uint32_t* handle, ::g::Uno::Int2* size, int* mipCount, int* format, Texture2D** __retval)
{
    *__retval = Texture2D::New2(*handle, *size, *mipCount, *format);
}

// public generated int2 get_Size() :930
void Texture2D__get_Size_fn(Texture2D* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->Size();
}

// private generated void set_Size(int2 value) :931
void Texture2D__set_Size_fn(Texture2D* __this, ::g::Uno::Int2* value)
{
    __this->Size(*value);
}

// public bool get_SupportsMipmap() :1124
void Texture2D__get_SupportsMipmap_fn(Texture2D* __this, bool* __retval)
{
    *__retval = __this->SupportsMipmap();
}

// public void Update(Uno.Buffer mip0) :1044
void Texture2D__Update1_fn(Texture2D* __this, ::g::Uno::Buffer* mip0)
{
    __this->Update1(mip0);
}

int Texture2D::_maxSize_;

// public Texture2D(int2 size, Uno.Graphics.Format format, bool mipmap) [instance] :978
void Texture2D::ctor_(::g::Uno::Int2 size, int format, bool mipmap)
{
    uStackFrame __("texture2D", ".ctor(int2,Uno.Graphics.Format,bool)");
    GLTextureHandle(::g::OpenGL::GL::CreateTexture());
    Size(size);
    Format(format);
    MipCount(mipmap ? ::g::Uno::Graphics::TextureHelpers::GetMipCount1(size) : 1);
    Update1(NULL);
}

// public extern Texture2D(OpenGL.GLTextureHandle handle, int2 size, int mipCount, Uno.Graphics.Format format) [instance] :968
void Texture2D::ctor_1(uint32_t handle, ::g::Uno::Int2 size, int mipCount, int format)
{
    uStackFrame __("texture2D", ".ctor(OpenGL.GLTextureHandle,int2,int,Uno.Graphics.Format)");
    GLTextureHandle(handle);
    Size(size);
    MipCount(mipCount);
    Format(format);
}

// public void Dispose() [instance] :1000
void Texture2D::Dispose()
{
    uStackFrame __("texture2D", "Dispose()");

    if (IsDisposed())
        U_THROW(::g::Uno::ObjectDisposedException::New4(::STRINGS[6/*"Texture2D"*/]));
    else 
        ::g::OpenGL::GL::DeleteTexture(GLTextureHandle());

    IsDisposed(true);
}

// public generated Uno.Graphics.Format get_Format() [instance] :958
int Texture2D::Format()
{
    uStackFrame __("texture2D", "get_Format()");
    return _Format;
}

// private generated void set_Format(Uno.Graphics.Format value) [instance] :959
void Texture2D::Format(int value)
{
    uStackFrame __("texture2D", "set_Format(Uno.Graphics.Format)");
    _Format = value;
}

// public void GenerateMipmap() [instance] :1127
void Texture2D::GenerateMipmap()
{
    uStackFrame __("texture2D", "GenerateMipmap()");

    if (!IsMipmap())
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[7/*"Texture doe...*/]));
    else 
    {
        ::g::OpenGL::GL::BindTexture(3553, GLTextureHandle());
        ::g::OpenGL::GL::GenerateMipmap(3553);
        ::g::OpenGL::GL::BindTexture(3553, ::g::OpenGL::GLTextureHandle::Zero_);
    }
}

// public generated extern OpenGL.GLTextureHandle get_GLTextureHandle() [instance] :964
uint32_t Texture2D::GLTextureHandle()
{
    uStackFrame __("texture2D", "get_GLTextureHandle()");
    return _GLTextureHandle;
}

// private generated extern void set_GLTextureHandle(OpenGL.GLTextureHandle value) [instance] :965
void Texture2D::GLTextureHandle(uint32_t value)
{
    uStackFrame __("texture2D", "set_GLTextureHandle(OpenGL.GLTextureHandle)");
    _GLTextureHandle = value;
}

// public generated bool get_IsDisposed() [instance] :996
bool Texture2D::IsDisposed()
{
    uStackFrame __("texture2D", "get_IsDisposed()");
    return _IsDisposed;
}

// private generated void set_IsDisposed(bool value) [instance] :997
void Texture2D::IsDisposed(bool value)
{
    uStackFrame __("texture2D", "set_IsDisposed(bool)");
    _IsDisposed = value;
}

// public bool get_IsMipmap() [instance] :1118
bool Texture2D::IsMipmap()
{
    uStackFrame __("texture2D", "get_IsMipmap()");
    return (MipCount() > 1) && IsPow2();
}

// public bool get_IsPow2() [instance] :1113
bool Texture2D::IsPow2()
{
    uStackFrame __("texture2D", "get_IsPow2()");
    return ::g::Uno::Math::IsPow2(Size().X) && ::g::Uno::Math::IsPow2(Size().Y);
}

// public generated int get_MipCount() [instance] :952
int Texture2D::MipCount()
{
    uStackFrame __("texture2D", "get_MipCount()");
    return _MipCount;
}

// private generated void set_MipCount(int value) [instance] :953
void Texture2D::MipCount(int value)
{
    uStackFrame __("texture2D", "set_MipCount(int)");
    _MipCount = value;
}

// public generated int2 get_Size() [instance] :930
::g::Uno::Int2 Texture2D::Size()
{
    uStackFrame __("texture2D", "get_Size()");
    return _Size;
}

// private generated void set_Size(int2 value) [instance] :931
void Texture2D::Size(::g::Uno::Int2 value)
{
    uStackFrame __("texture2D", "set_Size(int2)");
    _Size = value;
}

// public bool get_SupportsMipmap() [instance] :1124
bool Texture2D::SupportsMipmap()
{
    uStackFrame __("texture2D", "get_SupportsMipmap()");
    return IsMipmap();
}

// public void Update(Uno.Buffer mip0) [instance] :1044
void Texture2D::Update1(::g::Uno::Buffer* mip0)
{
    uStackFrame __("texture2D", "Update(Uno.Buffer)");

    if (Format() == 0)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[8/*"Texture is ...*/]));
    else 
    {
        ::g::OpenGL::GL::ActiveTexture(33984);
        ::g::OpenGL::GL::BindTexture(3553, GLTextureHandle());
        ::g::OpenGL::GL::TexParameter(3553, 10240, 9729);
        ::g::OpenGL::GL::TexParameter(3553, 10241, 9729);
        ::g::OpenGL::GL::TexParameter(3553, 10242, 33071);
        ::g::OpenGL::GL::TexParameter(3553, 10243, 33071);
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLHelpers::TexImage2DFromBuffer(3553, Size().X, Size().Y, 0, Format(), mip0);
        ::g::OpenGL::GL::BindTexture(3553, ::g::OpenGL::GLTextureHandle::Zero_);
    }
}

// public Texture2D New(int2 size, Uno.Graphics.Format format, bool mipmap) [static] :978
Texture2D* Texture2D::New1(::g::Uno::Int2 size, int format, bool mipmap)
{
    Texture2D* obj2 = (Texture2D*)uNew(Texture2D_typeof());
    obj2->ctor_(size, format, mipmap);
    return obj2;
}

// public extern Texture2D New(OpenGL.GLTextureHandle handle, int2 size, int mipCount, Uno.Graphics.Format format) [static] :968
Texture2D* Texture2D::New2(uint32_t handle, ::g::Uno::Int2 size, int mipCount, int format)
{
    Texture2D* obj1 = (Texture2D*)uNew(Texture2D_typeof());
    obj1->ctor_1(handle, size, mipCount, format);
    return obj1;
}

// public static int get_MaxSize() [static] :937
int Texture2D::MaxSize()
{
    uStackFrame __("texture2D", "get_MaxSize()");

    if (Texture2D::_maxSize_ == 0)
        Texture2D::_maxSize_ = ::g::OpenGL::GL::GetInteger1(3379);

    return Texture2D::_maxSize_;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/graphics/$.uno
// ----------------------------------------------------------------------

// public enum TextureAddressMode :760
uEnumType* TextureAddressMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Graphics.TextureAddressMode", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Wrap", 10497LL,
        "Clamp", 33071LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/graphics/$.uno
// ----------------------------------------------------------------------

// public intrinsic sealed class TextureCube :1200
// {
static void TextureCube_build(uType* type)
{
    ::STRINGS[9] = uString::Const("TextureCube");
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(TextureCube_type, interface0));
    type->SetFields(0,
        ::g::OpenGL::GLTextureHandle_typeof(), offsetof(::g::Uno::Graphics::TextureCube, _GLTextureHandle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Graphics::TextureCube, _IsDisposed), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Graphics::TextureCube, _Size), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("Dispose", NULL, (void*)TextureCube__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_GLTextureHandle", NULL, (void*)TextureCube__get_GLTextureHandle_fn, 0, false, ::g::OpenGL::GLTextureHandle_typeof(), 0),
        new uFunction("get_IsDisposed", NULL, (void*)TextureCube__get_IsDisposed_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Size", NULL, (void*)TextureCube__get_Size_fn, 0, false, ::g::Uno::Int_typeof(), 0));
}

TextureCube_type* TextureCube_typeof()
{
    static uSStrong<TextureCube_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TextureCube);
    options.TypeSize = sizeof(TextureCube_type);
    type = (TextureCube_type*)uClassType::New("Uno.Graphics.TextureCube", options);
    type->fp_build_ = TextureCube_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))TextureCube__Dispose_fn;
    return type;
}

// public void Dispose() :1337
void TextureCube__Dispose_fn(TextureCube* __this)
{
    __this->Dispose();
}

// public generated extern OpenGL.GLTextureHandle get_GLTextureHandle() :1303
void TextureCube__get_GLTextureHandle_fn(TextureCube* __this, uint32_t* __retval)
{
    *__retval = __this->GLTextureHandle();
}

// private generated extern void set_GLTextureHandle(OpenGL.GLTextureHandle value) :1304
void TextureCube__set_GLTextureHandle_fn(TextureCube* __this, uint32_t* value)
{
    __this->GLTextureHandle(*value);
}

// public generated bool get_IsDisposed() :1333
void TextureCube__get_IsDisposed_fn(TextureCube* __this, bool* __retval)
{
    *__retval = __this->IsDisposed();
}

// private generated void set_IsDisposed(bool value) :1334
void TextureCube__set_IsDisposed_fn(TextureCube* __this, bool* value)
{
    __this->IsDisposed(*value);
}

// public generated int get_Size() :1285
void TextureCube__get_Size_fn(TextureCube* __this, int* __retval)
{
    *__retval = __this->Size();
}

// private generated void set_Size(int value) :1286
void TextureCube__set_Size_fn(TextureCube* __this, int* value)
{
    __this->Size(*value);
}

// public void Dispose() [instance] :1337
void TextureCube::Dispose()
{
    uStackFrame __("textureCube", "Dispose()");

    if (IsDisposed())
        U_THROW(::g::Uno::ObjectDisposedException::New4(::STRINGS[9/*"TextureCube"*/]));
    else 
        ::g::OpenGL::GL::DeleteTexture(GLTextureHandle());

    IsDisposed(true);
}

// public generated extern OpenGL.GLTextureHandle get_GLTextureHandle() [instance] :1303
uint32_t TextureCube::GLTextureHandle()
{
    uStackFrame __("textureCube", "get_GLTextureHandle()");
    return _GLTextureHandle;
}

// private generated extern void set_GLTextureHandle(OpenGL.GLTextureHandle value) [instance] :1304
void TextureCube::GLTextureHandle(uint32_t value)
{
    uStackFrame __("textureCube", "set_GLTextureHandle(OpenGL.GLTextureHandle)");
    _GLTextureHandle = value;
}

// public generated bool get_IsDisposed() [instance] :1333
bool TextureCube::IsDisposed()
{
    uStackFrame __("textureCube", "get_IsDisposed()");
    return _IsDisposed;
}

// private generated void set_IsDisposed(bool value) [instance] :1334
void TextureCube::IsDisposed(bool value)
{
    uStackFrame __("textureCube", "set_IsDisposed(bool)");
    _IsDisposed = value;
}

// public generated int get_Size() [instance] :1285
int TextureCube::Size()
{
    uStackFrame __("textureCube", "get_Size()");
    return _Size;
}

// private generated void set_Size(int value) [instance] :1286
void TextureCube::Size(int value)
{
    uStackFrame __("textureCube", "set_Size(int)");
    _Size = value;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/graphics/$.uno
// ----------------------------------------------------------------------

// public enum TextureFilter :749
uEnumType* TextureFilter_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Graphics.TextureFilter", ::g::Uno::Int_typeof(), 6);
    type->SetLiterals(
        "Nearest", 9728LL,
        "Linear", 9729LL,
        "NearestMipmapNearest", 9984LL,
        "LinearMipmapNearest", 9985LL,
        "NearestMipmapLinear", 9986LL,
        "LinearMipmapLinear", 9987LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/graphics/$.uno
// ----------------------------------------------------------------------

// public static class TextureHelpers :1497
// {
static void TextureHelpers_build(uType* type)
{
    type->Reflection.SetFunctions(3,
        new uFunction("GetMipCount", NULL, (void*)TextureHelpers__GetMipCount1_fn, 0, true, ::g::Uno::Int_typeof(), 1, ::g::Uno::Int2_typeof()),
        new uFunction("GetMipSize", NULL, (void*)TextureHelpers__GetMipSize_fn, 0, true, ::g::Uno::Int2_typeof(), 2, ::g::Uno::Graphics::Texture2D_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("GetMipSize", NULL, (void*)TextureHelpers__GetMipSize1_fn, 0, true, ::g::Uno::Int2_typeof(), 2, ::g::Uno::Graphics::TextureCube_typeof(), ::g::Uno::Int_typeof()));
}

uClassType* TextureHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Graphics.TextureHelpers", options);
    type->fp_build_ = TextureHelpers_build;
    return type;
}

// public static int GetMipCount(int2 size) :1533
void TextureHelpers__GetMipCount1_fn(::g::Uno::Int2* size, int* __retval)
{
    *__retval = TextureHelpers::GetMipCount1(*size);
}

// public static int2 GetMipSize(texture2D texture, int mip) :1499
void TextureHelpers__GetMipSize_fn(::g::Uno::Graphics::Texture2D* texture, int* mip, ::g::Uno::Int2* __retval)
{
    *__retval = TextureHelpers::GetMipSize(texture, *mip);
}

// public static int2 GetMipSize(textureCube texture, int mip) :1518
void TextureHelpers__GetMipSize1_fn(::g::Uno::Graphics::TextureCube* texture, int* mip, ::g::Uno::Int2* __retval)
{
    *__retval = TextureHelpers::GetMipSize1(texture, *mip);
}

// public static int GetMipCount(int2 size) [static] :1533
int TextureHelpers::GetMipCount1(::g::Uno::Int2 size)
{
    uStackFrame __("Uno.Graphics.TextureHelpers", "GetMipCount(int2)");
    int result = 0;

    do
    {
        result++;
        size.X = (size.X >> 1);
        size.Y = (size.Y >> 1);
    }
    while ((size.X > 0) && (size.Y > 0));

    return result;
}

// public static int2 GetMipSize(texture2D texture, int mip) [static] :1499
::g::Uno::Int2 TextureHelpers::GetMipSize(::g::Uno::Graphics::Texture2D* texture, int mip)
{
    uStackFrame __("Uno.Graphics.TextureHelpers", "GetMipSize(texture2D,int)");
    ::g::Uno::Int2 size = uPtr(texture)->Size();

    if (mip > 0)
    {
        size.X = (size.X >> mip);
        size.Y = (size.Y >> mip);

        if (size.X < 0)
            size.X = 1;

        if (size.Y < 0)
            size.Y = 1;
    }

    return size;
}

// public static int2 GetMipSize(textureCube texture, int mip) [static] :1518
::g::Uno::Int2 TextureHelpers::GetMipSize1(::g::Uno::Graphics::TextureCube* texture, int mip)
{
    uStackFrame __("Uno.Graphics.TextureHelpers", "GetMipSize(textureCube,int)");
    int size = uPtr(texture)->Size();

    if (mip > 0)
    {
        size = size >> mip;

        if (size < 0)
            size = 1;
    }

    return ::g::Uno::Int2__New2(size, size);
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/graphics/$.uno
// ----------------------------------------------------------------------

// public struct VertexAttributeInfo :1569
// {
static void VertexAttributeInfo_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Graphics::VertexAttributeType_typeof(), offsetof(::g::Uno::Graphics::VertexAttributeInfo, Type), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Uno::Graphics::VertexAttributeInfo, Buffer), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Graphics::VertexAttributeInfo, BufferStride), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Graphics::VertexAttributeInfo, BufferOffset), 0);
    type->Reflection.SetFields(4,
        new uField("Buffer", 1),
        new uField("BufferOffset", 3),
        new uField("BufferStride", 2),
        new uField("Type", 0));
}

uStructType* VertexAttributeInfo_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ValueSize = sizeof(VertexAttributeInfo);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Graphics.VertexAttributeInfo", options);
    type->fp_build_ = VertexAttributeInfo_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/graphics/$.uno
// ----------------------------------------------------------------------

// public enum VertexAttributeType :149
uEnumType* VertexAttributeType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Graphics.VertexAttributeType", ::g::Uno::Int_typeof(), 21);
    type->SetLiterals(
        "Undefined", 0LL,
        "Float", 1LL,
        "Float2", 2LL,
        "Float3", 3LL,
        "Float4", 4LL,
        "Short", 5LL,
        "ShortNormalized", 6LL,
        "Short2", 7LL,
        "Short2Normalized", 8LL,
        "Short4", 9LL,
        "Short4Normalized", 10LL,
        "UShort", 11LL,
        "UShortNormalized", 12LL,
        "UShort2", 13LL,
        "UShort2Normalized", 14LL,
        "UShort4", 15LL,
        "UShort4Normalized", 16LL,
        "SByte4", 17LL,
        "SByte4Normalized", 18LL,
        "Byte4", 19LL,
        "Byte4Normalized", 20LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/graphics/$.uno
// ----------------------------------------------------------------------

// public static class VertexAttributeTypeHelpers :1591
// {
static void VertexAttributeTypeHelpers_build(uType* type)
{
    ::STRINGS[10] = uString::Const("Invalid VertexAttributeType <");
    ::STRINGS[2] = uString::Const(">");
    type->Reflection.SetFunctions(1,
        new uFunction("GetStrideInBytes", NULL, (void*)VertexAttributeTypeHelpers__GetStrideInBytes_fn, 0, true, ::g::Uno::Int_typeof(), 1, ::g::Uno::Graphics::VertexAttributeType_typeof()));
}

uClassType* VertexAttributeTypeHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Graphics.VertexAttributeTypeHelpers", options);
    type->fp_build_ = VertexAttributeTypeHelpers_build;
    return type;
}

// public static int GetStrideInBytes(Uno.Graphics.VertexAttributeType type) :1593
void VertexAttributeTypeHelpers__GetStrideInBytes_fn(int* type, int* __retval)
{
    *__retval = VertexAttributeTypeHelpers::GetStrideInBytes(*type);
}

// public static int GetStrideInBytes(Uno.Graphics.VertexAttributeType type) [static] :1593
int VertexAttributeTypeHelpers::GetStrideInBytes(int type)
{
    uStackFrame __("Uno.Graphics.VertexAttributeTypeHelpers", "GetStrideInBytes(Uno.Graphics.VertexAttributeType)");

    switch (type)
    {
        case 1:
            return 4;
        case 2:
            return 8;
        case 3:
            return 12;
        case 4:
            return 16;
        case 5:
        case 6:
        case 11:
        case 12:
            return 2;
        case 7:
        case 8:
        case 13:
        case 14:
            return 4;
        case 9:
        case 10:
        case 15:
        case 16:
            return 8;
        case 17:
        case 18:
        case 19:
        case 20:
            return 4;
        default:
            U_THROW(::g::Uno::FormatException::New4(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[10/*"Invalid Ver...*/], uBox<int>(::g::Uno::Graphics::VertexAttributeType_typeof(), type)), ::STRINGS[2/*">"*/])));
    }
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/graphics/$.uno
// ----------------------------------------------------------------------

// public sealed class VertexBuffer :1648
// {
static void VertexBuffer_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Graphics::DeviceBuffer_type, interface0));
    type->SetFields(5);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)VertexBuffer__New1_fn, 0, true, VertexBuffer_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Graphics::BufferUsage_typeof()),
        new uFunction(".ctor", NULL, (void*)VertexBuffer__New2_fn, 0, true, VertexBuffer_typeof(), 2, ::g::Uno::Buffer_typeof(), ::g::Uno::Graphics::BufferUsage_typeof()),
        new uFunction(".ctor", NULL, (void*)VertexBuffer__New3_fn, 0, true, VertexBuffer_typeof(), 1, ::g::Uno::Graphics::BufferUsage_typeof()));
}

::g::Uno::Graphics::DeviceBuffer_type* VertexBuffer_typeof()
{
    static uSStrong< ::g::Uno::Graphics::DeviceBuffer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Graphics::DeviceBuffer_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(VertexBuffer);
    options.TypeSize = sizeof(::g::Uno::Graphics::DeviceBuffer_type);
    type = (::g::Uno::Graphics::DeviceBuffer_type*)uClassType::New("Uno.Graphics.VertexBuffer", options);
    type->fp_build_ = VertexBuffer_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::Graphics::DeviceBuffer__Dispose_fn;
    return type;
}

// public VertexBuffer(int sizeInBytes, Uno.Graphics.BufferUsage usage) :1659
void VertexBuffer__ctor_1_fn(VertexBuffer* __this, int* sizeInBytes, int* usage)
{
    __this->ctor_1(*sizeInBytes, *usage);
}

// public VertexBuffer(Uno.Buffer data, Uno.Graphics.BufferUsage usage) :1668
void VertexBuffer__ctor_2_fn(VertexBuffer* __this, ::g::Uno::Buffer* data, int* usage)
{
    __this->ctor_2(data, *usage);
}

// public VertexBuffer(Uno.Graphics.BufferUsage usage) :1650
void VertexBuffer__ctor_3_fn(VertexBuffer* __this, int* usage)
{
    __this->ctor_3(*usage);
}

// public VertexBuffer New(int sizeInBytes, Uno.Graphics.BufferUsage usage) :1659
void VertexBuffer__New1_fn(int* sizeInBytes, int* usage, VertexBuffer** __retval)
{
    *__retval = VertexBuffer::New1(*sizeInBytes, *usage);
}

// public VertexBuffer New(Uno.Buffer data, Uno.Graphics.BufferUsage usage) :1668
void VertexBuffer__New2_fn(::g::Uno::Buffer* data, int* usage, VertexBuffer** __retval)
{
    *__retval = VertexBuffer::New2(data, *usage);
}

// public VertexBuffer New(Uno.Graphics.BufferUsage usage) :1650
void VertexBuffer__New3_fn(int* usage, VertexBuffer** __retval)
{
    *__retval = VertexBuffer::New3(*usage);
}

// public VertexBuffer(int sizeInBytes, Uno.Graphics.BufferUsage usage) [instance] :1659
void VertexBuffer::ctor_1(int sizeInBytes, int usage)
{
    uStackFrame __("Uno.Graphics.VertexBuffer", ".ctor(int,Uno.Graphics.BufferUsage)");
    ctor_(usage);
    GLInit1(34962, sizeInBytes);
}

// public VertexBuffer(Uno.Buffer data, Uno.Graphics.BufferUsage usage) [instance] :1668
void VertexBuffer::ctor_2(::g::Uno::Buffer* data, int usage)
{
    uStackFrame __("Uno.Graphics.VertexBuffer", ".ctor(Uno.Buffer,Uno.Graphics.BufferUsage)");
    ctor_(usage);
    GLInit2(34962, data);
}

// public VertexBuffer(Uno.Graphics.BufferUsage usage) [instance] :1650
void VertexBuffer::ctor_3(int usage)
{
    uStackFrame __("Uno.Graphics.VertexBuffer", ".ctor(Uno.Graphics.BufferUsage)");
    ctor_(usage);
    GLInit(34962);
}

// public VertexBuffer New(int sizeInBytes, Uno.Graphics.BufferUsage usage) [static] :1659
VertexBuffer* VertexBuffer::New1(int sizeInBytes, int usage)
{
    VertexBuffer* obj2 = (VertexBuffer*)uNew(VertexBuffer_typeof());
    obj2->ctor_1(sizeInBytes, usage);
    return obj2;
}

// public VertexBuffer New(Uno.Buffer data, Uno.Graphics.BufferUsage usage) [static] :1668
VertexBuffer* VertexBuffer::New2(::g::Uno::Buffer* data, int usage)
{
    VertexBuffer* obj3 = (VertexBuffer*)uNew(VertexBuffer_typeof());
    obj3->ctor_2(data, usage);
    return obj3;
}

// public VertexBuffer New(Uno.Graphics.BufferUsage usage) [static] :1650
VertexBuffer* VertexBuffer::New3(int usage)
{
    VertexBuffer* obj1 = (VertexBuffer*)uNew(VertexBuffer_typeof());
    obj1->ctor_3(usage);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/graphics/$.uno
// ----------------------------------------------------------------------

// public intrinsic sealed class VideoTexture :1724
// {
static void VideoTexture_build(uType* type)
{
    ::STRINGS[6] = uString::Const("Texture2D");
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(VideoTexture_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Graphics::VideoTexture, IsMipmap), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Graphics::VideoTexture, IsPow2), 0,
        ::g::OpenGL::GLTextureHandle_typeof(), offsetof(::g::Uno::Graphics::VideoTexture, _GLTextureHandle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Graphics::VideoTexture, _IsDisposed), 0);
    type->Reflection.SetFields(2,
        new uField("IsMipmap", 0),
        new uField("IsPow2", 1));
    type->Reflection.SetFunctions(4,
        new uFunction("Dispose", NULL, (void*)VideoTexture__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_GLTextureHandle", NULL, (void*)VideoTexture__get_GLTextureHandle_fn, 0, false, ::g::OpenGL::GLTextureHandle_typeof(), 0),
        new uFunction("get_IsDisposed", NULL, (void*)VideoTexture__get_IsDisposed_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)VideoTexture__New1_fn, 0, true, VideoTexture_typeof(), 1, ::g::OpenGL::GLTextureHandle_typeof()));
}

VideoTexture_type* VideoTexture_typeof()
{
    static uSStrong<VideoTexture_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(VideoTexture);
    options.TypeSize = sizeof(VideoTexture_type);
    type = (VideoTexture_type*)uClassType::New("Uno.Graphics.VideoTexture", options);
    type->fp_build_ = VideoTexture_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))VideoTexture__Dispose_fn;
    return type;
}

// public extern VideoTexture(OpenGL.GLTextureHandle handle) :1738
void VideoTexture__ctor__fn(VideoTexture* __this, uint32_t* handle)
{
    __this->ctor_(*handle);
}

// public void Dispose() :1749
void VideoTexture__Dispose_fn(VideoTexture* __this)
{
    __this->Dispose();
}

// public generated extern OpenGL.GLTextureHandle get_GLTextureHandle() :1734
void VideoTexture__get_GLTextureHandle_fn(VideoTexture* __this, uint32_t* __retval)
{
    *__retval = __this->GLTextureHandle();
}

// private generated extern void set_GLTextureHandle(OpenGL.GLTextureHandle value) :1735
void VideoTexture__set_GLTextureHandle_fn(VideoTexture* __this, uint32_t* value)
{
    __this->GLTextureHandle(*value);
}

// public generated bool get_IsDisposed() :1745
void VideoTexture__get_IsDisposed_fn(VideoTexture* __this, bool* __retval)
{
    *__retval = __this->IsDisposed();
}

// private generated void set_IsDisposed(bool value) :1746
void VideoTexture__set_IsDisposed_fn(VideoTexture* __this, bool* value)
{
    __this->IsDisposed(*value);
}

// public extern VideoTexture New(OpenGL.GLTextureHandle handle) :1738
void VideoTexture__New1_fn(uint32_t* handle, VideoTexture** __retval)
{
    *__retval = VideoTexture::New1(*handle);
}

// public extern VideoTexture(OpenGL.GLTextureHandle handle) [instance] :1738
void VideoTexture::ctor_(uint32_t handle)
{
    uStackFrame __("Uno.Graphics.VideoTexture", ".ctor(OpenGL.GLTextureHandle)");
    GLTextureHandle(handle);
}

// public void Dispose() [instance] :1749
void VideoTexture::Dispose()
{
    uStackFrame __("Uno.Graphics.VideoTexture", "Dispose()");

    if (IsDisposed())
        U_THROW(::g::Uno::ObjectDisposedException::New4(::STRINGS[6/*"Texture2D"*/]));
    else 
        ::g::OpenGL::GL::DeleteTexture(GLTextureHandle());

    IsDisposed(true);
}

// public generated extern OpenGL.GLTextureHandle get_GLTextureHandle() [instance] :1734
uint32_t VideoTexture::GLTextureHandle()
{
    uStackFrame __("Uno.Graphics.VideoTexture", "get_GLTextureHandle()");
    return _GLTextureHandle;
}

// private generated extern void set_GLTextureHandle(OpenGL.GLTextureHandle value) [instance] :1735
void VideoTexture::GLTextureHandle(uint32_t value)
{
    uStackFrame __("Uno.Graphics.VideoTexture", "set_GLTextureHandle(OpenGL.GLTextureHandle)");
    _GLTextureHandle = value;
}

// public generated bool get_IsDisposed() [instance] :1745
bool VideoTexture::IsDisposed()
{
    uStackFrame __("Uno.Graphics.VideoTexture", "get_IsDisposed()");
    return _IsDisposed;
}

// private generated void set_IsDisposed(bool value) [instance] :1746
void VideoTexture::IsDisposed(bool value)
{
    uStackFrame __("Uno.Graphics.VideoTexture", "set_IsDisposed(bool)");
    _IsDisposed = value;
}

// public extern VideoTexture New(OpenGL.GLTextureHandle handle) [static] :1738
VideoTexture* VideoTexture::New1(uint32_t handle)
{
    VideoTexture* obj1 = (VideoTexture*)uNew(VideoTexture_typeof());
    obj1->ctor_(handle);
    return obj1;
}
// }

}}} // ::g::Uno::Graphics
