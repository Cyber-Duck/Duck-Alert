// This file was generated based on /usr/local/share/uno/Packages/Fuse.LocalNotifications/0.40.8/ios/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.LocalNotifications.iOSImpl.h>
#include <Uno.Bool.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Fuse{
namespace LocalNotifications{

// internal static extern class iOSImpl :15
// {
static void iOSImpl_build(uType* type)
{
}

uClassType* iOSImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.LocalNotifications.iOSImpl", options);
    type->fp_build_ = iOSImpl_build;
    return type;
}

// internal static void Later(string title, string body, bool sound, string strPayload, [int delaySeconds], [int badgeNumber]) :18
void iOSImpl__Later_fn(uString* title, uString* body, bool* sound, uString* strPayload, int* delaySeconds, int* badgeNumber)
{
    iOSImpl::Later(title, body, *sound, strPayload, *delaySeconds, *badgeNumber);
}

// internal static void Later(string title, string body, bool sound, string strPayload, [int delaySeconds], [int badgeNumber]) [static] :18
void iOSImpl::Later(uString* title, uString* body, bool sound, uString* strPayload, int delaySeconds, int badgeNumber)
{
    uStackFrame __("Fuse.LocalNotifications.iOSImpl", "Later(string,string,bool,string,[int],[int])");
    @autoreleasepool
    {
        [] (::NSString* title, ::NSString* body, bool sound, ::NSString* strPayload, int delaySeconds, int badgeNumber) -> void
        {
            UILocalNotification *notification = [[UILocalNotification alloc] init];
                        notification.fireDate = [NSDate dateWithTimeIntervalSinceNow:delaySeconds];
                        notification.alertAction = title;
                        notification.alertBody = body;
                        notification.timeZone = [NSTimeZone defaultTimeZone];
                        if (sound)
                            notification.soundName = UILocalNotificationDefaultSoundName;
                        notification.applicationIconBadgeNumber = badgeNumber;
                        notification.userInfo = [[NSDictionary alloc] initWithObjectsAndKeys:
                                                 strPayload, @"payload", nil];
            
                        [[UIApplication sharedApplication] scheduleLocalNotification:notification];
        } (::uObjC::NativeString(title), ::uObjC::NativeString(body), sound, ::uObjC::NativeString(strPayload), delaySeconds, badgeNumber);
        
    }
    
}
// }

}}} // ::g::Fuse::LocalNotifications
