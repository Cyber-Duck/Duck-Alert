// This file was generated based on /usr/local/share/uno/Packages/Fuse.LocalNotifications/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.LocalNotifications.iOSImpl.h>
#include <Fuse.LocalNotifications.Notify.h>
#include <Uno.Bool.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Platform.iOS.Application.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>
static uType* TYPES[3];

namespace g{
namespace Fuse{
namespace LocalNotifications{

// public static class Notify :9
// {
// static extern Notify() :20
static void Notify__cctor__fn(uType* __type)
{
    Notify::_pendingNotifications_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<string>*/]));

    if (!Notify::_registered_)
    {
        ::g::Uno::Platform::iOS::Application::add_ReceivedLocalNotification(uDelegate::New(::TYPES[1/*Uno.EventHandler<string>*/], (void*)Notify__OnReceived_fn));
        Notify::_registered_ = true;
    }
}

static void Notify_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[1] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[2] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::String_typeof());
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof()), (uintptr_t)&::g::Fuse::LocalNotifications::Notify::_pendingNotifications_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::LocalNotifications::Notify::_registered_, uFieldFlagsStatic,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof()), (uintptr_t)&::g::Fuse::LocalNotifications::Notify::_receivedNotification1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(6,
        new uFunction("ClearAllNotifications", NULL, (void*)Notify__ClearAllNotifications_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("ClearBadgeNumber", NULL, (void*)Notify__ClearBadgeNumber_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("Later", NULL, (void*)Notify__Later_fn, 0, true, uVoid_typeof(), 6, ::g::Uno::Int_typeof(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("Now", NULL, (void*)Notify__Now_fn, 0, true, uVoid_typeof(), 5, ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("add_Received", NULL, (void*)Notify__add_Received_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof())),
        new uFunction("remove_Received", NULL, (void*)Notify__remove_Received_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof())));
}

uClassType* Notify_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.LocalNotifications.Notify", options);
    type->fp_build_ = Notify_build;
    type->fp_cctor_ = Notify__cctor__fn;
    return type;
}

// private static generated void add__receivedNotification(Uno.EventHandler<string> value) :60
void Notify__add__receivedNotification_fn(uDelegate* value)
{
    Notify::add__receivedNotification(value);
}

// private static generated void remove__receivedNotification(Uno.EventHandler<string> value) :60
void Notify__remove__receivedNotification_fn(uDelegate* value)
{
    Notify::remove__receivedNotification(value);
}

// public static extern void ClearAllNotifications() :96
void Notify__ClearAllNotifications_fn()
{
    Notify::ClearAllNotifications();
}

// public static extern void ClearBadgeNumber() :88
void Notify__ClearBadgeNumber_fn()
{
    Notify::ClearBadgeNumber();
}

// public static extern void Later(int secondsFromNow, string title, string body, string payload, [bool sound], [int badgeNumber]) :44
void Notify__Later_fn(int* secondsFromNow, uString* title, uString* body, uString* payload, bool* sound, int* badgeNumber)
{
    Notify::Later(*secondsFromNow, title, body, payload, *sound, *badgeNumber);
}

// public static void Now(string title, string body, string payload, [bool sound], [int badgeNumber]) :31
void Notify__Now_fn(uString* title, uString* body, uString* payload, bool* sound, int* badgeNumber)
{
    Notify::Now(title, body, payload, *sound, *badgeNumber);
}

// internal static void OnReceived(object sender, string message) :76
void Notify__OnReceived_fn(uObject* sender, uString* message)
{
    Notify::OnReceived(sender, message);
}

// public static void add_Received(Uno.EventHandler<string> value) :64
void Notify__add_Received_fn(uDelegate* value)
{
    Notify::add_Received(value);
}

// public static void remove_Received(Uno.EventHandler<string> value) :71
void Notify__remove_Received_fn(uDelegate* value)
{
    Notify::remove_Received(value);
}

uSStrong< ::g::Uno::Collections::List*> Notify::_pendingNotifications_;
bool Notify::_registered_;
uSStrong<uDelegate*> Notify::_receivedNotification1_;

// public static extern void ClearAllNotifications() [static] :96
void Notify::ClearAllNotifications()
{
    uStackFrame __("Fuse.LocalNotifications.Notify", "ClearAllNotifications()");
    Notify_typeof()->Init();
    @autoreleasepool
    {
        [[UIApplication sharedApplication] cancelAllLocalNotifications];
    }
    
}

// public static extern void ClearBadgeNumber() [static] :88
void Notify::ClearBadgeNumber()
{
    uStackFrame __("Fuse.LocalNotifications.Notify", "ClearBadgeNumber()");
    Notify_typeof()->Init();
    @autoreleasepool
    {
        [UIApplication sharedApplication].applicationIconBadgeNumber = 0;
    }
    
}

// public static extern void Later(int secondsFromNow, string title, string body, string payload, [bool sound], [int badgeNumber]) [static] :44
void Notify::Later(int secondsFromNow, uString* title, uString* body, uString* payload, bool sound, int badgeNumber)
{
    uStackFrame __("Fuse.LocalNotifications.Notify", "Later(int,string,string,string,[bool],[int])");
    Notify_typeof()->Init();
    ::g::Fuse::LocalNotifications::iOSImpl::Later(title, body, sound, payload, secondsFromNow, badgeNumber);
}

// public static void Now(string title, string body, string payload, [bool sound], [int badgeNumber]) [static] :31
void Notify::Now(uString* title, uString* body, uString* payload, bool sound, int badgeNumber)
{
    uStackFrame __("Fuse.LocalNotifications.Notify", "Now(string,string,string,[bool],[int])");
    Notify_typeof()->Init();
    Notify::Later(0, title, body, payload, sound, badgeNumber);
}

// internal static void OnReceived(object sender, string message) [static] :76
void Notify::OnReceived(uObject* sender, uString* message)
{
    uStackFrame __("Fuse.LocalNotifications.Notify", "OnReceived(object,string)");
    Notify_typeof()->Init();
    uDelegate* x = Notify::_receivedNotification1();

    if (::g::Uno::Delegate::op_Inequality(x, NULL))
        uPtr(x)->Invoke(2, NULL, message);
    else 
        ::g::Uno::Collections::List__Add_fn(uPtr(Notify::_pendingNotifications()), message);
}

// private static generated void add__receivedNotification(Uno.EventHandler<string> value) [static] :60
void Notify::add__receivedNotification(uDelegate* value)
{
    uStackFrame __("Fuse.LocalNotifications.Notify", "add__receivedNotification(Uno.EventHandler<string>)");
    Notify_typeof()->Init();
    Notify::_receivedNotification1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Notify::_receivedNotification1(), value), ::TYPES[1/*Uno.EventHandler<string>*/]);
}

// private static generated void remove__receivedNotification(Uno.EventHandler<string> value) [static] :60
void Notify::remove__receivedNotification(uDelegate* value)
{
    uStackFrame __("Fuse.LocalNotifications.Notify", "remove__receivedNotification(Uno.EventHandler<string>)");
    Notify_typeof()->Init();
    Notify::_receivedNotification1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Notify::_receivedNotification1(), value), ::TYPES[1/*Uno.EventHandler<string>*/]);
}

// public static void add_Received(Uno.EventHandler<string> value) [static] :64
void Notify::add_Received(uDelegate* value)
{
    uStackFrame __("Fuse.LocalNotifications.Notify", "add_Received(Uno.EventHandler<string>)");
    Notify_typeof()->Init();
    ::g::Uno::Collections::List__Enumerator<uStrong<uString*> > ret2;
    Notify::add__receivedNotification(value);

    for (::g::Uno::Collections::List__Enumerator<uStrong<uString*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(Notify::_pendingNotifications()), &ret2), ret2); enum1.MoveNext(::TYPES[2/*Uno.Collections.List<string>.Enumerator*/]); )
    {
        uString* n = enum1.Current(::TYPES[2/*Uno.Collections.List<string>.Enumerator*/]);
        uPtr(value)->Invoke(2, NULL, n);
    }

    uPtr(Notify::_pendingNotifications())->Clear();
}

// public static void remove_Received(Uno.EventHandler<string> value) [static] :71
void Notify::remove_Received(uDelegate* value)
{
    uStackFrame __("Fuse.LocalNotifications.Notify", "remove_Received(Uno.EventHandler<string>)");
    Notify_typeof()->Init();
    Notify::remove__receivedNotification(value);
}
// }

}}} // ::g::Fuse::LocalNotifications
