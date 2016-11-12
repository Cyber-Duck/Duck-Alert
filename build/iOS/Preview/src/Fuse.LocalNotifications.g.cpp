// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.LocalNotifications.LocalNotify.h>
#include <Fuse.LocalNotifications.Notify.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeEvent.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Uno.Bool.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Double.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[11];
static uType* TYPES[7];

namespace g{
namespace Fuse{
namespace LocalNotifications{

// /usr/local/share/uno/Packages/Fuse.LocalNotifications/0.40.8/$.uno
// ------------------------------------------------------------------

// public sealed class LocalNotify :137
// {
// static LocalNotify() :137
static void LocalNotify__cctor__fn(uType* __type)
{
    LocalNotify::_pendingNotifications_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<string>*/]));
}

static void LocalNotify_build(uType* type)
{
    ::STRINGS[0] = uString::Const("FuseJS/LocalNotifications");
    ::STRINGS[1] = uString::Const("onReceivedMessage");
    ::STRINGS[2] = uString::Const("now");
    ::STRINGS[3] = uString::Const("later");
    ::STRINGS[4] = uString::Const("clearBadgeNumber");
    ::STRINGS[5] = uString::Const("clearAllNotifications");
    ::STRINGS[6] = uString::Const("Invalid value for argument '");
    ::STRINGS[7] = uString::Const("' passed from JS to LocalNotifications");
    ::STRINGS[8] = uString::Const("secondsFromNow");
    ::STRINGS[9] = uString::Const("badgeNumber");
    ::STRINGS[10] = uString::Const("");
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[1] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[2] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[3] = ::g::Uno::Int_typeof();
    ::TYPES[4] = ::g::Uno::Double_typeof();
    ::TYPES[5] = ::g::Uno::String_typeof();
    ::TYPES[6] = uObject_typeof()->Array();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(5,
        LocalNotify_typeof(), (uintptr_t)&::g::Fuse::LocalNotifications::LocalNotify::_instance_, uFieldFlagsStatic,
        ::g::Fuse::Scripting::NativeEvent_typeof(), (uintptr_t)&::g::Fuse::LocalNotifications::LocalNotify::_onReceivedMessage_, uFieldFlagsStatic,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof()), (uintptr_t)&::g::Fuse::LocalNotifications::LocalNotify::_pendingNotifications_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::LocalNotifications::LocalNotify::_registered_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(5,
        new uFunction("ClearAllNotifications", NULL, (void*)LocalNotify__ClearAllNotifications_fn, 0, false, uObject_typeof(), 2, ::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array()),
        new uFunction("ClearBadgeNumber", NULL, (void*)LocalNotify__ClearBadgeNumber_fn, 0, false, uObject_typeof(), 2, ::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array()),
        new uFunction("Later", NULL, (void*)LocalNotify__Later_fn, 0, false, uObject_typeof(), 2, ::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array()),
        new uFunction(".ctor", NULL, (void*)LocalNotify__New2_fn, 0, true, LocalNotify_typeof(), 0),
        new uFunction("Now", NULL, (void*)LocalNotify__Now_fn, 0, false, uObject_typeof(), 2, ::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array()));
}

::g::Fuse::Scripting::NativeModule_type* LocalNotify_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(LocalNotify);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.LocalNotifications.LocalNotify", options);
    type->fp_build_ = LocalNotify_build;
    type->fp_ctor_ = (void*)LocalNotify__New2_fn;
    type->fp_cctor_ = LocalNotify__cctor__fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public LocalNotify() :144
void LocalNotify__ctor_2_fn(LocalNotify* __this)
{
    __this->ctor_2();
}

// public object ClearAllNotifications(Fuse.Scripting.Context context, object[] args) :257
void LocalNotify__ClearAllNotifications_fn(LocalNotify* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->ClearAllNotifications(context, args);
}

// public object ClearBadgeNumber(Fuse.Scripting.Context context, object[] args) :246
void LocalNotify__ClearBadgeNumber_fn(LocalNotify* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->ClearBadgeNumber(context, args);
}

// private static int GetInt(object arg, string argName) :228
void LocalNotify__GetInt_fn(uObject* arg, uString* argName, int* __retval)
{
    *__retval = LocalNotify::GetInt(arg, argName);
}

// public object Later(Fuse.Scripting.Context context, object[] args) :183
void LocalNotify__Later_fn(LocalNotify* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->Later(context, args);
}

// public LocalNotify New() :144
void LocalNotify__New2_fn(LocalNotify** __retval)
{
    *__retval = LocalNotify::New2();
}

// public object Now(Fuse.Scripting.Context context, object[] args) :212
void LocalNotify__Now_fn(LocalNotify* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->Now(context, args);
}

// private static void OnReceived(object sender, string message) :167
void LocalNotify__OnReceived_fn(uObject* sender, uString* message)
{
    LocalNotify::OnReceived(sender, message);
}

uSStrong<LocalNotify*> LocalNotify::_instance_;
uSStrong< ::g::Fuse::Scripting::NativeEvent*> LocalNotify::_onReceivedMessage_;
uSStrong< ::g::Uno::Collections::List*> LocalNotify::_pendingNotifications_;
bool LocalNotify::_registered_;

// public LocalNotify() [instance] :144
void LocalNotify::ctor_2()
{
    uStackFrame __("Fuse.LocalNotifications.LocalNotify", ".ctor()");
    ctor_1();

    if (LocalNotify::_instance() != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(LocalNotify::_instance() = this, ::STRINGS[0/*"FuseJS/Loca...*/]);
    LocalNotify::_onReceivedMessage() = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[1/*"onReceivedM...*/], true);
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[2/*"now"*/], uDelegate::New(::TYPES[1/*Fuse.Scripting.NativeCallback*/], (void*)LocalNotify__Now_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[3/*"later"*/], uDelegate::New(::TYPES[1/*Fuse.Scripting.NativeCallback*/], (void*)LocalNotify__Later_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[4/*"clearBadgeN...*/], uDelegate::New(::TYPES[1/*Fuse.Scripting.NativeCallback*/], (void*)LocalNotify__ClearBadgeNumber_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[5/*"clearAllNot...*/], uDelegate::New(::TYPES[1/*Fuse.Scripting.NativeCallback*/], (void*)LocalNotify__ClearAllNotifications_fn, this)));
    AddMember(LocalNotify::_onReceivedMessage());

    if (!LocalNotify::_registered())
    {
        ::g::Fuse::LocalNotifications::Notify::add_Received(uDelegate::New(::TYPES[2/*Uno.EventHandler<string>*/], (void*)LocalNotify__OnReceived_fn));
        LocalNotify::_registered() = true;
    }
}

// public object ClearAllNotifications(Fuse.Scripting.Context context, object[] args) [instance] :257
uObject* LocalNotify::ClearAllNotifications(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.LocalNotifications.LocalNotify", "ClearAllNotifications(Fuse.Scripting.Context,object[])");
    ::g::Fuse::LocalNotifications::Notify::ClearAllNotifications();
    return NULL;
}

// public object ClearBadgeNumber(Fuse.Scripting.Context context, object[] args) [instance] :246
uObject* LocalNotify::ClearBadgeNumber(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.LocalNotifications.LocalNotify", "ClearBadgeNumber(Fuse.Scripting.Context,object[])");
    ::g::Fuse::LocalNotifications::Notify::ClearBadgeNumber();
    return NULL;
}

// public object Later(Fuse.Scripting.Context context, object[] args) [instance] :183
uObject* LocalNotify::Later(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.LocalNotifications.LocalNotify", "Later(Fuse.Scripting.Context,object[])");

    if (uPtr(args)->Length() > 0)
    {
        int secondsFromNow = LocalNotify::GetInt(uPtr(args)->Strong<uObject*>(0), ::STRINGS[8/*"secondsFrom...*/]);
        int badgeNumber = (args->Length() > 5) ? LocalNotify::GetInt(args->Strong<uObject*>(5), ::STRINGS[9/*"badgeNumber"*/]) : 0;
        bool hasSoundArg = args->Length() > 4;
        ::g::Fuse::LocalNotifications::Notify::Later(secondsFromNow, uCast<uString*>(args->Strong<uObject*>(1), ::TYPES[5/*string*/]), uCast<uString*>(args->Strong<uObject*>(2), ::TYPES[5/*string*/]), (args->Strong<uObject*>(3) != NULL) ? uCast<uString*>(args->Strong<uObject*>(3), ::TYPES[5/*string*/]) : ::STRINGS[10/*""*/], hasSoundArg ? uUnbox<bool>(::g::Uno::Bool_typeof(), args->Strong<uObject*>(4)) : true, badgeNumber);
    }

    return NULL;
}

// public object Now(Fuse.Scripting.Context context, object[] args) [instance] :212
uObject* LocalNotify::Now(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.LocalNotifications.LocalNotify", "Now(Fuse.Scripting.Context,object[])");

    if (uPtr(args)->Length() > 0)
    {
        int badgeNumber = (uPtr(args)->Length() > 4) ? LocalNotify::GetInt(uPtr(args)->Strong<uObject*>(4), ::STRINGS[9/*"badgeNumber"*/]) : 0;
        bool hasSoundArg = args->Length() > 3;
        ::g::Fuse::LocalNotifications::Notify::Now(uCast<uString*>(args->Strong<uObject*>(0), ::TYPES[5/*string*/]), uCast<uString*>(args->Strong<uObject*>(1), ::TYPES[5/*string*/]), (args->Strong<uObject*>(2) == NULL) ? ::STRINGS[10/*""*/] : uCast<uString*>(args->Strong<uObject*>(2), ::TYPES[5/*string*/]), hasSoundArg ? uUnbox<bool>(::g::Uno::Bool_typeof(), args->Strong<uObject*>(3)) : true, badgeNumber);
    }

    return NULL;
}

// private static int GetInt(object arg, string argName) [static] :228
int LocalNotify::GetInt(uObject* arg, uString* argName)
{
    uStackFrame __("Fuse.LocalNotifications.LocalNotify", "GetInt(object,string)");
    LocalNotify_typeof()->Init();

    if (arg == NULL)
        return 0;

    if (uIs(arg, ::TYPES[3/*int*/]))
        return uUnbox<int>(::TYPES[3/*int*/], arg);
    else  if (uIs(arg, ::TYPES[4/*double*/]))
        return (int)uUnbox<double>(::TYPES[4/*double*/], arg);
    else 
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[6/*"Invalid val...*/], argName), ::STRINGS[7/*"' passed fr...*/])));

    return 0;
}

// public LocalNotify New() [static] :144
LocalNotify* LocalNotify::New2()
{
    LocalNotify* obj1 = (LocalNotify*)uNew(LocalNotify_typeof());
    obj1->ctor_2();
    return obj1;
}

// private static void OnReceived(object sender, string message) [static] :167
void LocalNotify::OnReceived(uObject* sender, uString* message)
{
    uStackFrame __("Fuse.LocalNotifications.LocalNotify", "OnReceived(object,string)");
    LocalNotify_typeof()->Init();
    uPtr(LocalNotify::_onReceivedMessage())->RaiseAsync(uArray::Init<uObject*>(::TYPES[6/*object[]*/], 1, message));
}
// }

}}} // ::g::Fuse::LocalNotifications
