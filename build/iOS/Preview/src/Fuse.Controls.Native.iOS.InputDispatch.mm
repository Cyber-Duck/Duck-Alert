// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/ios/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.AppBase.h>
#include <Fuse.Controls.Native.iOS.InputDispatch.h>
#include <Fuse.Controls.Native.iOS.UIEvent.h>
#include <Fuse.Controls.Native.iOS.UITouch.h>
#include <Fuse.Controls.Native.iOS.UITouch.TouchPhase.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEventData.h>
#include <Fuse.Node.h>
#include <Fuse.Time.h>
#include <Fuse.Visual.h>
#include <iOS/Helpers.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Action.h>
#include <Uno.Action-2.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float2.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Platform.PointerType.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>
static uString* STRINGS[1];
static uType* TYPES[5];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal static extern class InputDispatch :898
// {
// static InputDispatch() :904
static void InputDispatch__cctor__fn(uType* __type)
{
    InputDispatch::_captureIdentity_ = ::g::Uno::Object::New();
    InputDispatch::_listeners_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<ObjC.Object, Fuse.Visual>*/]));
    InputDispatch::_activeTouches_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[1/*Uno.Collections.List<Fuse.Controls.Native.iOS.UITouch>*/]));
    InputDispatch::_eventHandler_ = InputDispatch::CreateEventHandler(uDelegate::New(::TYPES[2/*Uno.Action<ObjC.Object, ObjC.Object>*/], (void*)InputDispatch__OnTouchEvent_fn));
}

static void InputDispatch_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Can only listen to events on UIControls");
    ::TYPES[0] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::ObjC::Object_typeof(), ::g::Fuse::Visual_typeof());
    ::TYPES[1] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Controls::Native::iOS::UITouch_typeof());
    ::TYPES[2] = ::g::Uno::Action2_typeof()->MakeType(::g::ObjC::Object_typeof(), ::g::ObjC::Object_typeof());
    ::TYPES[3] = ::g::Uno::Action_typeof();
    ::TYPES[4] = ::g::Uno::Exception_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Controls::Native::iOS::UITouch_typeof()), (uintptr_t)&::g::Fuse::Controls::Native::iOS::InputDispatch::_activeTouches_, uFieldFlagsStatic,
        uObject_typeof(), (uintptr_t)&::g::Fuse::Controls::Native::iOS::InputDispatch::_captureIdentity_, uFieldFlagsStatic,
        ::g::ObjC::Object_typeof(), (uintptr_t)&::g::Fuse::Controls::Native::iOS::InputDispatch::_eventHandler_, uFieldFlagsStatic,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::ObjC::Object_typeof(), ::g::Fuse::Visual_typeof()), (uintptr_t)&::g::Fuse::Controls::Native::iOS::InputDispatch::_listeners_, uFieldFlagsStatic,
        ::g::ObjC::Object_typeof(), (uintptr_t)&::g::Fuse::Controls::Native::iOS::InputDispatch::_RootView_, uFieldFlagsStatic);
}

uClassType* InputDispatch_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.iOS.InputDispatch", options);
    type->fp_build_ = InputDispatch_build;
    type->fp_cctor_ = InputDispatch__cctor__fn;
    return type;
}

// private static void ActivateTouch(Fuse.Controls.Native.iOS.UITouch touch) :924
void InputDispatch__ActivateTouch_fn(::g::Fuse::Controls::Native::iOS::UITouch* touch)
{
    InputDispatch::ActivateTouch(touch);
}

// public static void AddListener(Fuse.Visual visual, ObjC.Object handle) :1073
void InputDispatch__AddListener_fn(::g::Fuse::Visual* visual, uObject* handle)
{
    InputDispatch::AddListener(visual, handle);
}

// private static void AddListener(ObjC.Object eventHandler, ObjC.Object uicontrol) :1119
void InputDispatch__AddListener1_fn(uObject* eventHandler, uObject* uicontrol)
{
    InputDispatch::AddListener1(eventHandler, uicontrol);
}

// private static ObjC.Object CreateEventHandler(Uno.Action<ObjC.Object, ObjC.Object> callback) :1109
void InputDispatch__CreateEventHandler_fn(uDelegate* callback, uObject** __retval)
{
    *__retval = InputDispatch::CreateEventHandler(callback);
}

// private static void DeactivateAllTouches() :935
void InputDispatch__DeactivateAllTouches_fn()
{
    InputDispatch::DeactivateAllTouches();
}

// private static Fuse.Visual FindRoot(Fuse.Visual visual) :1016
void InputDispatch__FindRoot_fn(::g::Fuse::Visual* visual, ::g::Fuse::Visual** __retval)
{
    *__retval = InputDispatch::FindRoot(visual);
}

// private static int GetPointerIndex(Fuse.Controls.Native.iOS.UITouch touch) :930
void InputDispatch__GetPointerIndex_fn(::g::Fuse::Controls::Native::iOS::UITouch* touch, int* __retval)
{
    *__retval = InputDispatch::GetPointerIndex(touch);
}

// public static void HandleEvent(ObjC.Object viewHandle, Fuse.Visual origin, Fuse.Controls.Native.iOS.UIEvent uiEvent) :948
void InputDispatch__HandleEvent_fn(uObject* viewHandle, ::g::Fuse::Visual* origin, ::g::Fuse::Controls::Native::iOS::UIEvent* uiEvent)
{
    InputDispatch::HandleEvent(viewHandle, origin, uiEvent);
}

// public static void HandleEvent(ObjC.Object viewHandle, Fuse.Visual origin, ObjC.Object uiEvent) :942
void InputDispatch__HandleEvent1_fn(uObject* viewHandle, ::g::Fuse::Visual* origin, uObject* uiEvent)
{
    InputDispatch::HandleEvent1(viewHandle, origin, uiEvent);
}

// public static bool IsUIControl(ObjC.Object handle) :1093
void InputDispatch__IsUIControl_fn(uObject* handle, bool* __retval)
{
    *__retval = InputDispatch::IsUIControl(handle);
}

// private static bool IsUIEvent(ObjC.Object handle) :1101
void InputDispatch__IsUIEvent_fn(uObject* handle, bool* __retval)
{
    *__retval = InputDispatch::IsUIEvent(handle);
}

// private static void LostCallback() :1001
void InputDispatch__LostCallback_fn()
{
    InputDispatch::LostCallback();
}

// private static Fuse.Input.PointerEventData MakePointerEventData(Fuse.Controls.Native.iOS.UITouch touch, ObjC.Object rootView, int pointIndex) :1003
void InputDispatch__MakePointerEventData_fn(::g::Fuse::Controls::Native::iOS::UITouch* touch, uObject* rootView, int* pointIndex, ::g::Fuse::Input::PointerEventData** __retval)
{
    *__retval = InputDispatch::MakePointerEventData(touch, rootView, *pointIndex);
}

// private static void OnTouchEvent(ObjC.Object sender, ObjC.Object uiEvent) :911
void InputDispatch__OnTouchEvent_fn(uObject* sender, uObject* uiEvent)
{
    InputDispatch::OnTouchEvent(sender, uiEvent);
}

// private static void RaiseCancelled(Fuse.Visual visual, Fuse.Input.PointerEventData data) :1058
void InputDispatch__RaiseCancelled_fn(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaiseCancelled(visual, data);
}

// private static void RaiseMoved(Fuse.Visual visual, Fuse.Input.PointerEventData data) :1033
void InputDispatch__RaiseMoved_fn(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaiseMoved(visual, data);
}

// private static void RaisePressed(Fuse.Visual visual, Fuse.Input.PointerEventData data) :1021
void InputDispatch__RaisePressed_fn(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaisePressed(visual, data);
}

// private static void RaiseReleased(Fuse.Visual visual, Fuse.Input.PointerEventData data) :1045
void InputDispatch__RaiseReleased_fn(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaiseReleased(visual, data);
}

// public static void RemoveListener(Fuse.Visual visual, ObjC.Object handle) :1082
void InputDispatch__RemoveListener_fn(::g::Fuse::Visual* visual, uObject* handle)
{
    InputDispatch::RemoveListener(visual, handle);
}

// private static void RemoveListener(ObjC.Object eventHandler, ObjC.Object uicontrol) :1129
void InputDispatch__RemoveListener1_fn(uObject* eventHandler, uObject* uicontrol)
{
    InputDispatch::RemoveListener1(eventHandler, uicontrol);
}

// public static generated ObjC.Object get_RootView() :940
void InputDispatch__get_RootView_fn(uObject** __retval)
{
    *__retval = InputDispatch::RootView();
}

// public static generated void set_RootView(ObjC.Object value) :940
void InputDispatch__set_RootView_fn(uObject* value)
{
    InputDispatch::RootView(value);
}

uSStrong< ::g::Uno::Collections::List*> InputDispatch::_activeTouches_;
uSStrong<uObject*> InputDispatch::_captureIdentity_;
uSStrong<uObject*> InputDispatch::_eventHandler_;
uSStrong< ::g::Uno::Collections::Dictionary*> InputDispatch::_listeners_;
uSStrong<uObject*> InputDispatch::_RootView_;

// private static void ActivateTouch(Fuse.Controls.Native.iOS.UITouch touch) [static] :924
void InputDispatch::ActivateTouch(::g::Fuse::Controls::Native::iOS::UITouch* touch)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "ActivateTouch(Fuse.Controls.Native.iOS.UITouch)");
    InputDispatch_typeof()->Init();
    bool ret2;

    if (!(::g::Uno::Collections::List__Contains_fn(uPtr(InputDispatch::_activeTouches()), touch, &ret2), ret2))
        ::g::Uno::Collections::List__Add_fn(uPtr(InputDispatch::_activeTouches()), touch);
}

// public static void AddListener(Fuse.Visual visual, ObjC.Object handle) [static] :1073
void InputDispatch::AddListener(::g::Fuse::Visual* visual, uObject* handle)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "AddListener(Fuse.Visual,ObjC.Object)");
    InputDispatch_typeof()->Init();

    if (!InputDispatch::IsUIControl(handle))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"Can only li...*/]));

    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(InputDispatch::_listeners()), handle, visual);
    InputDispatch::AddListener1(InputDispatch::_eventHandler(), handle);
}

// private static void AddListener(ObjC.Object eventHandler, ObjC.Object uicontrol) [static] :1119
void InputDispatch::AddListener1(uObject* eventHandler, uObject* uicontrol)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "AddListener(ObjC.Object,ObjC.Object)");
    InputDispatch_typeof()->Init();
    @autoreleasepool
    {
        [] (::id eventHandler, ::id uicontrol) -> void
        {
            UIControlEventHandler* handler = (UIControlEventHandler*)eventHandler;
            			::UIControl* control = (::UIControl*)uicontrol;
            			[control addTarget:handler action:@selector(action:forEvent:) forControlEvents:UIControlEventAllTouchEvents];
        } (::g::ObjC::Helpers::GetHandle(eventHandler), ::g::ObjC::Helpers::GetHandle(uicontrol));
        
    }
    
}

// private static ObjC.Object CreateEventHandler(Uno.Action<ObjC.Object, ObjC.Object> callback) [static] :1109
uObject* InputDispatch::CreateEventHandler(uDelegate* callback)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "CreateEventHandler(Uno.Action<ObjC.Object, ObjC.Object>)");
    InputDispatch_typeof()->Init();
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] (::uObjC::Function<void, ::id, ::id> callback) -> ::id
        {
            UIControlEventHandler* handler = [[UIControlEventHandler alloc] init];
            			[handler setCallback: callback];
            			return handler;
        } ([] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::id, ::id>
        {
            return [[^ void (::id arg1, ::id arg2)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->Invoke(2, ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1(arg1), ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1(arg2));
                
            } copy] autorelease];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: callback])));
        
    }
    
}

// private static void DeactivateAllTouches() [static] :935
void InputDispatch::DeactivateAllTouches()
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "DeactivateAllTouches()");
    InputDispatch_typeof()->Init();
    uPtr(InputDispatch::_activeTouches())->Clear();
}

// private static Fuse.Visual FindRoot(Fuse.Visual visual) [static] :1016
::g::Fuse::Visual* InputDispatch::FindRoot(::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "FindRoot(Fuse.Visual)");
    InputDispatch_typeof()->Init();
    return (uPtr(visual)->Parent() != NULL) ? (::g::Fuse::Visual*)InputDispatch::FindRoot(uPtr(visual)->Parent()) : visual;
}

// private static int GetPointerIndex(Fuse.Controls.Native.iOS.UITouch touch) [static] :930
int InputDispatch::GetPointerIndex(::g::Fuse::Controls::Native::iOS::UITouch* touch)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "GetPointerIndex(Fuse.Controls.Native.iOS.UITouch)");
    InputDispatch_typeof()->Init();
    int ret3;
    return (::g::Uno::Collections::List__IndexOf_fn(uPtr(InputDispatch::_activeTouches()), touch, &ret3), ret3);
}

// public static void HandleEvent(ObjC.Object viewHandle, Fuse.Visual origin, Fuse.Controls.Native.iOS.UIEvent uiEvent) [static] :948
void InputDispatch::HandleEvent(uObject* viewHandle, ::g::Fuse::Visual* origin, ::g::Fuse::Controls::Native::iOS::UIEvent* uiEvent)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "HandleEvent(ObjC.Object,Fuse.Visual,Fuse.Controls.Native.iOS.UIEvent)");
    InputDispatch_typeof()->Init();

    if (InputDispatch::RootView() == NULL)
        return;

    uArray* touches = uPtr(uiEvent)->GetTouchesForView(viewHandle);
    bool touchEnded = false;
    uObject* rootView = InputDispatch::RootView();

    for (int i = 0; i < uPtr(touches)->Length(); i++)
    {
        ::g::Fuse::Controls::Native::iOS::UITouch* touch = uPtr(touches)->Strong< ::g::Fuse::Controls::Native::iOS::UITouch*>(i);
        InputDispatch::ActivateTouch(touch);
        int pointerIndex = InputDispatch::GetPointerIndex(touch);
        ::g::Fuse::Input::PointerEventData* data = InputDispatch::MakePointerEventData(touch, rootView, pointerIndex);

        if (uPtr(touch)->Phase() == 0)
            InputDispatch::RaisePressed(origin, data);
        else  if (uPtr(touch)->Phase() == 1)
            InputDispatch::RaiseMoved(origin, data);
        else  if (uPtr(touch)->Phase() == 3)
        {
            InputDispatch::RaiseReleased(origin, data);
            touchEnded = true;
        }
        else  if (uPtr(touch)->Phase() == 4)
        {
            InputDispatch::RaiseCancelled(origin, data);
            touchEnded = true;
        }
    }

    if (touchEnded)
    {
        for (int i1 = 0; i1 < uPtr(touches)->Length(); i1++)
        {
            ::g::Fuse::Controls::Native::iOS::UITouch* touch1 = uPtr(touches)->Strong< ::g::Fuse::Controls::Native::iOS::UITouch*>(i1);
            int pointerIndex1 = InputDispatch::GetPointerIndex(touch1);

            if (uPtr(touch1)->Phase() != 3)
                InputDispatch::RaiseReleased(origin, InputDispatch::MakePointerEventData(touch1, rootView, pointerIndex1));
        }

        InputDispatch::DeactivateAllTouches();
    }
}

// public static void HandleEvent(ObjC.Object viewHandle, Fuse.Visual origin, ObjC.Object uiEvent) [static] :942
void InputDispatch::HandleEvent1(uObject* viewHandle, ::g::Fuse::Visual* origin, uObject* uiEvent)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "HandleEvent(ObjC.Object,Fuse.Visual,ObjC.Object)");
    InputDispatch_typeof()->Init();

    if (InputDispatch::IsUIEvent(uiEvent))
        InputDispatch::HandleEvent(viewHandle, origin, ::g::Fuse::Controls::Native::iOS::UIEvent::New1(uiEvent));
}

// public static bool IsUIControl(ObjC.Object handle) [static] :1093
bool InputDispatch::IsUIControl(uObject* handle)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "IsUIControl(ObjC.Object)");
    InputDispatch_typeof()->Init();
    @autoreleasepool
    {
        return [] (::id handle) -> bool
        {
            NSObject* obj = (NSObject*)handle;
            			return [obj isKindOfClass:[UIControl class]];
        } (::g::ObjC::Helpers::GetHandle(handle));
        
    }
    
}

// private static bool IsUIEvent(ObjC.Object handle) [static] :1101
bool InputDispatch::IsUIEvent(uObject* handle)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "IsUIEvent(ObjC.Object)");
    InputDispatch_typeof()->Init();
    @autoreleasepool
    {
        return [] (::id handle) -> bool
        {
            NSObject* obj = (NSObject*)handle;
            			return [obj isKindOfClass:[::UIEvent class]];
        } (::g::ObjC::Helpers::GetHandle(handle));
        
    }
    
}

// private static void LostCallback() [static] :1001
void InputDispatch::LostCallback()
{
    InputDispatch_typeof()->Init();
}

// private static Fuse.Input.PointerEventData MakePointerEventData(Fuse.Controls.Native.iOS.UITouch touch, ObjC.Object rootView, int pointIndex) [static] :1003
::g::Fuse::Input::PointerEventData* InputDispatch::MakePointerEventData(::g::Fuse::Controls::Native::iOS::UITouch* touch, uObject* rootView, int pointIndex)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "MakePointerEventData(Fuse.Controls.Native.iOS.UITouch,ObjC.Object,int)");
    InputDispatch_typeof()->Init();
    ::g::Fuse::Input::PointerEventData* collection1;
    ::g::Uno::Float2 windowPoint = uPtr(touch)->LocationInView(rootView);
    collection1 = ::g::Fuse::Input::PointerEventData::New1();
    uPtr(collection1)->PointIndex = pointIndex;
    uPtr(collection1)->WindowPoint = windowPoint;
    uPtr(collection1)->Timestamp = (touch->Timestamp() - ::g::Fuse::Time::FrameTimeBase());
    uPtr(collection1)->PointerType = 2;
    uPtr(collection1)->IsPrimary = (pointIndex == 0);
    return collection1;
}

// private static void OnTouchEvent(ObjC.Object sender, ObjC.Object uiEvent) [static] :911
void InputDispatch::OnTouchEvent(uObject* sender, uObject* uiEvent)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "OnTouchEvent(ObjC.Object,ObjC.Object)");
    InputDispatch_typeof()->Init();
    bool ret4;
    ::g::Fuse::Visual* ret5;

    if (InputDispatch::IsUIControl(sender) && InputDispatch::IsUIEvent(uiEvent))
    {
        if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(InputDispatch::_listeners()), sender, &ret4), ret4))
        {
            ::g::Fuse::Visual* visual = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(InputDispatch::_listeners()), sender, &ret5), ret5);
            ::g::Fuse::Controls::Native::iOS::UIEvent* ev = ::g::Fuse::Controls::Native::iOS::UIEvent::New1(uiEvent);
            InputDispatch::HandleEvent(sender, visual, ev);
        }
    }
}

// private static void RaiseCancelled(Fuse.Visual visual, Fuse.Input.PointerEventData data) [static] :1058
void InputDispatch::RaiseCancelled(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "RaiseCancelled(Fuse.Visual,Fuse.Input.PointerEventData)");
    InputDispatch_typeof()->Init();

    if (::g::Fuse::Input::Pointer::HardCapture(uPtr(data)->PointIndex, visual, InputDispatch::_captureIdentity(), uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)InputDispatch__LostCallback_fn)))
    {
        try
        {
            ::g::Fuse::Input::Pointer::ReleaseHardCapture(uPtr(data)->PointIndex);
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e = __t.Exception;
            ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
        }
    }
}

// private static void RaiseMoved(Fuse.Visual visual, Fuse.Input.PointerEventData data) [static] :1033
void InputDispatch::RaiseMoved(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "RaiseMoved(Fuse.Visual,Fuse.Input.PointerEventData)");
    InputDispatch_typeof()->Init();

    try
    {
        bool args = ::g::Fuse::Input::Pointer::RaiseMoved(InputDispatch::FindRoot(visual), data);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private static void RaisePressed(Fuse.Visual visual, Fuse.Input.PointerEventData data) [static] :1021
void InputDispatch::RaisePressed(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "RaisePressed(Fuse.Visual,Fuse.Input.PointerEventData)");
    InputDispatch_typeof()->Init();

    try
    {
        bool args = ::g::Fuse::Input::Pointer::RaisePressed(InputDispatch::FindRoot(visual), data);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private static void RaiseReleased(Fuse.Visual visual, Fuse.Input.PointerEventData data) [static] :1045
void InputDispatch::RaiseReleased(::g::Fuse::Visual* visual, ::g::Fuse::Input::PointerEventData* data)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "RaiseReleased(Fuse.Visual,Fuse.Input.PointerEventData)");
    InputDispatch_typeof()->Init();

    try
    {
        bool args = ::g::Fuse::Input::Pointer::RaiseReleased(InputDispatch::FindRoot(visual), data);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// public static void RemoveListener(Fuse.Visual visual, ObjC.Object handle) [static] :1082
void InputDispatch::RemoveListener(::g::Fuse::Visual* visual, uObject* handle)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "RemoveListener(Fuse.Visual,ObjC.Object)");
    InputDispatch_typeof()->Init();
    bool ret6;
    bool ret7;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(InputDispatch::_listeners()), handle, &ret6), ret6))
    {
        InputDispatch::RemoveListener1(InputDispatch::_eventHandler(), handle);
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(InputDispatch::_listeners()), handle, &ret7);
    }
}

// private static void RemoveListener(ObjC.Object eventHandler, ObjC.Object uicontrol) [static] :1129
void InputDispatch::RemoveListener1(uObject* eventHandler, uObject* uicontrol)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "RemoveListener(ObjC.Object,ObjC.Object)");
    InputDispatch_typeof()->Init();
    @autoreleasepool
    {
        [] (::id eventHandler, ::id uicontrol) -> void
        {
            UIControlEventHandler* handler = (UIControlEventHandler*)eventHandler;
            			::UIControl* control = (::UIControl*)uicontrol;
            			[control removeTarget:handler action:@selector(action:forEvent:) forControlEvents:UIControlEventAllTouchEvents];
        } (::g::ObjC::Helpers::GetHandle(eventHandler), ::g::ObjC::Helpers::GetHandle(uicontrol));
        
    }
    
}

// public static generated ObjC.Object get_RootView() [static] :940
uObject* InputDispatch::RootView()
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "get_RootView()");
    InputDispatch_typeof()->Init();
    return InputDispatch::_RootView();
}

// public static generated void set_RootView(ObjC.Object value) [static] :940
void InputDispatch::RootView(uObject* value)
{
    uStackFrame __("Fuse.Controls.Native.iOS.InputDispatch", "set_RootView(ObjC.Object)");
    InputDispatch_typeof()->Init();
    InputDispatch::_RootView() = value;
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
