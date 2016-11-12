// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/ios/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.UIEvent.h>
#include <Fuse.Controls.Native.iOS.UITouch.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Bool.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <uObjC.Foreign.h>
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class UIEvent :1247
// {
static void UIEvent_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::Native::iOS::UITouch_typeof()->Array();
    type->SetFields(0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::UIEvent, _handle), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("GetTouchesForView", NULL, (void*)UIEvent__GetTouchesForView_fn, 0, false, ::g::Fuse::Controls::Native::iOS::UITouch_typeof()->Array(), 1, ::g::ObjC::Object_typeof()),
        new uFunction(".ctor", NULL, (void*)UIEvent__New1_fn, 0, true, UIEvent_typeof(), 1, ::g::ObjC::Object_typeof()));
}

uType* UIEvent_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(UIEvent);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.UIEvent", options);
    type->fp_build_ = UIEvent_build;
    return type;
}

// public UIEvent(ObjC.Object handle) :1252
void UIEvent__ctor__fn(UIEvent* __this, uObject* handle)
{
    __this->ctor_(handle);
}

// public Fuse.Controls.Native.iOS.UITouch[] GetTouchesForView(ObjC.Object viewHandle) :1257
void UIEvent__GetTouchesForView_fn(UIEvent* __this, uObject* viewHandle, uArray** __retval)
{
    *__retval = __this->GetTouchesForView(viewHandle);
}

// private static long GetTouchesForViewCount(ObjC.Object handle, ObjC.Object viewHandle) :1268
void UIEvent__GetTouchesForViewCount_fn(uObject* handle, uObject* viewHandle, int64_t* __retval)
{
    *__retval = UIEvent::GetTouchesForViewCount(handle, viewHandle);
}

// private static ObjC.Object GetTouchForView(ObjC.Object handle, ObjC.Object viewHandle, int index) :1277
void UIEvent__GetTouchForView_fn(uObject* handle, uObject* viewHandle, int* index, uObject** __retval)
{
    *__retval = UIEvent::GetTouchForView(handle, viewHandle, *index);
}

// public UIEvent New(ObjC.Object handle) :1252
void UIEvent__New1_fn(uObject* handle, UIEvent** __retval)
{
    *__retval = UIEvent::New1(handle);
}

// public UIEvent(ObjC.Object handle) [instance] :1252
void UIEvent::ctor_(uObject* handle)
{
    uStackFrame __("Fuse.Controls.Native.iOS.UIEvent", ".ctor(ObjC.Object)");
    _handle = handle;
}

// public Fuse.Controls.Native.iOS.UITouch[] GetTouchesForView(ObjC.Object viewHandle) [instance] :1257
uArray* UIEvent::GetTouchesForView(uObject* viewHandle)
{
    uStackFrame __("Fuse.Controls.Native.iOS.UIEvent", "GetTouchesForView(ObjC.Object)");
    int touchCount = (int)UIEvent::GetTouchesForViewCount(_handle, viewHandle);
    uArray* touches = uArray::New(::TYPES[0/*Fuse.Controls.Native.iOS.UITouch[]*/], touchCount);

    for (int i = 0; i < touchCount; i++)
        uPtr(touches)->Strong< ::g::Fuse::Controls::Native::iOS::UITouch*>(i) = ::g::Fuse::Controls::Native::iOS::UITouch::New1(UIEvent::GetTouchForView(_handle, viewHandle, i));

    return touches;
}

// private static long GetTouchesForViewCount(ObjC.Object handle, ObjC.Object viewHandle) [static] :1268
int64_t UIEvent::GetTouchesForViewCount(uObject* handle, uObject* viewHandle)
{
    uStackFrame __("Fuse.Controls.Native.iOS.UIEvent", "GetTouchesForViewCount(ObjC.Object,ObjC.Object)");
    @autoreleasepool
    {
        return [] (::id handle, ::id viewHandle) -> int64_t
        {
            ::UIEvent* ev = (::UIEvent*)handle;
            			::UIView* view = (::UIView*)viewHandle;
            			return [[[ev touchesForView:view] allObjects] count];
        } (::g::ObjC::Helpers::GetHandle(handle), ::g::ObjC::Helpers::GetHandle(viewHandle));
        
    }
    
}

// private static ObjC.Object GetTouchForView(ObjC.Object handle, ObjC.Object viewHandle, int index) [static] :1277
uObject* UIEvent::GetTouchForView(uObject* handle, uObject* viewHandle, int index)
{
    uStackFrame __("Fuse.Controls.Native.iOS.UIEvent", "GetTouchForView(ObjC.Object,ObjC.Object,int)");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] (::id handle, ::id viewHandle, int index) -> ::id
        {
            ::UIEvent* ev = (::UIEvent*)handle;
            			::UIView* view = (::UIView*)viewHandle;
            			return [[[ev touchesForView:view] allObjects] objectAtIndex:index];
        } (::g::ObjC::Helpers::GetHandle(handle), ::g::ObjC::Helpers::GetHandle(viewHandle), index));
        
    }
    
}

// public UIEvent New(ObjC.Object handle) [static] :1252
UIEvent* UIEvent::New1(uObject* handle)
{
    UIEvent* obj1 = (UIEvent*)uNew(UIEvent_typeof());
    obj1->ctor_(handle);
    return obj1;
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
