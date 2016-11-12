// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JavaObjectHelper.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Fuse.Platform.ApplicationState.h>
#include <Fuse.Platform.Lifecycle.h>
#include <Fuse.PushNotifications.AndroidImpl.h>
#include <Fuse.PushNotifications.Push.h>
#include <Fuse.PushNotifications.PushNotify.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeEvent.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Java.Object.h>
#include <jni.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Resource.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[9];
static uType* TYPES[6];

namespace g{
namespace Fuse{
namespace PushNotifications{

// /usr/local/share/uno/Packages/Fuse.PushNotifications/0.40.8/android/$.uno
// -------------------------------------------------------------------------

// internal sealed extern class AndroidImpl :40
// {
// static AndroidImpl() :40
static void AndroidImpl__cctor__fn(uType* __type)
{
    AndroidImpl::_cachedMessages_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<string>*/]));
    AndroidImpl::_senderID_ = uString::Ansi("");
    AndroidImpl::PLAY_SERVICES_RESOLUTION_REQUEST_ = 9000;
}

static void AndroidImpl_build(uType* type)
{
    ::STRINGS[0] = uString::Const("");
    ::STRINGS[1] = uString::Const("Fuse.PushNotifications: You have tried to start the android push notification service but do not have a 'Project.Android.GooglePlay.SenderID' specified in your unoproj file. Please add one and try again.");
    ::STRINGS[2] = uString::Const("/usr/local/share/uno/Packages/Fuse.PushNotifications/0.40.8/android/$.uno");
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[1] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Platform::ApplicationState_typeof());
    ::TYPES[2] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[3] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof());
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof()), (uintptr_t)&::g::Fuse::PushNotifications::AndroidImpl::_cachedMessages_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::PushNotifications::AndroidImpl::_init_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Fuse::PushNotifications::AndroidImpl::_senderID_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::PushNotifications::AndroidImpl::PLAY_SERVICES_RESOLUTION_REQUEST_, uFieldFlagsStatic,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof()), (uintptr_t)&::g::Fuse::PushNotifications::AndroidImpl::ReceivedNotification1_, uFieldFlagsStatic,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof()), (uintptr_t)&::g::Fuse::PushNotifications::AndroidImpl::RegistrationFailed1_, uFieldFlagsStatic,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof()), (uintptr_t)&::g::Fuse::PushNotifications::AndroidImpl::RegistrationSucceeded1_, uFieldFlagsStatic);
}

uType* AndroidImpl_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(AndroidImpl);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.PushNotifications.AndroidImpl", options);
    type->fp_build_ = AndroidImpl_build;
    type->fp_ctor_ = (void*)AndroidImpl__New1_fn;
    type->fp_cctor_ = AndroidImpl__cctor__fn;
    return type;
}

// public generated AndroidImpl() :40
void AndroidImpl__ctor__fn(AndroidImpl* __this)
{
    __this->ctor_();
}

// private static void cacheBundle(Java.Object _bundle) :151
void AndroidImpl__cacheBundle_fn(::g::Java::Object* _bundle)
{
    AndroidImpl::cacheBundle(_bundle);
}

// private static bool CheckPlayServices() :119
void AndroidImpl__CheckPlayServices_fn(bool* __retval)
{
    *__retval = AndroidImpl::CheckPlayServices();
}

// private static string GetPayloadFromBundle(Java.Object _bundle) :192
void AndroidImpl__GetPayloadFromBundle_fn(::g::Java::Object* _bundle, uString** __retval)
{
    *__retval = AndroidImpl::GetPayloadFromBundle(_bundle);
}

// private static void getRegistrationIdError(string message) :141
void AndroidImpl__getRegistrationIdError_fn(uString* message)
{
    AndroidImpl::getRegistrationIdError(message);
}

// private static void getRegistrationIdSuccess(string regid) :134
void AndroidImpl__getRegistrationIdSuccess_fn(uString* regid)
{
    AndroidImpl::getRegistrationIdSuccess(regid);
}

// internal static void Init() :51
void AndroidImpl__Init_fn()
{
    AndroidImpl::Init();
}

// private static void JInit() :68
void AndroidImpl__JInit_fn()
{
    AndroidImpl::JInit();
}

// public generated AndroidImpl New() :40
void AndroidImpl__New1_fn(AndroidImpl** __retval)
{
    *__retval = AndroidImpl::New1();
}

// private static void NoteInteractivity(bool isItInteractive) :217
void AndroidImpl__NoteInteractivity_fn(bool* isItInteractive)
{
    AndroidImpl::NoteInteractivity(*isItInteractive);
}

// private static void NotificationFromJson(Java.Object listener, string _jsonStr, Java.Object _bundle) :252
void AndroidImpl__NotificationFromJson_fn(::g::Java::Object* listener, uString* _jsonStr, ::g::Java::Object* _bundle)
{
    AndroidImpl::NotificationFromJson(listener, _jsonStr, _bundle);
}

// private static void OnEnteringInteractive(Fuse.Platform.ApplicationState newState) :157
void AndroidImpl__OnEnteringInteractive_fn(int* newState)
{
    AndroidImpl::OnEnteringInteractive(*newState);
}

// private static void OnExitedInteractive(Fuse.Platform.ApplicationState newState) :169
void AndroidImpl__OnExitedInteractive_fn(int* newState)
{
    AndroidImpl::OnExitedInteractive(*newState);
}

// private static void OnRecieve(Java.Object bundle) :176
void AndroidImpl__OnRecieve_fn(::g::Java::Object* bundle)
{
    AndroidImpl::OnRecieve(bundle);
}

// public static generated void add_ReceivedNotification(Uno.EventHandler<string> value) :44
void AndroidImpl__add_ReceivedNotification_fn(uDelegate* value)
{
    AndroidImpl::add_ReceivedNotification(value);
}

// public static generated void remove_ReceivedNotification(Uno.EventHandler<string> value) :44
void AndroidImpl__remove_ReceivedNotification_fn(uDelegate* value)
{
    AndroidImpl::remove_ReceivedNotification(value);
}

// public static generated void add_RegistrationFailed(Uno.EventHandler<string> value) :43
void AndroidImpl__add_RegistrationFailed_fn(uDelegate* value)
{
    AndroidImpl::add_RegistrationFailed(value);
}

// public static generated void remove_RegistrationFailed(Uno.EventHandler<string> value) :43
void AndroidImpl__remove_RegistrationFailed_fn(uDelegate* value)
{
    AndroidImpl::remove_RegistrationFailed(value);
}

// public static generated void add_RegistrationSucceeded(Uno.EventHandler<string> value) :42
void AndroidImpl__add_RegistrationSucceeded_fn(uDelegate* value)
{
    AndroidImpl::add_RegistrationSucceeded(value);
}

// public static generated void remove_RegistrationSucceeded(Uno.EventHandler<string> value) :42
void AndroidImpl__remove_RegistrationSucceeded_fn(uDelegate* value)
{
    AndroidImpl::remove_RegistrationSucceeded(value);
}

// private static void SpitOutNotification(Java.Object _listener, string title, string body, string sound, Java.Object _payload) :285
void AndroidImpl__SpitOutNotification_fn(::g::Java::Object* _listener, uString* title, uString* body, uString* sound, ::g::Java::Object* _payload)
{
    AndroidImpl::SpitOutNotification(_listener, title, body, sound, _payload);
}

uSStrong< ::g::Uno::Collections::List*> AndroidImpl::_cachedMessages_;
bool AndroidImpl::_init_;
uSStrong<uString*> AndroidImpl::_senderID_;
int AndroidImpl::PLAY_SERVICES_RESOLUTION_REQUEST_;
uSStrong<uDelegate*> AndroidImpl::ReceivedNotification1_;
uSStrong<uDelegate*> AndroidImpl::RegistrationFailed1_;
uSStrong<uDelegate*> AndroidImpl::RegistrationSucceeded1_;

// public generated AndroidImpl() [instance] :40
void AndroidImpl::ctor_()
{
}

// private static void cacheBundle(Java.Object _bundle) [static] :151
void AndroidImpl::cacheBundle(::g::Java::Object* _bundle)
{
    uStackFrame __("Fuse.PushNotifications.AndroidImpl", "cacheBundle(Java.Object)");
    AndroidImpl_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "cacheBundle279", "(Ljava/lang/Object;)V");
        ::g::Java::Object* __u_bundle=_bundle;
        jobject ___bundle = (__u_bundle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__u_bundle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,___bundle);
        
        if (___bundle!=NULL) { U_JNIVAR->DeleteLocalRef(___bundle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static bool CheckPlayServices() [static] :119
bool AndroidImpl::CheckPlayServices()
{
    uStackFrame __("Fuse.PushNotifications.AndroidImpl", "CheckPlayServices()");
    AndroidImpl_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CheckPlayServices280", "()Z");
        jboolean __jresult = U_JNIVAR->CallStaticBooleanMethod(__cls,__mtd);
        bool __result = (bool)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static string GetPayloadFromBundle(Java.Object _bundle) [static] :192
uString* AndroidImpl::GetPayloadFromBundle(::g::Java::Object* _bundle)
{
    uStackFrame __("Fuse.PushNotifications.AndroidImpl", "GetPayloadFromBundle(Java.Object)");
    AndroidImpl_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetPayloadFromBundle282", "(Ljava/lang/Object;)Ljava/lang/String;");
        ::g::Java::Object* __u_bundle=_bundle;
        jobject ___bundle = (__u_bundle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__u_bundle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,___bundle);
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (___bundle!=NULL) { U_JNIVAR->DeleteLocalRef(___bundle); }
        if (__jresult!=NULL && U_JNIVAR->GetObjectRefType(__jresult) == JNILocalRefType) U_JNIVAR->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static void getRegistrationIdError(string message) [static] :141
void AndroidImpl::getRegistrationIdError(uString* message)
{
    uStackFrame __("Fuse.PushNotifications.AndroidImpl", "getRegistrationIdError(string)");
    AndroidImpl_typeof()->Init();
    uDelegate* x = AndroidImpl::RegistrationFailed1();

    if (::g::Uno::Delegate::op_Inequality(x, NULL))
        uPtr(x)->Invoke(2, NULL, message);
}

// private static void getRegistrationIdSuccess(string regid) [static] :134
void AndroidImpl::getRegistrationIdSuccess(uString* regid)
{
    uStackFrame __("Fuse.PushNotifications.AndroidImpl", "getRegistrationIdSuccess(string)");
    AndroidImpl_typeof()->Init();
    uDelegate* x = AndroidImpl::RegistrationSucceeded1();

    if (::g::Uno::Delegate::op_Inequality(x, NULL))
        uPtr(x)->Invoke(2, NULL, regid);
}

// internal static void Init() [static] :51
void AndroidImpl::Init()
{
    uStackFrame __("Fuse.PushNotifications.AndroidImpl", "Init()");
    AndroidImpl_typeof()->Init();

    if (!AndroidImpl::_init())
    {
        if (::g::Uno::String::op_Inequality(AndroidImpl::_senderID(), ::STRINGS[0/*""*/]))
        {
            AndroidImpl::JInit();
            AndroidImpl::_init() = true;
            ::g::Fuse::Platform::Lifecycle::add_EnteringInteractive(uDelegate::New(::TYPES[1/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)AndroidImpl__OnEnteringInteractive_fn));
            ::g::Fuse::Platform::Lifecycle::add_ExitedInteractive(uDelegate::New(::TYPES[1/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)AndroidImpl__OnExitedInteractive_fn));
        }
        else 
            ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[1/*"Fuse.PushNo...*/], 1, ::STRINGS[2/*"/usr/local/...*/], 62);
    }
}

// private static void JInit() [static] :68
void AndroidImpl::JInit()
{
    uStackFrame __("Fuse.PushNotifications.AndroidImpl", "JInit()");
    AndroidImpl_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "JInit283", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public generated AndroidImpl New() [static] :40
AndroidImpl* AndroidImpl::New1()
{
    AndroidImpl* obj2 = (AndroidImpl*)uNew(AndroidImpl_typeof());
    obj2->ctor_();
    return obj2;
}

// private static void NoteInteractivity(bool isItInteractive) [static] :217
void AndroidImpl::NoteInteractivity(bool isItInteractive)
{
    uStackFrame __("Fuse.PushNotifications.AndroidImpl", "NoteInteractivity(bool)");
    AndroidImpl_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "NoteInteractivity288", "(Z)V");
        bool _uisItInteractive=isItInteractive;
        jboolean _isItInteractive = (jboolean)_uisItInteractive;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_isItInteractive);
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void NotificationFromJson(Java.Object listener, string _jsonStr, Java.Object _bundle) [static] :252
void AndroidImpl::NotificationFromJson(::g::Java::Object* listener, uString* _jsonStr, ::g::Java::Object* _bundle)
{
    uStackFrame __("Fuse.PushNotifications.AndroidImpl", "NotificationFromJson(Java.Object,string,Java.Object)");
    AndroidImpl_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "NotificationFromJson289", "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;)V");
        ::g::Java::Object* __ulistener=listener;
        jobject __listener = (__ulistener==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__ulistener, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uString* __u_jsonStr=_jsonStr;
        jstring ___jsonStr = JniHelper::UnoToJavaString(__u_jsonStr);
        ::g::Java::Object* __u_bundle=_bundle;
        jobject ___bundle = (__u_bundle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__u_bundle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,__listener,___jsonStr,___bundle);
        
        if (__listener!=NULL) { U_JNIVAR->DeleteLocalRef(__listener); }
        if (___jsonStr!=NULL) { U_JNIVAR->DeleteLocalRef(___jsonStr); }
        if (___bundle!=NULL) { U_JNIVAR->DeleteLocalRef(___bundle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void OnEnteringInteractive(Fuse.Platform.ApplicationState newState) [static] :157
void AndroidImpl::OnEnteringInteractive(int newState)
{
    uStackFrame __("Fuse.PushNotifications.AndroidImpl", "OnEnteringInteractive(Fuse.Platform.ApplicationState)");
    AndroidImpl_typeof()->Init();
    ::g::Uno::Collections::List__Enumerator<uStrong<uString*> > ret3;
    AndroidImpl::NoteInteractivity(true);
    uDelegate* x = AndroidImpl::ReceivedNotification1();

    if (::g::Uno::Delegate::op_Inequality(x, NULL))

        for (::g::Uno::Collections::List__Enumerator<uStrong<uString*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(AndroidImpl::_cachedMessages()), &ret3), ret3); enum1.MoveNext(::TYPES[2/*Uno.Collections.List<string>.Enumerator*/]); )
        {
            uString* message = enum1.Current(::TYPES[2/*Uno.Collections.List<string>.Enumerator*/]);
            uPtr(x)->Invoke(2, NULL, message);
        }

    uPtr(AndroidImpl::_cachedMessages())->Clear();
}

// private static void OnExitedInteractive(Fuse.Platform.ApplicationState newState) [static] :169
void AndroidImpl::OnExitedInteractive(int newState)
{
    uStackFrame __("Fuse.PushNotifications.AndroidImpl", "OnExitedInteractive(Fuse.Platform.ApplicationState)");
    AndroidImpl_typeof()->Init();
    AndroidImpl::NoteInteractivity(false);
}

// private static void OnRecieve(Java.Object bundle) [static] :176
void AndroidImpl::OnRecieve(::g::Java::Object* bundle)
{
    uStackFrame __("Fuse.PushNotifications.AndroidImpl", "OnRecieve(Java.Object)");
    AndroidImpl_typeof()->Init();
    uString* message = AndroidImpl::GetPayloadFromBundle(bundle);

    if (::g::Fuse::Platform::Lifecycle::State() == 3)
    {
        uDelegate* x = AndroidImpl::ReceivedNotification1();

        if (::g::Uno::Delegate::op_Inequality(x, NULL))
            uPtr(x)->Invoke(2, NULL, message);
    }
    else 
        ::g::Uno::Collections::List__Add_fn(uPtr(AndroidImpl::_cachedMessages()), message);
}

// private static void SpitOutNotification(Java.Object _listener, string title, string body, string sound, Java.Object _payload) [static] :285
void AndroidImpl::SpitOutNotification(::g::Java::Object* _listener, uString* title, uString* body, uString* sound, ::g::Java::Object* _payload)
{
    uStackFrame __("Fuse.PushNotifications.AndroidImpl", "SpitOutNotification(Java.Object,string,string,string,Java.Object)");
    AndroidImpl_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SpitOutNotification290", "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)V");
        ::g::Java::Object* __u_listener=_listener;
        jobject ___listener = (__u_listener==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__u_listener, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uString* __utitle=title;
        jstring __title = JniHelper::UnoToJavaString(__utitle);
        uString* __ubody=body;
        jstring __body = JniHelper::UnoToJavaString(__ubody);
        uString* __usound=sound;
        jstring __sound = JniHelper::UnoToJavaString(__usound);
        ::g::Java::Object* __u_payload=_payload;
        jobject ___payload = (__u_payload==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__u_payload, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,___listener,__title,__body,__sound,___payload);
        
        if (___listener!=NULL) { U_JNIVAR->DeleteLocalRef(___listener); }
        if (__title!=NULL) { U_JNIVAR->DeleteLocalRef(__title); }
        if (__body!=NULL) { U_JNIVAR->DeleteLocalRef(__body); }
        if (__sound!=NULL) { U_JNIVAR->DeleteLocalRef(__sound); }
        if (___payload!=NULL) { U_JNIVAR->DeleteLocalRef(___payload); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static generated void add_ReceivedNotification(Uno.EventHandler<string> value) [static] :44
void AndroidImpl::add_ReceivedNotification(uDelegate* value)
{
    uStackFrame __("Fuse.PushNotifications.AndroidImpl", "add_ReceivedNotification(Uno.EventHandler<string>)");
    AndroidImpl_typeof()->Init();
    AndroidImpl::ReceivedNotification1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(AndroidImpl::ReceivedNotification1(), value), ::TYPES[3/*Uno.EventHandler<string>*/]);
}

// public static generated void remove_ReceivedNotification(Uno.EventHandler<string> value) [static] :44
void AndroidImpl::remove_ReceivedNotification(uDelegate* value)
{
    uStackFrame __("Fuse.PushNotifications.AndroidImpl", "remove_ReceivedNotification(Uno.EventHandler<string>)");
    AndroidImpl_typeof()->Init();
    AndroidImpl::ReceivedNotification1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(AndroidImpl::ReceivedNotification1(), value), ::TYPES[3/*Uno.EventHandler<string>*/]);
}

// public static generated void add_RegistrationFailed(Uno.EventHandler<string> value) [static] :43
void AndroidImpl::add_RegistrationFailed(uDelegate* value)
{
    uStackFrame __("Fuse.PushNotifications.AndroidImpl", "add_RegistrationFailed(Uno.EventHandler<string>)");
    AndroidImpl_typeof()->Init();
    AndroidImpl::RegistrationFailed1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(AndroidImpl::RegistrationFailed1(), value), ::TYPES[3/*Uno.EventHandler<string>*/]);
}

// public static generated void remove_RegistrationFailed(Uno.EventHandler<string> value) [static] :43
void AndroidImpl::remove_RegistrationFailed(uDelegate* value)
{
    uStackFrame __("Fuse.PushNotifications.AndroidImpl", "remove_RegistrationFailed(Uno.EventHandler<string>)");
    AndroidImpl_typeof()->Init();
    AndroidImpl::RegistrationFailed1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(AndroidImpl::RegistrationFailed1(), value), ::TYPES[3/*Uno.EventHandler<string>*/]);
}

// public static generated void add_RegistrationSucceeded(Uno.EventHandler<string> value) [static] :42
void AndroidImpl::add_RegistrationSucceeded(uDelegate* value)
{
    uStackFrame __("Fuse.PushNotifications.AndroidImpl", "add_RegistrationSucceeded(Uno.EventHandler<string>)");
    AndroidImpl_typeof()->Init();
    AndroidImpl::RegistrationSucceeded1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(AndroidImpl::RegistrationSucceeded1(), value), ::TYPES[3/*Uno.EventHandler<string>*/]);
}

// public static generated void remove_RegistrationSucceeded(Uno.EventHandler<string> value) [static] :42
void AndroidImpl::remove_RegistrationSucceeded(uDelegate* value)
{
    uStackFrame __("Fuse.PushNotifications.AndroidImpl", "remove_RegistrationSucceeded(Uno.EventHandler<string>)");
    AndroidImpl_typeof()->Init();
    AndroidImpl::RegistrationSucceeded1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(AndroidImpl::RegistrationSucceeded1(), value), ::TYPES[3/*Uno.EventHandler<string>*/]);
}
// }

// /usr/local/share/uno/Packages/Fuse.PushNotifications/0.40.8/$.uno
// -----------------------------------------------------------------

// public sealed class Push :184
// {
static void Push_build(uType* type)
{
    ::STRINGS[3] = uString::Const("FuseJS/Push");
    ::STRINGS[4] = uString::Const("onReceivedMessage");
    ::STRINGS[5] = uString::Const("onRegistrationFailed");
    ::STRINGS[6] = uString::Const("onRegistrationSucceeded");
    ::STRINGS[7] = uString::Const("clearBadgeNumber");
    ::STRINGS[8] = uString::Const("clearAllNotifications");
    ::TYPES[4] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[3] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[5] = uObject_typeof()->Array();
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
    ::g::Uno::UX::Resource::SetGlobalKey(this, ::STRINGS[3/*"FuseJS/Push"*/]);
    Push::_onReceivedMessage_ = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[4/*"onReceivedM...*/], true);
    Push::_onRegistrationFailed_ = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[5/*"onRegistrat...*/], true);
    Push::_onRegistrationSucceeded_ = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[6/*"onRegistrat...*/], true);
    AddMember(Push::_onReceivedMessage_);
    AddMember(Push::_onRegistrationSucceeded_);
    AddMember(Push::_onRegistrationFailed_);
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[7/*"clearBadgeN...*/], uDelegate::New(::TYPES[4/*Fuse.Scripting.NativeCallback*/], (void*)Push__ClearBadgeNumber_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[8/*"clearAllNot...*/], uDelegate::New(::TYPES[4/*Fuse.Scripting.NativeCallback*/], (void*)Push__ClearAllNotifications_fn, this)));

    if (!Push::_unoEventsRegistered_)
    {
        ::g::Fuse::PushNotifications::PushNotify::add_ReceivedNotification(uDelegate::New(::TYPES[3/*Uno.EventHandler<string>*/], (void*)Push__OnReceivedNotification_fn));
        ::g::Fuse::PushNotifications::PushNotify::add_RegistrationSucceeded(uDelegate::New(::TYPES[3/*Uno.EventHandler<string>*/], (void*)Push__OnRegistrationSucceeded_fn));
        ::g::Fuse::PushNotifications::PushNotify::add_RegistrationFailed(uDelegate::New(::TYPES[3/*Uno.EventHandler<string>*/], (void*)Push__OnRegistrationFailed_fn));
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
        uPtr(Push::_onReceivedMessage_)->RaiseAsync(uArray::Init<uObject*>(::TYPES[5/*object[]*/], 1, message));
}

// public static void OnRegistrationFailed(object sender, string message) [static] :243
void Push::OnRegistrationFailed(uObject* sender, uString* message)
{
    uStackFrame __("Fuse.PushNotifications.Push", "OnRegistrationFailed(object,string)");

    if (Push::_onRegistrationFailed_ != NULL)
        uPtr(Push::_onRegistrationFailed_)->RaiseAsync(uArray::Init<uObject*>(::TYPES[5/*object[]*/], 1, message));
}

// public static void OnRegistrationSucceeded(object sender, string message) [static] :231
void Push::OnRegistrationSucceeded(uObject* sender, uString* message)
{
    uStackFrame __("Fuse.PushNotifications.Push", "OnRegistrationSucceeded(object,string)");

    if (Push::_onRegistrationFailed_ != NULL)
        uPtr(Push::_onRegistrationSucceeded_)->RaiseAsync(uArray::Init<uObject*>(::TYPES[5/*object[]*/], 1, message));
}
// }

// /usr/local/share/uno/Packages/Fuse.PushNotifications/0.40.8/$.uno
// -----------------------------------------------------------------

// public static class PushNotify :14
// {
// static extern PushNotify() :17
static void PushNotify__cctor__fn(uType* __type)
{
    PushNotify::_pendingNotifications_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<string>*/]));
    ::g::Fuse::PushNotifications::AndroidImpl::add_ReceivedNotification(uDelegate::New(::TYPES[3/*Uno.EventHandler<string>*/], (void*)PushNotify__OnReceived_fn));
    ::g::Fuse::PushNotifications::AndroidImpl::add_RegistrationFailed(uDelegate::New(::TYPES[3/*Uno.EventHandler<string>*/], (void*)PushNotify__OnRegistrationFailed_fn));
    ::g::Fuse::PushNotifications::AndroidImpl::add_RegistrationSucceeded(uDelegate::New(::TYPES[3/*Uno.EventHandler<string>*/], (void*)PushNotify__OnRegistrationSucceeded_fn));
    ::g::Fuse::PushNotifications::AndroidImpl::Init();
}

static void PushNotify_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[3] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof());
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

// public static extern void ClearAllNotifications() :140
void PushNotify__ClearAllNotifications_fn()
{
    PushNotify::ClearAllNotifications();
}

// public static extern void ClearBadgeNumber() :130
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

// public static extern void ClearAllNotifications() [static] :140
void PushNotify::ClearAllNotifications()
{
    uStackFrame __("Fuse.PushNotifications.PushNotify", "ClearAllNotifications()");
    PushNotify_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ClearAllNotifications291", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static extern void ClearBadgeNumber() [static] :130
void PushNotify::ClearBadgeNumber()
{
    PushNotify_typeof()->Init();
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
    PushNotify::_receivedNotification1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PushNotify::_receivedNotification1(), value), ::TYPES[3/*Uno.EventHandler<string>*/]);
}

// private static generated void remove__receivedNotification(Uno.EventHandler<string> value) [static] :72
void PushNotify::remove__receivedNotification(uDelegate* value)
{
    uStackFrame __("Fuse.PushNotifications.PushNotify", "remove__receivedNotification(Uno.EventHandler<string>)");
    PushNotify_typeof()->Init();
    PushNotify::_receivedNotification1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PushNotify::_receivedNotification1(), value), ::TYPES[3/*Uno.EventHandler<string>*/]);
}

// private static generated void add__registrationFailed(Uno.EventHandler<string> value) [static] :71
void PushNotify::add__registrationFailed(uDelegate* value)
{
    uStackFrame __("Fuse.PushNotifications.PushNotify", "add__registrationFailed(Uno.EventHandler<string>)");
    PushNotify_typeof()->Init();
    PushNotify::_registrationFailed1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PushNotify::_registrationFailed1(), value), ::TYPES[3/*Uno.EventHandler<string>*/]);
}

// private static generated void remove__registrationFailed(Uno.EventHandler<string> value) [static] :71
void PushNotify::remove__registrationFailed(uDelegate* value)
{
    uStackFrame __("Fuse.PushNotifications.PushNotify", "remove__registrationFailed(Uno.EventHandler<string>)");
    PushNotify_typeof()->Init();
    PushNotify::_registrationFailed1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PushNotify::_registrationFailed1(), value), ::TYPES[3/*Uno.EventHandler<string>*/]);
}

// private static generated void add__registrationSucceeded(Uno.EventHandler<string> value) [static] :70
void PushNotify::add__registrationSucceeded(uDelegate* value)
{
    uStackFrame __("Fuse.PushNotifications.PushNotify", "add__registrationSucceeded(Uno.EventHandler<string>)");
    PushNotify_typeof()->Init();
    PushNotify::_registrationSucceeded1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PushNotify::_registrationSucceeded1(), value), ::TYPES[3/*Uno.EventHandler<string>*/]);
}

// private static generated void remove__registrationSucceeded(Uno.EventHandler<string> value) [static] :70
void PushNotify::remove__registrationSucceeded(uDelegate* value)
{
    uStackFrame __("Fuse.PushNotifications.PushNotify", "remove__registrationSucceeded(Uno.EventHandler<string>)");
    PushNotify_typeof()->Init();
    PushNotify::_registrationSucceeded1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PushNotify::_registrationSucceeded1(), value), ::TYPES[3/*Uno.EventHandler<string>*/]);
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
