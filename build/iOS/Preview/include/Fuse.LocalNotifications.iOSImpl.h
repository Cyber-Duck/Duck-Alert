// This file was generated based on /usr/local/share/uno/Packages/Fuse.LocalNotifications/0.40.8/ios/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace LocalNotifications{struct iOSImpl;}}}

namespace g{
namespace Fuse{
namespace LocalNotifications{

// internal static extern class iOSImpl :15
// {
uClassType* iOSImpl_typeof();
void iOSImpl__Later_fn(uString* title, uString* body, bool* sound, uString* strPayload, int* delaySeconds, int* badgeNumber);

struct iOSImpl : uObject
{
    static void Later(uString* title, uString* body, bool sound, uString* strPayload, int delaySeconds, int badgeNumber);
};
// }

}}} // ::g::Fuse::LocalNotifications
