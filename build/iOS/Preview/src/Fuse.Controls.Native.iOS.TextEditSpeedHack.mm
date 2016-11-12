// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/ios/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.TextEditSpeedHack.h>
#include <Uno.Bool.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal static extern class TextEditSpeedHack :3148
// {
static void TextEditSpeedHack_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::Controls::Native::iOS::TextEditSpeedHack::_done_, uFieldFlagsStatic);
}

uClassType* TextEditSpeedHack_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.iOS.TextEditSpeedHack", options);
    type->fp_build_ = TextEditSpeedHack_build;
    return type;
}

// public static void Run() :3152
void TextEditSpeedHack__Run_fn()
{
    TextEditSpeedHack::Run();
}

// private static void RunInner() :3163
void TextEditSpeedHack__RunInner_fn()
{
    TextEditSpeedHack::RunInner();
}

bool TextEditSpeedHack::_done_;

// public static void Run() [static] :3152
void TextEditSpeedHack::Run()
{
    uStackFrame __("Fuse.Controls.Native.iOS.TextEditSpeedHack", "Run()");

    if (TextEditSpeedHack::_done_)
        return;

    TextEditSpeedHack::_done_ = true;
    TextEditSpeedHack::RunInner();
}

// private static void RunInner() [static] :3163
void TextEditSpeedHack::RunInner()
{
    uStackFrame __("Fuse.Controls.Native.iOS.TextEditSpeedHack", "RunInner()");
    @autoreleasepool
    {
        UITextField* lagFreeField = [[[UITextField alloc] init] autorelease];
        			  UIWindow* window = [[[UIApplication sharedApplication] delegate] window];
        			  [window addSubview:lagFreeField];
        			  [lagFreeField becomeFirstResponder];
        			  [lagFreeField resignFirstResponder];
        			  [lagFreeField removeFromSuperview];
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
