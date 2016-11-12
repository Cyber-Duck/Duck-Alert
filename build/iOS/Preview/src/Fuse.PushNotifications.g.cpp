// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.PushNotifications.Push.h>
#include <Fuse.PushNotifications.PushNotify.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeEvent.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Uno.Bool.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[6];
static uType* TYPES[3];

namespace g{
namespace Fuse{
namespace PushNotifications{

// /usr/local/share/uno/Packages/Fuse.PushNotifications/0.40.8/$.uno
// -----------------------------------------------------------------

// public sealed class Push :184
// {
static void Push_build(uType* type)
{
    ::STRINGS[0] = uString::Const("FuseJS/Push");
    ::STRINGS[1] = uString::Const("onReceivedMessage");
    ::STRINGS[2] = uString::Const("onRegistrationFailed");
    ::STRINGS[3] = uString::Const("onRegistrationSucceeded");
    ::STRINGS[4] = uString::Const("clearBadgeNumber");
    ::STRINGS[5] = uString::Const("clearAllNotifications");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[1] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[2] = uObject_typeof()->Array();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(5,
        ::g::Fuse::Scripting::NativeEvent_typeof(), (uintptr_t)&::g::Fuse::PushNotifications::Push::_onReceivedMessage_, uFieldFlagsStatic,
        ::g::Fuse::Scripting::NativeEvent_typeof(), (uintptr_t)&::g::Fuse::PushNotifications::Push::_onRegistrationFailed_, uFieldFlagsStatic,
        ::g::Fuse::Scripting::NativeEvent_typeof(), (uintptr_t)&::g::Fuse::PushNotifications::Push::_onRegistrationSucceeded_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::PushNotifications::Push::_unoEventsRegistered_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(5,
        new uFunction("ClearAllNotifications", NULL, (void*)Push__ClearAllNotifications_fn, 0, false, uObject_typeof(), 2, ::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array()),
        new uFunction("ClearBadgeNumber", NULL, (void*)Push__ClearBadgeNumber_fn, 0, false, uObject_typeof(), 2, ::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array()),
        new uFunction(".ctor", NULL, (void*)Push__New2_fn, 0, true, Push_typeof(), 0),
        new uFunction("OnRegistrationFailed", NULL, (void*)Push__OnRegistrationFailed_fn, 0, true, uVoid_typeof(), 2, uObject_typeof(), ::g::Uno::String_typeof()),
        new uFunction("OnRegistrationSucceeded", NULL, (void*)Push__OnRegistrationSucceeded_fn, 0, true, uVoid_typeof(), 2, uObject_typeof(), ::g::Uno::String_typeof()));
}

::g::Fuse::Scripting::NativeModule_type* Push_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Push);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.PushNotifications.Push", options);
    type->fp_build_ = Push_build;
    type->fp_ctor_ = (void*)Push__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public Push() :191
void Push__ctor_2_fn(Push* __this)
{
    __this->ctor_2();
}

// public object ClearAllNotifications(Fuse.Scripting.Context context, object[] args) :267
void Push__ClearAllNotifications_fn(Push* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->ClearAllNotifications(context, args);
}

// public object ClearBadgeNumber(Fuse.Scripting.Context context, object[] args) :256
void Push__ClearBadgeNumber_fn(Push* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->ClearBadgeNumber(context, args);
}

// public Push New() :191
void Push__New2_fn(Push** __retval)
{
    *__retval = Push::New2();
}

// private static void OnReceivedNotification(object sender, string message) :219
void Push__OnReceivedNotification_fn(uObject* sender, uString* message)
{
    Push::OnReceivedNotification(sender, message);
}

// public static void OnRegistrationFailed(object sender, string message) :243
void Push__OnRegistrationFailed_fn(uObject* sender, uString* message)
{
    Push::OnRegistrationFailed(sender, message);
}

// public static void OnRegistrationSucceeded(object sender, string message) :231
void Push__OnRegistrationSucceeded_fn(uObject* sender, uString* message)
{
    Push::OnRegistrationSucceeded(sender, message);
}

uSStrong< ::g::Fuse::Scripting::NativeEvent*> Push::_onReceivedMessage_;
uSStrong< ::g::Fuse::Scripting::NativeEvent*> Push::_onRegistrationFailed_;
uSStrong< ::g::Fuse::Scripting::NativeEvent*> Push::_onRegistrationSucceeded_;
bool Push::_unoEventsRegistered_;

// public Push() [instance] :191
void Push::ctor_2()
{
    uStackFrame __("Fuse.PushNotifications.Push", ".ctor()");
    ctor_1();
    ::g::Uno::UX::Resource::SetGlobalKey(this, ::STRINGS[0/*"FuseJS/Push"*/]);
    Push::_onReceivedMessage_ = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[1/*"onReceivedM...*/], true);
    Push::_onRegistrationFailed_ = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[2/*"onRegistrat...*/], true);
    Push::_onRegistrationSucceeded_ = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[3/*"onRegistrat...*/], true);
    AddMember(Push::_onReceivedMessage_);
    AddMember(Push::_onRegistrationSucceeded_);
    AddMember(Push::_onRegistrationFailed_);
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[4/*"clearBadgeN...*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)Push__ClearBadgeNumber_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[5/*"clearAllNot...*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)Push__ClearAllNotifications_fn, this)));

    if (!Push::_unoEventsRegistered_)
    {
        ::g::Fuse::PushNotifications::PushNotify::add_ReceivedNotification(uDelegate::New(::TYPES[1/*Uno.EventHandler<string>*/], (void*)Push__OnReceivedNotification_fn));
        ::g::Fuse::PushNotifications::PushNotify::add_RegistrationSucceeded(uDelegate::New(::TYPES[1/*Uno.EventHandler<string>*/], (void*)Push__OnRegistrationSucceeded_fn));
        ::g::Fuse::PushNotifications::PushNotify::add_RegistrationFailed(uDelegate::New(::TYPES[1/*Uno.EventHandler<string>*/], (void*)Push__OnRegistrationFailed_fn));
        Push::_unoEventsRegistered_ = true;
    }
}

// public object ClearAllNotifications(Fuse.Scripting.Context context, object[] args) [instance] :267
uObject* Push::ClearAllNotifications(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.PushNotifications.Push", "ClearAllNotifications(Fuse.Scripting.Context,object[])");
    ::g::Fuse::PushNotifications::PushNotify::ClearAllNotifications();
    return NULL;
}

// public object ClearBadgeNumber(Fuse.Scripting.Context context, object[] args) [instance] :256
uObject* Push::ClearBadgeNumber(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.PushNotifications.Push", "ClearBadgeNumber(Fuse.Scripting.Context,object[])");
    ::g::Fuse::PushNotifications::PushNotify::ClearBadgeNumber();
    return NULL;
}

// public Push New() [static] :191
Push* Push::New2()
{
    Push* obj1 = (Push*)uNew(Push_typeof());
    obj1->ctor_2();
    return obj1;
}

// private static void OnReceivedNotification(object sender, string message) [static] :219
void Push::OnReceivedNotification(uObject* sender, uString* message)
{
    uStackFrame __("Fuse.PushNotifications.Push", "OnReceivedNotification(object,string)");

    if (Push::_onRegistrationFailed_ != NULL)
        uPtr(Push::_onReceivedMessage_)->RaiseAsync(uArray::Init<uObject*>(::TYPES[2/*object[]*/], 1, message));
}

// public static void OnRegistrationFailed(object sender, string message) [static] :243
void Push::OnRegistrationFailed(uObject* sender, uString* message)
{
    uStackFrame __("Fuse.PushNotifications.Push", "OnRegistrationFailed(object,string)");

    if (Push::_onRegistrationFailed_ != NULL)
        uPtr(Push::_onRegistrationFailed_)->RaiseAsync(uArray::Init<uObject*>(::TYPES[2/*object[]*/], 1, message));
}

// public static void OnRegistrationSucceeded(object sender, string message) [static] :231
void Push::OnRegistrationSucceeded(uObject* sender, uString* message)
{
    uStackFrame __("Fuse.PushNotifications.Push", "OnRegistrationSucceeded(object,string)");

    if (Push::_onRegistrationFailed_ != NULL)
        uPtr(Push::_onRegistrationSucceeded_)->RaiseAsync(uArray::Init<uObject*>(::TYPES[2/*object[]*/], 1, message));
}
// }

}}} // ::g::Fuse::PushNotifications
