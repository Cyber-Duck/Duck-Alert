[Uno.Compiler.UxGenerated]
public partial class MainView: Fuse.App
{
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
        var temp = new Fuse.Reactive.FuseJS.TimerModule();
        var temp1 = new Fuse.Reactive.FuseJS.Http();
        var temp2 = new Fuse.Triggers.BusyTaskModule();
        var temp3 = new Fuse.FileSystem.FileSystemModule();
        var temp4 = new Fuse.Storage.StorageModule();
        var temp5 = new Fuse.PushNotifications.Push();
        var temp6 = new Fuse.LocalNotifications.LocalNotify();
        var temp7 = new Polyfills.Window.WindowModule();
        var temp8 = new FuseJS.Globals();
        var temp9 = new FuseJS.Lifecycle();
        var temp10 = new FuseJS.Environment();
        var temp11 = new FuseJS.Base64();
        var temp12 = new FuseJS.Bundle();
        var temp13 = new FuseJS.FileReaderImpl();
        var temp14 = new FuseJS.UserEvents();
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp15 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp16 = new Fuse.Controls.StackPanel();
        var temp17 = new Fuse.Controls.Text();
        var temp18 = new Fuse.Controls.Text();
        var temp19 = new Fuse.Controls.Text();
        var temp20 = new Fuse.Controls.Button();
        temp_eb0 = new Fuse.Reactive.EventBinding("checkSetTimeout");
        temp15.LineNumber = 2;
        temp15.FileName = "MainView.ux";
        temp15.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../app.js"));
        temp16.Alignment = Fuse.Elements.Alignment.Center;
        temp16.Children.Add(temp17);
        temp16.Children.Add(temp18);
        temp16.Children.Add(temp19);
        temp16.Children.Add(temp20);
        temp17.Value = "Fail Count: {failCount}";
        temp18.Value = "Total Count: {totalCount}";
        temp19.Value = "Server Status: {status}";
        temp20.Text = "Check website";
        global::Fuse.Gestures.Clicked.AddHandler(temp20, temp_eb0.OnEvent);
        temp20.Bindings.Add(temp_eb0);
        __g_nametable.This = this;
        this.Children.Add(temp15);
        this.Children.Add(temp16);
    }
}
