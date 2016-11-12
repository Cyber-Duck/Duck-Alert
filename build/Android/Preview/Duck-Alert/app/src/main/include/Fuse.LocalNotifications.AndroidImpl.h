// This file was generated based on /usr/local/share/uno/Packages/Fuse.LocalNotifications/0.40.8/android/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace LocalNotifications{struct AndroidImpl;}}}

namespace g{
namespace Fuse{
namespace LocalNotifications{

// internal static extern class AndroidImpl :33
// {
uClassType* AndroidImpl_typeof();
void AndroidImpl__Init_fn();
void AndroidImpl__JInit_fn();
void AndroidImpl__Later_fn(uString* title, uString* body, bool* sound, uString* strPayload, int* delaySeconds);
void AndroidImpl__NextID_fn(int* __retval);
void AndroidImpl__NoteInteractivity_fn(bool* isItInteractive);
void AndroidImpl__NotificationRecieved_fn(uString* payload);
void AndroidImpl__OnEnteringInteractive_fn(int* newState);
void AndroidImpl__OnExitedInteractive_fn(int* newState);

struct AndroidImpl : uObject
{
    static bool _init_;
    static bool& _init() { return AndroidImpl_typeof()->Init(), _init_; }
    static uSStrong<uString*> ACTION_;
    static uSStrong<uString*>& ACTION() { return AndroidImpl_typeof()->Init(), ACTION_; }
    static int ID_;
    static int& ID() { return AndroidImpl_typeof()->Init(), ID_; }

    static void Init();
    static void JInit();
    static void Later(uString* title, uString* body, bool sound, uString* strPayload, int delaySeconds);
    static int NextID();
    static void NoteInteractivity(bool isItInteractive);
    static void NotificationRecieved(uString* payload);
    static void OnEnteringInteractive(int newState);
    static void OnExitedInteractive(int newState);
};
// }

}}} // ::g::Fuse::LocalNotifications
