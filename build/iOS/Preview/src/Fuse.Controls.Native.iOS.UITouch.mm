// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/ios/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.UITouch.h>
#include <Fuse.Controls.Native.iOS.UITouch.TouchPhase.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.IntPtr.h>
#include <uObjC.Foreign.h>
#include <Uno.Float2.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class UITouch :1138
// {
static void UITouch_build(uType* type)
{
    type->SetFields(0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::UITouch, _handle), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("LocationInView", NULL, (void*)UITouch__LocationInView_fn, 0, false, ::g::Uno::Float2_typeof(), 1, ::g::ObjC::Object_typeof()),
        new uFunction(".ctor", NULL, (void*)UITouch__New1_fn, 0, true, UITouch_typeof(), 1, ::g::ObjC::Object_typeof()),
        new uFunction("get_Phase", NULL, (void*)UITouch__get_Phase_fn, 0, false, UITouch__TouchPhase_typeof(), 0),
        new uFunction("get_Timestamp", NULL, (void*)UITouch__get_Timestamp_fn, 0, false, ::g::Uno::Double_typeof(), 0));
}

uType* UITouch_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(UITouch);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.UITouch", options);
    type->fp_build_ = UITouch_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))UITouch__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))UITouch__GetHashCode_fn;
    return type;
}

// public UITouch(ObjC.Object handle) :1151
void UITouch__ctor__fn(UITouch* __this, uObject* handle)
{
    __this->ctor_(handle);
}

// private static bool Compare(ObjC.Object handle1, ObjC.Object handle2) :1239
void UITouch__Compare_fn(uObject* handle1, uObject* handle2, bool* __retval)
{
    *__retval = UITouch::Compare(handle1, handle2);
}

// public override sealed bool Equals(object obj) :1176
void UITouch__Equals_fn(UITouch* __this, uObject* obj, bool* __retval)
{
    uStackFrame __("Fuse.Controls.Native.iOS.UITouch", "Equals(object)");
    return *__retval = uIs(obj, UITouch_typeof()) ? UITouch::Compare(__this->_handle, uPtr(uCast<UITouch*>(obj, UITouch_typeof()))->_handle) : false, void();
}

// public override sealed int GetHashCode() :1183
void UITouch__GetHashCode_fn(UITouch* __this, int* __retval)
{
    uStackFrame __("Fuse.Controls.Native.iOS.UITouch", "GetHashCode()");
    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(__this->_handle)), void();
}

// private static double GetTimestamp(ObjC.Object handle) :1231
void UITouch__GetTimestamp_fn(uObject* handle, double* __retval)
{
    *__retval = UITouch::GetTimestamp(handle);
}

// private static int GetTouchPhase(ObjC.Object handle) :1190
void UITouch__GetTouchPhase_fn(uObject* handle, int* __retval)
{
    *__retval = UITouch::GetTouchPhase(handle);
}

// public float2 LocationInView(ObjC.Object view) :1156
void UITouch__LocationInView_fn(UITouch* __this, uObject* view, ::g::Uno::Float2* __retval)
{
    *__retval = __this->LocationInView(view);
}

// private static void LocationInView(ObjC.Object handle, ObjC.Object viewHandle, Uno.IntPtr x, Uno.IntPtr y) :1220
void UITouch__LocationInView1_fn(uObject* handle, uObject* viewHandle, void** x, void** y)
{
    UITouch::LocationInView1(handle, viewHandle, *x, *y);
}

// public UITouch New(ObjC.Object handle) :1151
void UITouch__New1_fn(uObject* handle, UITouch** __retval)
{
    *__retval = UITouch::New1(handle);
}

// public Fuse.Controls.Native.iOS.UITouch.TouchPhase get_Phase() :1173
void UITouch__get_Phase_fn(UITouch* __this, int* __retval)
{
    *__retval = __this->Phase();
}

// public double get_Timestamp() :1168
void UITouch__get_Timestamp_fn(UITouch* __this, double* __retval)
{
    *__retval = __this->Timestamp();
}

// public UITouch(ObjC.Object handle) [instance] :1151
void UITouch::ctor_(uObject* handle)
{
    uStackFrame __("Fuse.Controls.Native.iOS.UITouch", ".ctor(ObjC.Object)");
    _handle = handle;
}

// public float2 LocationInView(ObjC.Object view) [instance] :1156
::g::Uno::Float2 UITouch::LocationInView(uObject* view)
{
    uStackFrame __("Fuse.Controls.Native.iOS.UITouch", "LocationInView(ObjC.Object)");
    float x = 0.0f;
    float y = 0.0f;
    UITouch::LocationInView1(_handle, view, &x, &y);
    return ::g::Uno::Float2__New2(x, y);
}

// public Fuse.Controls.Native.iOS.UITouch.TouchPhase get_Phase() [instance] :1173
int UITouch::Phase()
{
    uStackFrame __("Fuse.Controls.Native.iOS.UITouch", "get_Phase()");
    return UITouch::GetTouchPhase(_handle);
}

// public double get_Timestamp() [instance] :1168
double UITouch::Timestamp()
{
    uStackFrame __("Fuse.Controls.Native.iOS.UITouch", "get_Timestamp()");
    return UITouch::GetTimestamp(_handle);
}

// private static bool Compare(ObjC.Object handle1, ObjC.Object handle2) [static] :1239
bool UITouch::Compare(uObject* handle1, uObject* handle2)
{
    uStackFrame __("Fuse.Controls.Native.iOS.UITouch", "Compare(ObjC.Object,ObjC.Object)");
    @autoreleasepool
    {
        return [] (::id handle1, ::id handle2) -> bool
        {
            ::UITouch* touch1 = (::UITouch*)handle1;
            			::UITouch* touch2 = (::UITouch*)handle2;
            			return touch1 == touch2;
        } (::g::ObjC::Helpers::GetHandle(handle1), ::g::ObjC::Helpers::GetHandle(handle2));
        
    }
    
}

// private static double GetTimestamp(ObjC.Object handle) [static] :1231
double UITouch::GetTimestamp(uObject* handle)
{
    uStackFrame __("Fuse.Controls.Native.iOS.UITouch", "GetTimestamp(ObjC.Object)");
    @autoreleasepool
    {
        return [] (::id handle) -> double
        {
            ::UITouch* touch = (::UITouch*)handle;
            			return [touch timestamp];
        } (::g::ObjC::Helpers::GetHandle(handle));
        
    }
    
}

// private static int GetTouchPhase(ObjC.Object handle) [static] :1190
int UITouch::GetTouchPhase(uObject* handle)
{
    uStackFrame __("Fuse.Controls.Native.iOS.UITouch", "GetTouchPhase(ObjC.Object)");
    @autoreleasepool
    {
        return [] (::id handle) -> int
        {
            ::UITouch* touch = (::UITouch*)handle;
            			UITouchPhase phase = [touch phase];
            			// :S
            			switch (phase)
            			{
            				case UITouchPhaseBegan:
            					return 0;
            					break;
            				case UITouchPhaseMoved:
            					return 1;
            					break;
            				case UITouchPhaseStationary:
            					return 2;
            					break;
            				case UITouchPhaseEnded:
            					return 3;
            					break;
            				case UITouchPhaseCancelled:
            					return 4;
            					break;
            				default:
            					[NSException raise:@"Unknown touchphase %i" format:@"Touch phase of %d is invalid", phase];
            					break;
            			}
        } (::g::ObjC::Helpers::GetHandle(handle));
        
    }
    
}

// private static void LocationInView(ObjC.Object handle, ObjC.Object viewHandle, Uno.IntPtr x, Uno.IntPtr y) [static] :1220
void UITouch::LocationInView1(uObject* handle, uObject* viewHandle, void* x, void* y)
{
    uStackFrame __("Fuse.Controls.Native.iOS.UITouch", "LocationInView(ObjC.Object,ObjC.Object,Uno.IntPtr,Uno.IntPtr)");
    @autoreleasepool
    {
        [] (::id handle, ::id viewHandle, void* x, void* y) -> void
        {
            ::UITouch* touch = (::UITouch*)handle;
            			::UIView* view = (::UIView*)viewHandle;
            			CGPoint loc = [touch locationInView:view];
            			*((float*)x) = (float)loc.x;
            			*((float*)y) = (float)loc.y;
        } (::g::ObjC::Helpers::GetHandle(handle), ::g::ObjC::Helpers::GetHandle(viewHandle), x, y);
        
    }
    
}

// public UITouch New(ObjC.Object handle) [static] :1151
UITouch* UITouch::New1(uObject* handle)
{
    UITouch* obj1 = (UITouch*)uNew(UITouch_typeof());
    obj1->ctor_(handle);
    return obj1;
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
