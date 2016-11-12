package com.foreign.Fuse.PushNotifications;

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
import android.app.Activity;
import android.os.AsyncTask;
import android.app.Notification;
import android.content.Context;
import android.content.Intent;
import android.content.res.Resources;
import android.media.RingtoneManager;
import android.net.Uri;
import android.os.Bundle;
import android.support.v4.app.NotificationCompat;
import com.fuse.PushNotifications.PushNotificationReceiver;
import com.google.android.gms.gcm.GcmListenerService;
import com.google.android.gms.gcm.GoogleCloudMessaging;
import com.google.android.gms.common.ConnectionResult;
import com.google.android.gms.common.GooglePlayServicesUtil;
import java.util.ArrayList;
import java.util.HashMap;
import org.json.JSONException;
import org.json.JSONObject;

public class AndroidImpl
{
    static void debug_log(Object message)
    {
        android.util.Log.d("DuckAlert", (message==null ? "null" : message.toString()));
    }

    public static void cacheBundle279(final Object _bundle)
    {
        Bundle bundle = (Bundle)_bundle;
        			PushNotificationReceiver._cachedBundles.add(bundle);
    }
    
    public static boolean CheckPlayServices280()
    {
        Activity activity = com.fuse.Activity.getRootActivity();
        			int resultCode = GooglePlayServicesUtil.isGooglePlayServicesAvailable(activity);
        			if (resultCode != ConnectionResult.SUCCESS) {
        				if (GooglePlayServicesUtil.isUserRecoverableError(resultCode)) {
        					GooglePlayServicesUtil.getErrorDialog(resultCode, activity, ExternedBlockHost.callUno_Fuse_PushNotifications_AndroidImpl_PLAY_SERVICES_RESOLUTION_REQUESTGet281()).show();
        				} else {
        					debug_log("This device is not supported.");
        				}
        				return false;
        			}
        			return true;
    }
    
    public static String GetPayloadFromBundle282(final Object _bundle)
    {
        Bundle bundle = (Bundle)_bundle;
        			HashMap<String,Object> result = new HashMap<String, Object>();
        			for (String key : bundle.keySet()) {
        				Object item = bundle.get(key);
        				/* Only map simple serializable primitive items */
        				if (item!=null && (
        						item instanceof String ||
        						item instanceof Long ||
        						item instanceof Integer ||
        						item instanceof Boolean ||
        						item instanceof Double
        					)) {
        					result.put(key, item);
        				}
        			}
        			JSONObject resultJson = new JSONObject(result);
        			String finalPayload = resultJson.toString();
        			return finalPayload;
    }
    
    public static void JInit283()
    {
        // Set up vars and hook into fuse intent listeners
        			com.fuse.Activity.subscribeToIntents(
        				new com.fuse.Activity.IntentListener() {
        					public void onIntent (Intent newIntent) {
        						ExternedBlockHost.callUno_Fuse_PushNotifications_AndroidImpl_OnRecieve284((Object)newIntent.getExtras(),UnoHelper.GetUnoObjectRef((Object)newIntent.getExtras()));
        					}
        				},
        				PushNotificationReceiver.ACTION);
        
        			// Set up GCM
        			final String senderID = ExternedBlockHost.callUno_Fuse_PushNotifications_AndroidImpl__senderIDGet285();
        			final Activity activity = com.fuse.Activity.getRootActivity();
        			activity.runOnUiThread(new Runnable() {
        					@Override
        						public void run() {
        						// Check device for Play Services APK. If check succeeds, proceed with GCM registration.
        						if (com.foreign.Fuse.PushNotifications.AndroidImpl.CheckPlayServices280()) {
        							GoogleCloudMessaging _gcm = GoogleCloudMessaging.getInstance(activity);
        							if (_gcm == null) {
        								_gcm = GoogleCloudMessaging.getInstance(activity.getApplicationContext());
        							}
        							final GoogleCloudMessaging gcm = _gcm;
        							new AsyncTask<Void, Void, String>() {
        								@Override protected String doInBackground(Void... params) {
        									String msg = "";
        									try {
        										String _regID = gcm.register(senderID);
        										ExternedBlockHost.callUno_Fuse_PushNotifications_AndroidImpl_getRegistrationIdSuccess286((String)_regID);
        										return "Device registered, registration ID=" + _regID;
        									} catch (java.io.IOException ex) {
        										msg = "Error :" + ex.getMessage();
        										ExternedBlockHost.callUno_Fuse_PushNotifications_AndroidImpl_getRegistrationIdError287((String)msg);
        										return msg;
        									}
        								}
        								@Override protected void onPostExecute(String msg) {}
        							}.execute();
        						} else {
        							debug_log("No valid Google Play Services APK found.");
        						}
        					}
        				});
    }
    
    public static void NoteInteractivity288(final boolean isItInteractive)
    {
        PushNotificationReceiver.InForeground = isItInteractive;
        			ArrayList<Bundle> bundles = PushNotificationReceiver._cachedBundles;
        			if (isItInteractive && bundles!=null && bundles.size()>0) {
        				for (Bundle bundle : bundles)
        					ExternedBlockHost.callUno_Fuse_PushNotifications_AndroidImpl_OnRecieve284((Object)bundle,UnoHelper.GetUnoObjectRef((Object)bundle));
        				bundles.clear();
        			}
    }
    
    public static void NotificationFromJson289(final Object listener,final String _jsonStr,final Object _bundle)
    {
        JSONObject json = null;
        			try { json = (_jsonStr==null) ? null : new JSONObject(_jsonStr); } catch (JSONException e) {}
        
        			Bundle bundle = (Bundle)_bundle;
        
        			Object alertObj = json.opt("alert");
        
        			if (alertObj == null) {
        				com.foreign.Fuse.PushNotifications.AndroidImpl.cacheBundle279(bundle);
        				return;
        			}
        
        			Class cls = alertObj.getClass();
        
        			if (cls == String.class) {
        				String s = (String)alertObj;
        				com.foreign.Fuse.PushNotifications.AndroidImpl.SpitOutNotification290(listener, s, "", json.optString("sound"), bundle);
        			} else {
        				JSONObject alert = (JSONObject)alertObj;
        				if (alertObj!=null) {
        					com.foreign.Fuse.PushNotifications.AndroidImpl.SpitOutNotification290(listener, alert.optString("title"), alert.optString("body"), alert.optString("sound"), bundle);
        				}
        			}
    }
    
    public static void OnNotificationRecieved(final Object listener,final String from,final Object _bundle)
    {
        final Bundle bundle = (Bundle)_bundle;
        
        			if (!PushNotificationReceiver.InForeground) {
        				String notification = bundle.getString("notification");
        				String aps = bundle.getString("aps");
        				if (notification != null) {
        					// using the google style 'notification' subtree
        					com.foreign.Fuse.PushNotifications.AndroidImpl.NotificationFromJson289(listener, notification, bundle);
        				} else if (aps != null) {
        					// using the apple style 'aps' subtree
        					com.foreign.Fuse.PushNotifications.AndroidImpl.NotificationFromJson289(listener, aps, bundle);
        				} else {
        					com.foreign.Fuse.PushNotifications.AndroidImpl.cacheBundle279(bundle);
        				}
        			} else {
        				ExternedBlockHost.callUno_Fuse_PushNotifications_AndroidImpl_OnRecieve284((Object)bundle,UnoHelper.GetUnoObjectRef((Object)bundle));
        			}
    }
    
    public static void SpitOutNotification290(final Object _listener,final String title,final String body,final String sound,final Object _payload)
    {
        Context context = (Context)_listener;
        			Bundle payload = (Bundle)_payload;
        			Intent intent = new Intent(context, com.apps.duckalert.DuckAlert.class);
        			intent.addFlags(Intent.FLAG_ACTIVITY_CLEAR_TOP);
        			intent.setAction(PushNotificationReceiver.ACTION);
        			intent.replaceExtras(payload);
        			android.app.PendingIntent pendingIntent =
        				android.app.PendingIntent.getActivity(context, 0, intent, android.app.PendingIntent.FLAG_ONE_SHOT);
        
        
        			NotificationCompat.Builder notificationBuilder = new NotificationCompat.Builder(context)
        				.setSmallIcon(com.apps.duckalert.R.mipmap.notif)
        				.setContentTitle(title)
        				.setContentText(body)
        				.setAutoCancel(true)
        				.setContentIntent(pendingIntent);
        
        			if (sound=="default")
        			{
        				Uri defaultSoundUri= RingtoneManager.getDefaultUri(RingtoneManager.TYPE_NOTIFICATION);
        				notificationBuilder.setSound(defaultSoundUri);
        			}
        
        			android.app.NotificationManager notificationManager = (android.app.NotificationManager)context.getSystemService(Context.NOTIFICATION_SERVICE);
        			Notification n = notificationBuilder.build();
        			if (sound!="")
        				n.defaults |= Notification.DEFAULT_SOUND;
        			n.defaults |= Notification.DEFAULT_LIGHTS;
        			n.defaults |= Notification.DEFAULT_VIBRATE;
        
        			int id = PushNotificationReceiver.nextID();
        
        			notificationManager.notify(id, n);
    }
    
}
