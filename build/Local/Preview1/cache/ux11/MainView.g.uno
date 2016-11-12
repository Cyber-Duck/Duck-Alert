[Uno.Compiler.UxGenerated]
public partial class MainView: Fuse.App
{
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
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
        var temp3 = new Fuse.Reactive.FuseJS.TimerModule();
        var temp4 = new Fuse.Reactive.FuseJS.Http();
        var temp5 = new Fuse.Triggers.BusyTaskModule();
        var temp6 = new Fuse.FileSystem.FileSystemModule();
        var temp7 = new Fuse.Storage.StorageModule();
        var temp8 = new Fuse.PushNotifications.Push();
        var temp9 = new Fuse.LocalNotifications.LocalNotify();
        var temp10 = new Polyfills.Window.WindowModule();
        var temp11 = new FuseJS.Globals();
        var temp12 = new FuseJS.Lifecycle();
        var temp13 = new FuseJS.Environment();
        var temp14 = new FuseJS.Base64();
        var temp15 = new FuseJS.Bundle();
        var temp16 = new FuseJS.FileReaderImpl();
        var temp17 = new FuseJS.UserEvents();
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new Fuse.Controls.Text();
        temp_Value_inst = new DuckAlert_FuseControlsText_Value_Property(temp, __selector0);
        var temp1 = new Fuse.Controls.Text();
        temp1_Value_inst = new DuckAlert_FuseControlsText_Value_Property(temp1, __selector0);
        var temp2 = new Fuse.Controls.Text();
        temp2_Value_inst = new DuckAlert_FuseControlsText_Value_Property(temp2, __selector0);
        var temp18 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp19 = new Fuse.Controls.StackPanel();
        var temp20 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "failCount");
        var temp21 = new Fuse.Reactive.DataBinding<string>(temp1_Value_inst, "totalCount");
        var temp22 = new Fuse.Reactive.DataBinding<string>(temp2_Value_inst, "status");
        var temp23 = new Fuse.Controls.Button();
        temp_eb0 = new Fuse.Reactive.EventBinding("checkSetTimeout");
        temp18.LineNumber = 2;
        temp18.FileName = "MainView.ux";
        temp18.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../app.js"));
        temp19.Alignment = Fuse.Elements.Alignment.Center;
        temp19.Children.Add(temp);
        temp19.Children.Add(temp1);
        temp19.Children.Add(temp2);
        temp19.Children.Add(temp23);
        temp.Bindings.Add(temp20);
        temp1.Bindings.Add(temp21);
        temp2.Bindings.Add(temp22);
        temp23.Text = "Check website";
        global::Fuse.Gestures.Clicked.AddHandler(temp23, temp_eb0.OnEvent);
        temp23.Bindings.Add(temp_eb0);
        __g_nametable.This = this;
        this.Children.Add(temp18);
        this.Children.Add(temp19);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
}
