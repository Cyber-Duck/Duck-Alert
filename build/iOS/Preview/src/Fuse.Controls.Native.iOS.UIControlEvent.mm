// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/ios/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.UIControlEvent.h>
#include <iOS/Helpers.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Action-2.h>
#include <Uno.Int.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal sealed extern class UIControlEvent :3328
// {
static void UIControlEvent_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(UIControlEvent_type, interface0));
    type->SetFields(0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::UIControlEvent, _handle), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::UIControlEvent, _type), 0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::UIControlEvent, _uiControl), 0);
}

UIControlEvent_type* UIControlEvent_typeof()
{
    static uSStrong<UIControlEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UIControlEvent);
    options.TypeSize = sizeof(UIControlEvent_type);
    type = (UIControlEvent_type*)uClassType::New("Fuse.Controls.Native.iOS.UIControlEvent", options);
    type->fp_build_ = UIControlEvent_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))UIControlEvent__UnoIDisposableDispose_fn;
    return type;
}

// private UIControlEvent(ObjC.Object uiControl, Uno.Action<ObjC.Object, ObjC.Object> handler, int type) :3344
void UIControlEvent__ctor__fn(UIControlEvent* __this, uObject* uiControl, uDelegate* handler, int* type)
{
    __this->ctor_(uiControl, handler, *type);
}

// public static Uno.IDisposable AddAllEditingEventsCallback(ObjC.Object uiControl, Uno.Action<ObjC.Object, ObjC.Object> handler) :3335
void UIControlEvent__AddAllEditingEventsCallback_fn(uObject* uiControl, uDelegate* handler, uObject** __retval)
{
    *__retval = UIControlEvent::AddAllEditingEventsCallback(uiControl, handler);
}

// public static Uno.IDisposable AddValueChangedCallback(ObjC.Object uiControl, Uno.Action<ObjC.Object, ObjC.Object> handler) :3330
void UIControlEvent__AddValueChangedCallback_fn(uObject* uiControl, uDelegate* handler, uObject** __retval)
{
    *__retval = UIControlEvent::AddValueChangedCallback(uiControl, handler);
}

// private static ObjC.Object Create(ObjC.Object uiControl, Uno.Action<ObjC.Object, ObjC.Object> handler, int type) :3352
void UIControlEvent__Create_fn(uObject* uiControl, uDelegate* handler, int* type, uObject** __retval)
{
    *__retval = UIControlEvent::Create(uiControl, handler, *type);
}

// private UIControlEvent New(ObjC.Object uiControl, Uno.Action<ObjC.Object, ObjC.Object> handler, int type) :3344
void UIControlEvent__New1_fn(uObject* uiControl, uDelegate* handler, int* type, UIControlEvent** __retval)
{
    *__retval = UIControlEvent::New1(uiControl, handler, *type);
}

// private static void RemoveHandler(ObjC.Object uiControl, ObjC.Object eventHandler, int type) :3369
void UIControlEvent__RemoveHandler_fn(uObject* uiControl, uObject* eventHandler, int* type)
{
    UIControlEvent::RemoveHandler(uiControl, eventHandler, *type);
}

// private void Uno.IDisposable.Dispose() :3361
void UIControlEvent__UnoIDisposableDispose_fn(UIControlEvent* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.UIControlEvent", "Uno.IDisposable.Dispose()");
    UIControlEvent::RemoveHandler(__this->_uiControl, __this->_handle, __this->_type);
    __this->_handle = NULL;
    __this->_uiControl = NULL;
}

// private UIControlEvent(ObjC.Object uiControl, Uno.Action<ObjC.Object, ObjC.Object> handler, int type) [instance] :3344
void UIControlEvent::ctor_(uObject* uiControl, uDelegate* handler, int type)
{
    uStackFrame __("Fuse.Controls.Native.iOS.UIControlEvent", ".ctor(ObjC.Object,Uno.Action<ObjC.Object, ObjC.Object>,int)");
    _handle = UIControlEvent::Create(uiControl, handler, type);
    _uiControl = uiControl;
    _type = type;
}

// public static Uno.IDisposable AddAllEditingEventsCallback(ObjC.Object uiControl, Uno.Action<ObjC.Object, ObjC.Object> handler) [static] :3335
uObject* UIControlEvent::AddAllEditingEventsCallback(uObject* uiControl, uDelegate* handler)
{
    uStackFrame __("Fuse.Controls.Native.iOS.UIControlEvent", "AddAllEditingEventsCallback(ObjC.Object,Uno.Action<ObjC.Object, ObjC.Object>)");
    return (uObject*)UIControlEvent::New1(uiControl, handler, (int)UIControlEventAllEditingEvents);
}

// public static Uno.IDisposable AddValueChangedCallback(ObjC.Object uiControl, Uno.Action<ObjC.Object, ObjC.Object> handler) [static] :3330
uObject* UIControlEvent::AddValueChangedCallback(uObject* uiControl, uDelegate* handler)
{
    uStackFrame __("Fuse.Controls.Native.iOS.UIControlEvent", "AddValueChangedCallback(ObjC.Object,Uno.Action<ObjC.Object, ObjC.Object>)");
    return (uObject*)UIControlEvent::New1(uiControl, handler, (int)UIControlEventValueChanged);
}

// private static ObjC.Object Create(ObjC.Object uiControl, Uno.Action<ObjC.Object, ObjC.Object> handler, int type) [static] :3352
uObject* UIControlEvent::Create(uObject* uiControl, uDelegate* handler, int type)
{
    uStackFrame __("Fuse.Controls.Native.iOS.UIControlEvent", "Create(ObjC.Object,Uno.Action<ObjC.Object, ObjC.Object>,int)");
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] (::id uiControl, ::uObjC::Function<void, ::id, ::id> handler, int type) -> ::id
        {
            UIControlEventHandler* h = [[UIControlEventHandler alloc] init];
            			[h setCallback:handler];
            			::UIControl* control = (::UIControl*)uiControl;
            			[control addTarget:h action:@selector(action:forEvent:) forControlEvents:(UIControlEvents)type];
            			return h;
        } (::g::ObjC::Helpers::GetHandle(uiControl), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::id, ::id>
        {
            return [[^ void (::id arg1, ::id arg2)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->Invoke(2, ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1(arg1), ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1(arg2));
                
            } copy] autorelease];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: handler]), type));
        
    }
    
}

// private UIControlEvent New(ObjC.Object uiControl, Uno.Action<ObjC.Object, ObjC.Object> handler, int type) [static] :3344
UIControlEvent* UIControlEvent::New1(uObject* uiControl, uDelegate* handler, int type)
{
    UIControlEvent* obj1 = (UIControlEvent*)uNew(UIControlEvent_typeof());
    obj1->ctor_(uiControl, handler, type);
    return obj1;
}

// private static void RemoveHandler(ObjC.Object uiControl, ObjC.Object eventHandler, int type) [static] :3369
void UIControlEvent::RemoveHandler(uObject* uiControl, uObject* eventHandler, int type)
{
    uStackFrame __("Fuse.Controls.Native.iOS.UIControlEvent", "RemoveHandler(ObjC.Object,ObjC.Object,int)");
    @autoreleasepool
    {
        [] (::id uiControl, ::id eventHandler, int type) -> void
        {
            UIControlEventHandler* h = (UIControlEventHandler*)eventHandler;
            			::UIControl* control = (::UIControl*)uiControl;
            			[control removeTarget:h action:@selector(action:forEvent:) forControlEvents:(UIControlEvents)type];
        } (::g::ObjC::Helpers::GetHandle(uiControl), ::g::ObjC::Helpers::GetHandle(eventHandler), type);
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
