// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JavaObjectHelper.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Fuse.LocalNotifications.AndroidImpl.h>
#include <Fuse.LocalNotifications.LocalNotify.h>
#include <Fuse.LocalNotifications.Notify.h>
#include <Fuse.Platform.ApplicationState.h>
#include <Fuse.Platform.Lifecycle.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeEvent.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <jni.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Resource.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[12];
static uType* TYPES[9];

namespace g{
namespace Fuse{
namespace LocalNotifications{

// /usr/local/share/uno/Packages/Fuse.LocalNotifications/0.40.8/android/$.uno
// --------------------------------------------------------------------------

// internal static extern class AndroidImpl :33
// {
// static AndroidImpl() :33
static void AndroidImpl__cctor__fn(uType* __type)
{
    AndroidImpl::ACTION_ = ::STRINGS[0/*"com.fuse.Lo...*/];
    AndroidImpl::ID_ = -1;
}

static void AndroidImpl_build(uType* type)
{
    ::STRINGS[0] = uString::Const("com.fuse.LocalNotifications.strPayload");
    ::TYPES[0] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Platform::ApplicationState_typeof());
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::LocalNotifications::AndroidImpl::_init_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Fuse::LocalNotifications::AndroidImpl::ACTION_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::LocalNotifications::AndroidImpl::ID_, uFieldFlagsStatic);
}

uClassType* AndroidImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.LocalNotifications.AndroidImpl", options);
    type->fp_build_ = AndroidImpl_build;
    type->fp_cctor_ = AndroidImpl__cctor__fn;
    return type;
}

// internal static void Init() :38
void AndroidImpl__Init_fn()
{
    AndroidImpl::Init();
}

// private static void JInit() :66
void AndroidImpl__JInit_fn()
{
    AndroidImpl::JInit();
}

// public static void Later(string title, string body, bool sound, string strPayload, [int delaySeconds]) :96
void AndroidImpl__Later_fn(uString* title, uString* body, bool* sound, uString* strPayload, int* delaySeconds)
{
    AndroidImpl::Later(title, body, *sound, strPayload, *delaySeconds);
}

// private static int NextID() :90
void AndroidImpl__NextID_fn(int* __retval)
{
    *__retval = AndroidImpl::NextID();
}

// private static void NoteInteractivity(bool isItInteractive) :60
void AndroidImpl__NoteInteractivity_fn(bool* isItInteractive)
{
    AndroidImpl::NoteInteractivity(*isItInteractive);
}

// private static void NotificationRecieved(string payload) :81
void AndroidImpl__NotificationRecieved_fn(uString* payload)
{
    AndroidImpl::NotificationRecieved(payload);
}

// private static void OnEnteringInteractive(Fuse.Platform.ApplicationState newState) :49
void AndroidImpl__OnEnteringInteractive_fn(int* newState)
{
    AndroidImpl::OnEnteringInteractive(*newState);
}

// private static void OnExitedInteractive(Fuse.Platform.ApplicationState newState) :54
void AndroidImpl__OnExitedInteractive_fn(int* newState)
{
    AndroidImpl::OnExitedInteractive(*newState);
}

bool AndroidImpl::_init_;
uSStrong<uString*> AndroidImpl::ACTION_;
int AndroidImpl::ID_;

// internal static void Init() [static] :38
void AndroidImpl::Init()
{
    uStackFrame __("Fuse.LocalNotifications.AndroidImpl", "Init()");
    AndroidImpl_typeof()->Init();

    if (!AndroidImpl::_init())
    {
        AndroidImpl::JInit();
        AndroidImpl::_init() = true;
        ::g::Fuse::Platform::Lifecycle::add_EnteringInteractive(uDelegate::New(::TYPES[0/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)AndroidImpl__OnEnteringInteractive_fn));
        ::g::Fuse::Platform::Lifecycle::add_ExitedInteractive(uDelegate::New(::TYPES[0/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)AndroidImpl__OnExitedInteractive_fn));
    }
}

// private static void JInit() [static] :66
void AndroidImpl::JInit()
{
    uStackFrame __("Fuse.LocalNotifications.AndroidImpl", "JInit()");
    AndroidImpl_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "JInit", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void Later(string title, string body, bool sound, string strPayload, [int delaySeconds]) [static] :96
void AndroidImpl::Later(uString* title, uString* body, bool sound, uString* strPayload, int delaySeconds)
{
    uStackFrame __("Fuse.LocalNotifications.AndroidImpl", "Later(string,string,bool,string,[int])");
    AndroidImpl_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Later294", "(Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;I)V");
        uString* _utitle=title;
        jstring _title = JniHelper::UnoToJavaString(_utitle);
        uString* _ubody=body;
        jstring _body = JniHelper::UnoToJavaString(_ubody);
        bool _usound=sound;
        jboolean _sound = (jboolean)_usound;
        uString* _ustrPayload=strPayload;
        jstring _strPayload = JniHelper::UnoToJavaString(_ustrPayload);
        int _udelaySeconds=delaySeconds;
        jint _delaySeconds = (jint)_udelaySeconds;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_title,_body,_sound,_strPayload,_delaySeconds);
        
        if (_title!=NULL) { U_JNIVAR->DeleteLocalRef(_title); }
        if (_body!=NULL) { U_JNIVAR->DeleteLocalRef(_body); }
        
        if (_strPayload!=NULL) { U_JNIVAR->DeleteLocalRef(_strPayload); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static int NextID() [static] :90
int AndroidImpl::NextID()
{
    uStackFrame __("Fuse.LocalNotifications.AndroidImpl", "NextID()");
    AndroidImpl_typeof()->Init();
    return AndroidImpl::ID() = (AndroidImpl::ID() + 1);
}

// private static void NoteInteractivity(bool isItInteractive) [static] :60
void AndroidImpl::NoteInteractivity(bool isItInteractive)
{
    uStackFrame __("Fuse.LocalNotifications.AndroidImpl", "NoteInteractivity(bool)");
    AndroidImpl_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "NoteInteractivity", "(Z)V");
        bool _uisItInteractive=isItInteractive;
        jboolean _isItInteractive = (jboolean)_uisItInteractive;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_isItInteractive);
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void NotificationRecieved(string payload) [static] :81
void AndroidImpl::NotificationRecieved(uString* payload)
{
    uStackFrame __("Fuse.LocalNotifications.AndroidImpl", "NotificationRecieved(string)");
    AndroidImpl_typeof()->Init();
    ::g::Fuse::LocalNotifications::Notify::OnReceived(NULL, payload);
}

// private static void OnEnteringInteractive(Fuse.Platform.ApplicationState newState) [static] :49
void AndroidImpl::OnEnteringInteractive(int newState)
{
    uStackFrame __("Fuse.LocalNotifications.AndroidImpl", "OnEnteringInteractive(Fuse.Platform.ApplicationState)");
    AndroidImpl_typeof()->Init();
    AndroidImpl::NoteInteractivity(true);
}

// private static void OnExitedInteractive(Fuse.Platform.ApplicationState newState) [static] :54
void AndroidImpl::OnExitedInteractive(int newState)
{
    uStackFrame __("Fuse.LocalNotifications.AndroidImpl", "OnExitedInteractive(Fuse.Platform.ApplicationState)");
    AndroidImpl_typeof()->Init();
    AndroidImpl::NoteInteractivity(false);
}
// }

// /usr/local/share/uno/Packages/Fuse.LocalNotifications/0.40.8/$.uno
// ------------------------------------------------------------------

// public sealed class LocalNotify :137
// {
// static LocalNotify() :137
static void LocalNotify__cctor__fn(uType* __type)
{
    LocalNotify::_pendingNotifications_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[1/*Uno.Collections.List<string>*/]));
}

static void LocalNotify_build(uType* type)
{
    ::STRINGS[1] = uString::Const("FuseJS/LocalNotifications");
    ::STRINGS[2] = uString::Const("onReceivedMessage");
    ::STRINGS[3] = uString::Const("now");
    ::STRINGS[4] = uString::Const("later");
    ::STRINGS[5] = uString::Const("clearBadgeNumber");
    ::STRINGS[6] = uString::Const("clearAllNotifications");
    ::STRINGS[7] = uString::Const("Invalid value for argument '");
    ::STRINGS[8] = uString::Const("' passed from JS to LocalNotifications");
    ::STRINGS[9] = uString::Const("secondsFromNow");
    ::STRINGS[10] = uString::Const("badgeNumber");
    ::STRINGS[11] = uString::Const("");
    ::TYPES[1] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[3] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[4] = ::g::Uno::Int_typeof();
    ::TYPES[5] = ::g::Uno::Double_typeof();
    ::TYPES[6] = ::g::Uno::String_typeof();
    ::TYPES[7] = uObject_typeof()->Array();
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

    ::g::Uno::UX::Resource::SetGlobalKey(LocalNotify::_instance() = this, ::STRINGS[1/*"FuseJS/Loca...*/]);
    LocalNotify::_onReceivedMessage() = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[2/*"onReceivedM...*/], true);
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[3/*"now"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)LocalNotify__Now_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[4/*"later"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)LocalNotify__Later_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[5/*"clearBadgeN...*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)LocalNotify__ClearBadgeNumber_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[6/*"clearAllNot...*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)LocalNotify__ClearAllNotifications_fn, this)));
    AddMember(LocalNotify::_onReceivedMessage());

    if (!LocalNotify::_registered())
    {
        ::g::Fuse::LocalNotifications::Notify::add_Received(uDelegate::New(::TYPES[3/*Uno.EventHandler<string>*/], (void*)LocalNotify__OnReceived_fn));
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
        int secondsFromNow = LocalNotify::GetInt(uPtr(args)->Strong<uObject*>(0), ::STRINGS[9/*"secondsFrom...*/]);
        int badgeNumber = (args->Length() > 5) ? LocalNotify::GetInt(args->Strong<uObject*>(5), ::STRINGS[10/*"badgeNumber"*/]) : 0;
        bool hasSoundArg = args->Length() > 4;
        ::g::Fuse::LocalNotifications::Notify::Later(secondsFromNow, uCast<uString*>(args->Strong<uObject*>(1), ::TYPES[6/*string*/]), uCast<uString*>(args->Strong<uObject*>(2), ::TYPES[6/*string*/]), (args->Strong<uObject*>(3) != NULL) ? uCast<uString*>(args->Strong<uObject*>(3), ::TYPES[6/*string*/]) : ::STRINGS[11/*""*/], hasSoundArg ? uUnbox<bool>(::g::Uno::Bool_typeof(), args->Strong<uObject*>(4)) : true, badgeNumber);
    }

    return NULL;
}

// public object Now(Fuse.Scripting.Context context, object[] args) [instance] :212
uObject* LocalNotify::Now(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.LocalNotifications.LocalNotify", "Now(Fuse.Scripting.Context,object[])");

    if (uPtr(args)->Length() > 0)
    {
        int badgeNumber = (uPtr(args)->Length() > 4) ? LocalNotify::GetInt(uPtr(args)->Strong<uObject*>(4), ::STRINGS[10/*"badgeNumber"*/]) : 0;
        bool hasSoundArg = args->Length() > 3;
        ::g::Fuse::LocalNotifications::Notify::Now(uCast<uString*>(args->Strong<uObject*>(0), ::TYPES[6/*string*/]), uCast<uString*>(args->Strong<uObject*>(1), ::TYPES[6/*string*/]), (args->Strong<uObject*>(2) == NULL) ? ::STRINGS[11/*""*/] : uCast<uString*>(args->Strong<uObject*>(2), ::TYPES[6/*string*/]), hasSoundArg ? uUnbox<bool>(::g::Uno::Bool_typeof(), args->Strong<uObject*>(3)) : true, badgeNumber);
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

    if (uIs(arg, ::TYPES[4/*int*/]))
        return uUnbox<int>(::TYPES[4/*int*/], arg);
    else  if (uIs(arg, ::TYPES[5/*double*/]))
        return (int)uUnbox<double>(::TYPES[5/*double*/], arg);
    else 
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[7/*"Invalid val...*/], argName), ::STRINGS[8/*"' passed fr...*/])));

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
    uPtr(LocalNotify::_onReceivedMessage())->RaiseAsync(uArray::Init<uObject*>(::TYPES[7/*object[]*/], 1, message));
}
// }

// /usr/local/share/uno/Packages/Fuse.LocalNotifications/0.40.8/$.uno
// ------------------------------------------------------------------

// public static class Notify :9
// {
// static extern Notify() :14
static void Notify__cctor__fn(uType* __type)
{
    Notify::_pendingNotifications_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[1/*Uno.Collections.List<string>*/]));
    ::g::Fuse::LocalNotifications::AndroidImpl::Init();
}

static void Notify_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[3] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[8] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::String_typeof());
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof()), (uintptr_t)&::g::Fuse::LocalNotifications::Notify::_pendingNotifications_, uFieldFlagsStatic,
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
    options.FieldCount = 2;
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

// public static extern void ClearAllNotifications() :102
void Notify__ClearAllNotifications_fn()
{
    Notify::ClearAllNotifications();
}

// public static extern void ClearBadgeNumber() :93
void Notify__ClearBadgeNumber_fn()
{
    Notify::ClearBadgeNumber();
}

// public static extern void Later(int secondsFromNow, string title, string body, string payload, [bool sound], [int badgeNumber]) :38
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
uSStrong<uDelegate*> Notify::_receivedNotification1_;

// public static extern void ClearAllNotifications() [static] :102
void Notify::ClearAllNotifications()
{
    uStackFrame __("Fuse.LocalNotifications.Notify", "ClearAllNotifications()");
    Notify_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ClearAllNotifications296", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static extern void ClearBadgeNumber() [static] :93
void Notify::ClearBadgeNumber()
{
    Notify_typeof()->Init();
}

// public static extern void Later(int secondsFromNow, string title, string body, string payload, [bool sound], [int badgeNumber]) [static] :38
void Notify::Later(int secondsFromNow, uString* title, uString* body, uString* payload, bool sound, int badgeNumber)
{
    uStackFrame __("Fuse.LocalNotifications.Notify", "Later(int,string,string,string,[bool],[int])");
    Notify_typeof()->Init();
    ::g::Fuse::LocalNotifications::AndroidImpl::Later(title, body, sound, payload, secondsFromNow);
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
    Notify::_receivedNotification1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Notify::_receivedNotification1(), value), ::TYPES[3/*Uno.EventHandler<string>*/]);
}

// private static generated void remove__receivedNotification(Uno.EventHandler<string> value) [static] :60
void Notify::remove__receivedNotification(uDelegate* value)
{
    uStackFrame __("Fuse.LocalNotifications.Notify", "remove__receivedNotification(Uno.EventHandler<string>)");
    Notify_typeof()->Init();
    Notify::_receivedNotification1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Notify::_receivedNotification1(), value), ::TYPES[3/*Uno.EventHandler<string>*/]);
}

// public static void add_Received(Uno.EventHandler<string> value) [static] :64
void Notify::add_Received(uDelegate* value)
{
    uStackFrame __("Fuse.LocalNotifications.Notify", "add_Received(Uno.EventHandler<string>)");
    Notify_typeof()->Init();
    ::g::Uno::Collections::List__Enumerator<uStrong<uString*> > ret2;
    Notify::add__receivedNotification(value);

    for (::g::Uno::Collections::List__Enumerator<uStrong<uString*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(Notify::_pendingNotifications()), &ret2), ret2); enum1.MoveNext(::TYPES[8/*Uno.Collections.List<string>.Enumerator*/]); )
    {
        uString* n = enum1.Current(::TYPES[8/*Uno.Collections.List<string>.Enumerator*/]);
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
