[Uno.Compiler.UxGenerated]
public partial class MainView: Fuse.App
{
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    internal Fuse.Reactive.EventBinding temp_eb0;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
    };
    static MainView()
    {
    }
    [global::Uno.UX.UXConstructor]
    public MainView()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp2 = new Fuse.Reactive.FuseJS.TimerModule();
        var temp3 = new Fuse.Reactive.FuseJS.Http();
        var temp4 = new Fuse.Triggers.BusyTaskModule();
        var temp5 = new Fuse.FileSystem.FileSystemModule();
        var temp6 = new Fuse.Storage.StorageModule();
        var temp7 = new Fuse.PushNotifications.Push();
        var temp8 = new Fuse.LocalNotifications.LocalNotify();
        var temp9 = new Polyfills.Window.WindowModule();
        var temp10 = new FuseJS.Globals();
        var temp11 = new FuseJS.Lifecycle();
        var temp12 = new FuseJS.Environment();
        var temp13 = new FuseJS.Base64();
        var temp14 = new FuseJS.Bundle();
        var temp15 = new FuseJS.FileReaderImpl();
        var temp16 = new FuseJS.UserEvents();
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new Fuse.Controls.Text();
        temp_Value_inst = new DuckAlert_FuseControlsText_Value_Property(temp, __selector0);
        var temp1 = new Fuse.Controls.Text();
        temp1_Value_inst = new DuckAlert_FuseControlsText_Value_Property(temp1, __selector0);
        var temp17 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp18 = new Fuse.Controls.StackPanel();
        var temp19 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "count");
        var temp20 = new Fuse.Reactive.DataBinding<string>(temp1_Value_inst, "status");
        var temp21 = new Fuse.Controls.Button();
        temp_eb0 = new Fuse.Reactive.EventBinding("checkInterval");
        temp17.LineNumber = 2;
        temp17.FileName = "MainView.ux";
        temp17.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../app.js"));
        temp18.Alignment = Fuse.Elements.Alignment.Center;
        temp18.Children.Add(temp);
        temp18.Children.Add(temp1);
        temp18.Children.Add(temp21);
        temp.Bindings.Add(temp19);
        temp1.Bindings.Add(temp20);
        temp21.Text = "Trigger Change Function";
        global::Fuse.Gestures.Clicked.AddHandler(temp21, temp_eb0.OnEvent);
        temp21.Bindings.Add(temp_eb0);
        __g_nametable.This = this;
        this.Children.Add(temp17);
        this.Children.Add(temp18);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
}
