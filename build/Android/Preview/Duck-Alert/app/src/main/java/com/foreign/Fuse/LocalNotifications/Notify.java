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

public class Notify
{
    static void debug_log(Object message)
    {
        android.util.Log.d("DuckAlert", (message==null ? "null" : message.toString()));
    }

    public static void ClearAllNotifications296()
    {
        android.app.Activity activity = com.fuse.Activity.getRootActivity();
        			android.app.NotificationManager nMgr = (android.app.NotificationManager)activity.getSystemService(android.content.Context.NOTIFICATION_SERVICE);
        			nMgr.cancelAll();
    }
    
}
