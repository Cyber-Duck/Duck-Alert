// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseControlsNative_bundle.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JavaObjectHelper.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Fuse.AppBase.h>
#include <Fuse.Controls.AutoCapitalizationHint.h>
#include <Fuse.Controls.AutoCorrectHint.h>
#include <Fuse.Controls.Native.Android.Blitter.h>
#include <Fuse.Controls.Native.Android.Button.h>
#include <Fuse.Controls.Native.Android.Circle.h>
#include <Fuse.Controls.Native.Android.DrawableViewGroup.h>
#include <Fuse.Controls.Native.Android.Ellipse.h>
#include <Fuse.Controls.Native.Android.FocusChangedListener.h>
#include <Fuse.Controls.Native.Android.FocusManager.h>
#include <Fuse.Controls.Native.Android.GraphicsView.h>
#include <Fuse.Controls.Native.Android.Helpers.h>
#include <Fuse.Controls.Native.Android.HttpImageLoader.h>
#include <Fuse.Controls.Native.Android.ImageView.h>
#include <Fuse.Controls.Native.Android.InputDispatch.h>
#include <Fuse.Controls.Native.Android.IViewParent.h>
#include <Fuse.Controls.Native.Android.JavaMap.h>
#include <Fuse.Controls.Native.Android.LeafView.h>
#include <Fuse.Controls.Native.Android.MotionEvent.h>
#include <Fuse.Controls.Native.Android.NativeViewRenderer.h>
#include <Fuse.Controls.Native.Android.Rectangle.h>
#include <Fuse.Controls.Native.Android.ScrollView.h>
#include <Fuse.Controls.Native.Android.Shape.h>
#include <Fuse.Controls.Native.Android.Slider.h>
#include <Fuse.Controls.Native.Android.SoftKeyboard.h>
#include <Fuse.Controls.Native.Android.SurfaceView.h>
#include <Fuse.Controls.Native.Android.Switch.h>
#include <Fuse.Controls.Native.Android.TextEdit.h>
#include <Fuse.Controls.Native.Android.TextEditRenderer.h>
#include <Fuse.Controls.Native.Android.TextEditRenderHost.h>
#include <Fuse.Controls.Native.Android.TextInput.h>
#include <Fuse.Controls.Native.Android.TextView.h>
#include <Fuse.Controls.Native.Android.Typeface.h>
#include <Fuse.Controls.Native.Android.TypefaceCache.h>
#include <Fuse.Controls.Native.Android.View.h>
#include <Fuse.Controls.Native.Android.ViewGroup.h>
#include <Fuse.Controls.Native.ImageHandle.h>
#include <Fuse.Controls.Native.ImageLoader.h>
#include <Fuse.Controls.Native.IRangeViewHost.h>
#include <Fuse.Controls.Native.IScrollViewHost.h>
#include <Fuse.Controls.Native.ITextEditHost.h>
#include <Fuse.Controls.Native.IToggleViewHost.h>
#include <Fuse.Controls.Native.OffscreenRendering.h>
#include <Fuse.Controls.ScrollDirections.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextInputActionStyle.h>
#include <Fuse.Controls.TextInputActionType.h>
#include <Fuse.Controls.TextInputHint.h>
#include <Fuse.Controls.TextTruncation.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.DynamicBrush.h>
#include <Fuse.Drawing.GradientStop.h>
#include <Fuse.Drawing.LinearGradient.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Font.h>
#include <Fuse.ICommonViewport.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEventData.h>
#include <Fuse.IViewport.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.Node.h>
#include <Fuse.Resources.FileImageSource.h>
#include <Fuse.Resources.HttpImageSource.h>
#include <Fuse.Resources.ImageSource.h>
#include <Fuse.Resources.MultiDensityImageSource.h>
#include <Fuse.Resources.SystemFileSource.h>
#include <Fuse.Time.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Java.Object.h>
#include <jni.h>
#include <OpenGL.GL.h>
#include <OpenGL.GLTextureHandle.h>
#include <OpenGL.GLTextureTarget.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.HashSet-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Func-2.h>
#include <Uno.Func-3.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IntPtr.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.Long.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.NotImplementedException.h>
#include <Uno.Object.h>
#include <Uno.Platform.PointerType.h>
#include <Uno.Quaternion.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.Vector.h>
#include <Uno/Graphics/GLHelper.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[7];
static uType* TYPES[40];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/android/$.uno
// -----------------------------------------------------------------------

// internal sealed extern class Blitter :1320
// {
// static Blitter() :1320
static void Blitter__cctor__fn(uType* __type)
{
    Blitter::Singleton_ = Blitter::New1();
}

static void Blitter_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Float2_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Blitter, _draw_1da305ec), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Blitter, Blit_v_1da305ec_3_4_1), 0,
        ::g::Uno::Float2_typeof()->Array(), offsetof(::g::Fuse::Controls::Native::Android::Blitter, Blit_verts_1da305ec_3_3_5), 0,
        Blitter_typeof(), (uintptr_t)&::g::Fuse::Controls::Native::Android::Blitter::Singleton_, uFieldFlagsStatic);
}

uType* Blitter_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Blitter);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.Blitter", options);
    type->fp_build_ = Blitter_build;
    type->fp_ctor_ = (void*)Blitter__New1_fn;
    type->fp_cctor_ = Blitter__cctor__fn;
    return type;
}

// public generated Blitter() :1320
void Blitter__ctor__fn(Blitter* __this)
{
    __this->ctor_();
}

// public void Blit(texture2D vt, float2 pos, float2 size, float4x4 localToClipTransform) :1324
void Blitter__Blit_fn(Blitter* __this, ::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2* pos, ::g::Uno::Float2* size, ::g::Uno::Float4x4* localToClipTransform)
{
    __this->Blit(vt, *pos, *size, *localToClipTransform);
}

// private generated void init_DrawCalls() :1320
void Blitter__init_DrawCalls_fn(Blitter* __this)
{
    __this->init_DrawCalls();
}

// public generated Blitter New() :1320
void Blitter__New1_fn(Blitter** __retval)
{
    *__retval = Blitter::New1();
}

uSStrong<Blitter*> Blitter::Singleton_;

// public generated Blitter() [instance] :1320
void Blitter::ctor_()
{
    uStackFrame __("Fuse.Controls.Native.Android.Blitter", ".ctor()");
    init_DrawCalls();
}

// public void Blit(texture2D vt, float2 pos, float2 size, float4x4 localToClipTransform) [instance] :1324
void Blitter::Blit(::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2 pos, ::g::Uno::Float2 size, ::g::Uno::Float4x4 localToClipTransform)
{
    uStackFrame __("Fuse.Controls.Native.Android.Blitter", "Blit(texture2D,float2,float2,float4x4)");
    _draw_1da305ec.BlendEnabled(true);
    _draw_1da305ec.DepthTestEnabled(false);
    _draw_1da305ec.CullFace(0);
    _draw_1da305ec.BlendSrcAlpha(7);
    _draw_1da305ec.BlendDstRgb(3);
    _draw_1da305ec.Use();
    _draw_1da305ec.Attrib1(0, 2, Blit_v_1da305ec_3_4_1, 8, 0);
    _draw_1da305ec.Uniform2(1, size);
    _draw_1da305ec.Uniform2(2, pos);
    _draw_1da305ec.Uniform12(3, localToClipTransform);
    _draw_1da305ec.Sampler2(4, vt);
    _draw_1da305ec.DrawArrays(uPtr(Blit_verts_1da305ec_3_3_5)->Length());
}

// private generated void init_DrawCalls() [instance] :1320
void Blitter::init_DrawCalls()
{
    uStackFrame __("Fuse.Controls.Native.Android.Blitter", "init_DrawCalls()");
    uArray* verts_1da305ec_3_3_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[0/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 1.0f));
    Blit_v_1da305ec_3_4_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(verts_1da305ec_3_3_0), 0);
    Blit_verts_1da305ec_3_3_5 = verts_1da305ec_3_3_0;
    _draw_1da305ec = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseControlsNative_bundle::Blitterbdb4a41b());
}

// public generated Blitter New() [static] :1320
Blitter* Blitter::New1()
{
    Blitter* obj1 = (Blitter*)uNew(Blitter_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/android/$.uno
// -----------------------------------------------------------------------

// public sealed extern class Button :11
// {
static void Button_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Button_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Button_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(Button_type, interface2),
        ::g::Fuse::Controls::Native::ILabelView_typeof(), offsetof(Button_type, interface3));
    type->SetFields(6,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Button, _visual), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)Button__New1_fn, 0, true, Button_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("set_Text", NULL, (void*)Button__set_Text_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
}

Button_type* Button_typeof()
{
    static uSStrong<Button_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::LeafView_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Button);
    options.TypeSize = sizeof(Button_type);
    type = (Button_type*)uClassType::New("Fuse.Controls.Native.Android.Button", options);
    type->fp_build_ = Button_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::Android::View*))Button__Dispose_fn;
    type->interface3.fp_set_Text = (void(*)(uObject*, uString*))Button__set_Text_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))Button__Dispose_fn;
    type->interface2.fp_Measure = (void(*)(uObject*, ::g::Fuse::LayoutParams*, float*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::LeafView__FuseControlsNativeILeafViewMeasure_fn;
    return type;
}

// public Button(Fuse.Visual visual) :15
void Button__ctor_2_fn(Button* __this, ::g::Fuse::Visual* visual)
{
    __this->ctor_2(visual);
}

// private static Java.Object Create() :34
void Button__Create_fn(::g::Java::Object** __retval)
{
    *__retval = Button::Create();
}

// public override sealed void Dispose() :21
void Button__Dispose_fn(Button* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.Button", "Dispose()");
    ::g::Fuse::Controls::Native::Android::View__Dispose_fn(__this);
    ::g::Fuse::Controls::Native::Android::InputDispatch::RemoveListener(__this);
    __this->_visual = NULL;
}

// public Button New(Fuse.Visual visual) :15
void Button__New1_fn(::g::Fuse::Visual* visual, Button** __retval)
{
    *__retval = Button::New1(visual);
}

// private static void SetText(Java.Object handle, string text) :40
void Button__SetText_fn(::g::Java::Object* handle, uString* text)
{
    Button::SetText(handle, text);
}

// public void set_Text(string value) :30
void Button__set_Text_fn(Button* __this, uString* value)
{
    __this->Text(value);
}

// public Button(Fuse.Visual visual) [instance] :15
void Button::ctor_2(::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Controls.Native.Android.Button", ".ctor(Fuse.Visual)");
    ctor_1(Button::Create());
    _visual = visual;
    ::g::Fuse::Controls::Native::Android::InputDispatch::AddListener(this, _visual);
}

// public void set_Text(string value) [instance] :30
void Button::Text(uString* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.Button", "set_Text(string)");
    Button::SetText(Handle(), value);
}

// private static Java.Object Create() [static] :34
::g::Java::Object* Button::Create()
{
    uStackFrame __("Fuse.Controls.Native.Android.Button", "Create()");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create57", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public Button New(Fuse.Visual visual) [static] :15
Button* Button::New1(::g::Fuse::Visual* visual)
{
    Button* obj1 = (Button*)uNew(Button_typeof());
    obj1->ctor_2(visual);
    return obj1;
}

// private static void SetText(Java.Object handle, string text) [static] :40
void Button::SetText(::g::Java::Object* handle, uString* text)
{
    uStackFrame __("Fuse.Controls.Native.Android.Button", "SetText(Java.Object,string)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetText58", "(Ljava/lang/Object;Ljava/lang/String;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uString* _utext=text;
        jstring _text = JniHelper::UnoToJavaString(_utext);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_text);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_text!=NULL) { U_JNIVAR->DeleteLocalRef(_text); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/android/$.uno
// -----------------------------------------------------------------------

// internal sealed extern class Circle :58
// {
static void Circle_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Circle_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Circle_type, interface1),
        ::g::Fuse::Controls::Native::IShapeView_typeof(), offsetof(Circle_type, interface2),
        ::g::Fuse::Controls::Native::ICircleView_typeof(), offsetof(Circle_type, interface3));
    type->SetFields(9,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Circle, _endAngle), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Circle, _startAngle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Circle, _useAngle), 0);
}

Circle_type* Circle_typeof()
{
    static uSStrong<Circle_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::Shape_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Circle);
    options.TypeSize = sizeof(Circle_type);
    type = (Circle_type*)uClassType::New("Fuse.Controls.Native.Android.Circle", options);
    type->fp_build_ = Circle_build;
    type->fp_ctor_ = (void*)Circle__New1_fn;
    type->fp_OnSizeChanged = (void(*)(::g::Fuse::Controls::Native::Android::View*))Circle__OnSizeChanged_fn;
    type->fp_UpdateShapeDrawable = (void(*)(::g::Fuse::Controls::Native::Android::Shape*, ::g::Java::Object*, float*))Circle__UpdateShapeDrawable_fn;
    type->interface3.fp_set_StartAngleDegrees = (void(*)(uObject*, float*))Circle__FuseControlsNativeICircleViewset_StartAngleDegrees_fn;
    type->interface3.fp_set_EndAngleDegrees = (void(*)(uObject*, float*))Circle__FuseControlsNativeICircleViewset_EndAngleDegrees_fn;
    type->interface3.fp_set_UseAngle = (void(*)(uObject*, bool*))Circle__FuseControlsNativeICircleViewset_UseAngle_fn;
    type->interface3.fp_set_EffectiveEndAngleDegrees = (void(*)(uObject*, float*))Circle__FuseControlsNativeICircleViewset_EffectiveEndAngleDegrees_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Dispose_fn;
    type->interface2.fp_Update = (void(*)(uObject*, uArray*, uArray*, float*))::g::Fuse::Controls::Native::Android::Shape__FuseControlsNativeIShapeViewUpdate_fn;
    return type;
}

// public generated Circle() :58
void Circle__ctor_2_fn(Circle* __this)
{
    __this->ctor_2();
}

// private void Fuse.Controls.Native.ICircleView.set_EffectiveEndAngleDegrees(float value) :91
void Circle__FuseControlsNativeICircleViewset_EffectiveEndAngleDegrees_fn(Circle* __this, float* value)
{
}

// private void Fuse.Controls.Native.ICircleView.set_EndAngleDegrees(float value) :74
void Circle__FuseControlsNativeICircleViewset_EndAngleDegrees_fn(Circle* __this, float* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.Circle", "Fuse.Controls.Native.ICircleView.set_EndAngleDegrees(float)");
    float value_ = *value;
    __this->_endAngle = value_;
    __this->OnShapeChanged();
}

// private void Fuse.Controls.Native.ICircleView.set_StartAngleDegrees(float value) :64
void Circle__FuseControlsNativeICircleViewset_StartAngleDegrees_fn(Circle* __this, float* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.Circle", "Fuse.Controls.Native.ICircleView.set_StartAngleDegrees(float)");
    float value_ = *value;
    __this->_startAngle = value_;
    __this->OnShapeChanged();
}

// private void Fuse.Controls.Native.ICircleView.set_UseAngle(bool value) :84
void Circle__FuseControlsNativeICircleViewset_UseAngle_fn(Circle* __this, bool* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.Circle", "Fuse.Controls.Native.ICircleView.set_UseAngle(bool)");
    bool value_ = *value;
    __this->_useAngle = value_;
    __this->OnShapeChanged();
}

// public generated Circle New() :58
void Circle__New1_fn(Circle** __retval)
{
    *__retval = Circle::New1();
}

// protected override sealed void OnSizeChanged() :98
void Circle__OnSizeChanged_fn(Circle* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.Circle", "OnSizeChanged()");
    __this->OnShapeChanged();
}

// private void UpdateShapeDrawable(Java.Object handle, bool useAngle, float width, float height, float startAngle, float endAngle) :104
void Circle__UpdateShapeDrawable1_fn(Circle* __this, ::g::Java::Object* handle, bool* useAngle, float* width, float* height, float* startAngle, float* endAngle)
{
    __this->UpdateShapeDrawable1(handle, *useAngle, *width, *height, *startAngle, *endAngle);
}

// protected override sealed void UpdateShapeDrawable(Java.Object handle, float pixelsPerPoint) :93
void Circle__UpdateShapeDrawable_fn(Circle* __this, ::g::Java::Object* handle, float* pixelsPerPoint)
{
    uStackFrame __("Fuse.Controls.Native.Android.Circle", "UpdateShapeDrawable(Java.Object,float)");
    __this->UpdateShapeDrawable1(handle, __this->_useAngle, __this->Size().X, __this->Size().Y, __this->_startAngle, __this->_endAngle);
}

// public generated Circle() [instance] :58
void Circle::ctor_2()
{
    uStackFrame __("Fuse.Controls.Native.Android.Circle", ".ctor()");
    ctor_1();
}

// private void UpdateShapeDrawable(Java.Object handle, bool useAngle, float width, float height, float startAngle, float endAngle) [instance] :104
void Circle::UpdateShapeDrawable1(::g::Java::Object* handle, bool useAngle, float width, float height, float startAngle, float endAngle)
{
    uStackFrame __("Fuse.Controls.Native.Android.Circle", "UpdateShapeDrawable(Java.Object,bool,float,float,float,float)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "UpdateShapeDrawable159", "(Lcom/uno/UnoObject;Ljava/lang/Object;ZFFFF)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool _uuseAngle=useAngle;
        jboolean _useAngle = (jboolean)_uuseAngle;
        float _uwidth=width;
        jfloat _width = (jfloat)_uwidth;
        float _uheight=height;
        jfloat _height = (jfloat)_uheight;
        float _ustartAngle=startAngle;
        jfloat _startAngle = (jfloat)_ustartAngle;
        float _uendAngle=endAngle;
        jfloat _endAngle = (jfloat)_uendAngle;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle,_useAngle,_width,_height,_startAngle,_endAngle);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public generated Circle New() [static] :58
Circle* Circle::New1()
{
    Circle* obj1 = (Circle*)uNew(Circle_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/android/$.uno
// -----------------------------------------------------------------------

// public sealed extern class DrawableViewGroup :125
// {
static void DrawableViewGroup_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Func1_typeof()->MakeType(::g::Java::Object_typeof(), ::g::Uno::Bool_typeof());
    ::TYPES[2] = ::g::Fuse::Controls::Native::IOffscreenRenderer_typeof();
    ::TYPES[3] = ::g::Uno::IDisposable_typeof();
    ::TYPES[4] = ::g::Fuse::Controls::Native::INativeViewRenderer_typeof();
    ::TYPES[5] = ::g::Fuse::Controls::Native::Android::View_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(DrawableViewGroup_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(DrawableViewGroup_type, interface1),
        ::g::Fuse::Controls::Native::IViewGroup_typeof(), offsetof(DrawableViewGroup_type, interface2),
        ::g::Fuse::Controls::Native::IOffscreenRenderer_typeof(), offsetof(DrawableViewGroup_type, interface3),
        ::g::Fuse::Controls::Native::Android::IViewParent_typeof(), offsetof(DrawableViewGroup_type, interface4),
        ::g::Fuse::Controls::Native::INativeViewRenderer_typeof(), offsetof(DrawableViewGroup_type, interface5));
    type->SetFields(6,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::DrawableViewGroup, _container), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::Android::DrawableViewGroup, _hitTestEnabled), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::Android::DrawableViewGroup, _isEnabled), 0,
        ::g::Fuse::Controls::Native::INativeViewRenderer_typeof(), offsetof(::g::Fuse::Controls::Native::Android::DrawableViewGroup, _nativeViewRenderer), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::DrawableViewGroup, _offscreenParent), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DrawableViewGroup__New1_fn, 0, true, DrawableViewGroup_typeof(), 1, ::g::Fuse::Controls::Native::OffscreenRendering_typeof()));
}

DrawableViewGroup_type* DrawableViewGroup_typeof()
{
    static uSStrong<DrawableViewGroup_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::View_typeof();
    options.FieldCount = 11;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(DrawableViewGroup);
    options.TypeSize = sizeof(DrawableViewGroup_type);
    type = (DrawableViewGroup_type*)uClassType::New("Fuse.Controls.Native.Android.DrawableViewGroup", options);
    type->fp_build_ = DrawableViewGroup_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::Android::View*))DrawableViewGroup__Dispose_fn;
    type->interface2.fp_Add = (void(*)(uObject*, uObject*))DrawableViewGroup__FuseControlsNativeIViewGroupAdd_fn;
    type->interface2.fp_Add1 = (void(*)(uObject*, uObject*, int*))DrawableViewGroup__FuseControlsNativeIViewGroupAdd1_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, uObject*))DrawableViewGroup__FuseControlsNativeIViewGroupRemove_fn;
    type->interface4.fp_SetChildSize = (void(*)(uObject*, ::g::Fuse::Controls::Native::Android::View*, ::g::Uno::Float2*))DrawableViewGroup__FuseControlsNativeAndroidIViewParentSetChildSize_fn;
    type->interface3.fp_EnableOffscreen = (void(*)(uObject*))DrawableViewGroup__FuseControlsNativeIOffscreenRendererEnableOffscreen_fn;
    type->interface3.fp_DisableOffscreen = (void(*)(uObject*))DrawableViewGroup__FuseControlsNativeIOffscreenRendererDisableOffscreen_fn;
    type->interface5.fp_Draw = (void(*)(uObject*, ::g::Uno::Float4x4*, ::g::Uno::Float2*, ::g::Uno::Float2*, float*))DrawableViewGroup__FuseControlsNativeINativeViewRendererDraw_fn;
    type->interface5.fp_Invalidate = (void(*)(uObject*))DrawableViewGroup__FuseControlsNativeINativeViewRendererInvalidate_fn;
    type->interface2.fp_set_HitTestEnabled = (void(*)(uObject*, bool*))DrawableViewGroup__FuseControlsNativeIViewGroupset_HitTestEnabled_fn;
    type->interface2.fp_set_ClipToBounds = (void(*)(uObject*, bool*))DrawableViewGroup__FuseControlsNativeIViewGroupset_ClipToBounds_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))DrawableViewGroup__Dispose_fn;
    return type;
}

// public DrawableViewGroup(Fuse.Controls.Native.OffscreenRendering initialState) :131
void DrawableViewGroup__ctor_1_fn(DrawableViewGroup* __this, int* initialState)
{
    __this->ctor_1(*initialState);
}

// private static void AddView(Java.Object parentHandle, Java.Object childHandle) :234
void DrawableViewGroup__AddView_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    DrawableViewGroup::AddView(parentHandle, childHandle);
}

// private static void AddView(Java.Object parentHandle, Java.Object childHandle, int index) :242
void DrawableViewGroup__AddView1_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle, int* index)
{
    DrawableViewGroup::AddView1(parentHandle, childHandle, *index);
}

// private static Java.Object Create() :267
void DrawableViewGroup__Create_fn(::g::Java::Object** __retval)
{
    *__retval = DrawableViewGroup::Create();
}

// public override sealed void Dispose() :144
void DrawableViewGroup__Dispose_fn(DrawableViewGroup* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.DrawableViewGroup", "Dispose()");
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_nativeViewRenderer), ::TYPES[3/*Uno.IDisposable*/]));
    __this->_nativeViewRenderer = NULL;
    __this->_container = NULL;
    ::g::Fuse::Controls::Native::Android::View__Dispose_fn(__this);
}

// private void Fuse.Controls.Native.Android.IViewParent.SetChildSize(Fuse.Controls.Native.Android.View view, float2 size) :189
void DrawableViewGroup__FuseControlsNativeAndroidIViewParentSetChildSize_fn(DrawableViewGroup* __this, ::g::Fuse::Controls::Native::Android::View* view, ::g::Uno::Float2* size)
{
    uStackFrame __("Fuse.Controls.Native.Android.DrawableViewGroup", "Fuse.Controls.Native.Android.IViewParent.SetChildSize(Fuse.Controls.Native.Android.View,float2)");
    ::g::Uno::Float2 size_ = *size;
    DrawableViewGroup::SetChildSize(uPtr(view)->Handle(), (int)size_.X, (int)size_.Y);
}

// private void Fuse.Controls.Native.INativeViewRenderer.Draw(float4x4 localToClipTransform, float2 position, float2 size, float density) :215
void DrawableViewGroup__FuseControlsNativeINativeViewRendererDraw_fn(DrawableViewGroup* __this, ::g::Uno::Float4x4* localToClipTransform, ::g::Uno::Float2* position, ::g::Uno::Float2* size, float* density)
{
    uStackFrame __("Fuse.Controls.Native.Android.DrawableViewGroup", "Fuse.Controls.Native.INativeViewRenderer.Draw(float4x4,float2,float2,float)");
    ::g::Uno::Float4x4 localToClipTransform_ = *localToClipTransform;
    ::g::Uno::Float2 position_ = *position;
    ::g::Uno::Float2 size_ = *size;
    float density_ = *density;
    ::g::Fuse::Controls::Native::INativeViewRenderer::Draw(uInterface(uPtr(__this->_nativeViewRenderer), ::TYPES[4/*Fuse.Controls.Native.INativeViewRenderer*/]), localToClipTransform_, position_, size_, density_);
}

// private void Fuse.Controls.Native.INativeViewRenderer.Invalidate() :220
void DrawableViewGroup__FuseControlsNativeINativeViewRendererInvalidate_fn(DrawableViewGroup* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.DrawableViewGroup", "Fuse.Controls.Native.INativeViewRenderer.Invalidate()");
    ::g::Fuse::Controls::Native::INativeViewRenderer::Invalidate(uInterface(uPtr(__this->_nativeViewRenderer), ::TYPES[4/*Fuse.Controls.Native.INativeViewRenderer*/]));
}

// private void Fuse.Controls.Native.IOffscreenRenderer.DisableOffscreen() :205
void DrawableViewGroup__FuseControlsNativeIOffscreenRendererDisableOffscreen_fn(DrawableViewGroup* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.DrawableViewGroup", "Fuse.Controls.Native.IOffscreenRenderer.DisableOffscreen()");

    if (__this->_isEnabled)
    {
        DrawableViewGroup::RemoveView(__this->_offscreenParent, __this->_container);
        DrawableViewGroup::AddView(__this->Handle(), __this->_container);
        __this->_isEnabled = false;
    }
}

// private void Fuse.Controls.Native.IOffscreenRenderer.EnableOffscreen() :195
void DrawableViewGroup__FuseControlsNativeIOffscreenRendererEnableOffscreen_fn(DrawableViewGroup* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.DrawableViewGroup", "Fuse.Controls.Native.IOffscreenRenderer.EnableOffscreen()");

    if (!__this->_isEnabled)
    {
        DrawableViewGroup::RemoveView(__this->Handle(), __this->_container);
        DrawableViewGroup::AddView(__this->_offscreenParent, __this->_container);
        __this->_isEnabled = true;
    }
}

// private void Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView child) :168
void DrawableViewGroup__FuseControlsNativeIViewGroupAdd_fn(DrawableViewGroup* __this, uObject* child)
{
    uStackFrame __("Fuse.Controls.Native.Android.DrawableViewGroup", "Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView)");
    ::g::Fuse::Controls::Native::Android::View* x = uCast< ::g::Fuse::Controls::Native::Android::View*>(child, ::TYPES[5/*Fuse.Controls.Native.Android.View*/]);
    uPtr(x)->Parent((uObject*)__this);
    DrawableViewGroup::AddView(__this->_container, x->Handle());
}

// private void Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView child, int index) :175
void DrawableViewGroup__FuseControlsNativeIViewGroupAdd1_fn(DrawableViewGroup* __this, uObject* child, int* index)
{
    uStackFrame __("Fuse.Controls.Native.Android.DrawableViewGroup", "Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView,int)");
    int index_ = *index;
    ::g::Fuse::Controls::Native::Android::View* x = uCast< ::g::Fuse::Controls::Native::Android::View*>(child, ::TYPES[5/*Fuse.Controls.Native.Android.View*/]);
    uPtr(x)->Parent((uObject*)__this);
    DrawableViewGroup::AddView1(__this->_container, x->Handle(), index_);
}

// private void Fuse.Controls.Native.IViewGroup.set_ClipToBounds(bool value) :165
void DrawableViewGroup__FuseControlsNativeIViewGroupset_ClipToBounds_fn(DrawableViewGroup* __this, bool* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.DrawableViewGroup", "Fuse.Controls.Native.IViewGroup.set_ClipToBounds(bool)");
    bool value_ = *value;
    DrawableViewGroup::SetClipToBounds(__this->Handle(), value_);
}

// private void Fuse.Controls.Native.IViewGroup.set_HitTestEnabled(bool value) :160
void DrawableViewGroup__FuseControlsNativeIViewGroupset_HitTestEnabled_fn(DrawableViewGroup* __this, bool* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.DrawableViewGroup", "Fuse.Controls.Native.IViewGroup.set_HitTestEnabled(bool)");
    bool value_ = *value;
    __this->_hitTestEnabled = value_;
}

// private void Fuse.Controls.Native.IViewGroup.Remove(Fuse.Controls.Native.IView child) :182
void DrawableViewGroup__FuseControlsNativeIViewGroupRemove_fn(DrawableViewGroup* __this, uObject* child)
{
    uStackFrame __("Fuse.Controls.Native.Android.DrawableViewGroup", "Fuse.Controls.Native.IViewGroup.Remove(Fuse.Controls.Native.IView)");
    ::g::Fuse::Controls::Native::Android::View* x = uCast< ::g::Fuse::Controls::Native::Android::View*>(child, ::TYPES[5/*Fuse.Controls.Native.Android.View*/]);
    DrawableViewGroup::RemoveView(__this->_container, uPtr(x)->Handle());
    x->Parent(NULL);
}

// private static void HideOffscreenParent(Java.Object handle) :259
void DrawableViewGroup__HideOffscreenParent_fn(::g::Java::Object* handle)
{
    DrawableViewGroup::HideOffscreenParent(handle);
}

// private bool InterceptTouchEvent(Java.Object motionEvent) :152
void DrawableViewGroup__InterceptTouchEvent_fn(DrawableViewGroup* __this, ::g::Java::Object* motionEvent, bool* __retval)
{
    *__retval = __this->InterceptTouchEvent(motionEvent);
}

// public DrawableViewGroup New(Fuse.Controls.Native.OffscreenRendering initialState) :131
void DrawableViewGroup__New1_fn(int* initialState, DrawableViewGroup** __retval)
{
    *__retval = DrawableViewGroup::New1(*initialState);
}

// private static void RemoveView(Java.Object parentHandle, Java.Object childHandle) :250
void DrawableViewGroup__RemoveView_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    DrawableViewGroup::RemoveView(parentHandle, childHandle);
}

// private static void SetChildSize(Java.Object handle, int w, int h) :279
void DrawableViewGroup__SetChildSize_fn(::g::Java::Object* handle, int* w, int* h)
{
    DrawableViewGroup::SetChildSize(handle, *w, *h);
}

// private static void SetClipToBounds(Java.Object handle, bool clipToBounds) :226
void DrawableViewGroup__SetClipToBounds_fn(::g::Java::Object* handle, bool* clipToBounds)
{
    DrawableViewGroup::SetClipToBounds(handle, *clipToBounds);
}

// public DrawableViewGroup(Fuse.Controls.Native.OffscreenRendering initialState) [instance] :131
void DrawableViewGroup::ctor_1(int initialState)
{
    uStackFrame __("Fuse.Controls.Native.Android.DrawableViewGroup", ".ctor(Fuse.Controls.Native.OffscreenRendering)");
    _hitTestEnabled = true;
    ctor_(DrawableViewGroup::Create());
    _container = DrawableViewGroup::Create();
    _offscreenParent = DrawableViewGroup::Create();
    _nativeViewRenderer = (uObject*)::g::Fuse::Controls::Native::Android::NativeViewRenderer::New1(_container);
    DrawableViewGroup::AddView(Handle(), _offscreenParent);
    DrawableViewGroup::AddView(Handle(), _container);
    DrawableViewGroup::HideOffscreenParent(_offscreenParent);
    ::g::Fuse::Controls::Native::Android::ViewGroup::InstallTouchInterceptCallback(Handle(), uDelegate::New(::TYPES[1/*Uno.Func<Java.Object, bool>*/], (void*)DrawableViewGroup__InterceptTouchEvent_fn, this));

    if (initialState == 0)
        ::g::Fuse::Controls::Native::IOffscreenRenderer::EnableOffscreen(uInterface((uObject*)this, ::TYPES[2/*Fuse.Controls.Native.IOffscreenRenderer*/]));
}

// private bool InterceptTouchEvent(Java.Object motionEvent) [instance] :152
bool DrawableViewGroup::InterceptTouchEvent(::g::Java::Object* motionEvent)
{
    uStackFrame __("Fuse.Controls.Native.Android.DrawableViewGroup", "InterceptTouchEvent(Java.Object)");
    return !_hitTestEnabled;
}

// private static void AddView(Java.Object parentHandle, Java.Object childHandle) [static] :234
void DrawableViewGroup::AddView(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.DrawableViewGroup", "AddView(Java.Object,Java.Object)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddView60", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uparentHandle=parentHandle;
        jobject _parentHandle = (_uparentHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uparentHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uchildHandle=childHandle;
        jobject _childHandle = (_uchildHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uchildHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_parentHandle,_childHandle);
        
        if (_parentHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_parentHandle); }
        if (_childHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_childHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void AddView(Java.Object parentHandle, Java.Object childHandle, int index) [static] :242
void DrawableViewGroup::AddView1(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle, int index)
{
    uStackFrame __("Fuse.Controls.Native.Android.DrawableViewGroup", "AddView(Java.Object,Java.Object,int)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddView161", "(Ljava/lang/Object;Ljava/lang/Object;I)V");
        ::g::Java::Object* _uparentHandle=parentHandle;
        jobject _parentHandle = (_uparentHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uparentHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uchildHandle=childHandle;
        jobject _childHandle = (_uchildHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uchildHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uindex=index;
        jint _index = (jint)_uindex;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_parentHandle,_childHandle,_index);
        
        if (_parentHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_parentHandle); }
        if (_childHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_childHandle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static Java.Object Create() [static] :267
::g::Java::Object* DrawableViewGroup::Create()
{
    uStackFrame __("Fuse.Controls.Native.Android.DrawableViewGroup", "Create()");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create62", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static void HideOffscreenParent(Java.Object handle) [static] :259
void DrawableViewGroup::HideOffscreenParent(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.DrawableViewGroup", "HideOffscreenParent(Java.Object)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "HideOffscreenParent63", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public DrawableViewGroup New(Fuse.Controls.Native.OffscreenRendering initialState) [static] :131
DrawableViewGroup* DrawableViewGroup::New1(int initialState)
{
    DrawableViewGroup* obj1 = (DrawableViewGroup*)uNew(DrawableViewGroup_typeof());
    obj1->ctor_1(initialState);
    return obj1;
}

// private static void RemoveView(Java.Object parentHandle, Java.Object childHandle) [static] :250
void DrawableViewGroup::RemoveView(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.DrawableViewGroup", "RemoveView(Java.Object,Java.Object)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "RemoveView64", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uparentHandle=parentHandle;
        jobject _parentHandle = (_uparentHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uparentHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uchildHandle=childHandle;
        jobject _childHandle = (_uchildHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uchildHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_parentHandle,_childHandle);
        
        if (_parentHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_parentHandle); }
        if (_childHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_childHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetChildSize(Java.Object handle, int w, int h) [static] :279
void DrawableViewGroup::SetChildSize(::g::Java::Object* handle, int w, int h)
{
    uStackFrame __("Fuse.Controls.Native.Android.DrawableViewGroup", "SetChildSize(Java.Object,int,int)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetChildSize65", "(Ljava/lang/Object;II)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uw=w;
        jint _w = (jint)_uw;
        int _uh=h;
        jint _h = (jint)_uh;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_w,_h);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetClipToBounds(Java.Object handle, bool clipToBounds) [static] :226
void DrawableViewGroup::SetClipToBounds(::g::Java::Object* handle, bool clipToBounds)
{
    uStackFrame __("Fuse.Controls.Native.Android.DrawableViewGroup", "SetClipToBounds(Java.Object,bool)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetClipToBounds66", "(Ljava/lang/Object;Z)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool _uclipToBounds=clipToBounds;
        jboolean _clipToBounds = (jboolean)_uclipToBounds;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_clipToBounds);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/android/$.uno
// -----------------------------------------------------------------------

// internal sealed extern class Ellipse :296
// {
static void Ellipse_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Shape_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Shape_type, interface1),
        ::g::Fuse::Controls::Native::IShapeView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Shape_type, interface2));
    type->SetFields(9);
}

::g::Fuse::Controls::Native::Android::Shape_type* Ellipse_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Native::Android::Shape_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::Shape_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Ellipse);
    options.TypeSize = sizeof(::g::Fuse::Controls::Native::Android::Shape_type);
    type = (::g::Fuse::Controls::Native::Android::Shape_type*)uClassType::New("Fuse.Controls.Native.Android.Ellipse", options);
    type->fp_build_ = Ellipse_build;
    type->fp_ctor_ = (void*)Ellipse__New1_fn;
    type->fp_UpdateShapeDrawable = (void(*)(::g::Fuse::Controls::Native::Android::Shape*, ::g::Java::Object*, float*))Ellipse__UpdateShapeDrawable_fn;
    type->interface2.fp_Update = (void(*)(uObject*, uArray*, uArray*, float*))::g::Fuse::Controls::Native::Android::Shape__FuseControlsNativeIShapeViewUpdate_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Dispose_fn;
    return type;
}

// public generated Ellipse() :296
void Ellipse__ctor_2_fn(Ellipse* __this)
{
    __this->ctor_2();
}

// public generated Ellipse New() :296
void Ellipse__New1_fn(Ellipse** __retval)
{
    *__retval = Ellipse::New1();
}

// private void UpdateShapeDrawable(Java.Object handle) :304
void Ellipse__UpdateShapeDrawable1_fn(Ellipse* __this, ::g::Java::Object* handle)
{
    __this->UpdateShapeDrawable1(handle);
}

// protected override sealed void UpdateShapeDrawable(Java.Object handle, float pixelsPerPoint) :298
void Ellipse__UpdateShapeDrawable_fn(Ellipse* __this, ::g::Java::Object* handle, float* pixelsPerPoint)
{
    uStackFrame __("Fuse.Controls.Native.Android.Ellipse", "UpdateShapeDrawable(Java.Object,float)");
    __this->UpdateShapeDrawable1(handle);
}

// public generated Ellipse() [instance] :296
void Ellipse::ctor_2()
{
    uStackFrame __("Fuse.Controls.Native.Android.Ellipse", ".ctor()");
    ctor_1();
}

// private void UpdateShapeDrawable(Java.Object handle) [instance] :304
void Ellipse::UpdateShapeDrawable1(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.Ellipse", "UpdateShapeDrawable(Java.Object)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "UpdateShapeDrawable167", "(Lcom/uno/UnoObject;Ljava/lang/Object;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public generated Ellipse New() [static] :296
Ellipse* Ellipse::New1()
{
    Ellipse* obj1 = (Ellipse*)uNew(Ellipse_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/android/$.uno
// -----------------------------------------------------------------------

// internal sealed extern class FocusChangedListener :2489
// {
static void FocusChangedListener_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(FocusChangedListener_type, interface0));
    type->SetFields(0,
        ::g::Uno::Action2_typeof()->MakeType(::g::Java::Object_typeof(), ::g::Uno::Bool_typeof()), offsetof(::g::Fuse::Controls::Native::Android::FocusChangedListener, _callback), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::FocusChangedListener, _listener), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::FocusChangedListener, _view), 0);
}

FocusChangedListener_type* FocusChangedListener_typeof()
{
    static uSStrong<FocusChangedListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FocusChangedListener);
    options.TypeSize = sizeof(FocusChangedListener_type);
    type = (FocusChangedListener_type*)uClassType::New("Fuse.Controls.Native.Android.FocusChangedListener", options);
    type->fp_build_ = FocusChangedListener_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))FocusChangedListener__Dispose_fn;
    return type;
}

// private FocusChangedListener(Java.Object view, Uno.Action<Java.Object, bool> callback) :2496
void FocusChangedListener__ctor__fn(FocusChangedListener* __this, ::g::Java::Object* view, uDelegate* callback)
{
    __this->ctor_(view, callback);
}

// public static Uno.IDisposable AddHandler(Java.Object view, Uno.Action<Java.Object, bool> callback) :2511
void FocusChangedListener__AddHandler_fn(::g::Java::Object* view, uDelegate* callback, uObject** __retval)
{
    *__retval = FocusChangedListener::AddHandler(view, callback);
}

// private static void ClearListener(Java.Object viewHandle) :2541
void FocusChangedListener__ClearListener_fn(::g::Java::Object* viewHandle)
{
    FocusChangedListener::ClearListener(viewHandle);
}

// private Java.Object Create() :2524
void FocusChangedListener__Create_fn(FocusChangedListener* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->Create();
}

// public void Dispose() :2518
void FocusChangedListener__Dispose_fn(FocusChangedListener* __this)
{
    __this->Dispose();
}

// private FocusChangedListener New(Java.Object view, Uno.Action<Java.Object, bool> callback) :2496
void FocusChangedListener__New1_fn(::g::Java::Object* view, uDelegate* callback, FocusChangedListener** __retval)
{
    *__retval = FocusChangedListener::New1(view, callback);
}

// private void OnFocusChange(bool hasFocus) :2506
void FocusChangedListener__OnFocusChange_fn(FocusChangedListener* __this, bool* hasFocus)
{
    __this->OnFocusChange(*hasFocus);
}

// private static void SetListener(Java.Object viewHandle, Java.Object listenerHandle) :2535
void FocusChangedListener__SetListener_fn(::g::Java::Object* viewHandle, ::g::Java::Object* listenerHandle)
{
    FocusChangedListener::SetListener(viewHandle, listenerHandle);
}

// private FocusChangedListener(Java.Object view, Uno.Action<Java.Object, bool> callback) [instance] :2496
void FocusChangedListener::ctor_(::g::Java::Object* view, uDelegate* callback)
{
    uStackFrame __("Fuse.Controls.Native.Android.FocusChangedListener", ".ctor(Java.Object,Uno.Action<Java.Object, bool>)");
    _view = view;
    _callback = callback;
    _listener = Create();
    FocusChangedListener::SetListener(_view, _listener);
}

// private Java.Object Create() [instance] :2524
::g::Java::Object* FocusChangedListener::Create()
{
    uStackFrame __("Fuse.Controls.Native.Android.FocusChangedListener", "Create()");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create69", "(Lcom/uno/UnoObject;)Ljava/lang/Object;");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_this_);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public void Dispose() [instance] :2518
void FocusChangedListener::Dispose()
{
    uStackFrame __("Fuse.Controls.Native.Android.FocusChangedListener", "Dispose()");
    FocusChangedListener::ClearListener(_view);
}

// private void OnFocusChange(bool hasFocus) [instance] :2506
void FocusChangedListener::OnFocusChange(bool hasFocus)
{
    uStackFrame __("Fuse.Controls.Native.Android.FocusChangedListener", "OnFocusChange(bool)");
    uPtr(_callback)->Invoke(2, (::g::Java::Object*)_view, uCRef(hasFocus));
}

// public static Uno.IDisposable AddHandler(Java.Object view, Uno.Action<Java.Object, bool> callback) [static] :2511
uObject* FocusChangedListener::AddHandler(::g::Java::Object* view, uDelegate* callback)
{
    uStackFrame __("Fuse.Controls.Native.Android.FocusChangedListener", "AddHandler(Java.Object,Uno.Action<Java.Object, bool>)");
    return (uObject*)FocusChangedListener::New1(view, callback);
}

// private static void ClearListener(Java.Object viewHandle) [static] :2541
void FocusChangedListener::ClearListener(::g::Java::Object* viewHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.FocusChangedListener", "ClearListener(Java.Object)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ClearListener68", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_viewHandle);
        
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private FocusChangedListener New(Java.Object view, Uno.Action<Java.Object, bool> callback) [static] :2496
FocusChangedListener* FocusChangedListener::New1(::g::Java::Object* view, uDelegate* callback)
{
    FocusChangedListener* obj1 = (FocusChangedListener*)uNew(FocusChangedListener_typeof());
    obj1->ctor_(view, callback);
    return obj1;
}

// private static void SetListener(Java.Object viewHandle, Java.Object listenerHandle) [static] :2535
void FocusChangedListener::SetListener(::g::Java::Object* viewHandle, ::g::Java::Object* listenerHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.FocusChangedListener", "SetListener(Java.Object,Java.Object)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetListener71", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ulistenerHandle=listenerHandle;
        jobject _listenerHandle = (_ulistenerHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ulistenerHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_viewHandle,_listenerHandle);
        
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        if (_listenerHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_listenerHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/android/$.uno
// -----------------------------------------------------------------------

// internal sealed extern class FocusManager :2417
// {
// static FocusManager() :2417
static void FocusManager__cctor__fn(uType* __type)
{
    FocusManager::Singleton_ = FocusManager::New1();
}

static void FocusManager_build(uType* type)
{
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::FocusManager, HideKeyboardContext), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::FocusManager, HideKeyboardWindowToken), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::FocusManager, LoseFocus), 0,
        FocusManager_typeof(), (uintptr_t)&::g::Fuse::Controls::Native::Android::FocusManager::Singleton_, uFieldFlagsStatic);
}

uType* FocusManager_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(FocusManager);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.FocusManager", options);
    type->fp_build_ = FocusManager_build;
    type->fp_ctor_ = (void*)FocusManager__New1_fn;
    type->fp_cctor_ = FocusManager__cctor__fn;
    return type;
}

// public generated FocusManager() :2417
void FocusManager__ctor__fn(FocusManager* __this)
{
    __this->ctor_();
}

// public void CompleteFocusLoss() :2425
void FocusManager__CompleteFocusLoss_fn(FocusManager* __this)
{
    __this->CompleteFocusLoss();
}

// public static Java.Object GetContext(Java.Object viewHandle) :2454
void FocusManager__GetContext_fn(::g::Java::Object* viewHandle, ::g::Java::Object** __retval)
{
    *__retval = FocusManager::GetContext(viewHandle);
}

// public static Java.Object GetWindowToken(Java.Object viewHandle) :2460
void FocusManager__GetWindowToken_fn(::g::Java::Object* viewHandle, ::g::Java::Object** __retval)
{
    *__retval = FocusManager::GetWindowToken(viewHandle);
}

// private static bool HasFocus(Java.Object viewHandle) :2442
void FocusManager__HasFocus_fn(::g::Java::Object* viewHandle, bool* __retval)
{
    *__retval = FocusManager::HasFocus(viewHandle);
}

// public generated FocusManager New() :2417
void FocusManager__New1_fn(FocusManager** __retval)
{
    *__retval = FocusManager::New1();
}

// private static void RequestRootViewFocus(Java.Object viewHandle) :2448
void FocusManager__RequestRootViewFocus_fn(::g::Java::Object* viewHandle)
{
    FocusManager::RequestRootViewFocus(viewHandle);
}

uSStrong<FocusManager*> FocusManager::Singleton_;

// public generated FocusManager() [instance] :2417
void FocusManager::ctor_()
{
}

// public void CompleteFocusLoss() [instance] :2425
void FocusManager::CompleteFocusLoss()
{
    uStackFrame __("Fuse.Controls.Native.Android.FocusManager", "CompleteFocusLoss()");

    if (LoseFocus != NULL)
    {
        if (FocusManager::HasFocus(LoseFocus))
            FocusManager::RequestRootViewFocus(LoseFocus);

        LoseFocus = NULL;
    }

    if (HideKeyboardContext != NULL)
    {
        ::g::Fuse::Controls::Native::Android::SoftKeyboard::HideKeyboard(HideKeyboardContext, HideKeyboardWindowToken);
        HideKeyboardContext = NULL;
    }
}

// public static Java.Object GetContext(Java.Object viewHandle) [static] :2454
::g::Java::Object* FocusManager::GetContext(::g::Java::Object* viewHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.FocusManager", "GetContext(Java.Object)");
    FocusManager_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetContext72", "(Ljava/lang/Object;)Ljava/lang/Object;");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_viewHandle);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static Java.Object GetWindowToken(Java.Object viewHandle) [static] :2460
::g::Java::Object* FocusManager::GetWindowToken(::g::Java::Object* viewHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.FocusManager", "GetWindowToken(Java.Object)");
    FocusManager_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetWindowToken73", "(Ljava/lang/Object;)Ljava/lang/Object;");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_viewHandle);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static bool HasFocus(Java.Object viewHandle) [static] :2442
bool FocusManager::HasFocus(::g::Java::Object* viewHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.FocusManager", "HasFocus(Java.Object)");
    FocusManager_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "HasFocus74", "(Ljava/lang/Object;)Z");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jboolean __jresult = U_JNIVAR->CallStaticBooleanMethod(__cls,__mtd,_viewHandle);
        bool __result = (bool)__jresult;
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public generated FocusManager New() [static] :2417
FocusManager* FocusManager::New1()
{
    FocusManager* obj1 = (FocusManager*)uNew(FocusManager_typeof());
    obj1->ctor_();
    return obj1;
}

// private static void RequestRootViewFocus(Java.Object viewHandle) [static] :2448
void FocusManager::RequestRootViewFocus(::g::Java::Object* viewHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.FocusManager", "RequestRootViewFocus(Java.Object)");
    FocusManager_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "RequestRootViewFocus75", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_viewHandle);
        
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/android/$.uno
// -----------------------------------------------------------------------

// public abstract extern class GraphicsView :325
// {
static void GraphicsView_build(uType* type)
{
    ::TYPES[6] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(GraphicsView_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(GraphicsView_type, interface1),
        ::g::Fuse::Controls::Native::IGraphicsView_typeof(), offsetof(GraphicsView_type, interface2));
    type->SetFields(6,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsView, _eglSurface), 0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsView, _nativeWindow), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsView, _surfaceHandle), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("BeginDraw", NULL, (void*)GraphicsView__BeginDraw_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Int2_typeof()),
        new uFunction("EndDraw", NULL, (void*)GraphicsView__EndDraw_fn, 0, false, uVoid_typeof(), 0));
}

GraphicsView_type* GraphicsView_typeof()
{
    static uSStrong<GraphicsView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::View_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(GraphicsView);
    options.TypeSize = sizeof(GraphicsView_type);
    type = (GraphicsView_type*)uClassType::New("Fuse.Controls.Native.Android.GraphicsView", options);
    type->fp_build_ = GraphicsView_build;
    type->interface2.fp_BeginDraw = (void(*)(uObject*, ::g::Uno::Int2*, bool*))GraphicsView__BeginDraw_fn;
    type->interface2.fp_EndDraw = (void(*)(uObject*))GraphicsView__EndDraw_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Dispose_fn;
    return type;
}

// protected GraphicsView(Java.Object handle) :327
void GraphicsView__ctor_1_fn(GraphicsView* __this, ::g::Java::Object* handle)
{
    __this->ctor_1(handle);
}

// public bool BeginDraw(int2 size) :362
void GraphicsView__BeginDraw_fn(GraphicsView* __this, ::g::Uno::Int2* size, bool* __retval)
{
    *__retval = __this->BeginDraw(*size);
}

// protected void DestroySurface() :350
void GraphicsView__DestroySurface_fn(GraphicsView* __this)
{
    __this->DestroySurface();
}

// public void EndDraw() :385
void GraphicsView__EndDraw_fn(GraphicsView* __this)
{
    __this->EndDraw();
}

// protected void SetSurface(Java.Object surfaceHandle) :335
void GraphicsView__SetSurface_fn(GraphicsView* __this, ::g::Java::Object* surfaceHandle)
{
    __this->SetSurface(surfaceHandle);
}

// protected GraphicsView(Java.Object handle) [instance] :327
void GraphicsView::ctor_1(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.GraphicsView", ".ctor(Java.Object)");
    _eglSurface = ::g::Uno::IntPtr::Zero_;
    _nativeWindow = ::g::Uno::IntPtr::Zero_;
    ctor_(handle);
}

// public bool BeginDraw(int2 size) [instance] :362
bool GraphicsView::BeginDraw(::g::Uno::Int2 size)
{
    uStackFrame __("Fuse.Controls.Native.Android.GraphicsView", "BeginDraw(int2)");

    if (::g::Uno::IntPtr::op_Equality(_eglSurface, ::g::Uno::IntPtr::Zero_))
        return false;

    double t;
    GLHelper::MakeCurrent( GLHelper::GetSurfaceContext(), (EGLSurface)_eglSurface );
    ::g::OpenGL::GL::Viewport(0, 0, size.X, size.Y);
    return true;
}

// protected void DestroySurface() [instance] :350
void GraphicsView::DestroySurface()
{
    uStackFrame __("Fuse.Controls.Native.Android.GraphicsView", "DestroySurface()");
    GLHelper::SwapBackToBackgroundSurface( (EGLSurface)_eglSurface );
    _eglSurface = ::g::Uno::IntPtr::Zero_;
    ANativeWindow_release( (ANativeWindow*)_nativeWindow );
    _nativeWindow = ::g::Uno::IntPtr::Zero_;
    _surfaceHandle = NULL;
}

// public void EndDraw() [instance] :385
void GraphicsView::EndDraw()
{
    uStackFrame __("Fuse.Controls.Native.Android.GraphicsView", "EndDraw()");
    double t;
    GLHelper::SwapBuffers( _eglSurface );
}

// protected void SetSurface(Java.Object surfaceHandle) [instance] :335
void GraphicsView::SetSurface(::g::Java::Object* surfaceHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.GraphicsView", "SetSurface(Java.Object)");

    if (_surfaceHandle != NULL)
        ;

    _surfaceHandle = surfaceHandle;
    _nativeWindow = GLHelper::GetANativeWindowFromSurface(uPtr(uCast< ::g::Android::Base::Wrappers::JWrapper*>(_surfaceHandle, ::TYPES[6/*Android.Base.Wrappers.JWrapper*/]))->_GetJavaObject());
    EGLSurface tempSurface;
    GLHelper::CreateNewSurfaceAndMakeCurrent( (ANativeWindow*)_nativeWindow, tempSurface);
    _eglSurface = tempSurface;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/android/$.uno
// -----------------------------------------------------------------------

// internal static class Helpers :408
// {
static void Helpers_build(uType* type)
{
}

uClassType* Helpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.Android.Helpers", options);
    type->fp_build_ = Helpers_build;
    return type;
}

// public static float4 DecodeColor(int color) :420
void Helpers__DecodeColor_fn(int* color, ::g::Uno::Float4* __retval)
{
    *__retval = Helpers::DecodeColor(*color);
}

// public static int EncodeColor(float4 c) :410
void Helpers__EncodeColor_fn(::g::Uno::Float4* c, int* __retval)
{
    *__retval = Helpers::EncodeColor(*c);
}

// public static float4 DecodeColor(int color) [static] :420
::g::Uno::Float4 Helpers::DecodeColor(int color)
{
    uStackFrame __("Fuse.Controls.Native.Android.Helpers", "DecodeColor(int)");
    int a = color >> 24;
    int r = (color >> 16) & 255;
    int g = (color >> 8) & 255;
    int b = color & 255;
    return ::g::Uno::Float4__New2((float)r / 255.0f, (float)g / 255.0f, (float)b / 255.0f, (float)a / 255.0f);
}

// public static int EncodeColor(float4 c) [static] :410
int Helpers::EncodeColor(::g::Uno::Float4 c)
{
    uStackFrame __("Fuse.Controls.Native.Android.Helpers", "EncodeColor(float4)");
    int r = ::g::Uno::Math::Clamp8((int)(c.X * 255.0f), 0, 255);
    int g = ::g::Uno::Math::Clamp8((int)(c.Y * 255.0f), 0, 255);
    int b = ::g::Uno::Math::Clamp8((int)(c.Z * 255.0f), 0, 255);
    int a = ::g::Uno::Math::Clamp8((int)(c.W * 255.0f), 0, 255);
    return (((a << 24) | (r << 16)) | (g << 8)) | b;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/android/$.uno
// -----------------------------------------------------------------------

// internal sealed extern class HttpImageLoader :454
// {
static void HttpImageLoader_build(uType* type)
{
    ::TYPES[7] = ::g::Uno::Action1_typeof()->MakeType(::g::Java::Object_typeof());
    ::TYPES[8] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof());
    type->SetBase(::g::Uno::Threading::Promise_typeof()->MakeType(::g::Java::Object_typeof()));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Future_type, interface0));
    type->SetFields(9,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::Android::HttpImageLoader, _isDisposed1), 0);
}

::g::Uno::Threading::Future_type* HttpImageLoader_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::Promise_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(HttpImageLoader);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("Fuse.Controls.Native.Android.HttpImageLoader", options);
    type->fp_build_ = HttpImageLoader_build;
    type->fp_Dispose = (void(*)(::g::Uno::Threading::Future*))HttpImageLoader__Dispose_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))HttpImageLoader__Dispose_fn;
    return type;
}

// public HttpImageLoader(string url) :457
void HttpImageLoader__ctor_7_fn(HttpImageLoader* __this, uString* url)
{
    __this->ctor_7(url);
}

// public override sealed void Dispose() :499
void HttpImageLoader__Dispose_fn(HttpImageLoader* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.HttpImageLoader", "Dispose()");
    __this->_isDisposed1 = true;
    ::g::Uno::Threading::Future1__Dispose_fn(__this);
}

// private void Error(string errorMsg) :468
void HttpImageLoader__Error_fn(HttpImageLoader* __this, uString* errorMsg)
{
    __this->Error(errorMsg);
}

// private static void LoadAsync(string urlString, Uno.Action<Java.Object> success, Uno.Action<string> error) :475
void HttpImageLoader__LoadAsync_fn(uString* urlString, uDelegate* success, uDelegate* error)
{
    HttpImageLoader::LoadAsync(urlString, success, error);
}

// public HttpImageLoader New(string url) :457
void HttpImageLoader__New5_fn(uString* url, HttpImageLoader** __retval)
{
    *__retval = HttpImageLoader::New5(url);
}

// private void Success(Java.Object bitmap) :462
void HttpImageLoader__Success_fn(HttpImageLoader* __this, ::g::Java::Object* bitmap)
{
    __this->Success(bitmap);
}

// public HttpImageLoader(string url) [instance] :457
void HttpImageLoader::ctor_7(uString* url)
{
    uStackFrame __("Fuse.Controls.Native.Android.HttpImageLoader", ".ctor(string)");
    ctor_5(::g::Fuse::UpdateManager::Dispatcher());
    HttpImageLoader::LoadAsync(url, uDelegate::New(::TYPES[7/*Uno.Action<Java.Object>*/], (void*)HttpImageLoader__Success_fn, this), uDelegate::New(::TYPES[8/*Uno.Action<string>*/], (void*)HttpImageLoader__Error_fn, this));
}

// private void Error(string errorMsg) [instance] :468
void HttpImageLoader::Error(uString* errorMsg)
{
    uStackFrame __("Fuse.Controls.Native.Android.HttpImageLoader", "Error(string)");

    if (!_isDisposed1)
        Reject(::g::Uno::Exception::New2(errorMsg));
}

// private void Success(Java.Object bitmap) [instance] :462
void HttpImageLoader::Success(::g::Java::Object* bitmap)
{
    uStackFrame __("Fuse.Controls.Native.Android.HttpImageLoader", "Success(Java.Object)");

    if (!_isDisposed1)
        ::g::Uno::Threading::Promise__Resolve_fn(this, bitmap);
}

// private static void LoadAsync(string urlString, Uno.Action<Java.Object> success, Uno.Action<string> error) [static] :475
void HttpImageLoader::LoadAsync(uString* urlString, uDelegate* success, uDelegate* error)
{
    uStackFrame __("Fuse.Controls.Native.Android.HttpImageLoader", "LoadAsync(string,Uno.Action<Java.Object>,Uno.Action<string>)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "LoadAsync76", "(Ljava/lang/String;Lcom/foreign/Uno/Action_Object;Lcom/foreign/Uno/Action_String;)V");
        uString* _uurlString=urlString;
        jstring _urlString = JniHelper::UnoToJavaString(_uurlString);
        uDelegate* _usuccess=success;
        jobject _success = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_usuccess, "com.foreign.Uno.Action_Object");
        uDelegate* _uerror=error;
        jobject _error = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uerror, "com.foreign.Uno.Action_String");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_urlString,_success,_error);
        
        if (_urlString!=NULL) { U_JNIVAR->DeleteLocalRef(_urlString); }
        if (_success!=NULL) { U_JNIVAR->DeleteLocalRef(_success); }
        if (_error!=NULL) { U_JNIVAR->DeleteLocalRef(_error); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public HttpImageLoader New(string url) [static] :457
HttpImageLoader* HttpImageLoader::New5(uString* url)
{
    HttpImageLoader* obj1 = (HttpImageLoader*)uNew(HttpImageLoader_typeof());
    obj1->ctor_7(url);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/android/$.uno
// -----------------------------------------------------------------------

// internal sealed extern class ImageView :507
// {
static void ImageView_build(uType* type)
{
    ::STRINGS[0] = uString::Const(" not supported in native context");
    ::TYPES[9] = ::g::Uno::Int_typeof()->Array();
    ::TYPES[10] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Controls::Native::ImageHandle_typeof());
    ::TYPES[11] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof());
    ::TYPES[3] = ::g::Uno::IDisposable_typeof();
    ::TYPES[12] = ::g::Java::Object_typeof();
    ::TYPES[13] = ::g::Fuse::Resources::FileImageSource_typeof();
    ::TYPES[14] = ::g::Fuse::Resources::HttpImageSource_typeof();
    ::TYPES[15] = ::g::Fuse::Resources::MultiDensityImageSource_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(ImageView_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ImageView_type, interface1),
        ::g::Fuse::Controls::Native::IImageView_typeof(), offsetof(ImageView_type, interface2));
    type->SetFields(6,
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Controls::Native::Android::ImageView, _imageHandle), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::ImageView, _imageView), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Controls::Native::Android::ImageView, _tintColor), 0);
}

ImageView_type* ImageView_typeof()
{
    static uSStrong<ImageView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::View_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(ImageView);
    options.TypeSize = sizeof(ImageView_type);
    type = (ImageView_type*)uClassType::New("Fuse.Controls.Native.Android.ImageView", options);
    type->fp_build_ = ImageView_build;
    type->fp_ctor_ = (void*)ImageView__New1_fn;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::Android::View*))ImageView__Dispose_fn;
    type->interface2.fp_UpdateImageTransform = (void(*)(uObject*, float*, ::g::Uno::Float2*, ::g::Uno::Float2*, ::g::Uno::Float2*))ImageView__UpdateImageTransform_fn;
    type->interface2.fp_set_ImageSource = (void(*)(uObject*, ::g::Fuse::Resources::ImageSource*))ImageView__set_ImageSource_fn;
    type->interface2.fp_set_TintColor = (void(*)(uObject*, ::g::Uno::Float4*))ImageView__set_TintColor_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))ImageView__Dispose_fn;
    return type;
}

// public ImageView() :541
void ImageView__ctor_1_fn(ImageView* __this)
{
    __this->ctor_1();
}

// private static void ClearBitmap(Java.Object handle) :675
void ImageView__ClearBitmap_fn(::g::Java::Object* handle)
{
    ImageView::ClearBitmap(handle);
}

// private static Java.Object Create(Java.Object container) :682
void ImageView__Create_fn(::g::Java::Object* container, ::g::Java::Object** __retval)
{
    *__retval = ImageView::Create(container);
}

// private static Java.Object CreateContainer() :693
void ImageView__CreateContainer_fn(::g::Java::Object** __retval)
{
    *__retval = ImageView::CreateContainer();
}

// public override sealed void Dispose() :546
void ImageView__Dispose_fn(ImageView* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.ImageView", "Dispose()");
    __this->ImageHandle(NULL);
    ::g::Fuse::Controls::Native::Android::View__Dispose_fn(__this);
}

// private void set_ImageHandle(Fuse.Controls.Native.ImageHandle value) :566
void ImageView__set_ImageHandle_fn(ImageView* __this, ::g::Fuse::Controls::Native::ImageHandle* value)
{
    __this->ImageHandle(value);
}

// public void set_ImageSource(Fuse.Resources.ImageSource value) :512
void ImageView__set_ImageSource_fn(ImageView* __this, ::g::Fuse::Resources::ImageSource* value)
{
    __this->ImageSource(value);
}

// public ImageView New() :541
void ImageView__New1_fn(ImageView** __retval)
{
    *__retval = ImageView::New1();
}

// private void OnImageLoaded(Fuse.Controls.Native.ImageHandle handle) :595
void ImageView__OnImageLoaded_fn(ImageView* __this, ::g::Fuse::Controls::Native::ImageHandle* handle)
{
    __this->OnImageLoaded(handle);
}

// private void OnImageLoadFailed(Uno.Exception e) :600
void ImageView__OnImageLoadFailed_fn(ImageView* __this, ::g::Uno::Exception* e)
{
    __this->OnImageLoadFailed(e);
}

// private static void SetBitmap(Java.Object handle, Java.Object bitmapHandle) :657
void ImageView__SetBitmap_fn(::g::Java::Object* handle, ::g::Java::Object* bitmapHandle)
{
    ImageView::SetBitmap(handle, bitmapHandle);
}

// private static void SetImageMatrix(Java.Object handle, float x, float y, float scaleX, float scaleY) :642
void ImageView__SetImageMatrix_fn(::g::Java::Object* handle, float* x, float* y, float* scaleX, float* scaleY)
{
    ImageView::SetImageMatrix(handle, *x, *y, *scaleX, *scaleY);
}

// private void SetImageSize(float2 size) :628
void ImageView__SetImageSize_fn(ImageView* __this, ::g::Uno::Float2* size)
{
    __this->SetImageSize(*size);
}

// private static void SetImageSize(Java.Object handle, int[] wh) :635
void ImageView__SetImageSize1_fn(::g::Java::Object* handle, uArray* wh)
{
    ImageView::SetImageSize1(handle, wh);
}

// private static void SetTint(Java.Object handle, int rgba) :664
void ImageView__SetTint_fn(::g::Java::Object* handle, int* rgba)
{
    ImageView::SetTint(handle, *rgba);
}

// public void set_TintColor(float4 value) :532
void ImageView__set_TintColor_fn(ImageView* __this, ::g::Uno::Float4* value)
{
    __this->TintColor(*value);
}

// private void UpdateImage(Fuse.Resources.FileImageSource fileImageSource) :585
void ImageView__UpdateImage_fn(ImageView* __this, ::g::Fuse::Resources::FileImageSource* fileImageSource)
{
    __this->UpdateImage(fileImageSource);
}

// private void UpdateImage(Fuse.Resources.HttpImageSource http) :590
void ImageView__UpdateImage1_fn(ImageView* __this, ::g::Fuse::Resources::HttpImageSource* http)
{
    __this->UpdateImage1(http);
}

// private void UpdateImage(Fuse.Resources.MultiDensityImageSource multi) :605
void ImageView__UpdateImage2_fn(ImageView* __this, ::g::Fuse::Resources::MultiDensityImageSource* multi)
{
    __this->UpdateImage2(multi);
}

// public void UpdateImageTransform(float density, float2 origin, float2 scale, float2 drawSize) :552
void ImageView__UpdateImageTransform_fn(ImageView* __this, float* density, ::g::Uno::Float2* origin, ::g::Uno::Float2* scale, ::g::Uno::Float2* drawSize)
{
    __this->UpdateImageTransform(*density, *origin, *scale, *drawSize);
}

// public ImageView() [instance] :541
void ImageView::ctor_1()
{
    uStackFrame __("Fuse.Controls.Native.Android.ImageView", ".ctor()");
    _tintColor = ::g::Uno::Float4__New1(1.0f);
    ctor_(ImageView::CreateContainer());
    _imageView = ImageView::Create(Handle());
}

// private void set_ImageHandle(Fuse.Controls.Native.ImageHandle value) [instance] :566
void ImageView::ImageHandle(::g::Fuse::Controls::Native::ImageHandle* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.ImageView", "set_ImageHandle(Fuse.Controls.Native.ImageHandle)");

    if (_imageHandle != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_imageHandle), ::TYPES[3/*Uno.IDisposable*/]));
        _imageHandle = NULL;
        ImageView::ClearBitmap(_imageView);
    }

    _imageHandle = (uObject*)value;

    if (_imageHandle != NULL)
    {
        ImageView::SetBitmap(_imageView, uCast< ::g::Java::Object*>(uPtr(value)->Handle(), ::TYPES[12/*Java.Object*/]));
        ImageView::SetTint(_imageView, ::g::Fuse::Controls::Native::Android::Helpers::EncodeColor(_tintColor));
    }
}

// public void set_ImageSource(Fuse.Resources.ImageSource value) [instance] :512
void ImageView::ImageSource(::g::Fuse::Resources::ImageSource* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.ImageView", "set_ImageSource(Fuse.Resources.ImageSource)");

    if (value == NULL)
        ImageHandle(NULL);
    else  if (uIs(value, ::TYPES[13/*Fuse.Resources.FileImageSource*/]))
        UpdateImage(uCast< ::g::Fuse::Resources::FileImageSource*>(value, ::TYPES[13/*Fuse.Resources.FileImageSource*/]));
    else  if (uIs(value, ::TYPES[14/*Fuse.Resources.HttpImageSource*/]))
        UpdateImage1(uCast< ::g::Fuse::Resources::HttpImageSource*>(value, ::TYPES[14/*Fuse.Resources.HttpImageSource*/]));
    else  if (uIs(value, ::TYPES[15/*Fuse.Resources.MultiDensityImageSource*/]))
        UpdateImage2(uCast< ::g::Fuse::Resources::MultiDensityImageSource*>(value, ::TYPES[15/*Fuse.Resources.MultiDensityImageSource*/]));
    else 
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition(value, ::STRINGS[0/*" not suppor...*/])));
}

// private void OnImageLoaded(Fuse.Controls.Native.ImageHandle handle) [instance] :595
void ImageView::OnImageLoaded(::g::Fuse::Controls::Native::ImageHandle* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.ImageView", "OnImageLoaded(Fuse.Controls.Native.ImageHandle)");
    ImageHandle(handle);
}

// private void OnImageLoadFailed(Uno.Exception e) [instance] :600
void ImageView::OnImageLoadFailed(::g::Uno::Exception* e)
{
    uStackFrame __("Fuse.Controls.Native.Android.ImageView", "OnImageLoadFailed(Uno.Exception)");
    ImageHandle(NULL);
}

// private void SetImageSize(float2 size) [instance] :628
void ImageView::SetImageSize(::g::Uno::Float2 size)
{
    uStackFrame __("Fuse.Controls.Native.Android.ImageView", "SetImageSize(float2)");
    uArray* wh = uArray::Init<int>(::TYPES[9/*int[]*/], 2, (int)size.X, (int)size.Y);
    ImageView::SetImageSize1(_imageView, wh);
}

// public void set_TintColor(float4 value) [instance] :532
void ImageView::TintColor(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Controls.Native.Android.ImageView", "set_TintColor(float4)");
    _tintColor = value;
    ImageView::SetTint(_imageView, ::g::Fuse::Controls::Native::Android::Helpers::EncodeColor(_tintColor));
}

// private void UpdateImage(Fuse.Resources.FileImageSource fileImageSource) [instance] :585
void ImageView::UpdateImage(::g::Fuse::Resources::FileImageSource* fileImageSource)
{
    uStackFrame __("Fuse.Controls.Native.Android.ImageView", "UpdateImage(Fuse.Resources.FileImageSource)");
    ImageHandle(::g::Fuse::Controls::Native::ImageLoader::Load3(uPtr(fileImageSource)->File()));
}

// private void UpdateImage(Fuse.Resources.HttpImageSource http) [instance] :590
void ImageView::UpdateImage1(::g::Fuse::Resources::HttpImageSource* http)
{
    uStackFrame __("Fuse.Controls.Native.Android.ImageView", "UpdateImage(Fuse.Resources.HttpImageSource)");
    uPtr(::g::Fuse::Controls::Native::ImageLoader::Load(http))->Then1(uDelegate::New(::TYPES[10/*Uno.Action<Fuse.Controls.Native.ImageHandle>*/], (void*)ImageView__OnImageLoaded_fn, this), uDelegate::New(::TYPES[11/*Uno.Action<Uno.Exception>*/], (void*)ImageView__OnImageLoadFailed_fn, this));
}

// private void UpdateImage(Fuse.Resources.MultiDensityImageSource multi) [instance] :605
void ImageView::UpdateImage2(::g::Fuse::Resources::MultiDensityImageSource* multi)
{
    uStackFrame __("Fuse.Controls.Native.Android.ImageView", "UpdateImage(Fuse.Resources.MultiDensityImageSource)");
    U_THROW(::g::Uno::NotImplementedException::New4());
}

// public void UpdateImageTransform(float density, float2 origin, float2 scale, float2 drawSize) [instance] :552
void ImageView::UpdateImageTransform(float density, ::g::Uno::Float2 origin, ::g::Uno::Float2 scale, ::g::Uno::Float2 drawSize)
{
    uStackFrame __("Fuse.Controls.Native.Android.ImageView", "UpdateImageTransform(float,float2,float2,float2)");
    SetImageSize(::g::Uno::Float2__op_Multiply1(drawSize, density));
    ImageView::SetImageMatrix(_imageView, origin.X * density, origin.Y * density, scale.X * density, scale.Y * density);
}

// private static void ClearBitmap(Java.Object handle) [static] :675
void ImageView::ClearBitmap(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.ImageView", "ClearBitmap(Java.Object)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ClearBitmap77", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static Java.Object Create(Java.Object container) [static] :682
::g::Java::Object* ImageView::Create(::g::Java::Object* container)
{
    uStackFrame __("Fuse.Controls.Native.Android.ImageView", "Create(Java.Object)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create78", "(Ljava/lang/Object;)Ljava/lang/Object;");
        ::g::Java::Object* _ucontainer=container;
        jobject _container = (_ucontainer==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ucontainer, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_container);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_container!=NULL) { U_JNIVAR->DeleteLocalRef(_container); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static Java.Object CreateContainer() [static] :693
::g::Java::Object* ImageView::CreateContainer()
{
    uStackFrame __("Fuse.Controls.Native.Android.ImageView", "CreateContainer()");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateContainer79", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public ImageView New() [static] :541
ImageView* ImageView::New1()
{
    ImageView* obj1 = (ImageView*)uNew(ImageView_typeof());
    obj1->ctor_1();
    return obj1;
}

// private static void SetBitmap(Java.Object handle, Java.Object bitmapHandle) [static] :657
void ImageView::SetBitmap(::g::Java::Object* handle, ::g::Java::Object* bitmapHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.ImageView", "SetBitmap(Java.Object,Java.Object)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetBitmap81", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ubitmapHandle=bitmapHandle;
        jobject _bitmapHandle = (_ubitmapHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ubitmapHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_bitmapHandle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_bitmapHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_bitmapHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetImageMatrix(Java.Object handle, float x, float y, float scaleX, float scaleY) [static] :642
void ImageView::SetImageMatrix(::g::Java::Object* handle, float x, float y, float scaleX, float scaleY)
{
    uStackFrame __("Fuse.Controls.Native.Android.ImageView", "SetImageMatrix(Java.Object,float,float,float,float)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetImageMatrix82", "(Ljava/lang/Object;FFFF)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _ux=x;
        jfloat _x = (jfloat)_ux;
        float _uy=y;
        jfloat _y = (jfloat)_uy;
        float _uscaleX=scaleX;
        jfloat _scaleX = (jfloat)_uscaleX;
        float _uscaleY=scaleY;
        jfloat _scaleY = (jfloat)_uscaleY;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_x,_y,_scaleX,_scaleY);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetImageSize(Java.Object handle, int[] wh) [static] :635
void ImageView::SetImageSize1(::g::Java::Object* handle, uArray* wh)
{
    uStackFrame __("Fuse.Controls.Native.Android.ImageView", "SetImageSize(Java.Object,int[])");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetImageSize183", "(Ljava/lang/Object;Lcom/uno/IntArray;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uArray* _uwh=wh;
        jobject _wh = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box4(_uwh);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_wh);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_wh!=NULL) { U_JNIVAR->DeleteLocalRef(_wh); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetTint(Java.Object handle, int rgba) [static] :664
void ImageView::SetTint(::g::Java::Object* handle, int rgba)
{
    uStackFrame __("Fuse.Controls.Native.Android.ImageView", "SetTint(Java.Object,int)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetTint84", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _urgba=rgba;
        jint _rgba = (jint)_urgba;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_rgba);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/android/$.uno
// -----------------------------------------------------------------------

// internal static extern class InputDispatch :718
// {
// static InputDispatch() :718
static void InputDispatch__cctor__fn(uType* __type)
{
    InputDispatch::_listeners_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[16/*Uno.Collections.Dictionary<Java.Object, Fuse.Visual>*/]));
    InputDispatch::_activePointers_ = ((::g::Uno::Collections::HashSet*)::g::Uno::Collections::HashSet::New1(::TYPES[17/*Uno.Collections.HashSet<int>*/]));
}

static void InputDispatch_build(uType* type)
{
    ::TYPES[16] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Java::Object_typeof(), ::g::Fuse::Visual_typeof());
    ::TYPES[17] = ::g::Uno::Collections::HashSet_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[18] = ::g::Fuse::Visual_typeof();
    ::TYPES[19] = ::g::Fuse::ICommonViewport_typeof();
    ::TYPES[20] = ::g::Uno::Exception_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::HashSet_typeof()->MakeType(::g::Uno::Int_typeof()), (uintptr_t)&::g::Fuse::Controls::Native::Android::InputDispatch::_activePointers_, uFieldFlagsStatic,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Java::Object_typeof(), ::g::Fuse::Visual_typeof()), (uintptr_t)&::g::Fuse::Controls::Native::Android::InputDispatch::_listeners_, uFieldFlagsStatic,
        ::g::Java::Object_typeof(), (uintptr_t)&::g::Fuse::Controls::Native::Android::InputDispatch::_touchListenerHandle_, uFieldFlagsStatic,
        ::g::Fuse::Controls::Native::Android::JavaMap_typeof(), (uintptr_t)&::g::Fuse::Controls::Native::Android::InputDispatch::_viewVisualMap_, uFieldFlagsStatic);
}

uClassType* InputDispatch_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.Android.InputDispatch", options);
    type->fp_build_ = InputDispatch_build;
    type->fp_cctor_ = InputDispatch__cctor__fn;
    return type;
}

// public static void AddListener(Fuse.Controls.Native.Android.View view, Fuse.Visual owner) :860
void InputDispatch__AddListener_fn(::g::Fuse::Controls::Native::Android::View* view, ::g::Fuse::Visual* owner)
{
    InputDispatch::AddListener(view, owner);
}

// private static void ClearOnTouchListener(Java.Object viewHandle) :894
void InputDispatch__ClearOnTouchListener_fn(::g::Java::Object* viewHandle)
{
    InputDispatch::ClearOnTouchListener(viewHandle);
}

// private static Java.Object CreateTouchListener() :878
void InputDispatch__CreateTouchListener_fn(::g::Java::Object** __retval)
{
    *__retval = InputDispatch::CreateTouchListener();
}

// private static void DeactivatePointer(int pointerId) :791
void InputDispatch__DeactivatePointer_fn(int* pointerId)
{
    InputDispatch::DeactivatePointer(*pointerId);
}

// private static Fuse.Visual FindRoot(Fuse.Visual visual) :872
void InputDispatch__FindRoot_fn(::g::Fuse::Visual* visual, ::g::Fuse::Visual** __retval)
{
    *__retval = InputDispatch::FindRoot(visual);
}

// private static bool IsPointerActive(int pointerId) :781
void InputDispatch__IsPointerActive_fn(int* pointerId, bool* __retval)
{
    *__retval = InputDispatch::IsPointerActive(*pointerId);
}

// private static bool OnTouch(Java.Object view, Java.Object motionEvent) :730
void InputDispatch__OnTouch_fn(::g::Java::Object* view, ::g::Java::Object* motionEvent, bool* __retval)
{
    *__retval = InputDispatch::OnTouch(view, motionEvent);
}

// public static void RaiseEvent(Fuse.Visual visual, Java.Object viewHandle, Fuse.Controls.Native.Android.MotionEvent motionEvent) :745
void InputDispatch__RaiseEvent_fn(::g::Fuse::Visual* visual, ::g::Java::Object* viewHandle, ::g::Fuse::Controls::Native::Android::MotionEvent* motionEvent)
{
    InputDispatch::RaiseEvent(visual, viewHandle, motionEvent);
}

// private static void RaiseMoved(Fuse.Visual visual, Fuse.Input.PointerEventData data) :812
void InputDispatch__RaiseMoved_fn(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaiseMoved(visual, data);
}

// private static void RaisePressed(Fuse.Visual visual, Fuse.Input.PointerEventData data) :797
void InputDispatch__RaisePressed_fn(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaisePressed(visual, data);
}

// private static void RaiseReleased(Fuse.Visual visual, Fuse.Input.PointerEventData data) :824
void InputDispatch__RaiseReleased_fn(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaiseReleased(visual, data);
}

// public static void RemoveListener(Fuse.Controls.Native.Android.View view) :866
void InputDispatch__RemoveListener_fn(::g::Fuse::Controls::Native::Android::View* view)
{
    InputDispatch::RemoveListener(view);
}

// private static void SetOnTouchListener(Java.Object viewHandle, Java.Object listenerHandle) :888
void InputDispatch__SetOnTouchListener_fn(::g::Java::Object* viewHandle, ::g::Java::Object* listenerHandle)
{
    InputDispatch::SetOnTouchListener(viewHandle, listenerHandle);
}

// private static Java.Object get_TouchListener() :727
void InputDispatch__get_TouchListener_fn(::g::Java::Object** __retval)
{
    *__retval = InputDispatch::TouchListener();
}

// private static Fuse.Controls.Native.Android.JavaMap get_ViewVisualMap() :857
void InputDispatch__get_ViewVisualMap_fn(::g::Fuse::Controls::Native::Android::JavaMap** __retval)
{
    *__retval = InputDispatch::ViewVisualMap();
}

uSStrong< ::g::Uno::Collections::HashSet*> InputDispatch::_activePointers_;
uSStrong< ::g::Uno::Collections::Dictionary*> InputDispatch::_listeners_;
uSStrong< ::g::Java::Object*> InputDispatch::_touchListenerHandle_;
uSStrong< ::g::Fuse::Controls::Native::Android::JavaMap*> InputDispatch::_viewVisualMap_;

// public static void AddListener(Fuse.Controls.Native.Android.View view, Fuse.Visual owner) [static] :860
void InputDispatch::AddListener(::g::Fuse::Controls::Native::Android::View* view, ::g::Fuse::Visual* owner)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "AddListener(Fuse.Controls.Native.Android.View,Fuse.Visual)");
    InputDispatch_typeof()->Init();
    uPtr(InputDispatch::ViewVisualMap())->Put1(uPtr(view)->Handle(), owner);
    InputDispatch::SetOnTouchListener(view->Handle(), InputDispatch::TouchListener());
}

// private static void ClearOnTouchListener(Java.Object viewHandle) [static] :894
void InputDispatch::ClearOnTouchListener(::g::Java::Object* viewHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "ClearOnTouchListener(Java.Object)");
    InputDispatch_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ClearOnTouchListener85", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_viewHandle);
        
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static Java.Object CreateTouchListener() [static] :878
::g::Java::Object* InputDispatch::CreateTouchListener()
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "CreateTouchListener()");
    InputDispatch_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateTouchListener86", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static void DeactivatePointer(int pointerId) [static] :791
void InputDispatch::DeactivatePointer(int pointerId)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "DeactivatePointer(int)");
    InputDispatch_typeof()->Init();
    bool ret3;
    bool ret4;

    if ((::g::Uno::Collections::HashSet__Contains_fn(uPtr(InputDispatch::_activePointers()), uCRef<int>(pointerId), &ret3), ret3))
        ::g::Uno::Collections::HashSet__Remove_fn(uPtr(InputDispatch::_activePointers()), uCRef<int>(pointerId), &ret4);
}

// private static Fuse.Visual FindRoot(Fuse.Visual visual) [static] :872
::g::Fuse::Visual* InputDispatch::FindRoot(::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "FindRoot(Fuse.Visual)");
    InputDispatch_typeof()->Init();
    return (uPtr(visual)->Parent() != NULL) ? (::g::Fuse::Visual*)InputDispatch::FindRoot(uPtr(visual)->Parent()) : visual;
}

// private static bool IsPointerActive(int pointerId) [static] :781
bool InputDispatch::IsPointerActive(int pointerId)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "IsPointerActive(int)");
    InputDispatch_typeof()->Init();
    bool ret5;
    bool ret6;

    if (!(::g::Uno::Collections::HashSet__Contains_fn(uPtr(InputDispatch::_activePointers()), uCRef<int>(pointerId), &ret5), ret5))
    {
        ::g::Uno::Collections::HashSet__Add_fn(uPtr(InputDispatch::_activePointers()), uCRef<int>(pointerId), &ret6);
        return false;
    }

    return true;
}

// private static bool OnTouch(Java.Object view, Java.Object motionEvent) [static] :730
bool InputDispatch::OnTouch(::g::Java::Object* view, ::g::Java::Object* motionEvent)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "OnTouch(Java.Object,Java.Object)");
    InputDispatch_typeof()->Init();

    if (uPtr(InputDispatch::ViewVisualMap())->ContainsKey(view))
    {
        ::g::Fuse::Controls::Native::Android::MotionEvent* me = ::g::Fuse::Controls::Native::Android::MotionEvent::New1(motionEvent);
        ::g::Fuse::Visual* visual = uCast< ::g::Fuse::Visual*>(uPtr(InputDispatch::ViewVisualMap())->Get(view), ::TYPES[18/*Fuse.Visual*/]);

        if (visual == NULL)
            return false;

        InputDispatch::RaiseEvent(visual, view, me);
    }

    return false;
}

// public static void RaiseEvent(Fuse.Visual visual, Java.Object viewHandle, Fuse.Controls.Native.Android.MotionEvent motionEvent) [static] :745
void InputDispatch::RaiseEvent(::g::Fuse::Visual* visual, ::g::Java::Object* viewHandle, ::g::Fuse::Controls::Native::Android::MotionEvent* motionEvent)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "RaiseEvent(Fuse.Visual,Java.Object,Fuse.Controls.Native.Android.MotionEvent)");
    InputDispatch_typeof()->Init();
    int action = uPtr(motionEvent)->ActionMasked();
    uArray* data = motionEvent->PointerEventDataForView(viewHandle, ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(visual)->Viewport()), ::TYPES[19/*Fuse.ICommonViewport*/])));

    switch (action)
    {
        case 3:
        {
            for (int i = 0; i < uPtr(data)->Length(); i++)
                InputDispatch::RaiseReleased(visual, uPtr(data)->Strong< ::g::Fuse::Input::PointerEventData*>(i));

            break;
        }
        case 0:
        case 5:
        {
            for (int i1 = 0; i1 < uPtr(data)->Length(); i1++)
                InputDispatch::RaisePressed(visual, uPtr(data)->Strong< ::g::Fuse::Input::PointerEventData*>(i1));

            break;
        }
        case 2:
        {
            for (int i2 = 0; i2 < uPtr(data)->Length(); i2++)
                InputDispatch::RaiseMoved(visual, uPtr(data)->Strong< ::g::Fuse::Input::PointerEventData*>(i2));

            break;
        }
        case 1:
        case 6:
        {
            int pointerMask = ::g::Fuse::Controls::Native::Android::MotionEvent::PointerIndexMask();
            int pointerShit = ::g::Fuse::Controls::Native::Android::MotionEvent::PointerIndexShift();
            int pointerIndex = (uPtr(motionEvent)->Action() & pointerMask) >> pointerShit;
            InputDispatch::RaiseReleased(visual, uPtr(data)->Strong< ::g::Fuse::Input::PointerEventData*>(pointerIndex));
            break;
        }
    }
}

// private static void RaiseMoved(Fuse.Visual visual, Fuse.Input.PointerEventData data) [static] :812
void InputDispatch::RaiseMoved(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "RaiseMoved(Fuse.Visual,Fuse.Input.PointerEventData)");
    InputDispatch_typeof()->Init();

    try
    {
        ::g::Fuse::Input::Pointer::RaiseMoved(InputDispatch::FindRoot(visual), data);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private static void RaisePressed(Fuse.Visual visual, Fuse.Input.PointerEventData data) [static] :797
void InputDispatch::RaisePressed(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "RaisePressed(Fuse.Visual,Fuse.Input.PointerEventData)");
    InputDispatch_typeof()->Init();

    if (InputDispatch::IsPointerActive(uPtr(data)->PointIndex))
        return;

    try
    {
        ::g::Fuse::Input::Pointer::RaisePressed(InputDispatch::FindRoot(visual), data);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private static void RaiseReleased(Fuse.Visual visual, Fuse.Input.PointerEventData data) [static] :824
void InputDispatch::RaiseReleased(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "RaiseReleased(Fuse.Visual,Fuse.Input.PointerEventData)");
    InputDispatch_typeof()->Init();
    InputDispatch::DeactivatePointer(uPtr(data)->PointIndex);

    try
    {
        ::g::Fuse::Input::Pointer::RaiseReleased(InputDispatch::FindRoot(visual), data);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// public static void RemoveListener(Fuse.Controls.Native.Android.View view) [static] :866
void InputDispatch::RemoveListener(::g::Fuse::Controls::Native::Android::View* view)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "RemoveListener(Fuse.Controls.Native.Android.View)");
    InputDispatch_typeof()->Init();
    uPtr(InputDispatch::ViewVisualMap())->Remove(uPtr(view)->Handle());
    InputDispatch::ClearOnTouchListener(view->Handle());
}

// private static void SetOnTouchListener(Java.Object viewHandle, Java.Object listenerHandle) [static] :888
void InputDispatch::SetOnTouchListener(::g::Java::Object* viewHandle, ::g::Java::Object* listenerHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "SetOnTouchListener(Java.Object,Java.Object)");
    InputDispatch_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetOnTouchListener88", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ulistenerHandle=listenerHandle;
        jobject _listenerHandle = (_ulistenerHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ulistenerHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_viewHandle,_listenerHandle);
        
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        if (_listenerHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_listenerHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static Java.Object get_TouchListener() [static] :727
::g::Java::Object* InputDispatch::TouchListener()
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "get_TouchListener()");
    InputDispatch_typeof()->Init();
    ::g::Java::Object* ind1 = InputDispatch::_touchListenerHandle();
    return (ind1 != NULL) ? ind1 : (::g::Java::Object*)(InputDispatch::_touchListenerHandle() = InputDispatch::CreateTouchListener());
}

// private static Fuse.Controls.Native.Android.JavaMap get_ViewVisualMap() [static] :857
::g::Fuse::Controls::Native::Android::JavaMap* InputDispatch::ViewVisualMap()
{
    uStackFrame __("Fuse.Controls.Native.Android.InputDispatch", "get_ViewVisualMap()");
    InputDispatch_typeof()->Init();
    ::g::Fuse::Controls::Native::Android::JavaMap* ind2 = InputDispatch::_viewVisualMap();
    return (ind2 != NULL) ? ind2 : (::g::Fuse::Controls::Native::Android::JavaMap*)(InputDispatch::_viewVisualMap() = ::g::Fuse::Controls::Native::Android::JavaMap::New1());
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/android/$.uno
// -----------------------------------------------------------------------

// internal abstract extern interface IViewParent :3295
// {
uInterfaceType* IViewParent_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.Android.IViewParent", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/android/$.uno
// -----------------------------------------------------------------------

// internal sealed extern class JavaMap :903
// {
static void JavaMap_build(uType* type)
{
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::JavaMap, _handle), 0);
}

uType* JavaMap_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(JavaMap);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.JavaMap", options);
    type->fp_build_ = JavaMap_build;
    type->fp_ctor_ = (void*)JavaMap__New1_fn;
    return type;
}

// public JavaMap() :907
void JavaMap__ctor__fn(JavaMap* __this)
{
    __this->ctor_();
}

// public bool ContainsKey(Java.Object key) :922
void JavaMap__ContainsKey_fn(JavaMap* __this, ::g::Java::Object* key, bool* __retval)
{
    *__retval = __this->ContainsKey(key);
}

// private static bool ContainsKey(Java.Object handle, Java.Object key) :955
void JavaMap__ContainsKey1_fn(::g::Java::Object* handle, ::g::Java::Object* key, bool* __retval)
{
    *__retval = JavaMap::ContainsKey1(handle, key);
}

// private static Java.Object Create() :933
void JavaMap__Create_fn(::g::Java::Object** __retval)
{
    *__retval = JavaMap::Create();
}

// public object Get(Java.Object key) :927
void JavaMap__Get_fn(JavaMap* __this, ::g::Java::Object* key, uObject** __retval)
{
    *__retval = __this->Get(key);
}

// private static object Get(Java.Object handle, Java.Object key) :963
void JavaMap__Get1_fn(::g::Java::Object* handle, ::g::Java::Object* key, uObject** __retval)
{
    *__retval = JavaMap::Get1(handle, key);
}

// public JavaMap New() :907
void JavaMap__New1_fn(JavaMap** __retval)
{
    *__retval = JavaMap::New1();
}

// private static void Put(Java.Object handle, Java.Object key, object value) :939
void JavaMap__Put_fn(::g::Java::Object* handle, ::g::Java::Object* key, uObject* value)
{
    JavaMap::Put(handle, key, value);
}

// public void Put(Java.Object key, object value) :912
void JavaMap__Put1_fn(JavaMap* __this, ::g::Java::Object* key, uObject* value)
{
    __this->Put1(key, value);
}

// public void Remove(Java.Object key) :917
void JavaMap__Remove_fn(JavaMap* __this, ::g::Java::Object* key)
{
    __this->Remove(key);
}

// private static void Remove(Java.Object handle, Java.Object key) :947
void JavaMap__Remove1_fn(::g::Java::Object* handle, ::g::Java::Object* key)
{
    JavaMap::Remove1(handle, key);
}

// public JavaMap() [instance] :907
void JavaMap::ctor_()
{
    uStackFrame __("Fuse.Controls.Native.Android.JavaMap", ".ctor()");
    _handle = JavaMap::Create();
}

// public bool ContainsKey(Java.Object key) [instance] :922
bool JavaMap::ContainsKey(::g::Java::Object* key)
{
    uStackFrame __("Fuse.Controls.Native.Android.JavaMap", "ContainsKey(Java.Object)");
    return JavaMap::ContainsKey1(_handle, key);
}

// public object Get(Java.Object key) [instance] :927
uObject* JavaMap::Get(::g::Java::Object* key)
{
    uStackFrame __("Fuse.Controls.Native.Android.JavaMap", "Get(Java.Object)");
    return JavaMap::Get1(_handle, key);
}

// public void Put(Java.Object key, object value) [instance] :912
void JavaMap::Put1(::g::Java::Object* key, uObject* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.JavaMap", "Put(Java.Object,object)");
    JavaMap::Put(_handle, key, value);
}

// public void Remove(Java.Object key) [instance] :917
void JavaMap::Remove(::g::Java::Object* key)
{
    uStackFrame __("Fuse.Controls.Native.Android.JavaMap", "Remove(Java.Object)");
    JavaMap::Remove1(_handle, key);
}

// private static bool ContainsKey(Java.Object handle, Java.Object key) [static] :955
bool JavaMap::ContainsKey1(::g::Java::Object* handle, ::g::Java::Object* key)
{
    uStackFrame __("Fuse.Controls.Native.Android.JavaMap", "ContainsKey(Java.Object,Java.Object)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ContainsKey189", "(Ljava/lang/Object;Ljava/lang/Object;)Z");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ukey=key;
        jobject _key = (_ukey==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ukey, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jboolean __jresult = U_JNIVAR->CallStaticBooleanMethod(__cls,__mtd,_handle,_key);
        bool __result = (bool)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_key!=NULL) { U_JNIVAR->DeleteLocalRef(_key); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static Java.Object Create() [static] :933
::g::Java::Object* JavaMap::Create()
{
    uStackFrame __("Fuse.Controls.Native.Android.JavaMap", "Create()");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create90", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static object Get(Java.Object handle, Java.Object key) [static] :963
uObject* JavaMap::Get1(::g::Java::Object* handle, ::g::Java::Object* key)
{
    uStackFrame __("Fuse.Controls.Native.Android.JavaMap", "Get(Java.Object,Java.Object)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Get191", "(Ljava/lang/Object;Ljava/lang/Object;)Lcom/uno/UnoObject;");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ukey=key;
        jobject _key = (_ukey==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ukey, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_handle,_key);
        uObject* __result = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBox(__jresult);
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_key!=NULL) { U_JNIVAR->DeleteLocalRef(_key); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public JavaMap New() [static] :907
JavaMap* JavaMap::New1()
{
    JavaMap* obj1 = (JavaMap*)uNew(JavaMap_typeof());
    obj1->ctor_();
    return obj1;
}

// private static void Put(Java.Object handle, Java.Object key, object value) [static] :939
void JavaMap::Put(::g::Java::Object* handle, ::g::Java::Object* key, uObject* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.JavaMap", "Put(Java.Object,Java.Object,object)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Put92", "(Ljava/lang/Object;Ljava/lang/Object;Lcom/uno/UnoObject;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ukey=key;
        jobject _key = (_ukey==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ukey, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uObject* _uvalue=value;
        jobject _value = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uvalue);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_key,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_key!=NULL) { U_JNIVAR->DeleteLocalRef(_key); }
        if (_value!=NULL) { U_JNIVAR->DeleteLocalRef(_value); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void Remove(Java.Object handle, Java.Object key) [static] :947
void JavaMap::Remove1(::g::Java::Object* handle, ::g::Java::Object* key)
{
    uStackFrame __("Fuse.Controls.Native.Android.JavaMap", "Remove(Java.Object,Java.Object)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Remove193", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ukey=key;
        jobject _key = (_ukey==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ukey, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_key);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_key!=NULL) { U_JNIVAR->DeleteLocalRef(_key); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/android/$.uno
// -----------------------------------------------------------------------

// public abstract extern class LeafView :1162
// {
static void LeafView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(LeafView_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(LeafView_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(LeafView_type, interface2));
    type->SetFields(6);
}

LeafView_type* LeafView_typeof()
{
    static uSStrong<LeafView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::View_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(LeafView);
    options.TypeSize = sizeof(LeafView_type);
    type = (LeafView_type*)uClassType::New("Fuse.Controls.Native.Android.LeafView", options);
    type->fp_build_ = LeafView_build;
    type->interface2.fp_Measure = (void(*)(uObject*, ::g::Fuse::LayoutParams*, float*, ::g::Uno::Float2*))LeafView__FuseControlsNativeILeafViewMeasure_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Dispose_fn;
    return type;
}

// protected LeafView(Java.Object handle) :1164
void LeafView__ctor_1_fn(LeafView* __this, ::g::Java::Object* handle)
{
    __this->ctor_1(handle);
}

// private float2 Fuse.Controls.Native.ILeafView.Measure(Fuse.LayoutParams lp, float density) :1166
void LeafView__FuseControlsNativeILeafViewMeasure_fn(LeafView* __this, ::g::Fuse::LayoutParams* lp, float* density, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Controls.Native.Android.LeafView", "Fuse.Controls.Native.ILeafView.Measure(Fuse.LayoutParams,float)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    float density_ = *density;
    LeafView::Measure(__this->Handle(), (int)(lp_.X() * density_), (int)(lp_.Y() * density_), lp_.HasX(), lp_.HasY());
    ::g::Uno::Float2 res = ::g::Uno::Float2__New2((float)LeafView::GetMeasuredWidth(__this->Handle()) / density_, (float)LeafView::GetMeasuredHeight(__this->Handle()) / density_);
    return *__retval = res, void();
}

// private static int GetMeasuredHeight(Java.Object handle) :1189
void LeafView__GetMeasuredHeight_fn(::g::Java::Object* handle, int* __retval)
{
    *__retval = LeafView::GetMeasuredHeight(handle);
}

// private static int GetMeasuredWidth(Java.Object handle) :1183
void LeafView__GetMeasuredWidth_fn(::g::Java::Object* handle, int* __retval)
{
    *__retval = LeafView::GetMeasuredWidth(handle);
}

// private static void Measure(Java.Object handle, int w, int h, bool hasX, bool hasY) :1174
void LeafView__Measure_fn(::g::Java::Object* handle, int* w, int* h, bool* hasX, bool* hasY)
{
    LeafView::Measure(handle, *w, *h, *hasX, *hasY);
}

// protected LeafView(Java.Object handle) [instance] :1164
void LeafView::ctor_1(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.LeafView", ".ctor(Java.Object)");
    ctor_(handle);
}

// private static int GetMeasuredHeight(Java.Object handle) [static] :1189
int LeafView::GetMeasuredHeight(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.LeafView", "GetMeasuredHeight(Java.Object)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetMeasuredHeight94", "(Ljava/lang/Object;)I");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_handle);
        int __result = (int)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetMeasuredWidth(Java.Object handle) [static] :1183
int LeafView::GetMeasuredWidth(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.LeafView", "GetMeasuredWidth(Java.Object)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetMeasuredWidth95", "(Ljava/lang/Object;)I");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_handle);
        int __result = (int)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static void Measure(Java.Object handle, int w, int h, bool hasX, bool hasY) [static] :1174
void LeafView::Measure(::g::Java::Object* handle, int w, int h, bool hasX, bool hasY)
{
    uStackFrame __("Fuse.Controls.Native.Android.LeafView", "Measure(Java.Object,int,int,bool,bool)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Measure96", "(Ljava/lang/Object;IIZZ)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uw=w;
        jint _w = (jint)_uw;
        int _uh=h;
        jint _h = (jint)_uh;
        bool _uhasX=hasX;
        jboolean _hasX = (jboolean)_uhasX;
        bool _uhasY=hasY;
        jboolean _hasY = (jboolean)_uhasY;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_w,_h,_hasX,_hasY);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/android/$.uno
// -----------------------------------------------------------------------

// public sealed extern class MotionEvent :972
// {
static void MotionEvent_build(uType* type)
{
    ::TYPES[21] = ::g::Fuse::Input::PointerEventData_typeof()->Array();
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::MotionEvent, _handle), 0);
    type->Reflection.SetFunctions(10,
        new uFunction("get_Action", NULL, (void*)MotionEvent__get_Action_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_ActionMasked", NULL, (void*)MotionEvent__get_ActionMasked_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_EventTime", NULL, (void*)MotionEvent__get_EventTime_fn, 0, false, ::g::Uno::Long_typeof(), 0),
        new uFunction("GetPointerId", NULL, (void*)MotionEvent__GetPointerId_fn, 0, false, ::g::Uno::Int_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("GetPosition", NULL, (void*)MotionEvent__GetPosition_fn, 0, false, ::g::Uno::Float2_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)MotionEvent__New1_fn, 0, true, MotionEvent_typeof(), 1, ::g::Java::Object_typeof()),
        new uFunction("get_PointerCount", NULL, (void*)MotionEvent__get_PointerCount_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("PointerEventDataForView", NULL, (void*)MotionEvent__PointerEventDataForView_fn, 0, false, ::g::Fuse::Input::PointerEventData_typeof()->Array(), 2, ::g::Java::Object_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("get_PointerIndexMask", NULL, (void*)MotionEvent__get_PointerIndexMask_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_PointerIndexShift", NULL, (void*)MotionEvent__get_PointerIndexShift_fn, 0, true, ::g::Uno::Int_typeof(), 0));
}

uType* MotionEvent_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(MotionEvent);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.MotionEvent", options);
    type->fp_build_ = MotionEvent_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))MotionEvent__Equals_fn;
    return type;
}

// public MotionEvent(Java.Object handle) :977
void MotionEvent__ctor__fn(MotionEvent* __this, ::g::Java::Object* handle)
{
    __this->ctor_(handle);
}

// public int get_Action() :994
void MotionEvent__get_Action_fn(MotionEvent* __this, int* __retval)
{
    *__retval = __this->Action();
}

// public int get_ActionMasked() :989
void MotionEvent__get_ActionMasked_fn(MotionEvent* __this, int* __retval)
{
    *__retval = __this->ActionMasked();
}

// private static bool Compare(Java.Object handle1, Java.Object handle2) :1145
void MotionEvent__Compare_fn(::g::Java::Object* handle1, ::g::Java::Object* handle2, bool* __retval)
{
    *__retval = MotionEvent::Compare(handle1, handle2);
}

// public override sealed bool Equals(object obj) :1035
void MotionEvent__Equals_fn(MotionEvent* __this, uObject* obj, bool* __retval)
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "Equals(object)");

    if (uIs(obj, MotionEvent_typeof()))
        return *__retval = MotionEvent::Compare(__this->_handle, uPtr(uCast<MotionEvent*>(obj, MotionEvent_typeof()))->_handle), void();
    else 
        return *__retval = false, void();
}

// public long get_EventTime() :999
void MotionEvent__get_EventTime_fn(MotionEvent* __this, int64_t* __retval)
{
    *__retval = __this->EventTime();
}

// private int GetAction(Java.Object handle) :1069
void MotionEvent__GetAction_fn(MotionEvent* __this, ::g::Java::Object* handle, int* __retval)
{
    *__retval = __this->GetAction(handle);
}

// private int GetActionMasked(Java.Object handle) :1081
void MotionEvent__GetActionMasked_fn(MotionEvent* __this, ::g::Java::Object* handle, int* __retval)
{
    *__retval = __this->GetActionMasked(handle);
}

// private long GetEventTime(Java.Object handle) :1087
void MotionEvent__GetEventTime_fn(MotionEvent* __this, ::g::Java::Object* handle, int64_t* __retval)
{
    *__retval = __this->GetEventTime(handle);
}

// private float2 GetLocationOnScreen(Java.Object viewHandle) :1047
void MotionEvent__GetLocationOnScreen_fn(MotionEvent* __this, ::g::Java::Object* viewHandle, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetLocationOnScreen(viewHandle);
}

// private int GetLocationOnScreenX(Java.Object viewHandle) :1053
void MotionEvent__GetLocationOnScreenX_fn(MotionEvent* __this, ::g::Java::Object* viewHandle, int* __retval)
{
    *__retval = __this->GetLocationOnScreenX(viewHandle);
}

// private int GetLocationOnScreenY(Java.Object viewHandle) :1061
void MotionEvent__GetLocationOnScreenY_fn(MotionEvent* __this, ::g::Java::Object* viewHandle, int* __retval)
{
    *__retval = __this->GetLocationOnScreenY(viewHandle);
}

// private int GetPointerCount(Java.Object handle) :1093
void MotionEvent__GetPointerCount_fn(MotionEvent* __this, ::g::Java::Object* handle, int* __retval)
{
    *__retval = __this->GetPointerCount(handle);
}

// public int GetPointerId(int pointerIndex) :982
void MotionEvent__GetPointerId_fn(MotionEvent* __this, int* pointerIndex, int* __retval)
{
    *__retval = __this->GetPointerId(*pointerIndex);
}

// private int GetPointerId(Java.Object handle, int pointerIndex) :1075
void MotionEvent__GetPointerId1_fn(MotionEvent* __this, ::g::Java::Object* handle, int* pointerIndex, int* __retval)
{
    *__retval = __this->GetPointerId1(handle, *pointerIndex);
}

// private static int GetPointerIndexMask() :1133
void MotionEvent__GetPointerIndexMask_fn(int* __retval)
{
    *__retval = MotionEvent::GetPointerIndexMask();
}

// private static int GetPointerIndexShift() :1139
void MotionEvent__GetPointerIndexShift_fn(int* __retval)
{
    *__retval = MotionEvent::GetPointerIndexShift();
}

// public float2 GetPosition(int pointerIndex) :1007
void MotionEvent__GetPosition_fn(MotionEvent* __this, int* pointerIndex, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetPosition(*pointerIndex);
}

// private float GetX(Java.Object handle, int pointerIndex) :1099
void MotionEvent__GetX_fn(MotionEvent* __this, ::g::Java::Object* handle, int* pointerIndex, float* __retval)
{
    *__retval = __this->GetX(handle, *pointerIndex);
}

// private float GetY(Java.Object handle, int pointerIndex) :1105
void MotionEvent__GetY_fn(MotionEvent* __this, ::g::Java::Object* handle, int* pointerIndex, float* __retval)
{
    *__retval = __this->GetY(handle, *pointerIndex);
}

// public MotionEvent New(Java.Object handle) :977
void MotionEvent__New1_fn(::g::Java::Object* handle, MotionEvent** __retval)
{
    *__retval = MotionEvent::New1(handle);
}

// public int get_PointerCount() :1004
void MotionEvent__get_PointerCount_fn(MotionEvent* __this, int* __retval)
{
    *__retval = __this->PointerCount();
}

// public Fuse.Input.PointerEventData[] PointerEventDataForView(Java.Object view, float pointDensity) :1012
void MotionEvent__PointerEventDataForView_fn(MotionEvent* __this, ::g::Java::Object* view, float* pointDensity, uArray** __retval)
{
    *__retval = __this->PointerEventDataForView(view, *pointDensity);
}

// public static int get_PointerIndexMask() :1124
void MotionEvent__get_PointerIndexMask_fn(int* __retval)
{
    *__retval = MotionEvent::PointerIndexMask();
}

// public static int get_PointerIndexShift() :1129
void MotionEvent__get_PointerIndexShift_fn(int* __retval)
{
    *__retval = MotionEvent::PointerIndexShift();
}

// public MotionEvent(Java.Object handle) [instance] :977
void MotionEvent::ctor_(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", ".ctor(Java.Object)");
    _handle = handle;
}

// public int get_Action() [instance] :994
int MotionEvent::Action()
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "get_Action()");
    return GetAction(_handle);
}

// public int get_ActionMasked() [instance] :989
int MotionEvent::ActionMasked()
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "get_ActionMasked()");
    return GetActionMasked(_handle);
}

// public long get_EventTime() [instance] :999
int64_t MotionEvent::EventTime()
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "get_EventTime()");
    return GetEventTime(_handle);
}

// private int GetAction(Java.Object handle) [instance] :1069
int MotionEvent::GetAction(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "GetAction(Java.Object)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetAction98", "(Lcom/uno/UnoObject;Ljava/lang/Object;)I");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_this_,_handle);
        int __result = (int)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private int GetActionMasked(Java.Object handle) [instance] :1081
int MotionEvent::GetActionMasked(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "GetActionMasked(Java.Object)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetActionMasked99", "(Lcom/uno/UnoObject;Ljava/lang/Object;)I");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_this_,_handle);
        int __result = (int)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private long GetEventTime(Java.Object handle) [instance] :1087
int64_t MotionEvent::GetEventTime(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "GetEventTime(Java.Object)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetEventTime100", "(Lcom/uno/UnoObject;Ljava/lang/Object;)J");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jlong __jresult = U_JNIVAR->CallStaticLongMethod(__cls,__mtd,_this_,_handle);
        int64_t __result = (int64_t)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private float2 GetLocationOnScreen(Java.Object viewHandle) [instance] :1047
::g::Uno::Float2 MotionEvent::GetLocationOnScreen(::g::Java::Object* viewHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "GetLocationOnScreen(Java.Object)");
    return ::g::Uno::Float2__New2((float)GetLocationOnScreenX(viewHandle), (float)GetLocationOnScreenY(viewHandle));
}

// private int GetLocationOnScreenX(Java.Object viewHandle) [instance] :1053
int MotionEvent::GetLocationOnScreenX(::g::Java::Object* viewHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "GetLocationOnScreenX(Java.Object)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetLocationOnScreenX101", "(Lcom/uno/UnoObject;Ljava/lang/Object;)I");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_this_,_viewHandle);
        int __result = (int)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private int GetLocationOnScreenY(Java.Object viewHandle) [instance] :1061
int MotionEvent::GetLocationOnScreenY(::g::Java::Object* viewHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "GetLocationOnScreenY(Java.Object)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetLocationOnScreenY102", "(Lcom/uno/UnoObject;Ljava/lang/Object;)I");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_this_,_viewHandle);
        int __result = (int)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private int GetPointerCount(Java.Object handle) [instance] :1093
int MotionEvent::GetPointerCount(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "GetPointerCount(Java.Object)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetPointerCount103", "(Lcom/uno/UnoObject;Ljava/lang/Object;)I");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_this_,_handle);
        int __result = (int)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public int GetPointerId(int pointerIndex) [instance] :982
int MotionEvent::GetPointerId(int pointerIndex)
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "GetPointerId(int)");
    return GetPointerId1(_handle, pointerIndex);
}

// private int GetPointerId(Java.Object handle, int pointerIndex) [instance] :1075
int MotionEvent::GetPointerId1(::g::Java::Object* handle, int pointerIndex)
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "GetPointerId(Java.Object,int)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetPointerId1104", "(Lcom/uno/UnoObject;Ljava/lang/Object;I)I");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _upointerIndex=pointerIndex;
        jint _pointerIndex = (jint)_upointerIndex;
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_this_,_handle,_pointerIndex);
        int __result = (int)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public float2 GetPosition(int pointerIndex) [instance] :1007
::g::Uno::Float2 MotionEvent::GetPosition(int pointerIndex)
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "GetPosition(int)");
    return ::g::Uno::Float2__New2(GetX(_handle, pointerIndex), GetY(_handle, pointerIndex));
}

// private float GetX(Java.Object handle, int pointerIndex) [instance] :1099
float MotionEvent::GetX(::g::Java::Object* handle, int pointerIndex)
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "GetX(Java.Object,int)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetX107", "(Lcom/uno/UnoObject;Ljava/lang/Object;I)F");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _upointerIndex=pointerIndex;
        jint _pointerIndex = (jint)_upointerIndex;
        jfloat __jresult = U_JNIVAR->CallStaticFloatMethod(__cls,__mtd,_this_,_handle,_pointerIndex);
        float __result = (float)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private float GetY(Java.Object handle, int pointerIndex) [instance] :1105
float MotionEvent::GetY(::g::Java::Object* handle, int pointerIndex)
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "GetY(Java.Object,int)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetY109", "(Lcom/uno/UnoObject;Ljava/lang/Object;I)F");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _upointerIndex=pointerIndex;
        jint _pointerIndex = (jint)_upointerIndex;
        jfloat __jresult = U_JNIVAR->CallStaticFloatMethod(__cls,__mtd,_this_,_handle,_pointerIndex);
        float __result = (float)__jresult;
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public int get_PointerCount() [instance] :1004
int MotionEvent::PointerCount()
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "get_PointerCount()");
    return GetPointerCount(_handle);
}

// public Fuse.Input.PointerEventData[] PointerEventDataForView(Java.Object view, float pointDensity) [instance] :1012
uArray* MotionEvent::PointerEventDataForView(::g::Java::Object* view, float pointDensity)
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "PointerEventDataForView(Java.Object,float)");
    ::g::Fuse::Input::PointerEventData* collection1;
    uArray* pointerEventData = uArray::New(::TYPES[21/*Fuse.Input.PointerEventData[]*/], PointerCount());
    ::g::Uno::Float2 locationOnScreen = GetLocationOnScreen(view);

    for (int i = 0; i < pointerEventData->Length(); i++)
    {
        ::g::Uno::Float2 windowPoint = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Addition2(locationOnScreen, GetPosition(i)), pointDensity);
        int pointerId = GetPointerId(i);
        uPtr(pointerEventData)->Strong< ::g::Fuse::Input::PointerEventData*>(i) = (collection1 = ::g::Fuse::Input::PointerEventData::New1(), uPtr(collection1)->PointIndex = pointerId, uPtr(collection1)->WindowPoint = windowPoint, uPtr(collection1)->Timestamp = (((double)EventTime() / 1000.0) - ::g::Fuse::Time::FrameTimeBase()), uPtr(collection1)->PointerType = 2, uPtr(collection1)->IsPrimary = (pointerId == 0), collection1);
    }

    return pointerEventData;
}

// private static bool Compare(Java.Object handle1, Java.Object handle2) [static] :1145
bool MotionEvent::Compare(::g::Java::Object* handle1, ::g::Java::Object* handle2)
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "Compare(Java.Object,Java.Object)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Compare97", "(Ljava/lang/Object;Ljava/lang/Object;)Z");
        ::g::Java::Object* _uhandle1=handle1;
        jobject _handle1 = (_uhandle1==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle1, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uhandle2=handle2;
        jobject _handle2 = (_uhandle2==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle2, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jboolean __jresult = U_JNIVAR->CallStaticBooleanMethod(__cls,__mtd,_handle1,_handle2);
        bool __result = (bool)__jresult;
        if (_handle1!=NULL) { U_JNIVAR->DeleteLocalRef(_handle1); }
        if (_handle2!=NULL) { U_JNIVAR->DeleteLocalRef(_handle2); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetPointerIndexMask() [static] :1133
int MotionEvent::GetPointerIndexMask()
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "GetPointerIndexMask()");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetPointerIndexMask105", "()I");
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd);
        int __result = (int)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetPointerIndexShift() [static] :1139
int MotionEvent::GetPointerIndexShift()
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "GetPointerIndexShift()");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetPointerIndexShift106", "()I");
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd);
        int __result = (int)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public MotionEvent New(Java.Object handle) [static] :977
MotionEvent* MotionEvent::New1(::g::Java::Object* handle)
{
    MotionEvent* obj2 = (MotionEvent*)uNew(MotionEvent_typeof());
    obj2->ctor_(handle);
    return obj2;
}

// public static int get_PointerIndexMask() [static] :1124
int MotionEvent::PointerIndexMask()
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "get_PointerIndexMask()");
    return MotionEvent::GetPointerIndexMask();
}

// public static int get_PointerIndexShift() [static] :1129
int MotionEvent::PointerIndexShift()
{
    uStackFrame __("Fuse.Controls.Native.Android.MotionEvent", "get_PointerIndexShift()");
    return MotionEvent::GetPointerIndexShift();
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/android/$.uno
// -----------------------------------------------------------------------

// internal sealed extern class NativeViewRenderer :1206
// {
static void NativeViewRenderer_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::INativeViewRenderer_typeof(), offsetof(NativeViewRenderer_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(NativeViewRenderer_type, interface1));
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::NativeViewRenderer, _bitmapHandle), 0,
        ::g::Uno::Int2_typeof(), offsetof(::g::Fuse::Controls::Native::Android::NativeViewRenderer, _oldSize), 0,
        ::g::OpenGL::GLTextureHandle_typeof(), offsetof(::g::Fuse::Controls::Native::Android::NativeViewRenderer, _textureHandle), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::NativeViewRenderer, _viewHandle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::Android::NativeViewRenderer, _visualValid), 0);
}

NativeViewRenderer_type* NativeViewRenderer_typeof()
{
    static uSStrong<NativeViewRenderer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(NativeViewRenderer);
    options.TypeSize = sizeof(NativeViewRenderer_type);
    type = (NativeViewRenderer_type*)uClassType::New("Fuse.Controls.Native.Android.NativeViewRenderer", options);
    type->fp_build_ = NativeViewRenderer_build;
    type->interface0.fp_Draw = (void(*)(uObject*, ::g::Uno::Float4x4*, ::g::Uno::Float2*, ::g::Uno::Float2*, float*))NativeViewRenderer__FuseControlsNativeINativeViewRendererDraw_fn;
    type->interface0.fp_Invalidate = (void(*)(uObject*))NativeViewRenderer__FuseControlsNativeINativeViewRendererInvalidate_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))NativeViewRenderer__UnoIDisposableDispose_fn;
    return type;
}

// public NativeViewRenderer(Java.Object viewHandle) :1215
void NativeViewRenderer__ctor__fn(NativeViewRenderer* __this, ::g::Java::Object* viewHandle)
{
    __this->ctor_(viewHandle);
}

// private static Java.Object CreateBitmap(int w, int h) :1290
void NativeViewRenderer__CreateBitmap_fn(int* w, int* h, ::g::Java::Object** __retval)
{
    *__retval = NativeViewRenderer::CreateBitmap(*w, *h);
}

// private void DeleteTexture() :1305
void NativeViewRenderer__DeleteTexture_fn(NativeViewRenderer* __this)
{
    __this->DeleteTexture();
}

// private static void DisposeBitmap(Java.Object bitmap) :1284
void NativeViewRenderer__DisposeBitmap_fn(::g::Java::Object* bitmap)
{
    NativeViewRenderer::DisposeBitmap(bitmap);
}

// private void Fuse.Controls.Native.INativeViewRenderer.Draw(float4x4 localToClipTransform, float2 position, float2 size, float density) :1221
void NativeViewRenderer__FuseControlsNativeINativeViewRendererDraw_fn(NativeViewRenderer* __this, ::g::Uno::Float4x4* localToClipTransform, ::g::Uno::Float2* position, ::g::Uno::Float2* size, float* density)
{
    uStackFrame __("Fuse.Controls.Native.Android.NativeViewRenderer", "Fuse.Controls.Native.INativeViewRenderer.Draw(float4x4,float2,float2,float)");
    ::g::Uno::Float2 size_ = *size;
    float density_ = *density;
    ::g::Uno::Float2 position_ = *position;
    ::g::Uno::Float4x4 localToClipTransform_ = *localToClipTransform;
    ::g::Uno::Int2 realSize = ::g::Uno::Int2__op_Explicit(::g::Uno::Float2__op_Multiply1(size_, density_));
    bool reuse = true;

    if (::g::Uno::Int2__op_Inequality(__this->_oldSize, realSize))
    {
        __this->DeleteTexture();
        __this->_textureHandle = ::g::OpenGL::GL::CreateTexture();
        __this->_bitmapHandle = NativeViewRenderer::CreateBitmap(realSize.X, realSize.Y);
        __this->_oldSize = realSize;
        reuse = false;
        __this->_visualValid = false;
    }

    if (!__this->_visualValid)
    {
        ::g::OpenGL::GL::BindTexture(3553, __this->_textureHandle);
        NativeViewRenderer::Upload(__this->_viewHandle, __this->_bitmapHandle, reuse, realSize.X, realSize.Y);
        ::g::OpenGL::GL::BindTexture(3553, ::g::OpenGL::GLTextureHandle::Zero_);
        __this->_visualValid = true;
    }

    uPtr(::g::Fuse::Controls::Native::Android::Blitter::Singleton())->Blit(::g::Uno::Graphics::Texture2D::New2(__this->_textureHandle, realSize, 1, 3), position_, size_, localToClipTransform_);
}

// private void Fuse.Controls.Native.INativeViewRenderer.Invalidate() :1295
void NativeViewRenderer__FuseControlsNativeINativeViewRendererInvalidate_fn(NativeViewRenderer* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.NativeViewRenderer", "Fuse.Controls.Native.INativeViewRenderer.Invalidate()");
    __this->_visualValid = false;
}

// public NativeViewRenderer New(Java.Object viewHandle) :1215
void NativeViewRenderer__New1_fn(::g::Java::Object* viewHandle, NativeViewRenderer** __retval)
{
    *__retval = NativeViewRenderer::New1(viewHandle);
}

// private void Uno.IDisposable.Dispose() :1300
void NativeViewRenderer__UnoIDisposableDispose_fn(NativeViewRenderer* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.NativeViewRenderer", "Uno.IDisposable.Dispose()");
    __this->DeleteTexture();
}

// private static void Upload(Java.Object viewHandle, Java.Object bitmapHandle, bool reuse, int w, int h) :1257
void NativeViewRenderer__Upload_fn(::g::Java::Object* viewHandle, ::g::Java::Object* bitmapHandle, bool* reuse, int* w, int* h)
{
    NativeViewRenderer::Upload(viewHandle, bitmapHandle, *reuse, *w, *h);
}

// public NativeViewRenderer(Java.Object viewHandle) [instance] :1215
void NativeViewRenderer::ctor_(::g::Java::Object* viewHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.NativeViewRenderer", ".ctor(Java.Object)");
    _oldSize = ::g::Uno::Int2__New2(-1, -1);
    _viewHandle = viewHandle;
}

// private void DeleteTexture() [instance] :1305
void NativeViewRenderer::DeleteTexture()
{
    uStackFrame __("Fuse.Controls.Native.Android.NativeViewRenderer", "DeleteTexture()");

    if (::g::OpenGL::GLTextureHandle::op_Inequality(_textureHandle, ::g::OpenGL::GLTextureHandle::Zero_))
    {
        ::g::OpenGL::GL::DeleteTexture(_textureHandle);
        _textureHandle = ::g::OpenGL::GLTextureHandle::Zero_;
    }

    if (_bitmapHandle != NULL)
    {
        NativeViewRenderer::DisposeBitmap(_bitmapHandle);
        _bitmapHandle = NULL;
    }
}

// private static Java.Object CreateBitmap(int w, int h) [static] :1290
::g::Java::Object* NativeViewRenderer::CreateBitmap(int w, int h)
{
    uStackFrame __("Fuse.Controls.Native.Android.NativeViewRenderer", "CreateBitmap(int,int)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateBitmap111", "(II)Ljava/lang/Object;");
        int _uw=w;
        jint _w = (jint)_uw;
        int _uh=h;
        jint _h = (jint)_uh;
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_w,_h);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static void DisposeBitmap(Java.Object bitmap) [static] :1284
void NativeViewRenderer::DisposeBitmap(::g::Java::Object* bitmap)
{
    uStackFrame __("Fuse.Controls.Native.Android.NativeViewRenderer", "DisposeBitmap(Java.Object)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "DisposeBitmap112", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _ubitmap=bitmap;
        jobject _bitmap = (_ubitmap==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ubitmap, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_bitmap);
        
        if (_bitmap!=NULL) { U_JNIVAR->DeleteLocalRef(_bitmap); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public NativeViewRenderer New(Java.Object viewHandle) [static] :1215
NativeViewRenderer* NativeViewRenderer::New1(::g::Java::Object* viewHandle)
{
    NativeViewRenderer* obj1 = (NativeViewRenderer*)uNew(NativeViewRenderer_typeof());
    obj1->ctor_(viewHandle);
    return obj1;
}

// private static void Upload(Java.Object viewHandle, Java.Object bitmapHandle, bool reuse, int w, int h) [static] :1257
void NativeViewRenderer::Upload(::g::Java::Object* viewHandle, ::g::Java::Object* bitmapHandle, bool reuse, int w, int h)
{
    uStackFrame __("Fuse.Controls.Native.Android.NativeViewRenderer", "Upload(Java.Object,Java.Object,bool,int,int)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Upload113", "(Ljava/lang/Object;Ljava/lang/Object;ZII)V");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ubitmapHandle=bitmapHandle;
        jobject _bitmapHandle = (_ubitmapHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ubitmapHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool _ureuse=reuse;
        jboolean _reuse = (jboolean)_ureuse;
        int _uw=w;
        jint _w = (jint)_uw;
        int _uh=h;
        jint _h = (jint)_uh;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_viewHandle,_bitmapHandle,_reuse,_w,_h);
        
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        if (_bitmapHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_bitmapHandle); }
        
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/android/$.uno
// -----------------------------------------------------------------------

// internal sealed extern class Rectangle :1363
// {
static void Rectangle_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Rectangle_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Rectangle_type, interface1),
        ::g::Fuse::Controls::Native::IShapeView_typeof(), offsetof(Rectangle_type, interface2),
        ::g::Fuse::Controls::Native::IRectangleView_typeof(), offsetof(Rectangle_type, interface3));
    type->SetFields(9,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Rectangle, _cornerRadius), 0);
}

Rectangle_type* Rectangle_typeof()
{
    static uSStrong<Rectangle_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::Shape_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Rectangle);
    options.TypeSize = sizeof(Rectangle_type);
    type = (Rectangle_type*)uClassType::New("Fuse.Controls.Native.Android.Rectangle", options);
    type->fp_build_ = Rectangle_build;
    type->fp_ctor_ = (void*)Rectangle__New1_fn;
    type->fp_UpdateShapeDrawable = (void(*)(::g::Fuse::Controls::Native::Android::Shape*, ::g::Java::Object*, float*))Rectangle__UpdateShapeDrawable_fn;
    type->interface3.fp_set_CornerRadius = (void(*)(uObject*, ::g::Uno::Float4*))Rectangle__FuseControlsNativeIRectangleViewset_CornerRadius_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Dispose_fn;
    type->interface2.fp_Update = (void(*)(uObject*, uArray*, uArray*, float*))::g::Fuse::Controls::Native::Android::Shape__FuseControlsNativeIShapeViewUpdate_fn;
    return type;
}

// public generated Rectangle() :1363
void Rectangle__ctor_2_fn(Rectangle* __this)
{
    __this->ctor_2();
}

// private void Fuse.Controls.Native.IRectangleView.set_CornerRadius(float4 value) :1368
void Rectangle__FuseControlsNativeIRectangleViewset_CornerRadius_fn(Rectangle* __this, ::g::Uno::Float4* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.Rectangle", "Fuse.Controls.Native.IRectangleView.set_CornerRadius(float4)");
    ::g::Uno::Float4 value_ = *value;
    __this->_cornerRadius = value_;
    __this->OnShapeChanged();
}

// public generated Rectangle New() :1363
void Rectangle__New1_fn(Rectangle** __retval)
{
    *__retval = Rectangle::New1();
}

// protected override sealed void UpdateShapeDrawable(Java.Object handle, float pixelsPerPoint) :1375
void Rectangle__UpdateShapeDrawable_fn(Rectangle* __this, ::g::Java::Object* handle, float* pixelsPerPoint)
{
    uStackFrame __("Fuse.Controls.Native.Android.Rectangle", "UpdateShapeDrawable(Java.Object,float)");
    float pixelsPerPoint_ = *pixelsPerPoint;
    ::g::Uno::Float4 r = ::g::Uno::Float4__op_Multiply1(__this->_cornerRadius, pixelsPerPoint_);
    __this->UpdateShapeDrawable1(handle, r.X, r.Y, r.Z, r.W);
}

// private void UpdateShapeDrawable(Java.Object handle, float x, float y, float z, float w) :1382
void Rectangle__UpdateShapeDrawable1_fn(Rectangle* __this, ::g::Java::Object* handle, float* x, float* y, float* z, float* w)
{
    __this->UpdateShapeDrawable1(handle, *x, *y, *z, *w);
}

// public generated Rectangle() [instance] :1363
void Rectangle::ctor_2()
{
    uStackFrame __("Fuse.Controls.Native.Android.Rectangle", ".ctor()");
    _cornerRadius = ::g::Uno::Float4__New1(0.0f);
    ctor_1();
}

// private void UpdateShapeDrawable(Java.Object handle, float x, float y, float z, float w) [instance] :1382
void Rectangle::UpdateShapeDrawable1(::g::Java::Object* handle, float x, float y, float z, float w)
{
    uStackFrame __("Fuse.Controls.Native.Android.Rectangle", "UpdateShapeDrawable(Java.Object,float,float,float,float)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "UpdateShapeDrawable1114", "(Lcom/uno/UnoObject;Ljava/lang/Object;FFFF)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _ux=x;
        jfloat _x = (jfloat)_ux;
        float _uy=y;
        jfloat _y = (jfloat)_uy;
        float _uz=z;
        jfloat _z = (jfloat)_uz;
        float _uw=w;
        jfloat _w = (jfloat)_uw;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle,_x,_y,_z,_w);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public generated Rectangle New() [static] :1363
Rectangle* Rectangle::New1()
{
    Rectangle* obj1 = (Rectangle*)uNew(Rectangle_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/android/$.uno
// -----------------------------------------------------------------------

// public sealed extern class ScrollView :1402
// {
static void ScrollView_build(uType* type)
{
    ::TYPES[5] = ::g::Fuse::Controls::Native::Android::View_typeof();
    ::TYPES[22] = ::g::Fuse::Controls::Native::IScrollViewHost_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(ScrollView_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ScrollView_type, interface1),
        ::g::Fuse::Controls::Native::Android::IViewParent_typeof(), offsetof(ScrollView_type, interface2),
        ::g::Fuse::Controls::Native::IScrollView_typeof(), offsetof(ScrollView_type, interface3),
        ::g::Fuse::Controls::Native::IViewGroup_typeof(), offsetof(ScrollView_type, interface4));
    type->SetFields(6,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::ScrollView, _callbackHandle), 0,
        ::g::Fuse::Controls::Native::Android::View_typeof(), offsetof(::g::Fuse::Controls::Native::Android::ScrollView, _content), 0,
        ::g::Fuse::Controls::Native::IScrollViewHost_typeof(), offsetof(::g::Fuse::Controls::Native::Android::ScrollView, _host), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("set_AllowedScrollDirections", NULL, (void*)ScrollView__set_AllowedScrollDirections_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::ScrollDirections_typeof()),
        new uFunction("set_Content", NULL, (void*)ScrollView__set_Content_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::Native::Android::View_typeof()),
        new uFunction(".ctor", NULL, (void*)ScrollView__New1_fn, 0, true, ScrollView_typeof(), 1, ::g::Fuse::Controls::Native::IScrollViewHost_typeof()),
        new uFunction("set_ScrollPosition", NULL, (void*)ScrollView__set_ScrollPosition_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()));
}

ScrollView_type* ScrollView_typeof()
{
    static uSStrong<ScrollView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::View_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(ScrollView);
    options.TypeSize = sizeof(ScrollView_type);
    type = (ScrollView_type*)uClassType::New("Fuse.Controls.Native.Android.ScrollView", options);
    type->fp_build_ = ScrollView_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::Android::View*))ScrollView__Dispose_fn;
    type->interface2.fp_SetChildSize = (void(*)(uObject*, ::g::Fuse::Controls::Native::Android::View*, ::g::Uno::Float2*))ScrollView__FuseControlsNativeAndroidIViewParentSetChildSize_fn;
    type->interface4.fp_Add = (void(*)(uObject*, uObject*))ScrollView__FuseControlsNativeIViewGroupAdd_fn;
    type->interface4.fp_Add1 = (void(*)(uObject*, uObject*, int*))ScrollView__FuseControlsNativeIViewGroupAdd1_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, uObject*))ScrollView__FuseControlsNativeIViewGroupRemove_fn;
    type->interface4.fp_set_HitTestEnabled = (void(*)(uObject*, bool*))ScrollView__FuseControlsNativeIViewGroupset_HitTestEnabled_fn;
    type->interface4.fp_set_ClipToBounds = (void(*)(uObject*, bool*))ScrollView__FuseControlsNativeIViewGroupset_ClipToBounds_fn;
    type->interface3.fp_set_ScrollPosition = (void(*)(uObject*, ::g::Uno::Float2*))ScrollView__set_ScrollPosition_fn;
    type->interface3.fp_set_AllowedScrollDirections = (void(*)(uObject*, int*))ScrollView__set_AllowedScrollDirections_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))ScrollView__Dispose_fn;
    return type;
}

// public ScrollView(Fuse.Controls.Native.IScrollViewHost host) :1408
void ScrollView__ctor_1_fn(ScrollView* __this, uObject* host)
{
    __this->ctor_1(host);
}

// private Java.Object AddCallback(Java.Object handle) :1427
void ScrollView__AddCallback_fn(ScrollView* __this, ::g::Java::Object* handle, ::g::Java::Object** __retval)
{
    *__retval = __this->AddCallback(handle);
}

// public void set_AllowedScrollDirections(Fuse.Controls.ScrollDirections value) :1440
void ScrollView__set_AllowedScrollDirections_fn(ScrollView* __this, int* value)
{
    __this->AllowedScrollDirections(*value);
}

// public void set_Content(Fuse.Controls.Native.Android.View value) :1491
void ScrollView__set_Content_fn(ScrollView* __this, ::g::Fuse::Controls::Native::Android::View* value)
{
    __this->Content(value);
}

// private static Java.Object Create() :1421
void ScrollView__Create_fn(::g::Java::Object** __retval)
{
    *__retval = ScrollView::Create();
}

// public override sealed void Dispose() :1414
void ScrollView__Dispose_fn(ScrollView* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.ScrollView", "Dispose()");
    __this->_host = NULL;
    ::g::Fuse::Controls::Native::Android::View__Dispose_fn(__this);
}

// private void Fuse.Controls.Native.Android.IViewParent.SetChildSize(Fuse.Controls.Native.Android.View view, float2 size) :1463
void ScrollView__FuseControlsNativeAndroidIViewParentSetChildSize_fn(ScrollView* __this, ::g::Fuse::Controls::Native::Android::View* view, ::g::Uno::Float2* size)
{
    uStackFrame __("Fuse.Controls.Native.Android.ScrollView", "Fuse.Controls.Native.Android.IViewParent.SetChildSize(Fuse.Controls.Native.Android.View,float2)");
    ::g::Uno::Float2 size_ = *size;
    ScrollView::SetChildSize(uPtr(view)->Handle(), (int)size_.X, (int)size_.Y);
}

// private void Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView child) :1473
void ScrollView__FuseControlsNativeIViewGroupAdd_fn(ScrollView* __this, uObject* child)
{
    uStackFrame __("Fuse.Controls.Native.Android.ScrollView", "Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView)");
    __this->Content(uCast< ::g::Fuse::Controls::Native::Android::View*>(child, ::TYPES[5/*Fuse.Controls.Native.Android.View*/]));
}

// private void Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView child, int index) :1478
void ScrollView__FuseControlsNativeIViewGroupAdd1_fn(ScrollView* __this, uObject* child, int* index)
{
    uStackFrame __("Fuse.Controls.Native.Android.ScrollView", "Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView,int)");
    __this->Content(uCast< ::g::Fuse::Controls::Native::Android::View*>(child, ::TYPES[5/*Fuse.Controls.Native.Android.View*/]));
}

// private void Fuse.Controls.Native.IViewGroup.set_ClipToBounds(bool value) :1470
void ScrollView__FuseControlsNativeIViewGroupset_ClipToBounds_fn(ScrollView* __this, bool* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.ScrollView", "Fuse.Controls.Native.IViewGroup.set_ClipToBounds(bool)");
    bool value_ = *value;
    ScrollView::SetClipToBounds(__this->Handle(), value_);
}

// private void Fuse.Controls.Native.IViewGroup.set_HitTestEnabled(bool value) :1445
void ScrollView__FuseControlsNativeIViewGroupset_HitTestEnabled_fn(ScrollView* __this, bool* value)
{
}

// private void Fuse.Controls.Native.IViewGroup.Remove(Fuse.Controls.Native.IView child) :1483
void ScrollView__FuseControlsNativeIViewGroupRemove_fn(ScrollView* __this, uObject* child)
{
    uStackFrame __("Fuse.Controls.Native.Android.ScrollView", "Fuse.Controls.Native.IViewGroup.Remove(Fuse.Controls.Native.IView)");
    __this->Content(NULL);
}

// public ScrollView New(Fuse.Controls.Native.IScrollViewHost host) :1408
void ScrollView__New1_fn(uObject* host, ScrollView** __retval)
{
    *__retval = ScrollView::New1(host);
}

// private void OnScrollChanged(int x, int y, int oldx, int oldy) :1457
void ScrollView__OnScrollChanged_fn(ScrollView* __this, int* x, int* y, int* oldx, int* oldy)
{
    __this->OnScrollChanged(*x, *y, *oldx, *oldy);
}

// public void set_ScrollPosition(float2 value) :1450
void ScrollView__set_ScrollPosition_fn(ScrollView* __this, ::g::Uno::Float2* value)
{
    __this->ScrollPosition(*value);
}

// private static void SetChildSize(Java.Object handle, int w, int h) :1533
void ScrollView__SetChildSize_fn(::g::Java::Object* handle, int* w, int* h)
{
    ScrollView::SetChildSize(handle, *w, *h);
}

// private static void SetClipToBounds(Java.Object handle, bool clipToBounds) :1504
void ScrollView__SetClipToBounds_fn(::g::Java::Object* handle, bool* clipToBounds)
{
    ScrollView::SetClipToBounds(handle, *clipToBounds);
}

// private static void SetContent(Java.Object parentHandle, Java.Object childHandle) :1520
void ScrollView__SetContent_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    ScrollView::SetContent(parentHandle, childHandle);
}

// private static void SetScrollPosition(Java.Object handle, int x, int y) :1512
void ScrollView__SetScrollPosition_fn(::g::Java::Object* handle, int* x, int* y)
{
    ScrollView::SetScrollPosition(handle, *x, *y);
}

// public ScrollView(Fuse.Controls.Native.IScrollViewHost host) [instance] :1408
void ScrollView::ctor_1(uObject* host)
{
    uStackFrame __("Fuse.Controls.Native.Android.ScrollView", ".ctor(Fuse.Controls.Native.IScrollViewHost)");
    ctor_(ScrollView::Create());
    _host = host;
    _callbackHandle = AddCallback(Handle());
}

// private Java.Object AddCallback(Java.Object handle) [instance] :1427
::g::Java::Object* ScrollView::AddCallback(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.ScrollView", "AddCallback(Java.Object)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddCallback115", "(Lcom/uno/UnoObject;Ljava/lang/Object;)Ljava/lang/Object;");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_this_,_handle);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public void set_AllowedScrollDirections(Fuse.Controls.ScrollDirections value) [instance] :1440
void ScrollView::AllowedScrollDirections(int value)
{
}

// public void set_Content(Fuse.Controls.Native.Android.View value) [instance] :1491
void ScrollView::Content(::g::Fuse::Controls::Native::Android::View* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.ScrollView", "set_Content(Fuse.Controls.Native.Android.View)");

    if (_content != NULL)
        uPtr(_content)->Parent(NULL);

    _content = value;

    if (_content != NULL)
        uPtr(_content)->Parent((uObject*)this);

    ScrollView::SetContent(Handle(), (_content != NULL) ? (::g::Java::Object*)uPtr(_content)->Handle() : NULL);
}

// private void OnScrollChanged(int x, int y, int oldx, int oldy) [instance] :1457
void ScrollView::OnScrollChanged(int x, int y, int oldx, int oldy)
{
    uStackFrame __("Fuse.Controls.Native.Android.ScrollView", "OnScrollChanged(int,int,int,int)");
    float p = ::g::Fuse::Controls::Native::IScrollViewHost::PixelsPerPoint(uInterface(uPtr(_host), ::TYPES[22/*Fuse.Controls.Native.IScrollViewHost*/]));
    ::g::Fuse::Controls::Native::IScrollViewHost::OnScrollPositionChanged(uInterface(uPtr(_host), ::TYPES[22/*Fuse.Controls.Native.IScrollViewHost*/]), ::g::Uno::Float2__New2((float)x / p, (float)y / p));
}

// public void set_ScrollPosition(float2 value) [instance] :1450
void ScrollView::ScrollPosition(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Controls.Native.Android.ScrollView", "set_ScrollPosition(float2)");
    ::g::Uno::Int2 x = ::g::Uno::Int2__op_Explicit(::g::Uno::Float2__op_Multiply1(value, ::g::Fuse::Controls::Native::IScrollViewHost::PixelsPerPoint(uInterface(uPtr(_host), ::TYPES[22/*Fuse.Controls.Native.IScrollViewHost*/]))));
    ScrollView::SetScrollPosition(Handle(), x.X, x.Y);
}

// private static Java.Object Create() [static] :1421
::g::Java::Object* ScrollView::Create()
{
    uStackFrame __("Fuse.Controls.Native.Android.ScrollView", "Create()");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create117", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public ScrollView New(Fuse.Controls.Native.IScrollViewHost host) [static] :1408
ScrollView* ScrollView::New1(uObject* host)
{
    ScrollView* obj1 = (ScrollView*)uNew(ScrollView_typeof());
    obj1->ctor_1(host);
    return obj1;
}

// private static void SetChildSize(Java.Object handle, int w, int h) [static] :1533
void ScrollView::SetChildSize(::g::Java::Object* handle, int w, int h)
{
    uStackFrame __("Fuse.Controls.Native.Android.ScrollView", "SetChildSize(Java.Object,int,int)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetChildSize118", "(Ljava/lang/Object;II)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uw=w;
        jint _w = (jint)_uw;
        int _uh=h;
        jint _h = (jint)_uh;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_w,_h);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetClipToBounds(Java.Object handle, bool clipToBounds) [static] :1504
void ScrollView::SetClipToBounds(::g::Java::Object* handle, bool clipToBounds)
{
    uStackFrame __("Fuse.Controls.Native.Android.ScrollView", "SetClipToBounds(Java.Object,bool)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetClipToBounds119", "(Ljava/lang/Object;Z)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool _uclipToBounds=clipToBounds;
        jboolean _clipToBounds = (jboolean)_uclipToBounds;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_clipToBounds);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetContent(Java.Object parentHandle, Java.Object childHandle) [static] :1520
void ScrollView::SetContent(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.ScrollView", "SetContent(Java.Object,Java.Object)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetContent120", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uparentHandle=parentHandle;
        jobject _parentHandle = (_uparentHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uparentHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uchildHandle=childHandle;
        jobject _childHandle = (_uchildHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uchildHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_parentHandle,_childHandle);
        
        if (_parentHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_parentHandle); }
        if (_childHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_childHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetScrollPosition(Java.Object handle, int x, int y) [static] :1512
void ScrollView::SetScrollPosition(::g::Java::Object* handle, int x, int y)
{
    uStackFrame __("Fuse.Controls.Native.Android.ScrollView", "SetScrollPosition(Java.Object,int,int)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetScrollPosition121", "(Ljava/lang/Object;II)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _ux=x;
        jint _x = (jint)_ux;
        int _uy=y;
        jint _y = (jint)_uy;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_x,_y);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/android/$.uno
// -----------------------------------------------------------------------

// internal abstract extern class Shape :1554
// {
static void Shape_build(uType* type)
{
    ::STRINGS[1] = uString::Const("");
    ::STRINGS[2] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/android/$.uno");
    ::STRINGS[3] = uString::Const("SetBrush");
    ::TYPES[23] = ::g::Fuse::Drawing::LinearGradient_typeof();
    ::TYPES[24] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[25] = ::g::Fuse::Drawing::StaticSolidColor_typeof();
    ::TYPES[26] = ::g::Fuse::Drawing::DynamicBrush_typeof();
    ::TYPES[27] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Fuse::Drawing::GradientStop_typeof());
    ::TYPES[28] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Fuse::Drawing::GradientStop_typeof());
    ::TYPES[29] = ::g::Uno::Func2_typeof()->MakeType(::g::Fuse::Drawing::GradientStop_typeof(), ::g::Fuse::Drawing::GradientStop_typeof(), ::g::Uno::Int_typeof());
    ::TYPES[9] = ::g::Uno::Int_typeof()->Array();
    ::TYPES[30] = ::g::Uno::Float_typeof()->Array();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Shape_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Shape_type, interface1),
        ::g::Fuse::Controls::Native::IShapeView_typeof(), offsetof(Shape_type, interface2));
    type->SetFields(6,
        ::g::Fuse::Drawing::Brush_typeof()->Array(), offsetof(::g::Fuse::Controls::Native::Android::Shape, _fills), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Shape, _pixelsPerPoint), 0,
        ::g::Fuse::Drawing::Stroke_typeof()->Array(), offsetof(::g::Fuse::Controls::Native::Android::Shape, _strokes), 0);
}

Shape_type* Shape_typeof()
{
    static uSStrong<Shape_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::View_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Shape);
    options.TypeSize = sizeof(Shape_type);
    type = (Shape_type*)uClassType::New("Fuse.Controls.Native.Android.Shape", options);
    type->fp_build_ = Shape_build;
    type->interface2.fp_Update = (void(*)(uObject*, uArray*, uArray*, float*))Shape__FuseControlsNativeIShapeViewUpdate_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Dispose_fn;
    return type;
}

// protected Shape() :1558
void Shape__ctor_1_fn(Shape* __this)
{
    __this->ctor_1();
}

// private static Java.Object Create() :1721
void Shape__Create_fn(::g::Java::Object** __retval)
{
    *__retval = Shape::Create();
}

// private void Fuse.Controls.Native.IShapeView.Update(Fuse.Drawing.Brush[] fills, Fuse.Drawing.Stroke[] strokes, float pixelsPerPoint) :1567
void Shape__FuseControlsNativeIShapeViewUpdate_fn(Shape* __this, uArray* fills, uArray* strokes, float* pixelsPerPoint)
{
    uStackFrame __("Fuse.Controls.Native.Android.Shape", "Fuse.Controls.Native.IShapeView.Update(Fuse.Drawing.Brush[],Fuse.Drawing.Stroke[],float)");
    float pixelsPerPoint_ = *pixelsPerPoint;
    __this->_fills = fills;
    __this->_strokes = strokes;
    __this->_pixelsPerPoint = pixelsPerPoint_;
    __this->OnShapeChanged();
}

// private static Java.Object GetLayer(Java.Object handle, int layer) :1733
void Shape__GetLayer_fn(::g::Java::Object* handle, int* layer, ::g::Java::Object** __retval)
{
    *__retval = Shape::GetLayer(handle, *layer);
}

// private static Java.Object MakeLayerDrawable(Java.Object handle, int layerCount) :1740
void Shape__MakeLayerDrawable_fn(::g::Java::Object* handle, int* layerCount, ::g::Java::Object** __retval)
{
    *__retval = Shape::MakeLayerDrawable(handle, *layerCount);
}

// protected void OnShapeChanged() :1577
void Shape__OnShapeChanged_fn(Shape* __this)
{
    __this->OnShapeChanged();
}

// private static int SelectOffset(Fuse.Drawing.GradientStop a, Fuse.Drawing.GradientStop b) :1645
void Shape__SelectOffset_fn(::g::Fuse::Drawing::GradientStop* a, ::g::Fuse::Drawing::GradientStop* b, int* __retval)
{
    *__retval = Shape::SelectOffset(a, b);
}

// private void SetBrush(Java.Object shapeDrawable, Fuse.Drawing.Brush brush) :1612
void Shape__SetBrush_fn(Shape* __this, ::g::Java::Object* shapeDrawable, ::g::Fuse::Drawing::Brush* brush)
{
    __this->SetBrush(shapeDrawable, brush);
}

// private void SetLinearGradient(Java.Object shapeDrawable, Fuse.Drawing.LinearGradient linearGradient) :1650
void Shape__SetLinearGradient_fn(Shape* __this, ::g::Java::Object* shapeDrawable, ::g::Fuse::Drawing::LinearGradient* linearGradient)
{
    __this->SetLinearGradient(shapeDrawable, linearGradient);
}

// private static void SetShapeDrawableColor(Java.Object shapeDrawable, int r, int g, int b, int a, int opacity) :1705
void Shape__SetShapeDrawableColor_fn(::g::Java::Object* shapeDrawable, int* r, int* g, int* b, int* a, int* opacity)
{
    Shape::SetShapeDrawableColor(shapeDrawable, *r, *g, *b, *a, *opacity);
}

// private static void SetShapeDrawableLinearGradient(Java.Object shapeDrawable, float startX, float startY, float endX, float endY, int[] colors, float[] positions) :1677
void Shape__SetShapeDrawableLinearGradient_fn(::g::Java::Object* shapeDrawable, float* startX, float* startY, float* endX, float* endY, uArray* colors, uArray* positions)
{
    Shape::SetShapeDrawableLinearGradient(shapeDrawable, *startX, *startY, *endX, *endY, colors, positions);
}

// private static void SetShapeDrawableStrokeWidth(Java.Object shapeDrawable, float width) :1713
void Shape__SetShapeDrawableStrokeWidth_fn(::g::Java::Object* shapeDrawable, float* width)
{
    Shape::SetShapeDrawableStrokeWidth(shapeDrawable, *width);
}

// private void SetStroke(Java.Object shapeDrawable, Fuse.Drawing.Stroke stroke) :1604
void Shape__SetStroke_fn(Shape* __this, ::g::Java::Object* shapeDrawable, ::g::Fuse::Drawing::Stroke* stroke)
{
    __this->SetStroke(shapeDrawable, stroke);
}

// protected Shape() [instance] :1558
void Shape::ctor_1()
{
    uStackFrame __("Fuse.Controls.Native.Android.Shape", ".ctor()");
    ctor_(Shape::Create());
}

// protected void OnShapeChanged() [instance] :1577
void Shape::OnShapeChanged()
{
    uStackFrame __("Fuse.Controls.Native.Android.Shape", "OnShapeChanged()");
    int layerCount = ((_fills != NULL) ? uPtr(_fills)->Length() : 0) + ((_strokes != NULL) ? uPtr(_strokes)->Length() : 0);
    ::g::Java::Object* layerDrawable = Shape::MakeLayerDrawable(Handle(), layerCount);

    for (int i = 0; i < layerCount; i++)
        UpdateShapeDrawable(Shape::GetLayer(layerDrawable, i), _pixelsPerPoint);

    int layer = 0;

    if (_fills != NULL)

        for (int i1 = uPtr(_fills)->Length(); (i1--) > 0; )
            SetBrush(Shape::GetLayer(layerDrawable, layer++), uPtr(_fills)->Strong< ::g::Fuse::Drawing::Brush*>(i1));

    if (_strokes != NULL)

        for (int i2 = uPtr(_strokes)->Length(); (i2--) > 0; )
            SetStroke(Shape::GetLayer(layerDrawable, layer++), uPtr(_strokes)->Strong< ::g::Fuse::Drawing::Stroke*>(i2));
}

// private void SetBrush(Java.Object shapeDrawable, Fuse.Drawing.Brush brush) [instance] :1612
void Shape::SetBrush(::g::Java::Object* shapeDrawable, ::g::Fuse::Drawing::Brush* brush)
{
    uStackFrame __("Fuse.Controls.Native.Android.Shape", "SetBrush(Java.Object,Fuse.Drawing.Brush)");

    if (uIs(brush, ::TYPES[23/*Fuse.Drawing.LinearGradient*/]))
        SetLinearGradient(shapeDrawable, uCast< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[23/*Fuse.Drawing.LinearGradient*/]));
    else 
    {
        ::g::Uno::Float4 c = ::g::Uno::Float4__New1(0.0f);
        ::g::Fuse::Drawing::SolidColor* sc = uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[24/*Fuse.Drawing.SolidColor*/]);

        if (sc != NULL)
            c = uPtr(sc)->Color();

        ::g::Fuse::Drawing::StaticSolidColor* ssc = uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[25/*Fuse.Drawing.StaticSolidColor*/]);

        if (ssc != NULL)
            c = uPtr(ssc)->Color();

        if ((sc == NULL) && (ssc == NULL))
            ::g::Fuse::Diagnostics::Unsupported(::STRINGS[1/*""*/], brush, ::STRINGS[2/*"/usr/local/...*/], 1629, ::STRINGS[3/*"SetBrush"*/]);

        ::g::Fuse::Drawing::DynamicBrush* db = uAs< ::g::Fuse::Drawing::DynamicBrush*>(brush, ::TYPES[26/*Fuse.Drawing.DynamicBrush*/]);
        float opacity = (db != NULL) ? uPtr(db)->Opacity() : 1.0f;
        Shape::SetShapeDrawableColor(shapeDrawable, ::g::Uno::Math::Clamp8((int)(c.X * 255.0f), 0, 255), ::g::Uno::Math::Clamp8((int)(c.Y * 255.0f), 0, 255), ::g::Uno::Math::Clamp8((int)(c.Z * 255.0f), 0, 255), ::g::Uno::Math::Clamp8((int)(c.W * 255.0f), 0, 255), ::g::Uno::Math::Clamp8((int)(opacity * 255.0f), 0, 255));
    }
}

// private void SetLinearGradient(Java.Object shapeDrawable, Fuse.Drawing.LinearGradient linearGradient) [instance] :1650
void Shape::SetLinearGradient(::g::Java::Object* shapeDrawable, ::g::Fuse::Drawing::LinearGradient* linearGradient)
{
    uStackFrame __("Fuse.Controls.Native.Android.Shape", "SetLinearGradient(Java.Object,Fuse.Drawing.LinearGradient)");
    uArray* stops = (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[27/*Uno.Collections.EnumerableExtensions.ToArray<Fuse.Drawing.GradientStop>*/], (uObject*)::g::Uno::Collections::EnumerableExtensions::OrderBy1(::TYPES[28/*Uno.Collections.EnumerableExtensions.OrderBy<Fuse.Drawing.GradientStop>*/], uPtr(linearGradient)->Stops(), uDelegate::New(::TYPES[29/*Uno.Func<Fuse.Drawing.GradientStop, Fuse.Drawing.GradientStop, int>*/], (void*)Shape__SelectOffset_fn)));
    uArray* colors = uArray::New(::TYPES[9/*int[]*/], uPtr(stops)->Length());
    uArray* positions = uArray::New(::TYPES[30/*float[]*/], stops->Length());

    for (int i = 0; i < stops->Length(); i++)
    {
        ::g::Fuse::Drawing::GradientStop* gradientStop = uPtr(stops)->Strong< ::g::Fuse::Drawing::GradientStop*>(i);
        uPtr(colors)->Item<int>(i) = ::g::Fuse::Controls::Native::Android::Helpers::EncodeColor(uPtr(gradientStop)->Color());
        uPtr(positions)->Item<float>(i) = gradientStop->Offset();
    }

    ::g::Uno::Float2 start = linearGradient->StartPoint();
    ::g::Uno::Float2 end = linearGradient->EndPoint();
    Shape::SetShapeDrawableLinearGradient(shapeDrawable, start.X, start.Y, end.X, end.Y, colors, positions);
}

// private void SetStroke(Java.Object shapeDrawable, Fuse.Drawing.Stroke stroke) [instance] :1604
void Shape::SetStroke(::g::Java::Object* shapeDrawable, ::g::Fuse::Drawing::Stroke* stroke)
{
    uStackFrame __("Fuse.Controls.Native.Android.Shape", "SetStroke(Java.Object,Fuse.Drawing.Stroke)");

    if (uPtr(stroke)->Brush() != NULL)
        SetBrush(shapeDrawable, uPtr(stroke)->Brush());

    Shape::SetShapeDrawableStrokeWidth(shapeDrawable, uPtr(stroke)->Width() * _pixelsPerPoint);
}

// private static Java.Object Create() [static] :1721
::g::Java::Object* Shape::Create()
{
    uStackFrame __("Fuse.Controls.Native.Android.Shape", "Create()");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create122", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static Java.Object GetLayer(Java.Object handle, int layer) [static] :1733
::g::Java::Object* Shape::GetLayer(::g::Java::Object* handle, int layer)
{
    uStackFrame __("Fuse.Controls.Native.Android.Shape", "GetLayer(Java.Object,int)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetLayer124", "(Ljava/lang/Object;I)Ljava/lang/Object;");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _ulayer=layer;
        jint _layer = (jint)_ulayer;
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_handle,_layer);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static Java.Object MakeLayerDrawable(Java.Object handle, int layerCount) [static] :1740
::g::Java::Object* Shape::MakeLayerDrawable(::g::Java::Object* handle, int layerCount)
{
    uStackFrame __("Fuse.Controls.Native.Android.Shape", "MakeLayerDrawable(Java.Object,int)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "MakeLayerDrawable125", "(Ljava/lang/Object;I)Ljava/lang/Object;");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _ulayerCount=layerCount;
        jint _layerCount = (jint)_ulayerCount;
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_handle,_layerCount);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int SelectOffset(Fuse.Drawing.GradientStop a, Fuse.Drawing.GradientStop b) [static] :1645
int Shape::SelectOffset(::g::Fuse::Drawing::GradientStop* a, ::g::Fuse::Drawing::GradientStop* b)
{
    uStackFrame __("Fuse.Controls.Native.Android.Shape", "SelectOffset(Fuse.Drawing.GradientStop,Fuse.Drawing.GradientStop)");
    return (int)::g::Uno::Math::Sign1(uPtr(a)->Offset() - uPtr(b)->Offset());
}

// private static void SetShapeDrawableColor(Java.Object shapeDrawable, int r, int g, int b, int a, int opacity) [static] :1705
void Shape::SetShapeDrawableColor(::g::Java::Object* shapeDrawable, int r, int g, int b, int a, int opacity)
{
    uStackFrame __("Fuse.Controls.Native.Android.Shape", "SetShapeDrawableColor(Java.Object,int,int,int,int,int)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetShapeDrawableColor126", "(Ljava/lang/Object;IIIII)V");
        ::g::Java::Object* _ushapeDrawable=shapeDrawable;
        jobject _shapeDrawable = (_ushapeDrawable==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ushapeDrawable, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _ur=r;
        jint _r = (jint)_ur;
        int _ug=g;
        jint _g = (jint)_ug;
        int _ub=b;
        jint _b = (jint)_ub;
        int _ua=a;
        jint _a = (jint)_ua;
        int _uopacity=opacity;
        jint _opacity = (jint)_uopacity;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_shapeDrawable,_r,_g,_b,_a,_opacity);
        
        if (_shapeDrawable!=NULL) { U_JNIVAR->DeleteLocalRef(_shapeDrawable); }
        
        
        
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetShapeDrawableLinearGradient(Java.Object shapeDrawable, float startX, float startY, float endX, float endY, int[] colors, float[] positions) [static] :1677
void Shape::SetShapeDrawableLinearGradient(::g::Java::Object* shapeDrawable, float startX, float startY, float endX, float endY, uArray* colors, uArray* positions)
{
    uStackFrame __("Fuse.Controls.Native.Android.Shape", "SetShapeDrawableLinearGradient(Java.Object,float,float,float,float,int[],float[])");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetShapeDrawableLinearGradient127", "(Ljava/lang/Object;FFFFLcom/uno/IntArray;Lcom/uno/FloatArray;)V");
        ::g::Java::Object* _ushapeDrawable=shapeDrawable;
        jobject _shapeDrawable = (_ushapeDrawable==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ushapeDrawable, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _ustartX=startX;
        jfloat _startX = (jfloat)_ustartX;
        float _ustartY=startY;
        jfloat _startY = (jfloat)_ustartY;
        float _uendX=endX;
        jfloat _endX = (jfloat)_uendX;
        float _uendY=endY;
        jfloat _endY = (jfloat)_uendY;
        uArray* _ucolors=colors;
        jobject _colors = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box4(_ucolors);
        uArray* _upositions=positions;
        jobject _positions = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box3(_upositions);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_shapeDrawable,_startX,_startY,_endX,_endY,_colors,_positions);
        
        if (_shapeDrawable!=NULL) { U_JNIVAR->DeleteLocalRef(_shapeDrawable); }
        
        
        
        
        if (_colors!=NULL) { U_JNIVAR->DeleteLocalRef(_colors); }
        if (_positions!=NULL) { U_JNIVAR->DeleteLocalRef(_positions); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetShapeDrawableStrokeWidth(Java.Object shapeDrawable, float width) [static] :1713
void Shape::SetShapeDrawableStrokeWidth(::g::Java::Object* shapeDrawable, float width)
{
    uStackFrame __("Fuse.Controls.Native.Android.Shape", "SetShapeDrawableStrokeWidth(Java.Object,float)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetShapeDrawableStrokeWidth128", "(Ljava/lang/Object;F)V");
        ::g::Java::Object* _ushapeDrawable=shapeDrawable;
        jobject _shapeDrawable = (_ushapeDrawable==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ushapeDrawable, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _uwidth=width;
        jfloat _width = (jfloat)_uwidth;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_shapeDrawable,_width);
        
        if (_shapeDrawable!=NULL) { U_JNIVAR->DeleteLocalRef(_shapeDrawable); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/android/$.uno
// -----------------------------------------------------------------------

// public sealed extern class Slider :1784
// {
static void Slider_build(uType* type)
{
    ::TYPES[31] = ::g::Fuse::Controls::Native::IRangeViewHost_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Slider_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Slider_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(Slider_type, interface2),
        ::g::Fuse::Controls::Native::IRangeView_typeof(), offsetof(Slider_type, interface3));
    type->SetFields(6,
        ::g::Fuse::Controls::Native::IRangeViewHost_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Slider, _host), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)Slider__New1_fn, 0, true, Slider_typeof(), 1, ::g::Fuse::Controls::Native::IRangeViewHost_typeof()),
        new uFunction("set_Progress", NULL, (void*)Slider__set_Progress_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()));
}

Slider_type* Slider_typeof()
{
    static uSStrong<Slider_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::LeafView_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Slider);
    options.TypeSize = sizeof(Slider_type);
    type = (Slider_type*)uClassType::New("Fuse.Controls.Native.Android.Slider", options);
    type->fp_build_ = Slider_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::Android::View*))Slider__Dispose_fn;
    type->interface3.fp_set_Progress = (void(*)(uObject*, double*))Slider__set_Progress_fn;
    type->interface2.fp_Measure = (void(*)(uObject*, ::g::Fuse::LayoutParams*, float*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::LeafView__FuseControlsNativeILeafViewMeasure_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))Slider__Dispose_fn;
    return type;
}

// public Slider(Fuse.Controls.Native.IRangeViewHost host) :1795
void Slider__ctor_2_fn(Slider* __this, uObject* host)
{
    __this->ctor_2(host);
}

// private void AddChangedCallback(Java.Object handle) :1816
void Slider__AddChangedCallback_fn(Slider* __this, ::g::Java::Object* handle)
{
    __this->AddChangedCallback(handle);
}

// private static Java.Object Create() :1802
void Slider__Create_fn(::g::Java::Object** __retval)
{
    *__retval = Slider::Create();
}

// public override sealed void Dispose() :1832
void Slider__Dispose_fn(Slider* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.Slider", "Dispose()");
    __this->_host = NULL;
    ::g::Fuse::Controls::Native::Android::View__Dispose_fn(__this);
}

// public Slider New(Fuse.Controls.Native.IRangeViewHost host) :1795
void Slider__New1_fn(uObject* host, Slider** __retval)
{
    *__retval = Slider::New1(host);
}

// private void OnSeekBarChanged(double newProgress) :1827
void Slider__OnSeekBarChanged_fn(Slider* __this, double* newProgress)
{
    __this->OnSeekBarChanged(*newProgress);
}

// public void set_Progress(double value) :1789
void Slider__set_Progress_fn(Slider* __this, double* value)
{
    __this->Progress(*value);
}

// private static void SetProgress(Java.Object handle, double progress) :1810
void Slider__SetProgress_fn(::g::Java::Object* handle, double* progress)
{
    Slider::SetProgress(handle, *progress);
}

// public Slider(Fuse.Controls.Native.IRangeViewHost host) [instance] :1795
void Slider::ctor_2(uObject* host)
{
    uStackFrame __("Fuse.Controls.Native.Android.Slider", ".ctor(Fuse.Controls.Native.IRangeViewHost)");
    ctor_1(Slider::Create());
    _host = host;
    AddChangedCallback(Handle());
}

// private void AddChangedCallback(Java.Object handle) [instance] :1816
void Slider::AddChangedCallback(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.Slider", "AddChangedCallback(Java.Object)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddChangedCallback129", "(Lcom/uno/UnoObject;Ljava/lang/Object;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void OnSeekBarChanged(double newProgress) [instance] :1827
void Slider::OnSeekBarChanged(double newProgress)
{
    uStackFrame __("Fuse.Controls.Native.Android.Slider", "OnSeekBarChanged(double)");
    ::g::Fuse::Controls::Native::IRangeViewHost::OnProgressChanged(uInterface(uPtr(_host), ::TYPES[31/*Fuse.Controls.Native.IRangeViewHost*/]), newProgress);
}

// public void set_Progress(double value) [instance] :1789
void Slider::Progress(double value)
{
    uStackFrame __("Fuse.Controls.Native.Android.Slider", "set_Progress(double)");
    Slider::SetProgress(Handle(), value);
}

// private static Java.Object Create() [static] :1802
::g::Java::Object* Slider::Create()
{
    uStackFrame __("Fuse.Controls.Native.Android.Slider", "Create()");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create131", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public Slider New(Fuse.Controls.Native.IRangeViewHost host) [static] :1795
Slider* Slider::New1(uObject* host)
{
    Slider* obj1 = (Slider*)uNew(Slider_typeof());
    obj1->ctor_2(host);
    return obj1;
}

// private static void SetProgress(Java.Object handle, double progress) [static] :1810
void Slider::SetProgress(::g::Java::Object* handle, double progress)
{
    uStackFrame __("Fuse.Controls.Native.Android.Slider", "SetProgress(Java.Object,double)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetProgress132", "(Ljava/lang/Object;D)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        double _uprogress=progress;
        jdouble _progress = (jdouble)_uprogress;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_progress);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/android/$.uno
// -----------------------------------------------------------------------

// internal static extern class SoftKeyboard :2467
// {
static void SoftKeyboard_build(uType* type)
{
}

uClassType* SoftKeyboard_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.Android.SoftKeyboard", options);
    type->fp_build_ = SoftKeyboard_build;
    return type;
}

// public static void HideKeyboard(Java.Object hideKeyboardContext, Java.Object hideKeyboardWindowToken) :2471
void SoftKeyboard__HideKeyboard_fn(::g::Java::Object* hideKeyboardContext, ::g::Java::Object* hideKeyboardWindowToken)
{
    SoftKeyboard::HideKeyboard(hideKeyboardContext, hideKeyboardWindowToken);
}

// public static void ShowKeyboard(Java.Object viewHandle) :2480
void SoftKeyboard__ShowKeyboard_fn(::g::Java::Object* viewHandle)
{
    SoftKeyboard::ShowKeyboard(viewHandle);
}

// public static void HideKeyboard(Java.Object hideKeyboardContext, Java.Object hideKeyboardWindowToken) [static] :2471
void SoftKeyboard::HideKeyboard(::g::Java::Object* hideKeyboardContext, ::g::Java::Object* hideKeyboardWindowToken)
{
    uStackFrame __("Fuse.Controls.Native.Android.SoftKeyboard", "HideKeyboard(Java.Object,Java.Object)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "HideKeyboard133", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uhideKeyboardContext=hideKeyboardContext;
        jobject _hideKeyboardContext = (_uhideKeyboardContext==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhideKeyboardContext, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uhideKeyboardWindowToken=hideKeyboardWindowToken;
        jobject _hideKeyboardWindowToken = (_uhideKeyboardWindowToken==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhideKeyboardWindowToken, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_hideKeyboardContext,_hideKeyboardWindowToken);
        
        if (_hideKeyboardContext!=NULL) { U_JNIVAR->DeleteLocalRef(_hideKeyboardContext); }
        if (_hideKeyboardWindowToken!=NULL) { U_JNIVAR->DeleteLocalRef(_hideKeyboardWindowToken); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void ShowKeyboard(Java.Object viewHandle) [static] :2480
void SoftKeyboard::ShowKeyboard(::g::Java::Object* viewHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.SoftKeyboard", "ShowKeyboard(Java.Object)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ShowKeyboard134", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_viewHandle);
        
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/android/$.uno
// -----------------------------------------------------------------------

// public sealed extern class SurfaceView :1849
// {
static void SurfaceView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsView_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsView_type, interface1),
        ::g::Fuse::Controls::Native::IGraphicsView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::GraphicsView_type, interface2));
    type->SetFields(9);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)SurfaceView__New1_fn, 0, true, SurfaceView_typeof(), 0));
}

::g::Fuse::Controls::Native::Android::GraphicsView_type* SurfaceView_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Native::Android::GraphicsView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::GraphicsView_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(SurfaceView);
    options.TypeSize = sizeof(::g::Fuse::Controls::Native::Android::GraphicsView_type);
    type = (::g::Fuse::Controls::Native::Android::GraphicsView_type*)uClassType::New("Fuse.Controls.Native.Android.SurfaceView", options);
    type->fp_build_ = SurfaceView_build;
    type->fp_ctor_ = (void*)SurfaceView__New1_fn;
    type->interface2.fp_BeginDraw = (void(*)(uObject*, ::g::Uno::Int2*, bool*))::g::Fuse::Controls::Native::Android::GraphicsView__BeginDraw_fn;
    type->interface2.fp_EndDraw = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::GraphicsView__EndDraw_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Dispose_fn;
    return type;
}

// public SurfaceView() :1851
void SurfaceView__ctor_2_fn(SurfaceView* __this)
{
    __this->ctor_2();
}

// private void AddCallback(Java.Object handle) :1874
void SurfaceView__AddCallback_fn(SurfaceView* __this, ::g::Java::Object* handle)
{
    __this->AddCallback(handle);
}

// private static Java.Object Create() :1893
void SurfaceView__Create_fn(::g::Java::Object** __retval)
{
    *__retval = SurfaceView::Create();
}

// private static Java.Object GetSurface(Java.Object holder) :1868
void SurfaceView__GetSurface_fn(::g::Java::Object* holder, ::g::Java::Object** __retval)
{
    *__retval = SurfaceView::GetSurface(holder);
}

// public SurfaceView New() :1851
void SurfaceView__New1_fn(SurfaceView** __retval)
{
    *__retval = SurfaceView::New1();
}

// private void OnSurfaceChanged(Java.Object holder, int f, int w, int h) :1857
void SurfaceView__OnSurfaceChanged_fn(SurfaceView* __this, ::g::Java::Object* holder, int* f, int* w, int* h)
{
    __this->OnSurfaceChanged(holder, *f, *w, *h);
}

// private void OnSurfaceCreated(Java.Object holder) :1858
void SurfaceView__OnSurfaceCreated_fn(SurfaceView* __this, ::g::Java::Object* holder)
{
    __this->OnSurfaceCreated(holder);
}

// private void OnSurfaceDestroyed(Java.Object holder) :1862
void SurfaceView__OnSurfaceDestroyed_fn(SurfaceView* __this, ::g::Java::Object* holder)
{
    __this->OnSurfaceDestroyed(holder);
}

// private void OnSurfaceRedrawNeeded(Java.Object holder) :1856
void SurfaceView__OnSurfaceRedrawNeeded_fn(SurfaceView* __this, ::g::Java::Object* holder)
{
    __this->OnSurfaceRedrawNeeded(holder);
}

// public SurfaceView() [instance] :1851
void SurfaceView::ctor_2()
{
    uStackFrame __("Fuse.Controls.Native.Android.SurfaceView", ".ctor()");
    ctor_1(SurfaceView::Create());
    AddCallback(Handle());
}

// private void AddCallback(Java.Object handle) [instance] :1874
void SurfaceView::AddCallback(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.SurfaceView", "AddCallback(Java.Object)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddCallback135", "(Lcom/uno/UnoObject;Ljava/lang/Object;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void OnSurfaceChanged(Java.Object holder, int f, int w, int h) [instance] :1857
void SurfaceView::OnSurfaceChanged(::g::Java::Object* holder, int f, int w, int h)
{
}

// private void OnSurfaceCreated(Java.Object holder) [instance] :1858
void SurfaceView::OnSurfaceCreated(::g::Java::Object* holder)
{
    uStackFrame __("Fuse.Controls.Native.Android.SurfaceView", "OnSurfaceCreated(Java.Object)");
    SetSurface(SurfaceView::GetSurface(holder));
}

// private void OnSurfaceDestroyed(Java.Object holder) [instance] :1862
void SurfaceView::OnSurfaceDestroyed(::g::Java::Object* holder)
{
    uStackFrame __("Fuse.Controls.Native.Android.SurfaceView", "OnSurfaceDestroyed(Java.Object)");
    DestroySurface();
}

// private void OnSurfaceRedrawNeeded(Java.Object holder) [instance] :1856
void SurfaceView::OnSurfaceRedrawNeeded(::g::Java::Object* holder)
{
}

// private static Java.Object Create() [static] :1893
::g::Java::Object* SurfaceView::Create()
{
    uStackFrame __("Fuse.Controls.Native.Android.SurfaceView", "Create()");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create140", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static Java.Object GetSurface(Java.Object holder) [static] :1868
::g::Java::Object* SurfaceView::GetSurface(::g::Java::Object* holder)
{
    uStackFrame __("Fuse.Controls.Native.Android.SurfaceView", "GetSurface(Java.Object)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetSurface141", "(Ljava/lang/Object;)Ljava/lang/Object;");
        ::g::Java::Object* _uholder=holder;
        jobject _holder = (_uholder==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uholder, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_holder);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_holder!=NULL) { U_JNIVAR->DeleteLocalRef(_holder); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public SurfaceView New() [static] :1851
SurfaceView* SurfaceView::New1()
{
    SurfaceView* obj1 = (SurfaceView*)uNew(SurfaceView_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/android/$.uno
// -----------------------------------------------------------------------

// public sealed extern class Switch :1918
// {
static void Switch_build(uType* type)
{
    ::TYPES[32] = ::g::Fuse::Controls::Native::IToggleViewHost_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(Switch_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Switch_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(Switch_type, interface2),
        ::g::Fuse::Controls::Native::IToggleView_typeof(), offsetof(Switch_type, interface3));
    type->SetFields(6,
        ::g::Fuse::Controls::Native::IToggleViewHost_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Switch, _host), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)Switch__New1_fn, 0, true, Switch_typeof(), 1, ::g::Fuse::Controls::Native::IToggleViewHost_typeof()),
        new uFunction("set_Value", NULL, (void*)Switch__set_Value_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
}

Switch_type* Switch_typeof()
{
    static uSStrong<Switch_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::LeafView_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Switch);
    options.TypeSize = sizeof(Switch_type);
    type = (Switch_type*)uClassType::New("Fuse.Controls.Native.Android.Switch", options);
    type->fp_build_ = Switch_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::Android::View*))Switch__Dispose_fn;
    type->interface3.fp_set_Value = (void(*)(uObject*, bool*))Switch__set_Value_fn;
    type->interface2.fp_Measure = (void(*)(uObject*, ::g::Fuse::LayoutParams*, float*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::LeafView__FuseControlsNativeILeafViewMeasure_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))Switch__Dispose_fn;
    return type;
}

// public Switch(Fuse.Controls.Native.IToggleViewHost host) :1928
void Switch__ctor_2_fn(Switch* __this, uObject* host)
{
    __this->ctor_2(host);
}

// private void AddCallback(Java.Object handle) :1941
void Switch__AddCallback_fn(Switch* __this, ::g::Java::Object* handle)
{
    __this->AddCallback(handle);
}

// private static Java.Object Create() :1935
void Switch__Create_fn(::g::Java::Object** __retval)
{
    *__retval = Switch::Create();
}

// public override sealed void Dispose() :1961
void Switch__Dispose_fn(Switch* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.Switch", "Dispose()");
    __this->_host = NULL;
    ::g::Fuse::Controls::Native::Android::View__Dispose_fn(__this);
}

// public Switch New(Fuse.Controls.Native.IToggleViewHost host) :1928
void Switch__New1_fn(uObject* host, Switch** __retval)
{
    *__retval = Switch::New1(host);
}

// private void OnToggleChanged(bool value) :1956
void Switch__OnToggleChanged_fn(Switch* __this, bool* value)
{
    __this->OnToggleChanged(*value);
}

// private static void SetValue(Java.Object handle, bool value) :1951
void Switch__SetValue_fn(::g::Java::Object* handle, bool* value)
{
    Switch::SetValue(handle, *value);
}

// public void set_Value(bool value) :1922
void Switch__set_Value_fn(Switch* __this, bool* value)
{
    __this->Value(*value);
}

// public Switch(Fuse.Controls.Native.IToggleViewHost host) [instance] :1928
void Switch::ctor_2(uObject* host)
{
    uStackFrame __("Fuse.Controls.Native.Android.Switch", ".ctor(Fuse.Controls.Native.IToggleViewHost)");
    ctor_1(Switch::Create());
    _host = host;
    AddCallback(Handle());
}

// private void AddCallback(Java.Object handle) [instance] :1941
void Switch::AddCallback(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.Switch", "AddCallback(Java.Object)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddCallback142", "(Lcom/uno/UnoObject;Ljava/lang/Object;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void OnToggleChanged(bool value) [instance] :1956
void Switch::OnToggleChanged(bool value)
{
    uStackFrame __("Fuse.Controls.Native.Android.Switch", "OnToggleChanged(bool)");
    ::g::Fuse::Controls::Native::IToggleViewHost::OnValueChanged(uInterface(uPtr(_host), ::TYPES[32/*Fuse.Controls.Native.IToggleViewHost*/]), value);
}

// public void set_Value(bool value) [instance] :1922
void Switch::Value(bool value)
{
    uStackFrame __("Fuse.Controls.Native.Android.Switch", "set_Value(bool)");
    Switch::SetValue(Handle(), value);
}

// private static Java.Object Create() [static] :1935
::g::Java::Object* Switch::Create()
{
    uStackFrame __("Fuse.Controls.Native.Android.Switch", "Create()");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create144", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public Switch New(Fuse.Controls.Native.IToggleViewHost host) [static] :1928
Switch* Switch::New1(uObject* host)
{
    Switch* obj1 = (Switch*)uNew(Switch_typeof());
    obj1->ctor_2(host);
    return obj1;
}

// private static void SetValue(Java.Object handle, bool value) [static] :1951
void Switch::SetValue(::g::Java::Object* handle, bool value)
{
    uStackFrame __("Fuse.Controls.Native.Android.Switch", "SetValue(Java.Object,bool)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetValue145", "(Ljava/lang/Object;Z)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool _uvalue=value;
        jboolean _value = (jboolean)_uvalue;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/android/$.uno
// -----------------------------------------------------------------------

// public sealed extern class TextEdit :1977
// {
static void TextEdit_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput_type, interface2),
        ::g::Fuse::Controls::Native::ITextView_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput_type, interface3),
        ::g::Fuse::Controls::Native::ITextEdit_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput_type, interface4));
    type->SetFields(15);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TextEdit__New4_fn, 0, true, TextEdit_typeof(), 2, ::g::Fuse::Controls::Native::ITextEditHost_typeof(), ::g::Uno::Bool_typeof()));
}

::g::Fuse::Controls::Native::Android::TextInput_type* TextEdit_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Native::Android::TextInput_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::TextInput_typeof();
    options.FieldCount = 15;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(TextEdit);
    options.TypeSize = sizeof(::g::Fuse::Controls::Native::Android::TextInput_type);
    type = (::g::Fuse::Controls::Native::Android::TextInput_type*)uClassType::New("Fuse.Controls.Native.Android.TextEdit", options);
    type->fp_build_ = TextEdit_build;
    type->interface4.fp_FocusGained = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::TextInput__FuseControlsNativeITextEditFocusGained_fn;
    type->interface4.fp_FocusLost = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::TextInput__FuseControlsNativeITextEditFocusLost_fn;
    type->interface4.fp_set_IsMultiline = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::TextInput__set_IsMultiline_fn;
    type->interface4.fp_set_IsPassword = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::TextInput__set_IsPassword_fn;
    type->interface4.fp_set_IsReadOnly = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::TextInput__set_IsReadOnly_fn;
    type->interface4.fp_set_InputHint = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextInput__set_InputHint_fn;
    type->interface4.fp_set_CaretColor = (void(*)(uObject*, ::g::Uno::Float4*))::g::Fuse::Controls::Native::Android::TextInput__set_CaretColor_fn;
    type->interface4.fp_set_SelectionColor = (void(*)(uObject*, ::g::Uno::Float4*))::g::Fuse::Controls::Native::Android::TextInput__set_SelectionColor_fn;
    type->interface4.fp_set_ActionStyle = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextInput__set_ActionStyle_fn;
    type->interface4.fp_set_AutoCorrectHint = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextInput__set_AutoCorrectHint_fn;
    type->interface4.fp_set_AutoCapitalizationHint = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextInput__set_AutoCapitalizationHint_fn;
    type->interface4.fp_set_PlaceholderText = (void(*)(uObject*, uString*))::g::Fuse::Controls::Native::Android::TextInput__set_PlaceholderText_fn;
    type->interface4.fp_set_PlaceholderColor = (void(*)(uObject*, ::g::Uno::Float4*))::g::Fuse::Controls::Native::Android::TextInput__set_PlaceholderColor_fn;
    type->interface3.fp_set_Value = (void(*)(uObject*, uString*))::g::Fuse::Controls::Native::Android::TextView__set_Value_fn;
    type->interface3.fp_set_MaxLength = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextView__set_MaxLength_fn;
    type->interface3.fp_set_TextWrapping = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextView__set_TextWrapping_fn;
    type->interface3.fp_set_LineSpacing = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::TextView__set_LineSpacing_fn;
    type->interface3.fp_set_FontSize = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::TextView__set_FontSize_fn;
    type->interface3.fp_set_Font = (void(*)(uObject*, ::g::Fuse::Font*))::g::Fuse::Controls::Native::Android::TextView__set_Font_fn;
    type->interface3.fp_set_TextAlignment = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextView__set_TextAlignment_fn;
    type->interface3.fp_set_TextColor = (void(*)(uObject*, ::g::Uno::Float4*))::g::Fuse::Controls::Native::Android::TextView__set_TextColor_fn;
    type->interface3.fp_set_TextTruncation = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextView__set_TextTruncation_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::TextInput__Dispose_fn;
    type->interface2.fp_Measure = (void(*)(uObject*, ::g::Fuse::LayoutParams*, float*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::LeafView__FuseControlsNativeILeafViewMeasure_fn;
    return type;
}

// public TextEdit(Fuse.Controls.Native.ITextEditHost host, bool isMultiline) :1979
void TextEdit__ctor_5_fn(TextEdit* __this, uObject* host, bool* isMultiline)
{
    __this->ctor_5(host, *isMultiline);
}

// private static void MakeItPlain(Java.Object handle) :1985
void TextEdit__MakeItPlain_fn(::g::Java::Object* handle)
{
    TextEdit::MakeItPlain(handle);
}

// public TextEdit New(Fuse.Controls.Native.ITextEditHost host, bool isMultiline) :1979
void TextEdit__New4_fn(uObject* host, bool* isMultiline, TextEdit** __retval)
{
    *__retval = TextEdit::New4(host, *isMultiline);
}

// public TextEdit(Fuse.Controls.Native.ITextEditHost host, bool isMultiline) [instance] :1979
void TextEdit::ctor_5(uObject* host, bool isMultiline)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextEdit", ".ctor(Fuse.Controls.Native.ITextEditHost,bool)");
    ctor_4(host, isMultiline);
    TextEdit::MakeItPlain(Handle());
}

// private static void MakeItPlain(Java.Object handle) [static] :1985
void TextEdit::MakeItPlain(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextEdit", "MakeItPlain(Java.Object)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "MakeItPlain146", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public TextEdit New(Fuse.Controls.Native.ITextEditHost host, bool isMultiline) [static] :1979
TextEdit* TextEdit::New4(uObject* host, bool isMultiline)
{
    TextEdit* obj1 = (TextEdit*)uNew(TextEdit_typeof());
    obj1->ctor_5(host, isMultiline);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/android/$.uno
// -----------------------------------------------------------------------

// internal sealed extern class TextEditRenderer :2560
// {
static void TextEditRenderer_build(uType* type)
{
    ::TYPES[4] = ::g::Fuse::Controls::Native::INativeViewRenderer_typeof();
    ::TYPES[3] = ::g::Uno::IDisposable_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::INativeViewRenderer_typeof(), offsetof(TextEditRenderer_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(TextEditRenderer_type, interface1));
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextEditRenderer, _container), 0,
        ::g::Fuse::Controls::Native::INativeViewRenderer_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextEditRenderer, _nativeViewRenderer), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextEditRenderer, _source), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextEditRenderer, _target), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextEditRenderer, _valid), 0);
}

TextEditRenderer_type* TextEditRenderer_typeof()
{
    static uSStrong<TextEditRenderer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TextEditRenderer);
    options.TypeSize = sizeof(TextEditRenderer_type);
    type = (TextEditRenderer_type*)uClassType::New("Fuse.Controls.Native.Android.TextEditRenderer", options);
    type->fp_build_ = TextEditRenderer_build;
    type->interface0.fp_Draw = (void(*)(uObject*, ::g::Uno::Float4x4*, ::g::Uno::Float2*, ::g::Uno::Float2*, float*))TextEditRenderer__FuseControlsNativeINativeViewRendererDraw_fn;
    type->interface0.fp_Invalidate = (void(*)(uObject*))TextEditRenderer__FuseControlsNativeINativeViewRendererInvalidate_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))TextEditRenderer__UnoIDisposableDispose_fn;
    return type;
}

// public TextEditRenderer(Java.Object soruce) :2569
void TextEditRenderer__ctor__fn(TextEditRenderer* __this, ::g::Java::Object* soruce)
{
    __this->ctor_(soruce);
}

// private static void CopyState(Java.Object container, Java.Object sourceHandle, Java.Object targetHandle) :2604
void TextEditRenderer__CopyState_fn(::g::Java::Object* container, ::g::Java::Object* sourceHandle, ::g::Java::Object* targetHandle)
{
    TextEditRenderer::CopyState(container, sourceHandle, targetHandle);
}

// private static Java.Object CreateContainer() :2677
void TextEditRenderer__CreateContainer_fn(::g::Java::Object** __retval)
{
    *__retval = TextEditRenderer::CreateContainer();
}

// private static Java.Object CreateTextEdit() :2669
void TextEditRenderer__CreateTextEdit_fn(::g::Java::Object** __retval)
{
    *__retval = TextEditRenderer::CreateTextEdit();
}

// private void Fuse.Controls.Native.INativeViewRenderer.Draw(float4x4 localToClipTransform, float2 position, float2 size, float density) :2578
void TextEditRenderer__FuseControlsNativeINativeViewRendererDraw_fn(TextEditRenderer* __this, ::g::Uno::Float4x4* localToClipTransform, ::g::Uno::Float2* position, ::g::Uno::Float2* size, float* density)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextEditRenderer", "Fuse.Controls.Native.INativeViewRenderer.Draw(float4x4,float2,float2,float)");
    ::g::Uno::Float4x4 localToClipTransform_ = *localToClipTransform;
    ::g::Uno::Float2 position_ = *position;
    ::g::Uno::Float2 size_ = *size;
    float density_ = *density;

    if (!__this->_valid)
    {
        TextEditRenderer::CopyState(__this->_container, __this->_source, __this->_target);
        __this->_valid = true;
    }

    ::g::Fuse::Controls::Native::INativeViewRenderer::Draw(uInterface(uPtr(__this->_nativeViewRenderer), ::TYPES[4/*Fuse.Controls.Native.INativeViewRenderer*/]), localToClipTransform_, position_, size_, density_);
}

// private void Fuse.Controls.Native.INativeViewRenderer.Invalidate() :2588
void TextEditRenderer__FuseControlsNativeINativeViewRendererInvalidate_fn(TextEditRenderer* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextEditRenderer", "Fuse.Controls.Native.INativeViewRenderer.Invalidate()");
    ::g::Fuse::Controls::Native::INativeViewRenderer::Invalidate(uInterface(uPtr(__this->_nativeViewRenderer), ::TYPES[4/*Fuse.Controls.Native.INativeViewRenderer*/]));
    __this->_valid = false;
}

// public TextEditRenderer New(Java.Object soruce) :2569
void TextEditRenderer__New1_fn(::g::Java::Object* soruce, TextEditRenderer** __retval)
{
    *__retval = TextEditRenderer::New1(soruce);
}

// private void Uno.IDisposable.Dispose() :2594
void TextEditRenderer__UnoIDisposableDispose_fn(TextEditRenderer* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextEditRenderer", "Uno.IDisposable.Dispose()");
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_nativeViewRenderer), ::TYPES[3/*Uno.IDisposable*/]));
    __this->_nativeViewRenderer = NULL;
    __this->_source = NULL;
    __this->_target = NULL;
    __this->_container = NULL;
}

// public TextEditRenderer(Java.Object soruce) [instance] :2569
void TextEditRenderer::ctor_(::g::Java::Object* soruce)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextEditRenderer", ".ctor(Java.Object)");
    _source = soruce;
    _target = TextEditRenderer::CreateTextEdit();
    _container = TextEditRenderer::CreateContainer();
    _nativeViewRenderer = (uObject*)::g::Fuse::Controls::Native::Android::NativeViewRenderer::New1(_container);
}

// private static void CopyState(Java.Object container, Java.Object sourceHandle, Java.Object targetHandle) [static] :2604
void TextEditRenderer::CopyState(::g::Java::Object* container, ::g::Java::Object* sourceHandle, ::g::Java::Object* targetHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextEditRenderer", "CopyState(Java.Object,Java.Object,Java.Object)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CopyState147", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _ucontainer=container;
        jobject _container = (_ucontainer==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ucontainer, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _usourceHandle=sourceHandle;
        jobject _sourceHandle = (_usourceHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_usourceHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _utargetHandle=targetHandle;
        jobject _targetHandle = (_utargetHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_utargetHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_container,_sourceHandle,_targetHandle);
        
        if (_container!=NULL) { U_JNIVAR->DeleteLocalRef(_container); }
        if (_sourceHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_sourceHandle); }
        if (_targetHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_targetHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static Java.Object CreateContainer() [static] :2677
::g::Java::Object* TextEditRenderer::CreateContainer()
{
    uStackFrame __("Fuse.Controls.Native.Android.TextEditRenderer", "CreateContainer()");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateContainer148", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static Java.Object CreateTextEdit() [static] :2669
::g::Java::Object* TextEditRenderer::CreateTextEdit()
{
    uStackFrame __("Fuse.Controls.Native.Android.TextEditRenderer", "CreateTextEdit()");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateTextEdit149", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public TextEditRenderer New(Java.Object soruce) [static] :2569
TextEditRenderer* TextEditRenderer::New1(::g::Java::Object* soruce)
{
    TextEditRenderer* obj1 = (TextEditRenderer*)uNew(TextEditRenderer_typeof());
    obj1->ctor_(soruce);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/android/$.uno
// -----------------------------------------------------------------------

// internal sealed extern class TextEditRenderHost :2689
// {
static void TextEditRenderHost_build(uType* type)
{
    ::TYPES[3] = ::g::Uno::IDisposable_typeof();
    ::TYPES[4] = ::g::Fuse::Controls::Native::INativeViewRenderer_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(TextEditRenderHost_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(TextEditRenderHost_type, interface1),
        ::g::Fuse::Controls::Native::IViewGroup_typeof(), offsetof(TextEditRenderHost_type, interface2),
        ::g::Fuse::Controls::Native::IOffscreenRenderer_typeof(), offsetof(TextEditRenderHost_type, interface3),
        ::g::Fuse::Controls::Native::Android::IViewParent_typeof(), offsetof(TextEditRenderHost_type, interface4),
        ::g::Fuse::Controls::Native::INativeViewRenderer_typeof(), offsetof(TextEditRenderHost_type, interface5));
    type->SetFields(6,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextEditRenderHost, _container), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextEditRenderHost, _isEnabled), 0,
        ::g::Fuse::Controls::Native::INativeViewRenderer_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextEditRenderHost, _nativeViewRenderer), 0,
        ::g::Fuse::Controls::Native::Android::TextEdit_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextEditRenderHost, _textEdit), 0);
}

TextEditRenderHost_type* TextEditRenderHost_typeof()
{
    static uSStrong<TextEditRenderHost_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::View_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(TextEditRenderHost);
    options.TypeSize = sizeof(TextEditRenderHost_type);
    type = (TextEditRenderHost_type*)uClassType::New("Fuse.Controls.Native.Android.TextEditRenderHost", options);
    type->fp_build_ = TextEditRenderHost_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::Android::View*))TextEditRenderHost__Dispose_fn;
    type->interface2.fp_Add = (void(*)(uObject*, uObject*))TextEditRenderHost__FuseControlsNativeIViewGroupAdd_fn;
    type->interface2.fp_Add1 = (void(*)(uObject*, uObject*, int*))TextEditRenderHost__FuseControlsNativeIViewGroupAdd1_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, uObject*))TextEditRenderHost__FuseControlsNativeIViewGroupRemove_fn;
    type->interface4.fp_SetChildSize = (void(*)(uObject*, ::g::Fuse::Controls::Native::Android::View*, ::g::Uno::Float2*))TextEditRenderHost__FuseControlsNativeAndroidIViewParentSetChildSize_fn;
    type->interface3.fp_EnableOffscreen = (void(*)(uObject*))TextEditRenderHost__FuseControlsNativeIOffscreenRendererEnableOffscreen_fn;
    type->interface3.fp_DisableOffscreen = (void(*)(uObject*))TextEditRenderHost__FuseControlsNativeIOffscreenRendererDisableOffscreen_fn;
    type->interface5.fp_Draw = (void(*)(uObject*, ::g::Uno::Float4x4*, ::g::Uno::Float2*, ::g::Uno::Float2*, float*))TextEditRenderHost__FuseControlsNativeINativeViewRendererDraw_fn;
    type->interface5.fp_Invalidate = (void(*)(uObject*))TextEditRenderHost__FuseControlsNativeINativeViewRendererInvalidate_fn;
    type->interface2.fp_set_HitTestEnabled = (void(*)(uObject*, bool*))TextEditRenderHost__FuseControlsNativeIViewGroupset_HitTestEnabled_fn;
    type->interface2.fp_set_ClipToBounds = (void(*)(uObject*, bool*))TextEditRenderHost__FuseControlsNativeIViewGroupset_ClipToBounds_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))TextEditRenderHost__Dispose_fn;
    return type;
}

// public TextEditRenderHost(Fuse.Controls.Native.Android.TextEdit textEdit) :2697
void TextEditRenderHost__ctor_1_fn(TextEditRenderHost* __this, ::g::Fuse::Controls::Native::Android::TextEdit* textEdit)
{
    __this->ctor_1(textEdit);
}

// private static void AddView(Java.Object parentHandle, Java.Object childHandle) :2765
void TextEditRenderHost__AddView_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    TextEditRenderHost::AddView(parentHandle, childHandle);
}

// private static Java.Object Create() :2781
void TextEditRenderHost__Create_fn(::g::Java::Object** __retval)
{
    *__retval = TextEditRenderHost::Create();
}

// public override sealed void Dispose() :2710
void TextEditRenderHost__Dispose_fn(TextEditRenderHost* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextEditRenderHost", "Dispose()");
    uPtr(__this->_textEdit)->Parent(NULL);
    TextEditRenderHost::RemoveView(__this->_container, uPtr(__this->_textEdit)->Handle());
    __this->_textEdit = NULL;
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_nativeViewRenderer), ::TYPES[3/*Uno.IDisposable*/]));
    __this->_nativeViewRenderer = NULL;
    __this->_container = NULL;
    ::g::Fuse::Controls::Native::Android::View__Dispose_fn(__this);
}

// private void Fuse.Controls.Native.Android.IViewParent.SetChildSize(Fuse.Controls.Native.Android.View view, float2 size) :2730
void TextEditRenderHost__FuseControlsNativeAndroidIViewParentSetChildSize_fn(TextEditRenderHost* __this, ::g::Fuse::Controls::Native::Android::View* view, ::g::Uno::Float2* size)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextEditRenderHost", "Fuse.Controls.Native.Android.IViewParent.SetChildSize(Fuse.Controls.Native.Android.View,float2)");
    ::g::Uno::Float2 size_ = *size;
    TextEditRenderHost::SetChildSize(uPtr(view)->Handle(), (int)size_.X, (int)size_.Y);
}

// private void Fuse.Controls.Native.INativeViewRenderer.Draw(float4x4 localToClipTransform, float2 position, float2 size, float density) :2754
void TextEditRenderHost__FuseControlsNativeINativeViewRendererDraw_fn(TextEditRenderHost* __this, ::g::Uno::Float4x4* localToClipTransform, ::g::Uno::Float2* position, ::g::Uno::Float2* size, float* density)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextEditRenderHost", "Fuse.Controls.Native.INativeViewRenderer.Draw(float4x4,float2,float2,float)");
    ::g::Uno::Float4x4 localToClipTransform_ = *localToClipTransform;
    ::g::Uno::Float2 position_ = *position;
    ::g::Uno::Float2 size_ = *size;
    float density_ = *density;
    ::g::Fuse::Controls::Native::INativeViewRenderer::Draw(uInterface(uPtr(__this->_nativeViewRenderer), ::TYPES[4/*Fuse.Controls.Native.INativeViewRenderer*/]), localToClipTransform_, position_, size_, density_);
}

// private void Fuse.Controls.Native.INativeViewRenderer.Invalidate() :2759
void TextEditRenderHost__FuseControlsNativeINativeViewRendererInvalidate_fn(TextEditRenderHost* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextEditRenderHost", "Fuse.Controls.Native.INativeViewRenderer.Invalidate()");
    ::g::Fuse::Controls::Native::INativeViewRenderer::Invalidate(uInterface(uPtr(__this->_nativeViewRenderer), ::TYPES[4/*Fuse.Controls.Native.INativeViewRenderer*/]));
}

// private void Fuse.Controls.Native.IOffscreenRenderer.DisableOffscreen() :2745
void TextEditRenderHost__FuseControlsNativeIOffscreenRendererDisableOffscreen_fn(TextEditRenderHost* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextEditRenderHost", "Fuse.Controls.Native.IOffscreenRenderer.DisableOffscreen()");

    if (__this->_isEnabled)
    {
        TextEditRenderHost::AddView(__this->Handle(), __this->_container);
        __this->_isEnabled = false;
    }
}

// private void Fuse.Controls.Native.IOffscreenRenderer.EnableOffscreen() :2736
void TextEditRenderHost__FuseControlsNativeIOffscreenRendererEnableOffscreen_fn(TextEditRenderHost* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextEditRenderHost", "Fuse.Controls.Native.IOffscreenRenderer.EnableOffscreen()");

    if (!__this->_isEnabled)
    {
        TextEditRenderHost::RemoveView(__this->Handle(), __this->_container);
        __this->_isEnabled = true;
    }
}

// private void Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView child) :2726
void TextEditRenderHost__FuseControlsNativeIViewGroupAdd_fn(TextEditRenderHost* __this, uObject* child)
{
}

// private void Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView child, int index) :2727
void TextEditRenderHost__FuseControlsNativeIViewGroupAdd1_fn(TextEditRenderHost* __this, uObject* child, int* index)
{
}

// private void Fuse.Controls.Native.IViewGroup.set_ClipToBounds(bool value) :2725
void TextEditRenderHost__FuseControlsNativeIViewGroupset_ClipToBounds_fn(TextEditRenderHost* __this, bool* value)
{
}

// private void Fuse.Controls.Native.IViewGroup.set_HitTestEnabled(bool value) :2724
void TextEditRenderHost__FuseControlsNativeIViewGroupset_HitTestEnabled_fn(TextEditRenderHost* __this, bool* value)
{
}

// private void Fuse.Controls.Native.IViewGroup.Remove(Fuse.Controls.Native.IView child) :2728
void TextEditRenderHost__FuseControlsNativeIViewGroupRemove_fn(TextEditRenderHost* __this, uObject* child)
{
}

// public TextEditRenderHost New(Fuse.Controls.Native.Android.TextEdit textEdit) :2697
void TextEditRenderHost__New1_fn(::g::Fuse::Controls::Native::Android::TextEdit* textEdit, TextEditRenderHost** __retval)
{
    *__retval = TextEditRenderHost::New1(textEdit);
}

// private static void RemoveView(Java.Object parentHandle, Java.Object childHandle) :2773
void TextEditRenderHost__RemoveView_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    TextEditRenderHost::RemoveView(parentHandle, childHandle);
}

// private static void SetChildSize(Java.Object handle, int w, int h) :2793
void TextEditRenderHost__SetChildSize_fn(::g::Java::Object* handle, int* w, int* h)
{
    TextEditRenderHost::SetChildSize(handle, *w, *h);
}

// public TextEditRenderHost(Fuse.Controls.Native.Android.TextEdit textEdit) [instance] :2697
void TextEditRenderHost::ctor_1(::g::Fuse::Controls::Native::Android::TextEdit* textEdit)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextEditRenderHost", ".ctor(Fuse.Controls.Native.Android.TextEdit)");
    ctor_(TextEditRenderHost::Create());
    _textEdit = textEdit;
    _container = TextEditRenderHost::Create();
    _nativeViewRenderer = (uObject*)::g::Fuse::Controls::Native::Android::TextEditRenderer::New1(uPtr(textEdit)->Handle());
    TextEditRenderHost::AddView(Handle(), _container);
    textEdit->Parent((uObject*)this);
    TextEditRenderHost::AddView(_container, textEdit->Handle());
}

// private static void AddView(Java.Object parentHandle, Java.Object childHandle) [static] :2765
void TextEditRenderHost::AddView(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextEditRenderHost", "AddView(Java.Object,Java.Object)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddView150", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uparentHandle=parentHandle;
        jobject _parentHandle = (_uparentHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uparentHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uchildHandle=childHandle;
        jobject _childHandle = (_uchildHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uchildHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_parentHandle,_childHandle);
        
        if (_parentHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_parentHandle); }
        if (_childHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_childHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static Java.Object Create() [static] :2781
::g::Java::Object* TextEditRenderHost::Create()
{
    uStackFrame __("Fuse.Controls.Native.Android.TextEditRenderHost", "Create()");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create151", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public TextEditRenderHost New(Fuse.Controls.Native.Android.TextEdit textEdit) [static] :2697
TextEditRenderHost* TextEditRenderHost::New1(::g::Fuse::Controls::Native::Android::TextEdit* textEdit)
{
    TextEditRenderHost* obj1 = (TextEditRenderHost*)uNew(TextEditRenderHost_typeof());
    obj1->ctor_1(textEdit);
    return obj1;
}

// private static void RemoveView(Java.Object parentHandle, Java.Object childHandle) [static] :2773
void TextEditRenderHost::RemoveView(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextEditRenderHost", "RemoveView(Java.Object,Java.Object)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "RemoveView152", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uparentHandle=parentHandle;
        jobject _parentHandle = (_uparentHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uparentHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uchildHandle=childHandle;
        jobject _childHandle = (_uchildHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uchildHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_parentHandle,_childHandle);
        
        if (_parentHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_parentHandle); }
        if (_childHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_childHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetChildSize(Java.Object handle, int w, int h) [static] :2793
void TextEditRenderHost::SetChildSize(::g::Java::Object* handle, int w, int h)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextEditRenderHost", "SetChildSize(Java.Object,int,int)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetChildSize153", "(Ljava/lang/Object;II)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uw=w;
        jint _w = (jint)_uw;
        int _uh=h;
        jint _h = (jint)_uh;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_w,_h);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/android/$.uno
// -----------------------------------------------------------------------

// public extern class TextInput :1996
// {
static void TextInput_build(uType* type)
{
    ::TYPES[33] = ::g::Uno::Action2_typeof()->MakeType(::g::Java::Object_typeof(), ::g::Uno::Bool_typeof());
    ::TYPES[3] = ::g::Uno::IDisposable_typeof();
    ::TYPES[34] = ::g::Fuse::Controls::Native::ITextEditHost_typeof();
    ::TYPES[35] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(TextInput_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(TextInput_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(TextInput_type, interface2),
        ::g::Fuse::Controls::Native::ITextView_typeof(), offsetof(TextInput_type, interface3),
        ::g::Fuse::Controls::Native::ITextEdit_typeof(), offsetof(TextInput_type, interface4));
    type->SetFields(6,
        ::g::Fuse::Controls::TextInputActionStyle_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput, _actionStyle), 0,
        ::g::Fuse::Controls::AutoCapitalizationHint_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput, _autoCapitalizationHint), 0,
        ::g::Fuse::Controls::AutoCorrectHint_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput, _autoCorrentHint), 0,
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput, _focusEvent), 0,
        ::g::Fuse::Controls::Native::ITextEditHost_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput, _host), 0,
        ::g::Fuse::Controls::TextInputHint_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput, _inputHint), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput, _isMultiline), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput, _isPassword), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::Android::TextInput, _isReadOnly), 0);
    type->Reflection.SetFunctions(12,
        new uFunction("set_ActionStyle", NULL, (void*)TextInput__set_ActionStyle_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::TextInputActionStyle_typeof()),
        new uFunction("set_AutoCapitalizationHint", NULL, (void*)TextInput__set_AutoCapitalizationHint_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::AutoCapitalizationHint_typeof()),
        new uFunction("set_AutoCorrectHint", NULL, (void*)TextInput__set_AutoCorrectHint_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::AutoCorrectHint_typeof()),
        new uFunction("set_CaretColor", NULL, (void*)TextInput__set_CaretColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("set_InputHint", NULL, (void*)TextInput__set_InputHint_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::TextInputHint_typeof()),
        new uFunction("set_IsMultiline", NULL, (void*)TextInput__set_IsMultiline_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("set_IsPassword", NULL, (void*)TextInput__set_IsPassword_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("set_IsReadOnly", NULL, (void*)TextInput__set_IsReadOnly_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)TextInput__New3_fn, 0, true, TextInput_typeof(), 2, ::g::Fuse::Controls::Native::ITextEditHost_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("set_PlaceholderColor", NULL, (void*)TextInput__set_PlaceholderColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("set_PlaceholderText", NULL, (void*)TextInput__set_PlaceholderText_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("set_SelectionColor", NULL, (void*)TextInput__set_SelectionColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()));
}

TextInput_type* TextInput_typeof()
{
    static uSStrong<TextInput_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::TextView_typeof();
    options.FieldCount = 15;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(TextInput);
    options.TypeSize = sizeof(TextInput_type);
    type = (TextInput_type*)uClassType::New("Fuse.Controls.Native.Android.TextInput", options);
    type->fp_build_ = TextInput_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::Android::View*))TextInput__Dispose_fn;
    type->interface4.fp_FocusGained = (void(*)(uObject*))TextInput__FuseControlsNativeITextEditFocusGained_fn;
    type->interface4.fp_FocusLost = (void(*)(uObject*))TextInput__FuseControlsNativeITextEditFocusLost_fn;
    type->interface4.fp_set_IsMultiline = (void(*)(uObject*, bool*))TextInput__set_IsMultiline_fn;
    type->interface4.fp_set_IsPassword = (void(*)(uObject*, bool*))TextInput__set_IsPassword_fn;
    type->interface4.fp_set_IsReadOnly = (void(*)(uObject*, bool*))TextInput__set_IsReadOnly_fn;
    type->interface4.fp_set_InputHint = (void(*)(uObject*, int*))TextInput__set_InputHint_fn;
    type->interface4.fp_set_CaretColor = (void(*)(uObject*, ::g::Uno::Float4*))TextInput__set_CaretColor_fn;
    type->interface4.fp_set_SelectionColor = (void(*)(uObject*, ::g::Uno::Float4*))TextInput__set_SelectionColor_fn;
    type->interface4.fp_set_ActionStyle = (void(*)(uObject*, int*))TextInput__set_ActionStyle_fn;
    type->interface4.fp_set_AutoCorrectHint = (void(*)(uObject*, int*))TextInput__set_AutoCorrectHint_fn;
    type->interface4.fp_set_AutoCapitalizationHint = (void(*)(uObject*, int*))TextInput__set_AutoCapitalizationHint_fn;
    type->interface4.fp_set_PlaceholderText = (void(*)(uObject*, uString*))TextInput__set_PlaceholderText_fn;
    type->interface4.fp_set_PlaceholderColor = (void(*)(uObject*, ::g::Uno::Float4*))TextInput__set_PlaceholderColor_fn;
    type->interface3.fp_set_Value = (void(*)(uObject*, uString*))::g::Fuse::Controls::Native::Android::TextView__set_Value_fn;
    type->interface3.fp_set_MaxLength = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextView__set_MaxLength_fn;
    type->interface3.fp_set_TextWrapping = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextView__set_TextWrapping_fn;
    type->interface3.fp_set_LineSpacing = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::TextView__set_LineSpacing_fn;
    type->interface3.fp_set_FontSize = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::TextView__set_FontSize_fn;
    type->interface3.fp_set_Font = (void(*)(uObject*, ::g::Fuse::Font*))::g::Fuse::Controls::Native::Android::TextView__set_Font_fn;
    type->interface3.fp_set_TextAlignment = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextView__set_TextAlignment_fn;
    type->interface3.fp_set_TextColor = (void(*)(uObject*, ::g::Uno::Float4*))::g::Fuse::Controls::Native::Android::TextView__set_TextColor_fn;
    type->interface3.fp_set_TextTruncation = (void(*)(uObject*, int*))::g::Fuse::Controls::Native::Android::TextView__set_TextTruncation_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))TextInput__Dispose_fn;
    type->interface2.fp_Measure = (void(*)(uObject*, ::g::Fuse::LayoutParams*, float*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::LeafView__FuseControlsNativeILeafViewMeasure_fn;
    return type;
}

// public TextInput(Fuse.Controls.Native.ITextEditHost host, bool isMultiline) :2000
void TextInput__ctor_4_fn(TextInput* __this, uObject* host, bool* isMultiline)
{
    __this->ctor_4(host, *isMultiline);
}

// public void set_ActionStyle(Fuse.Controls.TextInputActionStyle value) :2135
void TextInput__set_ActionStyle_fn(TextInput* __this, int* value)
{
    __this->ActionStyle(*value);
}

// private void AddEditorActionListener(Java.Object handle) :2385
void TextInput__AddEditorActionListener_fn(TextInput* __this, ::g::Java::Object* handle)
{
    __this->AddEditorActionListener(handle);
}

// private void AddTextChangedListener(Java.Object handle) :2346
void TextInput__AddTextChangedListener_fn(TextInput* __this, ::g::Java::Object* handle)
{
    __this->AddTextChangedListener(handle);
}

// public void set_AutoCapitalizationHint(Fuse.Controls.AutoCapitalizationHint value) :2115
void TextInput__set_AutoCapitalizationHint_fn(TextInput* __this, int* value)
{
    __this->AutoCapitalizationHint(*value);
}

// public void set_AutoCorrectHint(Fuse.Controls.AutoCorrectHint value) :2105
void TextInput__set_AutoCorrectHint_fn(TextInput* __this, int* value)
{
    __this->AutoCorrectHint(*value);
}

// public void set_CaretColor(float4 value) :2230
void TextInput__set_CaretColor_fn(TextInput* __this, ::g::Uno::Float4* value)
{
    __this->CaretColor(*value);
}

// private static Java.Object Create() :2312
void TextInput__Create1_fn(::g::Java::Object** __retval)
{
    *__retval = TextInput::Create1();
}

// public override sealed void Dispose() :2034
void TextInput__Dispose_fn(TextInput* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "Dispose()");
    __this->_host = NULL;
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_focusEvent), ::TYPES[3/*Uno.IDisposable*/]));
    __this->_focusEvent = NULL;
    ::g::Fuse::Controls::Native::Android::View__Dispose_fn(__this);
}

// private void Fuse.Controls.Native.ITextEdit.FocusGained() :2042
void TextInput__FuseControlsNativeITextEditFocusGained_fn(TextInput* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "Fuse.Controls.Native.ITextEdit.FocusGained()");
    TextInput::RequestFocus(__this->Handle());
}

// private void Fuse.Controls.Native.ITextEdit.FocusLost() :2047
void TextInput__FuseControlsNativeITextEditFocusLost_fn(TextInput* __this)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "Fuse.Controls.Native.ITextEdit.FocusLost()");

    if (TextInput::HasFocus(__this->Handle()))
        __this->ScheduleFocusLoss();
}

// private static bool HasFocus(Java.Object viewHandle) :2054
void TextInput__HasFocus_fn(::g::Java::Object* viewHandle, bool* __retval)
{
    *__retval = TextInput::HasFocus(viewHandle);
}

// public void set_InputHint(Fuse.Controls.TextInputHint value) :2125
void TextInput__set_InputHint_fn(TextInput* __this, int* value)
{
    __this->InputHint(*value);
}

// public void set_IsMultiline(bool value) :2075
void TextInput__set_IsMultiline_fn(TextInput* __this, bool* value)
{
    __this->IsMultiline(*value);
}

// public void set_IsPassword(bool value) :2085
void TextInput__set_IsPassword_fn(TextInput* __this, bool* value)
{
    __this->IsPassword(*value);
}

// public void set_IsReadOnly(bool value) :2095
void TextInput__set_IsReadOnly_fn(TextInput* __this, bool* value)
{
    __this->IsReadOnly(*value);
}

// public TextInput New(Fuse.Controls.Native.ITextEditHost host, bool isMultiline) :2000
void TextInput__New3_fn(uObject* host, bool* isMultiline, TextInput** __retval)
{
    *__retval = TextInput::New3(host, *isMultiline);
}

// private bool OnEditorAction(int actionCode) :2399
void TextInput__OnEditorAction_fn(TextInput* __this, int* actionCode, bool* __retval)
{
    *__retval = __this->OnEditorAction(*actionCode);
}

// private void OnNativeFocusChanged(Java.Object view, bool hasFocus) :2009
void TextInput__OnNativeFocusChanged_fn(TextInput* __this, ::g::Java::Object* view, bool* hasFocus)
{
    __this->OnNativeFocusChanged(view, *hasFocus);
}

// private void OnTextChanged(string value) :2394
void TextInput__OnTextChanged_fn(TextInput* __this, uString* value)
{
    __this->OnTextChanged(value);
}

// public void set_PlaceholderColor(float4 value) :2245
void TextInput__set_PlaceholderColor_fn(TextInput* __this, ::g::Uno::Float4* value)
{
    __this->PlaceholderColor(*value);
}

// public void set_PlaceholderText(string value) :2240
void TextInput__set_PlaceholderText_fn(TextInput* __this, uString* value)
{
    __this->PlaceholderText(value);
}

// private static void RequestFocus(Java.Object viewHandle) :2060
void TextInput__RequestFocus_fn(::g::Java::Object* viewHandle)
{
    TextInput::RequestFocus(viewHandle);
}

// private int get_ReturnKeyType() :2262
void TextInput__get_ReturnKeyType_fn(TextInput* __this, int* __retval)
{
    *__retval = __this->ReturnKeyType();
}

// private void ScheduleFocusLoss() :2024
void TextInput__ScheduleFocusLoss_fn(TextInput* __this)
{
    __this->ScheduleFocusLoss();
}

// public void set_SelectionColor(float4 value) :2235
void TextInput__set_SelectionColor_fn(TextInput* __this, ::g::Uno::Float4* value)
{
    __this->SelectionColor(*value);
}

// private void SetCursorDrawableColor(Java.Object handle, int color) :2318
void TextInput__SetCursorDrawableColor_fn(TextInput* __this, ::g::Java::Object* handle, int* color)
{
    __this->SetCursorDrawableColor(handle, *color);
}

// private static void SetImeOptions(Java.Object handle, int value) :2306
void TextInput__SetImeOptions_fn(::g::Java::Object* handle, int* value)
{
    TextInput::SetImeOptions(handle, *value);
}

// private static void SetInputType(Java.Object handle, int value) :2283
void TextInput__SetInputType_fn(::g::Java::Object* handle, int* value)
{
    TextInput::SetInputType(handle, *value);
}

// private static void SetPlaceholderColor(Java.Object handle, int value) :2249
void TextInput__SetPlaceholderColor_fn(::g::Java::Object* handle, int* value)
{
    TextInput::SetPlaceholderColor(handle, *value);
}

// private static void SetPlaceholderText(Java.Object handle, string value) :2255
void TextInput__SetPlaceholderText_fn(::g::Java::Object* handle, uString* value)
{
    TextInput::SetPlaceholderText(handle, value);
}

// private static void SetSelectionColor(Java.Object handle, int color) :2277
void TextInput__SetSelectionColor_fn(::g::Java::Object* handle, int* color)
{
    TextInput::SetSelectionColor(handle, *color);
}

// private void UpdateFlags() :2142
void TextInput__UpdateFlags_fn(TextInput* __this)
{
    __this->UpdateFlags();
}

// public TextInput(Fuse.Controls.Native.ITextEditHost host, bool isMultiline) [instance] :2000
void TextInput::ctor_4(uObject* host, bool isMultiline)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", ".ctor(Fuse.Controls.Native.ITextEditHost,bool)");
    ctor_3(TextInput::Create1());
    _host = host;
    IsMultiline(isMultiline);
    AddEditorActionListener(Handle());
    _focusEvent = ::g::Fuse::Controls::Native::Android::FocusChangedListener::AddHandler(Handle(), uDelegate::New(::TYPES[33/*Uno.Action<Java.Object, bool>*/], (void*)TextInput__OnNativeFocusChanged_fn, this));
    AddTextChangedListener(Handle());
}

// public void set_ActionStyle(Fuse.Controls.TextInputActionStyle value) [instance] :2135
void TextInput::ActionStyle(int value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "set_ActionStyle(Fuse.Controls.TextInputActionStyle)");
    _actionStyle = value;
    UpdateFlags();
}

// private void AddEditorActionListener(Java.Object handle) [instance] :2385
void TextInput::AddEditorActionListener(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "AddEditorActionListener(Java.Object)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddEditorActionListener154", "(Lcom/uno/UnoObject;Ljava/lang/Object;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void AddTextChangedListener(Java.Object handle) [instance] :2346
void TextInput::AddTextChangedListener(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "AddTextChangedListener(Java.Object)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddTextChangedListener156", "(Lcom/uno/UnoObject;Ljava/lang/Object;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public void set_AutoCapitalizationHint(Fuse.Controls.AutoCapitalizationHint value) [instance] :2115
void TextInput::AutoCapitalizationHint(int value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "set_AutoCapitalizationHint(Fuse.Controls.AutoCapitalizationHint)");
    _autoCapitalizationHint = value;
    UpdateFlags();
}

// public void set_AutoCorrectHint(Fuse.Controls.AutoCorrectHint value) [instance] :2105
void TextInput::AutoCorrectHint(int value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "set_AutoCorrectHint(Fuse.Controls.AutoCorrectHint)");
    _autoCorrentHint = value;
    UpdateFlags();
}

// public void set_CaretColor(float4 value) [instance] :2230
void TextInput::CaretColor(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "set_CaretColor(float4)");
    SetCursorDrawableColor(Handle(), ::g::Fuse::Controls::Native::Android::Helpers::EncodeColor(value));
}

// public void set_InputHint(Fuse.Controls.TextInputHint value) [instance] :2125
void TextInput::InputHint(int value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "set_InputHint(Fuse.Controls.TextInputHint)");
    _inputHint = value;
    UpdateFlags();
}

// public void set_IsMultiline(bool value) [instance] :2075
void TextInput::IsMultiline(bool value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "set_IsMultiline(bool)");
    _isMultiline = value;
    UpdateFlags();
}

// public void set_IsPassword(bool value) [instance] :2085
void TextInput::IsPassword(bool value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "set_IsPassword(bool)");
    _isPassword = value;
    UpdateFlags();
}

// public void set_IsReadOnly(bool value) [instance] :2095
void TextInput::IsReadOnly(bool value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "set_IsReadOnly(bool)");
    _isReadOnly = value;
    UpdateFlags();
}

// private bool OnEditorAction(int actionCode) [instance] :2399
bool TextInput::OnEditorAction(int actionCode)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "OnEditorAction(int)");

    switch (actionCode)
    {
        case 6:
        case 5:
        case 2:
        case 3:
        case 4:
            return ::g::Fuse::Controls::Native::ITextEditHost::OnInputAction(uInterface(uPtr(_host), ::TYPES[34/*Fuse.Controls.Native.ITextEditHost*/]), 0);
    }

    return false;
}

// private void OnNativeFocusChanged(Java.Object view, bool hasFocus) [instance] :2009
void TextInput::OnNativeFocusChanged(::g::Java::Object* view, bool hasFocus)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "OnNativeFocusChanged(Java.Object,bool)");

    if (!hasFocus)
    {
        ::g::Fuse::Controls::Native::ITextEditHost::OnFocusLost(uInterface(uPtr(_host), ::TYPES[34/*Fuse.Controls.Native.ITextEditHost*/]));
        ScheduleFocusLoss();
    }
    else 
    {
        ::g::Fuse::Controls::Native::ITextEditHost::OnFocusGained(uInterface(uPtr(_host), ::TYPES[34/*Fuse.Controls.Native.ITextEditHost*/]));
        uPtr(::g::Fuse::Controls::Native::Android::FocusManager::Singleton())->HideKeyboardContext = NULL;
        ::g::Fuse::Controls::Native::Android::SoftKeyboard::ShowKeyboard(Handle());
    }
}

// private void OnTextChanged(string value) [instance] :2394
void TextInput::OnTextChanged(uString* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "OnTextChanged(string)");
    ::g::Fuse::Controls::Native::ITextEditHost::OnValueChanged(uInterface(uPtr(_host), ::TYPES[34/*Fuse.Controls.Native.ITextEditHost*/]), value);
}

// public void set_PlaceholderColor(float4 value) [instance] :2245
void TextInput::PlaceholderColor(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "set_PlaceholderColor(float4)");
    TextInput::SetPlaceholderColor(Handle(), ::g::Fuse::Controls::Native::Android::Helpers::EncodeColor(value));
}

// public void set_PlaceholderText(string value) [instance] :2240
void TextInput::PlaceholderText(uString* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "set_PlaceholderText(string)");
    TextInput::SetPlaceholderText(Handle(), value);
}

// private int get_ReturnKeyType() [instance] :2262
int TextInput::ReturnKeyType()
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "get_ReturnKeyType()");

    switch (_actionStyle)
    {
        case 1:
            return 6;
        case 2:
            return 5;
        case 3:
            return 2;
        case 4:
            return 3;
        case 5:
            return 4;
    }

    return 0;
}

// private void ScheduleFocusLoss() [instance] :2024
void TextInput::ScheduleFocusLoss()
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "ScheduleFocusLoss()");
    uPtr(::g::Fuse::Controls::Native::Android::FocusManager::Singleton())->LoseFocus = Handle();
    uPtr(::g::Fuse::Controls::Native::Android::FocusManager::Singleton())->HideKeyboardContext = ::g::Fuse::Controls::Native::Android::FocusManager::GetContext(Handle());
    uPtr(::g::Fuse::Controls::Native::Android::FocusManager::Singleton())->HideKeyboardWindowToken = ::g::Fuse::Controls::Native::Android::FocusManager::GetWindowToken(Handle());
    ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[35/*Uno.Action*/], (void*)::g::Fuse::Controls::Native::Android::FocusManager__CompleteFocusLoss_fn, uPtr(::g::Fuse::Controls::Native::Android::FocusManager::Singleton())), -1, 0);
}

// public void set_SelectionColor(float4 value) [instance] :2235
void TextInput::SelectionColor(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "set_SelectionColor(float4)");
    TextInput::SetSelectionColor(Handle(), ::g::Fuse::Controls::Native::Android::Helpers::EncodeColor(value));
}

// private void SetCursorDrawableColor(Java.Object handle, int color) [instance] :2318
void TextInput::SetCursorDrawableColor(::g::Java::Object* handle, int color)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "SetCursorDrawableColor(Java.Object,int)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetCursorDrawableColor162", "(Lcom/uno/UnoObject;Ljava/lang/Object;I)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _ucolor=color;
        jint _color = (jint)_ucolor;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle,_color);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void UpdateFlags() [instance] :2142
void TextInput::UpdateFlags()
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "UpdateFlags()");
    int flags = 0;

    switch (_inputHint)
    {
        case 1:
        {
            flags = flags | 33;
            break;
        }
        case 2:
        {
            flags = flags | 17;
            break;
        }
        case 3:
        {
            flags = flags | 3;
            break;
        }
        case 4:
        {
            flags = flags | 2;
            break;
        }
        case 5:
        {
            flags = flags | 8194;
            break;
        }
        default:
        {
            flags = flags | 1;

            switch (_autoCorrentHint)
            {
                case 0:
                {
                    flags = flags | 32768;
                    break;
                }
                case 1:
                    break;
                case 2:
                {
                    flags = flags | 32768;
                    break;
                }
            }

            switch (_autoCapitalizationHint)
            {
                case 0:
                    break;
                case 1:
                {
                    flags = flags | 4096;
                    break;
                }
                case 2:
                {
                    flags = flags | 8192;
                    break;
                }
                case 3:
                {
                    flags = flags | 16384;
                    break;
                }
            }

            break;
        }
    }

    if (_isMultiline)
        flags = flags | 131072;

    if (_isPassword)
        flags = flags | 128;

    if (_isReadOnly)
        TextInput::SetInputType(Handle(), 0);
    else 
    {
        TextInput::SetInputType(Handle(), flags);
        TextInput::SetImeOptions(Handle(), ReturnKeyType());
    }
}

// private static Java.Object Create() [static] :2312
::g::Java::Object* TextInput::Create1()
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "Create()");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create1159", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static bool HasFocus(Java.Object viewHandle) [static] :2054
bool TextInput::HasFocus(::g::Java::Object* viewHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "HasFocus(Java.Object)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "HasFocus160", "(Ljava/lang/Object;)Z");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jboolean __jresult = U_JNIVAR->CallStaticBooleanMethod(__cls,__mtd,_viewHandle);
        bool __result = (bool)__jresult;
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public TextInput New(Fuse.Controls.Native.ITextEditHost host, bool isMultiline) [static] :2000
TextInput* TextInput::New3(uObject* host, bool isMultiline)
{
    TextInput* obj1 = (TextInput*)uNew(TextInput_typeof());
    obj1->ctor_4(host, isMultiline);
    return obj1;
}

// private static void RequestFocus(Java.Object viewHandle) [static] :2060
void TextInput::RequestFocus(::g::Java::Object* viewHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "RequestFocus(Java.Object)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "RequestFocus161", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_viewHandle);
        
        if (_viewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetImeOptions(Java.Object handle, int value) [static] :2306
void TextInput::SetImeOptions(::g::Java::Object* handle, int value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "SetImeOptions(Java.Object,int)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetImeOptions163", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uvalue=value;
        jint _value = (jint)_uvalue;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetInputType(Java.Object handle, int value) [static] :2283
void TextInput::SetInputType(::g::Java::Object* handle, int value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "SetInputType(Java.Object,int)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetInputType164", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uvalue=value;
        jint _value = (jint)_uvalue;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetPlaceholderColor(Java.Object handle, int value) [static] :2249
void TextInput::SetPlaceholderColor(::g::Java::Object* handle, int value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "SetPlaceholderColor(Java.Object,int)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetPlaceholderColor165", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uvalue=value;
        jint _value = (jint)_uvalue;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetPlaceholderText(Java.Object handle, string value) [static] :2255
void TextInput::SetPlaceholderText(::g::Java::Object* handle, uString* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "SetPlaceholderText(Java.Object,string)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetPlaceholderText166", "(Ljava/lang/Object;Ljava/lang/String;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uString* _uvalue=value;
        jstring _value = JniHelper::UnoToJavaString(_uvalue);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_value!=NULL) { U_JNIVAR->DeleteLocalRef(_value); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetSelectionColor(Java.Object handle, int color) [static] :2277
void TextInput::SetSelectionColor(::g::Java::Object* handle, int color)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextInput", "SetSelectionColor(Java.Object,int)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetSelectionColor167", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _ucolor=color;
        jint _color = (jint)_ucolor;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_color);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/android/$.uno
// -----------------------------------------------------------------------

// public extern class TextView :2810
// {
static void TextView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(TextView_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(TextView_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(TextView_type, interface2),
        ::g::Fuse::Controls::Native::ITextView_typeof(), offsetof(TextView_type, interface3));
    type->SetFields(6);
    type->Reflection.SetFunctions(11,
        new uFunction("set_Font", NULL, (void*)TextView__set_Font_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Font_typeof()),
        new uFunction("set_FontSize", NULL, (void*)TextView__set_FontSize_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("set_LineSpacing", NULL, (void*)TextView__set_LineSpacing_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("set_MaxLength", NULL, (void*)TextView__set_MaxLength_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)TextView__New1_fn, 0, true, TextView_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)TextView__New2_fn, 0, true, TextView_typeof(), 1, ::g::Java::Object_typeof()),
        new uFunction("set_TextAlignment", NULL, (void*)TextView__set_TextAlignment_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::TextAlignment_typeof()),
        new uFunction("set_TextColor", NULL, (void*)TextView__set_TextColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("set_TextTruncation", NULL, (void*)TextView__set_TextTruncation_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::TextTruncation_typeof()),
        new uFunction("set_TextWrapping", NULL, (void*)TextView__set_TextWrapping_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::TextWrapping_typeof()),
        new uFunction("set_Value", NULL, (void*)TextView__set_Value_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
}

TextView_type* TextView_typeof()
{
    static uSStrong<TextView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::LeafView_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(TextView);
    options.TypeSize = sizeof(TextView_type);
    type = (TextView_type*)uClassType::New("Fuse.Controls.Native.Android.TextView", options);
    type->fp_build_ = TextView_build;
    type->fp_ctor_ = (void*)TextView__New1_fn;
    type->interface3.fp_set_Value = (void(*)(uObject*, uString*))TextView__set_Value_fn;
    type->interface3.fp_set_MaxLength = (void(*)(uObject*, int*))TextView__set_MaxLength_fn;
    type->interface3.fp_set_TextWrapping = (void(*)(uObject*, int*))TextView__set_TextWrapping_fn;
    type->interface3.fp_set_LineSpacing = (void(*)(uObject*, float*))TextView__set_LineSpacing_fn;
    type->interface3.fp_set_FontSize = (void(*)(uObject*, float*))TextView__set_FontSize_fn;
    type->interface3.fp_set_Font = (void(*)(uObject*, ::g::Fuse::Font*))TextView__set_Font_fn;
    type->interface3.fp_set_TextAlignment = (void(*)(uObject*, int*))TextView__set_TextAlignment_fn;
    type->interface3.fp_set_TextColor = (void(*)(uObject*, ::g::Uno::Float4*))TextView__set_TextColor_fn;
    type->interface3.fp_set_TextTruncation = (void(*)(uObject*, int*))TextView__set_TextTruncation_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Dispose_fn;
    type->interface2.fp_Measure = (void(*)(uObject*, ::g::Fuse::LayoutParams*, float*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::LeafView__FuseControlsNativeILeafViewMeasure_fn;
    return type;
}

// public TextView() :2814
void TextView__ctor_2_fn(TextView* __this)
{
    __this->ctor_2();
}

// public TextView(Java.Object handle) :2812
void TextView__ctor_3_fn(TextView* __this, ::g::Java::Object* handle)
{
    __this->ctor_3(handle);
}

// private static Java.Object Create() :2880
void TextView__Create_fn(::g::Java::Object** __retval)
{
    *__retval = TextView::Create();
}

// public void set_Font(Fuse.Font value) :2847
void TextView__set_Font_fn(TextView* __this, ::g::Fuse::Font* value)
{
    __this->Font(value);
}

// public void set_FontSize(float value) :2842
void TextView__set_FontSize_fn(TextView* __this, float* value)
{
    __this->FontSize(*value);
}

// public void set_LineSpacing(float value) :2837
void TextView__set_LineSpacing_fn(TextView* __this, float* value)
{
    __this->LineSpacing(*value);
}

// public void set_MaxLength(int value) :2823
void TextView__set_MaxLength_fn(TextView* __this, int* value)
{
    __this->MaxLength(*value);
}

// public TextView New() :2814
void TextView__New1_fn(TextView** __retval)
{
    *__retval = TextView::New1();
}

// public TextView New(Java.Object handle) :2812
void TextView__New2_fn(::g::Java::Object* handle, TextView** __retval)
{
    *__retval = TextView::New2(handle);
}

// private static void SetFont(Java.Object handle, Java.Object fontHandle) :2911
void TextView__SetFont_fn(::g::Java::Object* handle, ::g::Java::Object* fontHandle)
{
    TextView::SetFont(handle, fontHandle);
}

// private static void SetFontSize(Java.Object handle, float size) :2905
void TextView__SetFontSize_fn(::g::Java::Object* handle, float* size)
{
    TextView::SetFontSize(handle, *size);
}

// private static void SetLineSpacing(Java.Object handle, float spacing) :2899
void TextView__SetLineSpacing_fn(::g::Java::Object* handle, float* spacing)
{
    TextView::SetLineSpacing(handle, *spacing);
}

// private static void SetMaxLength(Java.Object handle, int maxLength) :2932
void TextView__SetMaxLength_fn(::g::Java::Object* handle, int* maxLength)
{
    TextView::SetMaxLength(handle, *maxLength);
}

// private static void SetText(Java.Object handle, string text) :2886
void TextView__SetText_fn(::g::Java::Object* handle, uString* text)
{
    TextView::SetText(handle, text);
}

// private static void SetTextAlignment(Java.Object handle, int alignment) :2917
void TextView__SetTextAlignment_fn(::g::Java::Object* handle, int* alignment)
{
    TextView::SetTextAlignment(handle, *alignment);
}

// private static void SetTextColor(Java.Object handle, int color) :2926
void TextView__SetTextColor_fn(::g::Java::Object* handle, int* color)
{
    TextView::SetTextColor(handle, *color);
}

// private static void SetTextWrapping(Java.Object handle, bool wrap) :2893
void TextView__SetTextWrapping_fn(::g::Java::Object* handle, bool* wrap)
{
    TextView::SetTextWrapping(handle, *wrap);
}

// public void set_TextAlignment(Fuse.Controls.TextAlignment value) :2858
void TextView__set_TextAlignment_fn(TextView* __this, int* value)
{
    __this->TextAlignment(*value);
}

// public void set_TextColor(float4 value) :2871
void TextView__set_TextColor_fn(TextView* __this, ::g::Uno::Float4* value)
{
    __this->TextColor(*value);
}

// public void set_TextTruncation(Fuse.Controls.TextTruncation value) :2876
void TextView__set_TextTruncation_fn(TextView* __this, int* value)
{
    __this->TextTruncation(*value);
}

// public void set_TextWrapping(Fuse.Controls.TextWrapping value) :2832
void TextView__set_TextWrapping_fn(TextView* __this, int* value)
{
    __this->TextWrapping(*value);
}

// public void set_Value(string value) :2818
void TextView__set_Value_fn(TextView* __this, uString* value)
{
    __this->Value(value);
}

// public TextView() [instance] :2814
void TextView::ctor_2()
{
    uStackFrame __("Fuse.Controls.Native.Android.TextView", ".ctor()");
    ctor_3(TextView::Create());
}

// public TextView(Java.Object handle) [instance] :2812
void TextView::ctor_3(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextView", ".ctor(Java.Object)");
    ctor_1(handle);
}

// public void set_Font(Fuse.Font value) [instance] :2847
void TextView::Font(::g::Fuse::Font* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextView", "set_Font(Fuse.Font)");
    ::g::Fuse::Controls::Native::Android::Typeface* typeface = (value != ::g::Fuse::Font::PlatformDefault()) ? (::g::Fuse::Controls::Native::Android::Typeface*)::g::Fuse::Controls::Native::Android::TypefaceCache::GetTypeface(value) : (::g::Fuse::Controls::Native::Android::Typeface*)::g::Fuse::Controls::Native::Android::Typeface::Default();
    TextView::SetFont(Handle(), uPtr(typeface)->Handle());
}

// public void set_FontSize(float value) [instance] :2842
void TextView::FontSize(float value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextView", "set_FontSize(float)");
    TextView::SetFontSize(Handle(), value);
}

// public void set_LineSpacing(float value) [instance] :2837
void TextView::LineSpacing(float value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextView", "set_LineSpacing(float)");
    TextView::SetLineSpacing(Handle(), value);
}

// public void set_MaxLength(int value) [instance] :2823
void TextView::MaxLength(int value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextView", "set_MaxLength(int)");
    TextView::SetMaxLength(Handle(), (value == 0) ? 2147483647 : value);
}

// public void set_TextAlignment(Fuse.Controls.TextAlignment value) [instance] :2858
void TextView::TextAlignment(int value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextView", "set_TextAlignment(Fuse.Controls.TextAlignment)");

    switch (value)
    {
        case 0:
        {
            TextView::SetTextAlignment(Handle(), 3);
            break;
        }
        case 1:
        {
            TextView::SetTextAlignment(Handle(), 1);
            break;
        }
        case 2:
        {
            TextView::SetTextAlignment(Handle(), 5);
            break;
        }
    }
}

// public void set_TextColor(float4 value) [instance] :2871
void TextView::TextColor(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextView", "set_TextColor(float4)");
    TextView::SetTextColor(Handle(), ::g::Fuse::Controls::Native::Android::Helpers::EncodeColor(value));
}

// public void set_TextTruncation(Fuse.Controls.TextTruncation value) [instance] :2876
void TextView::TextTruncation(int value)
{
}

// public void set_TextWrapping(Fuse.Controls.TextWrapping value) [instance] :2832
void TextView::TextWrapping(int value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextView", "set_TextWrapping(Fuse.Controls.TextWrapping)");
    TextView::SetTextWrapping(Handle(), value == 1);
}

// public void set_Value(string value) [instance] :2818
void TextView::Value(uString* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextView", "set_Value(string)");
    TextView::SetText(Handle(), value);
}

// private static Java.Object Create() [static] :2880
::g::Java::Object* TextView::Create()
{
    uStackFrame __("Fuse.Controls.Native.Android.TextView", "Create()");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create168", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public TextView New() [static] :2814
TextView* TextView::New1()
{
    TextView* obj2 = (TextView*)uNew(TextView_typeof());
    obj2->ctor_2();
    return obj2;
}

// public TextView New(Java.Object handle) [static] :2812
TextView* TextView::New2(::g::Java::Object* handle)
{
    TextView* obj1 = (TextView*)uNew(TextView_typeof());
    obj1->ctor_3(handle);
    return obj1;
}

// private static void SetFont(Java.Object handle, Java.Object fontHandle) [static] :2911
void TextView::SetFont(::g::Java::Object* handle, ::g::Java::Object* fontHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextView", "SetFont(Java.Object,Java.Object)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetFont169", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ufontHandle=fontHandle;
        jobject _fontHandle = (_ufontHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ufontHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_fontHandle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_fontHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_fontHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetFontSize(Java.Object handle, float size) [static] :2905
void TextView::SetFontSize(::g::Java::Object* handle, float size)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextView", "SetFontSize(Java.Object,float)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetFontSize170", "(Ljava/lang/Object;F)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _usize=size;
        jfloat _size = (jfloat)_usize;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_size);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetLineSpacing(Java.Object handle, float spacing) [static] :2899
void TextView::SetLineSpacing(::g::Java::Object* handle, float spacing)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextView", "SetLineSpacing(Java.Object,float)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetLineSpacing171", "(Ljava/lang/Object;F)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _uspacing=spacing;
        jfloat _spacing = (jfloat)_uspacing;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_spacing);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetMaxLength(Java.Object handle, int maxLength) [static] :2932
void TextView::SetMaxLength(::g::Java::Object* handle, int maxLength)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextView", "SetMaxLength(Java.Object,int)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetMaxLength172", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _umaxLength=maxLength;
        jint _maxLength = (jint)_umaxLength;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_maxLength);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetText(Java.Object handle, string text) [static] :2886
void TextView::SetText(::g::Java::Object* handle, uString* text)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextView", "SetText(Java.Object,string)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetText173", "(Ljava/lang/Object;Ljava/lang/String;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uString* _utext=text;
        jstring _text = JniHelper::UnoToJavaString(_utext);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_text);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_text!=NULL) { U_JNIVAR->DeleteLocalRef(_text); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetTextAlignment(Java.Object handle, int alignment) [static] :2917
void TextView::SetTextAlignment(::g::Java::Object* handle, int alignment)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextView", "SetTextAlignment(Java.Object,int)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetTextAlignment174", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _ualignment=alignment;
        jint _alignment = (jint)_ualignment;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_alignment);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetTextColor(Java.Object handle, int color) [static] :2926
void TextView::SetTextColor(::g::Java::Object* handle, int color)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextView", "SetTextColor(Java.Object,int)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetTextColor175", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _ucolor=color;
        jint _color = (jint)_ucolor;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_color);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetTextWrapping(Java.Object handle, bool wrap) [static] :2893
void TextView::SetTextWrapping(::g::Java::Object* handle, bool wrap)
{
    uStackFrame __("Fuse.Controls.Native.Android.TextView", "SetTextWrapping(Java.Object,bool)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetTextWrapping176", "(Ljava/lang/Object;Z)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool _uwrap=wrap;
        jboolean _wrap = (jboolean)_uwrap;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_wrap);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/android/$.uno
// -----------------------------------------------------------------------

// internal sealed extern class Typeface :2955
// {
static void Typeface_build(uType* type)
{
    ::TYPES[12] = ::g::Java::Object_typeof();
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::Typeface, _handle), 0);
}

uType* Typeface_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Typeface);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.Typeface", options);
    type->fp_build_ = Typeface_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Typeface__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Typeface__GetHashCode_fn;
    return type;
}

// public Typeface(Java.Object handle) :2965
void Typeface__ctor__fn(Typeface* __this, ::g::Java::Object* handle)
{
    __this->ctor_(handle);
}

// private static Java.Object CreateFromBundleFile(string bundlePath) :2998
void Typeface__CreateFromBundleFile_fn(uString* bundlePath, ::g::Java::Object** __retval)
{
    *__retval = Typeface::CreateFromBundleFile(bundlePath);
}

// public static Fuse.Controls.Native.Android.Typeface CreateFromBundleFile(Uno.IO.BundleFile file) :2987
void Typeface__CreateFromBundleFile1_fn(::g::Uno::IO::BundleFile* file, Typeface** __retval)
{
    *__retval = Typeface::CreateFromBundleFile1(file);
}

// public static Fuse.Controls.Native.Android.Typeface CreateFromFile(string path) :2992
void Typeface__CreateFromFile_fn(uString* path, Typeface** __retval)
{
    *__retval = Typeface::CreateFromFile(path);
}

// private static Java.Object CreateFromFileImpl(string path) :3006
void Typeface__CreateFromFileImpl_fn(uString* path, ::g::Java::Object** __retval)
{
    *__retval = Typeface::CreateFromFileImpl(path);
}

// public static Fuse.Controls.Native.Android.Typeface get_Default() :2972
void Typeface__get_Default_fn(Typeface** __retval)
{
    *__retval = Typeface::Default();
}

// public override sealed bool Equals(object obj) :2975
void Typeface__Equals_fn(Typeface* __this, uObject* obj, bool* __retval)
{
    uStackFrame __("Fuse.Controls.Native.Android.Typeface", "Equals(object)");
    return *__retval = uIs(obj, ::TYPES[12/*Java.Object*/]) ? ::g::Uno::Object::Equals(uPtr(__this->_handle), uCast< ::g::Java::Object*>(obj, ::TYPES[12/*Java.Object*/])) : false, void();
}

// private static Java.Object GetDefault() :3012
void Typeface__GetDefault_fn(::g::Java::Object** __retval)
{
    *__retval = Typeface::GetDefault();
}

// public override sealed int GetHashCode() :2982
void Typeface__GetHashCode_fn(Typeface* __this, int* __retval)
{
    uStackFrame __("Fuse.Controls.Native.Android.Typeface", "GetHashCode()");
    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(__this->_handle)), void();
}

// public Java.Object get_Handle() :2959
void Typeface__get_Handle_fn(Typeface* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->Handle();
}

// public Typeface New(Java.Object handle) :2965
void Typeface__New1_fn(::g::Java::Object* handle, Typeface** __retval)
{
    *__retval = Typeface::New1(handle);
}

// public Typeface(Java.Object handle) [instance] :2965
void Typeface::ctor_(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.Typeface", ".ctor(Java.Object)");
    _handle = handle;
}

// public Java.Object get_Handle() [instance] :2959
::g::Java::Object* Typeface::Handle()
{
    uStackFrame __("Fuse.Controls.Native.Android.Typeface", "get_Handle()");
    return _handle;
}

// private static Java.Object CreateFromBundleFile(string bundlePath) [static] :2998
::g::Java::Object* Typeface::CreateFromBundleFile(uString* bundlePath)
{
    uStackFrame __("Fuse.Controls.Native.Android.Typeface", "CreateFromBundleFile(string)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateFromBundleFile177", "(Ljava/lang/String;)Ljava/lang/Object;");
        uString* _ubundlePath=bundlePath;
        jstring _bundlePath = JniHelper::UnoToJavaString(_ubundlePath);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_bundlePath);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_bundlePath!=NULL) { U_JNIVAR->DeleteLocalRef(_bundlePath); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static Fuse.Controls.Native.Android.Typeface CreateFromBundleFile(Uno.IO.BundleFile file) [static] :2987
Typeface* Typeface::CreateFromBundleFile1(::g::Uno::IO::BundleFile* file)
{
    uStackFrame __("Fuse.Controls.Native.Android.Typeface", "CreateFromBundleFile(Uno.IO.BundleFile)");
    return Typeface::New1(Typeface::CreateFromBundleFile(uPtr(file)->BundlePath()));
}

// public static Fuse.Controls.Native.Android.Typeface CreateFromFile(string path) [static] :2992
Typeface* Typeface::CreateFromFile(uString* path)
{
    uStackFrame __("Fuse.Controls.Native.Android.Typeface", "CreateFromFile(string)");
    return Typeface::New1(Typeface::CreateFromFileImpl(path));
}

// private static Java.Object CreateFromFileImpl(string path) [static] :3006
::g::Java::Object* Typeface::CreateFromFileImpl(uString* path)
{
    uStackFrame __("Fuse.Controls.Native.Android.Typeface", "CreateFromFileImpl(string)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateFromFileImpl178", "(Ljava/lang/String;)Ljava/lang/Object;");
        uString* _upath=path;
        jstring _path = JniHelper::UnoToJavaString(_upath);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_path);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_path!=NULL) { U_JNIVAR->DeleteLocalRef(_path); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static Java.Object GetDefault() [static] :3012
::g::Java::Object* Typeface::GetDefault()
{
    uStackFrame __("Fuse.Controls.Native.Android.Typeface", "GetDefault()");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetDefault179", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public Typeface New(Java.Object handle) [static] :2965
Typeface* Typeface::New1(::g::Java::Object* handle)
{
    Typeface* obj1 = (Typeface*)uNew(Typeface_typeof());
    obj1->ctor_(handle);
    return obj1;
}

// public static Fuse.Controls.Native.Android.Typeface get_Default() [static] :2972
Typeface* Typeface::Default()
{
    uStackFrame __("Fuse.Controls.Native.Android.Typeface", "get_Default()");
    return Typeface::New1(Typeface::GetDefault());
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/android/$.uno
// -----------------------------------------------------------------------

// internal static extern class TypefaceCache :3018
// {
// static TypefaceCache() :3018
static void TypefaceCache__cctor__fn(uType* __type)
{
    TypefaceCache::_typefaces_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[36/*Uno.Collections.Dictionary<string, Fuse.Controls.Native.Android.Typeface>*/]));
}

static void TypefaceCache_build(uType* type)
{
    ::STRINGS[4] = uString::Const("/tempFont");
    ::TYPES[36] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Controls::Native::Android::Typeface_typeof());
    ::TYPES[37] = ::g::Uno::UX::BundleFileSource_typeof();
    ::TYPES[38] = ::g::Fuse::Resources::SystemFileSource_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Controls::Native::Android::Typeface_typeof()), (uintptr_t)&::g::Fuse::Controls::Native::Android::TypefaceCache::_typefaces_, uFieldFlagsStatic);
}

uClassType* TypefaceCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.Android.TypefaceCache", options);
    type->fp_build_ = TypefaceCache_build;
    type->fp_cctor_ = TypefaceCache__cctor__fn;
    return type;
}

// public static Fuse.Controls.Native.Android.Typeface GetTypeface(Fuse.Font font) :3023
void TypefaceCache__GetTypeface_fn(::g::Fuse::Font* font, ::g::Fuse::Controls::Native::Android::Typeface** __retval)
{
    *__retval = TypefaceCache::GetTypeface(font);
}

// private static Fuse.Controls.Native.Android.Typeface GetTypefaceFromBundleFile(Uno.IO.BundleFile file) :3030
void TypefaceCache__GetTypefaceFromBundleFile_fn(::g::Uno::IO::BundleFile* file, ::g::Fuse::Controls::Native::Android::Typeface** __retval)
{
    *__retval = TypefaceCache::GetTypefaceFromBundleFile(file);
}

// private static Fuse.Controls.Native.Android.Typeface GetTypefaceFromFileSource(Uno.UX.FileSource fileSource) :3040
void TypefaceCache__GetTypefaceFromFileSource_fn(::g::Uno::UX::FileSource* fileSource, ::g::Fuse::Controls::Native::Android::Typeface** __retval)
{
    *__retval = TypefaceCache::GetTypefaceFromFileSource(fileSource);
}

uSStrong< ::g::Uno::Collections::Dictionary*> TypefaceCache::_typefaces_;

// public static Fuse.Controls.Native.Android.Typeface GetTypeface(Fuse.Font font) [static] :3023
::g::Fuse::Controls::Native::Android::Typeface* TypefaceCache::GetTypeface(::g::Fuse::Font* font)
{
    uStackFrame __("Fuse.Controls.Native.Android.TypefaceCache", "GetTypeface(Fuse.Font)");
    TypefaceCache_typeof()->Init();
    return uIs((::g::Uno::UX::FileSource*)uPtr(font)->FileSource(), ::TYPES[37/*Uno.UX.BundleFileSource*/]) ? (::g::Fuse::Controls::Native::Android::Typeface*)TypefaceCache::GetTypefaceFromBundleFile(uPtr(uCast< ::g::Uno::UX::BundleFileSource*>(uPtr(font)->FileSource(), ::TYPES[37/*Uno.UX.BundleFileSource*/]))->BundleFile) : (::g::Fuse::Controls::Native::Android::Typeface*)TypefaceCache::GetTypefaceFromFileSource(uPtr(font)->FileSource());
}

// private static Fuse.Controls.Native.Android.Typeface GetTypefaceFromBundleFile(Uno.IO.BundleFile file) [static] :3030
::g::Fuse::Controls::Native::Android::Typeface* TypefaceCache::GetTypefaceFromBundleFile(::g::Uno::IO::BundleFile* file)
{
    uStackFrame __("Fuse.Controls.Native.Android.TypefaceCache", "GetTypefaceFromBundleFile(Uno.IO.BundleFile)");
    TypefaceCache_typeof()->Init();
    bool ret1;
    ::g::Fuse::Controls::Native::Android::Typeface* ret2;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(TypefaceCache::_typefaces()), uPtr(file)->BundlePath(), &ret1), ret1))
        return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(TypefaceCache::_typefaces()), uPtr(file)->BundlePath(), &ret2), ret2);

    ::g::Fuse::Controls::Native::Android::Typeface* typeface = ::g::Fuse::Controls::Native::Android::Typeface::CreateFromBundleFile1(file);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(TypefaceCache::_typefaces()), uPtr(file)->BundlePath(), typeface);
    return typeface;
}

// private static Fuse.Controls.Native.Android.Typeface GetTypefaceFromFileSource(Uno.UX.FileSource fileSource) [static] :3040
::g::Fuse::Controls::Native::Android::Typeface* TypefaceCache::GetTypefaceFromFileSource(::g::Uno::UX::FileSource* fileSource)
{
    uStackFrame __("Fuse.Controls.Native.Android.TypefaceCache", "GetTypefaceFromFileSource(Uno.UX.FileSource)");
    TypefaceCache_typeof()->Init();
    bool ret3;
    ::g::Fuse::Controls::Native::Android::Typeface* ret4;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(TypefaceCache::_typefaces()), uPtr(fileSource)->Name, &ret3), ret3))
        return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(TypefaceCache::_typefaces()), uPtr(fileSource)->Name, &ret4), ret4);

    ::g::Fuse::Controls::Native::Android::Typeface* typeface;

    if (uIs(fileSource, ::TYPES[38/*Fuse.Resources.SystemFileSource*/]))
        typeface = ::g::Fuse::Controls::Native::Android::Typeface::CreateFromFile(uPtr(fileSource)->Name);
    else 
    {
        uArray* data = uPtr(fileSource)->ReadAllBytes();
        uString* path = ::g::Uno::String::op_Addition2(::g::Uno::IO::Directory::GetUserDirectory(1), ::STRINGS[4/*"/tempFont"*/]);
        ::g::Uno::IO::File::WriteAllBytes(path, data);
        typeface = ::g::Fuse::Controls::Native::Android::Typeface::CreateFromFile(path);
        ::g::Uno::IO::File::Delete(path);
    }

    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(TypefaceCache::_typefaces()), uPtr(fileSource)->Name, typeface);
    return typeface;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/android/$.uno
// -----------------------------------------------------------------------

// public abstract extern class View :3082
// {
static void View_build(uType* type)
{
    ::STRINGS[2] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/android/$.uno");
    ::STRINGS[5] = uString::Const("set_Background");
    ::STRINGS[6] = uString::Const(" is missing parent view");
    ::TYPES[24] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[25] = ::g::Fuse::Drawing::StaticSolidColor_typeof();
    ::TYPES[39] = ::g::Fuse::Controls::Native::Android::IViewParent_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(View_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(View_type, interface1));
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::Native::Android::View, _handle), 0,
        ::g::Fuse::Controls::Native::Android::IViewParent_typeof(), offsetof(::g::Fuse::Controls::Native::Android::View, _parent), 0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Fuse::Controls::Native::Android::View, _rotation), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::Native::Android::View, _scale), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::Native::Android::View, _size), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::Native::Android::View, _translation), 0);
    type->Reflection.SetFunctions(12,
        new uFunction("set_Background", NULL, (void*)View__set_Background_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Brush_typeof()),
        new uFunction("BringToFront", NULL, (void*)View__BringToFront_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Dispose", NULL, NULL, offsetof(View_type, fp_Dispose), false, uVoid_typeof(), 0),
        new uFunction("get_Handle", NULL, (void*)View__get_Handle_fn, 0, false, ::g::Java::Object_typeof(), 0),
        new uFunction("Hide", NULL, (void*)View__Hide_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("set_IsEnabled", NULL, (void*)View__set_IsEnabled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("set_Opacity", NULL, (void*)View__set_Opacity_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("set_Position", NULL, (void*)View__set_Position_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("Show", NULL, (void*)View__Show_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Size", NULL, (void*)View__get_Size_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_Size", NULL, (void*)View__set_Size_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("set_Transform", NULL, (void*)View__set_Transform_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4x4_typeof()));
}

View_type* View_typeof()
{
    static uSStrong<View_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(View);
    options.TypeSize = sizeof(View_type);
    type = (View_type*)uClassType::New("Fuse.Controls.Native.Android.View", options);
    type->fp_build_ = View_build;
    type->fp_Dispose = View__Dispose_fn;
    type->fp_OnSizeChanged = View__OnSizeChanged_fn;
    type->interface0.fp_Show = (void(*)(uObject*))View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))View__Dispose_fn;
    return type;
}

// protected View(Java.Object handle) :3100
void View__ctor__fn(View* __this, ::g::Java::Object* handle)
{
    __this->ctor_(handle);
}

// public void set_Background(Fuse.Drawing.Brush value) :3139
void View__set_Background_fn(View* __this, ::g::Fuse::Drawing::Brush* value)
{
    __this->Background(value);
}

// public void BringToFront() :3120
void View__BringToFront_fn(View* __this)
{
    __this->BringToFront();
}

// private static void BringToFront(Java.Object handle) :3126
void View__BringToFront1_fn(::g::Java::Object* handle)
{
    View::BringToFront1(handle);
}

// public virtual void Dispose() :3105
void View__Dispose_fn(View* __this)
{
}

// public Java.Object get_Handle() :3084
void View__get_Handle_fn(View* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->Handle();
}

// public void Hide() :3115
void View__Hide_fn(View* __this)
{
    __this->Hide();
}

// public void set_IsEnabled(bool value) :3229
void View__set_IsEnabled_fn(View* __this, bool* value)
{
    __this->IsEnabled(*value);
}

// protected virtual void OnSizeChanged() :3220
void View__OnSizeChanged_fn(View* __this)
{
}

// public void set_Opacity(float value) :3224
void View__set_Opacity_fn(View* __this, float* value)
{
    __this->Opacity(*value);
}

// internal Fuse.Controls.Native.Android.IViewParent get_Parent() :3089
void View__get_Parent_fn(View* __this, uObject** __retval)
{
    *__retval = __this->Parent();
}

// internal void set_Parent(Fuse.Controls.Native.Android.IViewParent value) :3090
void View__set_Parent_fn(View* __this, uObject* value)
{
    __this->Parent(value);
}

// public void set_Position(float2 value) :3204
void View__set_Position_fn(View* __this, ::g::Uno::Float2* value)
{
    __this->Position(*value);
}

// private static void SetBackground(Java.Object handle, int argb) :3287
void View__SetBackground_fn(::g::Java::Object* handle, int* argb)
{
    View::SetBackground(handle, *argb);
}

// private static void SetEnabled(Java.Object handle, bool value) :3239
void View__SetEnabled_fn(::g::Java::Object* handle, bool* value)
{
    View::SetEnabled(handle, *value);
}

// private static void SetOpacity(Java.Object handle, float value) :3233
void View__SetOpacity_fn(::g::Java::Object* handle, float* value)
{
    View::SetOpacity(handle, *value);
}

// private static void SetPivotXY(Java.Object handle, float x, float y) :3271
void View__SetPivotXY_fn(::g::Java::Object* handle, float* x, float* y)
{
    View::SetPivotXY(handle, *x, *y);
}

// private static void SetRotation(Java.Object handle, float value) :3253
void View__SetRotation_fn(::g::Java::Object* handle, float* value)
{
    View::SetRotation(handle, *value);
}

// private static void SetRotationX(Java.Object handle, float value) :3259
void View__SetRotationX_fn(::g::Java::Object* handle, float* value)
{
    View::SetRotationX(handle, *value);
}

// private static void SetRotationY(Java.Object handle, float value) :3265
void View__SetRotationY_fn(::g::Java::Object* handle, float* value)
{
    View::SetRotationY(handle, *value);
}

// private static void SetScaleXY(Java.Object handle, float x, float y) :3279
void View__SetScaleXY_fn(::g::Java::Object* handle, float* x, float* y)
{
    View::SetScaleXY(handle, *x, *y);
}

// private static void SetTranslation(Java.Object handle, float x, float y) :3245
void View__SetTranslation_fn(::g::Java::Object* handle, float* x, float* y)
{
    View::SetTranslation(handle, *x, *y);
}

// private static void SetVisible(Java.Object handle, bool isVisible) :3132
void View__SetVisible_fn(::g::Java::Object* handle, bool* isVisible)
{
    View::SetVisible(handle, *isVisible);
}

// public void Show() :3110
void View__Show_fn(View* __this)
{
    __this->Show();
}

// public float2 get_Size() :3210
void View__get_Size_fn(View* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// public void set_Size(float2 value) :3211
void View__set_Size_fn(View* __this, ::g::Uno::Float2* value)
{
    __this->Size(*value);
}

// public void set_Transform(float4x4 value) :3163
void View__set_Transform_fn(View* __this, ::g::Uno::Float4x4* value)
{
    __this->Transform(*value);
}

// protected View(Java.Object handle) [instance] :3100
void View::ctor_(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.View", ".ctor(Java.Object)");
    _handle = handle;
}

// public void set_Background(Fuse.Drawing.Brush value) [instance] :3139
void View::Background(::g::Fuse::Drawing::Brush* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "set_Background(Fuse.Drawing.Brush)");
    ::g::Uno::Float4 c = ::g::Uno::Float4__New1(0.0f);

    if (value != NULL)
    {
        ::g::Fuse::Drawing::SolidColor* sc = uAs< ::g::Fuse::Drawing::SolidColor*>(value, ::TYPES[24/*Fuse.Drawing.SolidColor*/]);

        if (sc != NULL)
            c = uPtr(sc)->Color();

        ::g::Fuse::Drawing::StaticSolidColor* ssc = uAs< ::g::Fuse::Drawing::StaticSolidColor*>(value, ::TYPES[25/*Fuse.Drawing.StaticSolidColor*/]);

        if (ssc != NULL)
            c = uPtr(ssc)->Color();

        if ((sc == NULL) && (ssc == NULL))
            ::g::Fuse::Diagnostics::Unsupported(::g::Uno::Object::ToString(this), value, ::STRINGS[2/*"/usr/local/...*/], 3152, ::STRINGS[5/*"set_Backgro...*/]);
    }

    View::SetBackground(Handle(), ::g::Fuse::Controls::Native::Android::Helpers::EncodeColor(c));
}

// public void BringToFront() [instance] :3120
void View::BringToFront()
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "BringToFront()");
    View::BringToFront1(Handle());
}

// public Java.Object get_Handle() [instance] :3084
::g::Java::Object* View::Handle()
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "get_Handle()");
    return _handle;
}

// public void Hide() [instance] :3115
void View::Hide()
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "Hide()");
    View::SetVisible(Handle(), false);
}

// public void set_IsEnabled(bool value) [instance] :3229
void View::IsEnabled(bool value)
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "set_IsEnabled(bool)");
    View::SetEnabled(Handle(), value);
}

// public void set_Opacity(float value) [instance] :3224
void View::Opacity(float value)
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "set_Opacity(float)");
    View::SetOpacity(Handle(), value);
}

// internal Fuse.Controls.Native.Android.IViewParent get_Parent() [instance] :3089
uObject* View::Parent()
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "get_Parent()");
    return _parent;
}

// internal void set_Parent(Fuse.Controls.Native.Android.IViewParent value) [instance] :3090
void View::Parent(uObject* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "set_Parent(Fuse.Controls.Native.Android.IViewParent)");
    _parent = value;

    if (_parent != NULL)
        ::g::Fuse::Controls::Native::Android::IViewParent::SetChildSize(uInterface(uPtr(_parent), ::TYPES[39/*Fuse.Controls.Native.Android.IViewParent*/]), this, _size);
}

// public void set_Position(float2 value) [instance] :3204
void View::Position(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "set_Position(float2)");
    View::SetTranslation(Handle(), value.X, value.Y);
}

// public void Show() [instance] :3110
void View::Show()
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "Show()");
    View::SetVisible(Handle(), true);
}

// public float2 get_Size() [instance] :3210
::g::Uno::Float2 View::Size()
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "get_Size()");
    return _size;
}

// public void set_Size(float2 value) [instance] :3211
void View::Size(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "set_Size(float2)");
    _size = value;

    if (Parent() != NULL)
        ::g::Fuse::Controls::Native::Android::IViewParent::SetChildSize(uInterface(uPtr(Parent()), ::TYPES[39/*Fuse.Controls.Native.Android.IViewParent*/]), this, value);

    OnSizeChanged();
}

// public void set_Transform(float4x4 value) [instance] :3163
void View::Transform(::g::Uno::Float4x4 value)
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "set_Transform(float4x4)");
    ::g::Uno::Float4x4 t = value;
    ::g::Uno::Float3 scale;
    ::g::Uno::Float4 rotation;
    ::g::Uno::Float3 translation;
    ::g::Uno::Matrix::Decompose(t, &scale, &rotation, &translation);

    if (::g::Uno::Float2__op_Inequality(::g::Uno::Float2__New2(scale.X, scale.Y), _scale))
    {
        View::SetPivotXY(Handle(), 0.0f, 0.0f);
        View::SetScaleXY(Handle(), scale.X, scale.Y);
        _scale = ::g::Uno::Float2__New2(scale.X, scale.Y);
    }

    ::g::Uno::Float3 ind1 = ::g::Uno::Quaternion::ToEulerAngleDegrees(rotation);
    ::g::Uno::Float3 r = ::g::Uno::Float3__New2(ind1.X, ind1.Y, ind1.Z);

    if (::g::Uno::Float3__op_Inequality(r, _rotation))
    {
        View::SetPivotXY(Handle(), 0.0f, 0.0f);
        View::SetRotation(Handle(), r.Z);
        View::SetRotationX(Handle(), r.X);
        View::SetRotationY(Handle(), r.Y);
        _rotation = r;
    }

    ::g::Uno::Float2 translationXY = ::g::Uno::Float2__New2(translation.X, translation.Y);

    if (::g::Uno::Vector::Distance(translationXY, _translation) > 0.1f)
    {
        Position(translationXY);
        _translation = translationXY;
    }

    if (Parent() == NULL)
        ::g::Uno::Diagnostics::Debug::Log5(::g::Uno::String::op_Addition(this, ::STRINGS[6/*" is missing...*/]), 1, ::STRINGS[2/*"/usr/local/...*/], 3197);
    else 
        ::g::Fuse::Controls::Native::Android::IViewParent::SetChildSize(uInterface(uPtr(Parent()), ::TYPES[39/*Fuse.Controls.Native.Android.IViewParent*/]), this, Size());
}

// private static void BringToFront(Java.Object handle) [static] :3126
void View::BringToFront1(::g::Java::Object* handle)
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "BringToFront(Java.Object)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "BringToFront1180", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetBackground(Java.Object handle, int argb) [static] :3287
void View::SetBackground(::g::Java::Object* handle, int argb)
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "SetBackground(Java.Object,int)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetBackground181", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uargb=argb;
        jint _argb = (jint)_uargb;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_argb);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetEnabled(Java.Object handle, bool value) [static] :3239
void View::SetEnabled(::g::Java::Object* handle, bool value)
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "SetEnabled(Java.Object,bool)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetEnabled182", "(Ljava/lang/Object;Z)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool _uvalue=value;
        jboolean _value = (jboolean)_uvalue;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetOpacity(Java.Object handle, float value) [static] :3233
void View::SetOpacity(::g::Java::Object* handle, float value)
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "SetOpacity(Java.Object,float)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetOpacity183", "(Ljava/lang/Object;F)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _uvalue=value;
        jfloat _value = (jfloat)_uvalue;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetPivotXY(Java.Object handle, float x, float y) [static] :3271
void View::SetPivotXY(::g::Java::Object* handle, float x, float y)
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "SetPivotXY(Java.Object,float,float)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetPivotXY184", "(Ljava/lang/Object;FF)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _ux=x;
        jfloat _x = (jfloat)_ux;
        float _uy=y;
        jfloat _y = (jfloat)_uy;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_x,_y);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetRotation(Java.Object handle, float value) [static] :3253
void View::SetRotation(::g::Java::Object* handle, float value)
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "SetRotation(Java.Object,float)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetRotation185", "(Ljava/lang/Object;F)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _uvalue=value;
        jfloat _value = (jfloat)_uvalue;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetRotationX(Java.Object handle, float value) [static] :3259
void View::SetRotationX(::g::Java::Object* handle, float value)
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "SetRotationX(Java.Object,float)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetRotationX186", "(Ljava/lang/Object;F)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _uvalue=value;
        jfloat _value = (jfloat)_uvalue;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetRotationY(Java.Object handle, float value) [static] :3265
void View::SetRotationY(::g::Java::Object* handle, float value)
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "SetRotationY(Java.Object,float)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetRotationY187", "(Ljava/lang/Object;F)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _uvalue=value;
        jfloat _value = (jfloat)_uvalue;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetScaleXY(Java.Object handle, float x, float y) [static] :3279
void View::SetScaleXY(::g::Java::Object* handle, float x, float y)
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "SetScaleXY(Java.Object,float,float)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetScaleXY188", "(Ljava/lang/Object;FF)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _ux=x;
        jfloat _x = (jfloat)_ux;
        float _uy=y;
        jfloat _y = (jfloat)_uy;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_x,_y);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetTranslation(Java.Object handle, float x, float y) [static] :3245
void View::SetTranslation(::g::Java::Object* handle, float x, float y)
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "SetTranslation(Java.Object,float,float)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetTranslation189", "(Ljava/lang/Object;FF)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _ux=x;
        jfloat _x = (jfloat)_ux;
        float _uy=y;
        jfloat _y = (jfloat)_uy;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_x,_y);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetVisible(Java.Object handle, bool isVisible) [static] :3132
void View::SetVisible(::g::Java::Object* handle, bool isVisible)
{
    uStackFrame __("Fuse.Controls.Native.Android.View", "SetVisible(Java.Object,bool)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetVisible190", "(Ljava/lang/Object;Z)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool _uisVisible=isVisible;
        jboolean _isVisible = (jboolean)_uisVisible;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_isVisible);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/android/$.uno
// -----------------------------------------------------------------------

// public sealed extern class ViewGroup :3310
// {
static void ViewGroup_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Func1_typeof()->MakeType(::g::Java::Object_typeof(), ::g::Uno::Bool_typeof());
    ::TYPES[5] = ::g::Fuse::Controls::Native::Android::View_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(ViewGroup_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ViewGroup_type, interface1),
        ::g::Fuse::Controls::Native::Android::IViewParent_typeof(), offsetof(ViewGroup_type, interface2),
        ::g::Fuse::Controls::Native::IViewGroup_typeof(), offsetof(ViewGroup_type, interface3));
    type->SetFields(6,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::Android::ViewGroup, _hitTestEnabled), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("Add", NULL, (void*)ViewGroup__Add_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::Native::Android::View_typeof()),
        new uFunction("Add", NULL, (void*)ViewGroup__Add1_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::Controls::Native::Android::View_typeof(), ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)ViewGroup__New1_fn, 0, true, ViewGroup_typeof(), 0),
        new uFunction("Remove", NULL, (void*)ViewGroup__Remove_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::Native::Android::View_typeof()));
}

ViewGroup_type* ViewGroup_typeof()
{
    static uSStrong<ViewGroup_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::View_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(ViewGroup);
    options.TypeSize = sizeof(ViewGroup_type);
    type = (ViewGroup_type*)uClassType::New("Fuse.Controls.Native.Android.ViewGroup", options);
    type->fp_build_ = ViewGroup_build;
    type->fp_ctor_ = (void*)ViewGroup__New1_fn;
    type->interface3.fp_Add = (void(*)(uObject*, uObject*))ViewGroup__FuseControlsNativeIViewGroupAdd_fn;
    type->interface3.fp_Add1 = (void(*)(uObject*, uObject*, int*))ViewGroup__FuseControlsNativeIViewGroupAdd1_fn;
    type->interface3.fp_Remove = (void(*)(uObject*, uObject*))ViewGroup__FuseControlsNativeIViewGroupRemove_fn;
    type->interface2.fp_SetChildSize = (void(*)(uObject*, ::g::Fuse::Controls::Native::Android::View*, ::g::Uno::Float2*))ViewGroup__FuseControlsNativeAndroidIViewParentSetChildSize_fn;
    type->interface3.fp_set_HitTestEnabled = (void(*)(uObject*, bool*))ViewGroup__FuseControlsNativeIViewGroupset_HitTestEnabled_fn;
    type->interface3.fp_set_ClipToBounds = (void(*)(uObject*, bool*))ViewGroup__FuseControlsNativeIViewGroupset_ClipToBounds_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::Android::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Dispose_fn;
    return type;
}

// public ViewGroup() :3313
void ViewGroup__ctor_1_fn(ViewGroup* __this)
{
    __this->ctor_1();
}

// public void Add(Fuse.Controls.Native.Android.View child) :3369
void ViewGroup__Add_fn(ViewGroup* __this, ::g::Fuse::Controls::Native::Android::View* child)
{
    __this->Add(child);
}

// public void Add(Fuse.Controls.Native.Android.View child, int index) :3375
void ViewGroup__Add1_fn(ViewGroup* __this, ::g::Fuse::Controls::Native::Android::View* child, int* index)
{
    __this->Add1(child, *index);
}

// private static void AddView(Java.Object parentHandle, Java.Object childHandle) :3408
void ViewGroup__AddView_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    ViewGroup::AddView(parentHandle, childHandle);
}

// private static void AddView(Java.Object parentHandle, Java.Object childHandle, int index) :3416
void ViewGroup__AddView1_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle, int* index)
{
    ViewGroup::AddView1(parentHandle, childHandle, *index);
}

// private static Java.Object Create() :3334
void ViewGroup__Create_fn(::g::Java::Object** __retval)
{
    *__retval = ViewGroup::Create();
}

// private void Fuse.Controls.Native.Android.IViewParent.SetChildSize(Fuse.Controls.Native.Android.View view, float2 size) :3387
void ViewGroup__FuseControlsNativeAndroidIViewParentSetChildSize_fn(ViewGroup* __this, ::g::Fuse::Controls::Native::Android::View* view, ::g::Uno::Float2* size)
{
    uStackFrame __("Fuse.Controls.Native.Android.ViewGroup", "Fuse.Controls.Native.Android.IViewParent.SetChildSize(Fuse.Controls.Native.Android.View,float2)");
    ::g::Uno::Float2 size_ = *size;
    ViewGroup::SetChildSize(uPtr(view)->Handle(), (int)size_.X, (int)size_.Y);
}

// private void Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView child) :3354
void ViewGroup__FuseControlsNativeIViewGroupAdd_fn(ViewGroup* __this, uObject* child)
{
    uStackFrame __("Fuse.Controls.Native.Android.ViewGroup", "Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView)");
    __this->Add(uCast< ::g::Fuse::Controls::Native::Android::View*>(child, ::TYPES[5/*Fuse.Controls.Native.Android.View*/]));
}

// private void Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView child, int index) :3359
void ViewGroup__FuseControlsNativeIViewGroupAdd1_fn(ViewGroup* __this, uObject* child, int* index)
{
    uStackFrame __("Fuse.Controls.Native.Android.ViewGroup", "Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView,int)");
    int index_ = *index;
    __this->Add1(uCast< ::g::Fuse::Controls::Native::Android::View*>(child, ::TYPES[5/*Fuse.Controls.Native.Android.View*/]), index_);
}

// private void Fuse.Controls.Native.IViewGroup.set_ClipToBounds(bool value) :3351
void ViewGroup__FuseControlsNativeIViewGroupset_ClipToBounds_fn(ViewGroup* __this, bool* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.ViewGroup", "Fuse.Controls.Native.IViewGroup.set_ClipToBounds(bool)");
    bool value_ = *value;
    ViewGroup::SetClipToBounds(__this->Handle(), value_);
}

// private void Fuse.Controls.Native.IViewGroup.set_HitTestEnabled(bool value) :3346
void ViewGroup__FuseControlsNativeIViewGroupset_HitTestEnabled_fn(ViewGroup* __this, bool* value)
{
    uStackFrame __("Fuse.Controls.Native.Android.ViewGroup", "Fuse.Controls.Native.IViewGroup.set_HitTestEnabled(bool)");
    bool value_ = *value;
    __this->_hitTestEnabled = value_;
}

// private void Fuse.Controls.Native.IViewGroup.Remove(Fuse.Controls.Native.IView child) :3364
void ViewGroup__FuseControlsNativeIViewGroupRemove_fn(ViewGroup* __this, uObject* child)
{
    uStackFrame __("Fuse.Controls.Native.Android.ViewGroup", "Fuse.Controls.Native.IViewGroup.Remove(Fuse.Controls.Native.IView)");
    __this->Remove(uCast< ::g::Fuse::Controls::Native::Android::View*>(child, ::TYPES[5/*Fuse.Controls.Native.Android.View*/]));
}

// internal static void InstallTouchInterceptCallback(Java.Object handle, Uno.Func<Java.Object, bool> callback) :3324
void ViewGroup__InstallTouchInterceptCallback_fn(::g::Java::Object* handle, uDelegate* callback)
{
    ViewGroup::InstallTouchInterceptCallback(handle, callback);
}

// private bool InterceptTouchEvent(Java.Object motionEvent) :3318
void ViewGroup__InterceptTouchEvent_fn(ViewGroup* __this, ::g::Java::Object* motionEvent, bool* __retval)
{
    *__retval = __this->InterceptTouchEvent(motionEvent);
}

// public ViewGroup New() :3313
void ViewGroup__New1_fn(ViewGroup** __retval)
{
    *__retval = ViewGroup::New1();
}

// public void Remove(Fuse.Controls.Native.Android.View child) :3381
void ViewGroup__Remove_fn(ViewGroup* __this, ::g::Fuse::Controls::Native::Android::View* child)
{
    __this->Remove(child);
}

// private static void RemoveView(Java.Object parentHandle, Java.Object childHandle) :3424
void ViewGroup__RemoveView_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    ViewGroup::RemoveView(parentHandle, childHandle);
}

// private static void SetChildSize(Java.Object handle, int w, int h) :3393
void ViewGroup__SetChildSize_fn(::g::Java::Object* handle, int* w, int* h)
{
    ViewGroup::SetChildSize(handle, *w, *h);
}

// private static void SetClipToBounds(Java.Object handle, bool clipToBounds) :3400
void ViewGroup__SetClipToBounds_fn(::g::Java::Object* handle, bool* clipToBounds)
{
    ViewGroup::SetClipToBounds(handle, *clipToBounds);
}

// public ViewGroup() [instance] :3313
void ViewGroup::ctor_1()
{
    uStackFrame __("Fuse.Controls.Native.Android.ViewGroup", ".ctor()");
    _hitTestEnabled = true;
    ctor_(ViewGroup::Create());
    ViewGroup::InstallTouchInterceptCallback(Handle(), uDelegate::New(::TYPES[1/*Uno.Func<Java.Object, bool>*/], (void*)ViewGroup__InterceptTouchEvent_fn, this));
}

// public void Add(Fuse.Controls.Native.Android.View child) [instance] :3369
void ViewGroup::Add(::g::Fuse::Controls::Native::Android::View* child)
{
    uStackFrame __("Fuse.Controls.Native.Android.ViewGroup", "Add(Fuse.Controls.Native.Android.View)");
    uPtr(child)->Parent((uObject*)this);
    ViewGroup::AddView(Handle(), child->Handle());
}

// public void Add(Fuse.Controls.Native.Android.View child, int index) [instance] :3375
void ViewGroup::Add1(::g::Fuse::Controls::Native::Android::View* child, int index)
{
    uStackFrame __("Fuse.Controls.Native.Android.ViewGroup", "Add(Fuse.Controls.Native.Android.View,int)");
    uPtr(child)->Parent((uObject*)this);
    ViewGroup::AddView1(Handle(), child->Handle(), index);
}

// private bool InterceptTouchEvent(Java.Object motionEvent) [instance] :3318
bool ViewGroup::InterceptTouchEvent(::g::Java::Object* motionEvent)
{
    uStackFrame __("Fuse.Controls.Native.Android.ViewGroup", "InterceptTouchEvent(Java.Object)");
    return !_hitTestEnabled;
}

// public void Remove(Fuse.Controls.Native.Android.View child) [instance] :3381
void ViewGroup::Remove(::g::Fuse::Controls::Native::Android::View* child)
{
    uStackFrame __("Fuse.Controls.Native.Android.ViewGroup", "Remove(Fuse.Controls.Native.Android.View)");
    uPtr(child)->Parent(NULL);
    ViewGroup::RemoveView(Handle(), child->Handle());
}

// private static void AddView(Java.Object parentHandle, Java.Object childHandle) [static] :3408
void ViewGroup::AddView(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.ViewGroup", "AddView(Java.Object,Java.Object)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddView191", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uparentHandle=parentHandle;
        jobject _parentHandle = (_uparentHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uparentHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uchildHandle=childHandle;
        jobject _childHandle = (_uchildHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uchildHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_parentHandle,_childHandle);
        
        if (_parentHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_parentHandle); }
        if (_childHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_childHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void AddView(Java.Object parentHandle, Java.Object childHandle, int index) [static] :3416
void ViewGroup::AddView1(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle, int index)
{
    uStackFrame __("Fuse.Controls.Native.Android.ViewGroup", "AddView(Java.Object,Java.Object,int)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddView1192", "(Ljava/lang/Object;Ljava/lang/Object;I)V");
        ::g::Java::Object* _uparentHandle=parentHandle;
        jobject _parentHandle = (_uparentHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uparentHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uchildHandle=childHandle;
        jobject _childHandle = (_uchildHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uchildHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uindex=index;
        jint _index = (jint)_uindex;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_parentHandle,_childHandle,_index);
        
        if (_parentHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_parentHandle); }
        if (_childHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_childHandle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static Java.Object Create() [static] :3334
::g::Java::Object* ViewGroup::Create()
{
    uStackFrame __("Fuse.Controls.Native.Android.ViewGroup", "Create()");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create193", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// internal static void InstallTouchInterceptCallback(Java.Object handle, Uno.Func<Java.Object, bool> callback) [static] :3324
void ViewGroup::InstallTouchInterceptCallback(::g::Java::Object* handle, uDelegate* callback)
{
    uStackFrame __("Fuse.Controls.Native.Android.ViewGroup", "InstallTouchInterceptCallback(Java.Object,Uno.Func<Java.Object, bool>)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "InstallTouchInterceptCallback194", "(Ljava/lang/Object;Lcom/foreign/Uno/Func_Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uDelegate* _ucallback=callback;
        jobject _callback = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_ucallback, "com.foreign.Uno.Func_Object");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_callback);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_callback!=NULL) { U_JNIVAR->DeleteLocalRef(_callback); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public ViewGroup New() [static] :3313
ViewGroup* ViewGroup::New1()
{
    ViewGroup* obj1 = (ViewGroup*)uNew(ViewGroup_typeof());
    obj1->ctor_1();
    return obj1;
}

// private static void RemoveView(Java.Object parentHandle, Java.Object childHandle) [static] :3424
void ViewGroup::RemoveView(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle)
{
    uStackFrame __("Fuse.Controls.Native.Android.ViewGroup", "RemoveView(Java.Object,Java.Object)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "RemoveView195", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uparentHandle=parentHandle;
        jobject _parentHandle = (_uparentHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uparentHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uchildHandle=childHandle;
        jobject _childHandle = (_uchildHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uchildHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_parentHandle,_childHandle);
        
        if (_parentHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_parentHandle); }
        if (_childHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_childHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetChildSize(Java.Object handle, int w, int h) [static] :3393
void ViewGroup::SetChildSize(::g::Java::Object* handle, int w, int h)
{
    uStackFrame __("Fuse.Controls.Native.Android.ViewGroup", "SetChildSize(Java.Object,int,int)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetChildSize196", "(Ljava/lang/Object;II)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uw=w;
        jint _w = (jint)_uw;
        int _uh=h;
        jint _h = (jint)_uh;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_w,_h);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetClipToBounds(Java.Object handle, bool clipToBounds) [static] :3400
void ViewGroup::SetClipToBounds(::g::Java::Object* handle, bool clipToBounds)
{
    uStackFrame __("Fuse.Controls.Native.Android.ViewGroup", "SetClipToBounds(Java.Object,bool)");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetClipToBounds197", "(Ljava/lang/Object;Z)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool _uclipToBounds=clipToBounds;
        jboolean _clipToBounds = (jboolean)_uclipToBounds;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_clipToBounds);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::Android
