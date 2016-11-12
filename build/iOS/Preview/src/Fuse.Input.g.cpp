// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.AppBase.h>
#include <Fuse.HitTestCallback.h>
#include <Fuse.HitTestContext.h>
#include <Fuse.HitTestResult.h>
#include <Fuse.Input.Capturer.h>
#include <Fuse.Input.CustomPointerEventArgs.h>
#include <Fuse.Input.Focus.h>
#include <Fuse.Input.FocusDelegator.h>
#include <Fuse.Input.FocusGained.h>
#include <Fuse.Input.FocusGainedArgs.h>
#include <Fuse.Input.FocusGainedHandler.h>
#include <Fuse.Input.FocusLost.h>
#include <Fuse.Input.FocusLostArgs.h>
#include <Fuse.Input.FocusLostHandler.h>
#include <Fuse.Input.FocusNavigationDirection.h>
#include <Fuse.Input.FocusPrediction.h>
#include <Fuse.Input.FocusPrediction.PredictFilter.h>
#include <Fuse.Input.FocusPredictStrategy.h>
#include <Fuse.Input.HitTestHelpers.h>
#include <Fuse.Input.INotifyFocus.h>
#include <Fuse.Input.IPointerEventResponder.h>
#include <Fuse.Input.IsFocusableChangedArgs.h>
#include <Fuse.Input.IsFocusableChangedEvent.h>
#include <Fuse.Input.IsFocusableChangedHandler.h>
#include <Fuse.Input.Keyboard.h>
#include <Fuse.Input.KeyEventArgs.h>
#include <Fuse.Input.KeyPressed.h>
#include <Fuse.Input.KeyPressedArgs.h>
#include <Fuse.Input.KeyPressedHandler.h>
#include <Fuse.Input.KeyReleased.h>
#include <Fuse.Input.KeyReleasedArgs.h>
#include <Fuse.Input.KeyReleasedHandler.h>
#include <Fuse.Input.Pointer.DefaultPointerEventResponder.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.Pointer.PELHolder.h>
#include <Fuse.Input.Pointer.PELStatus.h>
#include <Fuse.Input.Pointer.PointerRecord.h>
#include <Fuse.Input.PointerEntered.h>
#include <Fuse.Input.PointerEnteredArgs.h>
#include <Fuse.Input.PointerEnteredHandler.h>
#include <Fuse.Input.PointerEventArgs.h>
#include <Fuse.Input.PointerEventData.h>
#include <Fuse.Input.PointerLeft.h>
#include <Fuse.Input.PointerLeftArgs.h>
#include <Fuse.Input.PointerLeftHandler.h>
#include <Fuse.Input.PointerMoved.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerMovedHandler.h>
#include <Fuse.Input.PointerPressed.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerPressedHandler.h>
#include <Fuse.Input.PointerReleased.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.Input.PointerReleasedHandler.h>
#include <Fuse.Input.PointerWheelMoved.h>
#include <Fuse.Input.PointerWheelMovedArgs.h>
#include <Fuse.Input.PointerWheelMovedHandler.h>
#include <Fuse.Input.SelectionQuery.h>
#include <Fuse.Input.TextEntered.h>
#include <Fuse.Input.TextEnteredArgs.h>
#include <Fuse.Input.TextEnteredHandler.h>
#include <Fuse.Input.TextService.h>
#include <Fuse.Node.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.RootViewport.h>
#include <Fuse.Scripting.IEventSerializer.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEvent-2.h>
#include <Fuse.VisualEventArgs.h>
#include <Fuse.VisualEventMode.h>
#include <Uno.Action.h>
#include <Uno.Action-2.h>
#include <Uno.Application.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Func-2.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Platform.Key.h>
#include <Uno.Platform.PointerType.h>
#include <Uno.Platform.WheelDeltaMode.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.Vector.h>
static uString* STRINGS[21];
static uType* TYPES[40];

namespace g{
namespace Fuse{
namespace Input{

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// internal sealed class Capturer :925
// {
static void Capturer_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Invalid Capturer parameters");
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Fuse::Input::Capturer, _Identity), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Input::Capturer, _LostCallback), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Input::Capturer, _Visual), 0);
}

uType* Capturer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Capturer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Input.Capturer", options);
    type->fp_build_ = Capturer_build;
    return type;
}

// public Capturer(Fuse.Visual n, object identity, Uno.Action lostCallback) :931
void Capturer__ctor__fn(Capturer* __this, ::g::Fuse::Visual* n, uObject* identity, uDelegate* lostCallback)
{
    __this->ctor_(n, identity, lostCallback);
}

// public generated object get_Identity() :928
void Capturer__get_Identity_fn(Capturer* __this, uObject** __retval)
{
    *__retval = __this->Identity();
}

// private generated void set_Identity(object value) :928
void Capturer__set_Identity_fn(Capturer* __this, uObject* value)
{
    __this->Identity(value);
}

// public bool get_IsSuitable() :943
void Capturer__get_IsSuitable_fn(Capturer* __this, bool* __retval)
{
    *__retval = __this->IsSuitable();
}

// public generated Uno.Action get_LostCallback() :929
void Capturer__get_LostCallback_fn(Capturer* __this, uDelegate** __retval)
{
    *__retval = __this->LostCallback();
}

// private generated void set_LostCallback(Uno.Action value) :929
void Capturer__set_LostCallback_fn(Capturer* __this, uDelegate* value)
{
    __this->LostCallback(value);
}

// public Capturer New(Fuse.Visual n, object identity, Uno.Action lostCallback) :931
void Capturer__New1_fn(::g::Fuse::Visual* n, uObject* identity, uDelegate* lostCallback, Capturer** __retval)
{
    *__retval = Capturer::New1(n, identity, lostCallback);
}

// public generated Fuse.Visual get_Visual() :927
void Capturer__get_Visual_fn(Capturer* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Visual();
}

// private generated void set_Visual(Fuse.Visual value) :927
void Capturer__set_Visual_fn(Capturer* __this, ::g::Fuse::Visual* value)
{
    __this->Visual(value);
}

// public Capturer(Fuse.Visual n, object identity, Uno.Action lostCallback) [instance] :931
void Capturer::ctor_(::g::Fuse::Visual* n, uObject* identity, uDelegate* lostCallback)
{
    uStackFrame __("Fuse.Input.Capturer", ".ctor(Fuse.Visual,object,Uno.Action)");

    if (((n == NULL) || (identity == NULL)) || ::g::Uno::Delegate::op_Equality(lostCallback, NULL))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"Invalid Cap...*/]));

    Visual(n);
    Identity(identity);
    LostCallback(lostCallback);
}

// public generated object get_Identity() [instance] :928
uObject* Capturer::Identity()
{
    uStackFrame __("Fuse.Input.Capturer", "get_Identity()");
    return _Identity;
}

// private generated void set_Identity(object value) [instance] :928
void Capturer::Identity(uObject* value)
{
    uStackFrame __("Fuse.Input.Capturer", "set_Identity(object)");
    _Identity = value;
}

// public bool get_IsSuitable() [instance] :943
bool Capturer::IsSuitable()
{
    uStackFrame __("Fuse.Input.Capturer", "get_IsSuitable()");
    return uPtr(Visual())->IsContextEnabled() && uPtr(Visual())->IsRootingCompleted();
}

// public generated Uno.Action get_LostCallback() [instance] :929
uDelegate* Capturer::LostCallback()
{
    uStackFrame __("Fuse.Input.Capturer", "get_LostCallback()");
    return _LostCallback;
}

// private generated void set_LostCallback(Uno.Action value) [instance] :929
void Capturer::LostCallback(uDelegate* value)
{
    uStackFrame __("Fuse.Input.Capturer", "set_LostCallback(Uno.Action)");
    _LostCallback = value;
}

// public generated Fuse.Visual get_Visual() [instance] :927
::g::Fuse::Visual* Capturer::Visual()
{
    uStackFrame __("Fuse.Input.Capturer", "get_Visual()");
    return _Visual;
}

// private generated void set_Visual(Fuse.Visual value) [instance] :927
void Capturer::Visual(::g::Fuse::Visual* value)
{
    uStackFrame __("Fuse.Input.Capturer", "set_Visual(Fuse.Visual)");
    _Visual = value;
}

// public Capturer New(Fuse.Visual n, object identity, Uno.Action lostCallback) [static] :931
Capturer* Capturer::New1(::g::Fuse::Visual* n, uObject* identity, uDelegate* lostCallback)
{
    Capturer* obj1 = (Capturer*)uNew(Capturer_typeof());
    obj1->ctor_(n, identity, lostCallback);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// public abstract class CustomPointerEventArgs :789
// {
static void CustomPointerEventArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(3);
}

::g::Fuse::VisualEventArgs_type* CustomPointerEventArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Input::PointerEventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(CustomPointerEventArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Input.CustomPointerEventArgs", options);
    type->fp_build_ = CustomPointerEventArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// protected CustomPointerEventArgs(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) :791
void CustomPointerEventArgs__ctor_3_fn(CustomPointerEventArgs* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    __this->ctor_3(args, visual);
}

// protected CustomPointerEventArgs(Fuse.Input.PointerEventArgs args, Fuse.Visual visual) [instance] :791
void CustomPointerEventArgs::ctor_3(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Input.CustomPointerEventArgs", ".ctor(Fuse.Input.PointerEventArgs,Fuse.Visual)");
    ctor_2(uPtr(args)->Data(), visual);
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// private sealed class Pointer.DefaultPointerEventResponder :1416
// {
static void Pointer__DefaultPointerEventResponder_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action2_typeof()->MakeType(::g::Fuse::Input::PointerPressedArgs_typeof(), ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Visual_typeof()));
    type->SetInterfaces(
        ::g::Fuse::Input::IPointerEventResponder_typeof(), offsetof(Pointer__DefaultPointerEventResponder_type, interface0));
}

Pointer__DefaultPointerEventResponder_type* Pointer__DefaultPointerEventResponder_typeof()
{
    static uSStrong<Pointer__DefaultPointerEventResponder_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Pointer__DefaultPointerEventResponder);
    options.TypeSize = sizeof(Pointer__DefaultPointerEventResponder_type);
    type = (Pointer__DefaultPointerEventResponder_type*)uClassType::New("Fuse.Input.Pointer.DefaultPointerEventResponder", options);
    type->fp_build_ = Pointer__DefaultPointerEventResponder_build;
    type->fp_ctor_ = (void*)Pointer__DefaultPointerEventResponder__New1_fn;
    type->interface0.fp_OnPointerPressed = (void(*)(uObject*, ::g::Fuse::Input::PointerPressedArgs*))Pointer__DefaultPointerEventResponder__OnPointerPressed_fn;
    type->interface0.fp_OnPointerMoved = (void(*)(uObject*, ::g::Fuse::Input::PointerMovedArgs*))Pointer__DefaultPointerEventResponder__OnPointerMoved_fn;
    type->interface0.fp_OnPointerReleased = (void(*)(uObject*, ::g::Fuse::Input::PointerReleasedArgs*))Pointer__DefaultPointerEventResponder__OnPointerReleased_fn;
    type->interface0.fp_OnPointerWheelMoved = (void(*)(uObject*, ::g::Fuse::Input::PointerWheelMovedArgs*))Pointer__DefaultPointerEventResponder__OnPointerWheelMoved_fn;
    return type;
}

// public generated DefaultPointerEventResponder() :1416
void Pointer__DefaultPointerEventResponder__ctor__fn(Pointer__DefaultPointerEventResponder* __this)
{
    __this->ctor_();
}

// public generated DefaultPointerEventResponder New() :1416
void Pointer__DefaultPointerEventResponder__New1_fn(Pointer__DefaultPointerEventResponder** __retval)
{
    *__retval = Pointer__DefaultPointerEventResponder::New1();
}

// public void OnPointerMoved(Fuse.Input.PointerMovedArgs args) :1440
void Pointer__DefaultPointerEventResponder__OnPointerMoved_fn(Pointer__DefaultPointerEventResponder* __this, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnPointerMoved(args);
}

// public void OnPointerPressed(Fuse.Input.PointerPressedArgs args) :1418
void Pointer__DefaultPointerEventResponder__OnPointerPressed_fn(Pointer__DefaultPointerEventResponder* __this, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPointerPressed(args);
}

// public void OnPointerReleased(Fuse.Input.PointerReleasedArgs args) :1457
void Pointer__DefaultPointerEventResponder__OnPointerReleased_fn(Pointer__DefaultPointerEventResponder* __this, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnPointerReleased(args);
}

// public void OnPointerWheelMoved(Fuse.Input.PointerWheelMovedArgs args) :1472
void Pointer__DefaultPointerEventResponder__OnPointerWheelMoved_fn(Pointer__DefaultPointerEventResponder* __this, ::g::Fuse::Input::PointerWheelMovedArgs* args)
{
    __this->OnPointerWheelMoved(args);
}

// public generated DefaultPointerEventResponder() [instance] :1416
void Pointer__DefaultPointerEventResponder::ctor_()
{
}

// public void OnPointerMoved(Fuse.Input.PointerMovedArgs args) [instance] :1440
void Pointer__DefaultPointerEventResponder::OnPointerMoved(::g::Fuse::Input::PointerMovedArgs* args)
{
    uStackFrame __("Fuse.Input.Pointer.DefaultPointerEventResponder", "OnPointerMoved(Fuse.Input.PointerMovedArgs)");
    bool ret3;
    ::g::Fuse::Input::Pointer__PointerRecord* ret4;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(::g::Fuse::Input::Pointer::_pointersDown()), uCRef<int>(uPtr(args)->PointIndex()), &ret3), ret3))
    {
        ::g::Fuse::Input::Pointer__PointerRecord* p = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(::g::Fuse::Input::Pointer::_pointersDown()), uCRef<int>(uPtr(args)->PointIndex()), &ret4), ret4);
        uPtr(p)->DistanceMoved = (uPtr(p)->DistanceMoved + ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(args->WindowPoint(), uPtr(p)->WindowPoint)));
        p->WindowPoint = args->WindowPoint();
    }

    ::g::Fuse::Input::Pointer::Coord(uPtr(args)->WindowPoint());

    if (args->Visual() == NULL)
        return;

    uPtr(::g::Fuse::Input::Pointer::Moved())->RaiseWithBubble(args, 1);
}

// public void OnPointerPressed(Fuse.Input.PointerPressedArgs args) [instance] :1418
void Pointer__DefaultPointerEventResponder::OnPointerPressed(::g::Fuse::Input::PointerPressedArgs* args)
{
    uStackFrame __("Fuse.Input.Pointer.DefaultPointerEventResponder", "OnPointerPressed(Fuse.Input.PointerPressedArgs)");
    ::g::Fuse::Input::Pointer__PointerRecord* collection1;
    collection1 = ::g::Fuse::Input::Pointer__PointerRecord::New1();
    uPtr(collection1)->WindowPoint = uPtr(args)->WindowPoint();
    uPtr(collection1)->DistanceMoved = 0.0f;
    ::g::Fuse::Input::Pointer__PointerRecord* p = collection1;
    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(::g::Fuse::Input::Pointer::_pointersDown()), uCRef<int>(args->PointIndex()), p);
    ::g::Fuse::Input::Pointer::Coord(args->WindowPoint());

    if (args->Visual() == NULL)
    {
        ::g::Fuse::Input::Focus::Release();
        return;
    }

    uPtr(::g::Fuse::Input::Pointer::Pressed())->RaiseWithBubble1(args, 1, uDelegate::New(::TYPES[0/*Uno.Action<Fuse.Input.PointerPressedArgs, Uno.Collections.IList<Fuse.Visual>>*/], (void*)::g::Fuse::Input::Pointer__CheckFocus_fn));
    uPtr(p)->WasHandled = args->IsHandled();
}

// public void OnPointerReleased(Fuse.Input.PointerReleasedArgs args) [instance] :1457
void Pointer__DefaultPointerEventResponder::OnPointerReleased(::g::Fuse::Input::PointerReleasedArgs* args)
{
    uStackFrame __("Fuse.Input.Pointer.DefaultPointerEventResponder", "OnPointerReleased(Fuse.Input.PointerReleasedArgs)");
    bool ret5;
    ::g::Fuse::Input::Pointer__PointerRecord* ret6;
    bool ret7;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(::g::Fuse::Input::Pointer::_pointersDown()), uCRef<int>(uPtr(args)->PointIndex()), &ret5), ret5))
    {
        ::g::Fuse::Input::Pointer__PointerRecord* p = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(::g::Fuse::Input::Pointer::_pointersDown()), uCRef<int>(uPtr(args)->PointIndex()), &ret6), ret6);
        uPtr(p)->DistanceMoved = (uPtr(p)->DistanceMoved + ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(args->WindowPoint(), uPtr(p)->WindowPoint)));
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(::g::Fuse::Input::Pointer::_pointersDown()), uCRef<int>(args->PointIndex()), &ret7);
    }

    ::g::Fuse::Input::Pointer::Coord(uPtr(args)->WindowPoint());

    if (args->Visual() == NULL)
        return;

    uPtr(::g::Fuse::Input::Pointer::Released())->RaiseWithBubble(args, 1);
}

// public void OnPointerWheelMoved(Fuse.Input.PointerWheelMovedArgs args) [instance] :1472
void Pointer__DefaultPointerEventResponder::OnPointerWheelMoved(::g::Fuse::Input::PointerWheelMovedArgs* args)
{
    uStackFrame __("Fuse.Input.Pointer.DefaultPointerEventResponder", "OnPointerWheelMoved(Fuse.Input.PointerWheelMovedArgs)");

    if (uPtr(args)->Visual() == NULL)
        return;

    uPtr(::g::Fuse::Input::Pointer::WheelMoved())->RaiseWithBubble(args, 1);
}

// public generated DefaultPointerEventResponder New() [static] :1416
Pointer__DefaultPointerEventResponder* Pointer__DefaultPointerEventResponder::New1()
{
    Pointer__DefaultPointerEventResponder* obj2 = (Pointer__DefaultPointerEventResponder*)uNew(Pointer__DefaultPointerEventResponder_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// public partial static class Focus :235
// {
// static Focus() :235
static void Focus__cctor__fn(uType* __type)
{
    Focus::_gained_ = ::g::Fuse::Input::FocusGained::New1();
    Focus::_lost_ = ::g::Fuse::Input::FocusLost::New1();
    Focus::_isFoucsableChanged_ = ::g::Fuse::Input::IsFocusableChangedEvent::New1();
    Focus::_focusDelegatorHandle_ = ::g::Fuse::Properties::CreateHandle();
}

static void Focus_build(uType* type)
{
    ::STRINGS[1] = uString::Const("GiveTo");
    ::STRINGS[2] = uString::Const("Move");
    ::STRINGS[3] = uString::Const("Obtained");
    ::STRINGS[4] = uString::Const("OnWindowGotFocus");
    ::STRINGS[5] = uString::Const("Release");
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    ::TYPES[2] = ::g::Fuse::Input::INotifyFocus_typeof();
    ::TYPES[3] = ::g::Fuse::AppBase_typeof();
    ::TYPES[4] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[5] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[6] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[7] = ::g::Fuse::Input::FocusDelegator_typeof();
    type->SetFields(0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Input::Focus::_focusDelegatorHandle_, uFieldFlagsStatic,
        ::g::Fuse::Visual_typeof(), (uintptr_t)&::g::Fuse::Input::Focus::_focusedObject_, uFieldFlagsStatic,
        ::g::Fuse::Input::FocusGained_typeof(), (uintptr_t)&::g::Fuse::Input::Focus::_gained_, uFieldFlagsStatic,
        ::g::Fuse::Input::IsFocusableChangedEvent_typeof(), (uintptr_t)&::g::Fuse::Input::Focus::_isFoucsableChanged_, uFieldFlagsStatic,
        ::g::Fuse::Visual_typeof(), (uintptr_t)&::g::Fuse::Input::Focus::_lastFocusedVisual_, uFieldFlagsStatic,
        ::g::Fuse::Input::FocusLost_typeof(), (uintptr_t)&::g::Fuse::Input::Focus::_lost_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(17,
        new uFunction("get_FocusedVisual", NULL, (void*)Focus__get_FocusedVisual_fn, 0, true, ::g::Fuse::Visual_typeof(), 0),
        new uFunction("get_Gained", NULL, (void*)Focus__get_Gained_fn, 0, true, ::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::FocusGainedHandler_typeof(), ::g::Fuse::Input::FocusGainedArgs_typeof()), 0),
        new uFunction("GetFocusDelegate", NULL, (void*)Focus__GetFocusDelegate_fn, 0, true, ::g::Fuse::Visual_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("GiveTo", NULL, (void*)Focus__GiveTo_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("IsFocusable", NULL, (void*)Focus__IsFocusable_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("get_IsFocusableChanged", NULL, (void*)Focus__get_IsFocusableChanged_fn, 0, true, ::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::IsFocusableChangedHandler_typeof(), ::g::Fuse::Input::IsFocusableChangedArgs_typeof()), 0),
        new uFunction("IsWithin", NULL, (void*)Focus__IsWithin_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("get_Lost", NULL, (void*)Focus__get_Lost_fn, 0, true, ::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::FocusLostHandler_typeof(), ::g::Fuse::Input::FocusLostArgs_typeof()), 0),
        new uFunction("Move", NULL, (void*)Focus__Move_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Input::FocusNavigationDirection_typeof()),
        new uFunction("Obtained", NULL, (void*)Focus__Obtained_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("Release", NULL, (void*)Focus__Release_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("ReleaseFrom", NULL, (void*)Focus__ReleaseFrom_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("ResetFocusDelegate", NULL, (void*)Focus__ResetFocusDelegate_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("ResetIsFocusable", NULL, (void*)Focus__ResetIsFocusable_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("SetDelegator", NULL, (void*)Focus__SetDelegator_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Input::FocusDelegator_typeof()),
        new uFunction("SetFocusDelegate", NULL, (void*)Focus__SetFocusDelegate_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Visual_typeof()),
        new uFunction("SetIsFocusable", NULL, (void*)Focus__SetIsFocusable_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Uno::Bool_typeof()));
}

uClassType* Focus_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Input.Focus", options);
    type->fp_build_ = Focus_build;
    type->fp_cctor_ = Focus__cctor__fn;
    return type;
}

// internal static bool CanSetFocus(Fuse.Node node) :425
void Focus__CanSetFocus_fn(::g::Fuse::Node* node, bool* __retval)
{
    *__retval = Focus::CanSetFocus(node);
}

// private static void ChangeFocusedVisual(Fuse.Visual node, [string memberName]) :373
void Focus__ChangeFocusedVisual_fn(::g::Fuse::Visual* node, uString* memberName)
{
    Focus::ChangeFocusedVisual(node, memberName);
}

// private static Fuse.Visual FindRoot() :324
void Focus__FindRoot_fn(::g::Fuse::Visual** __retval)
{
    *__retval = Focus::FindRoot();
}

// public static Fuse.Visual get_FocusedVisual() :250
void Focus__get_FocusedVisual_fn(::g::Fuse::Visual** __retval)
{
    *__retval = Focus::FocusedVisual();
}

// public static Fuse.VisualEvent<Fuse.Input.FocusGainedHandler, Fuse.Input.FocusGainedArgs> get_Gained() :241
void Focus__get_Gained_fn(::g::Fuse::VisualEvent** __retval)
{
    *__retval = Focus::Gained();
}

// private static Fuse.Input.FocusDelegator GetDelegator(Fuse.Visual n) :260
void Focus__GetDelegator_fn(::g::Fuse::Visual* n, uDelegate** __retval)
{
    *__retval = Focus::GetDelegator(n);
}

// public static Fuse.Visual GetFocusDelegate(Fuse.Visual n) :465
void Focus__GetFocusDelegate_fn(::g::Fuse::Visual* n, ::g::Fuse::Visual** __retval)
{
    *__retval = Focus::GetFocusDelegate(n);
}

// public static void GiveTo(Fuse.Visual n) :306
void Focus__GiveTo_fn(::g::Fuse::Visual* n)
{
    Focus::GiveTo(n);
}

// internal static bool HandlesFocusEvent(Fuse.Visual n) :456
void Focus__HandlesFocusEvent_fn(::g::Fuse::Visual* n, bool* __retval)
{
    *__retval = Focus::HandlesFocusEvent(n);
}

// public static bool IsFocusable(Fuse.Visual n) :434
void Focus__IsFocusable_fn(::g::Fuse::Visual* n, bool* __retval)
{
    *__retval = Focus::IsFocusable(n);
}

// public static Fuse.VisualEvent<Fuse.Input.IsFocusableChangedHandler, Fuse.Input.IsFocusableChangedArgs> get_IsFocusableChanged() :243
void Focus__get_IsFocusableChanged_fn(::g::Fuse::VisualEvent** __retval)
{
    *__retval = Focus::IsFocusableChanged();
}

// public static bool IsWithin(Fuse.Visual n) :311
void Focus__IsWithin_fn(::g::Fuse::Visual* n, bool* __retval)
{
    *__retval = Focus::IsWithin(n);
}

// public static Fuse.VisualEvent<Fuse.Input.FocusLostHandler, Fuse.Input.FocusLostArgs> get_Lost() :242
void Focus__get_Lost_fn(::g::Fuse::VisualEvent** __retval)
{
    *__retval = Focus::Lost();
}

// public static void Move(Fuse.Input.FocusNavigationDirection direction) :278
void Focus__Move_fn(int* direction)
{
    Focus::Move(*direction);
}

// public static void Obtained(Fuse.Visual n) :301
void Focus__Obtained_fn(::g::Fuse::Visual* n)
{
    Focus::Obtained(n);
}

// internal static void OnWindowGotFocus(object sender, Uno.EventArgs args) :267
void Focus__OnWindowGotFocus_fn(uObject* sender, ::g::Uno::EventArgs* args)
{
    Focus::OnWindowGotFocus(sender, args);
}

// internal static void OnWindowLostFocus(object sender, Uno.EventArgs args) :273
void Focus__OnWindowLostFocus_fn(uObject* sender, ::g::Uno::EventArgs* args)
{
    Focus::OnWindowLostFocus(sender, args);
}

// private static Fuse.Visual Predict(Fuse.Input.FocusNavigationDirection direction) :355
void Focus__Predict_fn(int* direction, ::g::Fuse::Visual** __retval)
{
    *__retval = Focus::Predict(*direction);
}

// public static void Release() :287
void Focus__Release_fn()
{
    Focus::Release();
}

// public static void ReleaseFrom(Fuse.Visual n) :294
void Focus__ReleaseFrom_fn(::g::Fuse::Visual* n)
{
    Focus::ReleaseFrom(n);
}

// public static void ResetFocusDelegate(Fuse.Visual n) :477
void Focus__ResetFocusDelegate_fn(::g::Fuse::Visual* n)
{
    Focus::ResetFocusDelegate(n);
}

// public static void ResetIsFocusable(Fuse.Visual n) :446
void Focus__ResetIsFocusable_fn(::g::Fuse::Visual* n)
{
    Focus::ResetIsFocusable(n);
}

// public static void SetDelegator(Fuse.Visual n, Fuse.Input.FocusDelegator delegator) :255
void Focus__SetDelegator_fn(::g::Fuse::Visual* n, uDelegate* delegator)
{
    Focus::SetDelegator(n, delegator);
}

// public static void SetFocusDelegate(Fuse.Visual n, Fuse.Visual d) :471
void Focus__SetFocusDelegate_fn(::g::Fuse::Visual* n, ::g::Fuse::Visual* d)
{
    Focus::SetFocusDelegate(n, d);
}

// public static void SetIsFocusable(Fuse.Visual n, bool focusable) :440
void Focus__SetIsFocusable_fn(::g::Fuse::Visual* n, bool* focusable)
{
    Focus::SetIsFocusable(n, *focusable);
}

uSStrong< ::g::Fuse::PropertyHandle*> Focus::_focusDelegatorHandle_;
uSStrong< ::g::Fuse::Visual*> Focus::_focusedObject_;
uSStrong< ::g::Fuse::Input::FocusGained*> Focus::_gained_;
uSStrong< ::g::Fuse::Input::IsFocusableChangedEvent*> Focus::_isFoucsableChanged_;
uSStrong< ::g::Fuse::Visual*> Focus::_lastFocusedVisual_;
uSStrong< ::g::Fuse::Input::FocusLost*> Focus::_lost_;

// internal static bool CanSetFocus(Fuse.Node node) [static] :425
bool Focus::CanSetFocus(::g::Fuse::Node* node)
{
    uStackFrame __("Fuse.Input.Focus", "CanSetFocus(Fuse.Node)");
    Focus_typeof()->Init();

    if (node == NULL)
        return true;

    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(node, ::TYPES[1/*Fuse.Visual*/]);

    if (v == NULL)
        return false;

    return (uPtr(v)->IsRootingCompleted() && uPtr(v)->IsContextEnabled()) && Focus::IsFocusable(v);
}

// private static void ChangeFocusedVisual(Fuse.Visual node, [string memberName]) [static] :373
void Focus::ChangeFocusedVisual(::g::Fuse::Visual* node, uString* memberName)
{
    uStackFrame __("Fuse.Input.Focus", "ChangeFocusedVisual(Fuse.Visual,[string])");
    Focus_typeof()->Init();

    if (node == Focus::_focusedObject())
        return;

    while (node != NULL)
    {
        uDelegate* delegator = Focus::GetDelegator(node);

        if (::g::Uno::Delegate::op_Inequality(delegator, NULL))
        {
            node = (::g::Fuse::Visual*)uPtr(delegator)->Invoke();
            continue;
        }

        ::g::Fuse::Visual* focusDelegate = Focus::GetFocusDelegate(node);

        if (focusDelegate != NULL)
        {
            node = focusDelegate;
            continue;
        }

        break;
    }

    if (!Focus::CanSetFocus(node))
        node = NULL;

    if (node == Focus::_focusedObject())
        return;

    Focus::_lastFocusedVisual() = Focus::_focusedObject();
    Focus::_focusedObject() = node;

    if (Focus::_lastFocusedVisual() != NULL)
    {
        uObject* nf = uAs<uObject*>(Focus::_lastFocusedVisual(), ::TYPES[2/*Fuse.Input.INotifyFocus*/]);

        if (nf != NULL)
            ::g::Fuse::Input::INotifyFocus::OnFocusLost(uInterface(uPtr(nf), ::TYPES[2/*Fuse.Input.INotifyFocus*/]));

        uPtr(Focus::Lost())->RaiseWithBubble(::g::Fuse::Input::FocusLostArgs::New3(Focus::_lastFocusedVisual()), 0);
    }

    if (Focus::_focusedObject() != NULL)
    {
        uObject* nf1 = uAs<uObject*>(Focus::_focusedObject(), ::TYPES[2/*Fuse.Input.INotifyFocus*/]);

        if (nf1 != NULL)
            ::g::Fuse::Input::INotifyFocus::OnFocusGained(uInterface(uPtr(nf1), ::TYPES[2/*Fuse.Input.INotifyFocus*/]));

        uPtr(Focus::Gained())->RaiseWithBubble(::g::Fuse::Input::FocusGainedArgs::New3(Focus::_focusedObject()), 0);
    }
}

// private static Fuse.Visual FindRoot() [static] :324
::g::Fuse::Visual* Focus::FindRoot()
{
    uStackFrame __("Fuse.Input.Focus", "FindRoot()");
    Focus_typeof()->Init();
    ::g::Fuse::Node* ret3;
    ::g::Fuse::AppBase* app = uAs< ::g::Fuse::AppBase*>(::g::Uno::Application::Current(), ::TYPES[3/*Fuse.AppBase*/]);

    if (app != NULL)
    {
        ::g::Fuse::Visual* root = NULL;

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(app)->Children()), ::TYPES[4/*Uno.Collections.IEnumerable<Fuse.Node>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[5/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Fuse::Node* child = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[6/*Uno.Collections.IEnumerator<Fuse.Node>*/]), &ret3), ret3);

            if (uIs(child, ::TYPES[1/*Fuse.Visual*/]))
            {
                root = uCast< ::g::Fuse::Visual*>(child, ::TYPES[1/*Fuse.Visual*/]);
                break;
            }
        }

        while (root != NULL)
            if (uPtr(root)->Parent() != NULL)
                root = uPtr(root)->Parent();
            else 
                break;

        return root;
    }

    return NULL;
}

// private static Fuse.Input.FocusDelegator GetDelegator(Fuse.Visual n) [static] :260
uDelegate* Focus::GetDelegator(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Input.Focus", "GetDelegator(Fuse.Visual)");
    Focus_typeof()->Init();
    uObject* res;

    if (uPtr(uPtr(n)->Properties())->TryGet(Focus::_focusDelegatorHandle(), &res))
        return uCast<uDelegate*>(res, ::TYPES[7/*Fuse.Input.FocusDelegator*/]);

    return NULL;
}

// public static Fuse.Visual GetFocusDelegate(Fuse.Visual n) [static] :465
::g::Fuse::Visual* Focus::GetFocusDelegate(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Input.Focus", "GetFocusDelegate(Fuse.Visual)");
    Focus_typeof()->Init();
    return uPtr(n)->_focusDelegate;
}

// public static void GiveTo(Fuse.Visual n) [static] :306
void Focus::GiveTo(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Input.Focus", "GiveTo(Fuse.Visual)");
    Focus_typeof()->Init();
    Focus::ChangeFocusedVisual(n, ::STRINGS[1/*"GiveTo"*/]);
}

// internal static bool HandlesFocusEvent(Fuse.Visual n) [static] :456
bool Focus::HandlesFocusEvent(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Input.Focus", "HandlesFocusEvent(Fuse.Visual)");
    Focus_typeof()->Init();
    return (Focus::IsFocusable(n) || ::g::Uno::Delegate::op_Inequality(Focus::GetDelegator(n), NULL)) || (Focus::GetFocusDelegate(n) != NULL);
}

// public static bool IsFocusable(Fuse.Visual n) [static] :434
bool Focus::IsFocusable(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Input.Focus", "IsFocusable(Fuse.Visual)");
    Focus_typeof()->Init();
    return uPtr(n)->_isFocusable;
}

// public static bool IsWithin(Fuse.Visual n) [static] :311
bool Focus::IsWithin(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Input.Focus", "IsWithin(Fuse.Visual)");
    Focus_typeof()->Init();
    ::g::Fuse::Visual* k = Focus::FocusedVisual();

    while (k != NULL)
    {
        if (k == n)
            return true;

        k = uPtr(k)->Parent();
    }

    return false;
}

// public static void Move(Fuse.Input.FocusNavigationDirection direction) [static] :278
void Focus::Move(int direction)
{
    uStackFrame __("Fuse.Input.Focus", "Move(Fuse.Input.FocusNavigationDirection)");
    Focus_typeof()->Init();
    ::g::Fuse::Visual* predictedFocus = Focus::Predict(direction);

    if (predictedFocus == NULL)
        return;

    Focus::ChangeFocusedVisual(predictedFocus, ::STRINGS[2/*"Move"*/]);
}

// public static void Obtained(Fuse.Visual n) [static] :301
void Focus::Obtained(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Input.Focus", "Obtained(Fuse.Visual)");
    Focus_typeof()->Init();
    Focus::ChangeFocusedVisual(n, ::STRINGS[3/*"Obtained"*/]);
}

// internal static void OnWindowGotFocus(object sender, Uno.EventArgs args) [static] :267
void Focus::OnWindowGotFocus(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Input.Focus", "OnWindowGotFocus(object,Uno.EventArgs)");
    Focus_typeof()->Init();
    ::g::Fuse::Visual* ind2;
    Focus::ChangeFocusedVisual((ind2 = Focus::_focusedObject(), (ind2 != NULL) ? ind2 : (::g::Fuse::Visual*)Focus::_lastFocusedVisual()), ::STRINGS[4/*"OnWindowGot...*/]);
}

// internal static void OnWindowLostFocus(object sender, Uno.EventArgs args) [static] :273
void Focus::OnWindowLostFocus(uObject* sender, ::g::Uno::EventArgs* args)
{
    Focus_typeof()->Init();
}

// private static Fuse.Visual Predict(Fuse.Input.FocusNavigationDirection direction) [static] :355
::g::Fuse::Visual* Focus::Predict(int direction)
{
    uStackFrame __("Fuse.Input.Focus", "Predict(Fuse.Input.FocusNavigationDirection)");
    Focus_typeof()->Init();
    ::g::Fuse::Visual* node = ::g::Fuse::Input::FocusPredictStrategy::Predict(Focus::_focusedObject(), direction);

    if (node == NULL)
    {
        ::g::Fuse::Visual* root = Focus::FindRoot();

        if (root != NULL)
        {
            node = ::g::Fuse::Input::FocusPredictStrategy::Predict(root, direction);

            if ((node == NULL) && Focus::CanSetFocus(root))
                node = root;
        }
    }

    return node;
}

// public static void Release() [static] :287
void Focus::Release()
{
    uStackFrame __("Fuse.Input.Focus", "Release()");
    Focus_typeof()->Init();
    Focus::_lastFocusedVisual() = NULL;
    Focus::ChangeFocusedVisual(NULL, ::STRINGS[5/*"Release"*/]);
}

// public static void ReleaseFrom(Fuse.Visual n) [static] :294
void Focus::ReleaseFrom(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Input.Focus", "ReleaseFrom(Fuse.Visual)");
    Focus_typeof()->Init();

    if (Focus::FocusedVisual() == n)
        Focus::Release();
}

// public static void ResetFocusDelegate(Fuse.Visual n) [static] :477
void Focus::ResetFocusDelegate(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Input.Focus", "ResetFocusDelegate(Fuse.Visual)");
    Focus_typeof()->Init();
    uPtr(n)->_focusDelegate = NULL;
}

// public static void ResetIsFocusable(Fuse.Visual n) [static] :446
void Focus::ResetIsFocusable(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Input.Focus", "ResetIsFocusable(Fuse.Visual)");
    Focus_typeof()->Init();
    uPtr(n)->_isFocusable = false;
}

// public static void SetDelegator(Fuse.Visual n, Fuse.Input.FocusDelegator delegator) [static] :255
void Focus::SetDelegator(::g::Fuse::Visual* n, uDelegate* delegator)
{
    uStackFrame __("Fuse.Input.Focus", "SetDelegator(Fuse.Visual,Fuse.Input.FocusDelegator)");
    Focus_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Set(Focus::_focusDelegatorHandle(), delegator);
}

// public static void SetFocusDelegate(Fuse.Visual n, Fuse.Visual d) [static] :471
void Focus::SetFocusDelegate(::g::Fuse::Visual* n, ::g::Fuse::Visual* d)
{
    uStackFrame __("Fuse.Input.Focus", "SetFocusDelegate(Fuse.Visual,Fuse.Visual)");
    Focus_typeof()->Init();
    uPtr(n)->_focusDelegate = d;
}

// public static void SetIsFocusable(Fuse.Visual n, bool focusable) [static] :440
void Focus::SetIsFocusable(::g::Fuse::Visual* n, bool focusable)
{
    uStackFrame __("Fuse.Input.Focus", "SetIsFocusable(Fuse.Visual,bool)");
    Focus_typeof()->Init();
    uPtr(n)->_isFocusable = focusable;
}

// public static Fuse.Visual get_FocusedVisual() [static] :250
::g::Fuse::Visual* Focus::FocusedVisual()
{
    uStackFrame __("Fuse.Input.Focus", "get_FocusedVisual()");
    Focus_typeof()->Init();
    return Focus::_focusedObject();
}

// public static Fuse.VisualEvent<Fuse.Input.FocusGainedHandler, Fuse.Input.FocusGainedArgs> get_Gained() [static] :241
::g::Fuse::VisualEvent* Focus::Gained()
{
    uStackFrame __("Fuse.Input.Focus", "get_Gained()");
    Focus_typeof()->Init();
    return Focus::_gained();
}

// public static Fuse.VisualEvent<Fuse.Input.IsFocusableChangedHandler, Fuse.Input.IsFocusableChangedArgs> get_IsFocusableChanged() [static] :243
::g::Fuse::VisualEvent* Focus::IsFocusableChanged()
{
    uStackFrame __("Fuse.Input.Focus", "get_IsFocusableChanged()");
    Focus_typeof()->Init();
    return Focus::_isFoucsableChanged();
}

// public static Fuse.VisualEvent<Fuse.Input.FocusLostHandler, Fuse.Input.FocusLostArgs> get_Lost() [static] :242
::g::Fuse::VisualEvent* Focus::Lost()
{
    uStackFrame __("Fuse.Input.Focus", "get_Lost()");
    Focus_typeof()->Init();
    return Focus::_lost();
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// public delegate Fuse.Visual FocusDelegator() :227
uDelegateType* FocusDelegator_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Input.FocusDelegator", 0, 0);
    type->SetSignature(::g::Fuse::Visual_typeof());
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// internal sealed class FocusGained :16
// {
static void FocusGained_build(uType* type)
{
    type->SetBase(::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::FocusGainedHandler_typeof(), ::g::Fuse::Input::FocusGainedArgs_typeof()));
    type->SetFields(2);
}

::g::Fuse::VisualEvent_type* FocusGained_typeof()
{
    static uSStrong< ::g::Fuse::VisualEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEvent_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FocusGained);
    options.TypeSize = sizeof(::g::Fuse::VisualEvent_type);
    type = (::g::Fuse::VisualEvent_type*)uClassType::New("Fuse.Input.FocusGained", options);
    type->fp_build_ = FocusGained_build;
    type->fp_ctor_ = (void*)FocusGained__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::VisualEvent*, void*, uObject*, ::g::Fuse::VisualEventArgs*))FocusGained__Invoke_fn;
    return type;
}

// public generated FocusGained() :16
void FocusGained__ctor_1_fn(FocusGained* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.FocusGainedHandler handler, object sender, Fuse.Input.FocusGainedArgs args) :18
void FocusGained__Invoke_fn(FocusGained* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::FocusGainedArgs* args)
{
    uStackFrame __("Fuse.Input.FocusGained", "Invoke(Fuse.Input.FocusGainedHandler,object,Fuse.Input.FocusGainedArgs)");
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated FocusGained New() :16
void FocusGained__New1_fn(FocusGained** __retval)
{
    *__retval = FocusGained::New1();
}

// public generated FocusGained() [instance] :16
void FocusGained::ctor_1()
{
    uStackFrame __("Fuse.Input.FocusGained", ".ctor()");
    ctor_();
}

// public generated FocusGained New() [static] :16
FocusGained* FocusGained::New1()
{
    FocusGained* obj1 = (FocusGained*)uNew(FocusGained_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// public sealed class FocusGainedArgs :9
// {
static void FocusGainedArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)FocusGainedArgs__New3_fn, 0, true, FocusGainedArgs_typeof(), 1, ::g::Fuse::Visual_typeof()));
}

::g::Fuse::VisualEventArgs_type* FocusGainedArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEventArgs_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FocusGainedArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Input.FocusGainedArgs", options);
    type->fp_build_ = FocusGainedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public FocusGainedArgs(Fuse.Visual visual) :11
void FocusGainedArgs__ctor_2_fn(FocusGainedArgs* __this, ::g::Fuse::Visual* visual)
{
    __this->ctor_2(visual);
}

// public FocusGainedArgs New(Fuse.Visual visual) :11
void FocusGainedArgs__New3_fn(::g::Fuse::Visual* visual, FocusGainedArgs** __retval)
{
    *__retval = FocusGainedArgs::New3(visual);
}

// public FocusGainedArgs(Fuse.Visual visual) [instance] :11
void FocusGainedArgs::ctor_2(::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Input.FocusGainedArgs", ".ctor(Fuse.Visual)");
    ctor_1(visual);
}

// public FocusGainedArgs New(Fuse.Visual visual) [static] :11
FocusGainedArgs* FocusGainedArgs::New3(::g::Fuse::Visual* visual)
{
    FocusGainedArgs* obj1 = (FocusGainedArgs*)uNew(FocusGainedArgs_typeof());
    obj1->ctor_2(visual);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// public delegate void FocusGainedHandler(object sender, Fuse.Input.FocusGainedArgs args) :14
uDelegateType* FocusGainedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Input.FocusGainedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::FocusGainedArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// internal sealed class FocusLost :34
// {
static void FocusLost_build(uType* type)
{
    type->SetBase(::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::FocusLostHandler_typeof(), ::g::Fuse::Input::FocusLostArgs_typeof()));
    type->SetFields(2);
}

::g::Fuse::VisualEvent_type* FocusLost_typeof()
{
    static uSStrong< ::g::Fuse::VisualEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEvent_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FocusLost);
    options.TypeSize = sizeof(::g::Fuse::VisualEvent_type);
    type = (::g::Fuse::VisualEvent_type*)uClassType::New("Fuse.Input.FocusLost", options);
    type->fp_build_ = FocusLost_build;
    type->fp_ctor_ = (void*)FocusLost__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::VisualEvent*, void*, uObject*, ::g::Fuse::VisualEventArgs*))FocusLost__Invoke_fn;
    return type;
}

// public generated FocusLost() :34
void FocusLost__ctor_1_fn(FocusLost* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.FocusLostHandler handler, object sender, Fuse.Input.FocusLostArgs args) :36
void FocusLost__Invoke_fn(FocusLost* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::FocusLostArgs* args)
{
    uStackFrame __("Fuse.Input.FocusLost", "Invoke(Fuse.Input.FocusLostHandler,object,Fuse.Input.FocusLostArgs)");
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated FocusLost New() :34
void FocusLost__New1_fn(FocusLost** __retval)
{
    *__retval = FocusLost::New1();
}

// public generated FocusLost() [instance] :34
void FocusLost::ctor_1()
{
    uStackFrame __("Fuse.Input.FocusLost", ".ctor()");
    ctor_();
}

// public generated FocusLost New() [static] :34
FocusLost* FocusLost::New1()
{
    FocusLost* obj1 = (FocusLost*)uNew(FocusLost_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// public sealed class FocusLostArgs :27
// {
static void FocusLostArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)FocusLostArgs__New3_fn, 0, true, FocusLostArgs_typeof(), 1, ::g::Fuse::Visual_typeof()));
}

::g::Fuse::VisualEventArgs_type* FocusLostArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEventArgs_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FocusLostArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Input.FocusLostArgs", options);
    type->fp_build_ = FocusLostArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public FocusLostArgs(Fuse.Visual visual) :29
void FocusLostArgs__ctor_2_fn(FocusLostArgs* __this, ::g::Fuse::Visual* visual)
{
    __this->ctor_2(visual);
}

// public FocusLostArgs New(Fuse.Visual visual) :29
void FocusLostArgs__New3_fn(::g::Fuse::Visual* visual, FocusLostArgs** __retval)
{
    *__retval = FocusLostArgs::New3(visual);
}

// public FocusLostArgs(Fuse.Visual visual) [instance] :29
void FocusLostArgs::ctor_2(::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Input.FocusLostArgs", ".ctor(Fuse.Visual)");
    ctor_1(visual);
}

// public FocusLostArgs New(Fuse.Visual visual) [static] :29
FocusLostArgs* FocusLostArgs::New3(::g::Fuse::Visual* visual)
{
    FocusLostArgs* obj1 = (FocusLostArgs*)uNew(FocusLostArgs_typeof());
    obj1->ctor_2(visual);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// public delegate void FocusLostHandler(object sender, Fuse.Input.FocusLostArgs args) :32
uDelegateType* FocusLostHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Input.FocusLostHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::FocusLostArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// public enum FocusNavigationDirection :219
uEnumType* FocusNavigationDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Input.FocusNavigationDirection", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Up", 0LL,
        "Down", 1LL,
        "Left", 2LL,
        "Right", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// internal static class FocusPrediction :87
// {
static void FocusPrediction_build(uType* type)
{
    ::TYPES[4] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[5] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[6] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[9] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[10] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Fuse::Node_typeof());
    ::TYPES[11] = ::g::Uno::Predicate_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[12] = ::g::Uno::Func1_typeof()->MakeType(::g::Fuse::Visual_typeof(), ::g::Fuse::Visual_typeof());
}

uClassType* FocusPrediction_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Input.FocusPrediction", options);
    type->fp_build_ = FocusPrediction_build;
    return type;
}

// private static Fuse.Visual FirstVisualChild(Fuse.Visual visual) :185
void FocusPrediction__FirstVisualChild_fn(::g::Fuse::Visual* visual, ::g::Fuse::Visual** __retval)
{
    *__retval = FocusPrediction::FirstVisualChild(visual);
}

// private static Fuse.Visual LastVisualChild(Fuse.Visual visual) :195
void FocusPrediction__LastVisualChild_fn(::g::Fuse::Visual* visual, ::g::Fuse::Visual** __retval)
{
    *__retval = FocusPrediction::LastVisualChild(visual);
}

// private static Fuse.Visual NextSibling(Fuse.Visual visual) :139
void FocusPrediction__NextSibling_fn(::g::Fuse::Visual* visual, ::g::Fuse::Visual** __retval)
{
    *__retval = FocusPrediction::NextSibling(visual);
}

// private static Fuse.Visual NextSibling(Fuse.Visual parent, Fuse.Visual child) :146
void FocusPrediction__NextSibling1_fn(::g::Fuse::Visual* parent, ::g::Fuse::Visual* child, ::g::Fuse::Visual** __retval)
{
    *__retval = FocusPrediction::NextSibling1(parent, child);
}

// private static Fuse.Visual Predict(Fuse.Visual visual, Uno.Predicate<Fuse.Node> filter, Uno.Func<Fuse.Visual, Fuse.Visual> getChild, Uno.Func<Fuse.Visual, Fuse.Visual> getSibling) :116
void FocusPrediction__Predict_fn(::g::Fuse::Visual* visual, uDelegate* filter, uDelegate* getChild, uDelegate* getSibling, ::g::Fuse::Visual** __retval)
{
    *__retval = FocusPrediction::Predict(visual, filter, getChild, getSibling);
}

// public static Fuse.Visual PredictNextVisual(Fuse.Visual visual, Uno.Predicate<Fuse.Node> filter) :111
void FocusPrediction__PredictNextVisual_fn(::g::Fuse::Visual* visual, uDelegate* filter, ::g::Fuse::Visual** __retval)
{
    *__retval = FocusPrediction::PredictNextVisual(visual, filter);
}

// public static Fuse.Visual PredictPreviousVisual(Fuse.Visual visual, Uno.Predicate<Fuse.Node> filter) :106
void FocusPrediction__PredictPreviousVisual_fn(::g::Fuse::Visual* visual, uDelegate* filter, ::g::Fuse::Visual** __retval)
{
    *__retval = FocusPrediction::PredictPreviousVisual(visual, filter);
}

// private static Fuse.Visual PreviousSibling(Fuse.Visual visual) :163
void FocusPrediction__PreviousSibling_fn(::g::Fuse::Visual* visual, ::g::Fuse::Visual** __retval)
{
    *__retval = FocusPrediction::PreviousSibling(visual);
}

// private static Fuse.Visual PreviousSibling(Fuse.Visual parent, Fuse.Visual child) :170
void FocusPrediction__PreviousSibling1_fn(::g::Fuse::Visual* parent, ::g::Fuse::Visual* child, ::g::Fuse::Visual** __retval)
{
    *__retval = FocusPrediction::PreviousSibling1(parent, child);
}

// private static Fuse.Visual FirstVisualChild(Fuse.Visual visual) [static] :185
::g::Fuse::Visual* FocusPrediction::FirstVisualChild(::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Input.FocusPrediction", "FirstVisualChild(Fuse.Visual)");
    ::g::Fuse::Node* ret2;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(visual)->Children()), ::TYPES[4/*Uno.Collections.IEnumerable<Fuse.Node>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[5/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::Node* c = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[6/*Uno.Collections.IEnumerator<Fuse.Node>*/]), &ret2), ret2);

        if (uIs(c, ::TYPES[1/*Fuse.Visual*/]))
            return uCast< ::g::Fuse::Visual*>(c, ::TYPES[1/*Fuse.Visual*/]);
    }

    return NULL;
}

// private static Fuse.Visual LastVisualChild(Fuse.Visual visual) [static] :195
::g::Fuse::Visual* FocusPrediction::LastVisualChild(::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Input.FocusPrediction", "LastVisualChild(Fuse.Visual)");
    ::g::Fuse::Node* ret3;

    for (int i = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(visual)->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/])) - 1; i >= 0; i--)
    {
        ::g::Fuse::Visual* c = uAs< ::g::Fuse::Visual*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(visual)->Children()), ::TYPES[9/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret3), ret3), ::TYPES[1/*Fuse.Visual*/]);

        if (c != NULL)
            return c;
    }

    return NULL;
}

// private static Fuse.Visual NextSibling(Fuse.Visual visual) [static] :139
::g::Fuse::Visual* FocusPrediction::NextSibling(::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Input.FocusPrediction", "NextSibling(Fuse.Visual)");
    return (uPtr(visual)->Parent() != NULL) ? (::g::Fuse::Visual*)FocusPrediction::NextSibling1(uPtr(visual)->Parent(), visual) : NULL;
}

// private static Fuse.Visual NextSibling(Fuse.Visual parent, Fuse.Visual child) [static] :146
::g::Fuse::Visual* FocusPrediction::NextSibling1(::g::Fuse::Visual* parent, ::g::Fuse::Visual* child)
{
    uStackFrame __("Fuse.Input.FocusPrediction", "NextSibling(Fuse.Visual,Fuse.Visual)");
    int ret4;
    ::g::Fuse::Node* ret5;
    int count = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(parent)->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/]));
    int index = (::g::Uno::Collections::EnumerableExtensions__IndexOf_fn(::TYPES[10/*Uno.Collections.EnumerableExtensions.IndexOf<Fuse.Node>*/], parent->Children(), child, &ret4), ret4);
    int offset = index + 1;

    if (offset < count)

        for (int i = offset; i < count; i++)
        {
            ::g::Fuse::Visual* c = uAs< ::g::Fuse::Visual*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(parent)->Children()), ::TYPES[9/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret5), ret5), ::TYPES[1/*Fuse.Visual*/]);

            if (c != NULL)
                return c;
        }

    return FocusPrediction::NextSibling(parent);
}

// private static Fuse.Visual Predict(Fuse.Visual visual, Uno.Predicate<Fuse.Node> filter, Uno.Func<Fuse.Visual, Fuse.Visual> getChild, Uno.Func<Fuse.Visual, Fuse.Visual> getSibling) [static] :116
::g::Fuse::Visual* FocusPrediction::Predict(::g::Fuse::Visual* visual, uDelegate* filter, uDelegate* getChild, uDelegate* getSibling)
{
    uStackFrame __("Fuse.Input.FocusPrediction", "Predict(Fuse.Visual,Uno.Predicate<Fuse.Node>,Uno.Func<Fuse.Visual, Fuse.Visual>,Uno.Func<Fuse.Visual, Fuse.Visual>)");
    bool ret6;
    bool ret7;

    if (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(visual)->Children()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Node>*/])) > 0)
    {
        ::g::Fuse::Visual* child = (::g::Fuse::Visual*)uPtr(getChild)->Invoke(1, visual);
        return (uPtr(filter)->Invoke(&ret6, 1, child), ret6) ? child : (::g::Fuse::Visual*)FocusPrediction::Predict(child, filter, getChild, getSibling);
    }

    ::g::Fuse::Visual* sibling = (::g::Fuse::Visual*)uPtr(getSibling)->Invoke(1, visual);

    if (sibling != NULL)
        return (uPtr(filter)->Invoke(&ret7, 1, sibling), ret7) ? sibling : (::g::Fuse::Visual*)FocusPrediction::Predict(sibling, filter, getChild, getSibling);

    return NULL;
}

// public static Fuse.Visual PredictNextVisual(Fuse.Visual visual, Uno.Predicate<Fuse.Node> filter) [static] :111
::g::Fuse::Visual* FocusPrediction::PredictNextVisual(::g::Fuse::Visual* visual, uDelegate* filter)
{
    uStackFrame __("Fuse.Input.FocusPrediction", "PredictNextVisual(Fuse.Visual,Uno.Predicate<Fuse.Node>)");
    return FocusPrediction::Predict(visual, uDelegate::New(::TYPES[11/*Uno.Predicate<Fuse.Node>*/], (void*)FocusPrediction__PredictFilter__Filter_fn, FocusPrediction__PredictFilter::New1(visual, filter)), uDelegate::New(::TYPES[12/*Uno.Func<Fuse.Visual, Fuse.Visual>*/], (void*)FocusPrediction__FirstVisualChild_fn), uDelegate::New(::TYPES[12/*Uno.Func<Fuse.Visual, Fuse.Visual>*/], (void*)FocusPrediction__NextSibling_fn));
}

// public static Fuse.Visual PredictPreviousVisual(Fuse.Visual visual, Uno.Predicate<Fuse.Node> filter) [static] :106
::g::Fuse::Visual* FocusPrediction::PredictPreviousVisual(::g::Fuse::Visual* visual, uDelegate* filter)
{
    uStackFrame __("Fuse.Input.FocusPrediction", "PredictPreviousVisual(Fuse.Visual,Uno.Predicate<Fuse.Node>)");
    return FocusPrediction::Predict(visual, uDelegate::New(::TYPES[11/*Uno.Predicate<Fuse.Node>*/], (void*)FocusPrediction__PredictFilter__Filter_fn, FocusPrediction__PredictFilter::New1(visual, filter)), uDelegate::New(::TYPES[12/*Uno.Func<Fuse.Visual, Fuse.Visual>*/], (void*)FocusPrediction__LastVisualChild_fn), uDelegate::New(::TYPES[12/*Uno.Func<Fuse.Visual, Fuse.Visual>*/], (void*)FocusPrediction__PreviousSibling_fn));
}

// private static Fuse.Visual PreviousSibling(Fuse.Visual visual) [static] :163
::g::Fuse::Visual* FocusPrediction::PreviousSibling(::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Input.FocusPrediction", "PreviousSibling(Fuse.Visual)");
    return (uPtr(visual)->Parent() != NULL) ? (::g::Fuse::Visual*)FocusPrediction::PreviousSibling1(uPtr(visual)->Parent(), visual) : NULL;
}

// private static Fuse.Visual PreviousSibling(Fuse.Visual parent, Fuse.Visual child) [static] :170
::g::Fuse::Visual* FocusPrediction::PreviousSibling1(::g::Fuse::Visual* parent, ::g::Fuse::Visual* child)
{
    uStackFrame __("Fuse.Input.FocusPrediction", "PreviousSibling(Fuse.Visual,Fuse.Visual)");
    int ret8;
    ::g::Fuse::Node* ret9;
    int offset = (::g::Uno::Collections::EnumerableExtensions__IndexOf_fn(::TYPES[10/*Uno.Collections.EnumerableExtensions.IndexOf<Fuse.Node>*/], uPtr(parent)->Children(), child, &ret8), ret8) - 1;

    if (offset >= 0)

        for (int i = offset; i >= 0; i--)
        {
            ::g::Fuse::Visual* c = uAs< ::g::Fuse::Visual*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(parent)->Children()), ::TYPES[9/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret9), ret9), ::TYPES[1/*Fuse.Visual*/]);

            if (c != NULL)
                return c;
        }

    return FocusPrediction::PreviousSibling(parent);
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// internal static class FocusPredictStrategy :70
// {
static void FocusPredictStrategy_build(uType* type)
{
    ::TYPES[11] = ::g::Uno::Predicate_typeof()->MakeType(::g::Fuse::Node_typeof());
}

uClassType* FocusPredictStrategy_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Input.FocusPredictStrategy", options);
    type->fp_build_ = FocusPredictStrategy_build;
    return type;
}

// public static Fuse.Visual Predict(Fuse.Visual n, Fuse.Input.FocusNavigationDirection direction) :72
void FocusPredictStrategy__Predict_fn(::g::Fuse::Visual* n, int* direction, ::g::Fuse::Visual** __retval)
{
    *__retval = FocusPredictStrategy::Predict(n, *direction);
}

// public static Fuse.Visual Predict(Fuse.Visual n, Fuse.Input.FocusNavigationDirection direction) [static] :72
::g::Fuse::Visual* FocusPredictStrategy::Predict(::g::Fuse::Visual* n, int direction)
{
    uStackFrame __("Fuse.Input.FocusPredictStrategy", "Predict(Fuse.Visual,Fuse.Input.FocusNavigationDirection)");

    if (n != NULL)
    {
        if (direction == 1)
            return ::g::Fuse::Input::FocusPrediction::PredictNextVisual(n, uDelegate::New(::TYPES[11/*Uno.Predicate<Fuse.Node>*/], (void*)::g::Fuse::Input::Focus__CanSetFocus_fn));
        else  if (direction == 0)
            return ::g::Fuse::Input::FocusPrediction::PredictPreviousVisual(n, uDelegate::New(::TYPES[11/*Uno.Predicate<Fuse.Node>*/], (void*)::g::Fuse::Input::Focus__CanSetFocus_fn));
    }

    return NULL;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// public static class HitTestHelpers :516
// {
static void HitTestHelpers_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction("HitTestNearest", NULL, (void*)HitTestHelpers__HitTestNearest_fn, 0, true, ::g::Fuse::HitTestResult_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Uno::Float2_typeof()));
}

uClassType* HitTestHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Input.HitTestHelpers", options);
    type->fp_build_ = HitTestHelpers_build;
    return type;
}

// public static Fuse.HitTestResult HitTestNearest(Fuse.Visual root, float2 point) :518
void HitTestHelpers__HitTestNearest_fn(::g::Fuse::Visual* root, ::g::Uno::Float2* point, ::g::Fuse::HitTestResult** __retval)
{
    *__retval = HitTestHelpers::HitTestNearest(root, *point);
}

// public static Fuse.HitTestResult HitTestNearest(Fuse.Visual root, float2 point) [static] :518
::g::Fuse::HitTestResult* HitTestHelpers::HitTestNearest(::g::Fuse::Visual* root, ::g::Uno::Float2 point)
{
    uStackFrame __("Fuse.Input.HitTestHelpers", "HitTestNearest(Fuse.Visual,float2)");
    ::g::Fuse::Input::SelectionQuery* sq = ::g::Fuse::Input::SelectionQuery::New1();
    return sq->Select1(root, point);
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// public abstract interface INotifyFocus :229
// {
uInterfaceType* INotifyFocus_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Input.INotifyFocus", 0, 0);
    type->Reflection.SetFunctions(2,
        new uFunction("OnFocusGained", NULL, NULL, offsetof(INotifyFocus, fp_OnFocusGained), false, uVoid_typeof(), 0),
        new uFunction("OnFocusLost", NULL, NULL, offsetof(INotifyFocus, fp_OnFocusLost), false, uVoid_typeof(), 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// public abstract interface IPointerEventResponder :951
// {
uInterfaceType* IPointerEventResponder_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Input.IPointerEventResponder", 0, 0);
    type->Reflection.SetFunctions(4,
        new uFunction("OnPointerMoved", NULL, NULL, offsetof(IPointerEventResponder, fp_OnPointerMoved), false, uVoid_typeof(), 1, ::g::Fuse::Input::PointerMovedArgs_typeof()),
        new uFunction("OnPointerPressed", NULL, NULL, offsetof(IPointerEventResponder, fp_OnPointerPressed), false, uVoid_typeof(), 1, ::g::Fuse::Input::PointerPressedArgs_typeof()),
        new uFunction("OnPointerReleased", NULL, NULL, offsetof(IPointerEventResponder, fp_OnPointerReleased), false, uVoid_typeof(), 1, ::g::Fuse::Input::PointerReleasedArgs_typeof()),
        new uFunction("OnPointerWheelMoved", NULL, NULL, offsetof(IPointerEventResponder, fp_OnPointerWheelMoved), false, uVoid_typeof(), 1, ::g::Fuse::Input::PointerWheelMovedArgs_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// public sealed class IsFocusableChangedArgs :43
// {
static void IsFocusableChangedArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)IsFocusableChangedArgs__New3_fn, 0, true, IsFocusableChangedArgs_typeof(), 1, ::g::Fuse::Visual_typeof()));
}

::g::Fuse::VisualEventArgs_type* IsFocusableChangedArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEventArgs_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(IsFocusableChangedArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Input.IsFocusableChangedArgs", options);
    type->fp_build_ = IsFocusableChangedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public IsFocusableChangedArgs(Fuse.Visual visual) :45
void IsFocusableChangedArgs__ctor_2_fn(IsFocusableChangedArgs* __this, ::g::Fuse::Visual* visual)
{
    __this->ctor_2(visual);
}

// public IsFocusableChangedArgs New(Fuse.Visual visual) :45
void IsFocusableChangedArgs__New3_fn(::g::Fuse::Visual* visual, IsFocusableChangedArgs** __retval)
{
    *__retval = IsFocusableChangedArgs::New3(visual);
}

// public IsFocusableChangedArgs(Fuse.Visual visual) [instance] :45
void IsFocusableChangedArgs::ctor_2(::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Input.IsFocusableChangedArgs", ".ctor(Fuse.Visual)");
    ctor_1(visual);
}

// public IsFocusableChangedArgs New(Fuse.Visual visual) [static] :45
IsFocusableChangedArgs* IsFocusableChangedArgs::New3(::g::Fuse::Visual* visual)
{
    IsFocusableChangedArgs* obj1 = (IsFocusableChangedArgs*)uNew(IsFocusableChangedArgs_typeof());
    obj1->ctor_2(visual);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// internal sealed class IsFocusableChangedEvent :50
// {
static void IsFocusableChangedEvent_build(uType* type)
{
    type->SetBase(::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::IsFocusableChangedHandler_typeof(), ::g::Fuse::Input::IsFocusableChangedArgs_typeof()));
    type->SetFields(2);
}

::g::Fuse::VisualEvent_type* IsFocusableChangedEvent_typeof()
{
    static uSStrong< ::g::Fuse::VisualEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEvent_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(IsFocusableChangedEvent);
    options.TypeSize = sizeof(::g::Fuse::VisualEvent_type);
    type = (::g::Fuse::VisualEvent_type*)uClassType::New("Fuse.Input.IsFocusableChangedEvent", options);
    type->fp_build_ = IsFocusableChangedEvent_build;
    type->fp_ctor_ = (void*)IsFocusableChangedEvent__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::VisualEvent*, void*, uObject*, ::g::Fuse::VisualEventArgs*))IsFocusableChangedEvent__Invoke_fn;
    return type;
}

// public generated IsFocusableChangedEvent() :50
void IsFocusableChangedEvent__ctor_1_fn(IsFocusableChangedEvent* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.IsFocusableChangedHandler handler, object sender, Fuse.Input.IsFocusableChangedArgs args) :52
void IsFocusableChangedEvent__Invoke_fn(IsFocusableChangedEvent* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::IsFocusableChangedArgs* args)
{
    uStackFrame __("Fuse.Input.IsFocusableChangedEvent", "Invoke(Fuse.Input.IsFocusableChangedHandler,object,Fuse.Input.IsFocusableChangedArgs)");
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated IsFocusableChangedEvent New() :50
void IsFocusableChangedEvent__New1_fn(IsFocusableChangedEvent** __retval)
{
    *__retval = IsFocusableChangedEvent::New1();
}

// public generated IsFocusableChangedEvent() [instance] :50
void IsFocusableChangedEvent::ctor_1()
{
    uStackFrame __("Fuse.Input.IsFocusableChangedEvent", ".ctor()");
    ctor_();
}

// public generated IsFocusableChangedEvent New() [static] :50
IsFocusableChangedEvent* IsFocusableChangedEvent::New1()
{
    IsFocusableChangedEvent* obj1 = (IsFocusableChangedEvent*)uNew(IsFocusableChangedEvent_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// public delegate void IsFocusableChangedHandler(object sender, Fuse.Input.IsFocusableChangedArgs args) :48
uDelegateType* IsFocusableChangedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Input.IsFocusableChangedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::IsFocusableChangedArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// public static class Keyboard :615
// {
// static Keyboard() :615
static void Keyboard__cctor__fn(uType* __type)
{
    Keyboard::_keyPressed_ = ::g::Fuse::Input::KeyPressed::New1();
    Keyboard::_keyReleased_ = ::g::Fuse::Input::KeyReleased::New1();
    Keyboard::_keysDown_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[13/*Uno.Collections.List<Uno.Platform.Key>*/]));
    Keyboard::_keyboardHandle_ = ::g::Fuse::Properties::CreateHandle();
}

static void Keyboard_build(uType* type)
{
    ::TYPES[13] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Platform::Key_typeof());
    ::TYPES[14] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Input::Keyboard::_keyboardHandle_, uFieldFlagsStatic,
        ::g::Fuse::Input::KeyPressed_typeof(), (uintptr_t)&::g::Fuse::Input::Keyboard::_keyPressed_, uFieldFlagsStatic,
        ::g::Fuse::Input::KeyReleased_typeof(), (uintptr_t)&::g::Fuse::Input::Keyboard::_keyReleased_, uFieldFlagsStatic,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Platform::Key_typeof()), (uintptr_t)&::g::Fuse::Input::Keyboard::_keysDown_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(8,
        new uFunction("AddHandlers", NULL, (void*)Keyboard__AddHandlers_fn, 0, true, uVoid_typeof(), 3, ::g::Fuse::Visual_typeof(), ::g::Fuse::Input::KeyPressedHandler_typeof(), ::g::Fuse::Input::KeyReleasedHandler_typeof()),
        new uFunction("EmulateBackButtonTap", NULL, (void*)Keyboard__EmulateBackButtonTap_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("IsKeyPressed", NULL, (void*)Keyboard__IsKeyPressed_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Platform::Key_typeof()),
        new uFunction("get_KeyPressed", NULL, (void*)Keyboard__get_KeyPressed_fn, 0, true, ::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::KeyPressedHandler_typeof(), ::g::Fuse::Input::KeyPressedArgs_typeof()), 0),
        new uFunction("get_KeyReleased", NULL, (void*)Keyboard__get_KeyReleased_fn, 0, true, ::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::KeyReleasedHandler_typeof(), ::g::Fuse::Input::KeyReleasedArgs_typeof()), 0),
        new uFunction("RaiseKeyPressed", NULL, (void*)Keyboard__RaiseKeyPressed_fn, 0, true, ::g::Uno::Bool_typeof(), 5, ::g::Uno::Platform::Key_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("RaiseKeyReleased", NULL, (void*)Keyboard__RaiseKeyReleased_fn, 0, true, ::g::Uno::Bool_typeof(), 5, ::g::Uno::Platform::Key_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("RemoveHandlers", NULL, (void*)Keyboard__RemoveHandlers_fn, 0, true, uVoid_typeof(), 3, ::g::Fuse::Visual_typeof(), ::g::Fuse::Input::KeyPressedHandler_typeof(), ::g::Fuse::Input::KeyReleasedHandler_typeof()));
}

uClassType* Keyboard_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Input.Keyboard", options);
    type->fp_build_ = Keyboard_build;
    type->fp_cctor_ = Keyboard__cctor__fn;
    return type;
}

// public static void AddHandlers(Fuse.Visual visual, [Fuse.Input.KeyPressedHandler pressed], [Fuse.Input.KeyReleasedHandler released]) :623
void Keyboard__AddHandlers_fn(::g::Fuse::Visual* visual, uDelegate* pressed, uDelegate* released)
{
    Keyboard::AddHandlers(visual, pressed, released);
}

// private static void DispatchEmulateBackButtonTap() :643
void Keyboard__DispatchEmulateBackButtonTap_fn()
{
    Keyboard::DispatchEmulateBackButtonTap();
}

// public static void EmulateBackButtonTap() :638
void Keyboard__EmulateBackButtonTap_fn()
{
    Keyboard::EmulateBackButtonTap();
}

// public static bool IsKeyPressed(Uno.Platform.Key key) :679
void Keyboard__IsKeyPressed_fn(int* key, bool* __retval)
{
    *__retval = Keyboard::IsKeyPressed(*key);
}

// public static Fuse.VisualEvent<Fuse.Input.KeyPressedHandler, Fuse.Input.KeyPressedArgs> get_KeyPressed() :620
void Keyboard__get_KeyPressed_fn(::g::Fuse::VisualEvent** __retval)
{
    *__retval = Keyboard::KeyPressed();
}

// public static Fuse.VisualEvent<Fuse.Input.KeyReleasedHandler, Fuse.Input.KeyReleasedArgs> get_KeyReleased() :621
void Keyboard__get_KeyReleased_fn(::g::Fuse::VisualEvent** __retval)
{
    *__retval = Keyboard::KeyReleased();
}

// private static Fuse.Visual get_KeyTargetVisual() :651
void Keyboard__get_KeyTargetVisual_fn(::g::Fuse::Visual** __retval)
{
    *__retval = Keyboard::KeyTargetVisual();
}

// public static bool RaiseKeyPressed(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed) :657
void Keyboard__RaiseKeyPressed_fn(int* key, bool* isMetaKeyPressed, bool* isControlKeyPressed, bool* isShiftKeyPressed, bool* isAltKeyPressed, bool* __retval)
{
    *__retval = Keyboard::RaiseKeyPressed(*key, *isMetaKeyPressed, *isControlKeyPressed, *isShiftKeyPressed, *isAltKeyPressed);
}

// public static bool RaiseKeyReleased(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed) :667
void Keyboard__RaiseKeyReleased_fn(int* key, bool* isMetaKeyPressed, bool* isControlKeyPressed, bool* isShiftKeyPressed, bool* isAltKeyPressed, bool* __retval)
{
    *__retval = Keyboard::RaiseKeyReleased(*key, *isMetaKeyPressed, *isControlKeyPressed, *isShiftKeyPressed, *isAltKeyPressed);
}

// public static void RemoveHandlers(Fuse.Visual visual, [Fuse.Input.KeyPressedHandler pressed], [Fuse.Input.KeyReleasedHandler released]) :629
void Keyboard__RemoveHandlers_fn(::g::Fuse::Visual* visual, uDelegate* pressed, uDelegate* released)
{
    Keyboard::RemoveHandlers(visual, pressed, released);
}

uSStrong< ::g::Fuse::PropertyHandle*> Keyboard::_keyboardHandle_;
uSStrong< ::g::Fuse::Input::KeyPressed*> Keyboard::_keyPressed_;
uSStrong< ::g::Fuse::Input::KeyReleased*> Keyboard::_keyReleased_;
uSStrong< ::g::Uno::Collections::List*> Keyboard::_keysDown_;

// public static void AddHandlers(Fuse.Visual visual, [Fuse.Input.KeyPressedHandler pressed], [Fuse.Input.KeyReleasedHandler released]) [static] :623
void Keyboard::AddHandlers(::g::Fuse::Visual* visual, uDelegate* pressed, uDelegate* released)
{
    uStackFrame __("Fuse.Input.Keyboard", "AddHandlers(Fuse.Visual,[Fuse.Input.KeyPressedHandler],[Fuse.Input.KeyReleasedHandler])");
    Keyboard_typeof()->Init();

    if (::g::Uno::Delegate::op_Inequality(pressed, NULL))
        ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(Keyboard::KeyPressed()), visual, pressed);

    if (::g::Uno::Delegate::op_Inequality(released, NULL))
        ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(Keyboard::KeyReleased()), visual, released);
}

// private static void DispatchEmulateBackButtonTap() [static] :643
void Keyboard::DispatchEmulateBackButtonTap()
{
    uStackFrame __("Fuse.Input.Keyboard", "DispatchEmulateBackButtonTap()");
    Keyboard_typeof()->Init();
    Keyboard::RaiseKeyPressed(201, false, false, false, false);
    Keyboard::RaiseKeyReleased(201, false, false, false, false);
}

// public static void EmulateBackButtonTap() [static] :638
void Keyboard::EmulateBackButtonTap()
{
    uStackFrame __("Fuse.Input.Keyboard", "EmulateBackButtonTap()");
    Keyboard_typeof()->Init();
    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)Keyboard__DispatchEmulateBackButtonTap_fn));
}

// public static bool IsKeyPressed(Uno.Platform.Key key) [static] :679
bool Keyboard::IsKeyPressed(int key)
{
    uStackFrame __("Fuse.Input.Keyboard", "IsKeyPressed(Uno.Platform.Key)");
    Keyboard_typeof()->Init();
    int ret2;

    for (int i = 0; i < uPtr(Keyboard::_keysDown())->Count(); i++)
        if ((::g::Uno::Collections::List__get_Item_fn(uPtr(Keyboard::_keysDown()), uCRef<int>(i), &ret2), ret2) == key)
            return true;

    return false;
}

// public static bool RaiseKeyPressed(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed) [static] :657
bool Keyboard::RaiseKeyPressed(int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed)
{
    uStackFrame __("Fuse.Input.Keyboard", "RaiseKeyPressed(Uno.Platform.Key,bool,bool,bool,bool)");
    Keyboard_typeof()->Init();
    ::g::Uno::Collections::List__Add_fn(uPtr(Keyboard::_keysDown()), uCRef<int>(key));
    ::g::Fuse::Input::KeyPressedArgs* args = ::g::Fuse::Input::KeyPressedArgs::New3(key, isMetaKeyPressed, isControlKeyPressed, isShiftKeyPressed, isAltKeyPressed, Keyboard::KeyTargetVisual());
    uPtr(Keyboard::KeyPressed())->RaiseWithBubble(args, 0);
    return args->IsHandled();
}

// public static bool RaiseKeyReleased(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed) [static] :667
bool Keyboard::RaiseKeyReleased(int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed)
{
    uStackFrame __("Fuse.Input.Keyboard", "RaiseKeyReleased(Uno.Platform.Key,bool,bool,bool,bool)");
    Keyboard_typeof()->Init();
    int ret3;

    for (int i = 0; i < uPtr(Keyboard::_keysDown())->Count(); i++)
        if ((::g::Uno::Collections::List__get_Item_fn(uPtr(Keyboard::_keysDown()), uCRef<int>(i), &ret3), ret3) == key)
            uPtr(Keyboard::_keysDown())->RemoveAt(i--);

    ::g::Fuse::Input::KeyReleasedArgs* args = ::g::Fuse::Input::KeyReleasedArgs::New3(key, isMetaKeyPressed, isControlKeyPressed, isShiftKeyPressed, isAltKeyPressed, Keyboard::KeyTargetVisual());
    uPtr(Keyboard::KeyReleased())->RaiseWithBubble(args, 0);
    return args->IsHandled();
}

// public static void RemoveHandlers(Fuse.Visual visual, [Fuse.Input.KeyPressedHandler pressed], [Fuse.Input.KeyReleasedHandler released]) [static] :629
void Keyboard::RemoveHandlers(::g::Fuse::Visual* visual, uDelegate* pressed, uDelegate* released)
{
    uStackFrame __("Fuse.Input.Keyboard", "RemoveHandlers(Fuse.Visual,[Fuse.Input.KeyPressedHandler],[Fuse.Input.KeyReleasedHandler])");
    Keyboard_typeof()->Init();

    if (::g::Uno::Delegate::op_Inequality(pressed, NULL))
        ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(Keyboard::KeyPressed()), visual, pressed);

    if (::g::Uno::Delegate::op_Inequality(released, NULL))
        ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(Keyboard::KeyReleased()), visual, released);
}

// public static Fuse.VisualEvent<Fuse.Input.KeyPressedHandler, Fuse.Input.KeyPressedArgs> get_KeyPressed() [static] :620
::g::Fuse::VisualEvent* Keyboard::KeyPressed()
{
    uStackFrame __("Fuse.Input.Keyboard", "get_KeyPressed()");
    Keyboard_typeof()->Init();
    return Keyboard::_keyPressed();
}

// public static Fuse.VisualEvent<Fuse.Input.KeyReleasedHandler, Fuse.Input.KeyReleasedArgs> get_KeyReleased() [static] :621
::g::Fuse::VisualEvent* Keyboard::KeyReleased()
{
    uStackFrame __("Fuse.Input.Keyboard", "get_KeyReleased()");
    Keyboard_typeof()->Init();
    return Keyboard::_keyReleased();
}

// private static Fuse.Visual get_KeyTargetVisual() [static] :651
::g::Fuse::Visual* Keyboard::KeyTargetVisual()
{
    uStackFrame __("Fuse.Input.Keyboard", "get_KeyTargetVisual()");
    Keyboard_typeof()->Init();
    ::g::Fuse::Visual* ind1 = ::g::Fuse::Input::Focus::FocusedVisual();
    return (ind1 != NULL) ? ind1 : (::g::Fuse::RootViewport*)::g::Fuse::AppBase::CurrentRootViewport();
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// public abstract class KeyEventArgs :535
// {
static void KeyEventArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(2,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Input::KeyEventArgs, _IsAltKeyPressed), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Input::KeyEventArgs, _IsControlKeyPressed), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Input::KeyEventArgs, _IsMetaKeyPressed), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Input::KeyEventArgs, _IsShiftKeyPressed), 0,
        ::g::Uno::Platform::Key_typeof(), offsetof(::g::Fuse::Input::KeyEventArgs, _Key), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_IsAltKeyPressed", NULL, (void*)KeyEventArgs__get_IsAltKeyPressed_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsControlKeyPressed", NULL, (void*)KeyEventArgs__get_IsControlKeyPressed_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsMetaKeyPressed", NULL, (void*)KeyEventArgs__get_IsMetaKeyPressed_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsShiftKeyPressed", NULL, (void*)KeyEventArgs__get_IsShiftKeyPressed_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Key", NULL, (void*)KeyEventArgs__get_Key_fn, 0, false, ::g::Uno::Platform::Key_typeof(), 0));
}

::g::Fuse::VisualEventArgs_type* KeyEventArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEventArgs_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(KeyEventArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Input.KeyEventArgs", options);
    type->fp_build_ = KeyEventArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// protected KeyEventArgs(Uno.Platform.Key key, Fuse.Visual visual) :567
void KeyEventArgs__ctor_2_fn(KeyEventArgs* __this, int* key, ::g::Fuse::Visual* visual)
{
    __this->ctor_2(*key, visual);
}

// public generated bool get_IsAltKeyPressed() :563
void KeyEventArgs__get_IsAltKeyPressed_fn(KeyEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsAltKeyPressed();
}

// protected generated void set_IsAltKeyPressed(bool value) :564
void KeyEventArgs__set_IsAltKeyPressed_fn(KeyEventArgs* __this, bool* value)
{
    __this->IsAltKeyPressed(*value);
}

// public generated bool get_IsControlKeyPressed() :551
void KeyEventArgs__get_IsControlKeyPressed_fn(KeyEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsControlKeyPressed();
}

// protected generated void set_IsControlKeyPressed(bool value) :552
void KeyEventArgs__set_IsControlKeyPressed_fn(KeyEventArgs* __this, bool* value)
{
    __this->IsControlKeyPressed(*value);
}

// public generated bool get_IsMetaKeyPressed() :545
void KeyEventArgs__get_IsMetaKeyPressed_fn(KeyEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsMetaKeyPressed();
}

// protected generated void set_IsMetaKeyPressed(bool value) :546
void KeyEventArgs__set_IsMetaKeyPressed_fn(KeyEventArgs* __this, bool* value)
{
    __this->IsMetaKeyPressed(*value);
}

// public generated bool get_IsShiftKeyPressed() :557
void KeyEventArgs__get_IsShiftKeyPressed_fn(KeyEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsShiftKeyPressed();
}

// protected generated void set_IsShiftKeyPressed(bool value) :558
void KeyEventArgs__set_IsShiftKeyPressed_fn(KeyEventArgs* __this, bool* value)
{
    __this->IsShiftKeyPressed(*value);
}

// public generated Uno.Platform.Key get_Key() :539
void KeyEventArgs__get_Key_fn(KeyEventArgs* __this, int* __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(Uno.Platform.Key value) :540
void KeyEventArgs__set_Key_fn(KeyEventArgs* __this, int* value)
{
    __this->Key(*value);
}

// protected KeyEventArgs(Uno.Platform.Key key, Fuse.Visual visual) [instance] :567
void KeyEventArgs::ctor_2(int key, ::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Input.KeyEventArgs", ".ctor(Uno.Platform.Key,Fuse.Visual)");
    ctor_1(visual);
    Key(key);
}

// public generated bool get_IsAltKeyPressed() [instance] :563
bool KeyEventArgs::IsAltKeyPressed()
{
    uStackFrame __("Fuse.Input.KeyEventArgs", "get_IsAltKeyPressed()");
    return _IsAltKeyPressed;
}

// protected generated void set_IsAltKeyPressed(bool value) [instance] :564
void KeyEventArgs::IsAltKeyPressed(bool value)
{
    uStackFrame __("Fuse.Input.KeyEventArgs", "set_IsAltKeyPressed(bool)");
    _IsAltKeyPressed = value;
}

// public generated bool get_IsControlKeyPressed() [instance] :551
bool KeyEventArgs::IsControlKeyPressed()
{
    uStackFrame __("Fuse.Input.KeyEventArgs", "get_IsControlKeyPressed()");
    return _IsControlKeyPressed;
}

// protected generated void set_IsControlKeyPressed(bool value) [instance] :552
void KeyEventArgs::IsControlKeyPressed(bool value)
{
    uStackFrame __("Fuse.Input.KeyEventArgs", "set_IsControlKeyPressed(bool)");
    _IsControlKeyPressed = value;
}

// public generated bool get_IsMetaKeyPressed() [instance] :545
bool KeyEventArgs::IsMetaKeyPressed()
{
    uStackFrame __("Fuse.Input.KeyEventArgs", "get_IsMetaKeyPressed()");
    return _IsMetaKeyPressed;
}

// protected generated void set_IsMetaKeyPressed(bool value) [instance] :546
void KeyEventArgs::IsMetaKeyPressed(bool value)
{
    uStackFrame __("Fuse.Input.KeyEventArgs", "set_IsMetaKeyPressed(bool)");
    _IsMetaKeyPressed = value;
}

// public generated bool get_IsShiftKeyPressed() [instance] :557
bool KeyEventArgs::IsShiftKeyPressed()
{
    uStackFrame __("Fuse.Input.KeyEventArgs", "get_IsShiftKeyPressed()");
    return _IsShiftKeyPressed;
}

// protected generated void set_IsShiftKeyPressed(bool value) [instance] :558
void KeyEventArgs::IsShiftKeyPressed(bool value)
{
    uStackFrame __("Fuse.Input.KeyEventArgs", "set_IsShiftKeyPressed(bool)");
    _IsShiftKeyPressed = value;
}

// public generated Uno.Platform.Key get_Key() [instance] :539
int KeyEventArgs::Key()
{
    uStackFrame __("Fuse.Input.KeyEventArgs", "get_Key()");
    return _Key;
}

// private generated void set_Key(Uno.Platform.Key value) [instance] :540
void KeyEventArgs::Key(int value)
{
    uStackFrame __("Fuse.Input.KeyEventArgs", "set_Key(Uno.Platform.Key)");
    _Key = value;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// internal sealed class KeyPressed :586
// {
static void KeyPressed_build(uType* type)
{
    type->SetBase(::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::KeyPressedHandler_typeof(), ::g::Fuse::Input::KeyPressedArgs_typeof()));
    type->SetFields(2);
}

::g::Fuse::VisualEvent_type* KeyPressed_typeof()
{
    static uSStrong< ::g::Fuse::VisualEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEvent_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(KeyPressed);
    options.TypeSize = sizeof(::g::Fuse::VisualEvent_type);
    type = (::g::Fuse::VisualEvent_type*)uClassType::New("Fuse.Input.KeyPressed", options);
    type->fp_build_ = KeyPressed_build;
    type->fp_ctor_ = (void*)KeyPressed__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::VisualEvent*, void*, uObject*, ::g::Fuse::VisualEventArgs*))KeyPressed__Invoke_fn;
    return type;
}

// public generated KeyPressed() :586
void KeyPressed__ctor_1_fn(KeyPressed* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.KeyPressedHandler handler, object sender, Fuse.Input.KeyPressedArgs args) :588
void KeyPressed__Invoke_fn(KeyPressed* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::KeyPressedArgs* args)
{
    uStackFrame __("Fuse.Input.KeyPressed", "Invoke(Fuse.Input.KeyPressedHandler,object,Fuse.Input.KeyPressedArgs)");
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated KeyPressed New() :586
void KeyPressed__New1_fn(KeyPressed** __retval)
{
    *__retval = KeyPressed::New1();
}

// public generated KeyPressed() [instance] :586
void KeyPressed::ctor_1()
{
    uStackFrame __("Fuse.Input.KeyPressed", ".ctor()");
    ctor_();
}

// public generated KeyPressed New() [static] :586
KeyPressed* KeyPressed::New1()
{
    KeyPressed* obj1 = (KeyPressed*)uNew(KeyPressed_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// public sealed class KeyPressedArgs :573
// {
static void KeyPressedArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(7);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)KeyPressedArgs__New3_fn, 0, true, KeyPressedArgs_typeof(), 6, ::g::Uno::Platform::Key_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), ::g::Fuse::Visual_typeof()));
}

::g::Fuse::VisualEventArgs_type* KeyPressedArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Input::KeyEventArgs_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(KeyPressedArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Input.KeyPressedArgs", options);
    type->fp_build_ = KeyPressedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public KeyPressedArgs(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, Fuse.Visual visual) :575
void KeyPressedArgs__ctor_3_fn(KeyPressedArgs* __this, int* key, bool* isMetaKeyPressed, bool* isControlKeyPressed, bool* isShiftKeyPressed, bool* isAltKeyPressed, ::g::Fuse::Visual* visual)
{
    __this->ctor_3(*key, *isMetaKeyPressed, *isControlKeyPressed, *isShiftKeyPressed, *isAltKeyPressed, visual);
}

// public KeyPressedArgs New(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, Fuse.Visual visual) :575
void KeyPressedArgs__New3_fn(int* key, bool* isMetaKeyPressed, bool* isControlKeyPressed, bool* isShiftKeyPressed, bool* isAltKeyPressed, ::g::Fuse::Visual* visual, KeyPressedArgs** __retval)
{
    *__retval = KeyPressedArgs::New3(*key, *isMetaKeyPressed, *isControlKeyPressed, *isShiftKeyPressed, *isAltKeyPressed, visual);
}

// public KeyPressedArgs(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, Fuse.Visual visual) [instance] :575
void KeyPressedArgs::ctor_3(int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, ::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Input.KeyPressedArgs", ".ctor(Uno.Platform.Key,bool,bool,bool,bool,Fuse.Visual)");
    ctor_2(key, visual);
    IsMetaKeyPressed(isMetaKeyPressed);
    IsControlKeyPressed(isControlKeyPressed);
    IsShiftKeyPressed(isShiftKeyPressed);
    IsAltKeyPressed(isAltKeyPressed);
}

// public KeyPressedArgs New(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, Fuse.Visual visual) [static] :575
KeyPressedArgs* KeyPressedArgs::New3(int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, ::g::Fuse::Visual* visual)
{
    KeyPressedArgs* obj1 = (KeyPressedArgs*)uNew(KeyPressedArgs_typeof());
    obj1->ctor_3(key, isMetaKeyPressed, isControlKeyPressed, isShiftKeyPressed, isAltKeyPressed, visual);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// public delegate void KeyPressedHandler(object sender, Fuse.Input.KeyPressedArgs args) :584
uDelegateType* KeyPressedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Input.KeyPressedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::KeyPressedArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// internal sealed class KeyReleased :607
// {
static void KeyReleased_build(uType* type)
{
    type->SetBase(::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::KeyReleasedHandler_typeof(), ::g::Fuse::Input::KeyReleasedArgs_typeof()));
    type->SetFields(2);
}

::g::Fuse::VisualEvent_type* KeyReleased_typeof()
{
    static uSStrong< ::g::Fuse::VisualEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEvent_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(KeyReleased);
    options.TypeSize = sizeof(::g::Fuse::VisualEvent_type);
    type = (::g::Fuse::VisualEvent_type*)uClassType::New("Fuse.Input.KeyReleased", options);
    type->fp_build_ = KeyReleased_build;
    type->fp_ctor_ = (void*)KeyReleased__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::VisualEvent*, void*, uObject*, ::g::Fuse::VisualEventArgs*))KeyReleased__Invoke_fn;
    return type;
}

// public generated KeyReleased() :607
void KeyReleased__ctor_1_fn(KeyReleased* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.KeyReleasedHandler handler, object sender, Fuse.Input.KeyReleasedArgs args) :609
void KeyReleased__Invoke_fn(KeyReleased* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::KeyReleasedArgs* args)
{
    uStackFrame __("Fuse.Input.KeyReleased", "Invoke(Fuse.Input.KeyReleasedHandler,object,Fuse.Input.KeyReleasedArgs)");
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated KeyReleased New() :607
void KeyReleased__New1_fn(KeyReleased** __retval)
{
    *__retval = KeyReleased::New1();
}

// public generated KeyReleased() [instance] :607
void KeyReleased::ctor_1()
{
    uStackFrame __("Fuse.Input.KeyReleased", ".ctor()");
    ctor_();
}

// public generated KeyReleased New() [static] :607
KeyReleased* KeyReleased::New1()
{
    KeyReleased* obj1 = (KeyReleased*)uNew(KeyReleased_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// public sealed class KeyReleasedArgs :594
// {
static void KeyReleasedArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(7);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)KeyReleasedArgs__New3_fn, 0, true, KeyReleasedArgs_typeof(), 6, ::g::Uno::Platform::Key_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), ::g::Fuse::Visual_typeof()));
}

::g::Fuse::VisualEventArgs_type* KeyReleasedArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Input::KeyEventArgs_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(KeyReleasedArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Input.KeyReleasedArgs", options);
    type->fp_build_ = KeyReleasedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public KeyReleasedArgs(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, Fuse.Visual visual) :596
void KeyReleasedArgs__ctor_3_fn(KeyReleasedArgs* __this, int* key, bool* isMetaKeyPressed, bool* isControlKeyPressed, bool* isShiftKeyPressed, bool* isAltKeyPressed, ::g::Fuse::Visual* visual)
{
    __this->ctor_3(*key, *isMetaKeyPressed, *isControlKeyPressed, *isShiftKeyPressed, *isAltKeyPressed, visual);
}

// public KeyReleasedArgs New(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, Fuse.Visual visual) :596
void KeyReleasedArgs__New3_fn(int* key, bool* isMetaKeyPressed, bool* isControlKeyPressed, bool* isShiftKeyPressed, bool* isAltKeyPressed, ::g::Fuse::Visual* visual, KeyReleasedArgs** __retval)
{
    *__retval = KeyReleasedArgs::New3(*key, *isMetaKeyPressed, *isControlKeyPressed, *isShiftKeyPressed, *isAltKeyPressed, visual);
}

// public KeyReleasedArgs(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, Fuse.Visual visual) [instance] :596
void KeyReleasedArgs::ctor_3(int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, ::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Input.KeyReleasedArgs", ".ctor(Uno.Platform.Key,bool,bool,bool,bool,Fuse.Visual)");
    ctor_2(key, visual);
    IsMetaKeyPressed(isMetaKeyPressed);
    IsControlKeyPressed(isControlKeyPressed);
    IsShiftKeyPressed(isShiftKeyPressed);
    IsAltKeyPressed(isAltKeyPressed);
}

// public KeyReleasedArgs New(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, Fuse.Visual visual) [static] :596
KeyReleasedArgs* KeyReleasedArgs::New3(int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, ::g::Fuse::Visual* visual)
{
    KeyReleasedArgs* obj1 = (KeyReleasedArgs*)uNew(KeyReleasedArgs_typeof());
    obj1->ctor_3(key, isMetaKeyPressed, isControlKeyPressed, isShiftKeyPressed, isAltKeyPressed, visual);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// public delegate void KeyReleasedHandler(object sender, Fuse.Input.KeyReleasedArgs args) :605
uDelegateType* KeyReleasedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Input.KeyReleasedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::KeyReleasedArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// private sealed class Pointer.PELHolder :1370
// {
static void Pointer__PELHolder_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Input::Pointer__PELStatus_typeof(), offsetof(::g::Fuse::Input::Pointer__PELHolder, Status), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Input::Pointer__PELHolder, Visual), 0);
}

uType* Pointer__PELHolder_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Pointer__PELHolder);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Input.Pointer.PELHolder", options);
    type->fp_build_ = Pointer__PELHolder_build;
    type->fp_ctor_ = (void*)Pointer__PELHolder__New1_fn;
    return type;
}

// public generated PELHolder() :1370
void Pointer__PELHolder__ctor__fn(Pointer__PELHolder* __this)
{
    __this->ctor_();
}

// public generated PELHolder New() :1370
void Pointer__PELHolder__New1_fn(Pointer__PELHolder** __retval)
{
    *__retval = Pointer__PELHolder::New1();
}

// public generated PELHolder() [instance] :1370
void Pointer__PELHolder::ctor_()
{
}

// public generated PELHolder New() [static] :1370
Pointer__PELHolder* Pointer__PELHolder::New1()
{
    Pointer__PELHolder* obj1 = (Pointer__PELHolder*)uNew(Pointer__PELHolder_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// private enum Pointer.PELStatus :1364
uEnumType* Pointer__PELStatus_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Input.Pointer.PELStatus", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Added", 0LL,
        "Removed", 1LL,
        "Remain", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// public partial static class Pointer :959
// {
// static Pointer() :963
static void Pointer__cctor__fn(uType* __type)
{
    Pointer::_pressed_ = ::g::Fuse::Input::PointerPressed::New1();
    Pointer::_moved_ = ::g::Fuse::Input::PointerMoved::New1();
    Pointer::_released_ = ::g::Fuse::Input::PointerReleased::New1();
    Pointer::_entered_ = ::g::Fuse::Input::PointerEntered::New1();
    Pointer::_left_ = ::g::Fuse::Input::PointerLeft::New1();
    Pointer::_wheelMoved_ = ::g::Fuse::Input::PointerWheelMoved::New1();
    Pointer::_pointersDown_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[15/*Uno.Collections.Dictionary<int, Fuse.Input.Pointer.PointerRecord>*/]));
    Pointer::_softCapturers_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[16/*Uno.Collections.Dictionary<int, Uno.Collections.IList<Fuse.Input.Capturer>>*/]));
    Pointer::_hardCapturers_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[17/*Uno.Collections.Dictionary<int, Fuse.Input.Capturer>*/]));
    Pointer::_lastHitVisuals_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[18/*Uno.Collections.Dictionary<int, Uno.Collections.List<Fuse.Input.Pointer.PELHolder>>*/]));
    Pointer::EventResponder((uObject*)Pointer__DefaultPointerEventResponder::New1());
}

static void Pointer_build(uType* type)
{
    ::STRINGS[6] = uString::Const("HardCapture requires lostCallback Action");
    ::STRINGS[7] = uString::Const("HardCapture requires identity object");
    ::STRINGS[8] = uString::Const("HardCapture requires Visual");
    ::STRINGS[9] = uString::Const("HardCapture can only be done on rooted enabled node");
    ::STRINGS[10] = uString::Const("/usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno");
    ::STRINGS[11] = uString::Const("SoftCapture requires lostCallback Action");
    ::STRINGS[12] = uString::Const("SoftCapture requires identity object");
    ::STRINGS[13] = uString::Const("SoftCapture requires softCapturer Visual");
    ::STRINGS[14] = uString::Const("SoftCapture can only be done on rooted enabled node");
    ::TYPES[15] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Int_typeof(), Pointer__PointerRecord_typeof());
    ::TYPES[16] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Input::Capturer_typeof()));
    ::TYPES[17] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Fuse::Input::Capturer_typeof());
    ::TYPES[18] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(Pointer__PELHolder_typeof()));
    ::TYPES[19] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Visual_typeof());
    ::TYPES[20] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Visual_typeof());
    ::TYPES[21] = ::g::Uno::Collections::List_typeof()->MakeType(Pointer__PELHolder_typeof());
    ::TYPES[22] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Input::Capturer_typeof());
    ::TYPES[23] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Fuse::Input::Capturer_typeof());
    ::TYPES[24] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Input::Capturer_typeof());
    ::TYPES[25] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::Int_typeof(), Pointer__PointerRecord_typeof());
    ::TYPES[26] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::Int_typeof(), Pointer__PointerRecord_typeof());
    ::TYPES[27] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Input::Capturer_typeof());
    ::TYPES[5] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[28] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Input::Capturer_typeof());
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    ::TYPES[29] = ::g::Fuse::Input::IPointerEventResponder_typeof();
    ::TYPES[30] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Input::Capturer_typeof()));
    ::TYPES[31] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Input::Capturer_typeof()));
    ::TYPES[32] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[33] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Fuse::Input::Capturer_typeof());
    ::TYPES[34] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Fuse::Input::Capturer_typeof());
    ::TYPES[35] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[36] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Input::Capturer_typeof());
    ::TYPES[37] = ::g::Uno::Float2_typeof()->Array();
    type->SetFields(0,
        ::g::Fuse::Input::PointerEntered_typeof(), (uintptr_t)&::g::Fuse::Input::Pointer::_entered_, uFieldFlagsStatic,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Fuse::Input::Capturer_typeof()), (uintptr_t)&::g::Fuse::Input::Pointer::_hardCapturers_, uFieldFlagsStatic,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(Pointer__PELHolder_typeof())), (uintptr_t)&::g::Fuse::Input::Pointer::_lastHitVisuals_, uFieldFlagsStatic,
        ::g::Fuse::Input::PointerLeft_typeof(), (uintptr_t)&::g::Fuse::Input::Pointer::_left_, uFieldFlagsStatic,
        ::g::Fuse::Input::PointerMoved_typeof(), (uintptr_t)&::g::Fuse::Input::Pointer::_moved_, uFieldFlagsStatic,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Int_typeof(), Pointer__PointerRecord_typeof()), (uintptr_t)&::g::Fuse::Input::Pointer::_pointersDown_, uFieldFlagsStatic,
        ::g::Fuse::Input::PointerPressed_typeof(), (uintptr_t)&::g::Fuse::Input::Pointer::_pressed_, uFieldFlagsStatic,
        ::g::Fuse::Input::PointerReleased_typeof(), (uintptr_t)&::g::Fuse::Input::Pointer::_released_, uFieldFlagsStatic,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Input::Capturer_typeof())), (uintptr_t)&::g::Fuse::Input::Pointer::_softCapturers_, uFieldFlagsStatic,
        ::g::Fuse::Input::PointerWheelMoved_typeof(), (uintptr_t)&::g::Fuse::Input::Pointer::_wheelMoved_, uFieldFlagsStatic,
        ::g::Uno::Float2_typeof(), (uintptr_t)&::g::Fuse::Input::Pointer::_Coord_, uFieldFlagsStatic,
        ::g::Fuse::Input::IPointerEventResponder_typeof(), (uintptr_t)&::g::Fuse::Input::Pointer::_EventResponder_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(21,
        new uFunction("AddHandlers", NULL, (void*)Pointer__AddHandlers_fn, 0, true, uVoid_typeof(), 7, ::g::Fuse::Visual_typeof(), ::g::Fuse::Input::PointerPressedHandler_typeof(), ::g::Fuse::Input::PointerMovedHandler_typeof(), ::g::Fuse::Input::PointerReleasedHandler_typeof(), ::g::Fuse::Input::PointerEnteredHandler_typeof(), ::g::Fuse::Input::PointerLeftHandler_typeof(), ::g::Fuse::Input::PointerWheelMovedHandler_typeof()),
        new uFunction("get_Coord", NULL, (void*)Pointer__get_Coord_fn, 0, true, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_Coords", NULL, (void*)Pointer__get_Coords_fn, 0, true, ::g::Uno::Float2_typeof()->Array(), 0),
        new uFunction("get_Entered", NULL, (void*)Pointer__get_Entered_fn, 0, true, ::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::PointerEnteredHandler_typeof(), ::g::Fuse::Input::PointerEnteredArgs_typeof()), 0),
        new uFunction("get_EventResponder", NULL, (void*)Pointer__get_EventResponder_fn, 0, true, ::g::Fuse::Input::IPointerEventResponder_typeof(), 0),
        new uFunction("set_EventResponder", NULL, (void*)Pointer__set_EventResponder_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Input::IPointerEventResponder_typeof()),
        new uFunction("IsHardCaptured", NULL, (void*)Pointer__IsHardCaptured_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("IsHardCaptured", NULL, (void*)Pointer__IsHardCaptured1_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Int_typeof(), uObject_typeof()),
        new uFunction("IsPressed", NULL, (void*)Pointer__IsPressed_fn, 0, true, ::g::Uno::Bool_typeof(), 0),
        new uFunction("IsPressed", NULL, (void*)Pointer__IsPressed1_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("IsSoftCaptured", NULL, (void*)Pointer__IsSoftCaptured_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("IsSoftCaptured", NULL, (void*)Pointer__IsSoftCaptured1_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Int_typeof(), uObject_typeof()),
        new uFunction("get_Left", NULL, (void*)Pointer__get_Left_fn, 0, true, ::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::PointerLeftHandler_typeof(), ::g::Fuse::Input::PointerLeftArgs_typeof()), 0),
        new uFunction("get_Moved", NULL, (void*)Pointer__get_Moved_fn, 0, true, ::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::PointerMovedHandler_typeof(), ::g::Fuse::Input::PointerMovedArgs_typeof()), 0),
        new uFunction("get_Pressed", NULL, (void*)Pointer__get_Pressed_fn, 0, true, ::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::PointerPressedHandler_typeof(), ::g::Fuse::Input::PointerPressedArgs_typeof()), 0),
        new uFunction("ReleaseAllCaptures", NULL, (void*)Pointer__ReleaseAllCaptures_fn, 0, true, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("get_Released", NULL, (void*)Pointer__get_Released_fn, 0, true, ::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::PointerReleasedHandler_typeof(), ::g::Fuse::Input::PointerReleasedArgs_typeof()), 0),
        new uFunction("ReleaseHardCapture", NULL, (void*)Pointer__ReleaseHardCapture_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("ReleaseSoftCapture", NULL, (void*)Pointer__ReleaseSoftCapture_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), uObject_typeof()),
        new uFunction("RemoveHandlers", NULL, (void*)Pointer__RemoveHandlers_fn, 0, true, uVoid_typeof(), 7, ::g::Fuse::Visual_typeof(), ::g::Fuse::Input::PointerPressedHandler_typeof(), ::g::Fuse::Input::PointerMovedHandler_typeof(), ::g::Fuse::Input::PointerReleasedHandler_typeof(), ::g::Fuse::Input::PointerEnteredHandler_typeof(), ::g::Fuse::Input::PointerLeftHandler_typeof(), ::g::Fuse::Input::PointerWheelMovedHandler_typeof()),
        new uFunction("get_WheelMoved", NULL, (void*)Pointer__get_WheelMoved_fn, 0, true, ::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::PointerWheelMovedHandler_typeof(), ::g::Fuse::Input::PointerWheelMovedArgs_typeof()), 0));
}

uClassType* Pointer_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Input.Pointer", options);
    type->fp_build_ = Pointer_build;
    type->fp_cctor_ = Pointer__cctor__fn;
    return type;
}

// public static void AddHandlers(Fuse.Visual node, [Fuse.Input.PointerPressedHandler pressed], [Fuse.Input.PointerMovedHandler moved], [Fuse.Input.PointerReleasedHandler released], [Fuse.Input.PointerEnteredHandler entered], [Fuse.Input.PointerLeftHandler left], [Fuse.Input.PointerWheelMovedHandler wheelMoved]) :982
void Pointer__AddHandlers_fn(::g::Fuse::Visual* node, uDelegate* pressed, uDelegate* moved, uDelegate* released, uDelegate* entered, uDelegate* left, uDelegate* wheelMoved)
{
    Pointer::AddHandlers(node, pressed, moved, released, entered, left, wheelMoved);
}

// private static void CheckFocus(Fuse.Input.PointerPressedArgs args, Uno.Collections.IList<Fuse.Visual> nodes) :1394
void Pointer__CheckFocus_fn(::g::Fuse::Input::PointerPressedArgs* args, uObject* nodes)
{
    Pointer::CheckFocus(args, nodes);
}

// public static generated float2 get_Coord() :1050
void Pointer__get_Coord_fn(::g::Uno::Float2* __retval)
{
    *__retval = Pointer::Coord();
}

// private static generated void set_Coord(float2 value) :1050
void Pointer__set_Coord_fn(::g::Uno::Float2* value)
{
    Pointer::Coord(*value);
}

// public static float2[] get_Coords() :1018
void Pointer__get_Coords_fn(uArray** __retval)
{
    *__retval = Pointer::Coords();
}

// public static Fuse.VisualEvent<Fuse.Input.PointerEnteredHandler, Fuse.Input.PointerEnteredArgs> get_Entered() :978
void Pointer__get_Entered_fn(::g::Fuse::VisualEvent** __retval)
{
    *__retval = Pointer::Entered();
}

// public static generated Fuse.Input.IPointerEventResponder get_EventResponder() :961
void Pointer__get_EventResponder_fn(uObject** __retval)
{
    *__retval = Pointer::EventResponder();
}

// public static generated void set_EventResponder(Fuse.Input.IPointerEventResponder value) :961
void Pointer__set_EventResponder_fn(uObject* value)
{
    Pointer::EventResponder(value);
}

// internal static Fuse.Input.Capturer GetHardCapturer(int pointIndex) :1165
void Pointer__GetHardCapturer_fn(int* pointIndex, ::g::Fuse::Input::Capturer** __retval)
{
    *__retval = Pointer::GetHardCapturer(*pointIndex);
}

// private static Uno.Collections.List<Fuse.Input.Pointer.PELHolder> GetLastHitList(int pointIndex) :1379
void Pointer__GetLastHitList_fn(int* pointIndex, ::g::Uno::Collections::List** __retval)
{
    *__retval = Pointer::GetLastHitList(*pointIndex);
}

// internal static Fuse.Input.Capturer GetSoftCapturer(int pointIndex) :1054
void Pointer__GetSoftCapturer_fn(int* pointIndex, ::g::Fuse::Input::Capturer** __retval)
{
    *__retval = Pointer::GetSoftCapturer(*pointIndex);
}

// internal static bool HardCapture(int pointIndex, Fuse.Visual node, object identity, Uno.Action lostCallback) :1180
void Pointer__HardCapture_fn(int* pointIndex, ::g::Fuse::Visual* node, uObject* identity, uDelegate* lostCallback, bool* __retval)
{
    *__retval = Pointer::HardCapture(*pointIndex, node, identity, lostCallback);
}

// public static bool IsHardCaptured(int pointIndex) :1154
void Pointer__IsHardCaptured_fn(int* pointIndex, bool* __retval)
{
    *__retval = Pointer::IsHardCaptured(*pointIndex);
}

// public static bool IsHardCaptured(int pointIndex, object behavior) :1159
void Pointer__IsHardCaptured1_fn(int* pointIndex, uObject* behavior, bool* __retval)
{
    *__retval = Pointer::IsHardCaptured1(*pointIndex, behavior);
}

// public static bool IsPressed() :1039
void Pointer__IsPressed_fn(bool* __retval)
{
    *__retval = Pointer::IsPressed();
}

// public static bool IsPressed(int pointIndex) :1044
void Pointer__IsPressed1_fn(int* pointIndex, bool* __retval)
{
    *__retval = Pointer::IsPressed1(*pointIndex);
}

// public static bool IsSoftCaptured(int pointIndex) :1074
void Pointer__IsSoftCaptured_fn(int* pointIndex, bool* __retval)
{
    *__retval = Pointer::IsSoftCaptured(*pointIndex);
}

// public static bool IsSoftCaptured(int pointIndex, object capturerIdentity) :1079
void Pointer__IsSoftCaptured1_fn(int* pointIndex, uObject* capturerIdentity, bool* __retval)
{
    *__retval = Pointer::IsSoftCaptured1(*pointIndex, capturerIdentity);
}

// public static Fuse.VisualEvent<Fuse.Input.PointerLeftHandler, Fuse.Input.PointerLeftArgs> get_Left() :979
void Pointer__get_Left_fn(::g::Fuse::VisualEvent** __retval)
{
    *__retval = Pointer::Left();
}

// private static void MarkAncestorHits(Fuse.Visual hitObject, Uno.Collections.List<Fuse.Input.Pointer.PELHolder> list) :1334
void Pointer__MarkAncestorHits_fn(::g::Fuse::Visual* hitObject, ::g::Uno::Collections::List* list)
{
    Pointer::MarkAncestorHits(hitObject, list);
}

// public static Fuse.VisualEvent<Fuse.Input.PointerMovedHandler, Fuse.Input.PointerMovedArgs> get_Moved() :976
void Pointer__get_Moved_fn(::g::Fuse::VisualEvent** __retval)
{
    *__retval = Pointer::Moved();
}

// public static Fuse.VisualEvent<Fuse.Input.PointerPressedHandler, Fuse.Input.PointerPressedArgs> get_Pressed() :975
void Pointer__get_Pressed_fn(::g::Fuse::VisualEvent** __retval)
{
    *__retval = Pointer::Pressed();
}

// private static void ProcessPointerEnterLeave(Fuse.HitTestResult result, Fuse.Input.PointerEventData args) :1310
void Pointer__ProcessPointerEnterLeave_fn(::g::Fuse::HitTestResult* result, ::g::Fuse::Input::PointerEventData* args)
{
    Pointer::ProcessPointerEnterLeave(result, args);
}

// internal static void RaiseLeft(Fuse.Visual root, Fuse.Input.PointerEventData data) :1259
void Pointer__RaiseLeft_fn(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data)
{
    Pointer::RaiseLeft(root, data);
}

// internal static bool RaiseMoved(Fuse.Visual root, Fuse.Input.PointerEventData data) :1230
void Pointer__RaiseMoved_fn(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data, bool* __retval)
{
    *__retval = Pointer::RaiseMoved(root, data);
}

// internal static bool RaisePressed(Fuse.Visual root, Fuse.Input.PointerEventData data) :1222
void Pointer__RaisePressed_fn(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data, bool* __retval)
{
    *__retval = Pointer::RaisePressed(root, data);
}

// internal static bool RaiseReleased(Fuse.Visual root, Fuse.Input.PointerEventData data) :1238
void Pointer__RaiseReleased_fn(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data, bool* __retval)
{
    *__retval = Pointer::RaiseReleased(root, data);
}

// internal static bool RaiseWheelMoved(Fuse.Visual root, Fuse.Input.PointerEventData data) :1251
void Pointer__RaiseWheelMoved_fn(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data, bool* __retval)
{
    *__retval = Pointer::RaiseWheelMoved(root, data);
}

// public static void ReleaseAllCaptures(object identity) :1131
void Pointer__ReleaseAllCaptures_fn(uObject* identity)
{
    Pointer::ReleaseAllCaptures(identity);
}

// public static Fuse.VisualEvent<Fuse.Input.PointerReleasedHandler, Fuse.Input.PointerReleasedArgs> get_Released() :977
void Pointer__get_Released_fn(::g::Fuse::VisualEvent** __retval)
{
    *__retval = Pointer::Released();
}

// public static void ReleaseHardCapture(int pointIndex) :1214
void Pointer__ReleaseHardCapture_fn(int* pointIndex)
{
    Pointer::ReleaseHardCapture(*pointIndex);
}

// public static void ReleaseSoftCapture(int pointIndex, object identity) :1115
void Pointer__ReleaseSoftCapture_fn(int* pointIndex, uObject* identity)
{
    Pointer::ReleaseSoftCapture(*pointIndex, identity);
}

// public static void RemoveHandlers(Fuse.Visual node, [Fuse.Input.PointerPressedHandler pressed], [Fuse.Input.PointerMovedHandler moved], [Fuse.Input.PointerReleasedHandler released], [Fuse.Input.PointerEnteredHandler entered], [Fuse.Input.PointerLeftHandler left], [Fuse.Input.PointerWheelMovedHandler wheelMoved]) :998
void Pointer__RemoveHandlers_fn(::g::Fuse::Visual* node, uDelegate* pressed, uDelegate* moved, uDelegate* released, uDelegate* entered, uDelegate* left, uDelegate* wheelMoved)
{
    Pointer::RemoveHandlers(node, pressed, moved, released, entered, left, wheelMoved);
}

// private static Fuse.Visual RoutePointerEvent(Fuse.Input.PointerEventData plainEvent, Fuse.Visual root) :1264
void Pointer__RoutePointerEvent_fn(::g::Fuse::Input::PointerEventData* plainEvent, ::g::Fuse::Visual* root, ::g::Fuse::Visual** __retval)
{
    *__retval = Pointer::RoutePointerEvent(plainEvent, root);
}

// private static Fuse.Visual RouteToCapturer(Fuse.Input.PointerEventData args) :1286
void Pointer__RouteToCapturer_fn(::g::Fuse::Input::PointerEventData* args, ::g::Fuse::Visual** __retval)
{
    *__retval = Pointer::RouteToCapturer(args);
}

// private static Fuse.Visual RouteToHit(Fuse.Input.PointerEventData args, Fuse.Visual root) :1294
void Pointer__RouteToHit_fn(::g::Fuse::Input::PointerEventData* args, ::g::Fuse::Visual* root, ::g::Fuse::Visual** __retval)
{
    *__retval = Pointer::RouteToHit(args, root);
}

// private static Fuse.Visual RouteToSoftCapturer(Fuse.Input.PointerEventData args) :1278
void Pointer__RouteToSoftCapturer_fn(::g::Fuse::Input::PointerEventData* args, ::g::Fuse::Visual** __retval)
{
    *__retval = Pointer::RouteToSoftCapturer(args);
}

// internal static bool SoftCapture(int pointIndex, Fuse.Visual softCapturer, object identity, Uno.Action lostCallback) :1090
void Pointer__SoftCapture_fn(int* pointIndex, ::g::Fuse::Visual* softCapturer, uObject* identity, uDelegate* lostCallback, bool* __retval)
{
    *__retval = Pointer::SoftCapture(*pointIndex, softCapturer, identity, lostCallback);
}

// public static Fuse.VisualEvent<Fuse.Input.PointerWheelMovedHandler, Fuse.Input.PointerWheelMovedArgs> get_WheelMoved() :980
void Pointer__get_WheelMoved_fn(::g::Fuse::VisualEvent** __retval)
{
    *__retval = Pointer::WheelMoved();
}

uSStrong< ::g::Fuse::Input::PointerEntered*> Pointer::_entered_;
uSStrong< ::g::Uno::Collections::Dictionary*> Pointer::_hardCapturers_;
uSStrong< ::g::Uno::Collections::Dictionary*> Pointer::_lastHitVisuals_;
uSStrong< ::g::Fuse::Input::PointerLeft*> Pointer::_left_;
uSStrong< ::g::Fuse::Input::PointerMoved*> Pointer::_moved_;
uSStrong< ::g::Uno::Collections::Dictionary*> Pointer::_pointersDown_;
uSStrong< ::g::Fuse::Input::PointerPressed*> Pointer::_pressed_;
uSStrong< ::g::Fuse::Input::PointerReleased*> Pointer::_released_;
uSStrong< ::g::Uno::Collections::Dictionary*> Pointer::_softCapturers_;
uSStrong< ::g::Fuse::Input::PointerWheelMoved*> Pointer::_wheelMoved_;
::g::Uno::Float2 Pointer::_Coord_;
uSStrong<uObject*> Pointer::_EventResponder_;

// public static void AddHandlers(Fuse.Visual node, [Fuse.Input.PointerPressedHandler pressed], [Fuse.Input.PointerMovedHandler moved], [Fuse.Input.PointerReleasedHandler released], [Fuse.Input.PointerEnteredHandler entered], [Fuse.Input.PointerLeftHandler left], [Fuse.Input.PointerWheelMovedHandler wheelMoved]) [static] :982
void Pointer::AddHandlers(::g::Fuse::Visual* node, uDelegate* pressed, uDelegate* moved, uDelegate* released, uDelegate* entered, uDelegate* left, uDelegate* wheelMoved)
{
    uStackFrame __("Fuse.Input.Pointer", "AddHandlers(Fuse.Visual,[Fuse.Input.PointerPressedHandler],[Fuse.Input.PointerMovedHandler],[Fuse.Input.PointerReleasedHandler],[Fuse.Input.PointerEnteredHandler],[Fuse.Input.PointerLeftHandler],[Fuse.Input.PointerWheelMovedHandler])");
    Pointer_typeof()->Init();

    if (::g::Uno::Delegate::op_Inequality(pressed, NULL))
        ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(Pointer::Pressed()), node, pressed);

    if (::g::Uno::Delegate::op_Inequality(moved, NULL))
        ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(Pointer::Moved()), node, moved);

    if (::g::Uno::Delegate::op_Inequality(released, NULL))
        ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(Pointer::Released()), node, released);

    if (::g::Uno::Delegate::op_Inequality(entered, NULL))
        ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(Pointer::Entered()), node, entered);

    if (::g::Uno::Delegate::op_Inequality(left, NULL))
        ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(Pointer::Left()), node, left);

    if (::g::Uno::Delegate::op_Inequality(wheelMoved, NULL))
        ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(Pointer::WheelMoved()), node, wheelMoved);
}

// private static void CheckFocus(Fuse.Input.PointerPressedArgs args, Uno.Collections.IList<Fuse.Visual> nodes) [static] :1394
void Pointer::CheckFocus(::g::Fuse::Input::PointerPressedArgs* args, uObject* nodes)
{
    uStackFrame __("Fuse.Input.Pointer", "CheckFocus(Fuse.Input.PointerPressedArgs,Uno.Collections.IList<Fuse.Visual>)");
    Pointer_typeof()->Init();
    ::g::Fuse::Visual* ret8;

    if (uPtr(args)->IsHandled())
        return;

    bool b = false;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(nodes), ::TYPES[19/*Uno.Collections.ICollection<Fuse.Visual>*/])); ++i)
        if (::g::Fuse::Input::Focus::HandlesFocusEvent((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(nodes), ::TYPES[20/*Uno.Collections.IList<Fuse.Visual>*/]), uCRef<int>(i), &ret8), ret8)))
        {
            b = true;
            break;
        }

    if (!b)
        ::g::Fuse::Input::Focus::Release();
}

// internal static Fuse.Input.Capturer GetHardCapturer(int pointIndex) [static] :1165
::g::Fuse::Input::Capturer* Pointer::GetHardCapturer(int pointIndex)
{
    uStackFrame __("Fuse.Input.Pointer", "GetHardCapturer(int)");
    Pointer_typeof()->Init();
    bool ret9;
    ::g::Fuse::Input::Capturer* ret10;
    bool ret11;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(Pointer::_hardCapturers()), uCRef<int>(pointIndex), &ret9), ret9))
    {
        ::g::Fuse::Input::Capturer* hc = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(Pointer::_hardCapturers()), uCRef<int>(pointIndex), &ret10), ret10);

        if (uPtr(hc)->IsSuitable())
            return hc;

        uPtr(uPtr(hc)->LostCallback())->InvokeVoid();
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(Pointer::_hardCapturers()), uCRef<int>(pointIndex), &ret11);
    }

    return NULL;
}

// private static Uno.Collections.List<Fuse.Input.Pointer.PELHolder> GetLastHitList(int pointIndex) [static] :1379
::g::Uno::Collections::List* Pointer::GetLastHitList(int pointIndex)
{
    uStackFrame __("Fuse.Input.Pointer", "GetLastHitList(int)");
    Pointer_typeof()->Init();
    bool ret12;
    ::g::Uno::Collections::List* lastHitList = NULL;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(Pointer::_lastHitVisuals()), uCRef<int>(pointIndex), (void**)(&lastHitList), &ret12), ret12))
    {
        lastHitList = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[21/*Uno.Collections.List<Fuse.Input.Pointer.PELHolder>*/]);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Pointer::_lastHitVisuals()), uCRef<int>(pointIndex), lastHitList);
    }

    return lastHitList;
}

// internal static Fuse.Input.Capturer GetSoftCapturer(int pointIndex) [static] :1054
::g::Fuse::Input::Capturer* Pointer::GetSoftCapturer(int pointIndex)
{
    uStackFrame __("Fuse.Input.Pointer", "GetSoftCapturer(int)");
    Pointer_typeof()->Init();
    bool ret13;
    uObject* ret14;
    ::g::Fuse::Input::Capturer* ret15;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(Pointer::_softCapturers()), uCRef<int>(pointIndex), &ret13), ret13))
    {
        uObject* list = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(Pointer::_softCapturers()), uCRef<int>(pointIndex), &ret14), ret14);

        while (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), ::TYPES[22/*Uno.Collections.ICollection<Fuse.Input.Capturer>*/])) > 0)
        {
            ::g::Fuse::Input::Capturer* n = (::g::Uno::Collections::EnumerableExtensions__First_fn(::TYPES[23/*Uno.Collections.EnumerableExtensions.First<Fuse.Input.Capturer>*/], list, &ret15), ret15);

            if (uPtr(n)->IsSuitable())
                return n;

            ::g::Uno::Collections::IList::RemoveAt(uInterface(uPtr(list), ::TYPES[24/*Uno.Collections.IList<Fuse.Input.Capturer>*/]), 0);
            uPtr(uPtr(n)->LostCallback())->InvokeVoid();
        }
    }

    return NULL;
}

// internal static bool HardCapture(int pointIndex, Fuse.Visual node, object identity, Uno.Action lostCallback) [static] :1180
bool Pointer::HardCapture(int pointIndex, ::g::Fuse::Visual* node, uObject* identity, uDelegate* lostCallback)
{
    uStackFrame __("Fuse.Input.Pointer", "HardCapture(int,Fuse.Visual,object,Uno.Action)");
    Pointer_typeof()->Init();
    bool ret16;
    uObject* ret17;
    ::g::Fuse::Input::Capturer* ret18;
    ::g::Fuse::Input::Capturer* ret19;
    ::g::Fuse::Input::Capturer* ret20;

    if (::g::Uno::Delegate::op_Equality(lostCallback, NULL))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[6/*"HardCapture...*/]));

    if (identity == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[7/*"HardCapture...*/]));

    if (node == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[8/*"HardCapture...*/]));

    if (!uPtr(node)->IsContextEnabled() || !uPtr(node)->IsRootingCompleted())
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[9/*"HardCapture...*/], 1, ::STRINGS[10/*"/usr/local/...*/], 1191);
        return false;
    }

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(Pointer::_softCapturers()), uCRef<int>(pointIndex), &ret16), ret16))
    {
        uObject* sc = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(Pointer::_softCapturers()), uCRef<int>(pointIndex), &ret17), ret17);

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sc), ::TYPES[22/*Uno.Collections.ICollection<Fuse.Input.Capturer>*/])); i++)
        {
            if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sc), ::TYPES[24/*Uno.Collections.IList<Fuse.Input.Capturer>*/]), uCRef<int>(i), &ret18), ret18))->Identity() == identity)
                continue;

            if (::g::Uno::Delegate::op_Inequality(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sc), ::TYPES[24/*Uno.Collections.IList<Fuse.Input.Capturer>*/]), uCRef<int>(i), &ret19), ret19))->LostCallback(), NULL))
                uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sc), ::TYPES[24/*Uno.Collections.IList<Fuse.Input.Capturer>*/]), uCRef<int>(i), &ret20), ret20))->LostCallback())->InvokeVoid();
        }

        ::g::Uno::Collections::ICollection::Clear(uInterface(uPtr(sc), ::TYPES[22/*Uno.Collections.ICollection<Fuse.Input.Capturer>*/]));
    }

    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(Pointer::_hardCapturers()), uCRef<int>(pointIndex), ::g::Fuse::Input::Capturer::New1(node, identity, lostCallback));
    return true;
}

// public static bool IsHardCaptured(int pointIndex) [static] :1154
bool Pointer::IsHardCaptured(int pointIndex)
{
    uStackFrame __("Fuse.Input.Pointer", "IsHardCaptured(int)");
    Pointer_typeof()->Init();
    bool ret21;
    return (::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(Pointer::_hardCapturers()), uCRef<int>(pointIndex), &ret21), ret21);
}

// public static bool IsHardCaptured(int pointIndex, object behavior) [static] :1159
bool Pointer::IsHardCaptured1(int pointIndex, uObject* behavior)
{
    uStackFrame __("Fuse.Input.Pointer", "IsHardCaptured(int,object)");
    Pointer_typeof()->Init();
    ::g::Fuse::Input::Capturer* hc = Pointer::GetHardCapturer(pointIndex);
    return (hc != NULL) && (uPtr(hc)->Identity() == behavior);
}

// public static bool IsPressed() [static] :1039
bool Pointer::IsPressed()
{
    uStackFrame __("Fuse.Input.Pointer", "IsPressed()");
    Pointer_typeof()->Init();
    return uPtr(Pointer::_pointersDown())->Count() > 0;
}

// public static bool IsPressed(int pointIndex) [static] :1044
bool Pointer::IsPressed1(int pointIndex)
{
    uStackFrame __("Fuse.Input.Pointer", "IsPressed(int)");
    Pointer_typeof()->Init();
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong<Pointer__PointerRecord*> > ret22;

    for (::g::Uno::Collections::Dictionary__Enumerator<int, uStrong<Pointer__PointerRecord*> > enum2 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(Pointer::_pointersDown()), &ret22), ret22); enum2.MoveNext(::TYPES[25/*Uno.Collections.Dictionary<int, Fuse.Input.Pointer.PointerRecord>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<int, uStrong<Pointer__PointerRecord*> > p = enum2.Current(::TYPES[25/*Uno.Collections.Dictionary<int, Fuse.Input.Pointer.PointerRecord>.Enumerator*/]);

        if (p.Key(::TYPES[26/*Uno.Collections.KeyValuePair<int, Fuse.Input.Pointer.PointerRecord>*/]) == pointIndex)
            return true;
    }

    return false;
}

// public static bool IsSoftCaptured(int pointIndex) [static] :1074
bool Pointer::IsSoftCaptured(int pointIndex)
{
    uStackFrame __("Fuse.Input.Pointer", "IsSoftCaptured(int)");
    Pointer_typeof()->Init();
    bool ret23;
    return (::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(Pointer::_softCapturers()), uCRef<int>(pointIndex), &ret23), ret23);
}

// public static bool IsSoftCaptured(int pointIndex, object capturerIdentity) [static] :1079
bool Pointer::IsSoftCaptured1(int pointIndex, uObject* capturerIdentity)
{
    uStackFrame __("Fuse.Input.Pointer", "IsSoftCaptured(int,object)");
    Pointer_typeof()->Init();
    bool ret24;
    uObject* ret25;
    ::g::Fuse::Input::Capturer* ret26;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(Pointer::_softCapturers()), uCRef<int>(pointIndex), &ret24), ret24))
    {
        uObject* sc = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(Pointer::_softCapturers()), uCRef<int>(pointIndex), &ret25), ret25);

        for (uObject* enum3 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(sc), ::TYPES[27/*Uno.Collections.IEnumerable<Fuse.Input.Capturer>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum3), ::TYPES[5/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Fuse::Input::Capturer* s = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum3), ::TYPES[28/*Uno.Collections.IEnumerator<Fuse.Input.Capturer>*/]), &ret26), ret26);

            if (uPtr(s)->Identity() == capturerIdentity)
                return true;
        }
    }

    return false;
}

// private static void MarkAncestorHits(Fuse.Visual hitObject, Uno.Collections.List<Fuse.Input.Pointer.PELHolder> list) [static] :1334
void Pointer::MarkAncestorHits(::g::Fuse::Visual* hitObject, ::g::Uno::Collections::List* list)
{
    uStackFrame __("Fuse.Input.Pointer", "MarkAncestorHits(Fuse.Visual,Uno.Collections.List<Fuse.Input.Pointer.PELHolder>)");
    Pointer_typeof()->Init();
    Pointer__PELHolder* collection7;
    Pointer__PELHolder* ret27;
    Pointer__PELHolder* ret28;
    Pointer__PELHolder* ret29;

    for (int i = 0; i < uPtr(list)->Count(); ++i)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i), &ret27), ret27))->Status = 1;

    while (hitObject != NULL)
    {
        bool found = false;

        for (int i1 = 0; i1 < uPtr(list)->Count(); ++i1)
            if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i1), &ret28), ret28))->Visual == hitObject)
            {
                uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i1), &ret29), ret29))->Status = 2;
                found = true;
                break;
            }

        if (!found)
            ::g::Uno::Collections::List__Add_fn(uPtr(list), (collection7 = Pointer__PELHolder::New1(), uPtr(collection7)->Visual = hitObject, uPtr(collection7)->Status = 0, collection7));

        hitObject = uPtr(hitObject)->Parent();
    }
}

// private static void ProcessPointerEnterLeave(Fuse.HitTestResult result, Fuse.Input.PointerEventData args) [static] :1310
void Pointer::ProcessPointerEnterLeave(::g::Fuse::HitTestResult* result, ::g::Fuse::Input::PointerEventData* args)
{
    uStackFrame __("Fuse.Input.Pointer", "ProcessPointerEnterLeave(Fuse.HitTestResult,Fuse.Input.PointerEventData)");
    Pointer_typeof()->Init();
    Pointer__PELHolder* ret30;
    Pointer__PELHolder* ret31;
    Pointer__PELHolder* ret32;
    Pointer__PELHolder* ret33;
    ::g::Uno::Collections::List* lastHitList = Pointer::GetLastHitList(uPtr(args)->PointIndex);
    Pointer::MarkAncestorHits((result == NULL) ? uCast< ::g::Fuse::Visual*>(NULL, ::TYPES[1/*Fuse.Visual*/]) : (::g::Fuse::Visual*)uPtr(result)->HitObject(), lastHitList);

    for (int j = uPtr(lastHitList)->Count() - 1; j >= 0; j--)
    {
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(lastHitList), uCRef<int>(j), &ret30), ret30))->Status != 1)
            continue;

        uPtr(Pointer::Left())->RaiseWithoutBubble(::g::Fuse::Input::PointerLeftArgs::New3(args, uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(lastHitList), uCRef<int>(j), &ret31), ret31))->Visual), 2);
        lastHitList->RemoveAt(j);
    }

    for (int j1 = 0; j1 < lastHitList->Count(); ++j1)
    {
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(lastHitList), uCRef<int>(j1), &ret32), ret32))->Status != 0)
            continue;

        uPtr(Pointer::Entered())->RaiseWithoutBubble(::g::Fuse::Input::PointerEnteredArgs::New3(args, uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(lastHitList), uCRef<int>(j1), &ret33), ret33))->Visual), 1);
    }
}

// internal static void RaiseLeft(Fuse.Visual root, Fuse.Input.PointerEventData data) [static] :1259
void Pointer::RaiseLeft(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data)
{
    uStackFrame __("Fuse.Input.Pointer", "RaiseLeft(Fuse.Visual,Fuse.Input.PointerEventData)");
    Pointer_typeof()->Init();
    Pointer::ProcessPointerEnterLeave(NULL, data);
}

// internal static bool RaiseMoved(Fuse.Visual root, Fuse.Input.PointerEventData data) [static] :1230
bool Pointer::RaiseMoved(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data)
{
    uStackFrame __("Fuse.Input.Pointer", "RaiseMoved(Fuse.Visual,Fuse.Input.PointerEventData)");
    Pointer_typeof()->Init();
    ::g::Fuse::Visual* target = Pointer::RoutePointerEvent(data, root);
    ::g::Fuse::Input::PointerMovedArgs* e = ::g::Fuse::Input::PointerMovedArgs::New3(data, target);
    ::g::Fuse::Input::IPointerEventResponder::OnPointerMoved(uInterface(uPtr(Pointer::EventResponder()), ::TYPES[29/*Fuse.Input.IPointerEventResponder*/]), e);
    return e->IsHandled();
}

// internal static bool RaisePressed(Fuse.Visual root, Fuse.Input.PointerEventData data) [static] :1222
bool Pointer::RaisePressed(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data)
{
    uStackFrame __("Fuse.Input.Pointer", "RaisePressed(Fuse.Visual,Fuse.Input.PointerEventData)");
    Pointer_typeof()->Init();
    ::g::Fuse::Visual* target = Pointer::RoutePointerEvent(data, root);
    ::g::Fuse::Input::PointerPressedArgs* e = ::g::Fuse::Input::PointerPressedArgs::New3(data, target);
    ::g::Fuse::Input::IPointerEventResponder::OnPointerPressed(uInterface(uPtr(Pointer::EventResponder()), ::TYPES[29/*Fuse.Input.IPointerEventResponder*/]), e);
    return e->IsHandled();
}

// internal static bool RaiseReleased(Fuse.Visual root, Fuse.Input.PointerEventData data) [static] :1238
bool Pointer::RaiseReleased(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data)
{
    uStackFrame __("Fuse.Input.Pointer", "RaiseReleased(Fuse.Visual,Fuse.Input.PointerEventData)");
    Pointer_typeof()->Init();
    ::g::Fuse::Visual* target = Pointer::RoutePointerEvent(data, root);
    ::g::Fuse::Input::PointerReleasedArgs* e = ::g::Fuse::Input::PointerReleasedArgs::New3(data, target);
    ::g::Fuse::Input::IPointerEventResponder::OnPointerReleased(uInterface(uPtr(Pointer::EventResponder()), ::TYPES[29/*Fuse.Input.IPointerEventResponder*/]), e);

    if (uPtr(data)->PointerType == 2)
        Pointer::ProcessPointerEnterLeave(NULL, data);

    return e->IsHandled();
}

// internal static bool RaiseWheelMoved(Fuse.Visual root, Fuse.Input.PointerEventData data) [static] :1251
bool Pointer::RaiseWheelMoved(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data)
{
    uStackFrame __("Fuse.Input.Pointer", "RaiseWheelMoved(Fuse.Visual,Fuse.Input.PointerEventData)");
    Pointer_typeof()->Init();
    ::g::Fuse::Visual* target = Pointer::RoutePointerEvent(data, root);
    ::g::Fuse::Input::PointerWheelMovedArgs* e = ::g::Fuse::Input::PointerWheelMovedArgs::New3(data, target);
    ::g::Fuse::Input::IPointerEventResponder::OnPointerWheelMoved(uInterface(uPtr(Pointer::EventResponder()), ::TYPES[29/*Fuse.Input.IPointerEventResponder*/]), e);
    return e->IsHandled();
}

// public static void ReleaseAllCaptures(object identity) [static] :1131
void Pointer::ReleaseAllCaptures(uObject* identity)
{
    uStackFrame __("Fuse.Input.Pointer", "ReleaseAllCaptures(object)");
    Pointer_typeof()->Init();
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong<uObject*> > ret34;
    ::g::Fuse::Input::Capturer* ret35;
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Input::Capturer*> > ret36;
    ::g::Uno::Collections::List__Enumerator<int> ret37;
    bool ret38;

    for (::g::Uno::Collections::Dictionary__Enumerator<int, uStrong<uObject*> > enum4 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(Pointer::_softCapturers()), &ret34), ret34); enum4.MoveNext(::TYPES[30/*Uno.Collections.Dictionary<int, Uno.Collections.IList<Fuse.Input.Capturer>>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<int, uStrong<uObject*> > sc = enum4.Current(::TYPES[30/*Uno.Collections.Dictionary<int, Uno.Collections.IList<Fuse.Input.Capturer>>.Enumerator*/]);

        for (int i = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sc.Value(::TYPES[31/*Uno.Collections.KeyValuePair<int, Uno.Collections.IList<Fuse.Input.Capturer>>*/])), ::TYPES[22/*Uno.Collections.ICollection<Fuse.Input.Capturer>*/])) - 1; i >= 0; --i)
            if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sc.Value(::TYPES[31/*Uno.Collections.KeyValuePair<int, Uno.Collections.IList<Fuse.Input.Capturer>>*/])), ::TYPES[24/*Uno.Collections.IList<Fuse.Input.Capturer>*/]), uCRef<int>(i), &ret35), ret35))->Identity() == identity)
                ::g::Uno::Collections::IList::RemoveAt(uInterface(uPtr(sc.Value(::TYPES[31/*Uno.Collections.KeyValuePair<int, Uno.Collections.IList<Fuse.Input.Capturer>>*/])), ::TYPES[24/*Uno.Collections.IList<Fuse.Input.Capturer>*/]), i);
    }

    ::g::Uno::Collections::List* remove = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[32/*Uno.Collections.List<int>*/]);

    for (::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Input::Capturer*> > enum5 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(Pointer::_hardCapturers()), &ret36), ret36); enum5.MoveNext(::TYPES[33/*Uno.Collections.Dictionary<int, Fuse.Input.Capturer>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<int, uStrong< ::g::Fuse::Input::Capturer*> > hc = enum5.Current(::TYPES[33/*Uno.Collections.Dictionary<int, Fuse.Input.Capturer>.Enumerator*/]);

        if (uPtr(hc.Value(::TYPES[34/*Uno.Collections.KeyValuePair<int, Fuse.Input.Capturer>*/]))->Identity() == identity)
            ::g::Uno::Collections::List__Add_fn(uPtr(remove), uCRef<int>(hc.Key(::TYPES[34/*Uno.Collections.KeyValuePair<int, Fuse.Input.Capturer>*/])));
    }

    for (::g::Uno::Collections::List__Enumerator<int> enum6 = (::g::Uno::Collections::List__GetEnumerator_fn(remove, &ret37), ret37); enum6.MoveNext(::TYPES[35/*Uno.Collections.List<int>.Enumerator*/]); )
    {
        int r = enum6.Current(::TYPES[35/*Uno.Collections.List<int>.Enumerator*/]);
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(Pointer::_hardCapturers()), uCRef<int>(r), &ret38);
    }
}

// public static void ReleaseHardCapture(int pointIndex) [static] :1214
void Pointer::ReleaseHardCapture(int pointIndex)
{
    uStackFrame __("Fuse.Input.Pointer", "ReleaseHardCapture(int)");
    Pointer_typeof()->Init();
    bool ret39;
    bool ret40;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(Pointer::_hardCapturers()), uCRef<int>(pointIndex), &ret39), ret39))
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(Pointer::_hardCapturers()), uCRef<int>(pointIndex), &ret40);
}

// public static void ReleaseSoftCapture(int pointIndex, object identity) [static] :1115
void Pointer::ReleaseSoftCapture(int pointIndex, uObject* identity)
{
    uStackFrame __("Fuse.Input.Pointer", "ReleaseSoftCapture(int,object)");
    Pointer_typeof()->Init();
    bool ret41;
    uObject* ret42;
    ::g::Fuse::Input::Capturer* ret43;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(Pointer::_softCapturers()), uCRef<int>(pointIndex), &ret41), ret41))
    {
        uObject* sc = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(Pointer::_softCapturers()), uCRef<int>(pointIndex), &ret42), ret42);

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sc), ::TYPES[22/*Uno.Collections.ICollection<Fuse.Input.Capturer>*/])); i++)
            if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sc), ::TYPES[24/*Uno.Collections.IList<Fuse.Input.Capturer>*/]), uCRef<int>(i), &ret43), ret43))->Identity() == identity)
                ::g::Uno::Collections::IList::RemoveAt(uInterface(uPtr(sc), ::TYPES[24/*Uno.Collections.IList<Fuse.Input.Capturer>*/]), i--);
    }
}

// public static void RemoveHandlers(Fuse.Visual node, [Fuse.Input.PointerPressedHandler pressed], [Fuse.Input.PointerMovedHandler moved], [Fuse.Input.PointerReleasedHandler released], [Fuse.Input.PointerEnteredHandler entered], [Fuse.Input.PointerLeftHandler left], [Fuse.Input.PointerWheelMovedHandler wheelMoved]) [static] :998
void Pointer::RemoveHandlers(::g::Fuse::Visual* node, uDelegate* pressed, uDelegate* moved, uDelegate* released, uDelegate* entered, uDelegate* left, uDelegate* wheelMoved)
{
    uStackFrame __("Fuse.Input.Pointer", "RemoveHandlers(Fuse.Visual,[Fuse.Input.PointerPressedHandler],[Fuse.Input.PointerMovedHandler],[Fuse.Input.PointerReleasedHandler],[Fuse.Input.PointerEnteredHandler],[Fuse.Input.PointerLeftHandler],[Fuse.Input.PointerWheelMovedHandler])");
    Pointer_typeof()->Init();

    if (::g::Uno::Delegate::op_Inequality(pressed, NULL))
        ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(Pointer::Pressed()), node, pressed);

    if (::g::Uno::Delegate::op_Inequality(moved, NULL))
        ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(Pointer::Moved()), node, moved);

    if (::g::Uno::Delegate::op_Inequality(released, NULL))
        ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(Pointer::Released()), node, released);

    if (::g::Uno::Delegate::op_Inequality(entered, NULL))
        ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(Pointer::Entered()), node, entered);

    if (::g::Uno::Delegate::op_Inequality(left, NULL))
        ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(Pointer::Left()), node, left);

    if (::g::Uno::Delegate::op_Inequality(wheelMoved, NULL))
        ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(Pointer::WheelMoved()), node, wheelMoved);
}

// private static Fuse.Visual RoutePointerEvent(Fuse.Input.PointerEventData plainEvent, Fuse.Visual root) [static] :1264
::g::Fuse::Visual* Pointer::RoutePointerEvent(::g::Fuse::Input::PointerEventData* plainEvent, ::g::Fuse::Visual* root)
{
    uStackFrame __("Fuse.Input.Pointer", "RoutePointerEvent(Fuse.Input.PointerEventData,Fuse.Visual)");
    Pointer_typeof()->Init();
    ::g::Fuse::Visual* n = Pointer::RouteToSoftCapturer(plainEvent);

    if (n != NULL)
        return n;

    n = Pointer::RouteToCapturer(plainEvent);

    if (n != NULL)
        return n;

    n = Pointer::RouteToHit(plainEvent, root);

    if (n != NULL)
        return n;

    return root;
}

// private static Fuse.Visual RouteToCapturer(Fuse.Input.PointerEventData args) [static] :1286
::g::Fuse::Visual* Pointer::RouteToCapturer(::g::Fuse::Input::PointerEventData* args)
{
    uStackFrame __("Fuse.Input.Pointer", "RouteToCapturer(Fuse.Input.PointerEventData)");
    Pointer_typeof()->Init();
    ::g::Fuse::Input::Capturer* capturer = Pointer::GetHardCapturer(uPtr(args)->PointIndex);

    if (capturer == NULL)
        return NULL;

    return uPtr(capturer)->Visual();
}

// private static Fuse.Visual RouteToHit(Fuse.Input.PointerEventData args, Fuse.Visual root) [static] :1294
::g::Fuse::Visual* Pointer::RouteToHit(::g::Fuse::Input::PointerEventData* args, ::g::Fuse::Visual* root)
{
    uStackFrame __("Fuse.Input.Pointer", "RouteToHit(Fuse.Input.PointerEventData,Fuse.Visual)");
    Pointer_typeof()->Init();
    ::g::Fuse::HitTestResult* result = ::g::Fuse::Input::HitTestHelpers::HitTestNearest(root, uPtr(args)->WindowPoint);

    while ((result != NULL) && !uPtr(uPtr(result)->HitObject())->IsContextEnabled())
        uPtr(result)->HitObject(uPtr(uPtr(result)->HitObject())->Parent());

    Pointer::ProcessPointerEnterLeave(result, args);

    if (result == NULL)
        return NULL;

    return uPtr(result)->HitObject();
}

// private static Fuse.Visual RouteToSoftCapturer(Fuse.Input.PointerEventData args) [static] :1278
::g::Fuse::Visual* Pointer::RouteToSoftCapturer(::g::Fuse::Input::PointerEventData* args)
{
    uStackFrame __("Fuse.Input.Pointer", "RouteToSoftCapturer(Fuse.Input.PointerEventData)");
    Pointer_typeof()->Init();
    ::g::Fuse::Input::Capturer* sc = Pointer::GetSoftCapturer(uPtr(args)->PointIndex);

    if (sc == NULL)
        return NULL;

    return uPtr(sc)->Visual();
}

// internal static bool SoftCapture(int pointIndex, Fuse.Visual softCapturer, object identity, Uno.Action lostCallback) [static] :1090
bool Pointer::SoftCapture(int pointIndex, ::g::Fuse::Visual* softCapturer, uObject* identity, uDelegate* lostCallback)
{
    uStackFrame __("Fuse.Input.Pointer", "SoftCapture(int,Fuse.Visual,object,Uno.Action)");
    Pointer_typeof()->Init();
    bool ret44;
    uObject* ret45;

    if (::g::Uno::Delegate::op_Equality(lostCallback, NULL))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[11/*"SoftCapture...*/]));

    if (identity == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[12/*"SoftCapture...*/]));

    if (softCapturer == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[13/*"SoftCapture...*/]));

    if (!uPtr(softCapturer)->IsContextEnabled() || !uPtr(softCapturer)->IsRootingCompleted())
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[14/*"SoftCapture...*/], 1, ::STRINGS[10/*"/usr/local/...*/], 1100);
        return false;
    }

    if (Pointer::GetHardCapturer(pointIndex) != NULL)
        return false;

    if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(Pointer::_softCapturers()), uCRef<int>(pointIndex), &ret44), ret44))
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Pointer::_softCapturers()), uCRef<int>(pointIndex), (uObject*)((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[36/*Uno.Collections.List<Fuse.Input.Capturer>*/])));

    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(Pointer::_softCapturers()), uCRef<int>(pointIndex), &ret45), ret45)), ::TYPES[22/*Uno.Collections.ICollection<Fuse.Input.Capturer>*/]), ::g::Fuse::Input::Capturer::New1(softCapturer, identity, lostCallback));
    return true;
}

// public static generated float2 get_Coord() [static] :1050
::g::Uno::Float2 Pointer::Coord()
{
    uStackFrame __("Fuse.Input.Pointer", "get_Coord()");
    Pointer_typeof()->Init();
    return Pointer::_Coord();
}

// private static generated void set_Coord(float2 value) [static] :1050
void Pointer::Coord(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Input.Pointer", "set_Coord(float2)");
    Pointer_typeof()->Init();
    Pointer::_Coord() = value;
}

// public static float2[] get_Coords() [static] :1018
uArray* Pointer::Coords()
{
    uStackFrame __("Fuse.Input.Pointer", "get_Coords()");
    Pointer_typeof()->Init();
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong<Pointer__PointerRecord*> > ret46;
    uArray* f = uArray::New(::TYPES[37/*float2[]*/], uPtr(Pointer::_pointersDown())->Count());
    int i = 0;

    for (::g::Uno::Collections::Dictionary__Enumerator<int, uStrong<Pointer__PointerRecord*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(Pointer::_pointersDown()), &ret46), ret46); enum1.MoveNext(::TYPES[25/*Uno.Collections.Dictionary<int, Fuse.Input.Pointer.PointerRecord>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<int, uStrong<Pointer__PointerRecord*> > p = enum1.Current(::TYPES[25/*Uno.Collections.Dictionary<int, Fuse.Input.Pointer.PointerRecord>.Enumerator*/]);
        uPtr(f)->Item< ::g::Uno::Float2>(i++) = uPtr(p.Value(::TYPES[26/*Uno.Collections.KeyValuePair<int, Fuse.Input.Pointer.PointerRecord>*/]))->WindowPoint;
    }

    return f;
}

// public static Fuse.VisualEvent<Fuse.Input.PointerEnteredHandler, Fuse.Input.PointerEnteredArgs> get_Entered() [static] :978
::g::Fuse::VisualEvent* Pointer::Entered()
{
    uStackFrame __("Fuse.Input.Pointer", "get_Entered()");
    Pointer_typeof()->Init();
    return Pointer::_entered();
}

// public static generated Fuse.Input.IPointerEventResponder get_EventResponder() [static] :961
uObject* Pointer::EventResponder()
{
    uStackFrame __("Fuse.Input.Pointer", "get_EventResponder()");
    Pointer_typeof()->Init();
    return Pointer::_EventResponder();
}

// public static generated void set_EventResponder(Fuse.Input.IPointerEventResponder value) [static] :961
void Pointer::EventResponder(uObject* value)
{
    uStackFrame __("Fuse.Input.Pointer", "set_EventResponder(Fuse.Input.IPointerEventResponder)");
    Pointer_typeof()->Init();
    Pointer::_EventResponder() = value;
}

// public static Fuse.VisualEvent<Fuse.Input.PointerLeftHandler, Fuse.Input.PointerLeftArgs> get_Left() [static] :979
::g::Fuse::VisualEvent* Pointer::Left()
{
    uStackFrame __("Fuse.Input.Pointer", "get_Left()");
    Pointer_typeof()->Init();
    return Pointer::_left();
}

// public static Fuse.VisualEvent<Fuse.Input.PointerMovedHandler, Fuse.Input.PointerMovedArgs> get_Moved() [static] :976
::g::Fuse::VisualEvent* Pointer::Moved()
{
    uStackFrame __("Fuse.Input.Pointer", "get_Moved()");
    Pointer_typeof()->Init();
    return Pointer::_moved();
}

// public static Fuse.VisualEvent<Fuse.Input.PointerPressedHandler, Fuse.Input.PointerPressedArgs> get_Pressed() [static] :975
::g::Fuse::VisualEvent* Pointer::Pressed()
{
    uStackFrame __("Fuse.Input.Pointer", "get_Pressed()");
    Pointer_typeof()->Init();
    return Pointer::_pressed();
}

// public static Fuse.VisualEvent<Fuse.Input.PointerReleasedHandler, Fuse.Input.PointerReleasedArgs> get_Released() [static] :977
::g::Fuse::VisualEvent* Pointer::Released()
{
    uStackFrame __("Fuse.Input.Pointer", "get_Released()");
    Pointer_typeof()->Init();
    return Pointer::_released();
}

// public static Fuse.VisualEvent<Fuse.Input.PointerWheelMovedHandler, Fuse.Input.PointerWheelMovedArgs> get_WheelMoved() [static] :980
::g::Fuse::VisualEvent* Pointer::WheelMoved()
{
    uStackFrame __("Fuse.Input.Pointer", "get_WheelMoved()");
    Pointer_typeof()->Init();
    return Pointer::_wheelMoved();
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// internal sealed class PointerEntered :868
// {
static void PointerEntered_build(uType* type)
{
    type->SetBase(::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::PointerEnteredHandler_typeof(), ::g::Fuse::Input::PointerEnteredArgs_typeof()));
    type->SetFields(2);
}

::g::Fuse::VisualEvent_type* PointerEntered_typeof()
{
    static uSStrong< ::g::Fuse::VisualEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEvent_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(PointerEntered);
    options.TypeSize = sizeof(::g::Fuse::VisualEvent_type);
    type = (::g::Fuse::VisualEvent_type*)uClassType::New("Fuse.Input.PointerEntered", options);
    type->fp_build_ = PointerEntered_build;
    type->fp_ctor_ = (void*)PointerEntered__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::VisualEvent*, void*, uObject*, ::g::Fuse::VisualEventArgs*))PointerEntered__Invoke_fn;
    return type;
}

// public generated PointerEntered() :868
void PointerEntered__ctor_1_fn(PointerEntered* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.PointerEnteredHandler handler, object sender, Fuse.Input.PointerEnteredArgs args) :870
void PointerEntered__Invoke_fn(PointerEntered* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::PointerEnteredArgs* args)
{
    uStackFrame __("Fuse.Input.PointerEntered", "Invoke(Fuse.Input.PointerEnteredHandler,object,Fuse.Input.PointerEnteredArgs)");
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated PointerEntered New() :868
void PointerEntered__New1_fn(PointerEntered** __retval)
{
    *__retval = PointerEntered::New1();
}

// public generated PointerEntered() [instance] :868
void PointerEntered::ctor_1()
{
    uStackFrame __("Fuse.Input.PointerEntered", ".ctor()");
    ctor_();
}

// public generated PointerEntered New() [static] :868
PointerEntered* PointerEntered::New1()
{
    PointerEntered* obj1 = (PointerEntered*)uNew(PointerEntered_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// public sealed class PointerEnteredArgs :860
// {
static void PointerEnteredArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)PointerEnteredArgs__New3_fn, 0, true, PointerEnteredArgs_typeof(), 2, ::g::Fuse::Input::PointerEventData_typeof(), ::g::Fuse::Visual_typeof()));
}

::g::Fuse::VisualEventArgs_type* PointerEnteredArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Input::PointerEventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PointerEnteredArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Input.PointerEnteredArgs", options);
    type->fp_build_ = PointerEnteredArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public PointerEnteredArgs(Fuse.Input.PointerEventData data, Fuse.Visual visual) :862
void PointerEnteredArgs__ctor_3_fn(PointerEnteredArgs* __this, ::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    __this->ctor_3(data, visual);
}

// public PointerEnteredArgs New(Fuse.Input.PointerEventData data, Fuse.Visual visual) :862
void PointerEnteredArgs__New3_fn(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual, PointerEnteredArgs** __retval)
{
    *__retval = PointerEnteredArgs::New3(data, visual);
}

// public PointerEnteredArgs(Fuse.Input.PointerEventData data, Fuse.Visual visual) [instance] :862
void PointerEnteredArgs::ctor_3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Input.PointerEnteredArgs", ".ctor(Fuse.Input.PointerEventData,Fuse.Visual)");
    ctor_2(data, visual);
}

// public PointerEnteredArgs New(Fuse.Input.PointerEventData data, Fuse.Visual visual) [static] :862
PointerEnteredArgs* PointerEnteredArgs::New3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    PointerEnteredArgs* obj1 = (PointerEnteredArgs*)uNew(PointerEnteredArgs_typeof());
    obj1->ctor_3(data, visual);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// public delegate void PointerEnteredHandler(object sender, Fuse.Input.PointerEnteredArgs args) :866
uDelegateType* PointerEnteredHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Input.PointerEnteredHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::PointerEnteredArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// public abstract class PointerEventArgs :711
// {
static void PointerEventArgs_build(uType* type)
{
    ::STRINGS[15] = uString::Const("x");
    ::STRINGS[16] = uString::Const("y");
    ::STRINGS[17] = uString::Const("index");
    ::STRINGS[18] = uString::Const("localX");
    ::STRINGS[19] = uString::Const("localY");
    ::TYPES[38] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(2,
        ::g::Fuse::Input::PointerEventData_typeof(), offsetof(::g::Fuse::Input::PointerEventArgs, _data), 0);
    type->Reflection.SetFunctions(13,
        new uFunction("IsHardCapturedTo", NULL, (void*)PointerEventArgs__IsHardCapturedTo_fn, 0, false, ::g::Uno::Bool_typeof(), 1, uObject_typeof()),
        new uFunction("get_IsPrimary", NULL, (void*)PointerEventArgs__get_IsPrimary_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("IsSoftCapturedTo", NULL, (void*)PointerEventArgs__IsSoftCapturedTo_fn, 0, false, ::g::Uno::Bool_typeof(), 1, uObject_typeof()),
        new uFunction("get_PointerType", NULL, (void*)PointerEventArgs__get_PointerType_fn, 0, false, ::g::Uno::Platform::PointerType_typeof(), 0),
        new uFunction("get_PointIndex", NULL, (void*)PointerEventArgs__get_PointIndex_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("ReleaseHardCapture", NULL, (void*)PointerEventArgs__ReleaseHardCapture_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("ReleaseSoftCapture", NULL, (void*)PointerEventArgs__ReleaseSoftCapture_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("get_Timestamp", NULL, (void*)PointerEventArgs__get_Timestamp_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("TryHardCapture", NULL, (void*)PointerEventArgs__TryHardCapture_fn, 0, false, ::g::Uno::Bool_typeof(), 3, uObject_typeof(), ::g::Uno::Action_typeof(), ::g::Fuse::Visual_typeof()),
        new uFunction("TrySoftCapture", NULL, (void*)PointerEventArgs__TrySoftCapture_fn, 0, false, ::g::Uno::Bool_typeof(), 3, uObject_typeof(), ::g::Uno::Action_typeof(), ::g::Fuse::Visual_typeof()),
        new uFunction("get_WheelDelta", NULL, (void*)PointerEventArgs__get_WheelDelta_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_WheelDeltaMode", NULL, (void*)PointerEventArgs__get_WheelDeltaMode_fn, 0, false, ::g::Uno::Platform::WheelDeltaMode_typeof(), 0),
        new uFunction("get_WindowPoint", NULL, (void*)PointerEventArgs__get_WindowPoint_fn, 0, false, ::g::Uno::Float2_typeof(), 0));
}

::g::Fuse::VisualEventArgs_type* PointerEventArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PointerEventArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Input.PointerEventArgs", options);
    type->fp_build_ = PointerEventArgs_build;
    type->fp_Serialize = (void(*)(::g::Fuse::VisualEventArgs*, uObject*))PointerEventArgs__Serialize_fn;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// protected internal PointerEventArgs(Fuse.Input.PointerEventData data, Fuse.Visual visual) :764
void PointerEventArgs__ctor_2_fn(PointerEventArgs* __this, ::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    __this->ctor_2(data, visual);
}

// internal Fuse.Input.PointerEventData get_Data() :715
void PointerEventArgs__get_Data_fn(PointerEventArgs* __this, ::g::Fuse::Input::PointerEventData** __retval)
{
    *__retval = __this->Data();
}

// internal bool get_IsHardCaptured() :756
void PointerEventArgs__get_IsHardCaptured_fn(PointerEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsHardCaptured();
}

// public bool IsHardCapturedTo(object behavior) :759
void PointerEventArgs__IsHardCapturedTo_fn(PointerEventArgs* __this, uObject* behavior, bool* __retval)
{
    *__retval = __this->IsHardCapturedTo(behavior);
}

// public bool get_IsPrimary() :724
void PointerEventArgs__get_IsPrimary_fn(PointerEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsPrimary();
}

// public bool IsSoftCapturedTo(object behavior) :749
void PointerEventArgs__IsSoftCapturedTo_fn(PointerEventArgs* __this, uObject* behavior, bool* __retval)
{
    *__retval = __this->IsSoftCapturedTo(behavior);
}

// public Uno.Platform.PointerType get_PointerType() :723
void PointerEventArgs__get_PointerType_fn(PointerEventArgs* __this, int* __retval)
{
    *__retval = __this->PointerType();
}

// public int get_PointIndex() :722
void PointerEventArgs__get_PointIndex_fn(PointerEventArgs* __this, int* __retval)
{
    *__retval = __this->PointIndex();
}

// public void ReleaseHardCapture(object behavior) :743
void PointerEventArgs__ReleaseHardCapture_fn(PointerEventArgs* __this, uObject* behavior)
{
    __this->ReleaseHardCapture(behavior);
}

// public void ReleaseSoftCapture(object behavior) :738
void PointerEventArgs__ReleaseSoftCapture_fn(PointerEventArgs* __this, uObject* behavior)
{
    __this->ReleaseSoftCapture(behavior);
}

// private override sealed void Serialize(Fuse.Scripting.IEventSerializer s) :769
void PointerEventArgs__Serialize_fn(PointerEventArgs* __this, uObject* s)
{
    uStackFrame __("Fuse.Input.PointerEventArgs", "Serialize(Fuse.Scripting.IEventSerializer)");
    ::g::Fuse::Scripting::IEventSerializer::AddDouble(uInterface(uPtr(s), ::TYPES[38/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[15/*"x"*/], (double)__this->WindowPoint().X);
    ::g::Fuse::Scripting::IEventSerializer::AddDouble(uInterface(s, ::TYPES[38/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[16/*"y"*/], (double)__this->WindowPoint().Y);
    ::g::Fuse::Scripting::IEventSerializer::AddInt(uInterface(s, ::TYPES[38/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[17/*"index"*/], __this->PointIndex());
    ::g::Uno::Float2 localPoint = uPtr(__this->Visual())->WindowToLocal(__this->WindowPoint());
    ::g::Fuse::Scripting::IEventSerializer::AddDouble(uInterface(s, ::TYPES[38/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[18/*"localX"*/], (double)localPoint.X);
    ::g::Fuse::Scripting::IEventSerializer::AddDouble(uInterface(s, ::TYPES[38/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[19/*"localY"*/], (double)localPoint.Y);
}

// public double get_Timestamp() :717
void PointerEventArgs__get_Timestamp_fn(PointerEventArgs* __this, double* __retval)
{
    *__retval = __this->Timestamp();
}

// public bool TryHardCapture(object identity, Uno.Action lostCallback, [Fuse.Visual captureVisual]) :726
void PointerEventArgs__TryHardCapture_fn(PointerEventArgs* __this, uObject* identity, uDelegate* lostCallback, ::g::Fuse::Visual* captureVisual, bool* __retval)
{
    *__retval = __this->TryHardCapture(identity, lostCallback, captureVisual);
}

// public bool TrySoftCapture(object identity, Uno.Action lostCallback, [Fuse.Visual captureVisual]) :733
void PointerEventArgs__TrySoftCapture_fn(PointerEventArgs* __this, uObject* identity, uDelegate* lostCallback, ::g::Fuse::Visual* captureVisual, bool* __retval)
{
    *__retval = __this->TrySoftCapture(identity, lostCallback, captureVisual);
}

// public float2 get_WheelDelta() :720
void PointerEventArgs__get_WheelDelta_fn(PointerEventArgs* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->WheelDelta();
}

// public Uno.Platform.WheelDeltaMode get_WheelDeltaMode() :721
void PointerEventArgs__get_WheelDeltaMode_fn(PointerEventArgs* __this, int* __retval)
{
    *__retval = __this->WheelDeltaMode();
}

// public float2 get_WindowPoint() :719
void PointerEventArgs__get_WindowPoint_fn(PointerEventArgs* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->WindowPoint();
}

// protected internal PointerEventArgs(Fuse.Input.PointerEventData data, Fuse.Visual visual) [instance] :764
void PointerEventArgs::ctor_2(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Input.PointerEventArgs", ".ctor(Fuse.Input.PointerEventData,Fuse.Visual)");
    ctor_1(visual);
    _data = data;
}

// internal Fuse.Input.PointerEventData get_Data() [instance] :715
::g::Fuse::Input::PointerEventData* PointerEventArgs::Data()
{
    uStackFrame __("Fuse.Input.PointerEventArgs", "get_Data()");
    return _data;
}

// internal bool get_IsHardCaptured() [instance] :756
bool PointerEventArgs::IsHardCaptured()
{
    uStackFrame __("Fuse.Input.PointerEventArgs", "get_IsHardCaptured()");
    return ::g::Fuse::Input::Pointer::IsHardCaptured(PointIndex());
}

// public bool IsHardCapturedTo(object behavior) [instance] :759
bool PointerEventArgs::IsHardCapturedTo(uObject* behavior)
{
    uStackFrame __("Fuse.Input.PointerEventArgs", "IsHardCapturedTo(object)");
    return ::g::Fuse::Input::Pointer::IsHardCaptured1(PointIndex(), behavior);
}

// public bool get_IsPrimary() [instance] :724
bool PointerEventArgs::IsPrimary()
{
    uStackFrame __("Fuse.Input.PointerEventArgs", "get_IsPrimary()");
    return uPtr(_data)->IsPrimary;
}

// public bool IsSoftCapturedTo(object behavior) [instance] :749
bool PointerEventArgs::IsSoftCapturedTo(uObject* behavior)
{
    uStackFrame __("Fuse.Input.PointerEventArgs", "IsSoftCapturedTo(object)");
    return ::g::Fuse::Input::Pointer::IsSoftCaptured1(PointIndex(), behavior);
}

// public Uno.Platform.PointerType get_PointerType() [instance] :723
int PointerEventArgs::PointerType()
{
    uStackFrame __("Fuse.Input.PointerEventArgs", "get_PointerType()");
    return uPtr(_data)->PointerType;
}

// public int get_PointIndex() [instance] :722
int PointerEventArgs::PointIndex()
{
    uStackFrame __("Fuse.Input.PointerEventArgs", "get_PointIndex()");
    return uPtr(_data)->PointIndex;
}

// public void ReleaseHardCapture(object behavior) [instance] :743
void PointerEventArgs::ReleaseHardCapture(uObject* behavior)
{
    uStackFrame __("Fuse.Input.PointerEventArgs", "ReleaseHardCapture(object)");

    if (IsHardCapturedTo(behavior))
        ::g::Fuse::Input::Pointer::ReleaseHardCapture(PointIndex());
}

// public void ReleaseSoftCapture(object behavior) [instance] :738
void PointerEventArgs::ReleaseSoftCapture(uObject* behavior)
{
    uStackFrame __("Fuse.Input.PointerEventArgs", "ReleaseSoftCapture(object)");
    ::g::Fuse::Input::Pointer::ReleaseSoftCapture(PointIndex(), behavior);
}

// public double get_Timestamp() [instance] :717
double PointerEventArgs::Timestamp()
{
    uStackFrame __("Fuse.Input.PointerEventArgs", "get_Timestamp()");
    return uPtr(_data)->Timestamp;
}

// public bool TryHardCapture(object identity, Uno.Action lostCallback, [Fuse.Visual captureVisual]) [instance] :726
bool PointerEventArgs::TryHardCapture(uObject* identity, uDelegate* lostCallback, ::g::Fuse::Visual* captureVisual)
{
    uStackFrame __("Fuse.Input.PointerEventArgs", "TryHardCapture(object,Uno.Action,[Fuse.Visual])");

    if (!IsHardCaptured())
        return ::g::Fuse::Input::Pointer::HardCapture(PointIndex(), (captureVisual != NULL) ? captureVisual : (::g::Fuse::Visual*)Visual(), identity, lostCallback);

    return false;
}

// public bool TrySoftCapture(object identity, Uno.Action lostCallback, [Fuse.Visual captureVisual]) [instance] :733
bool PointerEventArgs::TrySoftCapture(uObject* identity, uDelegate* lostCallback, ::g::Fuse::Visual* captureVisual)
{
    uStackFrame __("Fuse.Input.PointerEventArgs", "TrySoftCapture(object,Uno.Action,[Fuse.Visual])");
    return ::g::Fuse::Input::Pointer::SoftCapture(PointIndex(), (captureVisual != NULL) ? captureVisual : (::g::Fuse::Visual*)Visual(), identity, lostCallback);
}

// public float2 get_WheelDelta() [instance] :720
::g::Uno::Float2 PointerEventArgs::WheelDelta()
{
    uStackFrame __("Fuse.Input.PointerEventArgs", "get_WheelDelta()");
    return uPtr(_data)->WheelDelta;
}

// public Uno.Platform.WheelDeltaMode get_WheelDeltaMode() [instance] :721
int PointerEventArgs::WheelDeltaMode()
{
    uStackFrame __("Fuse.Input.PointerEventArgs", "get_WheelDeltaMode()");
    return uPtr(_data)->WheelDeltaMode;
}

// public float2 get_WindowPoint() [instance] :719
::g::Uno::Float2 PointerEventArgs::WindowPoint()
{
    uStackFrame __("Fuse.Input.PointerEventArgs", "get_WindowPoint()");
    return uPtr(_data)->WindowPoint;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// public sealed class PointerEventData :700
// {
static void PointerEventData_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Input::PointerEventData, IsPrimary), 0,
        ::g::Uno::Platform::PointerType_typeof(), offsetof(::g::Fuse::Input::PointerEventData, PointerType), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Input::PointerEventData, PointIndex), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Input::PointerEventData, Timestamp), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Input::PointerEventData, WheelDelta), 0,
        ::g::Uno::Platform::WheelDeltaMode_typeof(), offsetof(::g::Fuse::Input::PointerEventData, WheelDeltaMode), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Input::PointerEventData, WindowPoint), 0);
    type->Reflection.SetFields(7,
        new uField("IsPrimary", 0),
        new uField("PointerType", 1),
        new uField("PointIndex", 2),
        new uField("Timestamp", 3),
        new uField("WheelDelta", 4),
        new uField("WheelDeltaMode", 5),
        new uField("WindowPoint", 6));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)PointerEventData__New1_fn, 0, true, PointerEventData_typeof(), 0));
}

uType* PointerEventData_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(PointerEventData);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Input.PointerEventData", options);
    type->fp_build_ = PointerEventData_build;
    type->fp_ctor_ = (void*)PointerEventData__New1_fn;
    return type;
}

// public generated PointerEventData() :700
void PointerEventData__ctor__fn(PointerEventData* __this)
{
    __this->ctor_();
}

// public generated PointerEventData New() :700
void PointerEventData__New1_fn(PointerEventData** __retval)
{
    *__retval = PointerEventData::New1();
}

// public generated PointerEventData() [instance] :700
void PointerEventData::ctor_()
{
}

// public generated PointerEventData New() [static] :700
PointerEventData* PointerEventData::New1()
{
    PointerEventData* obj1 = (PointerEventData*)uNew(PointerEventData_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// internal sealed class PointerLeft :888
// {
static void PointerLeft_build(uType* type)
{
    type->SetBase(::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::PointerLeftHandler_typeof(), ::g::Fuse::Input::PointerLeftArgs_typeof()));
    type->SetFields(2);
}

::g::Fuse::VisualEvent_type* PointerLeft_typeof()
{
    static uSStrong< ::g::Fuse::VisualEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEvent_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(PointerLeft);
    options.TypeSize = sizeof(::g::Fuse::VisualEvent_type);
    type = (::g::Fuse::VisualEvent_type*)uClassType::New("Fuse.Input.PointerLeft", options);
    type->fp_build_ = PointerLeft_build;
    type->fp_ctor_ = (void*)PointerLeft__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::VisualEvent*, void*, uObject*, ::g::Fuse::VisualEventArgs*))PointerLeft__Invoke_fn;
    return type;
}

// public generated PointerLeft() :888
void PointerLeft__ctor_1_fn(PointerLeft* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.PointerLeftHandler handler, object sender, Fuse.Input.PointerLeftArgs args) :890
void PointerLeft__Invoke_fn(PointerLeft* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::PointerLeftArgs* args)
{
    uStackFrame __("Fuse.Input.PointerLeft", "Invoke(Fuse.Input.PointerLeftHandler,object,Fuse.Input.PointerLeftArgs)");
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated PointerLeft New() :888
void PointerLeft__New1_fn(PointerLeft** __retval)
{
    *__retval = PointerLeft::New1();
}

// public generated PointerLeft() [instance] :888
void PointerLeft::ctor_1()
{
    uStackFrame __("Fuse.Input.PointerLeft", ".ctor()");
    ctor_();
}

// public generated PointerLeft New() [static] :888
PointerLeft* PointerLeft::New1()
{
    PointerLeft* obj1 = (PointerLeft*)uNew(PointerLeft_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// public sealed class PointerLeftArgs :879
// {
static void PointerLeftArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)PointerLeftArgs__New3_fn, 0, true, PointerLeftArgs_typeof(), 2, ::g::Fuse::Input::PointerEventData_typeof(), ::g::Fuse::Visual_typeof()));
}

::g::Fuse::VisualEventArgs_type* PointerLeftArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Input::PointerEventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PointerLeftArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Input.PointerLeftArgs", options);
    type->fp_build_ = PointerLeftArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public PointerLeftArgs(Fuse.Input.PointerEventData data, Fuse.Visual visual) :881
void PointerLeftArgs__ctor_3_fn(PointerLeftArgs* __this, ::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    __this->ctor_3(data, visual);
}

// public PointerLeftArgs New(Fuse.Input.PointerEventData data, Fuse.Visual visual) :881
void PointerLeftArgs__New3_fn(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual, PointerLeftArgs** __retval)
{
    *__retval = PointerLeftArgs::New3(data, visual);
}

// public PointerLeftArgs(Fuse.Input.PointerEventData data, Fuse.Visual visual) [instance] :881
void PointerLeftArgs::ctor_3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Input.PointerLeftArgs", ".ctor(Fuse.Input.PointerEventData,Fuse.Visual)");
    ctor_2(data, visual);
}

// public PointerLeftArgs New(Fuse.Input.PointerEventData data, Fuse.Visual visual) [static] :881
PointerLeftArgs* PointerLeftArgs::New3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    PointerLeftArgs* obj1 = (PointerLeftArgs*)uNew(PointerLeftArgs_typeof());
    obj1->ctor_3(data, visual);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// public delegate void PointerLeftHandler(object sender, Fuse.Input.PointerLeftArgs args) :886
uDelegateType* PointerLeftHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Input.PointerLeftHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::PointerLeftArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// internal sealed class PointerMoved :829
// {
static void PointerMoved_build(uType* type)
{
    type->SetBase(::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::PointerMovedHandler_typeof(), ::g::Fuse::Input::PointerMovedArgs_typeof()));
    type->SetFields(2);
}

::g::Fuse::VisualEvent_type* PointerMoved_typeof()
{
    static uSStrong< ::g::Fuse::VisualEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEvent_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(PointerMoved);
    options.TypeSize = sizeof(::g::Fuse::VisualEvent_type);
    type = (::g::Fuse::VisualEvent_type*)uClassType::New("Fuse.Input.PointerMoved", options);
    type->fp_build_ = PointerMoved_build;
    type->fp_ctor_ = (void*)PointerMoved__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::VisualEvent*, void*, uObject*, ::g::Fuse::VisualEventArgs*))PointerMoved__Invoke_fn;
    return type;
}

// public generated PointerMoved() :829
void PointerMoved__ctor_1_fn(PointerMoved* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.PointerMovedHandler handler, object sender, Fuse.Input.PointerMovedArgs args) :831
void PointerMoved__Invoke_fn(PointerMoved* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    uStackFrame __("Fuse.Input.PointerMoved", "Invoke(Fuse.Input.PointerMovedHandler,object,Fuse.Input.PointerMovedArgs)");
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated PointerMoved New() :829
void PointerMoved__New1_fn(PointerMoved** __retval)
{
    *__retval = PointerMoved::New1();
}

// public generated PointerMoved() [instance] :829
void PointerMoved::ctor_1()
{
    uStackFrame __("Fuse.Input.PointerMoved", ".ctor()");
    ctor_();
}

// public generated PointerMoved New() [static] :829
PointerMoved* PointerMoved::New1()
{
    PointerMoved* obj1 = (PointerMoved*)uNew(PointerMoved_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// public sealed class PointerMovedArgs :820
// {
static void PointerMovedArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)PointerMovedArgs__New3_fn, 0, true, PointerMovedArgs_typeof(), 2, ::g::Fuse::Input::PointerEventData_typeof(), ::g::Fuse::Visual_typeof()));
}

::g::Fuse::VisualEventArgs_type* PointerMovedArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Input::PointerEventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PointerMovedArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Input.PointerMovedArgs", options);
    type->fp_build_ = PointerMovedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public PointerMovedArgs(Fuse.Input.PointerEventData data, Fuse.Visual visual) :822
void PointerMovedArgs__ctor_3_fn(PointerMovedArgs* __this, ::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    __this->ctor_3(data, visual);
}

// public PointerMovedArgs New(Fuse.Input.PointerEventData data, Fuse.Visual visual) :822
void PointerMovedArgs__New3_fn(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual, PointerMovedArgs** __retval)
{
    *__retval = PointerMovedArgs::New3(data, visual);
}

// public PointerMovedArgs(Fuse.Input.PointerEventData data, Fuse.Visual visual) [instance] :822
void PointerMovedArgs::ctor_3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Input.PointerMovedArgs", ".ctor(Fuse.Input.PointerEventData,Fuse.Visual)");
    ctor_2(data, visual);
}

// public PointerMovedArgs New(Fuse.Input.PointerEventData data, Fuse.Visual visual) [static] :822
PointerMovedArgs* PointerMovedArgs::New3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    PointerMovedArgs* obj1 = (PointerMovedArgs*)uNew(PointerMovedArgs_typeof());
    obj1->ctor_3(data, visual);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// public delegate void PointerMovedHandler(object sender, Fuse.Input.PointerMovedArgs args) :827
uDelegateType* PointerMovedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Input.PointerMovedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::PointerMovedArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// internal sealed class PointerPressed :809
// {
static void PointerPressed_build(uType* type)
{
    type->SetBase(::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::PointerPressedHandler_typeof(), ::g::Fuse::Input::PointerPressedArgs_typeof()));
    type->SetFields(2);
}

::g::Fuse::VisualEvent_type* PointerPressed_typeof()
{
    static uSStrong< ::g::Fuse::VisualEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEvent_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(PointerPressed);
    options.TypeSize = sizeof(::g::Fuse::VisualEvent_type);
    type = (::g::Fuse::VisualEvent_type*)uClassType::New("Fuse.Input.PointerPressed", options);
    type->fp_build_ = PointerPressed_build;
    type->fp_ctor_ = (void*)PointerPressed__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::VisualEvent*, void*, uObject*, ::g::Fuse::VisualEventArgs*))PointerPressed__Invoke_fn;
    return type;
}

// public generated PointerPressed() :809
void PointerPressed__ctor_1_fn(PointerPressed* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.PointerPressedHandler handler, object sender, Fuse.Input.PointerPressedArgs args) :811
void PointerPressed__Invoke_fn(PointerPressed* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    uStackFrame __("Fuse.Input.PointerPressed", "Invoke(Fuse.Input.PointerPressedHandler,object,Fuse.Input.PointerPressedArgs)");
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated PointerPressed New() :809
void PointerPressed__New1_fn(PointerPressed** __retval)
{
    *__retval = PointerPressed::New1();
}

// public generated PointerPressed() [instance] :809
void PointerPressed::ctor_1()
{
    uStackFrame __("Fuse.Input.PointerPressed", ".ctor()");
    ctor_();
}

// public generated PointerPressed New() [static] :809
PointerPressed* PointerPressed::New1()
{
    PointerPressed* obj1 = (PointerPressed*)uNew(PointerPressed_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// public sealed class PointerPressedArgs :800
// {
static void PointerPressedArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)PointerPressedArgs__New3_fn, 0, true, PointerPressedArgs_typeof(), 2, ::g::Fuse::Input::PointerEventData_typeof(), ::g::Fuse::Visual_typeof()));
}

::g::Fuse::VisualEventArgs_type* PointerPressedArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Input::PointerEventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PointerPressedArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Input.PointerPressedArgs", options);
    type->fp_build_ = PointerPressedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public PointerPressedArgs(Fuse.Input.PointerEventData data, Fuse.Visual visual) :802
void PointerPressedArgs__ctor_3_fn(PointerPressedArgs* __this, ::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    __this->ctor_3(data, visual);
}

// public PointerPressedArgs New(Fuse.Input.PointerEventData data, Fuse.Visual visual) :802
void PointerPressedArgs__New3_fn(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual, PointerPressedArgs** __retval)
{
    *__retval = PointerPressedArgs::New3(data, visual);
}

// public PointerPressedArgs(Fuse.Input.PointerEventData data, Fuse.Visual visual) [instance] :802
void PointerPressedArgs::ctor_3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Input.PointerPressedArgs", ".ctor(Fuse.Input.PointerEventData,Fuse.Visual)");
    ctor_2(data, visual);
}

// public PointerPressedArgs New(Fuse.Input.PointerEventData data, Fuse.Visual visual) [static] :802
PointerPressedArgs* PointerPressedArgs::New3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    PointerPressedArgs* obj1 = (PointerPressedArgs*)uNew(PointerPressedArgs_typeof());
    obj1->ctor_3(data, visual);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// public delegate void PointerPressedHandler(object sender, Fuse.Input.PointerPressedArgs args) :807
uDelegateType* PointerPressedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Input.PointerPressedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::PointerPressedArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// private sealed class Pointer.PointerRecord :1027
// {
static void Pointer__PointerRecord_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Input::Pointer__PointerRecord, DistanceMoved), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Input::Pointer__PointerRecord, TimeAppeared), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Input::Pointer__PointerRecord, WasHandled), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Input::Pointer__PointerRecord, WindowPoint), 0);
}

uType* Pointer__PointerRecord_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Pointer__PointerRecord);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Input.Pointer.PointerRecord", options);
    type->fp_build_ = Pointer__PointerRecord_build;
    type->fp_ctor_ = (void*)Pointer__PointerRecord__New1_fn;
    return type;
}

// public generated PointerRecord() :1027
void Pointer__PointerRecord__ctor__fn(Pointer__PointerRecord* __this)
{
    __this->ctor_();
}

// public generated PointerRecord New() :1027
void Pointer__PointerRecord__New1_fn(Pointer__PointerRecord** __retval)
{
    *__retval = Pointer__PointerRecord::New1();
}

// public generated PointerRecord() [instance] :1027
void Pointer__PointerRecord::ctor_()
{
    uStackFrame __("Fuse.Input.Pointer.PointerRecord", ".ctor()");
    TimeAppeared = ::g::Uno::Diagnostics::Clock::GetSeconds();
}

// public generated PointerRecord New() [static] :1027
Pointer__PointerRecord* Pointer__PointerRecord::New1()
{
    Pointer__PointerRecord* obj1 = (Pointer__PointerRecord*)uNew(Pointer__PointerRecord_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// internal sealed class PointerReleased :849
// {
static void PointerReleased_build(uType* type)
{
    type->SetBase(::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::PointerReleasedHandler_typeof(), ::g::Fuse::Input::PointerReleasedArgs_typeof()));
    type->SetFields(2);
}

::g::Fuse::VisualEvent_type* PointerReleased_typeof()
{
    static uSStrong< ::g::Fuse::VisualEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEvent_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(PointerReleased);
    options.TypeSize = sizeof(::g::Fuse::VisualEvent_type);
    type = (::g::Fuse::VisualEvent_type*)uClassType::New("Fuse.Input.PointerReleased", options);
    type->fp_build_ = PointerReleased_build;
    type->fp_ctor_ = (void*)PointerReleased__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::VisualEvent*, void*, uObject*, ::g::Fuse::VisualEventArgs*))PointerReleased__Invoke_fn;
    return type;
}

// public generated PointerReleased() :849
void PointerReleased__ctor_1_fn(PointerReleased* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.PointerReleasedHandler handler, object sender, Fuse.Input.PointerReleasedArgs args) :851
void PointerReleased__Invoke_fn(PointerReleased* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    uStackFrame __("Fuse.Input.PointerReleased", "Invoke(Fuse.Input.PointerReleasedHandler,object,Fuse.Input.PointerReleasedArgs)");
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated PointerReleased New() :849
void PointerReleased__New1_fn(PointerReleased** __retval)
{
    *__retval = PointerReleased::New1();
}

// public generated PointerReleased() [instance] :849
void PointerReleased::ctor_1()
{
    uStackFrame __("Fuse.Input.PointerReleased", ".ctor()");
    ctor_();
}

// public generated PointerReleased New() [static] :849
PointerReleased* PointerReleased::New1()
{
    PointerReleased* obj1 = (PointerReleased*)uNew(PointerReleased_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// public sealed class PointerReleasedArgs :840
// {
static void PointerReleasedArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)PointerReleasedArgs__New3_fn, 0, true, PointerReleasedArgs_typeof(), 2, ::g::Fuse::Input::PointerEventData_typeof(), ::g::Fuse::Visual_typeof()));
}

::g::Fuse::VisualEventArgs_type* PointerReleasedArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Input::PointerEventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PointerReleasedArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Input.PointerReleasedArgs", options);
    type->fp_build_ = PointerReleasedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public PointerReleasedArgs(Fuse.Input.PointerEventData data, Fuse.Visual visual) :842
void PointerReleasedArgs__ctor_3_fn(PointerReleasedArgs* __this, ::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    __this->ctor_3(data, visual);
}

// public PointerReleasedArgs New(Fuse.Input.PointerEventData data, Fuse.Visual visual) :842
void PointerReleasedArgs__New3_fn(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual, PointerReleasedArgs** __retval)
{
    *__retval = PointerReleasedArgs::New3(data, visual);
}

// public PointerReleasedArgs(Fuse.Input.PointerEventData data, Fuse.Visual visual) [instance] :842
void PointerReleasedArgs::ctor_3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Input.PointerReleasedArgs", ".ctor(Fuse.Input.PointerEventData,Fuse.Visual)");
    ctor_2(data, visual);
}

// public PointerReleasedArgs New(Fuse.Input.PointerEventData data, Fuse.Visual visual) [static] :842
PointerReleasedArgs* PointerReleasedArgs::New3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    PointerReleasedArgs* obj1 = (PointerReleasedArgs*)uNew(PointerReleasedArgs_typeof());
    obj1->ctor_3(data, visual);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// public delegate void PointerReleasedHandler(object sender, Fuse.Input.PointerReleasedArgs args) :847
uDelegateType* PointerReleasedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Input.PointerReleasedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::PointerReleasedArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// internal sealed class PointerWheelMoved :908
// {
static void PointerWheelMoved_build(uType* type)
{
    type->SetBase(::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::PointerWheelMovedHandler_typeof(), ::g::Fuse::Input::PointerWheelMovedArgs_typeof()));
    type->SetFields(2);
}

::g::Fuse::VisualEvent_type* PointerWheelMoved_typeof()
{
    static uSStrong< ::g::Fuse::VisualEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEvent_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(PointerWheelMoved);
    options.TypeSize = sizeof(::g::Fuse::VisualEvent_type);
    type = (::g::Fuse::VisualEvent_type*)uClassType::New("Fuse.Input.PointerWheelMoved", options);
    type->fp_build_ = PointerWheelMoved_build;
    type->fp_ctor_ = (void*)PointerWheelMoved__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::VisualEvent*, void*, uObject*, ::g::Fuse::VisualEventArgs*))PointerWheelMoved__Invoke_fn;
    return type;
}

// public generated PointerWheelMoved() :908
void PointerWheelMoved__ctor_1_fn(PointerWheelMoved* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.PointerWheelMovedHandler handler, object sender, Fuse.Input.PointerWheelMovedArgs args) :910
void PointerWheelMoved__Invoke_fn(PointerWheelMoved* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::PointerWheelMovedArgs* args)
{
    uStackFrame __("Fuse.Input.PointerWheelMoved", "Invoke(Fuse.Input.PointerWheelMovedHandler,object,Fuse.Input.PointerWheelMovedArgs)");
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated PointerWheelMoved New() :908
void PointerWheelMoved__New1_fn(PointerWheelMoved** __retval)
{
    *__retval = PointerWheelMoved::New1();
}

// public generated PointerWheelMoved() [instance] :908
void PointerWheelMoved::ctor_1()
{
    uStackFrame __("Fuse.Input.PointerWheelMoved", ".ctor()");
    ctor_();
}

// public generated PointerWheelMoved New() [static] :908
PointerWheelMoved* PointerWheelMoved::New1()
{
    PointerWheelMoved* obj1 = (PointerWheelMoved*)uNew(PointerWheelMoved_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// public sealed class PointerWheelMovedArgs :899
// {
static void PointerWheelMovedArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)PointerWheelMovedArgs__New3_fn, 0, true, PointerWheelMovedArgs_typeof(), 2, ::g::Fuse::Input::PointerEventData_typeof(), ::g::Fuse::Visual_typeof()));
}

::g::Fuse::VisualEventArgs_type* PointerWheelMovedArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Input::PointerEventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PointerWheelMovedArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Input.PointerWheelMovedArgs", options);
    type->fp_build_ = PointerWheelMovedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public PointerWheelMovedArgs(Fuse.Input.PointerEventData data, Fuse.Visual visual) :901
void PointerWheelMovedArgs__ctor_3_fn(PointerWheelMovedArgs* __this, ::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    __this->ctor_3(data, visual);
}

// public PointerWheelMovedArgs New(Fuse.Input.PointerEventData data, Fuse.Visual visual) :901
void PointerWheelMovedArgs__New3_fn(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual, PointerWheelMovedArgs** __retval)
{
    *__retval = PointerWheelMovedArgs::New3(data, visual);
}

// public PointerWheelMovedArgs(Fuse.Input.PointerEventData data, Fuse.Visual visual) [instance] :901
void PointerWheelMovedArgs::ctor_3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Input.PointerWheelMovedArgs", ".ctor(Fuse.Input.PointerEventData,Fuse.Visual)");
    ctor_2(data, visual);
}

// public PointerWheelMovedArgs New(Fuse.Input.PointerEventData data, Fuse.Visual visual) [static] :901
PointerWheelMovedArgs* PointerWheelMovedArgs::New3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    PointerWheelMovedArgs* obj1 = (PointerWheelMovedArgs*)uNew(PointerWheelMovedArgs_typeof());
    obj1->ctor_3(data, visual);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// public delegate void PointerWheelMovedHandler(object sender, Fuse.Input.PointerWheelMovedArgs args) :906
uDelegateType* PointerWheelMovedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Input.PointerWheelMovedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::PointerWheelMovedArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// private sealed class FocusPrediction.PredictFilter :89
// {
static void FocusPrediction__PredictFilter_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Predicate_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Input::FocusPrediction__PredictFilter, _filter), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Input::FocusPrediction__PredictFilter, _origin), 0);
}

uType* FocusPrediction__PredictFilter_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FocusPrediction__PredictFilter);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Input.FocusPrediction.PredictFilter", options);
    type->fp_build_ = FocusPrediction__PredictFilter_build;
    return type;
}

// public PredictFilter(Fuse.Visual origin, Uno.Predicate<Fuse.Node> filter) :94
void FocusPrediction__PredictFilter__ctor__fn(FocusPrediction__PredictFilter* __this, ::g::Fuse::Visual* origin, uDelegate* filter)
{
    __this->ctor_(origin, filter);
}

// public bool Filter(Fuse.Node node) :100
void FocusPrediction__PredictFilter__Filter_fn(FocusPrediction__PredictFilter* __this, ::g::Fuse::Node* node, bool* __retval)
{
    *__retval = __this->Filter(node);
}

// public PredictFilter New(Fuse.Visual origin, Uno.Predicate<Fuse.Node> filter) :94
void FocusPrediction__PredictFilter__New1_fn(::g::Fuse::Visual* origin, uDelegate* filter, FocusPrediction__PredictFilter** __retval)
{
    *__retval = FocusPrediction__PredictFilter::New1(origin, filter);
}

// public PredictFilter(Fuse.Visual origin, Uno.Predicate<Fuse.Node> filter) [instance] :94
void FocusPrediction__PredictFilter::ctor_(::g::Fuse::Visual* origin, uDelegate* filter)
{
    uStackFrame __("Fuse.Input.FocusPrediction.PredictFilter", ".ctor(Fuse.Visual,Uno.Predicate<Fuse.Node>)");
    _origin = origin;
    _filter = filter;
}

// public bool Filter(Fuse.Node node) [instance] :100
bool FocusPrediction__PredictFilter::Filter(::g::Fuse::Node* node)
{
    uStackFrame __("Fuse.Input.FocusPrediction.PredictFilter", "Filter(Fuse.Node)");
    bool ret2;
    return (node != _origin) && (uPtr(_filter)->Invoke(&ret2, 1, node), ret2);
}

// public PredictFilter New(Fuse.Visual origin, Uno.Predicate<Fuse.Node> filter) [static] :94
FocusPrediction__PredictFilter* FocusPrediction__PredictFilter::New1(::g::Fuse::Visual* origin, uDelegate* filter)
{
    FocusPrediction__PredictFilter* obj1 = (FocusPrediction__PredictFilter*)uNew(FocusPrediction__PredictFilter_typeof());
    obj1->ctor_(origin, filter);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// internal sealed class SelectionQuery :493
// {
static void SelectionQuery_build(uType* type)
{
    ::TYPES[39] = ::g::Fuse::HitTestCallback_typeof();
    type->SetFields(0,
        ::g::Fuse::HitTestResult_typeof(), offsetof(::g::Fuse::Input::SelectionQuery, _result), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Input::SelectionQuery, count), 0);
}

uType* SelectionQuery_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(SelectionQuery);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Input.SelectionQuery", options);
    type->fp_build_ = SelectionQuery_build;
    type->fp_ctor_ = (void*)SelectionQuery__New1_fn;
    return type;
}

// public generated SelectionQuery() :493
void SelectionQuery__ctor__fn(SelectionQuery* __this)
{
    __this->ctor_();
}

// public generated SelectionQuery New() :493
void SelectionQuery__New1_fn(SelectionQuery** __retval)
{
    *__retval = SelectionQuery::New1();
}

// private void Select(Fuse.HitTestResult result) :506
void SelectionQuery__Select_fn(SelectionQuery* __this, ::g::Fuse::HitTestResult* result)
{
    __this->Select(result);
}

// public Fuse.HitTestResult Select(Fuse.Visual root, float2 point) :497
void SelectionQuery__Select1_fn(SelectionQuery* __this, ::g::Fuse::Visual* root, ::g::Uno::Float2* point, ::g::Fuse::HitTestResult** __retval)
{
    *__retval = __this->Select1(root, *point);
}

// public generated SelectionQuery() [instance] :493
void SelectionQuery::ctor_()
{
}

// private void Select(Fuse.HitTestResult result) [instance] :506
void SelectionQuery::Select(::g::Fuse::HitTestResult* result)
{
    uStackFrame __("Fuse.Input.SelectionQuery", "Select(Fuse.HitTestResult)");
    count++;

    if ((_result == NULL) || ((uPtr(_result)->HasHitDistance() && uPtr(result)->HasHitDistance()) && (uPtr(result)->HitDistance() < uPtr(_result)->HitDistance())))
        _result = result;
}

// public Fuse.HitTestResult Select(Fuse.Visual root, float2 point) [instance] :497
::g::Fuse::HitTestResult* SelectionQuery::Select1(::g::Fuse::Visual* root, ::g::Uno::Float2 point)
{
    uStackFrame __("Fuse.Input.SelectionQuery", "Select(Fuse.Visual,float2)");
    ::g::Fuse::HitTestContext* args = ::g::Fuse::HitTestContext::New1(point, uDelegate::New(::TYPES[39/*Fuse.HitTestCallback*/], (void*)SelectionQuery__Select_fn, this));
    uPtr(root)->HitTest(args);
    args->Dispose();
    return _result;
}

// public generated SelectionQuery New() [static] :493
SelectionQuery* SelectionQuery::New1()
{
    SelectionQuery* obj1 = (SelectionQuery*)uNew(SelectionQuery_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// internal sealed class TextEntered :1528
// {
static void TextEntered_build(uType* type)
{
    type->SetBase(::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::TextEnteredHandler_typeof(), ::g::Fuse::Input::TextEnteredArgs_typeof()));
    type->SetFields(2);
}

::g::Fuse::VisualEvent_type* TextEntered_typeof()
{
    static uSStrong< ::g::Fuse::VisualEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEvent_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(TextEntered);
    options.TypeSize = sizeof(::g::Fuse::VisualEvent_type);
    type = (::g::Fuse::VisualEvent_type*)uClassType::New("Fuse.Input.TextEntered", options);
    type->fp_build_ = TextEntered_build;
    type->fp_ctor_ = (void*)TextEntered__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::VisualEvent*, void*, uObject*, ::g::Fuse::VisualEventArgs*))TextEntered__Invoke_fn;
    return type;
}

// public generated TextEntered() :1528
void TextEntered__ctor_1_fn(TextEntered* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.TextEnteredHandler handler, object sender, Fuse.Input.TextEnteredArgs args) :1530
void TextEntered__Invoke_fn(TextEntered* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::TextEnteredArgs* args)
{
    uStackFrame __("Fuse.Input.TextEntered", "Invoke(Fuse.Input.TextEnteredHandler,object,Fuse.Input.TextEnteredArgs)");
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated TextEntered New() :1528
void TextEntered__New1_fn(TextEntered** __retval)
{
    *__retval = TextEntered::New1();
}

// public generated TextEntered() [instance] :1528
void TextEntered::ctor_1()
{
    uStackFrame __("Fuse.Input.TextEntered", ".ctor()");
    ctor_();
}

// public generated TextEntered New() [static] :1528
TextEntered* TextEntered::New1()
{
    TextEntered* obj1 = (TextEntered*)uNew(TextEntered_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// public sealed class TextEnteredArgs :1511
// {
static void TextEnteredArgs_build(uType* type)
{
    ::STRINGS[20] = uString::Const("text");
    ::TYPES[38] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(2,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Input::TextEnteredArgs, _Text), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)TextEnteredArgs__New3_fn, 0, true, TextEnteredArgs_typeof(), 2, ::g::Uno::String_typeof(), ::g::Fuse::Visual_typeof()),
        new uFunction("get_Text", NULL, (void*)TextEnteredArgs__get_Text_fn, 0, false, ::g::Uno::String_typeof(), 0));
}

::g::Fuse::VisualEventArgs_type* TextEnteredArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TextEnteredArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Input.TextEnteredArgs", options);
    type->fp_build_ = TextEnteredArgs_build;
    type->fp_Serialize = (void(*)(::g::Fuse::VisualEventArgs*, uObject*))TextEnteredArgs__Serialize_fn;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public TextEnteredArgs(string text, Fuse.Visual visual) :1515
void TextEnteredArgs__ctor_2_fn(TextEnteredArgs* __this, uString* text, ::g::Fuse::Visual* visual)
{
    __this->ctor_2(text, visual);
}

// public TextEnteredArgs New(string text, Fuse.Visual visual) :1515
void TextEnteredArgs__New3_fn(uString* text, ::g::Fuse::Visual* visual, TextEnteredArgs** __retval)
{
    *__retval = TextEnteredArgs::New3(text, visual);
}

// private override sealed void Serialize(Fuse.Scripting.IEventSerializer s) :1520
void TextEnteredArgs__Serialize_fn(TextEnteredArgs* __this, uObject* s)
{
    uStackFrame __("Fuse.Input.TextEnteredArgs", "Serialize(Fuse.Scripting.IEventSerializer)");
    ::g::Fuse::Scripting::IEventSerializer::AddString(uInterface(uPtr(s), ::TYPES[38/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[20/*"text"*/], __this->Text());
}

// public generated string get_Text() :1513
void TextEnteredArgs__get_Text_fn(TextEnteredArgs* __this, uString** __retval)
{
    *__retval = __this->Text();
}

// private generated void set_Text(string value) :1513
void TextEnteredArgs__set_Text_fn(TextEnteredArgs* __this, uString* value)
{
    __this->Text(value);
}

// public TextEnteredArgs(string text, Fuse.Visual visual) [instance] :1515
void TextEnteredArgs::ctor_2(uString* text, ::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Input.TextEnteredArgs", ".ctor(string,Fuse.Visual)");
    ctor_1(visual);
    Text(text);
}

// public generated string get_Text() [instance] :1513
uString* TextEnteredArgs::Text()
{
    uStackFrame __("Fuse.Input.TextEnteredArgs", "get_Text()");
    return _Text;
}

// private generated void set_Text(string value) [instance] :1513
void TextEnteredArgs::Text(uString* value)
{
    uStackFrame __("Fuse.Input.TextEnteredArgs", "set_Text(string)");
    _Text = value;
}

// public TextEnteredArgs New(string text, Fuse.Visual visual) [static] :1515
TextEnteredArgs* TextEnteredArgs::New3(uString* text, ::g::Fuse::Visual* visual)
{
    TextEnteredArgs* obj1 = (TextEnteredArgs*)uNew(TextEnteredArgs_typeof());
    obj1->ctor_2(text, visual);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// public delegate void TextEnteredHandler(object sender, Fuse.Input.TextEnteredArgs args) :1526
uDelegateType* TextEnteredHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Input.TextEnteredHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::TextEnteredArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno
// ---------------------------------------------------------

// public static class TextService :1489
// {
// static TextService() :1489
static void TextService__cctor__fn(uType* __type)
{
    TextService::_textEntered_ = ::g::Fuse::Input::TextEntered::New1();
}

static void TextService_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Input::TextEntered_typeof(), (uintptr_t)&::g::Fuse::Input::TextService::_textEntered_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction("get_TextEntered", NULL, (void*)TextService__get_TextEntered_fn, 0, true, ::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::TextEnteredHandler_typeof(), ::g::Fuse::Input::TextEnteredArgs_typeof()), 0));
}

uClassType* TextService_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Input.TextService", options);
    type->fp_build_ = TextService_build;
    type->fp_cctor_ = TextService__cctor__fn;
    return type;
}

// internal static bool RaiseTextEntered(string text) :1495
void TextService__RaiseTextEntered_fn(uString* text, bool* __retval)
{
    *__retval = TextService::RaiseTextEntered(text);
}

// public static Fuse.VisualEvent<Fuse.Input.TextEnteredHandler, Fuse.Input.TextEnteredArgs> get_TextEntered() :1493
void TextService__get_TextEntered_fn(::g::Fuse::VisualEvent** __retval)
{
    *__retval = TextService::TextEntered();
}

uSStrong< ::g::Fuse::Input::TextEntered*> TextService::_textEntered_;

// internal static bool RaiseTextEntered(string text) [static] :1495
bool TextService::RaiseTextEntered(uString* text)
{
    uStackFrame __("Fuse.Input.TextService", "RaiseTextEntered(string)");
    TextService_typeof()->Init();

    if (::g::Fuse::Input::Focus::FocusedVisual() != NULL)
    {
        ::g::Fuse::Input::TextEnteredArgs* args = ::g::Fuse::Input::TextEnteredArgs::New3(text, ::g::Fuse::Input::Focus::FocusedVisual());
        uPtr(TextService::TextEntered())->RaiseWithBubble(args, 0);
        return args->IsHandled();
    }

    return false;
}

// public static Fuse.VisualEvent<Fuse.Input.TextEnteredHandler, Fuse.Input.TextEnteredArgs> get_TextEntered() [static] :1493
::g::Fuse::VisualEvent* TextService::TextEntered()
{
    uStackFrame __("Fuse.Input.TextService", "get_TextEntered()");
    TextService_typeof()->Init();
    return TextService::_textEntered();
}
// }

}}} // ::g::Fuse::Input
