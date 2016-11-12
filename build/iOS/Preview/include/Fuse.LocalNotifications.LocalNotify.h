// This file was generated based on /usr/local/share/uno/Packages/Fuse.LocalNotifications/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace LocalNotifications{struct LocalNotify;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeEvent;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace LocalNotifications{

// public sealed class LocalNotify :137
// {
::g::Fuse::Scripting::NativeModule_type* LocalNotify_typeof();
void LocalNotify__ctor_2_fn(LocalNotify* __this);
void LocalNotify__ClearAllNotifications_fn(LocalNotify* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void LocalNotify__ClearBadgeNumber_fn(LocalNotify* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void LocalNotify__GetInt_fn(uObject* arg, uString* argName, int* __retval);
void LocalNotify__Later_fn(LocalNotify* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void LocalNotify__New2_fn(LocalNotify** __retval);
void LocalNotify__Now_fn(LocalNotify* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void LocalNotify__OnReceived_fn(uObject* sender, uString* message);

struct LocalNotify : ::g::Fuse::Scripting::NativeModule
{
    static uSStrong<LocalNotify*> _instance_;
    static uSStrong<LocalNotify*>& _instance() { return LocalNotify_typeof()->Init(), _instance_; }
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*> _onReceivedMessage_;
    static uSStrong< ::g::Fuse::Scripting::NativeEvent*>& _onReceivedMessage() { return LocalNotify_typeof()->Init(), _onReceivedMessage_; }
    static uSStrong< ::g::Uno::Collections::List*> _pendingNotifications_;
    static uSStrong< ::g::Uno::Collections::List*>& _pendingNotifications() { return LocalNotify_typeof()->Init(), _pendingNotifications_; }
    static bool _registered_;
    static bool& _registered() { return LocalNotify_typeof()->Init(), _registered_; }

    void ctor_2();
    uObject* ClearAllNotifications(::g::Fuse::Scripting::Context* context, uArray* args);
    uObject* ClearBadgeNumber(::g::Fuse::Scripting::Context* context, uArray* args);
    uObject* Later(::g::Fuse::Scripting::Context* context, uArray* args);
    uObject* Now(::g::Fuse::Scripting::Context* context, uArray* args);
    static int GetInt(uObject* arg, uString* argName);
    static LocalNotify* New2();
    static void OnReceived(uObject* sender, uString* message);
};
// }

}}} // ::g::Fuse::LocalNotifications
