// This file was generated based on /usr/local/share/uno/Packages/Fuse.PushNotifications/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.PushNotifications.PushNotify.h>
#include <Uno.Bool.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Object.h>
#include <Uno.Platform.iOS.Application.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>
static uType* TYPES[3];

namespace g{
namespace Fuse{
namespace PushNotifications{

// public static class PushNotify :14
// {
// static extern PushNotify() :26
static void PushNotify__cctor__fn(uType* __type)
{
    PushNotify::_pendingNotifications_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<string>*/]));
    ::g::Uno::Platform::iOS::Application::add_ReceivedNotification(uDelegate::New(::TYPES[1/*Uno.EventHandler<string>*/], (void*)PushNotify__OnReceived_fn));
    ::g::Uno::Platform::iOS::Application::add_NotificationRegistrationFailed(uDelegate::New(::TYPES[1/*Uno.EventHandler<string>*/], (void*)PushNotify__OnRegistrationFailed_fn));
    ::g::Uno::Platform::iOS::Application::add_NotificationRegistrationSucceeded(uDelegate::New(::TYPES[1/*Uno.EventHandler<string>*/], (void*)PushNotify__OnRegistrationSucceeded_fn));
}

static void PushNotify_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[1] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[2] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::String_typeof());
    type->SetFields(0,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Fuse::PushNotifications::PushNotify::_pendingFailure_, uFieldFlagsStatic,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof()), (uintptr_t)&::g::Fuse::PushNotifications::PushNotify::_pendingNotifications_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Fuse::PushNotifications::PushNotify::_pendingSuccess_, uFieldFlagsStatic,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof()), (uintptr_t)&::g::Fuse::PushNotifications::PushNotify::_receivedNotification1_, uFieldFlagsStatic,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof()), (uintptr_t)&::g::Fuse::PushNotifications::PushNotify::_registrationFailed1_, uFieldFlagsStatic,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof()), (uintptr_t)&::g::Fuse::PushNotifications::PushNotify::_registrationSucceeded1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(5,
        new uFunction("ClearAllNotifications", NULL, (void*)PushNotify__ClearAllNotifications_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("ClearBadgeNumber", NULL, (void*)PushNotify__ClearBadgeNumber_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("OnReceived", NULL, (void*)PushNotify__OnReceived_fn, 0, true, uVoid_typeof(), 2, uObject_typeof(), ::g::Uno::String_typeof()),
        new uFunction("OnRegistrationFailed", NULL, (void*)PushNotify__OnRegistrationFailed_fn, 0, true, uVoid_typeof(), 2, uObject_typeof(), ::g::Uno::String_typeof()),
        new uFunction("OnRegistrationSucceeded", NULL, (void*)PushNotify__OnRegistrationSucceeded_fn, 0, true, uVoid_typeof(), 2, uObject_typeof(), ::g::Uno::String_typeof()));
}

uClassType* PushNotify_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.PushNotifications.PushNotify", options);
    type->fp_build_ = PushNotify_build;
    type->fp_cctor_ = PushNotify__cctor__fn;
    return type;
}

// private static generated void add__receivedNotification(Uno.EventHandler<string> value) :72
void PushNotify__add__receivedNotification_fn(uDelegate* value)
{
    PushNotify::add__receivedNotification(value);
}

// private static generated void remove__receivedNotification(Uno.EventHandler<string> value) :72
void PushNotify__remove__receivedNotification_fn(uDelegate* value)
{
    PushNotify::remove__receivedNotification(value);
}

// private static generated void add__registrationFailed(Uno.EventHandler<string> value) :71
void PushNotify__add__registrationFailed_fn(uDelegate* value)
{
    PushNotify::add__registrationFailed(value);
}

// private static generated void remove__registrationFailed(Uno.EventHandler<string> value) :71
void PushNotify__remove__registrationFailed_fn(uDelegate* value)
{
    PushNotify::remove__registrationFailed(value);
}

// private static generated void add__registrationSucceeded(Uno.EventHandler<string> value) :70
void PushNotify__add__registrationSucceeded_fn(uDelegate* value)
{
    PushNotify::add__registrationSucceeded(value);
}

// private static generated void remove__registrationSucceeded(Uno.EventHandler<string> value) :70
void PushNotify__remove__registrationSucceeded_fn(uDelegate* value)
{
    PushNotify::remove__registrationSucceeded(value);
}

// public static extern void ClearAllNotifications() :133
void PushNotify__ClearAllNotifications_fn()
{
    PushNotify::ClearAllNotifications();
}

// public static extern void ClearBadgeNumber() :125
void PushNotify__ClearBadgeNumber_fn()
{
    PushNotify::ClearBadgeNumber();
}

// public static void OnReceived(object sender, string message) :33
void PushNotify__OnReceived_fn(uObject* sender, uString* message)
{
    PushNotify::OnReceived(sender, message);
}

// public static void OnRegistrationFailed(object sender, string message) :42
void PushNotify__OnRegistrationFailed_fn(uObject* sender, uString* message)
{
    PushNotify::OnRegistrationFailed(sender, message);
}

// public static void OnRegistrationSucceeded(object sender, string message) :56
void PushNotify__OnRegistrationSucceeded_fn(uObject* sender, uString* message)
{
    PushNotify::OnRegistrationSucceeded(sender, message);
}

// internal static void add_ReceivedNotification(Uno.EventHandler<string> value) :79
void PushNotify__add_ReceivedNotification_fn(uDelegate* value)
{
    PushNotify::add_ReceivedNotification(value);
}

// internal static void remove_ReceivedNotification(Uno.EventHandler<string> value) :86
void PushNotify__remove_ReceivedNotification_fn(uDelegate* value)
{
    PushNotify::remove_ReceivedNotification(value);
}

// internal static void add_RegistrationFailed(Uno.EventHandler<string> value) :111
void PushNotify__add_RegistrationFailed_fn(uDelegate* value)
{
    PushNotify::add_RegistrationFailed(value);
}

// internal static void remove_RegistrationFailed(Uno.EventHandler<string> value) :119
void PushNotify__remove_RegistrationFailed_fn(uDelegate* value)
{
    PushNotify::remove_RegistrationFailed(value);
}

// internal static void add_RegistrationSucceeded(Uno.EventHandler<string> value) :96
void PushNotify__add_RegistrationSucceeded_fn(uDelegate* value)
{
    PushNotify::add_RegistrationSucceeded(value);
}

// internal static void remove_RegistrationSucceeded(Uno.EventHandler<string> value) :104
void PushNotify__remove_RegistrationSucceeded_fn(uDelegate* value)
{
    PushNotify::remove_RegistrationSucceeded(value);
}

uSStrong<uString*> PushNotify::_pendingFailure_;
uSStrong< ::g::Uno::Collections::List*> PushNotify::_pendingNotifications_;
uSStrong<uString*> PushNotify::_pendingSuccess_;
uSStrong<uDelegate*> PushNotify::_receivedNotification1_;
uSStrong<uDelegate*> PushNotify::_registrationFailed1_;
uSStrong<uDelegate*> PushNotify::_registrationSucceeded1_;

// public static extern void ClearAllNotifications() [static] :133
void PushNotify::ClearAllNotifications()
{
    uStackFrame __("Fuse.PushNotifications.PushNotify", "ClearAllNotifications()");
    PushNotify_typeof()->Init();
    @autoreleasepool
    {
        [UIApplication sharedApplication].applicationIconBadgeNumber = 1;
        			[UIApplication sharedApplication].applicationIconBadgeNumber = 0;
    }
    
}

// public static extern void ClearBadgeNumber() [static] :125
void PushNotify::ClearBadgeNumber()
{
    uStackFrame __("Fuse.PushNotifications.PushNotify", "ClearBadgeNumber()");
    PushNotify_typeof()->Init();
    @autoreleasepool
    {
        [UIApplication sharedApplication].applicationIconBadgeNumber = 0;
    }
    
}

// public static void OnReceived(object sender, string message) [static] :33
void PushNotify::OnReceived(uObject* sender, uString* message)
{
    uStackFrame __("Fuse.PushNotifications.PushNotify", "OnReceived(object,string)");
    PushNotify_typeof()->Init();
    uDelegate* x = PushNotify::_receivedNotification1();

    if (::g::Uno::Delegate::op_Inequality(x, NULL))
        uPtr(x)->Invoke(2, NULL, message);
    else 
        ::g::Uno::Collections::List__Add_fn(uPtr(PushNotify::_pendingNotifications()), message);
}

// public static void OnRegistrationFailed(object sender, string message) [static] :42
void PushNotify::OnRegistrationFailed(uObject* sender, uString* message)
{
    uStackFrame __("Fuse.PushNotifications.PushNotify", "OnRegistrationFailed(object,string)");
    PushNotify_typeof()->Init();
    uDelegate* x = PushNotify::_registrationFailed1();

    if (::g::Uno::Delegate::op_Inequality(x, NULL))
        uPtr(x)->Invoke(2, NULL, message);
    else 
    {
        PushNotify::_pendingSuccess() = NULL;
        PushNotify::_pendingFailure() = message;
    }
}

// public static void OnRegistrationSucceeded(object sender, string message) [static] :56
void PushNotify::OnRegistrationSucceeded(uObject* sender, uString* message)
{
    uStackFrame __("Fuse.PushNotifications.PushNotify", "OnRegistrationSucceeded(object,string)");
    PushNotify_typeof()->Init();
    uDelegate* x = PushNotify::_registrationSucceeded1();

    if (::g::Uno::Delegate::op_Inequality(x, NULL))
        uPtr(x)->Invoke(2, NULL, message);
    else 
    {
        PushNotify::_pendingFailure() = NULL;
        PushNotify::_pendingSuccess() = message;
    }
}

// private static generated void add__receivedNotification(Uno.EventHandler<string> value) [static] :72
void PushNotify::add__receivedNotification(uDelegate* value)
{
    uStackFrame __("Fuse.PushNotifications.PushNotify", "add__receivedNotification(Uno.EventHandler<string>)");
    PushNotify_typeof()->Init();
    PushNotify::_receivedNotification1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PushNotify::_receivedNotification1(), value), ::TYPES[1/*Uno.EventHandler<string>*/]);
}

// private static generated void remove__receivedNotification(Uno.EventHandler<string> value) [static] :72
void PushNotify::remove__receivedNotification(uDelegate* value)
{
    uStackFrame __("Fuse.PushNotifications.PushNotify", "remove__receivedNotification(Uno.EventHandler<string>)");
    PushNotify_typeof()->Init();
    PushNotify::_receivedNotification1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PushNotify::_receivedNotification1(), value), ::TYPES[1/*Uno.EventHandler<string>*/]);
}

// private static generated void add__registrationFailed(Uno.EventHandler<string> value) [static] :71
void PushNotify::add__registrationFailed(uDelegate* value)
{
    uStackFrame __("Fuse.PushNotifications.PushNotify", "add__registrationFailed(Uno.EventHandler<string>)");
    PushNotify_typeof()->Init();
    PushNotify::_registrationFailed1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PushNotify::_registrationFailed1(), value), ::TYPES[1/*Uno.EventHandler<string>*/]);
}

// private static generated void remove__registrationFailed(Uno.EventHandler<string> value) [static] :71
void PushNotify::remove__registrationFailed(uDelegate* value)
{
    uStackFrame __("Fuse.PushNotifications.PushNotify", "remove__registrationFailed(Uno.EventHandler<string>)");
    PushNotify_typeof()->Init();
    PushNotify::_registrationFailed1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PushNotify::_registrationFailed1(), value), ::TYPES[1/*Uno.EventHandler<string>*/]);
}

// private static generated void add__registrationSucceeded(Uno.EventHandler<string> value) [static] :70
void PushNotify::add__registrationSucceeded(uDelegate* value)
{
    uStackFrame __("Fuse.PushNotifications.PushNotify", "add__registrationSucceeded(Uno.EventHandler<string>)");
    PushNotify_typeof()->Init();
    PushNotify::_registrationSucceeded1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PushNotify::_registrationSucceeded1(), value), ::TYPES[1/*Uno.EventHandler<string>*/]);
}

// private static generated void remove__registrationSucceeded(Uno.EventHandler<string> value) [static] :70
void PushNotify::remove__registrationSucceeded(uDelegate* value)
{
    uStackFrame __("Fuse.PushNotifications.PushNotify", "remove__registrationSucceeded(Uno.EventHandler<string>)");
    PushNotify_typeof()->Init();
    PushNotify::_registrationSucceeded1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PushNotify::_registrationSucceeded1(), value), ::TYPES[1/*Uno.EventHandler<string>*/]);
}

// internal static void add_ReceivedNotification(Uno.EventHandler<string> value) [static] :79
void PushNotify::add_ReceivedNotification(uDelegate* value)
{
    uStackFrame __("Fuse.PushNotifications.PushNotify", "add_ReceivedNotification(Uno.EventHandler<string>)");
    PushNotify_typeof()->Init();
    ::g::Uno::Collections::List__Enumerator<uStrong<uString*> > ret2;
    PushNotify::add__receivedNotification(value);

    for (::g::Uno::Collections::List__Enumerator<uStrong<uString*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(PushNotify::_pendingNotifications()), &ret2), ret2); enum1.MoveNext(::TYPES[2/*Uno.Collections.List<string>.Enumerator*/]); )
    {
        uString* n = enum1.Current(::TYPES[2/*Uno.Collections.List<string>.Enumerator*/]);
        uPtr(value)->Invoke(2, NULL, n);
    }

    uPtr(PushNotify::_pendingNotifications())->Clear();
}

// internal static void remove_ReceivedNotification(Uno.EventHandler<string> value) [static] :86
void PushNotify::remove_ReceivedNotification(uDelegate* value)
{
    uStackFrame __("Fuse.PushNotifications.PushNotify", "remove_ReceivedNotification(Uno.EventHandler<string>)");
    PushNotify_typeof()->Init();
    PushNotify::remove__receivedNotification(value);
}

// internal static void add_RegistrationFailed(Uno.EventHandler<string> value) [static] :111
void PushNotify::add_RegistrationFailed(uDelegate* value)
{
    uStackFrame __("Fuse.PushNotifications.PushNotify", "add_RegistrationFailed(Uno.EventHandler<string>)");
    PushNotify_typeof()->Init();
    PushNotify::add__registrationFailed(value);

    if (::g::Uno::String::op_Inequality(PushNotify::_pendingFailure(), NULL))
        uPtr(value)->Invoke(2, NULL, (uString*)PushNotify::_pendingFailure());
}

// internal static void remove_RegistrationFailed(Uno.EventHandler<string> value) [static] :119
void PushNotify::remove_RegistrationFailed(uDelegate* value)
{
    uStackFrame __("Fuse.PushNotifications.PushNotify", "remove_RegistrationFailed(Uno.EventHandler<string>)");
    PushNotify_typeof()->Init();
    PushNotify::remove__registrationFailed(value);
}

// internal static void add_RegistrationSucceeded(Uno.EventHandler<string> value) [static] :96
void PushNotify::add_RegistrationSucceeded(uDelegate* value)
{
    uStackFrame __("Fuse.PushNotifications.PushNotify", "add_RegistrationSucceeded(Uno.EventHandler<string>)");
    PushNotify_typeof()->Init();
    PushNotify::add__registrationSucceeded(value);

    if (::g::Uno::String::op_Inequality(PushNotify::_pendingSuccess(), NULL))
        uPtr(value)->Invoke(2, NULL, (uString*)PushNotify::_pendingSuccess());
}

// internal static void remove_RegistrationSucceeded(Uno.EventHandler<string> value) [static] :104
void PushNotify::remove_RegistrationSucceeded(uDelegate* value)
{
    uStackFrame __("Fuse.PushNotifications.PushNotify", "remove_RegistrationSucceeded(Uno.EventHandler<string>)");
    PushNotify_typeof()->Init();
    PushNotify::remove__registrationSucceeded(value);
}
// }

}}} // ::g::Fuse::PushNotifications
