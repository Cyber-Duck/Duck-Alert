// This file was generated based on /usr/local/share/uno/Packages/Fuse.PushNotifications/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace PushNotifications{struct Push;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeEvent;}}}

namespace g{
namespace Fuse{
namespace PushNotifications{

// public sealed class Push :184
// {
::g::Fuse::Scripting::NativeModule_type* Push_typeof();
void Push__ctor_2_fn(Push* __this);
void Push__ClearAllNotifications_fn(Push* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void Push__ClearBadgeNumber_fn(Push* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void Push__New2_fn(Push** __retval);
void Push__OnReceivedNotification_fn(uObject* sender, uString* message);
void Push__OnRegistrationFailed_fn(uObject* sender, uString* message);
void Push__OnRegistrationSucceeded_fn(uObject* sender, uString* message);

struct Push : ::g::Fuse::Scripting::NativeModule
{
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*> _onReceivedMessage_;
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*>& _onReceivedMessage() { return _onReceivedMessage_; }
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*> _onRegistrationFailed_;
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*>& _onRegistrationFailed() { return _onRegistrationFailed_; }
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*> _onRegistrationSucceeded_;
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*>& _onRegistrationSucceeded() { return _onRegistrationSucceeded_; }
    static bool _unoEventsRegistered_;
    static bool& _unoEventsRegistered() { return _unoEventsRegistered_; }

    void ctor_2();
    uObject* ClearAllNotifications(::g::Fuse::Scripting::Context* context, uArray* args);
    uObject* ClearBadgeNumber(::g::Fuse::Scripting::Context* context, uArray* args);
    static Push* New2();
    static void OnReceivedNotification(uObject* sender, uString* message);
    static void OnRegistrationFailed(uObject* sender, uString* message);
    static void OnRegistrationSucceeded(uObject* sender, uString* message);
};
// }

}}} // ::g::Fuse::PushNotifications
