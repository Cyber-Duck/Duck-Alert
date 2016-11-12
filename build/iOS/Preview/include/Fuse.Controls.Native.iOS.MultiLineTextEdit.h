// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/ios/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.ILeafView.h>
#include <Fuse.Controls.Native.iOS.INativeFocusListener.h>
#include <Fuse.Controls.Native.iOS.LeafView.h>
#include <Fuse.Controls.Native.ITextEdit.h>
#include <Fuse.Controls.Native.ITextView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct MultiLineTextEdit;}}}}}
namespace g{namespace Fuse{namespace Internal{struct FontFaceDescriptor;}}}
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class MultiLineTextEdit :2787
// {
struct MultiLineTextEdit_type : ::g::Fuse::Controls::Native::iOS::LeafView_type
{
    ::g::Fuse::Controls::Native::ITextEdit interface3;
    ::g::Fuse::Controls::Native::iOS::INativeFocusListener interface4;
    ::g::Fuse::Controls::Native::ITextView interface5;
};

MultiLineTextEdit_type* MultiLineTextEdit_typeof();
void MultiLineTextEdit__ctor_2_fn(MultiLineTextEdit* __this, uObject* host);
void MultiLineTextEdit__Create_fn(uObject** __retval);
void MultiLineTextEdit__CreateDelegate_fn(uObject* handle, uDelegate* callback, uObject** __retval);
void MultiLineTextEdit__Dispose_fn(MultiLineTextEdit* __this);
void MultiLineTextEdit__FuseControlsNativeiOSINativeFocusListenerFocusGained_fn(MultiLineTextEdit* __this);
void MultiLineTextEdit__FuseControlsNativeiOSINativeFocusListenerFocusLost_fn(MultiLineTextEdit* __this);
void MultiLineTextEdit__FuseControlsNativeITextEditset_ActionStyle_fn(MultiLineTextEdit* __this, int* value);
void MultiLineTextEdit__FuseControlsNativeITextEditset_AutoCapitalizationHint_fn(MultiLineTextEdit* __this, int* value);
void MultiLineTextEdit__FuseControlsNativeITextEditset_AutoCorrectHint_fn(MultiLineTextEdit* __this, int* value);
void MultiLineTextEdit__FuseControlsNativeITextEditset_CaretColor_fn(MultiLineTextEdit* __this, ::g::Uno::Float4* value);
void MultiLineTextEdit__FuseControlsNativeITextEditFocusGained_fn(MultiLineTextEdit* __this);
void MultiLineTextEdit__FuseControlsNativeITextEditFocusLost_fn(MultiLineTextEdit* __this);
void MultiLineTextEdit__FuseControlsNativeITextEditset_InputHint_fn(MultiLineTextEdit* __this, int* value);
void MultiLineTextEdit__FuseControlsNativeITextEditset_IsMultiline_fn(MultiLineTextEdit* __this, bool* value);
void MultiLineTextEdit__FuseControlsNativeITextEditset_IsPassword_fn(MultiLineTextEdit* __this, bool* value);
void MultiLineTextEdit__FuseControlsNativeITextEditset_IsReadOnly_fn(MultiLineTextEdit* __this, bool* value);
void MultiLineTextEdit__FuseControlsNativeITextEditset_PlaceholderColor_fn(MultiLineTextEdit* __this, ::g::Uno::Float4* value);
void MultiLineTextEdit__FuseControlsNativeITextEditset_PlaceholderText_fn(MultiLineTextEdit* __this, uString* value);
void MultiLineTextEdit__FuseControlsNativeITextEditset_SelectionColor_fn(MultiLineTextEdit* __this, ::g::Uno::Float4* value);
void MultiLineTextEdit__FuseControlsNativeITextViewset_Font_fn(MultiLineTextEdit* __this, ::g::Fuse::Font* value);
void MultiLineTextEdit__FuseControlsNativeITextViewset_FontSize_fn(MultiLineTextEdit* __this, float* value);
void MultiLineTextEdit__FuseControlsNativeITextViewset_LineSpacing_fn(MultiLineTextEdit* __this, float* value);
void MultiLineTextEdit__FuseControlsNativeITextViewset_MaxLength_fn(MultiLineTextEdit* __this, int* value);
void MultiLineTextEdit__FuseControlsNativeITextViewset_TextAlignment_fn(MultiLineTextEdit* __this, int* value);
void MultiLineTextEdit__FuseControlsNativeITextViewset_TextColor_fn(MultiLineTextEdit* __this, ::g::Uno::Float4* value);
void MultiLineTextEdit__FuseControlsNativeITextViewset_TextTruncation_fn(MultiLineTextEdit* __this, int* value);
void MultiLineTextEdit__FuseControlsNativeITextViewset_TextWrapping_fn(MultiLineTextEdit* __this, int* value);
void MultiLineTextEdit__FuseControlsNativeITextViewset_Value_fn(MultiLineTextEdit* __this, uString* value);
void MultiLineTextEdit__GetValue_fn(uObject* handle, uString** __retval);
void MultiLineTextEdit__New1_fn(uObject* host, MultiLineTextEdit** __retval);
void MultiLineTextEdit__OnTextChanged_fn(MultiLineTextEdit* __this, uObject* uitextView);
void MultiLineTextEdit__SetActionStyle_fn(uObject* handle, int* style);
void MultiLineTextEdit__SetAutoCapitalizationHint_fn(uObject* handle, int* hint);
void MultiLineTextEdit__SetAutoCorrectHint_fn(uObject* handle, int* hint);
void MultiLineTextEdit__SetCaretColor_fn(uObject* handle, float* r, float* g, float* b, float* a);
void MultiLineTextEdit__SetFont_fn(uObject* handle, uObject* fontHandle);
void MultiLineTextEdit__SetInputHint_fn(uObject* handle, int* hint);
void MultiLineTextEdit__SetIsMultiline_fn(uObject* handle, bool* isMultiline);
void MultiLineTextEdit__SetIsPassword_fn(uObject* handle, bool* isPassword);
void MultiLineTextEdit__SetIsReadOnly_fn(uObject* handle, bool* isReadOnly);
void MultiLineTextEdit__SetMaxLength_fn(uObject* delegateHandle, int* maxLength);
void MultiLineTextEdit__SetTextAlignment_fn(uObject* handle, int* alignmnet);
void MultiLineTextEdit__SetTextColor_fn(uObject* handle, float* r, float* g, float* b, float* a);
void MultiLineTextEdit__SetValue_fn(uObject* handle, uString* value);

struct MultiLineTextEdit : ::g::Fuse::Controls::Native::iOS::LeafView
{
    uStrong<uObject*> _delegate;
    uStrong< ::g::Fuse::Internal::FontFaceDescriptor*> _descriptor;
    float _fontSize;
    uStrong<uObject*> _host;

    void ctor_2(uObject* host);
    void OnTextChanged(uObject* uitextView);
    static uObject* Create();
    static uObject* CreateDelegate(uObject* handle, uDelegate* callback);
    static uString* GetValue(uObject* handle);
    static MultiLineTextEdit* New1(uObject* host);
    static void SetActionStyle(uObject* handle, int style);
    static void SetAutoCapitalizationHint(uObject* handle, int hint);
    static void SetAutoCorrectHint(uObject* handle, int hint);
    static void SetCaretColor(uObject* handle, float r, float g, float b, float a);
    static void SetFont(uObject* handle, uObject* fontHandle);
    static void SetInputHint(uObject* handle, int hint);
    static void SetIsMultiline(uObject* handle, bool isMultiline);
    static void SetIsPassword(uObject* handle, bool isPassword);
    static void SetIsReadOnly(uObject* handle, bool isReadOnly);
    static void SetMaxLength(uObject* delegateHandle, int maxLength);
    static void SetTextAlignment(uObject* handle, int alignmnet);
    static void SetTextColor(uObject* handle, float r, float g, float b, float a);
    static void SetValue(uObject* handle, uString* value);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
