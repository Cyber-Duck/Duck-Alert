// This file was generated based on /usr/local/share/uno/Packages/Fuse.PushNotifications/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace PushNotifications{struct PushNotify;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace PushNotifications{

// public static class PushNotify :14
// {
uClassType* PushNotify_typeof();
void PushNotify__add__receivedNotification_fn(uDelegate* value);
void PushNotify__remove__receivedNotification_fn(uDelegate* value);
void PushNotify__add__registrationFailed_fn(uDelegate* value);
void PushNotify__remove__registrationFailed_fn(uDelegate* value);
void PushNotify__add__registrationSucceeded_fn(uDelegate* value);
void PushNotify__remove__registrationSucceeded_fn(uDelegate* value);
void PushNotify__ClearAllNotifications_fn();
void PushNotify__ClearBadgeNumber_fn();
void PushNotify__OnReceived_fn(uObject* sender, uString* message);
void PushNotify__OnRegistrationFailed_fn(uObject* sender, uString* message);
void PushNotify__OnRegistrationSucceeded_fn(uObject* sender, uString* message);
void PushNotify__add_ReceivedNotification_fn(uDelegate* value);
void PushNotify__remove_ReceivedNotification_fn(uDelegate* value);
void PushNotify__add_RegistrationFailed_fn(uDelegate* value);
void PushNotify__remove_RegistrationFailed_fn(uDelegate* value);
void PushNotify__add_RegistrationSucceeded_fn(uDelegate* value);
void PushNotify__remove_RegistrationSucceeded_fn(uDelegate* value);

struct PushNotify : uObject
{
    static uSStrong<uString*> _pendingFailure_;
    static uSStrong<uString*>& _pendingFailure() { return PushNotify_typeof()->Init(), _pendingFailure_; }
    static uSStrong< ::g::Uno::Collections::List*> _pendingNotifications_;
    static uSStrong< ::g::Uno::Collections::List*>& _pendingNotifications() { return PushNotify_typeof()->Init(), _pendingNotifications_; }
    static uSStrong<uString*> _pendingSuccess_;
    static uSStrong<uString*>& _pendingSuccess() { return PushNotify_typeof()->Init(), _pendingSuccess_; }
    static uSStrong<uDelegate*> _receivedNotification1_;
    static uSStrong<uDelegate*>& _receivedNotification1() { return PushNotify_typeof()->Init(), _receivedNotification1_; }
    static uSStrong<uDelegate*> _registrationFailed1_;
    static uSStrong<uDelegate*>& _registrationFailed1() { return PushNotify_typeof()->Init(), _registrationFailed1_; }
    static uSStrong<uDelegate*> _registrationSucceeded1_;
    static uSStrong<uDelegate*>& _registrationSucceeded1() { return PushNotify_typeof()->Init(), _registrationSucceeded1_; }

    static void ClearAllNotifications();
    static void ClearBadgeNumber();
    static void OnReceived(uObject* sender, uString* message);
    static void OnRegistrationFailed(uObject* sender, uString* message);
    static void OnRegistrationSucceeded(uObject* sender, uString* message);
    static void add__receivedNotification(uDelegate* value);
    static void remove__receivedNotification(uDelegate* value);
    static void add__registrationFailed(uDelegate* value);
    static void remove__registrationFailed(uDelegate* value);
    static void add__registrationSucceeded(uDelegate* value);
    static void remove__registrationSucceeded(uDelegate* value);
    static void add_ReceivedNotification(uDelegate* value);
    static void remove_ReceivedNotification(uDelegate* value);
    static void add_RegistrationFailed(uDelegate* value);
    static void remove_RegistrationFailed(uDelegate* value);
    static void add_RegistrationSucceeded(uDelegate* value);
    static void remove_RegistrationSucceeded(uDelegate* value);
};
// }

}}} // ::g::Fuse::PushNotifications
