package com.foreign.Fuse.LocalNotifications;

// fuse defined imports
import com.uno.UnoObject;
import com.uno.BoolArray;
import com.uno.ByteArray;
import com.uno.CharArray;
import com.uno.DoubleArray;
import com.uno.FloatArray;
import com.uno.IntArray;
import com.uno.LongArray;
import com.uno.ObjectArray;
import com.uno.ShortArray;
import com.uno.StringArray;
import com.Bindings.UnoHelper;
import com.Bindings.UnoWrapped;
import com.Bindings.ExternedBlockHost;

// user defined imports
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.app.Activity;
import android.app.AlarmManager;
import android.app.Notification;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.content.res.Resources;
import android.graphics.BitmapFactory;
import android.graphics.Color;
import android.media.RingtoneManager;
import android.net.Uri;
import android.os.Build;
import android.util.Log;

public class AndroidImpl
{
    static void debug_log(Object message)
    {
        android.util.Log.d("DuckAlert", (message==null ? "null" : message.toString()));
    }

    public static void JInit()
    {
        com.fuse.Activity.subscribeToIntents(
                        new com.fuse.Activity.IntentListener() {
                            public void onIntent (Intent newIntent) {
                                String title = newIntent.getStringExtra("title");
                                String body = newIntent.getStringExtra("bbody");
                                String payload = newIntent.getStringExtra(ExternedBlockHost.callUno_Fuse_LocalNotifications_AndroidImpl_ACTIONGet292());
                                String result = "{ 'title': '" + title + "', 'body': '" + body + "', 'payload': '" + payload + "' }";
                                ExternedBlockHost.callUno_Fuse_LocalNotifications_AndroidImpl_NotificationRecieved293((String)result);
                            }
                        },
                        ExternedBlockHost.callUno_Fuse_LocalNotifications_AndroidImpl_ACTIONGet292());
    }
    
    public static void Later294(final String title,final String body,final boolean sound,final String strPayload,final int delaySeconds)
    {
        android.app.Activity currentActivity = com.fuse.Activity.getRootActivity();
                    android.app.AlarmManager alarmManager =
                        (android.app.AlarmManager)currentActivity.getSystemService(android.content.Context.ALARM_SERVICE);
                    android.app.NotificationManager notificationManager =
                        (android.app.NotificationManager)currentActivity.getSystemService(android.content.Context.NOTIFICATION_SERVICE);
                    android.content.Intent intent =
                        new android.content.Intent(currentActivity, com.fuse.LocalNotifications.LocalNotificationReceiver.class);
        
                    int id = ExternedBlockHost.callUno_Fuse_LocalNotifications_AndroidImpl_NextID295();
        
                    intent.putExtra("id", id);
                    intent.putExtra("title", title);
                    intent.putExtra("body", body);
                    intent.putExtra("sound", sound);
                    intent.putExtra(ExternedBlockHost.callUno_Fuse_LocalNotifications_AndroidImpl_ACTIONGet292(), strPayload.toString());
        
                    alarmManager.set(0, System.currentTimeMillis() + (delaySeconds * 1000),
                                     android.app.PendingIntent.getBroadcast(currentActivity, id, intent, 0));
    }
    
    public static void NoteInteractivity(final boolean isItInteractive)
    {
        com.fuse.LocalNotifications.LocalNotificationReceiver.InForeground = isItInteractive;
    }
    
    public static void OnNotificationRecieved(final Object _context,final Object _intent)
    {
        // Have to have a copy of ACTION here as this code will run BEFORE the app is started
                    String ACTION = "com.fuse.LocalNotifications.strPayload";
                    Context context = (Context)_context;
                    Intent intent = (Intent)_intent;
        
                    String title = intent.getStringExtra("title");
                    String body = intent.getStringExtra("body");
                    boolean sound = (boolean)intent.getBooleanExtra("sound", false);
                    String payload = intent.getStringExtra(ACTION);
                    int id = intent.getIntExtra("id", 0);
        
                    if (com.fuse.LocalNotifications.LocalNotificationReceiver.InForeground)
                    {
                        String result = "{ 'title': '" + title + "', 'body': '" + body + "', 'payload': '" + payload + "' }";
                        ExternedBlockHost.callUno_Fuse_LocalNotifications_AndroidImpl_NotificationRecieved293((String)result);
                    } else {
                        Intent notificationIntent = new Intent(context, com.apps.duckalert.DuckAlert.class);
                        notificationIntent.addFlags(Intent.FLAG_ACTIVITY_CLEAR_TOP);
                        notificationIntent.setAction(ACTION);
                        notificationIntent.replaceExtras(intent.getExtras());
        
                        PendingIntent contentIntent = PendingIntent.getActivity(context, 0, notificationIntent, 0);
                        Notification.Builder notificationBuilder = new Notification.Builder(context)
                            .setSmallIcon(com.apps.duckalert.R.mipmap.notif)
                            .setContentTitle(title)
                            .setContentText(body)
                            .setWhen(System.currentTimeMillis())
                            .setAutoCancel(true)
                            .setVibrate(new long[] { 1000L, 1000L })
                            .setContentIntent(contentIntent);
        
                        if(sound)
                        {
                            Uri defaultSoundUri = RingtoneManager.getDefaultUri(RingtoneManager.TYPE_NOTIFICATION);
                            notificationBuilder.setSound(defaultSoundUri);
                        }
        
                        NotificationManager notificationManager =
                            (NotificationManager)context.getSystemService(Context.NOTIFICATION_SERVICE);
                        Notification n = notificationBuilder.build();
                        if (sound)
                            n.defaults |= Notification.DEFAULT_SOUND;
                        n.defaults |= Notification.DEFAULT_LIGHTS;
                        n.defaults |= Notification.DEFAULT_VIBRATE;
                        notificationManager.notify(id, n);
                    }
    }
    
}
