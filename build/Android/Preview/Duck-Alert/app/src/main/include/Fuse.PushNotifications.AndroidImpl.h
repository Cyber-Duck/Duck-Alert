// This file was generated based on /usr/local/share/uno/Packages/Fuse.PushNotifications/0.40.8/android/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace PushNotifications{struct AndroidImpl;}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace PushNotifications{

// internal sealed extern class AndroidImpl :40
// {
uType* AndroidImpl_typeof();
void AndroidImpl__ctor__fn(AndroidImpl* __this);
void AndroidImpl__cacheBundle_fn(::g::Java::Object* _bundle);
void AndroidImpl__CheckPlayServices_fn(bool* __retval);
void AndroidImpl__GetPayloadFromBundle_fn(::g::Java::Object* _bundle, uString** __retval);
void AndroidImpl__getRegistrationIdError_fn(uString* message);
void AndroidImpl__getRegistrationIdSuccess_fn(uString* regid);
void AndroidImpl__Init_fn();
void AndroidImpl__JInit_fn();
void AndroidImpl__New1_fn(AndroidImpl** __retval);
void AndroidImpl__NoteInteractivity_fn(bool* isItInteractive);
void AndroidImpl__NotificationFromJson_fn(::g::Java::Object* listener, uString* _jsonStr, ::g::Java::Object* _bundle);
void AndroidImpl__OnEnteringInteractive_fn(int* newState);
void AndroidImpl__OnExitedInteractive_fn(int* newState);
void AndroidImpl__OnRecieve_fn(::g::Java::Object* bundle);
void AndroidImpl__add_ReceivedNotification_fn(uDelegate* value);
void AndroidImpl__remove_ReceivedNotification_fn(uDelegate* value);
void AndroidImpl__add_RegistrationFailed_fn(uDelegate* value);
void AndroidImpl__remove_RegistrationFailed_fn(uDelegate* value);
void AndroidImpl__add_RegistrationSucceeded_fn(uDelegate* value);
void AndroidImpl__remove_RegistrationSucceeded_fn(uDelegate* value);
void AndroidImpl__SpitOutNotification_fn(::g::Java::Object* _listener, uString* title, uString* body, uString* sound, ::g::Java::Object* _payload);

struct AndroidImpl : uObject
{
    static uSStrong< ::g::Uno::Collections::List*> _cachedMessages_;
    static uSStrong< ::g::Uno::Collections::List*>& _cachedMessages() { return AndroidImpl_typeof()->Init(), _cachedMessages_; }
    static bool _init_;
    static bool& _init() { return AndroidImpl_typeof()->Init(), _init_; }
    static uSStrong<uString*> _senderID_;
    static uSStrong<uString*>& _senderID() { return AndroidImpl_typeof()->Init(), _senderID_; }
    static int PLAY_SERVICES_RESOLUTION_REQUEST_;
    static int& PLAY_SERVICES_RESOLUTION_REQUEST() { return AndroidImpl_typeof()->Init(), PLAY_SERVICES_RESOLUTION_REQUEST_; }
    static uSStrong<uDelegate*> ReceivedNotification1_;
    static uSStrong<uDelegate*>& ReceivedNotification1() { return AndroidImpl_typeof()->Init(), ReceivedNotification1_; }
    static uSStrong<uDelegate*> RegistrationFailed1_;
    static uSStrong<uDelegate*>& RegistrationFailed1() { return AndroidImpl_typeof()->Init(), RegistrationFailed1_; }
    static uSStrong<uDelegate*> RegistrationSucceeded1_;
    static uSStrong<uDelegate*>& RegistrationSucceeded1() { return AndroidImpl_typeof()->Init(), RegistrationSucceeded1_; }

    void ctor_();
    static void cacheBundle(::g::Java::Object* _bundle);
    static bool CheckPlayServices();
    static uString* GetPayloadFromBundle(::g::Java::Object* _bundle);
    static void getRegistrationIdError(uString* message);
    static void getRegistrationIdSuccess(uString* regid);
    static void Init();
    static void JInit();
    static AndroidImpl* New1();
    static void NoteInteractivity(bool isItInteractive);
    static void NotificationFromJson(::g::Java::Object* listener, uString* _jsonStr, ::g::Java::Object* _bundle);
    static void OnEnteringInteractive(int newState);
    static void OnExitedInteractive(int newState);
    static void OnRecieve(::g::Java::Object* bundle);
    static void SpitOutNotification(::g::Java::Object* _listener, uString* title, uString* body, uString* sound, ::g::Java::Object* _payload);
    static void add_ReceivedNotification(uDelegate* value);
    static void remove_ReceivedNotification(uDelegate* value);
    static void add_RegistrationFailed(uDelegate* value);
    static void remove_RegistrationFailed(uDelegate* value);
    static void add_RegistrationSucceeded(uDelegate* value);
    static void remove_RegistrationSucceeded(uDelegate* value);
};
// }

}}} // ::g::Fuse::PushNotifications
