// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Preview.ISelection.h>
#include <Fuse.Preview.SelectionManager.h>
#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Object.h>
#include <Uno.String.h>
static uType* TYPES[2];

namespace g{
namespace Fuse{
namespace Preview{

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public abstract interface ISelection :9436
// {
uInterfaceType* ISelection_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Preview.ISelection", 0, 0);
    type->Reflection.SetFunctions(2,
        new uFunction("IsPropertySelected", NULL, NULL, offsetof(ISelection, fp_IsPropertySelected), false, ::g::Uno::Bool_typeof(), 2, uObject_typeof(), ::g::Uno::String_typeof()),
        new uFunction("IsSelected", NULL, NULL, offsetof(ISelection, fp_IsSelected), false, ::g::Uno::Bool_typeof(), 1, uObject_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public static class SelectionManager :9415
// {
static void SelectionManager_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Preview::ISelection_typeof();
    ::TYPES[1] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof());
    type->SetFields(0,
        ::g::Fuse::Preview::ISelection_typeof(), (uintptr_t)&::g::Fuse::Preview::SelectionManager::_Selection_, uFieldFlagsStatic,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof()), (uintptr_t)&::g::Fuse::Preview::SelectionManager::SelectionChanged1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(5,
        new uFunction("IsSelected", NULL, (void*)SelectionManager__IsSelected_fn, 0, true, ::g::Uno::Bool_typeof(), 1, uObject_typeof()),
        new uFunction("get_Selection", NULL, (void*)SelectionManager__get_Selection_fn, 0, true, ::g::Fuse::Preview::ISelection_typeof(), 0),
        new uFunction("add_SelectionChanged", NULL, (void*)SelectionManager__add_SelectionChanged_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof())),
        new uFunction("remove_SelectionChanged", NULL, (void*)SelectionManager__remove_SelectionChanged_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof())),
        new uFunction("SetSelection", NULL, (void*)SelectionManager__SetSelection_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Preview::ISelection_typeof()));
}

uClassType* SelectionManager_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Preview.SelectionManager", options);
    type->fp_build_ = SelectionManager_build;
    return type;
}

// public static bool IsSelected(object obj) :9428
void SelectionManager__IsSelected_fn(uObject* obj, bool* __retval)
{
    *__retval = SelectionManager::IsSelected(obj);
}

// public static generated Fuse.Preview.ISelection get_Selection() :9417
void SelectionManager__get_Selection_fn(uObject** __retval)
{
    *__retval = SelectionManager::Selection();
}

// private static generated void set_Selection(Fuse.Preview.ISelection value) :9417
void SelectionManager__set_Selection_fn(uObject* value)
{
    SelectionManager::Selection(value);
}

// public static generated void add_SelectionChanged(Uno.EventHandler<Uno.EventArgs> value) :9418
void SelectionManager__add_SelectionChanged_fn(uDelegate* value)
{
    SelectionManager::add_SelectionChanged(value);
}

// public static generated void remove_SelectionChanged(Uno.EventHandler<Uno.EventArgs> value) :9418
void SelectionManager__remove_SelectionChanged_fn(uDelegate* value)
{
    SelectionManager::remove_SelectionChanged(value);
}

// public static void SetSelection(Fuse.Preview.ISelection selection) :9420
void SelectionManager__SetSelection_fn(uObject* selection)
{
    SelectionManager::SetSelection(selection);
}

uSStrong<uObject*> SelectionManager::_Selection_;
uSStrong<uDelegate*> SelectionManager::SelectionChanged1_;

// public static bool IsSelected(object obj) [static] :9428
bool SelectionManager::IsSelected(uObject* obj)
{
    uStackFrame __("Fuse.Preview.SelectionManager", "IsSelected(object)");

    if (SelectionManager::Selection() != NULL)
        return ::g::Fuse::Preview::ISelection::IsSelected(uInterface(uPtr(SelectionManager::Selection()), ::TYPES[0/*Fuse.Preview.ISelection*/]), obj);

    return false;
}

// public static void SetSelection(Fuse.Preview.ISelection selection) [static] :9420
void SelectionManager::SetSelection(uObject* selection)
{
    uStackFrame __("Fuse.Preview.SelectionManager", "SetSelection(Fuse.Preview.ISelection)");
    SelectionManager::Selection(selection);
    uDelegate* handler = SelectionManager::SelectionChanged1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, NULL, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// public static generated Fuse.Preview.ISelection get_Selection() [static] :9417
uObject* SelectionManager::Selection()
{
    uStackFrame __("Fuse.Preview.SelectionManager", "get_Selection()");
    return SelectionManager::_Selection_;
}

// private static generated void set_Selection(Fuse.Preview.ISelection value) [static] :9417
void SelectionManager::Selection(uObject* value)
{
    uStackFrame __("Fuse.Preview.SelectionManager", "set_Selection(Fuse.Preview.ISelection)");
    SelectionManager::_Selection_ = value;
}

// public static generated void add_SelectionChanged(Uno.EventHandler<Uno.EventArgs> value) [static] :9418
void SelectionManager::add_SelectionChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Preview.SelectionManager", "add_SelectionChanged(Uno.EventHandler<Uno.EventArgs>)");
    SelectionManager::SelectionChanged1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(SelectionManager::SelectionChanged1_, value), ::TYPES[1/*Uno.EventHandler<Uno.EventArgs>*/]);
}

// public static generated void remove_SelectionChanged(Uno.EventHandler<Uno.EventArgs> value) [static] :9418
void SelectionManager::remove_SelectionChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Preview.SelectionManager", "remove_SelectionChanged(Uno.EventHandler<Uno.EventArgs>)");
    SelectionManager::SelectionChanged1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(SelectionManager::SelectionChanged1_, value), ::TYPES[1/*Uno.EventHandler<Uno.EventArgs>*/]);
}
// }

}}} // ::g::Fuse::Preview
