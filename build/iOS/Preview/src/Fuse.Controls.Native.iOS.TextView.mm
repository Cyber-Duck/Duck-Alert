// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/ios/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.FontCache.h>
#include <Fuse.Controls.Native.iOS.TextView.h>
#include <Fuse.Controls.Native.iOS.View.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextTruncation.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Font.h>
#include <Fuse.Internal.FontFaceDescriptor.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Bool.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>
#include <Uno.Float4.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class TextView :3186
// {
static void TextView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(TextView_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(TextView_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(TextView_type, interface2),
        ::g::Fuse::Controls::Native::ITextView_typeof(), offsetof(TextView_type, interface3));
    type->SetFields(5,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::TextView, _fontSize), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)TextView__New1_fn, 0, true, TextView_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)TextView__New2_fn, 0, true, TextView_typeof(), 1, ::g::ObjC::Object_typeof()));
}

TextView_type* TextView_typeof()
{
    static uSStrong<TextView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::LeafView_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(TextView);
    options.TypeSize = sizeof(TextView_type);
    type = (TextView_type*)uClassType::New("Fuse.Controls.Native.iOS.TextView", options);
    type->fp_build_ = TextView_build;
    type->fp_ctor_ = (void*)TextView__New1_fn;
    type->interface3.fp_set_Value = (void(*)(uObject*, uString*))TextView__FuseControlsNativeITextViewset_Value_fn;
    type->interface3.fp_set_MaxLength = (void(*)(uObject*, int*))TextView__FuseControlsNativeITextViewset_MaxLength_fn;
    type->interface3.fp_set_TextWrapping = (void(*)(uObject*, int*))TextView__FuseControlsNativeITextViewset_TextWrapping_fn;
    type->interface3.fp_set_LineSpacing = (void(*)(uObject*, float*))TextView__FuseControlsNativeITextViewset_LineSpacing_fn;
    type->interface3.fp_set_FontSize = (void(*)(uObject*, float*))TextView__FuseControlsNativeITextViewset_FontSize_fn;
    type->interface3.fp_set_Font = (void(*)(uObject*, ::g::Fuse::Font*))TextView__FuseControlsNativeITextViewset_Font_fn;
    type->interface3.fp_set_TextAlignment = (void(*)(uObject*, int*))TextView__FuseControlsNativeITextViewset_TextAlignment_fn;
    type->interface3.fp_set_TextColor = (void(*)(uObject*, ::g::Uno::Float4*))TextView__FuseControlsNativeITextViewset_TextColor_fn;
    type->interface3.fp_set_TextTruncation = (void(*)(uObject*, int*))TextView__FuseControlsNativeITextViewset_TextTruncation_fn;
    type->interface2.fp_Measure = (void(*)(uObject*, ::g::Fuse::LayoutParams*, float*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::iOS::LeafView__Measure_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::iOS::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::iOS::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::iOS::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::iOS::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::iOS::View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::iOS::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Dispose_fn;
    return type;
}

// public TextView() :3191
void TextView__ctor_2_fn(TextView* __this)
{
    __this->ctor_2();
}

// public TextView(ObjC.Object handle) :3189
void TextView__ctor_3_fn(TextView* __this, uObject* handle)
{
    __this->ctor_3(handle);
}

// private static ObjC.Object Create() :3194
void TextView__Create_fn(uObject** __retval)
{
    *__retval = TextView::Create();
}

// private void Fuse.Controls.Native.ITextView.set_Font(Fuse.Font value) :3227
void TextView__FuseControlsNativeITextViewset_Font_fn(TextView* __this, ::g::Fuse::Font* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.TextView", "Fuse.Controls.Native.ITextView.set_Font(Fuse.Font)");
    ::g::Fuse::Internal::FontFaceDescriptor* ret3;

    if (uPtr(uPtr(value)->Descriptors)->Count() > 0)
    {
        uObject* font = ::g::Fuse::Controls::Native::iOS::FontCache::Get((::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(value)->Descriptors), uCRef<int>(0), &ret3), ret3), __this->_fontSize);

        if (font != NULL)
            TextView::SetFont(__this->Handle(), font);
    }
}

// private void Fuse.Controls.Native.ITextView.set_FontSize(float value) :3222
void TextView__FuseControlsNativeITextViewset_FontSize_fn(TextView* __this, float* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.TextView", "Fuse.Controls.Native.ITextView.set_FontSize(float)");
    float value_ = *value;
    TextView::SetFontSize(__this->Handle(), __this->_fontSize = value_);
}

// private void Fuse.Controls.Native.ITextView.set_LineSpacing(float value) :3216
void TextView__FuseControlsNativeITextViewset_LineSpacing_fn(TextView* __this, float* value)
{
}

// private void Fuse.Controls.Native.ITextView.set_MaxLength(int value) :3206
void TextView__FuseControlsNativeITextViewset_MaxLength_fn(TextView* __this, int* value)
{
}

// private void Fuse.Controls.Native.ITextView.set_TextAlignment(Fuse.Controls.TextAlignment value) :3240
void TextView__FuseControlsNativeITextViewset_TextAlignment_fn(TextView* __this, int* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.TextView", "Fuse.Controls.Native.ITextView.set_TextAlignment(Fuse.Controls.TextAlignment)");
    int value_ = *value;

    switch (value_)
    {
        case 0:
        {
            TextView::SetTextAlignment(__this->Handle(), NSTextAlignmentLeft);
            break;
        }
        case 1:
        {
            TextView::SetTextAlignment(__this->Handle(), NSTextAlignmentCenter);
            break;
        }
        case 2:
        {
            TextView::SetTextAlignment(__this->Handle(), NSTextAlignmentRight);
            break;
        }
    }
}

// private void Fuse.Controls.Native.ITextView.set_TextColor(float4 value) :3253
void TextView__FuseControlsNativeITextViewset_TextColor_fn(TextView* __this, ::g::Uno::Float4* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.TextView", "Fuse.Controls.Native.ITextView.set_TextColor(float4)");
    ::g::Uno::Float4 value_ = *value;
    TextView::SetTextColor(__this->Handle(), value_.X, value_.Y, value_.Z, value_.W);
}

// private void Fuse.Controls.Native.ITextView.set_TextTruncation(Fuse.Controls.TextTruncation value) :3258
void TextView__FuseControlsNativeITextViewset_TextTruncation_fn(TextView* __this, int* value)
{
}

// private void Fuse.Controls.Native.ITextView.set_TextWrapping(Fuse.Controls.TextWrapping value) :3211
void TextView__FuseControlsNativeITextViewset_TextWrapping_fn(TextView* __this, int* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.TextView", "Fuse.Controls.Native.ITextView.set_TextWrapping(Fuse.Controls.TextWrapping)");
    int value_ = *value;
    TextView::SetTextWrapping(__this->Handle(), value_ == 1);
}

// private void Fuse.Controls.Native.ITextView.set_Value(string value) :3201
void TextView__FuseControlsNativeITextViewset_Value_fn(TextView* __this, uString* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.TextView", "Fuse.Controls.Native.ITextView.set_Value(string)");
    TextView::SetValue(__this->Handle(), value);
}

// public TextView New() :3191
void TextView__New1_fn(TextView** __retval)
{
    *__retval = TextView::New1();
}

// public TextView New(ObjC.Object handle) :3189
void TextView__New2_fn(uObject* handle, TextView** __retval)
{
    *__retval = TextView::New2(handle);
}

// private static void SetFont(ObjC.Object handle, ObjC.Object fontHandle) :3308
void TextView__SetFont_fn(uObject* handle, uObject* fontHandle)
{
    TextView::SetFont(handle, fontHandle);
}

// private static void SetFontSize(ObjC.Object handle, float fontSize) :3299
void TextView__SetFontSize_fn(uObject* handle, float* fontSize)
{
    TextView::SetFontSize(handle, *fontSize);
}

// private static void SetTextAlignment(ObjC.Object handle, int alignmnet) :3276
void TextView__SetTextAlignment_fn(uObject* handle, int* alignmnet)
{
    TextView::SetTextAlignment(handle, *alignmnet);
}

// private static void SetTextColor(ObjC.Object handle, float r, float g, float b, float a) :3269
void TextView__SetTextColor_fn(uObject* handle, float* r, float* g, float* b, float* a)
{
    TextView::SetTextColor(handle, *r, *g, *b, *a);
}

// private static void SetTextWrapping(ObjC.Object handle, bool wrap) :3283
void TextView__SetTextWrapping_fn(uObject* handle, bool* wrap)
{
    TextView::SetTextWrapping(handle, *wrap);
}

// private static void SetValue(ObjC.Object handle, string value) :3262
void TextView__SetValue_fn(uObject* handle, uString* value)
{
    TextView::SetValue(handle, value);
}

// public TextView() [instance] :3191
void TextView::ctor_2()
{
    uStackFrame __("Fuse.Controls.Native.iOS.TextView", ".ctor()");
    _fontSize = 12.0f;
    ctor_3(TextView::Create());
}

// public TextView(ObjC.Object handle) [instance] :3189
void TextView::ctor_3(uObject* handle)
{
    uStackFrame __("Fuse.Controls.Native.iOS.TextView", ".ctor(ObjC.Object)");
    _fontSize = 12.0f;
    ctor_1(handle);
}

// private static ObjC.Object Create() [static] :3194
uObject* TextView::Create()
{
    uStackFrame __("Fuse.Controls.Native.iOS.TextView", "Create()");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] () -> ::id
        {
            return [[::UILabel alloc] init];
        } ());
        
    }
    
}

// public TextView New() [static] :3191
TextView* TextView::New1()
{
    TextView* obj2 = (TextView*)uNew(TextView_typeof());
    obj2->ctor_2();
    return obj2;
}

// public TextView New(ObjC.Object handle) [static] :3189
TextView* TextView::New2(uObject* handle)
{
    TextView* obj1 = (TextView*)uNew(TextView_typeof());
    obj1->ctor_3(handle);
    return obj1;
}

// private static void SetFont(ObjC.Object handle, ObjC.Object fontHandle) [static] :3308
void TextView::SetFont(uObject* handle, uObject* fontHandle)
{
    uStackFrame __("Fuse.Controls.Native.iOS.TextView", "SetFont(ObjC.Object,ObjC.Object)");
    @autoreleasepool
    {
        [] (::id handle, ::id fontHandle) -> void
        {
            ::UILabel* label = (::UILabel*)handle;
            			::UIFont* font = (::UIFont*)fontHandle;
            			[label setFont: font];
        } (::g::ObjC::Helpers::GetHandle(handle), ::g::ObjC::Helpers::GetHandle(fontHandle));
        
    }
    
}

// private static void SetFontSize(ObjC.Object handle, float fontSize) [static] :3299
void TextView::SetFontSize(uObject* handle, float fontSize)
{
    uStackFrame __("Fuse.Controls.Native.iOS.TextView", "SetFontSize(ObjC.Object,float)");
    @autoreleasepool
    {
        [] (::id handle, float fontSize) -> void
        {
            ::UILabel* label = (::UILabel*)handle;
            			::UIFont* oldFont = [label font];
            			::UIFont* newFont = [::UIFont fontWithName: [oldFont fontName] size:(CGFloat)fontSize];
            			[label setFont: newFont];
        } (::g::ObjC::Helpers::GetHandle(handle), fontSize);
        
    }
    
}

// private static void SetTextAlignment(ObjC.Object handle, int alignmnet) [static] :3276
void TextView::SetTextAlignment(uObject* handle, int alignmnet)
{
    uStackFrame __("Fuse.Controls.Native.iOS.TextView", "SetTextAlignment(ObjC.Object,int)");
    @autoreleasepool
    {
        [] (::id handle, int alignmnet) -> void
        {
            ::UILabel* label = (::UILabel*)handle;
            			[label setTextAlignment: (NSTextAlignment)alignmnet ];
        } (::g::ObjC::Helpers::GetHandle(handle), alignmnet);
        
    }
    
}

// private static void SetTextColor(ObjC.Object handle, float r, float g, float b, float a) [static] :3269
void TextView::SetTextColor(uObject* handle, float r, float g, float b, float a)
{
    uStackFrame __("Fuse.Controls.Native.iOS.TextView", "SetTextColor(ObjC.Object,float,float,float,float)");
    @autoreleasepool
    {
        [] (::id handle, float r, float g, float b, float a) -> void
        {
            ::UILabel* label = (::UILabel*)handle;
            			[label setTextColor:[::UIColor colorWithRed:(CGFloat)r green:(CGFloat)g blue:(CGFloat)b alpha:(CGFloat)a]];
        } (::g::ObjC::Helpers::GetHandle(handle), r, g, b, a);
        
    }
    
}

// private static void SetTextWrapping(ObjC.Object handle, bool wrap) [static] :3283
void TextView::SetTextWrapping(uObject* handle, bool wrap)
{
    uStackFrame __("Fuse.Controls.Native.iOS.TextView", "SetTextWrapping(ObjC.Object,bool)");
    @autoreleasepool
    {
        [] (::id handle, bool wrap) -> void
        {
            ::UILabel* label = (::UILabel*)handle;
            			if (wrap)
            			{
            				[label setLineBreakMode:NSLineBreakByWordWrapping];
            				[label setNumberOfLines: 0];
            			}
            			else
            			{
            				[label setLineBreakMode:NSLineBreakByTruncatingTail];
            				[label setNumberOfLines: 1];
            			}
        } (::g::ObjC::Helpers::GetHandle(handle), wrap);
        
    }
    
}

// private static void SetValue(ObjC.Object handle, string value) [static] :3262
void TextView::SetValue(uObject* handle, uString* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.TextView", "SetValue(ObjC.Object,string)");
    @autoreleasepool
    {
        [] (::id handle, ::NSString* value) -> void
        {
            ::UILabel* label = (::UILabel*)handle;
            			[label setText:value];
        } (::g::ObjC::Helpers::GetHandle(handle), ::uObjC::NativeString(value));
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
