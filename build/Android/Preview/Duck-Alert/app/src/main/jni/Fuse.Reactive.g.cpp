// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Binding.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.NameRegistry.h>
#include <Fuse.Node.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Reactive.AnyChangeObserver.h>
#include <Fuse.Reactive.BindAttempt.h>
#include <Fuse.Reactive.BindingTypes.h>
#include <Fuse.Reactive.Case.h>
#include <Fuse.Reactive.Closure.h>
#include <Fuse.Reactive.ClosureArgs.h>
#include <Fuse.Reactive.ClosureHandler.h>
#include <Fuse.Reactive.Console.h>
#include <Fuse.Reactive.ContextBinding.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.DataToResourceBinding-1.h>
#include <Fuse.Reactive.DebugLog.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.EventBinding.CallClosure.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.FuseJS.Builtins.h>
#include <Fuse.Reactive.Instance.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.JavaScript.EvaluateDataContext.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Reactive.Match.h>
#include <Fuse.Reactive.PathObserver.h>
#include <Fuse.Reactive.PropertyBinding.h>
#include <Fuse.Reactive.ReadDataBinding-1.h>
#include <Fuse.Reactive.ReadPropertyBinding.h>
#include <Fuse.Reactive.RootableScriptModule.h>
#include <Fuse.Reactive.SegmentObserver.h>
#include <Fuse.Reactive.Select.h>
#include <Fuse.Reactive.SnapshotPropertyBinding.h>
#include <Fuse.Reactive.ThreadWorker.Closure-1.h>
#include <Fuse.Reactive.ThreadWorker.Flag.h>
#include <Fuse.Reactive.ThreadWorker.h>
#include <Fuse.Reactive.WhileCount.h>
#include <Fuse.Reactive.WhileEmpty.h>
#include <Fuse.Reactive.WhileNotEmpty.h>
#include <Fuse.Reactive.With.h>
#include <Fuse.Reactive.WriteDataBinding-1.h>
#include <Fuse.Reactive.WritePropertyBinding.h>
#include <Fuse.Resources.ResourceRegistry.h>
#include <Fuse.Scripting.Array.h>
#include <Fuse.Scripting.ArrayMirror.h>
#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.ClassInstance.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.IEventSerializer.h>
#include <Fuse.Scripting.IScriptEvent.h>
#include <Fuse.Scripting.ListMirror.h>
#include <Fuse.Scripting.Marshal.h>
#include <Fuse.Scripting.Module.h>
#include <Fuse.Scripting.ModuleResult.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ObjectMirror.h>
#include <Fuse.Scripting.Observable.h>
#include <Fuse.Scripting.Observable.Subscription.h>
#include <Fuse.Scripting.ScriptException.h>
#include <Fuse.Scripting.ScriptModule.h>
#include <Fuse.Scripting.V8.Context.h>
#include <Fuse.Scripting.ValueMirror.h>
#include <Fuse.Triggers.WhileFailed.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Fuse.WrapException.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Application.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.ObservableList-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Platform.Window.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.Threading.ConcurrentQueue-1.h>
#include <Uno.Threading.LockGuard.h>
#include <Uno.Threading.ManualResetEvent.h>
#include <Uno.Threading.Mutex.h>
#include <Uno.Threading.Thread.h>
#include <Uno.Type.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.IValueConvertible.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Size2.h>
#include <Uno.UX.Template.h>
#include <Uno.UX.Value.h>
static uString* STRINGS[61];
static uType* TYPES[58];

namespace g{
namespace Fuse{
namespace Reactive{

// /usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/subscription/$.uno
// ---------------------------------------------------------------------

// internal sealed class AnyChangeObserver :11
// {
static void AnyChangeObserver_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IObserver_typeof(), offsetof(AnyChangeObserver_type, interface0));
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Reactive::AnyChangeObserver, _anyChange), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::AnyChangeObserver, _hasInitialValue), 0);
}

AnyChangeObserver_type* AnyChangeObserver_typeof()
{
    static uSStrong<AnyChangeObserver_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(AnyChangeObserver);
    options.TypeSize = sizeof(AnyChangeObserver_type);
    type = (AnyChangeObserver_type*)uClassType::New("Fuse.Reactive.AnyChangeObserver", options);
    type->fp_build_ = AnyChangeObserver_build;
    type->interface0.fp_OnClear = (void(*)(uObject*))AnyChangeObserver__OnClear_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::ListMirror*))AnyChangeObserver__OnNewAll_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))AnyChangeObserver__OnNewAt_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))AnyChangeObserver__OnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))AnyChangeObserver__OnAdd_fn;
    type->interface0.fp_OnRemoveAt = (void(*)(uObject*, int*))AnyChangeObserver__OnRemoveAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))AnyChangeObserver__OnInsertAt_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))AnyChangeObserver__OnFailed_fn;
    return type;
}

// public AnyChangeObserver(Uno.Action anyChange) :16
void AnyChangeObserver__ctor__fn(AnyChangeObserver* __this, uDelegate* anyChange)
{
    __this->ctor_(anyChange);
}

// public AnyChangeObserver New(Uno.Action anyChange) :16
void AnyChangeObserver__New1_fn(uDelegate* anyChange, AnyChangeObserver** __retval)
{
    *__retval = AnyChangeObserver::New1(anyChange);
}

// public void OnAdd(object addedValue) :50
void AnyChangeObserver__OnAdd_fn(AnyChangeObserver* __this, uObject* addedValue)
{
    __this->OnAdd(addedValue);
}

// public void OnClear() :21
void AnyChangeObserver__OnClear_fn(AnyChangeObserver* __this)
{
    __this->OnClear();
}

// public void OnFailed(string message) :39
void AnyChangeObserver__OnFailed_fn(AnyChangeObserver* __this, uString* message)
{
    __this->OnFailed(message);
}

// public void OnInsertAt(int index, object value) :62
void AnyChangeObserver__OnInsertAt_fn(AnyChangeObserver* __this, int* index, uObject* value)
{
    __this->OnInsertAt(*index, value);
}

// public void OnNewAll(Fuse.Scripting.ListMirror values) :27
void AnyChangeObserver__OnNewAll_fn(AnyChangeObserver* __this, ::g::Fuse::Scripting::ListMirror* values)
{
    __this->OnNewAll(values);
}

// public void OnNewAt(int index, object newValue) :33
void AnyChangeObserver__OnNewAt_fn(AnyChangeObserver* __this, int* index, uObject* newValue)
{
    __this->OnNewAt(*index, newValue);
}

// public void OnRemoveAt(int index) :56
void AnyChangeObserver__OnRemoveAt_fn(AnyChangeObserver* __this, int* index)
{
    __this->OnRemoveAt(*index);
}

// public void OnSet(object value) :44
void AnyChangeObserver__OnSet_fn(AnyChangeObserver* __this, uObject* value)
{
    __this->OnSet(value);
}

// public AnyChangeObserver(Uno.Action anyChange) [instance] :16
void AnyChangeObserver::ctor_(uDelegate* anyChange)
{
    uStackFrame __("Fuse.Reactive.AnyChangeObserver", ".ctor(Uno.Action)");
    _anyChange = anyChange;
}

// public void OnAdd(object addedValue) [instance] :50
void AnyChangeObserver::OnAdd(uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.AnyChangeObserver", "OnAdd(object)");

    if (_hasInitialValue)
        uPtr(_anyChange)->InvokeVoid();

    _hasInitialValue = true;
}

// public void OnClear() [instance] :21
void AnyChangeObserver::OnClear()
{
    uStackFrame __("Fuse.Reactive.AnyChangeObserver", "OnClear()");

    if (_hasInitialValue)
        uPtr(_anyChange)->InvokeVoid();

    _hasInitialValue = true;
}

// public void OnFailed(string message) [instance] :39
void AnyChangeObserver::OnFailed(uString* message)
{
}

// public void OnInsertAt(int index, object value) [instance] :62
void AnyChangeObserver::OnInsertAt(int index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.AnyChangeObserver", "OnInsertAt(int,object)");

    if (_hasInitialValue)
        uPtr(_anyChange)->InvokeVoid();

    _hasInitialValue = true;
}

// public void OnNewAll(Fuse.Scripting.ListMirror values) [instance] :27
void AnyChangeObserver::OnNewAll(::g::Fuse::Scripting::ListMirror* values)
{
    uStackFrame __("Fuse.Reactive.AnyChangeObserver", "OnNewAll(Fuse.Scripting.ListMirror)");

    if (_hasInitialValue)
        uPtr(_anyChange)->InvokeVoid();

    _hasInitialValue = true;
}

// public void OnNewAt(int index, object newValue) [instance] :33
void AnyChangeObserver::OnNewAt(int index, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.AnyChangeObserver", "OnNewAt(int,object)");

    if (_hasInitialValue)
        uPtr(_anyChange)->InvokeVoid();

    _hasInitialValue = true;
}

// public void OnRemoveAt(int index) [instance] :56
void AnyChangeObserver::OnRemoveAt(int index)
{
    uStackFrame __("Fuse.Reactive.AnyChangeObserver", "OnRemoveAt(int)");

    if (_hasInitialValue)
        uPtr(_anyChange)->InvokeVoid();

    _hasInitialValue = true;
}

// public void OnSet(object value) [instance] :44
void AnyChangeObserver::OnSet(uObject* value)
{
    uStackFrame __("Fuse.Reactive.AnyChangeObserver", "OnSet(object)");

    if (_hasInitialValue)
        uPtr(_anyChange)->InvokeVoid();

    _hasInitialValue = true;
}

// public AnyChangeObserver New(Uno.Action anyChange) [static] :16
AnyChangeObserver* AnyChangeObserver::New1(uDelegate* anyChange)
{
    AnyChangeObserver* obj1 = (AnyChangeObserver*)uNew(AnyChangeObserver_typeof());
    obj1->ctor_(anyChange);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/subscription/$.uno
// ---------------------------------------------------------------------

// internal sealed class BindAttempt :125
// {
static void BindAttempt_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof());
    ::TYPES[1] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[2] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Reactive::SegmentObserver_typeof());
    ::TYPES[3] = ::g::Uno::EventHandler_typeof();
    ::TYPES[4] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Reactive::BindAttempt, _cur), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof()), offsetof(::g::Fuse::Reactive::BindAttempt, _currentData), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::BindAttempt, _currentDataPosition), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::BindAttempt, _isDisposed), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Reactive::BindAttempt, _observedNodes), 0,
        ::g::Fuse::Reactive::PathObserver_typeof(), offsetof(::g::Fuse::Reactive::BindAttempt, _po), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Reactive::SegmentObserver_typeof()), offsetof(::g::Fuse::Reactive::BindAttempt, _segmentObservers), 0);
}

uType* BindAttempt_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(BindAttempt);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.BindAttempt", options);
    type->fp_build_ = BindAttempt_build;
    return type;
}

// public BindAttempt(Fuse.Reactive.PathObserver po) :134
void BindAttempt__ctor__fn(BindAttempt* __this, ::g::Fuse::Reactive::PathObserver* po)
{
    __this->ctor_(po);
}

// public void Dispose() :206
void BindAttempt__Dispose_fn(BindAttempt* __this)
{
    __this->Dispose();
}

// internal void Fail() :187
void BindAttempt__Fail_fn(BindAttempt* __this)
{
    __this->Fail();
}

// private bool FindData() :162
void BindAttempt__FindData_fn(BindAttempt* __this, bool* __retval)
{
    *__retval = __this->FindData();
}

// private bool get_HasData() :159
void BindAttempt__get_HasData_fn(BindAttempt* __this, bool* __retval)
{
    *__retval = __this->HasData();
}

// public BindAttempt New(Fuse.Reactive.PathObserver po) :134
void BindAttempt__New1_fn(::g::Fuse::Reactive::PathObserver* po, BindAttempt** __retval)
{
    *__retval = BindAttempt::New1(po);
}

// private void OnDataContextChanged(object sender, Uno.EventArgs args) :199
void BindAttempt__OnDataContextChanged_fn(BindAttempt* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnDataContextChanged(sender, args);
}

// internal void Restart() :193
void BindAttempt__Restart_fn(BindAttempt* __this)
{
    __this->Restart();
}

// private object TakeData() :152
void BindAttempt__TakeData_fn(BindAttempt* __this, uObject** __retval)
{
    *__retval = __this->TakeData();
}

// private void TryBind() :141
void BindAttempt__TryBind_fn(BindAttempt* __this)
{
    __this->TryBind();
}

// public BindAttempt(Fuse.Reactive.PathObserver po) [instance] :134
void BindAttempt::ctor_(::g::Fuse::Reactive::PathObserver* po)
{
    uStackFrame __("Fuse.Reactive.BindAttempt", ".ctor(Fuse.Reactive.PathObserver)");
    _currentData = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<object>*/]));
    _observedNodes = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[1/*Uno.Collections.List<Fuse.Node>*/]));
    _segmentObservers = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[2/*Uno.Collections.List<Fuse.Reactive.SegmentObserver>*/]));
    _po = po;
    _cur = uPtr(po)->Node;
    TryBind();
}

// public void Dispose() [instance] :206
void BindAttempt::Dispose()
{
    uStackFrame __("Fuse.Reactive.BindAttempt", "Dispose()");
    ::g::Fuse::Reactive::SegmentObserver* ret2;
    ::g::Fuse::Node* ret3;

    if (_isDisposed)
        return;

    _isDisposed = true;

    for (int i = 0; i < uPtr(_segmentObservers)->Count(); i++)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_segmentObservers), uCRef<int>(i), &ret2), ret2))->Dispose();

    uPtr(_segmentObservers)->Clear();
    _segmentObservers = NULL;

    for (int i1 = 0; i1 < uPtr(_observedNodes)->Count(); i1++)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_observedNodes), uCRef<int>(i1), &ret3), ret3))->remove_DataContextChanged(uDelegate::New(::TYPES[3/*Uno.EventHandler*/], (void*)BindAttempt__OnDataContextChanged_fn, this));

    uPtr(_observedNodes)->Clear();
    _observedNodes = NULL;
    uPtr(_currentData)->Clear();
    _currentData = NULL;
}

// internal void Fail() [instance] :187
void BindAttempt::Fail()
{
    uStackFrame __("Fuse.Reactive.BindAttempt", "Fail()");

    if (_isDisposed)
        return;

    TryBind();
}

// private bool FindData() [instance] :162
bool BindAttempt::FindData()
{
    uStackFrame __("Fuse.Reactive.BindAttempt", "FindData()");

    if (HasData())
        return true;

    while (_cur != NULL)
    {
        uPtr(_currentData)->Clear();
        _currentDataPosition = 0;

        if (_cur != uPtr(_po)->Node)
            uPtr(_cur)->AppendSubtreeData(_currentData);

        if (uPtr(_cur)->ContextParent() != NULL)
            uPtr(uPtr(_cur)->ContextParent())->GetImplicitDataForChild(_cur, _currentData);

        ::g::Uno::Collections::List__Add_fn(uPtr(_observedNodes), _cur);
        uPtr(_cur)->add_DataContextChanged(uDelegate::New(::TYPES[3/*Uno.EventHandler*/], (void*)BindAttempt__OnDataContextChanged_fn, this));
        _cur = uPtr(_cur)->ContextParent();

        if (HasData())
            return true;
    }

    return false;
}

// private bool get_HasData() [instance] :159
bool BindAttempt::HasData()
{
    uStackFrame __("Fuse.Reactive.BindAttempt", "get_HasData()");
    return _currentDataPosition < uPtr(_currentData)->Count();
}

// private void OnDataContextChanged(object sender, Uno.EventArgs args) [instance] :199
void BindAttempt::OnDataContextChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Reactive.BindAttempt", "OnDataContextChanged(object,Uno.EventArgs)");
    Restart();
}

// internal void Restart() [instance] :193
void BindAttempt::Restart()
{
    uStackFrame __("Fuse.Reactive.BindAttempt", "Restart()");

    if (_isDisposed)
        return;

    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)::g::Fuse::Reactive::PathObserver__RestartBinding_fn, uPtr(_po)));
}

// private object TakeData() [instance] :152
uObject* BindAttempt::TakeData()
{
    uStackFrame __("Fuse.Reactive.BindAttempt", "TakeData()");
    uObject* ret4;
    return (::g::Uno::Collections::List__get_Item_fn(uPtr(_currentData), uCRef<int>(_currentDataPosition++), &ret4), ret4);
}

// private void TryBind() [instance] :141
void BindAttempt::TryBind()
{
    uStackFrame __("Fuse.Reactive.BindAttempt", "TryBind()");

    if (FindData())
    {
        uObject* data = TakeData();
        ::g::Fuse::Reactive::SegmentObserver* so = ::g::Fuse::Reactive::SegmentObserver::New1(uPtr(_po)->Binding, this);
        so->Init(data, uPtr(_po)->Path);
        ::g::Uno::Collections::List__Add_fn(uPtr(_segmentObservers), so);
    }
}

// public BindAttempt New(Fuse.Reactive.PathObserver po) [static] :134
BindAttempt* BindAttempt::New1(::g::Fuse::Reactive::PathObserver* po)
{
    BindAttempt* obj1 = (BindAttempt*)uNew(BindAttempt_typeof());
    obj1->ctor_(po);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/reactive/$.uno
// ------------------------------------------------------------

// internal static class BindingTypes :177
// {
static void BindingTypes_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Property binding between incompatible types: Cannot convert ");
    ::STRINGS[1] = uString::Const(" (");
    ::STRINGS[2] = uString::Const(") to ");
    ::STRINGS[3] = uString::Const(")");
    ::STRINGS[4] = uString::Const("/usr/local/share/uno/Packages/FuseCore/0.40.8/reactive/$.uno");
    ::STRINGS[5] = uString::Const("CheckCompatibility");
    ::TYPES[5] = ::g::Uno::Type_typeof();
}

uClassType* BindingTypes_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.BindingTypes", options);
    type->fp_build_ = BindingTypes_build;
    return type;
}

// public static bool CheckCompatibility(Uno.UX.Property source, Uno.UX.Property destination, object src) :179
void BindingTypes__CheckCompatibility_fn(::g::Uno::UX::Property* source, ::g::Uno::UX::Property* destination, uObject* src, bool* __retval)
{
    *__retval = BindingTypes::CheckCompatibility(source, destination, src);
}

// private static bool Implements(Uno.Type t, Uno.Type interf) :219
void BindingTypes__Implements_fn(uType* t, uType* interf, bool* __retval)
{
    *__retval = BindingTypes::Implements(t, interf);
}

// private static bool Inherits(Uno.Type t, Uno.Type baseClass) :229
void BindingTypes__Inherits_fn(uType* t, uType* baseClass, bool* __retval)
{
    *__retval = BindingTypes::Inherits(t, baseClass);
}

// public static bool IsCompatible(Uno.Type sourceType, Uno.Type destinationType) :190
void BindingTypes__IsCompatible_fn(uType* sourceType, uType* destinationType, bool* __retval)
{
    *__retval = BindingTypes::IsCompatible(sourceType, destinationType);
}

// private static bool IsUXValueCompatible(Uno.Type t) :198
void BindingTypes__IsUXValueCompatible_fn(uType* t, bool* __retval)
{
    *__retval = BindingTypes::IsUXValueCompatible(t);
}

// private static bool IsUXValueConvertible(Uno.Type t) :214
void BindingTypes__IsUXValueConvertible_fn(uType* t, bool* __retval)
{
    *__retval = BindingTypes::IsUXValueConvertible(t);
}

// public static bool CheckCompatibility(Uno.UX.Property source, Uno.UX.Property destination, object src) [static] :179
bool BindingTypes::CheckCompatibility(::g::Uno::UX::Property* source, ::g::Uno::UX::Property* destination, uObject* src)
{
    uStackFrame __("Fuse.Reactive.BindingTypes", "CheckCompatibility(Uno.UX.Property,Uno.UX.Property,object)");

    if (!BindingTypes::IsCompatible(uPtr(source)->PropertyType(), uPtr(destination)->PropertyType()))
    {
        ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[0/*"Property bi...*/], ::g::Uno::UX::Selector__op_Implicit1(uPtr(source)->Name())), ::STRINGS[1/*" ("*/]), uPtr(source)->PropertyType()), ::STRINGS[2/*") to "*/]), ::g::Uno::UX::Selector__op_Implicit1(uPtr(destination)->Name())), ::STRINGS[1/*" ("*/]), uPtr(destination)->PropertyType()), ::STRINGS[3/*")"*/]), src, ::STRINGS[4/*"/usr/local/...*/], 183, ::STRINGS[5/*"CheckCompat...*/]);
        return false;
    }

    return true;
}

// private static bool Implements(Uno.Type t, Uno.Type interf) [static] :219
bool BindingTypes::Implements(uType* t, uType* interf)
{
    uStackFrame __("Fuse.Reactive.BindingTypes", "Implements(Uno.Type,Uno.Type)");
    uArray* ifs = ::g::Uno::Type::GetInterfaces(uPtr(t));

    for (int i = 0; i < uPtr(ifs)->Length(); i++)
        if (::g::Uno::Type::op_Equality(uPtr(ifs)->Strong<uType*>(i), interf))
            return true;

    return false;
}

// private static bool Inherits(Uno.Type t, Uno.Type baseClass) [static] :229
bool BindingTypes::Inherits(uType* t, uType* baseClass)
{
    uStackFrame __("Fuse.Reactive.BindingTypes", "Inherits(Uno.Type,Uno.Type)");

    while (::g::Uno::Type::op_Inequality(t, NULL))
    {
        if (::g::Uno::Type::op_Equality(t, baseClass))
            return true;

        t = ::g::Uno::Type::BaseType(uPtr(t));
    }

    return false;
}

// public static bool IsCompatible(Uno.Type sourceType, Uno.Type destinationType) [static] :190
bool BindingTypes::IsCompatible(uType* sourceType, uType* destinationType)
{
    uStackFrame __("Fuse.Reactive.BindingTypes", "IsCompatible(Uno.Type,Uno.Type)");

    if ((BindingTypes::IsUXValueCompatible(sourceType) || BindingTypes::IsUXValueConvertible(sourceType)) && BindingTypes::IsUXValueCompatible(destinationType))
        return true;

    return BindingTypes::Inherits(sourceType, destinationType);
}

// private static bool IsUXValueCompatible(Uno.Type t) [static] :198
bool BindingTypes::IsUXValueCompatible(uType* t)
{
    uStackFrame __("Fuse.Reactive.BindingTypes", "IsUXValueCompatible(Uno.Type)");

    if (::g::Uno::Type::op_Equality(t, ::TYPES[17/*string*/]))
        return true;

    if (::g::Uno::Type::op_Equality(t, ::g::Uno::UX::Value_typeof()))
        return true;

    if (::g::Uno::Type::op_Equality(t, ::TYPES[23/*float*/]))
        return true;

    if (::g::Uno::Type::op_Equality(t, ::TYPES[16/*double*/]))
        return true;

    if (::g::Uno::Type::op_Equality(t, ::TYPES[22/*int*/]))
        return true;

    if (::g::Uno::Type::op_Equality(t, ::g::Uno::UX::Size_typeof()))
        return true;

    if (::g::Uno::Type::op_Equality(t, ::g::Uno::UX::Size2_typeof()))
        return true;

    if (::g::Uno::Type::op_Equality(t, ::g::Uno::Float2_typeof()))
        return true;

    if (::g::Uno::Type::op_Equality(t, ::g::Uno::Float3_typeof()))
        return true;

    if (::g::Uno::Type::op_Equality(t, ::g::Uno::Float4_typeof()))
        return true;

    return false;
}

// private static bool IsUXValueConvertible(Uno.Type t) [static] :214
bool BindingTypes::IsUXValueConvertible(uType* t)
{
    uStackFrame __("Fuse.Reactive.BindingTypes", "IsUXValueConvertible(Uno.Type)");
    return BindingTypes::Implements(t, ::g::Uno::UX::IValueConvertible_typeof());
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/$.uno
// --------------------------------------------------------

// private sealed class EventBinding.CallClosure :710
// {
static void EventBinding__CallClosure_build(uType* type)
{
    ::STRINGS[6] = uString::Const("node");
    ::STRINGS[7] = uString::Const("data");
    ::STRINGS[8] = uString::Const("sender");
    ::STRINGS[9] = uString::Const("JavaScript call error");
    ::STRINGS[10] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/$.uno");
    ::STRINGS[11] = uString::Const("Call");
    ::TYPES[6] = ::g::Fuse::Node_typeof();
    ::TYPES[7] = ::g::Fuse::Scripting::IScriptEvent_typeof();
    ::TYPES[8] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof());
    ::TYPES[9] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof());
    ::TYPES[10] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof());
    ::TYPES[11] = ::g::Fuse::Scripting::ScriptException_typeof();
    ::TYPES[12] = uObject_typeof()->Array();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IEventSerializer_typeof(), offsetof(EventBinding__CallClosure_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof()), offsetof(::g::Fuse::Reactive::EventBinding__CallClosure, _args), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::EventBinding__CallClosure, _data), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Reactive::EventBinding__CallClosure, _node), 0,
        ::g::Uno::UX::Selector_typeof(), offsetof(::g::Fuse::Reactive::EventBinding__CallClosure, _sender), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Reactive::EventBinding__CallClosure, Function), 0);
}

EventBinding__CallClosure_type* EventBinding__CallClosure_typeof()
{
    static uSStrong<EventBinding__CallClosure_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(EventBinding__CallClosure);
    options.TypeSize = sizeof(EventBinding__CallClosure_type);
    type = (EventBinding__CallClosure_type*)uClassType::New("Fuse.Reactive.EventBinding.CallClosure", options);
    type->fp_build_ = EventBinding__CallClosure_build;
    type->interface0.fp_AddString = (void(*)(uObject*, uString*, uString*))EventBinding__CallClosure__AddString_fn;
    type->interface0.fp_AddInt = (void(*)(uObject*, uString*, int*))EventBinding__CallClosure__AddInt_fn;
    type->interface0.fp_AddDouble = (void(*)(uObject*, uString*, double*))EventBinding__CallClosure__AddDouble_fn;
    type->interface0.fp_AddBool = (void(*)(uObject*, uString*, bool*))EventBinding__CallClosure__AddBool_fn;
    type->interface0.fp_AddObject = (void(*)(uObject*, uString*, uObject*))EventBinding__CallClosure__AddObject_fn;
    return type;
}

// public CallClosure(Fuse.Scripting.IScriptEvent args, object sender) :719
void EventBinding__CallClosure__ctor__fn(EventBinding__CallClosure* __this, uObject* args, uObject* sender)
{
    __this->ctor_(args, sender);
}

// public void AddBool(string key, bool value) :775
void EventBinding__CallClosure__AddBool_fn(EventBinding__CallClosure* __this, uString* key, bool* value)
{
    __this->AddBool(key, *value);
}

// public void AddDouble(string key, double value) :770
void EventBinding__CallClosure__AddDouble_fn(EventBinding__CallClosure* __this, uString* key, double* value)
{
    __this->AddDouble(key, *value);
}

// public void AddInt(string key, int value) :765
void EventBinding__CallClosure__AddInt_fn(EventBinding__CallClosure* __this, uString* key, int* value)
{
    __this->AddInt(key, *value);
}

// public void AddObject(string key, object value) :754
void EventBinding__CallClosure__AddObject_fn(EventBinding__CallClosure* __this, uString* key, uObject* value)
{
    __this->AddObject(key, value);
}

// public void AddString(string key, string value) :760
void EventBinding__CallClosure__AddString_fn(EventBinding__CallClosure* __this, uString* key, uString* value)
{
    __this->AddString(key, value);
}

// public void Call() :734
void EventBinding__CallClosure__Call_fn(EventBinding__CallClosure* __this)
{
    __this->Call();
}

// public CallClosure New(Fuse.Scripting.IScriptEvent args, object sender) :719
void EventBinding__CallClosure__New1_fn(uObject* args, uObject* sender, EventBinding__CallClosure** __retval)
{
    *__retval = EventBinding__CallClosure::New1(args, sender);
}

// public CallClosure(Fuse.Scripting.IScriptEvent args, object sender) [instance] :719
void EventBinding__CallClosure::ctor_(uObject* args, uObject* sender)
{
    uStackFrame __("Fuse.Reactive.EventBinding.CallClosure", ".ctor(Fuse.Scripting.IScriptEvent,object)");
    _node = uAs< ::g::Fuse::Node*>(sender, ::TYPES[6/*Fuse.Node*/]);

    if (_node != NULL)
    {
        _data = ::g::Fuse::Scripting::ValueMirror::Unbox(uPtr(_node)->GetFirstData());

        if (::g::Uno::String::op_Inequality(::g::Uno::UX::Selector__op_Implicit1(uPtr(_node)->Name()), NULL))
            _sender = uPtr(_node)->Name();
    }

    if (args != NULL)
        ::g::Fuse::Scripting::IScriptEvent::Serialize(uInterface(uPtr(args), ::TYPES[7/*Fuse.Scripting.IScriptEvent*/]), (uObject*)this);
}

// public void AddBool(string key, bool value) [instance] :775
void EventBinding__CallClosure::AddBool(uString* key, bool value)
{
    uStackFrame __("Fuse.Reactive.EventBinding.CallClosure", "AddBool(string,bool)");
    AddObject(key, uBox(::TYPES[13/*bool*/], value));
}

// public void AddDouble(string key, double value) [instance] :770
void EventBinding__CallClosure::AddDouble(uString* key, double value)
{
    uStackFrame __("Fuse.Reactive.EventBinding.CallClosure", "AddDouble(string,double)");
    AddObject(key, uBox(::TYPES[16/*double*/], value));
}

// public void AddInt(string key, int value) [instance] :765
void EventBinding__CallClosure::AddInt(uString* key, int value)
{
    uStackFrame __("Fuse.Reactive.EventBinding.CallClosure", "AddInt(string,int)");
    AddObject(key, uBox(::TYPES[16/*double*/], (double)value));
}

// public void AddObject(string key, object value) [instance] :754
void EventBinding__CallClosure::AddObject(uString* key, uObject* value)
{
    uStackFrame __("Fuse.Reactive.EventBinding.CallClosure", "AddObject(string,object)");

    if (_args == NULL)
        _args = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[8/*Uno.Collections.Dictionary<string, object>*/]));

    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_args), key, uPtr(uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Context())->Unwrap(value));
}

// public void AddString(string key, string value) [instance] :760
void EventBinding__CallClosure::AddString(uString* key, uString* value)
{
    uStackFrame __("Fuse.Reactive.EventBinding.CallClosure", "AddString(string,string)");
    AddObject(key, value);
}

// public void Call() [instance] :734
void EventBinding__CallClosure::Call()
{
    uStackFrame __("Fuse.Reactive.EventBinding.CallClosure", "Call()");
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > ret3;
    ::g::Fuse::Scripting::Object* obj = uPtr(uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Context())->NewObject();

    if (_node != NULL)
        uPtr(obj)->Item(::STRINGS[6/*"node"*/], uPtr(uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Context())->Unwrap(_node));

    if (_data != NULL)
        uPtr(obj)->Item(::STRINGS[7/*"data"*/], _data);

    if (::g::Uno::String::op_Inequality(::g::Uno::UX::Selector__op_Implicit1(_sender), NULL))
        uPtr(obj)->Item(::STRINGS[8/*"sender"*/], uBox(::TYPES[30/*Uno.UX.Selector*/], _sender));

    if (_args != NULL)

        for (::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_args), &ret3), ret3); enum1.MoveNext(::TYPES[9/*Uno.Collections.Dictionary<string, object>.Enumerator*/]); )
        {
            ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong<uObject*> > arg = enum1.Current(::TYPES[9/*Uno.Collections.Dictionary<string, object>.Enumerator*/]);
            uPtr(obj)->Item(arg.Key(::TYPES[10/*Uno.Collections.KeyValuePair<string, object>*/]), arg.Value(::TYPES[10/*Uno.Collections.KeyValuePair<string, object>*/]));
        }

    try
    {
        uPtr(Function)->Call(uArray::Init<uObject*>(::TYPES[12/*object[]*/], 1, obj));
    }
    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[11/*Fuse.Scripting.ScriptException*/]))
        {
            ::g::Fuse::Scripting::ScriptException* ex = (::g::Fuse::Scripting::ScriptException*)__t.Exception;
            ::g::Fuse::Diagnostics::UserScriptError(::STRINGS[9/*"JavaScript ...*/], ex, this, ::STRINGS[10/*"/usr/local/...*/], 750, ::STRINGS[11/*"Call"*/]);
        }
        else throw __t;
    }
}

// public CallClosure New(Fuse.Scripting.IScriptEvent args, object sender) [static] :719
EventBinding__CallClosure* EventBinding__CallClosure::New1(uObject* args, uObject* sender)
{
    EventBinding__CallClosure* obj2 = (EventBinding__CallClosure*)uNew(EventBinding__CallClosure_typeof());
    obj2->ctor_(args, sender);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/$.uno
// --------------------------------------------------------

// public sealed class Case :1761
// {
static void Case_build(uType* type)
{
    ::TYPES[13] = ::g::Uno::Bool_typeof();
    ::TYPES[14] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    ::TYPES[15] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    ::TYPES[16] = ::g::Uno::Double_typeof();
    ::TYPES[17] = ::g::Uno::String_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Template_typeof()), offsetof(::g::Fuse::Reactive::Case, _factories), 0,
        ::g::Fuse::Reactive::Match_typeof(), offsetof(::g::Fuse::Reactive::Case, _match), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Case, _value), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::Case, _IsDefault), 0);
    type->Reflection.SetFunctions(12,
        new uFunction("get_Bool", NULL, (void*)Case__get_Bool_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Bool", NULL, (void*)Case__set_Bool_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Factories", NULL, (void*)Case__get_Factories_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Template_typeof()), 0),
        new uFunction("get_IsDefault", NULL, (void*)Case__get_IsDefault_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsDefault", NULL, (void*)Case__set_IsDefault_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)Case__New1_fn, 0, true, Case_typeof(), 0),
        new uFunction("get_Number", NULL, (void*)Case__get_Number_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Number", NULL, (void*)Case__set_Number_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_String", NULL, (void*)Case__get_String_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_String", NULL, (void*)Case__set_String_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Value", NULL, (void*)Case__get_Value_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)Case__set_Value_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()));
}

uType* Case_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Case);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.Case", options);
    type->fp_build_ = Case_build;
    type->fp_ctor_ = (void*)Case__New1_fn;
    return type;
}

// public generated Case() :1761
void Case__ctor__fn(Case* __this)
{
    __this->ctor_();
}

// public bool get_Bool() :1802
void Case__get_Bool_fn(Case* __this, bool* __retval)
{
    *__retval = __this->Bool();
}

// public void set_Bool(bool value) :1803
void Case__set_Bool_fn(Case* __this, bool* value)
{
    __this->Bool(*value);
}

// public Uno.Collections.IList<Uno.UX.Template> get_Factories() :1822
void Case__get_Factories_fn(Case* __this, uObject** __retval)
{
    *__retval = __this->Factories();
}

// private void Invalidate() :1833
void Case__Invalidate_fn(Case* __this)
{
    __this->Invalidate();
}

// public generated bool get_IsDefault() :1810
void Case__get_IsDefault_fn(Case* __this, bool* __retval)
{
    *__retval = __this->IsDefault();
}

// public generated void set_IsDefault(bool value) :1811
void Case__set_IsDefault_fn(Case* __this, bool* value)
{
    __this->IsDefault(*value);
}

// public generated Case New() :1761
void Case__New1_fn(Case** __retval)
{
    *__retval = Case::New1();
}

// public double get_Number() :1794
void Case__get_Number_fn(Case* __this, double* __retval)
{
    *__retval = __this->Number();
}

// public void set_Number(double value) :1795
void Case__set_Number_fn(Case* __this, double* value)
{
    __this->Number(*value);
}

// private void OnFactoriesChanged(Uno.UX.Template f) :1828
void Case__OnFactoriesChanged_fn(Case* __this, ::g::Uno::UX::Template* f)
{
    __this->OnFactoriesChanged(f);
}

// public string get_String() :1786
void Case__get_String_fn(Case* __this, uString** __retval)
{
    *__retval = __this->String();
}

// public void set_String(string value) :1787
void Case__set_String_fn(Case* __this, uString* value)
{
    __this->String(value);
}

// public object get_Value() :1771
void Case__get_Value_fn(Case* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(object value) :1772
void Case__set_Value_fn(Case* __this, uObject* value)
{
    __this->Value(value);
}

// public generated Case() [instance] :1761
void Case::ctor_()
{
}

// public bool get_Bool() [instance] :1802
bool Case::Bool()
{
    uStackFrame __("Fuse.Reactive.Case", "get_Bool()");
    return uIs((uObject*)_value, ::TYPES[13/*bool*/]) ? uUnbox<bool>(::TYPES[13/*bool*/], _value) : false;
}

// public void set_Bool(bool value) [instance] :1803
void Case::Bool(bool value)
{
    uStackFrame __("Fuse.Reactive.Case", "set_Bool(bool)");
    Value(uBox(::TYPES[13/*bool*/], value));
}

// public Uno.Collections.IList<Uno.UX.Template> get_Factories() [instance] :1822
uObject* Case::Factories()
{
    uStackFrame __("Fuse.Reactive.Case", "get_Factories()");
    uObject* ind1 = _factories;
    return (ind1 != NULL) ? ind1 : (uObject*)(_factories = (uObject*)((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[14/*Uno.Collections.ObservableList<Uno.UX.Template>*/], uDelegate::New(::TYPES[15/*Uno.Action<Uno.UX.Template>*/], (void*)Case__OnFactoriesChanged_fn, this), uDelegate::New(::TYPES[15/*Uno.Action<Uno.UX.Template>*/], (void*)Case__OnFactoriesChanged_fn, this))));
}

// private void Invalidate() [instance] :1833
void Case::Invalidate()
{
    uStackFrame __("Fuse.Reactive.Case", "Invalidate()");

    if (_match != NULL)
        uPtr(_match)->Invalidate();
}

// public generated bool get_IsDefault() [instance] :1810
bool Case::IsDefault()
{
    uStackFrame __("Fuse.Reactive.Case", "get_IsDefault()");
    return _IsDefault;
}

// public generated void set_IsDefault(bool value) [instance] :1811
void Case::IsDefault(bool value)
{
    uStackFrame __("Fuse.Reactive.Case", "set_IsDefault(bool)");
    _IsDefault = value;
}

// public double get_Number() [instance] :1794
double Case::Number()
{
    uStackFrame __("Fuse.Reactive.Case", "get_Number()");
    return uIs((uObject*)_value, ::TYPES[16/*double*/]) ? uUnbox<double>(::TYPES[16/*double*/], _value) : 0.0;
}

// public void set_Number(double value) [instance] :1795
void Case::Number(double value)
{
    uStackFrame __("Fuse.Reactive.Case", "set_Number(double)");
    Value(uBox(::TYPES[16/*double*/], value));
}

// private void OnFactoriesChanged(Uno.UX.Template f) [instance] :1828
void Case::OnFactoriesChanged(::g::Uno::UX::Template* f)
{
    uStackFrame __("Fuse.Reactive.Case", "OnFactoriesChanged(Uno.UX.Template)");
    Invalidate();
}

// public string get_String() [instance] :1786
uString* Case::String()
{
    uStackFrame __("Fuse.Reactive.Case", "get_String()");
    return uAs<uString*>(_value, ::TYPES[17/*string*/]);
}

// public void set_String(string value) [instance] :1787
void Case::String(uString* value)
{
    uStackFrame __("Fuse.Reactive.Case", "set_String(string)");
    Value(value);
}

// public object get_Value() [instance] :1771
uObject* Case::Value()
{
    uStackFrame __("Fuse.Reactive.Case", "get_Value()");
    return _value;
}

// public void set_Value(object value) [instance] :1772
void Case::Value(uObject* value)
{
    uStackFrame __("Fuse.Reactive.Case", "set_Value(object)");

    if (_value != value)
    {
        _value = value;
        Invalidate();
    }
}

// public generated Case New() [static] :1761
Case* Case::New1()
{
    Case* obj2 = (Case*)uNew(Case_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/$.uno
// --------------------------------------------------------

// public sealed class Closure :81
// {
static void Closure_build(uType* type)
{
    ::TYPES[18] = ::g::Fuse::Reactive::ClosureHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface3));
    type->SetFields(13,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::Fuse::Reactive::Closure, _nameTable), 0,
        ::g::Fuse::Reactive::ClosureHandler_typeof(), offsetof(::g::Fuse::Reactive::Closure, _ready), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)Closure__New2_fn, 0, true, Closure_typeof(), 1, ::g::Uno::UX::NameTable_typeof()),
        new uFunction("add_Ready", NULL, (void*)Closure__add_Ready_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Reactive::ClosureHandler_typeof()),
        new uFunction("remove_Ready", NULL, (void*)Closure__remove_Ready_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Reactive::ClosureHandler_typeof()));
}

::g::Fuse::Node_type* Closure_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Node_typeof();
    options.FieldCount = 15;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Closure);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Reactive.Closure", options);
    type->fp_build_ = Closure_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Closure__OnRooted_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Closure(Uno.UX.NameTable nameTable) :86
void Closure__ctor_2_fn(Closure* __this, ::g::Uno::UX::NameTable* nameTable)
{
    __this->ctor_2(nameTable);
}

// public Closure New(Uno.UX.NameTable nameTable) :86
void Closure__New2_fn(::g::Uno::UX::NameTable* nameTable, Closure** __retval)
{
    *__retval = Closure::New2(nameTable);
}

// protected override sealed void OnRooted() :131
void Closure__OnRooted_fn(Closure* __this)
{
    uStackFrame __("Fuse.Reactive.Closure", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->ScheduleReady();
}

// public void add_Ready(Fuse.Reactive.ClosureHandler value) :118
void Closure__add_Ready_fn(Closure* __this, uDelegate* value)
{
    __this->add_Ready(value);
}

// public void remove_Ready(Fuse.Reactive.ClosureHandler value) :125
void Closure__remove_Ready_fn(Closure* __this, uDelegate* value)
{
    __this->remove_Ready(value);
}

// private void ScheduleReady() :137
void Closure__ScheduleReady_fn(Closure* __this)
{
    __this->ScheduleReady();
}

// public Closure(Uno.UX.NameTable nameTable) [instance] :86
void Closure::ctor_2(::g::Uno::UX::NameTable* nameTable)
{
    uStackFrame __("Fuse.Reactive.Closure", ".ctor(Uno.UX.NameTable)");
    ctor_1();
    _nameTable = nameTable;
}

// public void add_Ready(Fuse.Reactive.ClosureHandler value) [instance] :118
void Closure::add_Ready(uDelegate* value)
{
    uStackFrame __("Fuse.Reactive.Closure", "add_Ready(Fuse.Reactive.ClosureHandler)");

    if (IsRootingCompleted())
        ScheduleReady();

    _ready = uCast<uDelegate*>(::g::Uno::Delegate::Combine(_ready, value), ::TYPES[18/*Fuse.Reactive.ClosureHandler*/]);
}

// public void remove_Ready(Fuse.Reactive.ClosureHandler value) [instance] :125
void Closure::remove_Ready(uDelegate* value)
{
    uStackFrame __("Fuse.Reactive.Closure", "remove_Ready(Fuse.Reactive.ClosureHandler)");
    _ready = uCast<uDelegate*>(::g::Uno::Delegate::Remove(_ready, value), ::TYPES[18/*Fuse.Reactive.ClosureHandler*/]);
}

// private void ScheduleReady() [instance] :137
void Closure::ScheduleReady()
{
    uStackFrame __("Fuse.Reactive.Closure", "ScheduleReady()");

    if (::g::Uno::Delegate::op_Inequality(_ready, NULL))
        uPtr(_ready)->Invoke(2, this, (::g::Fuse::Reactive::ClosureArgs*)::g::Fuse::Reactive::ClosureArgs::New2(_nameTable));
}

// public Closure New(Uno.UX.NameTable nameTable) [static] :86
Closure* Closure::New2(::g::Uno::UX::NameTable* nameTable)
{
    Closure* obj1 = (Closure*)uNew(Closure_typeof());
    obj1->ctor_2(nameTable);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/$.uno
// --------------------------------------------------------

// private sealed class ThreadWorker.Closure<T> :2124
// {
static void ThreadWorker__Closure_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Reactive::ThreadWorker__Closure, _action), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* ThreadWorker__Closure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(ThreadWorker__Closure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.ThreadWorker.Closure`1", options);
    type->fp_build_ = ThreadWorker__Closure_build;
    return type;
}

// public Closure(Uno.Action<T> action, T arg) :2129
void ThreadWorker__Closure__ctor__fn(ThreadWorker__Closure* __this, uDelegate* action, void* arg)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker.Closure`1", ".ctor(Uno.Action<T>,T)");
    __this->_action = action;
    __this->_arg() = arg;
}

// public Closure New(Uno.Action<T> action, T arg) :2129
void ThreadWorker__Closure__New1_fn(uType* __type, uDelegate* action, void* arg, ThreadWorker__Closure** __retval)
{
    ThreadWorker__Closure* obj1 = (ThreadWorker__Closure*)uNew(__type);
    ThreadWorker__Closure__ctor__fn(obj1, action, arg);
    return *__retval = obj1, void();
}

// public void Run() :2135
void ThreadWorker__Closure__Run_fn(ThreadWorker__Closure* __this)
{
    __this->Run();
}

// public void Run() [instance] :2135
void ThreadWorker__Closure::Run()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker.Closure`1", "Run()");
    uPtr(_action)->InvokeVoid(_arg());
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/$.uno
// --------------------------------------------------------

// public sealed class ClosureArgs :49
// {
static void ClosureArgs_build(uType* type)
{
    ::TYPES[19] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof());
    ::TYPES[20] = ::g::Uno::Collections::IList_typeof()->MakeType(uObject_typeof());
    ::TYPES[21] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(ClosureArgs_type, interface0));
    type->SetFields(0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::Fuse::Reactive::ClosureArgs, _names), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Serialize", NULL, (void*)ClosureArgs__Serialize_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Scripting::IEventSerializer_typeof()));
}

ClosureArgs_type* ClosureArgs_typeof()
{
    static uSStrong<ClosureArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ClosureArgs);
    options.TypeSize = sizeof(ClosureArgs_type);
    type = (ClosureArgs_type*)uClassType::New("Fuse.Reactive.ClosureArgs", options);
    type->fp_build_ = ClosureArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))ClosureArgs__Serialize_fn;
    return type;
}

// internal ClosureArgs(Uno.UX.NameTable names) :53
void ClosureArgs__ctor_1_fn(ClosureArgs* __this, ::g::Uno::UX::NameTable* names)
{
    __this->ctor_1(names);
}

// internal ClosureArgs New(Uno.UX.NameTable names) :53
void ClosureArgs__New2_fn(::g::Uno::UX::NameTable* names, ClosureArgs** __retval)
{
    *__retval = ClosureArgs::New2(names);
}

// public void Serialize(Fuse.Scripting.IEventSerializer s) :58
void ClosureArgs__Serialize_fn(ClosureArgs* __this, uObject* s)
{
    __this->Serialize(s);
}

// internal ClosureArgs(Uno.UX.NameTable names) [instance] :53
void ClosureArgs::ctor_1(::g::Uno::UX::NameTable* names)
{
    uStackFrame __("Fuse.Reactive.ClosureArgs", ".ctor(Uno.UX.NameTable)");
    ctor_();
    _names = names;
}

// public void Serialize(Fuse.Scripting.IEventSerializer s) [instance] :58
void ClosureArgs::Serialize(uObject* s)
{
    uStackFrame __("Fuse.Reactive.ClosureArgs", "Serialize(Fuse.Scripting.IEventSerializer)");
    uObject* ret2;
    ::g::Uno::UX::NameTable* nt = _names;
    int o = (nt != NULL) ? ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(nt)->Objects()), ::TYPES[19/*Uno.Collections.ICollection<object>*/])) - 1 : 0;

    while (nt != NULL)
    {
        for (int e = uPtr(uPtr(nt)->Entries)->Length(); (e--) > 0; )
        {
            uString* name = uPtr(uPtr(nt)->Entries)->Strong<uString*>(e);
            uObject* obj = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(_names)->Objects()), ::TYPES[20/*Uno.Collections.IList<object>*/]), uCRef<int>(o--), &ret2), ret2);
            ::g::Fuse::Scripting::IEventSerializer::AddObject(uInterface(uPtr(s), ::TYPES[21/*Fuse.Scripting.IEventSerializer*/]), name, obj);
        }

        nt = uPtr(nt)->ParentTable;
    }
}

// internal ClosureArgs New(Uno.UX.NameTable names) [static] :53
ClosureArgs* ClosureArgs::New2(::g::Uno::UX::NameTable* names)
{
    ClosureArgs* obj1 = (ClosureArgs*)uNew(ClosureArgs_typeof());
    obj1->ctor_1(names);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/$.uno
// --------------------------------------------------------

// public delegate void ClosureHandler(object sender, Fuse.Reactive.ClosureArgs args) :76
uDelegateType* ClosureHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Reactive.ClosureHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Reactive::ClosureArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/fusejs/$.uno
// ---------------------------------------------------------------

// internal static class Console :91
// {
static void Console_build(uType* type)
{
    ::STRINGS[12] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/fusejs/$.uno");
    ::STRINGS[13] = uString::Const("null");
    ::STRINGS[14] = uString::Const("\"");
    ::STRINGS[15] = uString::Const("function");
    ::STRINGS[16] = uString::Const("Object");
    ::STRINGS[17] = uString::Const("");
    ::STRINGS[18] = uString::Const(": ");
    ::STRINGS[19] = uString::Const("Array[");
    ::STRINGS[20] = uString::Const("]");
    ::STRINGS[21] = uString::Const("  ");
    ::STRINGS[22] = uString::Const("log");
    ::STRINGS[23] = uString::Const("dir");
    ::STRINGS[24] = uString::Const("console");
    ::TYPES[22] = ::g::Uno::Int_typeof();
    ::TYPES[23] = ::g::Uno::Float_typeof();
    ::TYPES[16] = ::g::Uno::Double_typeof();
    ::TYPES[13] = ::g::Uno::Bool_typeof();
    ::TYPES[17] = ::g::Uno::String_typeof();
    ::TYPES[24] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[25] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[26] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[27] = ::g::Fuse::Scripting::Callback_typeof();
}

uClassType* Console_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.Console", options);
    type->fp_build_ = Console_build;
    return type;
}

// private static object Dir(object[] args) :112
void Console__Dir_fn(uArray* args, uObject** __retval)
{
    *__retval = Console::Dir(args);
}

// private static void Dir(Uno.Text.StringBuilder builder, object obj, [int maxDepth], [int indent]) :124
void Console__Dir1_fn(::g::Uno::Text::StringBuilder* builder, uObject* obj, int* maxDepth, int* indent)
{
    Console::Dir1(builder, obj, *maxDepth, *indent);
}

// private static void Indent(Uno.Text.StringBuilder builder, int indent) :193
void Console__Indent_fn(::g::Uno::Text::StringBuilder* builder, int* indent)
{
    Console::Indent(builder, *indent);
}

// public static void Init(Fuse.Scripting.Context c) :93
void Console__Init_fn(::g::Fuse::Scripting::Context* c)
{
    Console::Init(c);
}

// private static object Log(object[] args) :102
void Console__Log_fn(uArray* args, uObject** __retval)
{
    *__retval = Console::Log(args);
}

// private static object Dir(object[] args) [static] :112
uObject* Console::Dir(uArray* args)
{
    uStackFrame __("Fuse.Reactive.Console", "Dir(object[])");
    int maxDepth = 1;
    ::g::Uno::Text::StringBuilder* builder = ::g::Uno::Text::StringBuilder::New1();

    for (int i = 0; i < uPtr(args)->Length(); i++)
        Console::Dir1(builder, uPtr(args)->Strong<uObject*>(i), 1, 0);

    ::g::Uno::Diagnostics::Debug::Log5(builder->ToString(), 1, ::STRINGS[12/*"/usr/local/...*/], 120);
    return NULL;
}

// private static void Dir(Uno.Text.StringBuilder builder, object obj, [int maxDepth], [int indent]) [static] :124
void Console::Dir1(::g::Uno::Text::StringBuilder* builder, uObject* obj, int maxDepth, int indent)
{
    uStackFrame __("Fuse.Reactive.Console", "Dir(Uno.Text.StringBuilder,object,[int],[int])");
    uArray* array1;
    int index2;
    int length3;
    indent++;

    if (obj == NULL)
    {
        uPtr(builder)->AppendLine(::STRINGS[13/*"null"*/]);
        return;
    }

    if ((uIs(obj, ::TYPES[22/*int*/]) || uIs(obj, ::TYPES[23/*float*/])) || uIs(obj, ::TYPES[16/*double*/]))
    {
        uPtr(builder)->AppendLine(::g::Uno::Object::ToString(uPtr(obj)));
        return;
    }

    if (uIs(obj, ::TYPES[13/*bool*/]))
    {
        uPtr(builder)->AppendLine(::g::Uno::String::ToLower(uPtr(::g::Uno::Object::ToString(uPtr(obj)))));
        return;
    }

    if (uIs(obj, ::TYPES[17/*string*/]))
    {
        uPtr(builder)->AppendLine(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[14/*"\""*/], ::g::Uno::Object::ToString(uPtr(obj))), ::STRINGS[14/*"\""*/]));
        return;
    }

    if (uIs(obj, ::TYPES[24/*Fuse.Scripting.Function*/]))
    {
        uPtr(builder)->AppendLine(::STRINGS[15/*"function"*/]);
        return;
    }

    if (uIs(obj, ::TYPES[25/*Fuse.Scripting.Object*/]))
    {
        ::g::Fuse::Scripting::Object* o = uCast< ::g::Fuse::Scripting::Object*>(obj, ::TYPES[25/*Fuse.Scripting.Object*/]);
        uPtr(builder)->AppendLine(::STRINGS[16/*"Object"*/]);

        if (indent <= maxDepth)

            for (array1 = uPtr(o)->Keys(), index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
            {
                uString* k = uPtr(array1)->Strong<uString*>(index2);
                Console::Indent(builder, indent);
                uPtr(builder)->Append2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[17/*""*/], k), ::STRINGS[18/*": "*/]));
                Console::Dir1(builder, uPtr(o)->Item(k), maxDepth, indent);
            }

        return;
    }

    if (uIs(obj, ::TYPES[26/*Fuse.Scripting.Array*/]))
    {
        ::g::Fuse::Scripting::Array* a = uCast< ::g::Fuse::Scripting::Array*>(obj, ::TYPES[26/*Fuse.Scripting.Array*/]);
        uPtr(builder)->AppendLine(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[19/*"Array["*/], uBox<int>(::TYPES[22/*int*/], uPtr(a)->Length())), ::STRINGS[20/*"]"*/]));

        if (indent <= maxDepth)

            for (int i = 0; i < uPtr(a)->Length(); i++)
            {
                Console::Indent(builder, indent);
                uPtr(builder)->Append2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[17/*""*/], uBox<int>(::TYPES[22/*int*/], i)), ::STRINGS[18/*": "*/]));
                Console::Dir1(builder, uPtr(a)->Item(i), maxDepth, indent);
            }

        return;
    }

    uPtr(builder)->AppendLine(::g::Uno::Object::ToString(uPtr(obj)));
}

// private static void Indent(Uno.Text.StringBuilder builder, int indent) [static] :193
void Console::Indent(::g::Uno::Text::StringBuilder* builder, int indent)
{
    uStackFrame __("Fuse.Reactive.Console", "Indent(Uno.Text.StringBuilder,int)");

    for (int i = 0; i < indent; i++)
        uPtr(builder)->Append2(::STRINGS[21/*"  "*/]);
}

// public static void Init(Fuse.Scripting.Context c) [static] :93
void Console::Init(::g::Fuse::Scripting::Context* c)
{
    uStackFrame __("Fuse.Reactive.Console", "Init(Fuse.Scripting.Context)");
    ::g::Fuse::Scripting::Object* console = uPtr(c)->NewObject();
    uPtr(console)->Item(::STRINGS[22/*"log"*/], uDelegate::New(::TYPES[27/*Fuse.Scripting.Callback*/], (void*)Console__Log_fn));
    console->Item(::STRINGS[23/*"dir"*/], uDelegate::New(::TYPES[27/*Fuse.Scripting.Callback*/], (void*)Console__Dir_fn));
    uPtr(c->GlobalObject())->Item(::STRINGS[24/*"console"*/], console);
}

// private static object Log(object[] args) [static] :102
uObject* Console::Log(uArray* args)
{
    uStackFrame __("Fuse.Reactive.Console", "Log(object[])");

    for (int i = 0; i < uPtr(args)->Length(); i++)
        ::g::Uno::Diagnostics::Debug::Log5((uPtr(args)->Strong<uObject*>(i) != NULL) ? (uString*)::g::Uno::Object::ToString(uPtr(uPtr(args)->Strong<uObject*>(i))) : ::STRINGS[13/*"null"*/], 1, ::STRINGS[12/*"/usr/local/...*/], 106);

    return NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/$.uno
// --------------------------------------------------------

// public abstract class ContextBinding :8
// {
static void ContextBinding_build(uType* type)
{
    ::TYPES[28] = ::g::Uno::IDisposable_typeof();
    type->SetFields(1,
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::ContextBinding, _pathSubscription), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::ContextBinding, _Key), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("get_Key", NULL, (void*)ContextBinding__get_Key_fn, 0, false, ::g::Uno::String_typeof(), 0));
}

ContextBinding_type* ContextBinding_typeof()
{
    static uSStrong<ContextBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Binding_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ContextBinding);
    options.TypeSize = sizeof(ContextBinding_type);
    type = (ContextBinding_type*)uClassType::New("Fuse.Reactive.ContextBinding", options);
    type->fp_build_ = ContextBinding_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Binding*))ContextBinding__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Binding*))ContextBinding__OnUnrooted_fn;
    return type;
}

// protected ContextBinding(string key) :13
void ContextBinding__ctor_1_fn(ContextBinding* __this, uString* key)
{
    __this->ctor_1(key);
}

// public generated string get_Key() :11
void ContextBinding__get_Key_fn(ContextBinding* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(string value) :11
void ContextBinding__set_Key_fn(ContextBinding* __this, uString* value)
{
    __this->Key(value);
}

// protected override void OnRooted() :20
void ContextBinding__OnRooted_fn(ContextBinding* __this)
{
    uStackFrame __("Fuse.Reactive.ContextBinding", "OnRooted()");
    ::g::Fuse::Binding__OnRooted_fn(__this);
    __this->_pathSubscription = (uObject*)::g::Fuse::Reactive::PathObserver::New1(__this, __this->Parent(), __this->Key());
}

// protected override void OnUnrooted() :26
void ContextBinding__OnUnrooted_fn(ContextBinding* __this)
{
    uStackFrame __("Fuse.Reactive.ContextBinding", "OnUnrooted()");
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_pathSubscription), ::TYPES[28/*Uno.IDisposable*/]));
    __this->_pathSubscription = NULL;
    ::g::Fuse::Binding__OnUnrooted_fn(__this);
}

// protected ContextBinding(string key) [instance] :13
void ContextBinding::ctor_1(uString* key)
{
    uStackFrame __("Fuse.Reactive.ContextBinding", ".ctor(string)");
    ctor_();
    Key(key);
}

// public generated string get_Key() [instance] :11
uString* ContextBinding::Key()
{
    uStackFrame __("Fuse.Reactive.ContextBinding", "get_Key()");
    return _Key;
}

// private generated void set_Key(string value) [instance] :11
void ContextBinding::Key(uString* value)
{
    uStackFrame __("Fuse.Reactive.ContextBinding", "set_Key(string)");
    _Key = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/$.uno
// --------------------------------------------------------

// public class DataBinding<T> :178
// {
static void DataBinding_build(uType* type)
{
    ::STRINGS[25] = uString::Const("Cannot bind '");
    ::STRINGS[26] = uString::Const("' to property '");
    ::STRINGS[27] = uString::Const("'. The observable must contain exactly one ");
    ::STRINGS[28] = uString::Const(".");
    ::STRINGS[10] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/$.uno");
    ::STRINGS[29] = uString::Const("InvalidListOperation");
    ::STRINGS[30] = uString::Const("TryPushAsMarshalledValue");
    ::STRINGS[31] = uString::Const("number");
    ::STRINGS[32] = uString::Const("string");
    ::STRINGS[33] = uString::Const("value that can be converted to type ");
    ::TYPES[29] = ::g::Fuse::Scripting::Observable_typeof();
    ::TYPES[30] = ::g::Uno::UX::Selector_typeof();
    ::TYPES[17] = ::g::Uno::String_typeof();
    ::TYPES[31] = ::g::Fuse::Scripting::Marshal_typeof();
    ::TYPES[32] = ::g::Uno::Exception_typeof();
    ::TYPES[33] = ::g::Uno::Predicate_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[5] = ::g::Uno::Type_typeof();
    type->SetPrecalc(
        ::g::Fuse::Scripting::Marshal_typeof()->MakeMethod(1, type->T(0)));
    type->SetInterfaces(
        ::g::Fuse::Scripting::IObserver_typeof(), offsetof(DataBinding_type, interface0),
        ::g::Fuse::INameListener_typeof(), offsetof(DataBinding_type, interface1),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(DataBinding_type, interface2));
    type->SetFields(3,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::DataBinding, _currentValue), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::DataBinding, _read), 0,
        ::g::Fuse::Scripting::Observable__Subscription_typeof(), offsetof(::g::Fuse::Reactive::DataBinding, _subscription), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::DataBinding, _write), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Reactive::DataBinding, _Target), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", type, (void*)DataBinding__New1_fn, 0, true, type, 2, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0)), ::g::Uno::String_typeof()),
        new uFunction("get_Target", NULL, (void*)DataBinding__get_Target_fn, 0, false, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0)), 0));
}

DataBinding_type* DataBinding_typeof()
{
    static uSStrong<DataBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ContextBinding_typeof();
    options.FieldCount = 8;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(DataBinding);
    options.TypeSize = sizeof(DataBinding_type);
    type = (DataBinding_type*)uClassType::New("Fuse.Reactive.DataBinding`1", options);
    type->fp_build_ = DataBinding_build;
    type->fp_NewValue = (void(*)(::g::Fuse::Reactive::ContextBinding*, uObject*))DataBinding__NewValue_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Binding*))DataBinding__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Binding*))DataBinding__OnUnrooted_fn;
    type->fp_PushValue = DataBinding__PushValue_fn;
    type->interface0.fp_OnClear = (void(*)(uObject*))DataBinding__FuseScriptingIObserverOnClear_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))DataBinding__FuseScriptingIObserverOnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))DataBinding__FuseScriptingIObserverOnAdd_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))DataBinding__FuseScriptingIObserverOnNewAt_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))DataBinding__FuseScriptingIObserverOnFailed_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::ListMirror*))DataBinding__FuseScriptingIObserverOnNewAll_fn;
    type->interface0.fp_OnRemoveAt = (void(*)(uObject*, int*))DataBinding__FuseScriptingIObserverOnRemoveAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))DataBinding__FuseScriptingIObserverOnInsertAt_fn;
    type->interface1.fp_OnNameChanged = (void(*)(uObject*, ::g::Fuse::Node*, ::g::Uno::UX::Selector*))DataBinding__FuseINameListenerOnNameChanged_fn;
    type->interface2.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))DataBinding__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// public DataBinding(Uno.UX.Property<T> target, string key) :184
void DataBinding__ctor_2_fn(DataBinding* __this, ::g::Uno::UX::Property1* target, uString* key)
{
    __this->ctor_2(target, key);
}

// protected DataBinding(Uno.UX.Property<T> target, string key, bool read, bool write) :194
void DataBinding__ctor_3_fn(DataBinding* __this, ::g::Uno::UX::Property1* target, uString* key, bool* read, bool* write)
{
    __this->ctor_3(target, key, *read, *write);
}

// private static bool Acceptor(object obj) :379
void DataBinding__Acceptor_fn(uType* __type, uObject* obj, bool* __retval)
{
    *__retval = DataBinding::Acceptor(__type, obj);
}

// private void Fuse.INameListener.OnNameChanged(Fuse.Node obj, Uno.UX.Selector name) :277
void DataBinding__FuseINameListenerOnNameChanged_fn(DataBinding* __this, ::g::Fuse::Node* obj, ::g::Uno::UX::Selector* name)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.INameListener.OnNameChanged(Fuse.Node,Uno.UX.Selector)");
    __this->PushValue(__this->_currentValue);
}

// private void Fuse.Scripting.IObserver.OnAdd(object addedValue) :223
void DataBinding__FuseScriptingIObserverOnAdd_fn(DataBinding* __this, uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Scripting.IObserver.OnAdd(object)");
    __this->InvalidListOperation();
}

// private void Fuse.Scripting.IObserver.OnClear() :201
void DataBinding__FuseScriptingIObserverOnClear_fn(DataBinding* __this)
{
}

// private void Fuse.Scripting.IObserver.OnFailed(string message) :233
void DataBinding__FuseScriptingIObserverOnFailed_fn(DataBinding* __this, uString* message)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Scripting.IObserver.OnFailed(string)");
    __this->InvalidListOperation();
}

// private void Fuse.Scripting.IObserver.OnInsertAt(int index, object value) :249
void DataBinding__FuseScriptingIObserverOnInsertAt_fn(DataBinding* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Scripting.IObserver.OnInsertAt(int,object)");
    __this->InvalidListOperation();
}

// private void Fuse.Scripting.IObserver.OnNewAll(Fuse.Scripting.ListMirror values) :238
void DataBinding__FuseScriptingIObserverOnNewAll_fn(DataBinding* __this, ::g::Fuse::Scripting::ListMirror* values)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Scripting.IObserver.OnNewAll(Fuse.Scripting.ListMirror)");

    if (uPtr(values)->Length() > 0)
        __this->InvalidListOperation();
}

// private void Fuse.Scripting.IObserver.OnNewAt(int index, object value) :228
void DataBinding__FuseScriptingIObserverOnNewAt_fn(DataBinding* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Scripting.IObserver.OnNewAt(int,object)");
    __this->InvalidListOperation();
}

// private void Fuse.Scripting.IObserver.OnRemoveAt(int index) :244
void DataBinding__FuseScriptingIObserverOnRemoveAt_fn(DataBinding* __this, int* index)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Scripting.IObserver.OnRemoveAt(int)");
    __this->InvalidListOperation();
}

// private void Fuse.Scripting.IObserver.OnSet(object newValue) :206
void DataBinding__FuseScriptingIObserverOnSet_fn(DataBinding* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Fuse.Scripting.IObserver.OnSet(object)");
    __this->PushValue(newValue);
}

// private void InvalidListOperation() :218
void DataBinding__InvalidListOperation_fn(DataBinding* __this)
{
    __this->InvalidListOperation();
}

// public DataBinding New(Uno.UX.Property<T> target, string key) :184
void DataBinding__New1_fn(uType* __type, ::g::Uno::UX::Property1* target, uString* key, DataBinding** __retval)
{
    *__retval = DataBinding::New1(__type, target, key);
}

// protected DataBinding New(Uno.UX.Property<T> target, string key, bool read, bool write) :194
void DataBinding__New2_fn(uType* __type, ::g::Uno::UX::Property1* target, uString* key, bool* read, bool* write, DataBinding** __retval)
{
    *__retval = DataBinding::New2(__type, target, key, *read, *write);
}

// internal override sealed void NewValue(object value) :292
void DataBinding__NewValue_fn(DataBinding* __this, uObject* value)
{
    uType* __types[] = {
        __this->__type->GetBase(DataBinding_typeof())->T(0),
    };
    uStackFrame __("Fuse.Reactive.DataBinding`1", "NewValue(object)");

    if (__this->_subscription != NULL)
    {
        uPtr(__this->_subscription)->Dispose();
        __this->_subscription = NULL;
    }

    if (uIs(value, __types[0]))
        __this->PushValue(value);
    else  if (uIs(value, ::TYPES[29/*Fuse.Scripting.Observable*/]))
    {
        ::g::Fuse::Scripting::Observable* obs = uCast< ::g::Fuse::Scripting::Observable*>(value, ::TYPES[29/*Fuse.Scripting.Observable*/]);
        __this->_subscription = uPtr(obs)->Subscribe((uObject*)__this);
    }
    else 
        __this->PushValue(value);
}

// protected override sealed void OnRooted() :254
void DataBinding__OnRooted_fn(DataBinding* __this)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "OnRooted()");
    ::g::Fuse::Reactive::ContextBinding__OnRooted_fn(__this);

    if (__this->_write && uPtr(__this->Target())->SupportsOriginSetter())
        uPtr(__this->Target())->AddListener((uObject*)__this);
}

// protected override sealed void OnUnrooted() :261
void DataBinding__OnUnrooted_fn(DataBinding* __this)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "OnUnrooted()");
    ::g::Fuse::NameRegistry::RemoveListener((uObject*)__this);

    if (__this->_write && uPtr(__this->Target())->SupportsOriginSetter())
        uPtr(__this->Target())->RemoveListener((uObject*)__this);

    if (__this->_subscription != NULL)
    {
        uPtr(__this->_subscription)->Dispose();
        __this->_subscription = NULL;
    }

    uPtr(__this->Target())->Set_ex(uT(__this->__type->GetBase(DataBinding_typeof())->T(0), U_ALLOCA(__this->__type->GetBase(DataBinding_typeof())->T(0)->ValueSize)), (uObject*)__this);
    ::g::Fuse::Reactive::ContextBinding__OnUnrooted_fn(__this);
}

// protected virtual void PushValue(object newValue) :321
void DataBinding__PushValue_fn(DataBinding* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "PushValue(object)");

    if (!__this->_read)
        return;

    if (__this->Parent() == NULL)
        return;

    __this->_currentValue = newValue;

    if (__this->TryPushAsValue(newValue))
        return;
    else  if (__this->TryPushAsName(newValue))
        return;
    else 
        __this->TryPushAsMarshalledValue(newValue);
}

// public generated Uno.UX.Property<T> get_Target() :181
void DataBinding__get_Target_fn(DataBinding* __this, ::g::Uno::UX::Property1** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property<T> value) :181
void DataBinding__set_Target_fn(DataBinding* __this, ::g::Uno::UX::Property1* value)
{
    __this->Target(value);
}

// private static Uno.UX.Selector ToSelector(object newValue) :372
void DataBinding__ToSelector_fn(uType* __type, uObject* newValue, ::g::Uno::UX::Selector* __retval)
{
    *__retval = DataBinding::ToSelector(__type, newValue);
}

// private void TryPushAsMarshalledValue(object newValue) :384
void DataBinding__TryPushAsMarshalledValue_fn(DataBinding* __this, uObject* newValue)
{
    __this->TryPushAsMarshalledValue(newValue);
}

// private bool TryPushAsName(object newValue) :345
void DataBinding__TryPushAsName_fn(DataBinding* __this, uObject* newValue, bool* __retval)
{
    *__retval = __this->TryPushAsName(newValue);
}

// private bool TryPushAsValue(object newValue) :333
void DataBinding__TryPushAsValue_fn(DataBinding* __this, uObject* newValue, bool* __retval)
{
    *__retval = __this->TryPushAsValue(newValue);
}

// private static string TypeToJSName(Uno.Type t) :211
void DataBinding__TypeToJSName_fn(uType* __type, uType* t, uString** __retval)
{
    *__retval = DataBinding::TypeToJSName(__type, t);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :282
void DataBinding__UnoUXIPropertyListenerOnPropertyChanged_fn(DataBinding* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    uType* __types[] = {
        __this->__type->GetBase(DataBinding_typeof())->T(0),
    };
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ::g::Uno::UX::Selector prop_ = *prop;

    if ((__this->_subscription != NULL) && ::g::Uno::UX::Selector__op_Equality(prop_, uPtr(__this->Target())->Name()))
    {
        if (__this->_write)
            uPtr(__this->_subscription)->SetExclusive(uBoxPtr(__types[0], (uPtr(__this->Target())->Get_ex(&ret4), ret4)));
    }
}

// public DataBinding(Uno.UX.Property<T> target, string key) [instance] :184
void DataBinding::ctor_2(::g::Uno::UX::Property1* target, uString* key)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", ".ctor(Uno.UX.Property<T>,string)");
    ctor_1(key);
    Target(target);
    _read = true;
    _write = true;
}

// protected DataBinding(Uno.UX.Property<T> target, string key, bool read, bool write) [instance] :194
void DataBinding::ctor_3(::g::Uno::UX::Property1* target, uString* key, bool read, bool write)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", ".ctor(Uno.UX.Property<T>,string,bool,bool)");
    ctor_1(key);
    Target(target);
    _read = read;
    _write = write;
}

// private void InvalidListOperation() [instance] :218
void DataBinding::InvalidListOperation()
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "InvalidListOperation()");
    ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[25/*"Cannot bind '"*/], Key()), ::STRINGS[26/*"' to proper...*/]), ::g::Uno::UX::Selector__op_Implicit1(uPtr(Target())->Name())), ::STRINGS[27/*"'. The obse...*/]), DataBinding::TypeToJSName(__type->GetBase(DataBinding_typeof()), uPtr(Target())->PropertyType())), ::STRINGS[28/*"."*/]), this, ::STRINGS[10/*"/usr/local/...*/], 220, ::STRINGS[29/*"InvalidList...*/]);
}

// public generated Uno.UX.Property<T> get_Target() [instance] :181
::g::Uno::UX::Property1* DataBinding::Target()
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "get_Target()");
    return _Target;
}

// private generated void set_Target(Uno.UX.Property<T> value) [instance] :181
void DataBinding::Target(::g::Uno::UX::Property1* value)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "set_Target(Uno.UX.Property<T>)");
    _Target = value;
}

// private void TryPushAsMarshalledValue(object newValue) [instance] :384
void DataBinding::TryPushAsMarshalledValue(uObject* newValue)
{
    uType* __types[] = {
        __type->GetBase(DataBinding_typeof())->T(0),
        __type->GetBase(DataBinding_typeof())->Precalced(0/*Fuse.Scripting.Marshal.TryConvertTo<T>*/),
    };
    uStackFrame __("Fuse.Reactive.DataBinding`1", "TryPushAsMarshalledValue(object)");
    uT value(__types[0], U_ALLOCA(__types[0]->ValueSize));
    bool ret3;

    if ((::g::Fuse::Scripting::Marshal__TryConvertTo1_fn(__types[1], newValue, &value, &ret3), ret3))
    {
        try
        {
            uPtr(Target())->Set_ex(value, (uObject*)this);
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e = __t.Exception;
            ::g::Fuse::Diagnostics::UserError(uPtr(e)->ToString(), Target(), ::STRINGS[10/*"/usr/local/...*/], 395, ::STRINGS[30/*"TryPushAsMa...*/]);
        }
    }
}

// private bool TryPushAsName(object newValue) [instance] :345
bool DataBinding::TryPushAsName(uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "TryPushAsName(object)");
    ::g::Uno::UX::Selector name = DataBinding::ToSelector(__type->GetBase(DataBinding_typeof()), newValue);

    if (!name.IsNull())
    {
        ::g::Fuse::NameRegistry::AddListener(name, (uObject*)this);
        ::g::Fuse::Node* k = uPtr(Parent())->FindNodeByName(name, uDelegate::New(::TYPES[33/*Uno.Predicate<Fuse.Node>*/], (void*)DataBinding__Acceptor_fn, NULL, __type->GetBase(DataBinding_typeof())));

        if (k != NULL)
        {
            uPtr(Target())->Set_ex(uUnboxAny(__type->GetBase(DataBinding_typeof())->T(0), k), (uObject*)this);
            return true;
        }

        if (::g::Uno::Type::IsClass(uPtr(__type->GetBase(DataBinding_typeof())->T(0))) && !::g::Fuse::Scripting::Marshal::CanConvertClass(__type->GetBase(DataBinding_typeof())->T(0)))
            return true;
    }

    return false;
}

// private bool TryPushAsValue(object newValue) [instance] :333
bool DataBinding::TryPushAsValue(uObject* newValue)
{
    uType* __types[] = {
        __type->GetBase(DataBinding_typeof())->T(0),
    };
    uStackFrame __("Fuse.Reactive.DataBinding`1", "TryPushAsValue(object)");

    if (uIs(newValue, __types[0]))
    {
        ::g::Fuse::NameRegistry::RemoveListener((uObject*)this);
        uPtr(Target())->Set_ex(uUnboxAny(__types[0], newValue), (uObject*)this);
        return true;
    }

    return false;
}

// private static bool Acceptor(object obj) [static] :379
bool DataBinding::Acceptor(uType* __type, uObject* obj)
{
    uType* __types[] = {
        __type->T(0),
    };
    uStackFrame __("Fuse.Reactive.DataBinding`1", "Acceptor(object)");
    return uIs(obj, __types[0]);
}

// public DataBinding New(Uno.UX.Property<T> target, string key) [static] :184
DataBinding* DataBinding::New1(uType* __type, ::g::Uno::UX::Property1* target, uString* key)
{
    DataBinding* obj1 = (DataBinding*)uNew(__type);
    obj1->ctor_2(target, key);
    return obj1;
}

// protected DataBinding New(Uno.UX.Property<T> target, string key, bool read, bool write) [static] :194
DataBinding* DataBinding::New2(uType* __type, ::g::Uno::UX::Property1* target, uString* key, bool read, bool write)
{
    DataBinding* obj2 = (DataBinding*)uNew(__type);
    obj2->ctor_3(target, key, read, write);
    return obj2;
}

// private static Uno.UX.Selector ToSelector(object newValue) [static] :372
::g::Uno::UX::Selector DataBinding::ToSelector(uType* __type, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "ToSelector(object)");
    return uIs(newValue, ::TYPES[30/*Uno.UX.Selector*/]) ? uUnbox< ::g::Uno::UX::Selector>(::TYPES[30/*Uno.UX.Selector*/], newValue) : uIs(newValue, ::TYPES[17/*string*/]) ? ::g::Uno::UX::Selector__New1(uCast<uString*>(newValue, ::TYPES[17/*string*/])) : uDefault< ::g::Uno::UX::Selector>();
}

// private static string TypeToJSName(Uno.Type t) [static] :211
uString* DataBinding::TypeToJSName(uType* __type, uType* t)
{
    uStackFrame __("Fuse.Reactive.DataBinding`1", "TypeToJSName(Uno.Type)");

    if ((::g::Uno::Type::op_Equality(t, ::TYPES[22/*int*/]) || ::g::Uno::Type::op_Equality(t, ::TYPES[23/*float*/])) || ::g::Uno::Type::op_Equality(t, ::TYPES[16/*double*/]))
        return ::STRINGS[31/*"number"*/];

    if (::g::Uno::Type::op_Equality(t, ::TYPES[17/*string*/]))
        return ::STRINGS[32/*"string"*/];

    return ::g::Uno::String::op_Addition2(::STRINGS[33/*"value that ...*/], ::g::Uno::Type::FullName(uPtr(t)));
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/$.uno
// --------------------------------------------------------

// public sealed class DataToResourceBinding<T> :451
// {
static void DataToResourceBinding_build(uType* type)
{
    ::TYPES[34] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof());
    ::TYPES[17] = ::g::Uno::String_typeof();
    ::TYPES[4] = ::g::Uno::Action_typeof();
    type->SetBase(::g::Fuse::Reactive::DataBinding_typeof()->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Fuse::Scripting::IObserver_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface0),
        ::g::Fuse::INameListener_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface1),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface2));
    type->SetFields(8,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::DataToResourceBinding, _key), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", type, (void*)DataToResourceBinding__New3_fn, 0, true, type, 2, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0)), ::g::Uno::String_typeof()));
}

::g::Fuse::Reactive::DataBinding_type* DataToResourceBinding_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::DataBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::DataBinding_typeof();
    options.FieldCount = 9;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(DataToResourceBinding);
    options.TypeSize = sizeof(::g::Fuse::Reactive::DataBinding_type);
    type = (::g::Fuse::Reactive::DataBinding_type*)uClassType::New("Fuse.Reactive.DataToResourceBinding`1", options);
    type->fp_build_ = DataToResourceBinding_build;
    type->fp_PushValue = (void(*)(::g::Fuse::Reactive::DataBinding*, uObject*))DataToResourceBinding__PushValue_fn;
    type->interface0.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnClear_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnAdd_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnNewAt_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnFailed_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::ListMirror*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnNewAll_fn;
    type->interface0.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnRemoveAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnInsertAt_fn;
    type->interface1.fp_OnNameChanged = (void(*)(uObject*, ::g::Fuse::Node*, ::g::Uno::UX::Selector*))::g::Fuse::Reactive::DataBinding__FuseINameListenerOnNameChanged_fn;
    type->interface2.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Reactive::DataBinding__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// public DataToResourceBinding(Uno.UX.Property<T> target, string key) :454
void DataToResourceBinding__ctor_4_fn(DataToResourceBinding* __this, ::g::Uno::UX::Property1* target, uString* key)
{
    __this->ctor_4(target, key);
}

// private bool AcceptFunction(object obj) :486
void DataToResourceBinding__AcceptFunction_fn(DataToResourceBinding* __this, uObject* obj, bool* __retval)
{
    *__retval = __this->AcceptFunction(obj);
}

// public DataToResourceBinding New(Uno.UX.Property<T> target, string key) :454
void DataToResourceBinding__New3_fn(uType* __type, ::g::Uno::UX::Property1* target, uString* key, DataToResourceBinding** __retval)
{
    *__retval = DataToResourceBinding::New3(__type, target, key);
}

// private void OnChanged() :475
void DataToResourceBinding__OnChanged_fn(DataToResourceBinding* __this)
{
    __this->OnChanged();
}

// protected override sealed void PushValue(object value) :461
void DataToResourceBinding__PushValue_fn(DataToResourceBinding* __this, uObject* value)
{
    uStackFrame __("Fuse.Reactive.DataToResourceBinding`1", "PushValue(object)");
    uString* key = uAs<uString*>(value, ::TYPES[17/*string*/]);

    if (::g::Uno::String::op_Equality(key, NULL))
        return;

    if (::g::Uno::String::op_Inequality(__this->_key, NULL))
        ::g::Fuse::Resources::ResourceRegistry::RemoveResourceChangedHandler(__this->_key, uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)DataToResourceBinding__OnChanged_fn, __this));

    __this->_key = key;
    ::g::Fuse::Resources::ResourceRegistry::AddResourceChangedHandler(__this->_key, uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)DataToResourceBinding__OnChanged_fn, __this));
    __this->OnChanged();
}

// public DataToResourceBinding(Uno.UX.Property<T> target, string key) [instance] :454
void DataToResourceBinding::ctor_4(::g::Uno::UX::Property1* target, uString* key)
{
    uStackFrame __("Fuse.Reactive.DataToResourceBinding`1", ".ctor(Uno.UX.Property<T>,string)");
    ctor_2(target, key);
}

// private bool AcceptFunction(object obj) [instance] :486
bool DataToResourceBinding::AcceptFunction(uObject* obj)
{
    uType* __types[] = {
        __type->T(0),
    };
    uStackFrame __("Fuse.Reactive.DataToResourceBinding`1", "AcceptFunction(object)");
    return uIs(obj, __types[0]);
}

// private void OnChanged() [instance] :475
void DataToResourceBinding::OnChanged()
{
    uStackFrame __("Fuse.Reactive.DataToResourceBinding`1", "OnChanged()");

    if (::g::Uno::String::op_Equality(_key, NULL))
        return;

    if (Parent() == NULL)
        return;

    uObject* v;

    if (uPtr(Parent())->TryGetResource(_key, uDelegate::New(::TYPES[34/*Uno.Predicate<object>*/], (void*)DataToResourceBinding__AcceptFunction_fn, this), &v))
        uPtr((::g::Uno::UX::Property1*)Target())->Set_ex(uUnboxAny(__type->T(0), v), (uObject*)this);
}

// public DataToResourceBinding New(Uno.UX.Property<T> target, string key) [static] :454
DataToResourceBinding* DataToResourceBinding::New3(uType* __type, ::g::Uno::UX::Property1* target, uString* key)
{
    DataToResourceBinding* obj1 = (DataToResourceBinding*)uNew(__type);
    obj1->ctor_4(target, key);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/fusejs/$.uno
// ---------------------------------------------------------------

// internal static class DebugLog :73
// {
static void DebugLog_build(uType* type)
{
    ::STRINGS[34] = uString::Const("debug_log");
    ::STRINGS[13] = uString::Const("null");
    ::STRINGS[12] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/fusejs/$.uno");
    ::TYPES[27] = ::g::Fuse::Scripting::Callback_typeof();
}

uClassType* DebugLog_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.DebugLog", options);
    type->fp_build_ = DebugLog_build;
    return type;
}

// public static void Init(Fuse.Scripting.Context c) :75
void DebugLog__Init_fn(::g::Fuse::Scripting::Context* c)
{
    DebugLog::Init(c);
}

// private static object Log(object[] args) :80
void DebugLog__Log_fn(uArray* args, uObject** __retval)
{
    *__retval = DebugLog::Log(args);
}

// public static void Init(Fuse.Scripting.Context c) [static] :75
void DebugLog::Init(::g::Fuse::Scripting::Context* c)
{
    uStackFrame __("Fuse.Reactive.DebugLog", "Init(Fuse.Scripting.Context)");
    uPtr(uPtr(c)->GlobalObject())->Item(::STRINGS[34/*"debug_log"*/], uDelegate::New(::TYPES[27/*Fuse.Scripting.Callback*/], (void*)DebugLog__Log_fn));
}

// private static object Log(object[] args) [static] :80
uObject* DebugLog::Log(uArray* args)
{
    uStackFrame __("Fuse.Reactive.DebugLog", "Log(object[])");

    for (int i = 0; i < uPtr(args)->Length(); i++)
        ::g::Uno::Diagnostics::Debug::Log5((uPtr(args)->Strong<uObject*>(i) != NULL) ? (uString*)::g::Uno::Object::ToString(uPtr(uPtr(args)->Strong<uObject*>(i))) : ::STRINGS[13/*"null"*/], 1, ::STRINGS[12/*"/usr/local/...*/], 84);

    return NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/$.uno
// --------------------------------------------------------

// public sealed class Each :553
// {
// static Each() :553
static void Each__cctor_1_fn(uType* __type)
{
    Each::_eachHandle_ = ::g::Fuse::Properties::CreateHandle();
}

static void Each_build(uType* type)
{
    ::TYPES[35] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Reactive::Instantiator_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Reactive::Instantiator_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Reactive::Instantiator_type, interface3),
        ::g::Fuse::Scripting::IObserver_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface4),
        ::g::Fuse::ITemplateObserver_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface5));
    type->SetFields(22,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Reactive::Each::_eachHandle_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(9,
        new uFunction("get_Count", NULL, (void*)Each__get_Count_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_Count", NULL, (void*)Each__set_Count_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("GetItems", NULL, (void*)Each__GetItems_fn, 0, true, uObject_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("GetMatchKey", NULL, (void*)Each__GetMatchKey1_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("get_Items", NULL, (void*)Each__get_Items_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Items", NULL, (void*)Each__set_Items_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction(".ctor", NULL, (void*)Each__New4_fn, 0, true, Each_typeof(), 0),
        new uFunction("SetItems", NULL, (void*)Each__SetItems_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), uObject_typeof()),
        new uFunction("SetMatchKey", NULL, (void*)Each__SetMatchKey_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Uno::String_typeof()));
}

::g::Fuse::Reactive::Instantiator_type* Each_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Instantiator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Instantiator_typeof();
    options.FieldCount = 23;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(Each);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Instantiator_type);
    type = (::g::Fuse::Reactive::Instantiator_type*)uClassType::New("Fuse.Reactive.Each", options);
    type->fp_build_ = Each_build;
    type->fp_ctor_ = (void*)Each__New4_fn;
    type->fp_cctor_ = Each__cctor_1_fn;
    type->interface5.fp_OnTemplatesChangedWileRooted = (void(*)(uObject*))::g::Fuse::Reactive::Instantiator__FuseITemplateObserverOnTemplatesChangedWileRooted_fn;
    type->interface4.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::Instantiator__FuseScriptingIObserverOnSet_fn;
    type->interface4.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::Instantiator__FuseScriptingIObserverOnFailed_fn;
    type->interface4.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::Instantiator__FuseScriptingIObserverOnAdd_fn;
    type->interface4.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::Instantiator__FuseScriptingIObserverOnRemoveAt_fn;
    type->interface4.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::Instantiator__FuseScriptingIObserverOnInsertAt_fn;
    type->interface4.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::Instantiator__FuseScriptingIObserverOnNewAt_fn;
    type->interface4.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::ListMirror*))::g::Fuse::Reactive::Instantiator__FuseScriptingIObserverOnNewAll_fn;
    type->interface4.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::Instantiator__FuseScriptingIObserverOnClear_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Each() :604
void Each__ctor_5_fn(Each* __this)
{
    __this->ctor_5();
}

// private Each(Uno.Collections.IList<Uno.UX.Template> templates) :603
void Each__ctor_6_fn(Each* __this, uObject* templates)
{
    __this->ctor_6(templates);
}

// public int get_Count() :626
void Each__get_Count_fn(Each* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public void set_Count(int value) :630
void Each__set_Count_fn(Each* __this, int* value)
{
    __this->Count(*value);
}

// private static Fuse.Reactive.Each GetEach(Fuse.Visual container) :557
void Each__GetEach_fn(::g::Fuse::Visual* container, Each** __retval)
{
    *__retval = Each::GetEach(container);
}

// public static object GetItems(Fuse.Visual container) :585
void Each__GetItems_fn(::g::Fuse::Visual* container, uObject** __retval)
{
    *__retval = Each::GetItems(container);
}

// public static string GetMatchKey(Fuse.Visual container) :598
void Each__GetMatchKey1_fn(::g::Fuse::Visual* container, uString** __retval)
{
    *__retval = Each::GetMatchKey1(container);
}

// public object get_Items() :612
void Each__get_Items_fn(Each* __this, uObject** __retval)
{
    *__retval = __this->Items();
}

// public void set_Items(object value) :613
void Each__set_Items_fn(Each* __this, uObject* value)
{
    __this->Items(value);
}

// public Each New() :604
void Each__New4_fn(Each** __retval)
{
    *__retval = Each::New4();
}

// private Each New(Uno.Collections.IList<Uno.UX.Template> templates) :603
void Each__New5_fn(uObject* templates, Each** __retval)
{
    *__retval = Each::New5(templates);
}

// public static void SetItems(Fuse.Visual container, object items) :579
void Each__SetItems_fn(::g::Fuse::Visual* container, uObject* items)
{
    Each::SetItems(container, items);
}

// public static void SetMatchKey(Fuse.Visual container, string key) :592
void Each__SetMatchKey_fn(::g::Fuse::Visual* container, uString* key)
{
    Each::SetMatchKey(container, key);
}

uSStrong< ::g::Fuse::PropertyHandle*> Each::_eachHandle_;

// public Each() [instance] :604
void Each::ctor_5()
{
    uStackFrame __("Fuse.Reactive.Each", ".ctor()");
    ctor_3();
}

// private Each(Uno.Collections.IList<Uno.UX.Template> templates) [instance] :603
void Each::ctor_6(uObject* templates)
{
    uStackFrame __("Fuse.Reactive.Each", ".ctor(Uno.Collections.IList<Uno.UX.Template>)");
    ctor_4(templates);
}

// public int get_Count() [instance] :626
int Each::Count()
{
    uStackFrame __("Fuse.Reactive.Each", "get_Count()");
    return _count;
}

// public void set_Count(int value) [instance] :630
void Each::Count(int value)
{
    uStackFrame __("Fuse.Reactive.Each", "set_Count(int)");

    if (_count != value)
    {
        _count = value;
        OnItemsChanged();
    }
}

// public object get_Items() [instance] :612
uObject* Each::Items()
{
    uStackFrame __("Fuse.Reactive.Each", "get_Items()");
    return _items;
}

// public void set_Items(object value) [instance] :613
void Each::Items(uObject* value)
{
    uStackFrame __("Fuse.Reactive.Each", "set_Items(object)");

    if (_items != value)
    {
        _items = value;
        OnItemsChanged();
    }
}

// private static Fuse.Reactive.Each GetEach(Fuse.Visual container) [static] :557
Each* Each::GetEach(::g::Fuse::Visual* container)
{
    uStackFrame __("Fuse.Reactive.Each", "GetEach(Fuse.Visual)");
    Each_typeof()->Init();
    Each* each = uAs<Each*>(uPtr(uPtr(container)->Properties())->Get(Each::_eachHandle()), Each_typeof());

    if (each == NULL)
    {
        each = Each::New5(uPtr(container)->Templates());
        uPtr(container->Properties())->Set(Each::_eachHandle(), each);
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(container->Children()), ::TYPES[35/*Uno.Collections.ICollection<Fuse.Node>*/]), each);
    }

    return each;
}

// public static object GetItems(Fuse.Visual container) [static] :585
uObject* Each::GetItems(::g::Fuse::Visual* container)
{
    uStackFrame __("Fuse.Reactive.Each", "GetItems(Fuse.Visual)");
    Each_typeof()->Init();
    return uPtr(Each::GetEach(container))->Items();
}

// public static string GetMatchKey(Fuse.Visual container) [static] :598
uString* Each::GetMatchKey1(::g::Fuse::Visual* container)
{
    uStackFrame __("Fuse.Reactive.Each", "GetMatchKey(Fuse.Visual)");
    Each_typeof()->Init();
    return uPtr(Each::GetEach(container))->MatchKey();
}

// public Each New() [static] :604
Each* Each::New4()
{
    Each* obj2 = (Each*)uNew(Each_typeof());
    obj2->ctor_5();
    return obj2;
}

// private Each New(Uno.Collections.IList<Uno.UX.Template> templates) [static] :603
Each* Each::New5(uObject* templates)
{
    Each* obj1 = (Each*)uNew(Each_typeof());
    obj1->ctor_6(templates);
    return obj1;
}

// public static void SetItems(Fuse.Visual container, object items) [static] :579
void Each::SetItems(::g::Fuse::Visual* container, uObject* items)
{
    uStackFrame __("Fuse.Reactive.Each", "SetItems(Fuse.Visual,object)");
    Each_typeof()->Init();
    uPtr(Each::GetEach(container))->Items(items);
}

// public static void SetMatchKey(Fuse.Visual container, string key) [static] :592
void Each::SetMatchKey(::g::Fuse::Visual* container, uString* key)
{
    uStackFrame __("Fuse.Reactive.Each", "SetMatchKey(Fuse.Visual,string)");
    Each_typeof()->Init();
    uPtr(Each::GetEach(container))->MatchKey(key);
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/$.uno
// --------------------------------------------------------

// private sealed class JavaScript.EvaluateDataContext :1376
// {
static void JavaScript__EvaluateDataContext_build(uType* type)
{
    ::TYPES[4] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::JavaScript__EvaluateDataContext, _dc), 0,
        ::g::Fuse::Reactive::JavaScript_typeof(), offsetof(::g::Fuse::Reactive::JavaScript__EvaluateDataContext, _js), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::JavaScript__EvaluateDataContext, _worker), 0);
}

uType* JavaScript__EvaluateDataContext_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(JavaScript__EvaluateDataContext);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.JavaScript.EvaluateDataContext", options);
    type->fp_build_ = JavaScript__EvaluateDataContext_build;
    return type;
}

// public EvaluateDataContext(Fuse.Reactive.ThreadWorker worker, Fuse.Reactive.JavaScript js) :1382
void JavaScript__EvaluateDataContext__ctor__fn(JavaScript__EvaluateDataContext* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js)
{
    __this->ctor_(worker, js);
}

// private void Evaluate() :1390
void JavaScript__EvaluateDataContext__Evaluate_fn(JavaScript__EvaluateDataContext* __this)
{
    __this->Evaluate();
}

// public EvaluateDataContext New(Fuse.Reactive.ThreadWorker worker, Fuse.Reactive.JavaScript js) :1382
void JavaScript__EvaluateDataContext__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js, JavaScript__EvaluateDataContext** __retval)
{
    *__retval = JavaScript__EvaluateDataContext::New1(worker, js);
}

// private void SetDataContext() :1399
void JavaScript__EvaluateDataContext__SetDataContext_fn(JavaScript__EvaluateDataContext* __this)
{
    __this->SetDataContext();
}

// public EvaluateDataContext(Fuse.Reactive.ThreadWorker worker, Fuse.Reactive.JavaScript js) [instance] :1382
void JavaScript__EvaluateDataContext::ctor_(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js)
{
    uStackFrame __("Fuse.Reactive.JavaScript.EvaluateDataContext", ".ctor(Fuse.Reactive.ThreadWorker,Fuse.Reactive.JavaScript)");
    _js = js;
    _worker = worker;
    uPtr(_worker)->Invoke(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)JavaScript__EvaluateDataContext__Evaluate_fn, this));
}

// private void Evaluate() [instance] :1390
void JavaScript__EvaluateDataContext::Evaluate()
{
    uStackFrame __("Fuse.Reactive.JavaScript.EvaluateDataContext", "Evaluate()");
    _dc = uPtr(uPtr(_worker)->Context())->Reflect(uPtr(_js)->EvaluateExports());
    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)JavaScript__EvaluateDataContext__SetDataContext_fn, this));
}

// private void SetDataContext() [instance] :1399
void JavaScript__EvaluateDataContext::SetDataContext()
{
    uStackFrame __("Fuse.Reactive.JavaScript.EvaluateDataContext", "SetDataContext()");
    uPtr(_js)->SetDataContext(_dc);
}

// public EvaluateDataContext New(Fuse.Reactive.ThreadWorker worker, Fuse.Reactive.JavaScript js) [static] :1382
JavaScript__EvaluateDataContext* JavaScript__EvaluateDataContext::New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js)
{
    JavaScript__EvaluateDataContext* obj1 = (JavaScript__EvaluateDataContext*)uNew(JavaScript__EvaluateDataContext_typeof());
    obj1->ctor_(worker, js);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/$.uno
// --------------------------------------------------------

// public sealed class EventBinding :671
// {
static void EventBinding_build(uType* type)
{
    ::TYPES[24] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[7] = ::g::Fuse::Scripting::IScriptEvent_typeof();
    ::TYPES[6] = ::g::Fuse::Node_typeof();
    ::TYPES[4] = ::g::Uno::Action_typeof();
    ::TYPES[36] = ::g::Uno::Collections::List_typeof()->MakeType(EventBinding__CallClosure_typeof());
    type->SetFields(3,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Reactive::EventBinding, _function), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(EventBinding__CallClosure_typeof()), offsetof(::g::Fuse::Reactive::EventBinding, _queuedEvents), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)EventBinding__New1_fn, 0, true, EventBinding_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("OnEvent", NULL, (void*)EventBinding__OnEvent_fn, 0, false, uVoid_typeof(), 2, uObject_typeof(), ::g::Uno::EventArgs_typeof()));
}

::g::Fuse::Reactive::ContextBinding_type* EventBinding_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ContextBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ContextBinding_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(EventBinding);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ContextBinding_type);
    type = (::g::Fuse::Reactive::ContextBinding_type*)uClassType::New("Fuse.Reactive.EventBinding", options);
    type->fp_build_ = EventBinding_build;
    type->fp_NewValue = (void(*)(::g::Fuse::Reactive::ContextBinding*, uObject*))EventBinding__NewValue_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Binding*))EventBinding__OnUnrooted_fn;
    return type;
}

// public EventBinding(string key) :674
void EventBinding__ctor_2_fn(EventBinding* __this, uString* key)
{
    __this->ctor_2(key);
}

// public EventBinding New(string key) :674
void EventBinding__New1_fn(uString* key, EventBinding** __retval)
{
    *__retval = EventBinding::New1(key);
}

// internal override sealed void NewValue(object obj) :697
void EventBinding__NewValue_fn(EventBinding* __this, uObject* obj)
{
    uStackFrame __("Fuse.Reactive.EventBinding", "NewValue(object)");
    __this->_function = uAs< ::g::Fuse::Scripting::Function*>(obj, ::TYPES[24/*Fuse.Scripting.Function*/]);
    __this->ProcessQueuedEvents();
}

// public void OnEvent(object sender, Uno.EventArgs args) :781
void EventBinding__OnEvent_fn(EventBinding* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnEvent(sender, args);
}

// protected override sealed void OnUnrooted() :703
void EventBinding__OnUnrooted_fn(EventBinding* __this)
{
    uStackFrame __("Fuse.Reactive.EventBinding", "OnUnrooted()");
    ::g::Fuse::Reactive::ContextBinding__OnUnrooted_fn(__this);
    __this->_function = NULL;
    __this->_queuedEvents = NULL;
}

// private void ProcessQueuedEvents() :682
void EventBinding__ProcessQueuedEvents_fn(EventBinding* __this)
{
    __this->ProcessQueuedEvents();
}

// public EventBinding(string key) [instance] :674
void EventBinding::ctor_2(uString* key)
{
    uStackFrame __("Fuse.Reactive.EventBinding", ".ctor(string)");
    ctor_1(key);
}

// public void OnEvent(object sender, Uno.EventArgs args) [instance] :781
void EventBinding::OnEvent(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Reactive.EventBinding", "OnEvent(object,Uno.EventArgs)");

    if (Parent() == NULL)
        return;

    EventBinding__CallClosure* callClosure = EventBinding__CallClosure::New1(uAs<uObject*>(args, ::TYPES[7/*Fuse.Scripting.IScriptEvent*/]), uAs< ::g::Fuse::Node*>(sender, ::TYPES[6/*Fuse.Node*/]));

    if (_function != NULL)
    {
        uPtr(callClosure)->Function = _function;
        uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Invoke(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)EventBinding__CallClosure__Call_fn, callClosure));
    }
    else 
    {
        if (_queuedEvents == NULL)
            _queuedEvents = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[36/*Uno.Collections.List<Fuse.Reactive.EventBinding.CallClosure>*/]));

        ::g::Uno::Collections::List__Add_fn(uPtr(_queuedEvents), callClosure);
    }
}

// private void ProcessQueuedEvents() [instance] :682
void EventBinding::ProcessQueuedEvents()
{
    uStackFrame __("Fuse.Reactive.EventBinding", "ProcessQueuedEvents()");
    EventBinding__CallClosure* ret2;
    EventBinding__CallClosure* ret3;

    if ((_function != NULL) && (_queuedEvents != NULL))
    {
        ::g::Uno::Collections::List* events = _queuedEvents;
        _queuedEvents = NULL;

        for (int i = 0; i < uPtr(events)->Count(); i++)
        {
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(events), uCRef<int>(i), &ret2), ret2))->Function = _function;
            uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Invoke(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)EventBinding__CallClosure__Call_fn, uPtr((::g::Uno::Collections::List__get_Item_fn(events, uCRef<int>(i), &ret3), ret3))));
        }
    }
}

// public EventBinding New(string key) [static] :674
EventBinding* EventBinding::New1(uString* key)
{
    EventBinding* obj1 = (EventBinding*)uNew(EventBinding_typeof());
    obj1->ctor_2(key);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/$.uno
// --------------------------------------------------------

// public sealed class ThreadWorker.Flag :2105
// {
static void ThreadWorker__Flag_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker__Flag, _processed), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ThreadWorker__Flag__New1_fn, 0, true, ThreadWorker__Flag_typeof(), 0));
}

uType* ThreadWorker__Flag_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ThreadWorker__Flag);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.ThreadWorker.Flag", options);
    type->fp_build_ = ThreadWorker__Flag_build;
    type->fp_ctor_ = (void*)ThreadWorker__Flag__New1_fn;
    return type;
}

// public generated Flag() :2105
void ThreadWorker__Flag__ctor__fn(ThreadWorker__Flag* __this)
{
    __this->ctor_();
}

// public generated Flag New() :2105
void ThreadWorker__Flag__New1_fn(ThreadWorker__Flag** __retval)
{
    *__retval = ThreadWorker__Flag::New1();
}

// internal void Process() :2111
void ThreadWorker__Flag__Process_fn(ThreadWorker__Flag* __this)
{
    __this->Process();
}

// public generated Flag() [instance] :2105
void ThreadWorker__Flag::ctor_()
{
}

// internal void Process() [instance] :2111
void ThreadWorker__Flag::Process()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker.Flag", "Process()");
    _processed = true;
}

// public generated Flag New() [static] :2105
ThreadWorker__Flag* ThreadWorker__Flag::New1()
{
    ThreadWorker__Flag* obj1 = (ThreadWorker__Flag*)uNew(ThreadWorker__Flag_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/$.uno
// --------------------------------------------------------

// public sealed class Instance :1275
// {
static void Instance_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Reactive::Instantiator_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Reactive::Instantiator_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Reactive::Instantiator_type, interface3),
        ::g::Fuse::Scripting::IObserver_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface4),
        ::g::Fuse::ITemplateObserver_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface5));
    type->SetFields(22);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Instance__New4_fn, 0, true, Instance_typeof(), 0));
}

::g::Fuse::Reactive::Instantiator_type* Instance_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Instantiator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Instantiator_typeof();
    options.FieldCount = 22;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(Instance);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Instantiator_type);
    type = (::g::Fuse::Reactive::Instantiator_type*)uClassType::New("Fuse.Reactive.Instance", options);
    type->fp_build_ = Instance_build;
    type->fp_ctor_ = (void*)Instance__New4_fn;
    type->interface5.fp_OnTemplatesChangedWileRooted = (void(*)(uObject*))::g::Fuse::Reactive::Instantiator__FuseITemplateObserverOnTemplatesChangedWileRooted_fn;
    type->interface4.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::Instantiator__FuseScriptingIObserverOnSet_fn;
    type->interface4.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::Instantiator__FuseScriptingIObserverOnFailed_fn;
    type->interface4.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::Instantiator__FuseScriptingIObserverOnAdd_fn;
    type->interface4.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::Instantiator__FuseScriptingIObserverOnRemoveAt_fn;
    type->interface4.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::Instantiator__FuseScriptingIObserverOnInsertAt_fn;
    type->interface4.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::Instantiator__FuseScriptingIObserverOnNewAt_fn;
    type->interface4.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::ListMirror*))::g::Fuse::Reactive::Instantiator__FuseScriptingIObserverOnNewAll_fn;
    type->interface4.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::Instantiator__FuseScriptingIObserverOnClear_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Instance() :1277
void Instance__ctor_5_fn(Instance* __this)
{
    __this->ctor_5();
}

// public Instance New() :1277
void Instance__New4_fn(Instance** __retval)
{
    *__retval = Instance::New4();
}

// public Instance() [instance] :1277
void Instance::ctor_5()
{
    uStackFrame __("Fuse.Reactive.Instance", ".ctor()");
    ctor_3();
    _count = 1;
}

// public Instance New() [static] :1277
Instance* Instance::New4()
{
    Instance* obj1 = (Instance*)uNew(Instance_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/$.uno
// --------------------------------------------------------

// public class Instantiator :820
// {
static void Instantiator_build(uType* type)
{
    ::STRINGS[35] = uString::Const("Removing an out of bounds item index");
    ::STRINGS[10] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/$.uno");
    ::STRINGS[36] = uString::Const("Fuse.Scripting.IObserver.OnRemoveAt");
    ::TYPES[37] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof()));
    ::TYPES[6] = ::g::Fuse::Node_typeof();
    ::TYPES[12] = uObject_typeof()->Array();
    ::TYPES[38] = ::g::Fuse::Scripting::ListMirror_typeof();
    ::TYPES[39] = ::g::Fuse::Scripting::ObjectMirror_typeof();
    ::TYPES[17] = ::g::Uno::String_typeof();
    ::TYPES[1] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[40] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    ::TYPES[41] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[42] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    ::TYPES[43] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Fuse::Node_typeof());
    ::TYPES[29] = ::g::Fuse::Scripting::Observable_typeof();
    ::TYPES[28] = ::g::Uno::IDisposable_typeof();
    ::TYPES[44] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[14] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    ::TYPES[15] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Instantiator_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Instantiator_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Instantiator_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Instantiator_type, interface3),
        ::g::Fuse::Scripting::IObserver_typeof(), offsetof(Instantiator_type, interface4),
        ::g::Fuse::ITemplateObserver_typeof(), offsetof(Instantiator_type, interface5));
    type->SetFields(13,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _count), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _items), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _listening), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _matchKey), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof())), offsetof(::g::Fuse::Reactive::Instantiator, _nodes), 0,
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _subscription), 0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Template_typeof()), offsetof(::g::Fuse::Reactive::Instantiator, _templates), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _TemplateKey), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _TemplateSource), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_MatchKey", NULL, (void*)Instantiator__get_MatchKey_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_MatchKey", NULL, (void*)Instantiator__set_MatchKey_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_TemplateKey", NULL, (void*)Instantiator__get_TemplateKey_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_TemplateKey", NULL, (void*)Instantiator__set_TemplateKey_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Templates", NULL, (void*)Instantiator__get_Templates_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Template_typeof()), 0),
        new uFunction("get_TemplateSource", NULL, (void*)Instantiator__get_TemplateSource_fn, 0, false, ::g::Fuse::Visual_typeof(), 0),
        new uFunction("set_TemplateSource", NULL, (void*)Instantiator__set_TemplateSource_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()));
}

Instantiator_type* Instantiator_typeof()
{
    static uSStrong<Instantiator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 22;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(Instantiator);
    options.TypeSize = sizeof(Instantiator_type);
    type = (Instantiator_type*)uClassType::New("Fuse.Reactive.Instantiator", options);
    type->fp_build_ = Instantiator_build;
    type->fp_ctor_ = (void*)Instantiator__New2_fn;
    type->fp_GetImplicitDataForChild = (void(*)(::g::Fuse::Node*, ::g::Fuse::Node*, ::g::Uno::Collections::List*))Instantiator__GetImplicitDataForChild_fn;
    type->fp_GetLastNodeInGroup = (void(*)(::g::Fuse::Node*, ::g::Fuse::Node**))Instantiator__GetLastNodeInGroup_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Instantiator__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Instantiator__OnUnrooted_fn;
    type->interface5.fp_OnTemplatesChangedWileRooted = (void(*)(uObject*))Instantiator__FuseITemplateObserverOnTemplatesChangedWileRooted_fn;
    type->interface4.fp_OnSet = (void(*)(uObject*, uObject*))Instantiator__FuseScriptingIObserverOnSet_fn;
    type->interface4.fp_OnFailed = (void(*)(uObject*, uString*))Instantiator__FuseScriptingIObserverOnFailed_fn;
    type->interface4.fp_OnAdd = (void(*)(uObject*, uObject*))Instantiator__FuseScriptingIObserverOnAdd_fn;
    type->interface4.fp_OnRemoveAt = (void(*)(uObject*, int*))Instantiator__FuseScriptingIObserverOnRemoveAt_fn;
    type->interface4.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))Instantiator__FuseScriptingIObserverOnInsertAt_fn;
    type->interface4.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))Instantiator__FuseScriptingIObserverOnNewAt_fn;
    type->interface4.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::ListMirror*))Instantiator__FuseScriptingIObserverOnNewAll_fn;
    type->interface4.fp_OnClear = (void(*)(uObject*))Instantiator__FuseScriptingIObserverOnClear_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// protected internal Instantiator() :829
void Instantiator__ctor_3_fn(Instantiator* __this)
{
    __this->ctor_3();
}

// protected internal Instantiator(Uno.Collections.IList<Uno.UX.Template> templates) :824
void Instantiator__ctor_4_fn(Instantiator* __this, uObject* templates)
{
    __this->ctor_4(templates);
}

// private void AddNew() :1182
void Instantiator__AddNew_fn(Instantiator* __this)
{
    __this->AddNew();
}

// private void AddTemplate(Uno.UX.Template f, Uno.Collections.List<Fuse.Node> newElements) :1243
void Instantiator__AddTemplate_fn(Instantiator* __this, ::g::Uno::UX::Template* f, ::g::Uno::Collections::List* newElements)
{
    __this->AddTemplate(f, newElements);
}

// private void Fuse.ITemplateObserver.OnTemplatesChangedWileRooted() :901
void Instantiator__FuseITemplateObserverOnTemplatesChangedWileRooted_fn(Instantiator* __this)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "Fuse.ITemplateObserver.OnTemplatesChangedWileRooted()");
    __this->Repopulate();
}

// private void Fuse.Scripting.IObserver.OnAdd(object addedValue) :1042
void Instantiator__FuseScriptingIObserverOnAdd_fn(Instantiator* __this, uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "Fuse.Scripting.IObserver.OnAdd(object)");

    if (!__this->_listening)
        return;

    __this->AddNew();
    __this->SetValid();
}

// private void Fuse.Scripting.IObserver.OnClear() :1100
void Instantiator__FuseScriptingIObserverOnClear_fn(Instantiator* __this)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "Fuse.Scripting.IObserver.OnClear()");

    if (!__this->_listening)
        return;

    __this->RemoveAll();
    __this->SetValid();
}

// private void Fuse.Scripting.IObserver.OnFailed(string message) :1035
void Instantiator__FuseScriptingIObserverOnFailed_fn(Instantiator* __this, uString* message)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "Fuse.Scripting.IObserver.OnFailed(string)");

    if (!__this->_listening)
        return;

    __this->RemoveAll();
    __this->SetFailed(message);
}

// private void Fuse.Scripting.IObserver.OnInsertAt(int index, object value) :1071
void Instantiator__FuseScriptingIObserverOnInsertAt_fn(Instantiator* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "Fuse.Scripting.IObserver.OnInsertAt(int,object)");
    int index_ = *index;

    if (!__this->_listening)
        return;

    __this->InsertNew(index_);
    __this->SetValid();
}

// private void Fuse.Scripting.IObserver.OnNewAll(Fuse.Scripting.ListMirror values) :1087
void Instantiator__FuseScriptingIObserverOnNewAll_fn(Instantiator* __this, ::g::Fuse::Scripting::ListMirror* values)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "Fuse.Scripting.IObserver.OnNewAll(Fuse.Scripting.ListMirror)");

    if (!__this->_listening)
        return;

    __this->RemoveAll();

    for (int i = 0; i < uPtr(values)->Length(); i++)
        __this->AddNew();

    __this->SetValid();
}

// private void Fuse.Scripting.IObserver.OnNewAt(int index, object value) :1079
void Instantiator__FuseScriptingIObserverOnNewAt_fn(Instantiator* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "Fuse.Scripting.IObserver.OnNewAt(int,object)");
    int index_ = *index;

    if (!__this->_listening)
        return;

    __this->RemoveAt(index_);
    __this->InsertNew(index_);
}

// private void Fuse.Scripting.IObserver.OnRemoveAt(int index) :1049
void Instantiator__FuseScriptingIObserverOnRemoveAt_fn(Instantiator* __this, int* index)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "Fuse.Scripting.IObserver.OnRemoveAt(int)");
    int index_ = *index;

    if (!__this->_listening)
        return;

    if ((index_ < 0) || (index_ >= uPtr(__this->_nodes)->Count()))
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[35/*"Removing an...*/], __this, ::STRINGS[10/*"/usr/local/...*/], 1055, ::STRINGS[36/*"Fuse.Script...*/]);
        return;
    }

    __this->RemoveAt(index_);
}

// private void Fuse.Scripting.IObserver.OnSet(object newValue) :1026
void Instantiator__FuseScriptingIObserverOnSet_fn(Instantiator* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "Fuse.Scripting.IObserver.OnSet(object)");

    if (!__this->_listening)
        return;

    __this->RemoveAll();
    __this->AddNew();
    __this->SetValid();
}

// private object GetData(int index) :969
void Instantiator__GetData_fn(Instantiator* __this, int* index, uObject** __retval)
{
    *__retval = __this->GetData(*index);
}

// protected internal override sealed void GetImplicitDataForChild(Fuse.Node n, Uno.Collections.List<object> result) :980
void Instantiator__GetImplicitDataForChild_fn(Instantiator* __this, ::g::Fuse::Node* n, ::g::Uno::Collections::List* result)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "GetImplicitDataForChild(Fuse.Node,Uno.Collections.List<object>)");
    int index = __this->IndexOfChild(n);

    if (index != -1)
    {
        uObject* data = __this->GetData(index);

        if (data != NULL)
            ::g::Uno::Collections::List__Add_fn(uPtr(result), data);
    }
}

// private Fuse.Node GetLastNodeFromIndex(int index) :1255
void Instantiator__GetLastNodeFromIndex_fn(Instantiator* __this, int* index, ::g::Fuse::Node** __retval)
{
    *__retval = __this->GetLastNodeFromIndex(*index);
}

// internal override sealed Fuse.Node GetLastNodeInGroup() :1250
void Instantiator__GetLastNodeInGroup_fn(Instantiator* __this, ::g::Fuse::Node** __retval)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "GetLastNodeInGroup()");
    return *__retval = __this->GetLastNodeFromIndex(uPtr(__this->_nodes)->Count() - 1), void();
}

// private string GetMatchKey(int index) :1169
void Instantiator__GetMatchKey_fn(Instantiator* __this, int* index, uString** __retval)
{
    *__retval = __this->GetMatchKey(*index);
}

// private int IndexOfChild(Fuse.Node child) :958
void Instantiator__IndexOfChild_fn(Instantiator* __this, ::g::Fuse::Node* child, int* __retval)
{
    *__retval = __this->IndexOfChild(child);
}

// private void InsertNew(int index) :1187
void Instantiator__InsertNew_fn(Instantiator* __this, int* index)
{
    __this->InsertNew(*index);
}

// public string get_MatchKey() :1158
void Instantiator__get_MatchKey_fn(Instantiator* __this, uString** __retval)
{
    *__retval = __this->MatchKey();
}

// public void set_MatchKey(string value) :1159
void Instantiator__set_MatchKey_fn(Instantiator* __this, uString* value)
{
    __this->MatchKey(value);
}

// protected internal Instantiator New() :829
void Instantiator__New2_fn(Instantiator** __retval)
{
    *__retval = Instantiator::New2();
}

// protected internal Instantiator New(Uno.Collections.IList<Uno.UX.Template> templates) :824
void Instantiator__New3_fn(uObject* templates, Instantiator** __retval)
{
    *__retval = Instantiator::New3(templates);
}

// protected internal void OnItemsChanged() :937
void Instantiator__OnItemsChanged_fn(Instantiator* __this)
{
    __this->OnItemsChanged();
}

// protected override sealed void OnRooted() :912
void Instantiator__OnRooted_fn(Instantiator* __this)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->OnItemsChanged();
}

// private void OnTemplatesChanged(Uno.UX.Template factory) :906
void Instantiator__OnTemplatesChanged_fn(Instantiator* __this, ::g::Uno::UX::Template* factory)
{
    __this->OnTemplatesChanged(factory);
}

// protected override sealed void OnUnrooted() :918
void Instantiator__OnUnrooted_fn(Instantiator* __this)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "OnUnrooted()");

    if (__this->_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_subscription), ::TYPES[28/*Uno.IDisposable*/]));
        __this->_subscription = NULL;
        __this->_listening = false;
    }

    __this->RemoveAll();
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void RemoveAll() :1116
void Instantiator__RemoveAll_fn(Instantiator* __this)
{
    __this->RemoveAll();
}

// private void RemoveAt(int index) :1062
void Instantiator__RemoveAt_fn(Instantiator* __this, int* index)
{
    __this->RemoveAt(*index);
}

// private void ReplaceAll(object[] dcs) :1109
void Instantiator__ReplaceAll_fn(Instantiator* __this, uArray* dcs)
{
    __this->ReplaceAll(dcs);
}

// private void Repopulate() :990
void Instantiator__Repopulate_fn(Instantiator* __this)
{
    __this->Repopulate();
}

// private void SetFailed(string message) :1018
void Instantiator__SetFailed_fn(Instantiator* __this, uString* message)
{
    __this->SetFailed(message);
}

// private void SetValid() :1012
void Instantiator__SetValid_fn(Instantiator* __this)
{
    __this->SetValid();
}

// public generated string get_TemplateKey() :898
void Instantiator__get_TemplateKey_fn(Instantiator* __this, uString** __retval)
{
    *__retval = __this->TemplateKey();
}

// public generated void set_TemplateKey(string value) :898
void Instantiator__set_TemplateKey_fn(Instantiator* __this, uString* value)
{
    __this->TemplateKey(value);
}

// public Uno.Collections.IList<Uno.UX.Template> get_Templates() :841
void Instantiator__get_Templates_fn(Instantiator* __this, uObject** __retval)
{
    *__retval = __this->Templates();
}

// public generated Fuse.Visual get_TemplateSource() :887
void Instantiator__get_TemplateSource_fn(Instantiator* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->TemplateSource();
}

// public generated void set_TemplateSource(Fuse.Visual value) :887
void Instantiator__set_TemplateSource_fn(Instantiator* __this, ::g::Fuse::Visual* value)
{
    __this->TemplateSource(value);
}

// protected internal Instantiator() [instance] :829
void Instantiator::ctor_3()
{
    uStackFrame __("Fuse.Reactive.Instantiator", ".ctor()");
    _nodes = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[37/*Uno.Collections.List<Uno.Collections.List<Fuse.Node>>*/]));
    ctor_2();
}

// protected internal Instantiator(Uno.Collections.IList<Uno.UX.Template> templates) [instance] :824
void Instantiator::ctor_4(uObject* templates)
{
    uStackFrame __("Fuse.Reactive.Instantiator", ".ctor(Uno.Collections.IList<Uno.UX.Template>)");
    _nodes = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[37/*Uno.Collections.List<Uno.Collections.List<Fuse.Node>>*/]));
    ctor_2();
    _templates = templates;
}

// private void AddNew() [instance] :1182
void Instantiator::AddNew()
{
    uStackFrame __("Fuse.Reactive.Instantiator", "AddNew()");
    InsertNew(uPtr(_nodes)->Count());
}

// private void AddTemplate(Uno.UX.Template f, Uno.Collections.List<Fuse.Node> newElements) [instance] :1243
void Instantiator::AddTemplate(::g::Uno::UX::Template* f, ::g::Uno::Collections::List* newElements)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "AddTemplate(Uno.UX.Template,Uno.Collections.List<Fuse.Node>)");
    ::g::Fuse::Node* elm = uAs< ::g::Fuse::Node*>(uPtr(f)->New1(), ::TYPES[6/*Fuse.Node*/]);
    uPtr(elm)->OverrideContextParent = this;

    if (elm != NULL)
        ::g::Uno::Collections::List__Add_fn(uPtr(newElements), elm);
}

// private object GetData(int index) [instance] :969
uObject* Instantiator::GetData(int index)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "GetData(int)");
    uArray* e = uAs<uArray*>(_items, ::TYPES[12/*object[]*/]);

    if (e != NULL)
        return uPtr(e)->Strong<uObject*>(index);

    ::g::Fuse::Scripting::ListMirror* a = uAs< ::g::Fuse::Scripting::ListMirror*>(_items, ::TYPES[38/*Fuse.Scripting.ListMirror*/]);

    if (a != NULL)
        return ::g::Fuse::Scripting::Context::Wrap(uPtr(a)->Item(index));

    return NULL;
}

// private Fuse.Node GetLastNodeFromIndex(int index) [instance] :1255
::g::Fuse::Node* Instantiator::GetLastNodeFromIndex(int index)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "GetLastNodeFromIndex(int)");
    ::g::Uno::Collections::List* ret6;
    ::g::Fuse::Node* ret7;

    if (index >= uPtr(_nodes)->Count())
        index = uPtr(_nodes)->Count() - 1;

    while (index >= 0)
    {
        ::g::Uno::Collections::List* lastList = (::g::Uno::Collections::List__get_Item_fn(uPtr(_nodes), uCRef<int>(index), &ret6), ret6);

        if (uPtr(lastList)->Count() != 0)
            return uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(lastList), uCRef<int>(uPtr(lastList)->Count() - 1), &ret7), ret7))->GetLastNodeInGroup();

        index--;
    }

    return this;
}

// private string GetMatchKey(int index) [instance] :1169
uString* Instantiator::GetMatchKey(int index)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "GetMatchKey(int)");
    ::g::Fuse::Scripting::ObjectMirror* so = uAs< ::g::Fuse::Scripting::ObjectMirror*>(GetData(index), ::TYPES[39/*Fuse.Scripting.ObjectMirror*/]);

    if ((so != NULL) && ::g::Uno::String::op_Inequality(_matchKey, NULL))
    {
        if (uPtr(so)->ContainsKey(_matchKey))
            return uAs<uString*>(uPtr(so)->Item(_matchKey), ::TYPES[17/*string*/]);
    }

    return NULL;
}

// private int IndexOfChild(Fuse.Node child) [instance] :958
int Instantiator::IndexOfChild(::g::Fuse::Node* child)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "IndexOfChild(Fuse.Node)");
    ::g::Uno::Collections::List* ret8;
    ::g::Fuse::Node* ret9;

    for (int i = 0; i < uPtr(_nodes)->Count(); i++)
    {
        ::g::Uno::Collections::List* list = (::g::Uno::Collections::List__get_Item_fn(uPtr(_nodes), uCRef<int>(i), &ret8), ret8);

        for (int n = 0; n < uPtr(list)->Count(); n++)
            if ((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(n), &ret9), ret9) == child)
                return i;
    }

    return -1;
}

// private void InsertNew(int index) [instance] :1187
void Instantiator::InsertNew(int index)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "InsertNew(int)");
    ::g::Uno::UX::Template* ret10;
    int ret11;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret12;
    ::g::Uno::Collections::List* newElements = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[1/*Uno.Collections.List<Fuse.Node>*/]);
    bool anyMatched = false;
    ::g::Uno::UX::Template* defaultTemplate = NULL;
    uString* key = GetMatchKey(index);

    if ((TemplateSource() != NULL) && ::g::Uno::String::op_Inequality(TemplateKey(), NULL))
    {
        ::g::Uno::UX::Template* t = uPtr(TemplateSource())->FindTemplate(TemplateKey());

        if (t != NULL)
        {
            anyMatched = true;
            AddTemplate(t, newElements);
        }
    }

    if (!anyMatched)

        for (uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Templates()), ::TYPES[40/*Uno.Collections.IEnumerable<Uno.UX.Template>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[41/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Uno::UX::Template* f = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[42/*Uno.Collections.IEnumerator<Uno.UX.Template>*/]), &ret10), ret10);

            if (uPtr(f)->IsDefault())
                defaultTemplate = f;

            if (::g::Uno::String::op_Inequality(key, NULL) && ::g::Uno::String::op_Inequality(uPtr(f)->Key(), key))
                continue;

            anyMatched = true;
            AddTemplate(f, newElements);
        }

    if (!anyMatched && (defaultTemplate != NULL))
        AddTemplate(defaultTemplate, newElements);

    ::g::Fuse::Node* lastNode = GetLastNodeFromIndex(index - 1);
    ::g::Uno::Collections::List__Insert_fn(uPtr(_nodes), uCRef<int>(index), newElements);
    uPtr(Parent())->InsertNodes((::g::Uno::Collections::EnumerableExtensions__IndexOf_fn(::TYPES[43/*Uno.Collections.EnumerableExtensions.IndexOf<Fuse.Node>*/], uPtr(Parent())->Children(), lastNode, &ret11), ret11) + 1, uBox(::TYPES[44/*Uno.Collections.List<Fuse.Node>.Enumerator*/], (::g::Uno::Collections::List__GetEnumerator_fn(newElements, &ret12), ret12)));
}

// public string get_MatchKey() [instance] :1158
uString* Instantiator::MatchKey()
{
    uStackFrame __("Fuse.Reactive.Instantiator", "get_MatchKey()");
    return _matchKey;
}

// public void set_MatchKey(string value) [instance] :1159
void Instantiator::MatchKey(uString* value)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "set_MatchKey(string)");

    if (::g::Uno::String::op_Inequality(_matchKey, value))
    {
        _matchKey = value;
        OnItemsChanged();
    }
}

// protected internal void OnItemsChanged() [instance] :937
void Instantiator::OnItemsChanged()
{
    uStackFrame __("Fuse.Reactive.Instantiator", "OnItemsChanged()");

    if (!IsRootingStarted())
        return;

    RemoveAll();
    ::g::Fuse::Scripting::Observable* obs = uAs< ::g::Fuse::Scripting::Observable*>(_items, ::TYPES[29/*Fuse.Scripting.Observable*/]);

    if (obs != NULL)
    {
        if (_subscription != NULL)
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[28/*Uno.IDisposable*/]));

        _listening = true;
        _subscription = (uObject*)uPtr(obs)->Subscribe((uObject*)this);
    }
    else 
        Repopulate();
}

// private void OnTemplatesChanged(Uno.UX.Template factory) [instance] :906
void Instantiator::OnTemplatesChanged(::g::Uno::UX::Template* factory)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "OnTemplatesChanged(Uno.UX.Template)");

    if (!IsRootingCompleted())
        return;

    Repopulate();
}

// private void RemoveAll() [instance] :1116
void Instantiator::RemoveAll()
{
    uStackFrame __("Fuse.Reactive.Instantiator", "RemoveAll()");
    ::g::Uno::Collections::List* ret13;
    ::g::Fuse::Node* ret14;

    if (uPtr(_nodes)->Count() == 0)
        return;

    ::g::Uno::Collections::List* nodes = _nodes;
    _nodes = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[37/*Uno.Collections.List<Uno.Collections.List<Fuse.Node>>*/]));

    for (int i = 0; i < uPtr(nodes)->Count(); i++)
    {
        ::g::Uno::Collections::List* l = (::g::Uno::Collections::List__get_Item_fn(uPtr(nodes), uCRef<int>(i), &ret13), ret13);

        for (int n = 0; n < uPtr(l)->Count(); n++)
            uPtr(Parent())->BeginRemoveChild((::g::Uno::Collections::List__get_Item_fn(uPtr(l), uCRef<int>(n), &ret14), ret14), NULL);
    }
}

// private void RemoveAt(int index) [instance] :1062
void Instantiator::RemoveAt(int index)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "RemoveAt(int)");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret15;
    ::g::Uno::Collections::List* ret16;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_nodes), uCRef<int>(index), &ret16), ret16)), &ret15), ret15); enum1.MoveNext(::TYPES[44/*Uno.Collections.List<Fuse.Node>.Enumerator*/]); )
    {
        ::g::Fuse::Node* c = enum1.Current(::TYPES[44/*Uno.Collections.List<Fuse.Node>.Enumerator*/]);
        uPtr(Parent())->BeginRemoveChild(c, NULL);
    }

    uPtr(_nodes)->RemoveAt(index);
    SetValid();
}

// private void ReplaceAll(object[] dcs) [instance] :1109
void Instantiator::ReplaceAll(uArray* dcs)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "ReplaceAll(object[])");
    RemoveAll();

    for (int i = 0; i < uPtr(dcs)->Length(); i++)
        AddNew();
}

// private void Repopulate() [instance] :990
void Instantiator::Repopulate()
{
    uStackFrame __("Fuse.Reactive.Instantiator", "Repopulate()");
    uArray* e = uAs<uArray*>(_items, ::TYPES[12/*object[]*/]);
    ::g::Fuse::Scripting::ListMirror* a = uAs< ::g::Fuse::Scripting::ListMirror*>(_items, ::TYPES[38/*Fuse.Scripting.ListMirror*/]);

    if (e != NULL)
    {
        ReplaceAll(e);
        return;
    }
    else  if (a != NULL)
    {
        RemoveAll();

        for (int i = 0; i < uPtr(a)->Length(); i++)
            AddNew();
    }
    else 
    {
        RemoveAll();

        for (int i1 = 0; i1 < _count; i1++)
            AddNew();
    }
}

// private void SetFailed(string message) [instance] :1018
void Instantiator::SetFailed(uString* message)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "SetFailed(string)");

    if (Parent() != NULL)
        ::g::Fuse::Triggers::WhileFailed::SetState(Parent(), true, message);
}

// private void SetValid() [instance] :1012
void Instantiator::SetValid()
{
    uStackFrame __("Fuse.Reactive.Instantiator", "SetValid()");

    if (Parent() != NULL)
        ::g::Fuse::Triggers::WhileFailed::SetState(Parent(), false, NULL);
}

// public generated string get_TemplateKey() [instance] :898
uString* Instantiator::TemplateKey()
{
    uStackFrame __("Fuse.Reactive.Instantiator", "get_TemplateKey()");
    return _TemplateKey;
}

// public generated void set_TemplateKey(string value) [instance] :898
void Instantiator::TemplateKey(uString* value)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "set_TemplateKey(string)");
    _TemplateKey = value;
}

// public Uno.Collections.IList<Uno.UX.Template> get_Templates() [instance] :841
uObject* Instantiator::Templates()
{
    uStackFrame __("Fuse.Reactive.Instantiator", "get_Templates()");
    uObject* ind3 = _templates;
    return (ind3 != NULL) ? ind3 : (uObject*)(_templates = (uObject*)((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[14/*Uno.Collections.ObservableList<Uno.UX.Template>*/], uDelegate::New(::TYPES[15/*Uno.Action<Uno.UX.Template>*/], (void*)Instantiator__OnTemplatesChanged_fn, this), uDelegate::New(::TYPES[15/*Uno.Action<Uno.UX.Template>*/], (void*)Instantiator__OnTemplatesChanged_fn, this))));
}

// public generated Fuse.Visual get_TemplateSource() [instance] :887
::g::Fuse::Visual* Instantiator::TemplateSource()
{
    uStackFrame __("Fuse.Reactive.Instantiator", "get_TemplateSource()");
    return _TemplateSource;
}

// public generated void set_TemplateSource(Fuse.Visual value) [instance] :887
void Instantiator::TemplateSource(::g::Fuse::Visual* value)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "set_TemplateSource(Fuse.Visual)");
    _TemplateSource = value;
}

// protected internal Instantiator New() [static] :829
Instantiator* Instantiator::New2()
{
    Instantiator* obj5 = (Instantiator*)uNew(Instantiator_typeof());
    obj5->ctor_3();
    return obj5;
}

// protected internal Instantiator New(Uno.Collections.IList<Uno.UX.Template> templates) [static] :824
Instantiator* Instantiator::New3(uObject* templates)
{
    Instantiator* obj4 = (Instantiator*)uNew(Instantiator_typeof());
    obj4->ctor_4(templates);
    return obj4;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/$.uno
// --------------------------------------------------------

// public sealed class JavaScript :1302
// {
// static JavaScript() :1302
static void JavaScript__cctor_1_fn(uType* __type)
{
    JavaScript::_resetHookMutex_ = ::g::Uno::Threading::Mutex::Create();
}

static void JavaScript_build(uType* type)
{
    ::STRINGS[37] = uString::Const("exports");
    ::STRINGS[38] = uString::Const("JavaScript error in ");
    ::STRINGS[39] = uString::Const(" fixed!");
    ::STRINGS[10] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/$.uno");
    ::STRINGS[40] = uString::Const("EvaluateModule");
    ::STRINGS[41] = uString::Const("JavaScript error");
    ::STRINGS[42] = uString::Const("Cannot require() a rooted module");
    ::TYPES[4] = ::g::Uno::Action_typeof();
    ::TYPES[28] = ::g::Uno::IDisposable_typeof();
    ::TYPES[45] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Scripting::NativeModule_typeof());
    ::TYPES[46] = ::g::Uno::UX::Resource_typeof()->MakeMethod(1, ::g::Fuse::Scripting::NativeModule_typeof());
    ::TYPES[41] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[47] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Scripting::NativeModule_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(JavaScript_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(JavaScript_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(JavaScript_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(JavaScript_type, interface3),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(JavaScript_type, interface4),
        ::g::Fuse::IDataProvider_typeof(), offsetof(JavaScript_type, interface5));
    type->SetFields(13,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _currentDc), 0,
        ::g::Fuse::Scripting::ModuleResult_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _moduleResult), 0,
        ::g::Fuse::Scripting::ScriptModule_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _scriptModule), 0,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::Reactive::JavaScript::_javaScriptCounter_, uFieldFlagsStatic,
        ::g::Uno::Threading::Mutex_typeof(), (uintptr_t)&::g::Fuse::Reactive::JavaScript::_resetHookMutex_, uFieldFlagsStatic,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), (uintptr_t)&::g::Fuse::Reactive::JavaScript::_worker_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Fuse::Reactive::JavaScript::previousErrorFile_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(9,
        new uFunction("get_Code", NULL, (void*)JavaScript__get_Code_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Code", NULL, (void*)JavaScript__set_Code_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_File", NULL, (void*)JavaScript__get_File_fn, 0, false, ::g::Uno::UX::FileSource_typeof(), 0),
        new uFunction("set_File", NULL, (void*)JavaScript__set_File_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::FileSource_typeof()),
        new uFunction("get_FileName", NULL, (void*)JavaScript__get_FileName_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_FileName", NULL, (void*)JavaScript__set_FileName_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_LineNumber", NULL, (void*)JavaScript__get_LineNumber_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_LineNumber", NULL, (void*)JavaScript__set_LineNumber_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)JavaScript__New2_fn, 0, true, JavaScript_typeof(), 1, ::g::Uno::UX::NameTable_typeof()));
}

JavaScript_type* JavaScript_typeof()
{
    static uSStrong<JavaScript_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 20;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(JavaScript);
    options.TypeSize = sizeof(JavaScript_type);
    type = (JavaScript_type*)uClassType::New("Fuse.Reactive.JavaScript", options);
    type->fp_build_ = JavaScript_build;
    type->fp_cctor_ = JavaScript__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))JavaScript__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))JavaScript__OnUnrooted_fn;
    type->interface4.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))JavaScript__FuseScriptingIModuleProviderGetModule_fn;
    type->interface5.fp_get_Data = (void(*)(uObject*, uObject**))JavaScript__FuseIDataProviderget_Data_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public JavaScript(Uno.UX.NameTable nameTable) :1311
void JavaScript__ctor_3_fn(JavaScript* __this, ::g::Uno::UX::NameTable* nameTable)
{
    __this->ctor_3(nameTable);
}

// public string get_Code() :1456
void JavaScript__get_Code_fn(JavaScript* __this, uString** __retval)
{
    *__retval = __this->Code();
}

// public void set_Code(string value) :1457
void JavaScript__set_Code_fn(JavaScript* __this, uString* value)
{
    __this->Code(value);
}

// private void DispatchEvaluate() :1359
void JavaScript__DispatchEvaluate_fn(JavaScript* __this)
{
    __this->DispatchEvaluate();
}

// private object EvaluateExports() :1407
void JavaScript__EvaluateExports_fn(JavaScript* __this, uObject** __retval)
{
    *__retval = __this->EvaluateExports();
}

// private void EvaluateModule() :1419
void JavaScript__EvaluateModule_fn(JavaScript* __this)
{
    __this->EvaluateModule();
}

// public Uno.UX.FileSource get_File() :1477
void JavaScript__get_File_fn(JavaScript* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :1478
void JavaScript__set_File_fn(JavaScript* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public string get_FileName() :1485
void JavaScript__get_FileName_fn(JavaScript* __this, uString** __retval)
{
    *__retval = __this->FileName();
}

// public void set_FileName(string value) :1486
void JavaScript__set_FileName_fn(JavaScript* __this, uString* value)
{
    __this->FileName(value);
}

// private object Fuse.IDataProvider.get_Data() :1366
void JavaScript__FuseIDataProviderget_Data_fn(JavaScript* __this, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "Fuse.IDataProvider.get_Data()");
    return *__retval = __this->_currentDc, void();
}

// private Fuse.Scripting.Module Fuse.Scripting.IModuleProvider.GetModule() :1348
void JavaScript__FuseScriptingIModuleProviderGetModule_fn(JavaScript* __this, ::g::Fuse::Scripting::Module** __retval)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "Fuse.Scripting.IModuleProvider.GetModule()");

    if (__this->IsRootingCompleted())
        U_THROW(::g::Uno::Exception::New2(::STRINGS[42/*"Cannot requ...*/]));

    return *__retval = __this->_scriptModule, void();
}

// public int get_LineNumber() :1470
void JavaScript__get_LineNumber_fn(JavaScript* __this, int* __retval)
{
    *__retval = __this->LineNumber();
}

// public void set_LineNumber(int value) :1471
void JavaScript__set_LineNumber_fn(JavaScript* __this, int* value)
{
    __this->LineNumber(*value);
}

// public JavaScript New(Uno.UX.NameTable nameTable) :1311
void JavaScript__New2_fn(::g::Uno::UX::NameTable* nameTable, JavaScript** __retval)
{
    *__retval = JavaScript::New2(nameTable);
}

// protected override sealed void OnRooted() :1321
void JavaScript__OnRooted_fn(JavaScript* __this)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    JavaScript::_javaScriptCounter()++;
    __this->DispatchEvaluate();
}

// protected override sealed void OnUnrooted() :1328
void JavaScript__OnUnrooted_fn(JavaScript* __this)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "OnUnrooted()");
    ::g::Fuse::Scripting::NativeModule* ret3;
    __this->SetDataContext(NULL);

    if (__this->_moduleResult != NULL)
    {
        uPtr(__this->_moduleResult)->Dispose();
        __this->_moduleResult = NULL;
    }

    if ((--JavaScript::_javaScriptCounter()) <= 0)

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr((uObject*)::g::Uno::UX::Resource::GetGlobalsOfType(::TYPES[46/*Uno.UX.Resource.GetGlobalsOfType<Fuse.Scripting.NativeModule>*/])), ::TYPES[45/*Uno.Collections.IEnumerable<Fuse.Scripting.NativeModule>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[41/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Fuse::Scripting::NativeModule* nm = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[47/*Uno.Collections.IEnumerator<Fuse.Scripting.NativeModule>*/]), &ret3), ret3);
            uPtr(nm)->InternalReset();
        }

    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void SetDataContext(object newDc) :1368
void JavaScript__SetDataContext_fn(JavaScript* __this, uObject* newDc)
{
    __this->SetDataContext(newDc);
}

// internal static Fuse.Reactive.ThreadWorker get_Worker() :1306
void JavaScript__get_Worker_fn(::g::Fuse::Reactive::ThreadWorker** __retval)
{
    *__retval = JavaScript::Worker();
}

int JavaScript::_javaScriptCounter_;
uSStrong< ::g::Uno::Threading::Mutex*> JavaScript::_resetHookMutex_;
uSStrong< ::g::Fuse::Reactive::ThreadWorker*> JavaScript::_worker_;
uSStrong<uString*> JavaScript::previousErrorFile_;

// public JavaScript(Uno.UX.NameTable nameTable) [instance] :1311
void JavaScript::ctor_3(::g::Uno::UX::NameTable* nameTable)
{
    uStackFrame __("Fuse.Reactive.JavaScript", ".ctor(Uno.UX.NameTable)");
    ctor_2();

    if (JavaScript::_worker() == NULL)
        JavaScript::_worker() = ::g::Fuse::Reactive::ThreadWorker::New1();

    _scriptModule = ::g::Fuse::Reactive::RootableScriptModule::New2(JavaScript::_worker(), nameTable);
}

// public string get_Code() [instance] :1456
uString* JavaScript::Code()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "get_Code()");
    return uPtr(_scriptModule)->Code();
}

// public void set_Code(string value) [instance] :1457
void JavaScript::Code(uString* value)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "set_Code(string)");

    if (::g::Uno::String::op_Inequality(uPtr(_scriptModule)->Code(), value))
        uPtr(_scriptModule)->Code(value);
}

// private void DispatchEvaluate() [instance] :1359
void JavaScript::DispatchEvaluate()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "DispatchEvaluate()");

    if (!IsRootingStarted())
        return;

    JavaScript__EvaluateDataContext::New1(JavaScript::Worker(), this);
}

// private object EvaluateExports() [instance] :1407
uObject* JavaScript::EvaluateExports()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "EvaluateExports()");
    EvaluateModule();

    if (_moduleResult != NULL)
        return uPtr(uPtr(_moduleResult)->Object)->Item(::STRINGS[37/*"exports"*/]);

    return NULL;
}

// private void EvaluateModule() [instance] :1419
void JavaScript::EvaluateModule()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "EvaluateModule()");
    uString* globalId = ::g::Uno::UX::Resource::GetGlobalKey(this);
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(JavaScript::_resetHookMutex());

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[28/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Fuse::Scripting::ModuleResult* newModuleResult = uPtr(_scriptModule)->Evaluate1(uPtr(JavaScript::_worker())->Context(), globalId);
        uPtr(newModuleResult)->AddDependency(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)JavaScript__DispatchEvaluate_fn, this));

        if (newModuleResult->Error() == NULL)
        {
            _moduleResult = newModuleResult;

            if (::g::Uno::String::op_Equality(JavaScript::previousErrorFile(), ::g::Uno::String::op_Addition1(FileName(), uBox<int>(::TYPES[22/*int*/], LineNumber()))))
            {
                ::g::Fuse::Diagnostics::UserSuccess(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[38/*"JavaScript ...*/], FileName()), ::STRINGS[39/*" fixed!"*/]), this, ::STRINGS[10/*"/usr/local/...*/], 1434, ::STRINGS[40/*"EvaluateMod...*/]);
                JavaScript::previousErrorFile() = NULL;
            }
        }
        else 
        {
            ::g::Fuse::Scripting::ScriptException* se = uPtr(newModuleResult)->Error();

            if (!::g::Uno::String::Contains(uPtr(uPtr(se)->Message()), ::g::Fuse::Scripting::ScriptModule::ModuleContainsAnErrorMessage()))
            {
                ::g::Fuse::Diagnostics::UserScriptError(::STRINGS[41/*"JavaScript ...*/], se, this, ::STRINGS[10/*"/usr/local/...*/], 1445, ::STRINGS[40/*"EvaluateMod...*/]);
                JavaScript::previousErrorFile() = ::g::Uno::String::op_Addition1(FileName(), uBox<int>(::TYPES[22/*int*/], LineNumber()));
            }
        }
    }
}

// public Uno.UX.FileSource get_File() [instance] :1477
::g::Uno::UX::FileSource* JavaScript::File()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "get_File()");
    return uPtr(_scriptModule)->File();
}

// public void set_File(Uno.UX.FileSource value) [instance] :1478
void JavaScript::File(::g::Uno::UX::FileSource* value)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "set_File(Uno.UX.FileSource)");
    uPtr(_scriptModule)->File(value);
}

// public string get_FileName() [instance] :1485
uString* JavaScript::FileName()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "get_FileName()");
    return uPtr(_scriptModule)->FileName();
}

// public void set_FileName(string value) [instance] :1486
void JavaScript::FileName(uString* value)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "set_FileName(string)");
    uPtr(_scriptModule)->FileName(value);
}

// public int get_LineNumber() [instance] :1470
int JavaScript::LineNumber()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "get_LineNumber()");
    return uPtr(_scriptModule)->LineNumberOffset();
}

// public void set_LineNumber(int value) [instance] :1471
void JavaScript::LineNumber(int value)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "set_LineNumber(int)");
    uPtr(_scriptModule)->LineNumberOffset(value);
}

// private void SetDataContext(object newDc) [instance] :1368
void JavaScript::SetDataContext(uObject* newDc)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "SetDataContext(object)");
    uObject* oldDc = _currentDc;
    _currentDc = newDc;

    if (Parent() != NULL)
        uPtr(Parent())->OnSubtreeDataContextChanged();

    if (oldDc != NULL)
        ::g::Fuse::Scripting::ValueMirror::Unsubscribe1(oldDc);
}

// public JavaScript New(Uno.UX.NameTable nameTable) [static] :1311
JavaScript* JavaScript::New2(::g::Uno::UX::NameTable* nameTable)
{
    JavaScript* obj2 = (JavaScript*)uNew(JavaScript_typeof());
    obj2->ctor_3(nameTable);
    return obj2;
}

// internal static Fuse.Reactive.ThreadWorker get_Worker() [static] :1306
::g::Fuse::Reactive::ThreadWorker* JavaScript::Worker()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "get_Worker()");
    JavaScript_typeof()->Init();
    return JavaScript::_worker();
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/$.uno
// --------------------------------------------------------

// public sealed class Match :1523
// {
static void Match_build(uType* type)
{
    ::STRINGS[43] = uString::Const("Not handled: OnAdd");
    ::STRINGS[44] = uString::Const("Not handled: InsertAt");
    ::STRINGS[45] = uString::Const("<Match> can not be used on lists (received OnNewAll)");
    ::STRINGS[46] = uString::Const("Not handled: OnNewAt");
    ::STRINGS[47] = uString::Const("<Match> can not be used on lists (received OnRemoveAt)");
    ::STRINGS[48] = uString::Const("Case already has a Match");
    ::TYPES[1] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[43] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Fuse::Node_typeof());
    ::TYPES[40] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    ::TYPES[41] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[42] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    ::TYPES[6] = ::g::Fuse::Node_typeof();
    ::TYPES[44] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[48] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof());
    ::TYPES[49] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof());
    ::TYPES[13] = ::g::Uno::Bool_typeof();
    ::TYPES[50] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof());
    ::TYPES[51] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof());
    ::TYPES[22] = ::g::Uno::Int_typeof();
    ::TYPES[16] = ::g::Uno::Double_typeof();
    ::TYPES[17] = ::g::Uno::String_typeof();
    ::TYPES[29] = ::g::Fuse::Scripting::Observable_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Match_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Match_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Match_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Match_type, interface3),
        ::g::Fuse::Scripting::IObserver_typeof(), offsetof(Match_type, interface4));
    type->SetFields(13,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof()), offsetof(::g::Fuse::Reactive::Match, _cases), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Reactive::Match, _elements), 0,
        ::g::Fuse::Reactive::Case_typeof(), offsetof(::g::Fuse::Reactive::Match, _oldCase), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Match, _realValue), 0,
        ::g::Fuse::Scripting::Observable__Subscription_typeof(), offsetof(::g::Fuse::Reactive::Match, _subscription), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Match, _value), 0);
    type->Reflection.SetFunctions(12,
        new uFunction("get_Bool", NULL, (void*)Match__get_Bool_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Bool", NULL, (void*)Match__set_Bool_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Cases", NULL, (void*)Match__get_Cases_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof()), 0),
        new uFunction("get_Integer", NULL, (void*)Match__get_Integer_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_Integer", NULL, (void*)Match__set_Integer_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)Match__New2_fn, 0, true, Match_typeof(), 0),
        new uFunction("get_Number", NULL, (void*)Match__get_Number_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Number", NULL, (void*)Match__set_Number_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_String", NULL, (void*)Match__get_String_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_String", NULL, (void*)Match__set_String_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Value", NULL, (void*)Match__get_Value_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)Match__set_Value_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()));
}

Match_type* Match_typeof()
{
    static uSStrong<Match_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 19;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Match);
    options.TypeSize = sizeof(Match_type);
    type = (Match_type*)uClassType::New("Fuse.Reactive.Match", options);
    type->fp_build_ = Match_build;
    type->fp_ctor_ = (void*)Match__New2_fn;
    type->fp_GetLastNodeInGroup = (void(*)(::g::Fuse::Node*, ::g::Fuse::Node**))Match__GetLastNodeInGroup_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Match__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Match__OnUnrooted_fn;
    type->interface4.fp_OnSet = (void(*)(uObject*, uObject*))Match__FuseScriptingIObserverOnSet_fn;
    type->interface4.fp_OnClear = (void(*)(uObject*))Match__FuseScriptingIObserverOnClear_fn;
    type->interface4.fp_OnAdd = (void(*)(uObject*, uObject*))Match__FuseScriptingIObserverOnAdd_fn;
    type->interface4.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))Match__FuseScriptingIObserverOnNewAt_fn;
    type->interface4.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))Match__FuseScriptingIObserverOnInsertAt_fn;
    type->interface4.fp_OnFailed = (void(*)(uObject*, uString*))Match__FuseScriptingIObserverOnFailed_fn;
    type->interface4.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::ListMirror*))Match__FuseScriptingIObserverOnNewAll_fn;
    type->interface4.fp_OnRemoveAt = (void(*)(uObject*, int*))Match__FuseScriptingIObserverOnRemoveAt_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated Match() :1523
void Match__ctor_3_fn(Match* __this)
{
    __this->ctor_3();
}

// private void AddElements(Fuse.Reactive.Case c) :1725
void Match__AddElements_fn(Match* __this, ::g::Fuse::Reactive::Case* c)
{
    __this->AddElements(c);
}

// public bool get_Bool() :1664
void Match__get_Bool_fn(Match* __this, bool* __retval)
{
    *__retval = __this->Bool();
}

// public void set_Bool(bool value) :1665
void Match__set_Bool_fn(Match* __this, bool* value)
{
    __this->Bool(*value);
}

// public Uno.Collections.IList<Fuse.Reactive.Case> get_Cases() :1532
void Match__get_Cases_fn(Match* __this, uObject** __retval)
{
    *__retval = __this->Cases();
}

// private void Fuse.Scripting.IObserver.OnAdd(object addedValue) :1562
void Match__FuseScriptingIObserverOnAdd_fn(Match* __this, uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Scripting.IObserver.OnAdd(object)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[43/*"Not handled...*/]));
}

// private void Fuse.Scripting.IObserver.OnClear() :1557
void Match__FuseScriptingIObserverOnClear_fn(Match* __this)
{
}

// private void Fuse.Scripting.IObserver.OnFailed(string message) :1577
void Match__FuseScriptingIObserverOnFailed_fn(Match* __this, uString* message)
{
}

// private void Fuse.Scripting.IObserver.OnInsertAt(int index, object value) :1572
void Match__FuseScriptingIObserverOnInsertAt_fn(Match* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Scripting.IObserver.OnInsertAt(int,object)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[44/*"Not handled...*/]));
}

// private void Fuse.Scripting.IObserver.OnNewAll(Fuse.Scripting.ListMirror values) :1582
void Match__FuseScriptingIObserverOnNewAll_fn(Match* __this, ::g::Fuse::Scripting::ListMirror* values)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Scripting.IObserver.OnNewAll(Fuse.Scripting.ListMirror)");

    if (uPtr(values)->Length() == 0)
    {
        __this->_realValue = NULL;
        __this->Invalidate();
        return;
    }

    U_THROW(::g::Uno::Exception::New2(::STRINGS[45/*"<Match> can...*/]));
}

// private void Fuse.Scripting.IObserver.OnNewAt(int index, object value) :1567
void Match__FuseScriptingIObserverOnNewAt_fn(Match* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Scripting.IObserver.OnNewAt(int,object)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[46/*"Not handled...*/]));
}

// private void Fuse.Scripting.IObserver.OnRemoveAt(int index) :1594
void Match__FuseScriptingIObserverOnRemoveAt_fn(Match* __this, int* index)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Scripting.IObserver.OnRemoveAt(int)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[47/*"<Match> can...*/]));
}

// private void Fuse.Scripting.IObserver.OnSet(object newValue) :1551
void Match__FuseScriptingIObserverOnSet_fn(Match* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Scripting.IObserver.OnSet(object)");
    __this->_realValue = newValue;
    __this->Invalidate();
}

// internal override sealed Fuse.Node GetLastNodeInGroup() :1748
void Match__GetLastNodeInGroup_fn(Match* __this, ::g::Fuse::Node** __retval)
{
    uStackFrame __("Fuse.Reactive.Match", "GetLastNodeInGroup()");
    ::g::Fuse::Node* ret10;

    if (uPtr(__this->_elements)->Count() == 0)
        return *__retval = __this, void();

    return *__retval = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_elements), uCRef<int>(uPtr(__this->_elements)->Count() - 1), &ret10), ret10), void();
}

// public int get_Integer() :1656
void Match__get_Integer_fn(Match* __this, int* __retval)
{
    *__retval = __this->Integer();
}

// public void set_Integer(int value) :1657
void Match__set_Integer_fn(Match* __this, int* value)
{
    __this->Integer(*value);
}

// internal void Invalidate() :1684
void Match__Invalidate_fn(Match* __this)
{
    __this->Invalidate();
}

// public generated Match New() :1523
void Match__New2_fn(Match** __retval)
{
    *__retval = Match::New2();
}

// public double get_Number() :1648
void Match__get_Number_fn(Match* __this, double* __retval)
{
    *__retval = __this->Number();
}

// public void set_Number(double value) :1649
void Match__set_Number_fn(Match* __this, double* value)
{
    __this->Number(*value);
}

// private void OnCaseAdded(Fuse.Reactive.Case c) :1538
void Match__OnCaseAdded_fn(Match* __this, ::g::Fuse::Reactive::Case* c)
{
    __this->OnCaseAdded(c);
}

// private void OnCaseRemoved(Fuse.Reactive.Case c) :1545
void Match__OnCaseRemoved_fn(Match* __this, ::g::Fuse::Reactive::Case* c)
{
    __this->OnCaseRemoved(c);
}

// protected override sealed void OnRooted() :1668
void Match__OnRooted_fn(Match* __this)
{
    uStackFrame __("Fuse.Reactive.Match", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->Update();
}

// protected override sealed void OnUnrooted() :1674
void Match__OnUnrooted_fn(Match* __this)
{
    uStackFrame __("Fuse.Reactive.Match", "OnUnrooted()");
    __this->RemoveElements();
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void RemoveElements() :1713
void Match__RemoveElements_fn(Match* __this)
{
    __this->RemoveElements();
}

// private Fuse.Reactive.Case SelectCase() :1702
void Match__SelectCase_fn(Match* __this, ::g::Fuse::Reactive::Case** __retval)
{
    *__retval = __this->SelectCase();
}

// public string get_String() :1640
void Match__get_String_fn(Match* __this, uString** __retval)
{
    *__retval = __this->String();
}

// public void set_String(string value) :1641
void Match__set_String_fn(Match* __this, uString* value)
{
    __this->String(value);
}

// private void Update() :1691
void Match__Update_fn(Match* __this)
{
    __this->Update();
}

// public object get_Value() :1607
void Match__get_Value_fn(Match* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(object value) :1608
void Match__set_Value_fn(Match* __this, uObject* value)
{
    __this->Value(value);
}

// public generated Match() [instance] :1523
void Match::ctor_3()
{
    uStackFrame __("Fuse.Reactive.Match", ".ctor()");
    _elements = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[1/*Uno.Collections.List<Fuse.Node>*/]));
    ctor_2();
}

// private void AddElements(Fuse.Reactive.Case c) [instance] :1725
void Match::AddElements(::g::Fuse::Reactive::Case* c)
{
    uStackFrame __("Fuse.Reactive.Match", "AddElements(Fuse.Reactive.Case)");
    ::g::Fuse::Node* ind4;
    int ret7;
    ::g::Uno::UX::Template* ret8;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret9;

    if (c != NULL)
    {
        int childIndex = (::g::Uno::Collections::EnumerableExtensions__IndexOf_fn(::TYPES[43/*Uno.Collections.EnumerableExtensions.IndexOf<Fuse.Node>*/], uPtr(Parent())->Children(), this, &ret7), ret7) + 1;

        for (uObject* enum3 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(c)->Factories()), ::TYPES[40/*Uno.Collections.IEnumerable<Uno.UX.Template>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum3), ::TYPES[41/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Uno::UX::Template* f = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum3), ::TYPES[42/*Uno.Collections.IEnumerator<Uno.UX.Template>*/]), &ret8), ret8);
            ::g::Fuse::Node* elm = uAs< ::g::Fuse::Node*>(uPtr(f)->New1(), ::TYPES[6/*Fuse.Node*/]);

            if (elm != NULL)
            {
                uPtr(elm)->OverrideContextParent = (ind4 = uPtr(elm)->OverrideContextParent, ((ind4 != NULL) ? ind4 : this));
                ::g::Uno::Collections::List__Add_fn(uPtr(_elements), elm);
            }
        }

        uPtr(Parent())->InsertNodes(childIndex, uBox(::TYPES[44/*Uno.Collections.List<Fuse.Node>.Enumerator*/], (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_elements), &ret9), ret9)));
    }

    _oldCase = c;
}

// public bool get_Bool() [instance] :1664
bool Match::Bool()
{
    uStackFrame __("Fuse.Reactive.Match", "get_Bool()");
    return uIs((uObject*)Value(), ::TYPES[13/*bool*/]) ? uUnbox<bool>(::TYPES[13/*bool*/], Value()) : false;
}

// public void set_Bool(bool value) [instance] :1665
void Match::Bool(bool value)
{
    uStackFrame __("Fuse.Reactive.Match", "set_Bool(bool)");
    Value(uBox(::TYPES[13/*bool*/], value));
}

// public Uno.Collections.IList<Fuse.Reactive.Case> get_Cases() [instance] :1532
uObject* Match::Cases()
{
    uStackFrame __("Fuse.Reactive.Match", "get_Cases()");
    uObject* ind5 = _cases;
    return (ind5 != NULL) ? ind5 : (uObject*)(_cases = (uObject*)((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[50/*Uno.Collections.ObservableList<Fuse.Reactive.Case>*/], uDelegate::New(::TYPES[51/*Uno.Action<Fuse.Reactive.Case>*/], (void*)Match__OnCaseAdded_fn, this), uDelegate::New(::TYPES[51/*Uno.Action<Fuse.Reactive.Case>*/], (void*)Match__OnCaseRemoved_fn, this))));
}

// public int get_Integer() [instance] :1656
int Match::Integer()
{
    uStackFrame __("Fuse.Reactive.Match", "get_Integer()");
    return uIs((uObject*)Value(), ::TYPES[22/*int*/]) ? uUnbox<int>(::TYPES[22/*int*/], Value()) : 0;
}

// public void set_Integer(int value) [instance] :1657
void Match::Integer(int value)
{
    uStackFrame __("Fuse.Reactive.Match", "set_Integer(int)");
    Value(uBox<int>(::TYPES[22/*int*/], value));
}

// internal void Invalidate() [instance] :1684
void Match::Invalidate()
{
    uStackFrame __("Fuse.Reactive.Match", "Invalidate()");

    if (!IsRootingCompleted())
        return;

    Update();
}

// public double get_Number() [instance] :1648
double Match::Number()
{
    uStackFrame __("Fuse.Reactive.Match", "get_Number()");
    return uIs((uObject*)Value(), ::TYPES[16/*double*/]) ? uUnbox<double>(::TYPES[16/*double*/], Value()) : 0.0;
}

// public void set_Number(double value) [instance] :1649
void Match::Number(double value)
{
    uStackFrame __("Fuse.Reactive.Match", "set_Number(double)");
    Value(uBox(::TYPES[16/*double*/], value));
}

// private void OnCaseAdded(Fuse.Reactive.Case c) [instance] :1538
void Match::OnCaseAdded(::g::Fuse::Reactive::Case* c)
{
    uStackFrame __("Fuse.Reactive.Match", "OnCaseAdded(Fuse.Reactive.Case)");

    if (uPtr(c)->_match != NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[48/*"Case alread...*/]));

    uPtr(c)->_match = this;
    Invalidate();
}

// private void OnCaseRemoved(Fuse.Reactive.Case c) [instance] :1545
void Match::OnCaseRemoved(::g::Fuse::Reactive::Case* c)
{
    uStackFrame __("Fuse.Reactive.Match", "OnCaseRemoved(Fuse.Reactive.Case)");
    uPtr(c)->_match = NULL;
    Invalidate();
}

// private void RemoveElements() [instance] :1713
void Match::RemoveElements()
{
    uStackFrame __("Fuse.Reactive.Match", "RemoveElements()");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret11;
    _oldCase = NULL;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > enum2 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_elements), &ret11), ret11); enum2.MoveNext(::TYPES[44/*Uno.Collections.List<Fuse.Node>.Enumerator*/]); )
    {
        ::g::Fuse::Node* e = enum2.Current(::TYPES[44/*Uno.Collections.List<Fuse.Node>.Enumerator*/]);

        if (uPtr(e)->OverrideContextParent == this)
            uPtr(e)->OverrideContextParent = NULL;

        uPtr(Parent())->BeginRemoveChild(e, NULL);
    }

    uPtr(_elements)->Clear();
}

// private Fuse.Reactive.Case SelectCase() [instance] :1702
::g::Fuse::Reactive::Case* Match::SelectCase()
{
    uStackFrame __("Fuse.Reactive.Match", "SelectCase()");
    ::g::Fuse::Reactive::Case* ret12;
    ::g::Fuse::Reactive::Case* def = NULL;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_cases), ::TYPES[48/*Uno.Collections.IEnumerable<Fuse.Reactive.Case>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[41/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::Reactive::Case* c = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[49/*Uno.Collections.IEnumerator<Fuse.Reactive.Case>*/]), &ret12), ret12);

        if ((uPtr(c)->Value() != NULL) && ::g::Uno::Object::Equals(uPtr(uPtr(c)->Value()), _realValue))
            return c;

        if (uPtr(c)->IsDefault())
            def = c;
    }

    return def;
}

// public string get_String() [instance] :1640
uString* Match::String()
{
    uStackFrame __("Fuse.Reactive.Match", "get_String()");
    return uAs<uString*>(Value(), ::TYPES[17/*string*/]);
}

// public void set_String(string value) [instance] :1641
void Match::String(uString* value)
{
    uStackFrame __("Fuse.Reactive.Match", "set_String(string)");
    Value(value);
}

// private void Update() [instance] :1691
void Match::Update()
{
    uStackFrame __("Fuse.Reactive.Match", "Update()");
    ::g::Fuse::Reactive::Case* newCase = SelectCase();

    if (newCase != _oldCase)
    {
        RemoveElements();

        if (newCase != NULL)
            AddElements(newCase);
    }
}

// public object get_Value() [instance] :1607
uObject* Match::Value()
{
    uStackFrame __("Fuse.Reactive.Match", "get_Value()");
    return _value;
}

// public void set_Value(object value) [instance] :1608
void Match::Value(uObject* value)
{
    uStackFrame __("Fuse.Reactive.Match", "set_Value(object)");

    if (_value != value)
    {
        _value = value;

        if (_subscription != NULL)
        {
            uPtr(_subscription)->Dispose();
            _subscription = NULL;
        }

        if (uIs((uObject*)_value, ::TYPES[29/*Fuse.Scripting.Observable*/]))
        {
            ::g::Fuse::Scripting::Observable* obs = uCast< ::g::Fuse::Scripting::Observable*>(_value, ::TYPES[29/*Fuse.Scripting.Observable*/]);
            _subscription = uPtr(obs)->Subscribe((uObject*)this);
        }
        else 
            _realValue = _value;

        Invalidate();
    }
}

// public generated Match New() [static] :1523
Match* Match::New2()
{
    Match* obj6 = (Match*)uNew(Match_typeof());
    obj6->ctor_3();
    return obj6;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/subscription/$.uno
// ---------------------------------------------------------------------

// internal sealed class PathObserver :78
// {
static void PathObserver_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(PathObserver_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::BindAttempt_typeof(), offsetof(::g::Fuse::Reactive::PathObserver, _bindAttempt), 0,
        ::g::Fuse::Reactive::ContextBinding_typeof(), offsetof(::g::Fuse::Reactive::PathObserver, Binding), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Reactive::PathObserver, Node), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::PathObserver, Path), 0);
}

PathObserver_type* PathObserver_typeof()
{
    static uSStrong<PathObserver_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PathObserver);
    options.TypeSize = sizeof(PathObserver_type);
    type = (PathObserver_type*)uClassType::New("Fuse.Reactive.PathObserver", options);
    type->fp_build_ = PathObserver_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))PathObserver__Dispose_fn;
    return type;
}

// public PathObserver(Fuse.Reactive.ContextBinding b, Fuse.Node n, string path) :86
void PathObserver__ctor__fn(PathObserver* __this, ::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Node* n, uString* path)
{
    __this->ctor_(b, n, path);
}

// public void Dispose() :106
void PathObserver__Dispose_fn(PathObserver* __this)
{
    __this->Dispose();
}

// public PathObserver New(Fuse.Reactive.ContextBinding b, Fuse.Node n, string path) :86
void PathObserver__New1_fn(::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Node* n, uString* path, PathObserver** __retval)
{
    *__retval = PathObserver::New1(b, n, path);
}

// internal void RestartBinding() :94
void PathObserver__RestartBinding_fn(PathObserver* __this)
{
    __this->RestartBinding();
}

// public PathObserver(Fuse.Reactive.ContextBinding b, Fuse.Node n, string path) [instance] :86
void PathObserver::ctor_(::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Node* n, uString* path)
{
    uStackFrame __("Fuse.Reactive.PathObserver", ".ctor(Fuse.Reactive.ContextBinding,Fuse.Node,string)");
    Node = n;
    Binding = b;
    Path = path;
    RestartBinding();
}

// public void Dispose() [instance] :106
void PathObserver::Dispose()
{
    uStackFrame __("Fuse.Reactive.PathObserver", "Dispose()");

    if (_bindAttempt != NULL)
    {
        uPtr(_bindAttempt)->Dispose();
        _bindAttempt = NULL;
    }
}

// internal void RestartBinding() [instance] :94
void PathObserver::RestartBinding()
{
    uStackFrame __("Fuse.Reactive.PathObserver", "RestartBinding()");

    if (_bindAttempt != NULL)
    {
        uPtr(_bindAttempt)->Dispose();
        _bindAttempt = NULL;
    }

    if (uPtr(Node)->IsRootingStarted())
        _bindAttempt = ::g::Fuse::Reactive::BindAttempt::New1(this);
}

// public PathObserver New(Fuse.Reactive.ContextBinding b, Fuse.Node n, string path) [static] :86
PathObserver* PathObserver::New1(::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Node* n, uString* path)
{
    PathObserver* obj1 = (PathObserver*)uNew(PathObserver_typeof());
    obj1->ctor_(b, n, path);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/reactive/$.uno
// ------------------------------------------------------------

// public class PropertyBinding :50
// {
static void PropertyBinding_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(PropertyBinding_type, interface0));
    type->SetFields(1,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::PropertyBinding, _read), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::PropertyBinding, _write), 0,
        ::g::Uno::UX::Property_typeof(), offsetof(::g::Fuse::Reactive::PropertyBinding, _Source), 0,
        ::g::Uno::UX::Property_typeof(), offsetof(::g::Fuse::Reactive::PropertyBinding, _Target), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)PropertyBinding__New1_fn, 0, true, PropertyBinding_typeof(), 2, ::g::Uno::UX::Property_typeof(), ::g::Uno::UX::Property_typeof()),
        new uFunction("get_Source", NULL, (void*)PropertyBinding__get_Source_fn, 0, false, ::g::Uno::UX::Property_typeof(), 0),
        new uFunction("get_Target", NULL, (void*)PropertyBinding__get_Target_fn, 0, false, ::g::Uno::UX::Property_typeof(), 0));
}

PropertyBinding_type* PropertyBinding_typeof()
{
    static uSStrong<PropertyBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Binding_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PropertyBinding);
    options.TypeSize = sizeof(PropertyBinding_type);
    type = (PropertyBinding_type*)uClassType::New("Fuse.Reactive.PropertyBinding", options);
    type->fp_build_ = PropertyBinding_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Binding*))PropertyBinding__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Binding*))PropertyBinding__OnUnrooted_fn;
    type->interface0.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))PropertyBinding__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// public PropertyBinding(Uno.UX.Property target, Uno.UX.Property source) :59
void PropertyBinding__ctor_1_fn(PropertyBinding* __this, ::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source)
{
    __this->ctor_1(target, source);
}

// protected PropertyBinding(Uno.UX.Property target, Uno.UX.Property source, bool read, bool write) :75
void PropertyBinding__ctor_2_fn(PropertyBinding* __this, ::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source, bool* read, bool* write)
{
    __this->ctor_2(target, source, *read, *write);
}

// public PropertyBinding New(Uno.UX.Property target, Uno.UX.Property source) :59
void PropertyBinding__New1_fn(::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source, PropertyBinding** __retval)
{
    *__retval = PropertyBinding::New1(target, source);
}

// protected PropertyBinding New(Uno.UX.Property target, Uno.UX.Property source, bool read, bool write) :75
void PropertyBinding__New2_fn(::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source, bool* read, bool* write, PropertyBinding** __retval)
{
    *__retval = PropertyBinding::New2(target, source, *read, *write);
}

// protected override sealed void OnRooted() :90
void PropertyBinding__OnRooted_fn(PropertyBinding* __this)
{
    uStackFrame __("Fuse.Reactive.PropertyBinding", "OnRooted()");
    ::g::Fuse::Binding__OnRooted_fn(__this);

    if (__this->_read)
        uPtr(__this->Source())->AddListener((uObject*)__this);

    if (__this->_write)
        uPtr(__this->Target())->AddListener((uObject*)__this);

    if (__this->_read)
        uPtr(__this->Target())->SetAsObject(::g::Uno::UX::Value::Cast(uPtr(__this->Target())->PropertyType(), uPtr(__this->Source())->GetAsObject()), (uObject*)__this);
}

// protected override sealed void OnUnrooted() :100
void PropertyBinding__OnUnrooted_fn(PropertyBinding* __this)
{
    uStackFrame __("Fuse.Reactive.PropertyBinding", "OnUnrooted()");

    if (__this->_read)
        uPtr(__this->Source())->RemoveListener((uObject*)__this);

    if (__this->_write)
        uPtr(__this->Target())->RemoveListener((uObject*)__this);

    ::g::Fuse::Binding__OnUnrooted_fn(__this);
}

// public generated Uno.UX.Property get_Source() :56
void PropertyBinding__get_Source_fn(PropertyBinding* __this, ::g::Uno::UX::Property** __retval)
{
    *__retval = __this->Source();
}

// private generated void set_Source(Uno.UX.Property value) :56
void PropertyBinding__set_Source_fn(PropertyBinding* __this, ::g::Uno::UX::Property* value)
{
    __this->Source(value);
}

// public generated Uno.UX.Property get_Target() :53
void PropertyBinding__get_Target_fn(PropertyBinding* __this, ::g::Uno::UX::Property** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property value) :53
void PropertyBinding__set_Target_fn(PropertyBinding* __this, ::g::Uno::UX::Property* value)
{
    __this->Target(value);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject src, Uno.UX.Selector prop) :108
void PropertyBinding__UnoUXIPropertyListenerOnPropertyChanged_fn(PropertyBinding* __this, ::g::Uno::UX::PropertyObject* src, ::g::Uno::UX::Selector* prop)
{
    uStackFrame __("Fuse.Reactive.PropertyBinding", "Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");
    ::g::Uno::UX::Selector prop_ = *prop;

    if ((src == uPtr(__this->Source())->Object()) && ::g::Uno::UX::Selector__op_Equality(prop_, uPtr(__this->Source())->Name()))
    {
        if (__this->_read)
            uPtr(__this->Target())->SetAsObject(::g::Uno::UX::Value::Cast(uPtr(__this->Target())->PropertyType(), uPtr(__this->Source())->GetAsObject()), (uObject*)__this);
    }
    else  if ((src == uPtr(__this->Target())->Object()) && ::g::Uno::UX::Selector__op_Equality(prop_, uPtr(__this->Target())->Name()))
    {
        if (__this->_write)
            uPtr(__this->Source())->SetAsObject(::g::Uno::UX::Value::Cast(uPtr(__this->Source())->PropertyType(), uPtr(__this->Target())->GetAsObject()), (uObject*)__this);
    }
}

// public PropertyBinding(Uno.UX.Property target, Uno.UX.Property source) [instance] :59
void PropertyBinding::ctor_1(::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source)
{
    uStackFrame __("Fuse.Reactive.PropertyBinding", ".ctor(Uno.UX.Property,Uno.UX.Property)");
    ctor_();
    Target(target);
    Source(source);
    _read = true;
    _write = true;

    if (!::g::Fuse::Reactive::BindingTypes::CheckCompatibility(source, target, this))
    {
        _read = false;
        _write = false;
    }
}

// protected PropertyBinding(Uno.UX.Property target, Uno.UX.Property source, bool read, bool write) [instance] :75
void PropertyBinding::ctor_2(::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source, bool read, bool write)
{
    uStackFrame __("Fuse.Reactive.PropertyBinding", ".ctor(Uno.UX.Property,Uno.UX.Property,bool,bool)");
    ctor_();
    Target(target);
    Source(source);
    _read = read;
    _write = write;

    if (!::g::Fuse::Reactive::BindingTypes::CheckCompatibility(source, target, this))
    {
        _read = false;
        _write = false;
    }
}

// public generated Uno.UX.Property get_Source() [instance] :56
::g::Uno::UX::Property* PropertyBinding::Source()
{
    uStackFrame __("Fuse.Reactive.PropertyBinding", "get_Source()");
    return _Source;
}

// private generated void set_Source(Uno.UX.Property value) [instance] :56
void PropertyBinding::Source(::g::Uno::UX::Property* value)
{
    uStackFrame __("Fuse.Reactive.PropertyBinding", "set_Source(Uno.UX.Property)");
    _Source = value;
}

// public generated Uno.UX.Property get_Target() [instance] :53
::g::Uno::UX::Property* PropertyBinding::Target()
{
    uStackFrame __("Fuse.Reactive.PropertyBinding", "get_Target()");
    return _Target;
}

// private generated void set_Target(Uno.UX.Property value) [instance] :53
void PropertyBinding::Target(::g::Uno::UX::Property* value)
{
    uStackFrame __("Fuse.Reactive.PropertyBinding", "set_Target(Uno.UX.Property)");
    _Target = value;
}

// public PropertyBinding New(Uno.UX.Property target, Uno.UX.Property source) [static] :59
PropertyBinding* PropertyBinding::New1(::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source)
{
    PropertyBinding* obj1 = (PropertyBinding*)uNew(PropertyBinding_typeof());
    obj1->ctor_1(target, source);
    return obj1;
}

// protected PropertyBinding New(Uno.UX.Property target, Uno.UX.Property source, bool read, bool write) [static] :75
PropertyBinding* PropertyBinding::New2(::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source, bool read, bool write)
{
    PropertyBinding* obj2 = (PropertyBinding*)uNew(PropertyBinding_typeof());
    obj2->ctor_2(target, source, read, write);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/$.uno
// --------------------------------------------------------

// public sealed class ReadDataBinding<T> :403
// {
static void ReadDataBinding_build(uType* type)
{
    type->SetBase(::g::Fuse::Reactive::DataBinding_typeof()->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Fuse::Scripting::IObserver_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface0),
        ::g::Fuse::INameListener_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface1),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface2));
    type->SetFields(8);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", type, (void*)ReadDataBinding__New3_fn, 0, true, type, 2, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0)), ::g::Uno::String_typeof()));
}

::g::Fuse::Reactive::DataBinding_type* ReadDataBinding_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::DataBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::DataBinding_typeof();
    options.FieldCount = 8;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(ReadDataBinding);
    options.TypeSize = sizeof(::g::Fuse::Reactive::DataBinding_type);
    type = (::g::Fuse::Reactive::DataBinding_type*)uClassType::New("Fuse.Reactive.ReadDataBinding`1", options);
    type->fp_build_ = ReadDataBinding_build;
    type->interface0.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnClear_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnAdd_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnNewAt_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnFailed_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::ListMirror*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnNewAll_fn;
    type->interface0.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnRemoveAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnInsertAt_fn;
    type->interface1.fp_OnNameChanged = (void(*)(uObject*, ::g::Fuse::Node*, ::g::Uno::UX::Selector*))::g::Fuse::Reactive::DataBinding__FuseINameListenerOnNameChanged_fn;
    type->interface2.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Reactive::DataBinding__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// public ReadDataBinding(Uno.UX.Property<T> target, string key) :406
void ReadDataBinding__ctor_4_fn(ReadDataBinding* __this, ::g::Uno::UX::Property1* target, uString* key)
{
    __this->ctor_4(target, key);
}

// public ReadDataBinding New(Uno.UX.Property<T> target, string key) :406
void ReadDataBinding__New3_fn(uType* __type, ::g::Uno::UX::Property1* target, uString* key, ReadDataBinding** __retval)
{
    *__retval = ReadDataBinding::New3(__type, target, key);
}

// public ReadDataBinding(Uno.UX.Property<T> target, string key) [instance] :406
void ReadDataBinding::ctor_4(::g::Uno::UX::Property1* target, uString* key)
{
    uStackFrame __("Fuse.Reactive.ReadDataBinding`1", ".ctor(Uno.UX.Property<T>,string)");
    ctor_3(target, key, true, false);
}

// public ReadDataBinding New(Uno.UX.Property<T> target, string key) [static] :406
ReadDataBinding* ReadDataBinding::New3(uType* __type, ::g::Uno::UX::Property1* target, uString* key)
{
    ReadDataBinding* obj1 = (ReadDataBinding*)uNew(__type);
    obj1->ctor_4(target, key);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/reactive/$.uno
// ------------------------------------------------------------

// public sealed class ReadPropertyBinding :122
// {
static void ReadPropertyBinding_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Reactive::PropertyBinding_type, interface0));
    type->SetFields(5);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ReadPropertyBinding__New3_fn, 0, true, ReadPropertyBinding_typeof(), 2, ::g::Uno::UX::Property_typeof(), ::g::Uno::UX::Property_typeof()));
}

::g::Fuse::Reactive::PropertyBinding_type* ReadPropertyBinding_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::PropertyBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::PropertyBinding_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ReadPropertyBinding);
    options.TypeSize = sizeof(::g::Fuse::Reactive::PropertyBinding_type);
    type = (::g::Fuse::Reactive::PropertyBinding_type*)uClassType::New("Fuse.Reactive.ReadPropertyBinding", options);
    type->fp_build_ = ReadPropertyBinding_build;
    type->interface0.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Reactive::PropertyBinding__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// public ReadPropertyBinding(Uno.UX.Property target, Uno.UX.Property source) :125
void ReadPropertyBinding__ctor_3_fn(ReadPropertyBinding* __this, ::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source)
{
    __this->ctor_3(target, source);
}

// public ReadPropertyBinding New(Uno.UX.Property target, Uno.UX.Property source) :125
void ReadPropertyBinding__New3_fn(::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source, ReadPropertyBinding** __retval)
{
    *__retval = ReadPropertyBinding::New3(target, source);
}

// public ReadPropertyBinding(Uno.UX.Property target, Uno.UX.Property source) [instance] :125
void ReadPropertyBinding::ctor_3(::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source)
{
    uStackFrame __("Fuse.Reactive.ReadPropertyBinding", ".ctor(Uno.UX.Property,Uno.UX.Property)");
    ctor_2(target, source, true, false);
}

// public ReadPropertyBinding New(Uno.UX.Property target, Uno.UX.Property source) [static] :125
ReadPropertyBinding* ReadPropertyBinding::New3(::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source)
{
    ReadPropertyBinding* obj1 = (ReadPropertyBinding*)uNew(ReadPropertyBinding_typeof());
    obj1->ctor_3(target, source);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/$.uno
// --------------------------------------------------------

// internal sealed class RootableScriptModule :1852
// {
static void RootableScriptModule_build(uType* type)
{
    ::STRINGS[49] = uString::Const(", ");
    ::TYPES[19] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof());
    ::TYPES[20] = ::g::Uno::Collections::IList_typeof()->MakeType(uObject_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::ScriptModule_type, interface0));
    type->SetFields(5,
        ::g::Fuse::Scripting::ClassInstance_typeof(), offsetof(::g::Fuse::Reactive::RootableScriptModule, _classInstance), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::Fuse::Reactive::RootableScriptModule, _names), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::RootableScriptModule, _worker), 0);
}

::g::Fuse::Scripting::ScriptModule_type* RootableScriptModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::ScriptModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ScriptModule_typeof();
    options.FieldCount = 8;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(RootableScriptModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::ScriptModule_type);
    type = (::g::Fuse::Scripting::ScriptModule_type*)uClassType::New("Fuse.Reactive.RootableScriptModule", options);
    type->fp_build_ = RootableScriptModule_build;
    type->fp_CallModuleFunc = (void(*)(::g::Fuse::Scripting::ScriptModule*, ::g::Fuse::Scripting::Function*, uArray*))RootableScriptModule__CallModuleFunc_fn;
    type->fp_Evaluate = (void(*)(::g::Fuse::Scripting::Module*, ::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::ModuleResult*))RootableScriptModule__Evaluate_fn;
    type->fp_GenerateArgs = (void(*)(::g::Fuse::Scripting::ScriptModule*, ::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::ModuleResult*, ::g::Uno::Collections::List*, uString**))RootableScriptModule__GenerateArgs_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public RootableScriptModule(Fuse.Reactive.ThreadWorker worker, Uno.UX.NameTable names) :1858
void RootableScriptModule__ctor_2_fn(RootableScriptModule* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Uno::UX::NameTable* names)
{
    __this->ctor_2(worker, names);
}

// protected override sealed void CallModuleFunc(Fuse.Scripting.Function moduleFunc, object[] args) :1895
void RootableScriptModule__CallModuleFunc_fn(RootableScriptModule* __this, ::g::Fuse::Scripting::Function* moduleFunc, uArray* args)
{
    uStackFrame __("Fuse.Reactive.RootableScriptModule", "CallModuleFunc(Fuse.Scripting.Function,object[])");
    uPtr(__this->_classInstance)->CallMethod(moduleFunc, args);
}

// private void EnsureClassInstanceRooted() :1870
void RootableScriptModule__EnsureClassInstanceRooted_fn(RootableScriptModule* __this)
{
    __this->EnsureClassInstanceRooted();
}

// public override sealed void Evaluate(Fuse.Scripting.Context c, Fuse.Scripting.ModuleResult result) :1864
void RootableScriptModule__Evaluate_fn(RootableScriptModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result)
{
    uStackFrame __("Fuse.Reactive.RootableScriptModule", "Evaluate(Fuse.Scripting.Context,Fuse.Scripting.ModuleResult)");
    __this->EnsureClassInstanceRooted();
    ::g::Fuse::Scripting::ScriptModule__Evaluate_fn(__this, c, result);
}

// protected override sealed string GenerateArgs(Fuse.Scripting.Context c, Fuse.Scripting.ModuleResult result, Uno.Collections.List<object> args) :1876
void RootableScriptModule__GenerateArgs_fn(RootableScriptModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result, ::g::Uno::Collections::List* args, uString** __retval)
{
    uStackFrame __("Fuse.Reactive.RootableScriptModule", "GenerateArgs(Fuse.Scripting.Context,Fuse.Scripting.ModuleResult,Uno.Collections.List<object>)");
    uString* ret2;
    uObject* ret3;
    uString* argsString = (::g::Fuse::Scripting::ScriptModule__GenerateArgs_fn(__this, c, result, args, &ret2), ret2);
    ::g::Uno::UX::NameTable* nt = __this->_names;
    int o = (nt != NULL) ? ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(nt)->Objects()), ::TYPES[19/*Uno.Collections.ICollection<object>*/])) - 1 : 0;

    while (nt != NULL)
    {
        for (int e = uPtr(uPtr(nt)->Entries)->Length(); (e--) > 0; )
        {
            argsString = ::g::Uno::String::op_Addition2(argsString, ::g::Uno::String::op_Addition2(::STRINGS[49/*", "*/], uPtr(uPtr(nt)->Entries)->Strong<uString*>(e)));
            ::g::Uno::Collections::List__Add_fn(uPtr(args), uPtr(uPtr(__this->_worker)->Context())->Unwrap((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(__this->_names)->Objects()), ::TYPES[20/*Uno.Collections.IList<object>*/]), uCRef<int>(o--), &ret3), ret3)));
        }

        nt = uPtr(nt)->ParentTable;
    }

    return *__retval = argsString, void();
}

// public RootableScriptModule New(Fuse.Reactive.ThreadWorker worker, Uno.UX.NameTable names) :1858
void RootableScriptModule__New2_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Uno::UX::NameTable* names, RootableScriptModule** __retval)
{
    *__retval = RootableScriptModule::New2(worker, names);
}

// public RootableScriptModule(Fuse.Reactive.ThreadWorker worker, Uno.UX.NameTable names) [instance] :1858
void RootableScriptModule::ctor_2(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Uno::UX::NameTable* names)
{
    uStackFrame __("Fuse.Reactive.RootableScriptModule", ".ctor(Fuse.Reactive.ThreadWorker,Uno.UX.NameTable)");
    ctor_1();
    _worker = worker;
    _names = names;
}

// private void EnsureClassInstanceRooted() [instance] :1870
void RootableScriptModule::EnsureClassInstanceRooted()
{
    uStackFrame __("Fuse.Reactive.RootableScriptModule", "EnsureClassInstanceRooted()");

    if (_classInstance == NULL)
        _classInstance = uPtr(uPtr(_worker)->Context())->GetClassInstance1(_names);

    uPtr(_classInstance)->EnsureRooted();
}

// public RootableScriptModule New(Fuse.Reactive.ThreadWorker worker, Uno.UX.NameTable names) [static] :1858
RootableScriptModule* RootableScriptModule::New2(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Uno::UX::NameTable* names)
{
    RootableScriptModule* obj1 = (RootableScriptModule*)uNew(RootableScriptModule_typeof());
    obj1->ctor_2(worker, names);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/subscription/$.uno
// ---------------------------------------------------------------------

// internal sealed class SegmentObserver :238
// {
static void SegmentObserver_build(uType* type)
{
    ::STRINGS[28] = uString::Const(".");
    ::STRINGS[50] = uString::Const("Cannot access disposed PathSubscription");
    ::STRINGS[51] = uString::Const("Data binding to '");
    ::STRINGS[52] = uString::Const("': expected single value, got array");
    ::STRINGS[53] = uString::Const("': expected single value, got array of length ");
    ::TYPES[28] = ::g::Uno::IDisposable_typeof();
    ::TYPES[29] = ::g::Fuse::Scripting::Observable_typeof();
    ::TYPES[39] = ::g::Fuse::Scripting::ObjectMirror_typeof();
    ::TYPES[4] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IObserver_typeof(), offsetof(SegmentObserver_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(SegmentObserver_type, interface1));
    type->SetFields(0,
        ::g::Fuse::Reactive::ContextBinding_typeof(), offsetof(::g::Fuse::Reactive::SegmentObserver, _b), 0,
        ::g::Fuse::Reactive::BindAttempt_typeof(), offsetof(::g::Fuse::Reactive::SegmentObserver, _bindAttempt), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::SegmentObserver, _failed), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::SegmentObserver, _isDisposed), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::SegmentObserver, _isInnerLink), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::SegmentObserver, _key), 0,
        SegmentObserver_typeof(), offsetof(::g::Fuse::Reactive::SegmentObserver, _next), 0,
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::SegmentObserver, _subscription), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::SegmentObserver, _unhandledPath), 0);
}

SegmentObserver_type* SegmentObserver_typeof()
{
    static uSStrong<SegmentObserver_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(SegmentObserver);
    options.TypeSize = sizeof(SegmentObserver_type);
    type = (SegmentObserver_type*)uClassType::New("Fuse.Reactive.SegmentObserver", options);
    type->fp_build_ = SegmentObserver_build;
    type->interface0.fp_OnClear = (void(*)(uObject*))SegmentObserver__OnClear_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::ListMirror*))SegmentObserver__OnNewAll_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))SegmentObserver__OnNewAt_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))SegmentObserver__OnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))SegmentObserver__OnAdd_fn;
    type->interface0.fp_OnRemoveAt = (void(*)(uObject*, int*))SegmentObserver__OnRemoveAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))SegmentObserver__OnInsertAt_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))SegmentObserver__OnFailed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))SegmentObserver__Dispose_fn;
    return type;
}

// public SegmentObserver(Fuse.Reactive.ContextBinding b, Fuse.Reactive.BindAttempt bindAttempt) :246
void SegmentObserver__ctor__fn(SegmentObserver* __this, ::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Reactive::BindAttempt* bindAttempt)
{
    __this->ctor_(b, bindAttempt);
}

// private SegmentObserver(Fuse.Reactive.ContextBinding b, string path) :260
void SegmentObserver__ctor_1_fn(SegmentObserver* __this, ::g::Fuse::Reactive::ContextBinding* b, uString* path)
{
    __this->ctor_1(b, path);
}

// private bool get_CanFail() :293
void SegmentObserver__get_CanFail_fn(SegmentObserver* __this, bool* __retval)
{
    *__retval = __this->CanFail();
}

// private static string CombineKeyAndPath(string key, string path) :352
void SegmentObserver__CombineKeyAndPath_fn(uString* key, uString* path, uString** __retval)
{
    *__retval = SegmentObserver::CombineKeyAndPath(key, path);
}

// public void Dispose() :435
void SegmentObserver__Dispose_fn(SegmentObserver* __this)
{
    __this->Dispose();
}

// private void Fail() :295
void SegmentObserver__Fail_fn(SegmentObserver* __this)
{
    __this->Fail();
}

// private void HandleNewDataContext(object val) :268
void SegmentObserver__HandleNewDataContext_fn(SegmentObserver* __this, uObject* val)
{
    __this->HandleNewDataContext(val);
}

// private void HandleObject(Fuse.Scripting.ObjectMirror obj) :274
void SegmentObserver__HandleObject_fn(SegmentObserver* __this, ::g::Fuse::Scripting::ObjectMirror* obj)
{
    __this->HandleObject(obj);
}

// private void HandlePath(object dc, string path) :307
void SegmentObserver__HandlePath_fn(SegmentObserver* __this, uObject* dc, uString* path)
{
    __this->HandlePath(dc, path);
}

// public void Init(object dc, string path) :252
void SegmentObserver__Init_fn(SegmentObserver* __this, uObject* dc, uString* path)
{
    __this->Init(dc, path);
}

// public SegmentObserver New(Fuse.Reactive.ContextBinding b, Fuse.Reactive.BindAttempt bindAttempt) :246
void SegmentObserver__New1_fn(::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Reactive::BindAttempt* bindAttempt, SegmentObserver** __retval)
{
    *__retval = SegmentObserver::New1(b, bindAttempt);
}

// private SegmentObserver New(Fuse.Reactive.ContextBinding b, string path) :260
void SegmentObserver__New2_fn(::g::Fuse::Reactive::ContextBinding* b, uString* path, SegmentObserver** __retval)
{
    *__retval = SegmentObserver::New2(b, path);
}

// public void OnAdd(object addedValue) :390
void SegmentObserver__OnAdd_fn(SegmentObserver* __this, uObject* addedValue)
{
    __this->OnAdd(addedValue);
}

// public void OnClear() :358
void SegmentObserver__OnClear_fn(SegmentObserver* __this)
{
    __this->OnClear();
}

// public void OnFailed(string message) :377
void SegmentObserver__OnFailed_fn(SegmentObserver* __this, uString* message)
{
    __this->OnFailed(message);
}

// public void OnInsertAt(int index, object value) :404
void SegmentObserver__OnInsertAt_fn(SegmentObserver* __this, int* index, uObject* value)
{
    __this->OnInsertAt(*index, value);
}

// public void OnNewAll(Fuse.Scripting.ListMirror values) :363
void SegmentObserver__OnNewAll_fn(SegmentObserver* __this, ::g::Fuse::Scripting::ListMirror* values)
{
    __this->OnNewAll(values);
}

// public void OnNewAt(int index, object newValue) :371
void SegmentObserver__OnNewAt_fn(SegmentObserver* __this, int* index, uObject* newValue)
{
    __this->OnNewAt(*index, newValue);
}

// public void OnRemoveAt(int index) :397
void SegmentObserver__OnRemoveAt_fn(SegmentObserver* __this, int* index)
{
    __this->OnRemoveAt(*index);
}

// public void OnSet(object value) :383
void SegmentObserver__OnSet_fn(SegmentObserver* __this, uObject* value)
{
    __this->OnSet(value);
}

// private void SubscribeAndFail(Fuse.Scripting.Observable obs) :301
void SegmentObserver__SubscribeAndFail_fn(SegmentObserver* __this, ::g::Fuse::Scripting::Observable* obs)
{
    __this->SubscribeAndFail(obs);
}

// private static string TakeKeyFromPath(string& path) :412
void SegmentObserver__TakeKeyFromPath_fn(uString** path, uString** __retval)
{
    *__retval = SegmentObserver::TakeKeyFromPath(path);
}

// public SegmentObserver(Fuse.Reactive.ContextBinding b, Fuse.Reactive.BindAttempt bindAttempt) [instance] :246
void SegmentObserver::ctor_(::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Reactive::BindAttempt* bindAttempt)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", ".ctor(Fuse.Reactive.ContextBinding,Fuse.Reactive.BindAttempt)");
    _b = b;
    _bindAttempt = bindAttempt;
}

// private SegmentObserver(Fuse.Reactive.ContextBinding b, string path) [instance] :260
void SegmentObserver::ctor_1(::g::Fuse::Reactive::ContextBinding* b, uString* path)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", ".ctor(Fuse.Reactive.ContextBinding,string)");
    _b = b;
    _key = SegmentObserver::TakeKeyFromPath(&path);
    _unhandledPath = path;
    _isInnerLink = true;
}

// private bool get_CanFail() [instance] :293
bool SegmentObserver::CanFail()
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "get_CanFail()");
    return _bindAttempt != NULL;
}

// public void Dispose() [instance] :435
void SegmentObserver::Dispose()
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "Dispose()");

    if (_isDisposed)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[50/*"Cannot acce...*/]));

    _isDisposed = true;

    if (_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[28/*Uno.IDisposable*/]));
        _subscription = NULL;
    }

    if (_next != NULL)
    {
        uPtr(_next)->Dispose();
        _next = NULL;
    }

    _b = NULL;
}

// private void Fail() [instance] :295
void SegmentObserver::Fail()
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "Fail()");
    _failed = true;
    uPtr(_bindAttempt)->Fail();
}

// private void HandleNewDataContext(object val) [instance] :268
void SegmentObserver::HandleNewDataContext(uObject* val)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "HandleNewDataContext(object)");

    if (!_isInnerLink)
        U_THROW(::g::Uno::Exception::New1());

    HandlePath(val, _unhandledPath);
}

// private void HandleObject(Fuse.Scripting.ObjectMirror obj) [instance] :274
void SegmentObserver::HandleObject(::g::Fuse::Scripting::ObjectMirror* obj)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "HandleObject(Fuse.Scripting.ObjectMirror)");

    if (_next == NULL)
        return;

    if (uPtr(obj)->ContainsKey(_key))
    {
        uObject* val = ::g::Fuse::Scripting::Context::Wrap(uPtr(obj)->Item(_key));
        uPtr(_next)->HandleNewDataContext(val);
        uObject* disp = uAs<uObject*>(val, ::TYPES[28/*Uno.IDisposable*/]);

        if (disp != NULL)
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(disp), ::TYPES[28/*Uno.IDisposable*/]));
    }
    else 
    {
        if (CanFail())
            Fail();
    }
}

// private void HandlePath(object dc, string path) [instance] :307
void SegmentObserver::HandlePath(uObject* dc, uString* path)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "HandlePath(object,string)");

    if (::g::Uno::String::op_Equality(_key, NULL))
        uPtr(_b)->NewValue(dc);
    else 
    {
        if (_next != NULL)
            uPtr(_next)->Dispose();

        _next = NULL;
        ::g::Fuse::Scripting::Observable* obs = uAs< ::g::Fuse::Scripting::Observable*>(dc, ::TYPES[29/*Fuse.Scripting.Observable*/]);

        if (obs != NULL)
        {
            if (CanFail())
            {
                if (uPtr(obs)->Length() != 1)
                    SubscribeAndFail(obs);
                else 
                {
                    ::g::Fuse::Scripting::ObjectMirror* so = uAs< ::g::Fuse::Scripting::ObjectMirror*>(uPtr(obs)->Item(0), ::TYPES[39/*Fuse.Scripting.ObjectMirror*/]);

                    if (so == NULL)
                        SubscribeAndFail(obs);
                    else  if (!uPtr(so)->ContainsKey(_key))
                        SubscribeAndFail(obs);
                }
            }

            if (!_failed)
            {
                _next = SegmentObserver::New2(_b, SegmentObserver::CombineKeyAndPath(_key, path));

                if (_subscription != NULL)
                    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[28/*Uno.IDisposable*/]));

                _subscription = (uObject*)uPtr(obs)->Subscribe((uObject*)this);
            }
        }
        else  if (uIs(dc, ::TYPES[39/*Fuse.Scripting.ObjectMirror*/]))
        {
            _next = SegmentObserver::New2(_b, path);
            HandleObject(uCast< ::g::Fuse::Scripting::ObjectMirror*>(dc, ::TYPES[39/*Fuse.Scripting.ObjectMirror*/]));
        }
        else 
        {
            if (_bindAttempt != NULL)
                uPtr(_bindAttempt)->Fail();

            _next = NULL;
        }
    }
}

// public void Init(object dc, string path) [instance] :252
void SegmentObserver::Init(uObject* dc, uString* path)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "Init(object,string)");
    _key = SegmentObserver::TakeKeyFromPath(&path);
    HandlePath(dc, path);
}

// public void OnAdd(object addedValue) [instance] :390
void SegmentObserver::OnAdd(uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "OnAdd(object)");

    if (_isDisposed)
        return;

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[51/*"Data bindin...*/], _key), ::STRINGS[52/*"': expected...*/])));
}

// public void OnClear() [instance] :358
void SegmentObserver::OnClear()
{
}

// public void OnFailed(string message) [instance] :377
void SegmentObserver::OnFailed(uString* message)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "OnFailed(string)");

    if (_isDisposed)
        return;
}

// public void OnInsertAt(int index, object value) [instance] :404
void SegmentObserver::OnInsertAt(int index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "OnInsertAt(int,object)");

    if (_isDisposed)
        return;

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[51/*"Data bindin...*/], _key), ::STRINGS[52/*"': expected...*/])));
}

// public void OnNewAll(Fuse.Scripting.ListMirror values) [instance] :363
void SegmentObserver::OnNewAll(::g::Fuse::Scripting::ListMirror* values)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "OnNewAll(Fuse.Scripting.ListMirror)");

    if (_isDisposed)
        return;

    if (uPtr(values)->Length() > 0)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[51/*"Data bindin...*/], _key), ::STRINGS[53/*"': expected...*/]), uBox<int>(::TYPES[22/*int*/], uPtr(values)->Length()))));
}

// public void OnNewAt(int index, object newValue) [instance] :371
void SegmentObserver::OnNewAt(int index, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "OnNewAt(int,object)");

    if (_isDisposed)
        return;

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[51/*"Data bindin...*/], _key), ::STRINGS[52/*"': expected...*/])));
}

// public void OnRemoveAt(int index) [instance] :397
void SegmentObserver::OnRemoveAt(int index)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "OnRemoveAt(int)");

    if (_isDisposed)
        return;

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[51/*"Data bindin...*/], _key), ::STRINGS[52/*"': expected...*/])));
}

// public void OnSet(object value) [instance] :383
void SegmentObserver::OnSet(uObject* value)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "OnSet(object)");

    if (_isDisposed)
        return;

    uPtr(_next)->HandleNewDataContext(value);
}

// private void SubscribeAndFail(Fuse.Scripting.Observable obs) [instance] :301
void SegmentObserver::SubscribeAndFail(::g::Fuse::Scripting::Observable* obs)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "SubscribeAndFail(Fuse.Scripting.Observable)");
    _subscription = (uObject*)uPtr(obs)->Subscribe((uObject*)::g::Fuse::Reactive::AnyChangeObserver::New1(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)::g::Fuse::Reactive::BindAttempt__Restart_fn, uPtr(_bindAttempt))));
    Fail();
}

// private static string CombineKeyAndPath(string key, string path) [static] :352
uString* SegmentObserver::CombineKeyAndPath(uString* key, uString* path)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "CombineKeyAndPath(string,string)");

    if (::g::Uno::String::op_Inequality(path, NULL) && (uPtr(path)->Length() > 0))
        return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(key, ::STRINGS[28/*"."*/]), path);
    else 
        return key;
}

// public SegmentObserver New(Fuse.Reactive.ContextBinding b, Fuse.Reactive.BindAttempt bindAttempt) [static] :246
SegmentObserver* SegmentObserver::New1(::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Reactive::BindAttempt* bindAttempt)
{
    SegmentObserver* obj1 = (SegmentObserver*)uNew(SegmentObserver_typeof());
    obj1->ctor_(b, bindAttempt);
    return obj1;
}

// private SegmentObserver New(Fuse.Reactive.ContextBinding b, string path) [static] :260
SegmentObserver* SegmentObserver::New2(::g::Fuse::Reactive::ContextBinding* b, uString* path)
{
    SegmentObserver* obj2 = (SegmentObserver*)uNew(SegmentObserver_typeof());
    obj2->ctor_1(b, path);
    return obj2;
}

// private static string TakeKeyFromPath(string& path) [static] :412
uString* SegmentObserver::TakeKeyFromPath(uString** path)
{
    uStackFrame __("Fuse.Reactive.SegmentObserver", "TakeKeyFromPath(string&)");

    if (::g::Uno::String::op_Equality(*path, NULL))
        return NULL;

    uString* key = *path;
    int p = ::g::Uno::String::IndexOf(uPtr(key), '.', 0);

    if (p != -1)
    {
        key = ::g::Uno::String::Substring1(uPtr(key), 0, p);
        *path = ::g::Uno::String::Substring1(uPtr(*path), p + 1, (uPtr(*path)->Length() - p) - 1);
    }
    else 
        *path = NULL;

    if (::g::Uno::String::op_Equality(key, NULL) || (uPtr(key)->Length() == 0))
        return NULL;
    else 
        return key;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/$.uno
// --------------------------------------------------------

// public sealed class Select :2493
// {
static void Select_build(uType* type)
{
    ::STRINGS[54] = uString::Const("'Select' is deprecated, use 'With' instead (works the same way). ");
    ::STRINGS[10] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/$.uno");
    ::STRINGS[55] = uString::Const(".ctor");
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(29);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Select__New3_fn, 0, true, Select_typeof(), 0));
}

::g::Fuse::Triggers::Trigger_type* Select_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::With_typeof();
    options.FieldCount = 29;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Select);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Reactive.Select", options);
    type->fp_build_ = Select_build;
    type->fp_ctor_ = (void*)Select__New3_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Select() :2495
void Select__ctor_5_fn(Select* __this)
{
    __this->ctor_5();
}

// public Select New() :2495
void Select__New3_fn(Select** __retval)
{
    *__retval = Select::New3();
}

// public Select() [instance] :2495
void Select::ctor_5()
{
    uStackFrame __("Fuse.Reactive.Select", ".ctor()");
    ctor_4();
    ::g::Fuse::Diagnostics::Deprecated(::STRINGS[54/*"'Select' is...*/], this, ::STRINGS[10/*"/usr/local/...*/], 2497, ::STRINGS[55/*".ctor"*/]);
}

// public Select New() [static] :2495
Select* Select::New3()
{
    Select* obj1 = (Select*)uNew(Select_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/reactive/$.uno
// ------------------------------------------------------------

// public sealed class SnapshotPropertyBinding :150
// {
static void SnapshotPropertyBinding_build(uType* type)
{
    type->SetFields(1,
        ::g::Uno::UX::Property_typeof(), offsetof(::g::Fuse::Reactive::SnapshotPropertyBinding, _Source), 0,
        ::g::Uno::UX::Property_typeof(), offsetof(::g::Fuse::Reactive::SnapshotPropertyBinding, _Target), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)SnapshotPropertyBinding__New1_fn, 0, true, SnapshotPropertyBinding_typeof(), 2, ::g::Uno::UX::Property_typeof(), ::g::Uno::UX::Property_typeof()),
        new uFunction("get_Source", NULL, (void*)SnapshotPropertyBinding__get_Source_fn, 0, false, ::g::Uno::UX::Property_typeof(), 0),
        new uFunction("get_Target", NULL, (void*)SnapshotPropertyBinding__get_Target_fn, 0, false, ::g::Uno::UX::Property_typeof(), 0));
}

::g::Fuse::Binding_type* SnapshotPropertyBinding_typeof()
{
    static uSStrong< ::g::Fuse::Binding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Binding_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(SnapshotPropertyBinding);
    options.TypeSize = sizeof(::g::Fuse::Binding_type);
    type = (::g::Fuse::Binding_type*)uClassType::New("Fuse.Reactive.SnapshotPropertyBinding", options);
    type->fp_build_ = SnapshotPropertyBinding_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Binding*))SnapshotPropertyBinding__OnRooted_fn;
    return type;
}

// public SnapshotPropertyBinding(Uno.UX.Property target, Uno.UX.Property source) :159
void SnapshotPropertyBinding__ctor_1_fn(SnapshotPropertyBinding* __this, ::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source)
{
    __this->ctor_1(target, source);
}

// public SnapshotPropertyBinding New(Uno.UX.Property target, Uno.UX.Property source) :159
void SnapshotPropertyBinding__New1_fn(::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source, SnapshotPropertyBinding** __retval)
{
    *__retval = SnapshotPropertyBinding::New1(target, source);
}

// protected override sealed void OnRooted() :166
void SnapshotPropertyBinding__OnRooted_fn(SnapshotPropertyBinding* __this)
{
    uStackFrame __("Fuse.Reactive.SnapshotPropertyBinding", "OnRooted()");
    ::g::Fuse::Binding__OnRooted_fn(__this);

    if (::g::Fuse::Reactive::BindingTypes::CheckCompatibility(__this->Source(), __this->Target(), __this))
        uPtr(__this->Target())->SetAsObject(::g::Uno::UX::Value::Cast(uPtr(__this->Target())->PropertyType(), uPtr(__this->Source())->GetAsObject()), NULL);
}

// public generated Uno.UX.Property get_Source() :156
void SnapshotPropertyBinding__get_Source_fn(SnapshotPropertyBinding* __this, ::g::Uno::UX::Property** __retval)
{
    *__retval = __this->Source();
}

// private generated void set_Source(Uno.UX.Property value) :156
void SnapshotPropertyBinding__set_Source_fn(SnapshotPropertyBinding* __this, ::g::Uno::UX::Property* value)
{
    __this->Source(value);
}

// public generated Uno.UX.Property get_Target() :153
void SnapshotPropertyBinding__get_Target_fn(SnapshotPropertyBinding* __this, ::g::Uno::UX::Property** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property value) :153
void SnapshotPropertyBinding__set_Target_fn(SnapshotPropertyBinding* __this, ::g::Uno::UX::Property* value)
{
    __this->Target(value);
}

// public SnapshotPropertyBinding(Uno.UX.Property target, Uno.UX.Property source) [instance] :159
void SnapshotPropertyBinding::ctor_1(::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source)
{
    uStackFrame __("Fuse.Reactive.SnapshotPropertyBinding", ".ctor(Uno.UX.Property,Uno.UX.Property)");
    ctor_();
    Target(target);
    Source(source);
}

// public generated Uno.UX.Property get_Source() [instance] :156
::g::Uno::UX::Property* SnapshotPropertyBinding::Source()
{
    uStackFrame __("Fuse.Reactive.SnapshotPropertyBinding", "get_Source()");
    return _Source;
}

// private generated void set_Source(Uno.UX.Property value) [instance] :156
void SnapshotPropertyBinding::Source(::g::Uno::UX::Property* value)
{
    uStackFrame __("Fuse.Reactive.SnapshotPropertyBinding", "set_Source(Uno.UX.Property)");
    _Source = value;
}

// public generated Uno.UX.Property get_Target() [instance] :153
::g::Uno::UX::Property* SnapshotPropertyBinding::Target()
{
    uStackFrame __("Fuse.Reactive.SnapshotPropertyBinding", "get_Target()");
    return _Target;
}

// private generated void set_Target(Uno.UX.Property value) [instance] :153
void SnapshotPropertyBinding::Target(::g::Uno::UX::Property* value)
{
    uStackFrame __("Fuse.Reactive.SnapshotPropertyBinding", "set_Target(Uno.UX.Property)");
    _Target = value;
}

// public SnapshotPropertyBinding New(Uno.UX.Property target, Uno.UX.Property source) [static] :159
SnapshotPropertyBinding* SnapshotPropertyBinding::New1(::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source)
{
    SnapshotPropertyBinding* obj1 = (SnapshotPropertyBinding*)uNew(SnapshotPropertyBinding_typeof());
    obj1->ctor_1(target, source);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/$.uno
// --------------------------------------------------------

// internal partial sealed class ThreadWorker :1913
// {
static void ThreadWorker_build(uType* type)
{
    ::STRINGS[56] = uString::Const("Skipped Exception");
    ::STRINGS[10] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/$.uno");
    ::STRINGS[57] = uString::Const("CheckAndThrow");
    ::STRINGS[58] = uString::Const("ThreadWorked failed");
    ::STRINGS[59] = uString::Const("Run");
    ::STRINGS[60] = uString::Const("Could not create script context");
    ::TYPES[52] = ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Action_typeof());
    ::TYPES[53] = ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Exception_typeof());
    ::TYPES[4] = ::g::Uno::Action_typeof();
    ::TYPES[3] = ::g::Uno::EventHandler_typeof();
    ::TYPES[54] = ThreadWorker__Closure_typeof();
    ::TYPES[32] = ::g::Uno::Exception_typeof();
    ::TYPES[28] = ::g::Uno::IDisposable_typeof();
    type->SetPrecalc(
        ThreadWorker__Closure_typeof()->MakeType(type->U(0)));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ThreadWorker_type, interface0),
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(ThreadWorker_type, interface1),
        ::g::Fuse::Scripting::IThreadWorker_typeof(), offsetof(ThreadWorker_type, interface2));
    type->SetFields(0,
        ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Exception_typeof()), offsetof(::g::Fuse::Reactive::ThreadWorker, _exceptionQueue), 0,
        ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Action_typeof()), offsetof(::g::Fuse::Reactive::ThreadWorker, _queue), 0,
        ::g::Uno::Threading::ManualResetEvent_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _ready), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _subscribedForClosing), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _terminate), 0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, CanExecuteJavaScript), 0,
        ::g::Fuse::Scripting::Context_typeof(), (uintptr_t)&::g::Fuse::Reactive::ThreadWorker::_context_, uFieldFlagsStatic,
        ::g::Fuse::Reactive::FuseJS::Builtins_typeof(), (uintptr_t)&::g::Fuse::Reactive::ThreadWorker::_fuseJS_, uFieldFlagsStatic);
}

ThreadWorker_type* ThreadWorker_typeof()
{
    static uSStrong<ThreadWorker_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 3;
    options.MethodTypeCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(ThreadWorker);
    options.TypeSize = sizeof(ThreadWorker_type);
    type = (ThreadWorker_type*)uClassType::New("Fuse.Reactive.ThreadWorker", options);
    type->fp_build_ = ThreadWorker_build;
    type->fp_ctor_ = (void*)ThreadWorker__New1_fn;
    type->interface2.fp_get_Dispatcher = (void(*)(uObject*, uObject**))ThreadWorker__FuseScriptingIThreadWorkerget_Dispatcher_fn;
    type->interface2.fp_get_Observable = (void(*)(uObject*, ::g::Fuse::Scripting::Function**))ThreadWorker__FuseScriptingIThreadWorkerget_Observable_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ThreadWorker__Dispose_fn;
    type->interface1.fp_Invoke = (void(*)(uObject*, uDelegate*))ThreadWorker__Invoke_fn;
    return type;
}

// public ThreadWorker() :1940
void ThreadWorker__ctor__fn(ThreadWorker* __this)
{
    __this->ctor_();
}

// public void CheckAndThrow() :2086
void ThreadWorker__CheckAndThrow_fn(ThreadWorker* __this)
{
    __this->CheckAndThrow();
}

// public Fuse.Scripting.Context get_Context() :1927
void ThreadWorker__get_Context_fn(ThreadWorker* __this, ::g::Fuse::Scripting::Context** __retval)
{
    *__retval = __this->Context();
}

// internal static Fuse.Scripting.Context CreateContext(Fuse.Scripting.IThreadWorker worker) :1918
void ThreadWorker__CreateContext_fn(uObject* worker, ::g::Fuse::Scripting::Context** __retval)
{
    *__retval = ThreadWorker::CreateContext(worker);
}

// public void Dispose() :1961
void ThreadWorker__Dispose_fn(ThreadWorker* __this)
{
    __this->Dispose();
}

// private Uno.Threading.IDispatcher Fuse.Scripting.IThreadWorker.get_Dispatcher() :1915
void ThreadWorker__FuseScriptingIThreadWorkerget_Dispatcher_fn(ThreadWorker* __this, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Fuse.Scripting.IThreadWorker.get_Dispatcher()");
    return *__retval = (uObject*)__this, void();
}

// private Fuse.Scripting.Function Fuse.Scripting.IThreadWorker.get_Observable() :1916
void ThreadWorker__FuseScriptingIThreadWorkerget_Observable_fn(ThreadWorker* __this, ::g::Fuse::Scripting::Function** __retval)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Fuse.Scripting.IThreadWorker.get_Observable()");
    return *__retval = uPtr(__this->FuseJS())->Observable, void();
}

// public Fuse.Reactive.FuseJS.Builtins get_FuseJS() :1930
void ThreadWorker__get_FuseJS_fn(ThreadWorker* __this, ::g::Fuse::Reactive::FuseJS::Builtins** __retval)
{
    *__retval = __this->FuseJS();
}

// public void Invoke(Uno.Action action) :2100
void ThreadWorker__Invoke_fn(ThreadWorker* __this, uDelegate* action)
{
    __this->Invoke(action);
}

// public void Invoke<T>(Uno.Action<T> action, T arg) :2141
void ThreadWorker__Invoke1_fn(ThreadWorker* __this, uType* __type, uDelegate* action, void* arg)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Reactive.ThreadWorker.Closure<T>*/),
    };
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Invoke`1(Uno.Action<T>,T)");
    ThreadWorker__Closure* ret3;
    __this->Invoke(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)ThreadWorker__Closure__Run_fn, (ThreadWorker__Closure__New1_fn(__types[0], action, arg, &ret3), ret3)));
}

// public ThreadWorker New() :1940
void ThreadWorker__New1_fn(ThreadWorker** __retval)
{
    *__retval = ThreadWorker::New1();
}

// private void OnClosing(object sender, Uno.EventArgs args) :1956
void ThreadWorker__OnClosing_fn(ThreadWorker* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnClosing(sender, args);
}

// public Fuse.Reactive.ThreadWorker.Flag PostFlag() :2117
void ThreadWorker__PostFlag_fn(ThreadWorker* __this, ThreadWorker__Flag** __retval)
{
    *__retval = __this->PostFlag();
}

// private void Run() :1969
void ThreadWorker__Run_fn(ThreadWorker* __this)
{
    __this->Run();
}

// private void RunInner() :1982
void ThreadWorker__RunInner_fn(ThreadWorker* __this)
{
    __this->RunInner();
}

uSStrong< ::g::Fuse::Scripting::Context*> ThreadWorker::_context_;
uSStrong< ::g::Fuse::Reactive::FuseJS::Builtins*> ThreadWorker::_fuseJS_;

// public ThreadWorker() [instance] :1940
void ThreadWorker::ctor_()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", ".ctor()");
    CanExecuteJavaScript = ::g::Uno::Threading::Mutex::Create();
    _ready = ::g::Uno::Threading::ManualResetEvent::Create(false);
    _queue = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::TYPES[52/*Uno.Threading.ConcurrentQueue<Uno.Action>*/]));
    _exceptionQueue = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::TYPES[53/*Uno.Threading.ConcurrentQueue<Uno.Exception>*/]));
    ::g::Uno::Threading::Thread* thread = ::g::Uno::Threading::Thread::Create(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)ThreadWorker__Run_fn, this));
    uPtr(thread)->Start();
    uPtr(_ready)->WaitOne();
}

// public void CheckAndThrow() [instance] :2086
void ThreadWorker::CheckAndThrow()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "CheckAndThrow()");
    bool ret2;
    ::g::Uno::Exception* next = NULL, *prev = NULL;

    while ((::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(_exceptionQueue), (void**)(&next), &ret2), ret2))
    {
        if (prev != NULL)
            ::g::Fuse::Diagnostics::UnknownException(::STRINGS[56/*"Skipped Exc...*/], next, this, ::STRINGS[10/*"/usr/local/...*/], 2092, ::STRINGS[57/*"CheckAndThrow"*/]);

        prev = next;
    }

    if (prev != NULL)
        U_THROW(::g::Fuse::WrapException::New4(prev));
}

// public Fuse.Scripting.Context get_Context() [instance] :1927
::g::Fuse::Scripting::Context* ThreadWorker::Context()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "get_Context()");
    return ThreadWorker::_context_;
}

// public void Dispose() [instance] :1961
void ThreadWorker::Dispose()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Dispose()");
    uPtr(uPtr(::g::Uno::Application::Current())->Window())->remove_Closed(uDelegate::New(::TYPES[3/*Uno.EventHandler*/], (void*)ThreadWorker__OnClosing_fn, this));
    _terminate = true;
}

// public Fuse.Reactive.FuseJS.Builtins get_FuseJS() [instance] :1930
::g::Fuse::Reactive::FuseJS::Builtins* ThreadWorker::FuseJS()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "get_FuseJS()");
    return ThreadWorker::_fuseJS_;
}

// public void Invoke(Uno.Action action) [instance] :2100
void ThreadWorker::Invoke(uDelegate* action)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Invoke(Uno.Action)");
    ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_queue), action);
}

// private void OnClosing(object sender, Uno.EventArgs args) [instance] :1956
void ThreadWorker::OnClosing(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "OnClosing(object,Uno.EventArgs)");
    Dispose();
}

// public Fuse.Reactive.ThreadWorker.Flag PostFlag() [instance] :2117
ThreadWorker__Flag* ThreadWorker::PostFlag()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "PostFlag()");
    ThreadWorker__Flag* f = ThreadWorker__Flag::New1();
    Invoke(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)ThreadWorker__Flag__Process_fn, f));
    return f;
}

// private void Run() [instance] :1969
void ThreadWorker::Run()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "Run()");

    try
    {
        RunInner();
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::Diagnostics::UnknownException(::STRINGS[58/*"ThreadWorke...*/], e, this, ::STRINGS[10/*"/usr/local/...*/], 1977, ::STRINGS[59/*"Run"*/]);
        ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_exceptionQueue), e);
    }
}

// private void RunInner() [instance] :1982
void ThreadWorker::RunInner()
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "RunInner()");
    bool ret4;

    {
        const auto __finally_fun = [&]()
        {
            uPtr(_ready)->Set();
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(CanExecuteJavaScript);

        {
            const auto __finally_fun = [&]()
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[28/*Uno.IDisposable*/]));
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);

            if (ThreadWorker::_context_ == NULL)
            {
                ThreadWorker::_context_ = ThreadWorker::CreateContext((uObject*)this);

                if (ThreadWorker::_context_ == NULL)
                    U_THROW(::g::Uno::Exception::New2(::STRINGS[60/*"Could not c...*/]));

                ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)ThreadWorker__CheckAndThrow_fn, this), 0);
                ThreadWorker::_fuseJS_ = ::g::Fuse::Reactive::FuseJS::Builtins::New1(ThreadWorker::_context_);
            }
        }
    }

    ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)::g::Fuse::Scripting::Context__ProcessUIMessages_fn, uPtr(Context())), 0);
    double t = ::g::Uno::Diagnostics::Clock::GetSeconds();

    while (!_terminate)
    {
        uAutoReleasePool ____pool;

        if (!_subscribedForClosing)
        {
            if (::g::Uno::Application::Current() != NULL)
            {
                uPtr(uPtr(::g::Uno::Application::Current())->Window())->add_Closed(uDelegate::New(::TYPES[3/*Uno.EventHandler*/], (void*)ThreadWorker__OnClosing_fn, this));
                _subscribedForClosing = true;
            }
        }

        bool didAnything = false;
        uObject* lg1 = ::g::Uno::Threading::LockGuard::Acquire(CanExecuteJavaScript);

        {
            const auto __finally_fun = [&]()
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg1), ::TYPES[28/*Uno.IDisposable*/]));
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);
            uDelegate* action;

            if ((::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(_queue), (void**)(&action), &ret4), ret4))
            {
                try
                {
                    didAnything = true;
                    uPtr(action)->InvokeVoid();
                }
                catch (const uThrowable& __t)
                {
                    ::g::Uno::Exception* e = __t.Exception;
                    ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_exceptionQueue), e);
                }
            }

            try
            {
                uPtr(ThreadWorker::_fuseJS_)->UpdateModules(ThreadWorker::_context_);
            }
            catch (const uThrowable& __t)
            {
                ::g::Uno::Exception* e1 = __t.Exception;
                ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_exceptionQueue), e1);
            }
        }

        double t2 = ::g::Uno::Diagnostics::Clock::GetSeconds();

        if (!didAnything || ((t2 - t) > 5.0))
        {
            ::g::Uno::Threading::Thread::Sleep(1);
            t = t2;
        }
    }
}

// internal static Fuse.Scripting.Context CreateContext(Fuse.Scripting.IThreadWorker worker) [static] :1918
::g::Fuse::Scripting::Context* ThreadWorker::CreateContext(uObject* worker)
{
    uStackFrame __("Fuse.Reactive.ThreadWorker", "CreateContext(Fuse.Scripting.IThreadWorker)");
    return ::g::Fuse::Scripting::V8::Context::New1(worker);
}

// public ThreadWorker New() [static] :1940
ThreadWorker* ThreadWorker::New1()
{
    ThreadWorker* obj1 = (ThreadWorker*)uNew(ThreadWorker_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/$.uno
// --------------------------------------------------------

// public class WhileCount :2187
// {
static void WhileCount_build(uType* type)
{
    ::TYPES[29] = ::g::Fuse::Scripting::Observable_typeof();
    ::TYPES[28] = ::g::Uno::IDisposable_typeof();
    ::TYPES[12] = uObject_typeof()->Array();
    ::TYPES[55] = ::g::Fuse::Scripting::ArrayMirror_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(WhileCount_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(WhileCount_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(WhileCount_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(WhileCount_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(WhileCount_type, interface4),
        ::g::Fuse::Scripting::IObserver_typeof(), offsetof(WhileCount_type, interface5));
    type->SetFields(28,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _equalToMode), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _equalToValue), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _greaterThanMode), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _greaterThanValue), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _isRooting), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _items), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _lessThanMode), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _lessThanValue), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _oldCount), 0,
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::WhileCount, _subscription), 0);
    type->Reflection.SetFunctions(9,
        new uFunction("get_EqualTo", NULL, (void*)WhileCount__get_EqualTo_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_EqualTo", NULL, (void*)WhileCount__set_EqualTo_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_GreaterThan", NULL, (void*)WhileCount__get_GreaterThan_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_GreaterThan", NULL, (void*)WhileCount__set_GreaterThan_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_Items", NULL, (void*)WhileCount__get_Items_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Items", NULL, (void*)WhileCount__set_Items_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("get_LessThan", NULL, (void*)WhileCount__get_LessThan_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_LessThan", NULL, (void*)WhileCount__set_LessThan_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)WhileCount__New2_fn, 0, true, WhileCount_typeof(), 0));
}

WhileCount_type* WhileCount_typeof()
{
    static uSStrong<WhileCount_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 38;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(WhileCount);
    options.TypeSize = sizeof(WhileCount_type);
    type = (WhileCount_type*)uClassType::New("Fuse.Reactive.WhileCount", options);
    type->fp_build_ = WhileCount_build;
    type->fp_ctor_ = (void*)WhileCount__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileCount__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileCount__OnUnrooted_fn;
    type->interface5.fp_OnSet = (void(*)(uObject*, uObject*))WhileCount__FuseScriptingIObserverOnSet_fn;
    type->interface5.fp_OnFailed = (void(*)(uObject*, uString*))WhileCount__FuseScriptingIObserverOnFailed_fn;
    type->interface5.fp_OnAdd = (void(*)(uObject*, uObject*))WhileCount__FuseScriptingIObserverOnAdd_fn;
    type->interface5.fp_OnRemoveAt = (void(*)(uObject*, int*))WhileCount__FuseScriptingIObserverOnRemoveAt_fn;
    type->interface5.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))WhileCount__FuseScriptingIObserverOnNewAt_fn;
    type->interface5.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))WhileCount__FuseScriptingIObserverOnInsertAt_fn;
    type->interface5.fp_OnClear = (void(*)(uObject*))WhileCount__FuseScriptingIObserverOnClear_fn;
    type->interface5.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::ListMirror*))WhileCount__FuseScriptingIObserverOnNewAll_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated WhileCount() :2187
void WhileCount__ctor_4_fn(WhileCount* __this)
{
    __this->ctor_4();
}

// private void Assess(int count) :2262
void WhileCount__Assess_fn(WhileCount* __this, int* count)
{
    __this->Assess(*count);
}

// public int get_EqualTo() :2309
void WhileCount__get_EqualTo_fn(WhileCount* __this, int* __retval)
{
    *__retval = __this->EqualTo();
}

// public void set_EqualTo(int value) :2310
void WhileCount__set_EqualTo_fn(WhileCount* __this, int* value)
{
    __this->EqualTo(*value);
}

// private void Fuse.Scripting.IObserver.OnAdd(object addedValue) :2327
void WhileCount__FuseScriptingIObserverOnAdd_fn(WhileCount* __this, uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Fuse.Scripting.IObserver.OnAdd(object)");
    __this->Assess(__this->_oldCount + 1);
}

// private void Fuse.Scripting.IObserver.OnClear() :2345
void WhileCount__FuseScriptingIObserverOnClear_fn(WhileCount* __this)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Fuse.Scripting.IObserver.OnClear()");
    __this->Assess(0);
}

// private void Fuse.Scripting.IObserver.OnFailed(string message) :2323
void WhileCount__FuseScriptingIObserverOnFailed_fn(WhileCount* __this, uString* message)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Fuse.Scripting.IObserver.OnFailed(string)");
    __this->Assess(0);
}

// private void Fuse.Scripting.IObserver.OnInsertAt(int index, object value) :2340
void WhileCount__FuseScriptingIObserverOnInsertAt_fn(WhileCount* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Fuse.Scripting.IObserver.OnInsertAt(int,object)");
    __this->Assess(__this->_oldCount + 1);
}

// private void Fuse.Scripting.IObserver.OnNewAll(Fuse.Scripting.ListMirror values) :2350
void WhileCount__FuseScriptingIObserverOnNewAll_fn(WhileCount* __this, ::g::Fuse::Scripting::ListMirror* values)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Fuse.Scripting.IObserver.OnNewAll(Fuse.Scripting.ListMirror)");
    __this->Assess(uPtr(values)->Length());
}

// private void Fuse.Scripting.IObserver.OnNewAt(int index, object value) :2336
void WhileCount__FuseScriptingIObserverOnNewAt_fn(WhileCount* __this, int* index, uObject* value)
{
}

// private void Fuse.Scripting.IObserver.OnRemoveAt(int index) :2331
void WhileCount__FuseScriptingIObserverOnRemoveAt_fn(WhileCount* __this, int* index)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Fuse.Scripting.IObserver.OnRemoveAt(int)");
    __this->Assess(__this->_oldCount - 1);
}

// private void Fuse.Scripting.IObserver.OnSet(object newValue) :2319
void WhileCount__FuseScriptingIObserverOnSet_fn(WhileCount* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Fuse.Scripting.IObserver.OnSet(object)");
    __this->Assess(1);
}

// public int get_GreaterThan() :2296
void WhileCount__get_GreaterThan_fn(WhileCount* __this, int* __retval)
{
    *__retval = __this->GreaterThan();
}

// public void set_GreaterThan(int value) :2297
void WhileCount__set_GreaterThan_fn(WhileCount* __this, int* value)
{
    __this->GreaterThan(*value);
}

// public object get_Items() :2216
void WhileCount__get_Items_fn(WhileCount* __this, uObject** __retval)
{
    *__retval = __this->Items();
}

// public void set_Items(object value) :2217
void WhileCount__set_Items_fn(WhileCount* __this, uObject* value)
{
    __this->Items(value);
}

// public int get_LessThan() :2283
void WhileCount__get_LessThan_fn(WhileCount* __this, int* __retval)
{
    *__retval = __this->LessThan();
}

// public void set_LessThan(int value) :2284
void WhileCount__set_LessThan_fn(WhileCount* __this, int* value)
{
    __this->LessThan(*value);
}

// public generated WhileCount New() :2187
void WhileCount__New2_fn(WhileCount** __retval)
{
    *__retval = WhileCount::New2();
}

// private void OnItemsChanged() :2227
void WhileCount__OnItemsChanged_fn(WhileCount* __this)
{
    __this->OnItemsChanged();
}

// protected override sealed void OnRooted() :2190
void WhileCount__OnRooted_fn(WhileCount* __this)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_isRooting = true;
    __this->OnItemsChanged();
    __this->_isRooting = false;
}

// protected override sealed void OnUnrooted() :2198
void WhileCount__OnUnrooted_fn(WhileCount* __this)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "OnUnrooted()");

    if (__this->_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_subscription), ::TYPES[28/*Uno.IDisposable*/]));
        __this->_subscription = NULL;
    }

    __this->Assess(0);
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// private void Reassess() :2241
void WhileCount__Reassess_fn(WhileCount* __this)
{
    __this->Reassess();
}

// public generated WhileCount() [instance] :2187
void WhileCount::ctor_4()
{
    uStackFrame __("Fuse.Reactive.WhileCount", ".ctor()");
    ctor_3();
}

// private void Assess(int count) [instance] :2262
void WhileCount::Assess(int count)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Assess(int)");
    _oldCount = count;

    if (((_equalToMode && (count == _equalToValue)) || (_lessThanMode && (count < _lessThanValue))) || (_greaterThanMode && (count > _greaterThanValue)))
        Activate(NULL);
    else 
        Deactivate();
}

// public int get_EqualTo() [instance] :2309
int WhileCount::EqualTo()
{
    uStackFrame __("Fuse.Reactive.WhileCount", "get_EqualTo()");
    return _equalToValue;
}

// public void set_EqualTo(int value) [instance] :2310
void WhileCount::EqualTo(int value)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "set_EqualTo(int)");
    _equalToMode = true;
    _equalToValue = value;
}

// public int get_GreaterThan() [instance] :2296
int WhileCount::GreaterThan()
{
    uStackFrame __("Fuse.Reactive.WhileCount", "get_GreaterThan()");
    return _greaterThanValue;
}

// public void set_GreaterThan(int value) [instance] :2297
void WhileCount::GreaterThan(int value)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "set_GreaterThan(int)");
    _greaterThanMode = true;
    _greaterThanValue = value;
}

// public object get_Items() [instance] :2216
uObject* WhileCount::Items()
{
    uStackFrame __("Fuse.Reactive.WhileCount", "get_Items()");
    return _items;
}

// public void set_Items(object value) [instance] :2217
void WhileCount::Items(uObject* value)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "set_Items(object)");

    if (_items != value)
    {
        _items = value;
        OnItemsChanged();
    }
}

// public int get_LessThan() [instance] :2283
int WhileCount::LessThan()
{
    uStackFrame __("Fuse.Reactive.WhileCount", "get_LessThan()");
    return _lessThanValue;
}

// public void set_LessThan(int value) [instance] :2284
void WhileCount::LessThan(int value)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "set_LessThan(int)");
    _lessThanMode = true;
    _lessThanValue = value;
}

// private void OnItemsChanged() [instance] :2227
void WhileCount::OnItemsChanged()
{
    uStackFrame __("Fuse.Reactive.WhileCount", "OnItemsChanged()");
    ::g::Fuse::Scripting::Observable* obs = uAs< ::g::Fuse::Scripting::Observable*>(_items, ::TYPES[29/*Fuse.Scripting.Observable*/]);

    if (obs != NULL)
    {
        if (_subscription != NULL)
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[28/*Uno.IDisposable*/]));

        _subscription = (uObject*)uPtr(obs)->Subscribe((uObject*)this);
    }
    else 
        Reassess();
}

// private void Reassess() [instance] :2241
void WhileCount::Reassess()
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Reassess()");
    uArray* e = uAs<uArray*>(_items, ::TYPES[12/*object[]*/]);

    if (e != NULL)
        Assess(uPtr(e)->Length());
    else 
    {
        ::g::Fuse::Scripting::Observable* obs = uAs< ::g::Fuse::Scripting::Observable*>(_items, ::TYPES[29/*Fuse.Scripting.Observable*/]);

        if (obs != NULL)
            Assess(uPtr(obs)->Length());
        else 
        {
            ::g::Fuse::Scripting::ArrayMirror* arr = uAs< ::g::Fuse::Scripting::ArrayMirror*>(_items, ::TYPES[55/*Fuse.Scripting.ArrayMirror*/]);

            if (arr != NULL)
                Assess(uPtr(arr)->Length());
        }
    }
}

// public generated WhileCount New() [static] :2187
WhileCount* WhileCount::New2()
{
    WhileCount* obj1 = (WhileCount*)uNew(WhileCount_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/$.uno
// --------------------------------------------------------

// public sealed class WhileEmpty :2388
// {
static void WhileEmpty_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Reactive::WhileCount_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Reactive::WhileCount_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Reactive::WhileCount_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface4),
        ::g::Fuse::Scripting::IObserver_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface5));
    type->SetFields(38);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileEmpty__New3_fn, 0, true, WhileEmpty_typeof(), 0));
}

::g::Fuse::Reactive::WhileCount_type* WhileEmpty_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::WhileCount_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::WhileCount_typeof();
    options.FieldCount = 38;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(WhileEmpty);
    options.TypeSize = sizeof(::g::Fuse::Reactive::WhileCount_type);
    type = (::g::Fuse::Reactive::WhileCount_type*)uClassType::New("Fuse.Reactive.WhileEmpty", options);
    type->fp_build_ = WhileEmpty_build;
    type->fp_ctor_ = (void*)WhileEmpty__New3_fn;
    type->interface5.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::WhileCount__FuseScriptingIObserverOnSet_fn;
    type->interface5.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::WhileCount__FuseScriptingIObserverOnFailed_fn;
    type->interface5.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::WhileCount__FuseScriptingIObserverOnAdd_fn;
    type->interface5.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::WhileCount__FuseScriptingIObserverOnRemoveAt_fn;
    type->interface5.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::WhileCount__FuseScriptingIObserverOnNewAt_fn;
    type->interface5.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::WhileCount__FuseScriptingIObserverOnInsertAt_fn;
    type->interface5.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::WhileCount__FuseScriptingIObserverOnClear_fn;
    type->interface5.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::ListMirror*))::g::Fuse::Reactive::WhileCount__FuseScriptingIObserverOnNewAll_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public WhileEmpty() :2390
void WhileEmpty__ctor_5_fn(WhileEmpty* __this)
{
    __this->ctor_5();
}

// public WhileEmpty New() :2390
void WhileEmpty__New3_fn(WhileEmpty** __retval)
{
    *__retval = WhileEmpty::New3();
}

// public WhileEmpty() [instance] :2390
void WhileEmpty::ctor_5()
{
    uStackFrame __("Fuse.Reactive.WhileEmpty", ".ctor()");
    ctor_4();
    EqualTo(0);
}

// public WhileEmpty New() [static] :2390
WhileEmpty* WhileEmpty::New3()
{
    WhileEmpty* obj1 = (WhileEmpty*)uNew(WhileEmpty_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/$.uno
// --------------------------------------------------------

// public sealed class WhileNotEmpty :2416
// {
static void WhileNotEmpty_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Reactive::WhileCount_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Reactive::WhileCount_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Reactive::WhileCount_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface4),
        ::g::Fuse::Scripting::IObserver_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface5));
    type->SetFields(38);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileNotEmpty__New3_fn, 0, true, WhileNotEmpty_typeof(), 0));
}

::g::Fuse::Reactive::WhileCount_type* WhileNotEmpty_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::WhileCount_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::WhileCount_typeof();
    options.FieldCount = 38;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(WhileNotEmpty);
    options.TypeSize = sizeof(::g::Fuse::Reactive::WhileCount_type);
    type = (::g::Fuse::Reactive::WhileCount_type*)uClassType::New("Fuse.Reactive.WhileNotEmpty", options);
    type->fp_build_ = WhileNotEmpty_build;
    type->fp_ctor_ = (void*)WhileNotEmpty__New3_fn;
    type->interface5.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::WhileCount__FuseScriptingIObserverOnSet_fn;
    type->interface5.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::WhileCount__FuseScriptingIObserverOnFailed_fn;
    type->interface5.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::WhileCount__FuseScriptingIObserverOnAdd_fn;
    type->interface5.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::WhileCount__FuseScriptingIObserverOnRemoveAt_fn;
    type->interface5.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::WhileCount__FuseScriptingIObserverOnNewAt_fn;
    type->interface5.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::WhileCount__FuseScriptingIObserverOnInsertAt_fn;
    type->interface5.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::WhileCount__FuseScriptingIObserverOnClear_fn;
    type->interface5.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::ListMirror*))::g::Fuse::Reactive::WhileCount__FuseScriptingIObserverOnNewAll_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public WhileNotEmpty() :2418
void WhileNotEmpty__ctor_5_fn(WhileNotEmpty* __this)
{
    __this->ctor_5();
}

// public WhileNotEmpty New() :2418
void WhileNotEmpty__New3_fn(WhileNotEmpty** __retval)
{
    *__retval = WhileNotEmpty::New3();
}

// public WhileNotEmpty() [instance] :2418
void WhileNotEmpty::ctor_5()
{
    uStackFrame __("Fuse.Reactive.WhileNotEmpty", ".ctor()");
    ctor_4();
    GreaterThan(0);
}

// public WhileNotEmpty New() [static] :2418
WhileNotEmpty* WhileNotEmpty::New3()
{
    WhileNotEmpty* obj1 = (WhileNotEmpty*)uNew(WhileNotEmpty_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/$.uno
// --------------------------------------------------------

// public class With :2454
// {
static void With_build(uType* type)
{
    ::TYPES[56] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[41] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[57] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Node_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(28,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::With, _data), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Data", NULL, (void*)With__get_Data_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Data", NULL, (void*)With__set_Data_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction(".ctor", NULL, (void*)With__New2_fn, 0, true, With_typeof(), 0));
}

::g::Fuse::Triggers::Trigger_type* With_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 29;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(With);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Reactive.With", options);
    type->fp_build_ = With_build;
    type->fp_ctor_ = (void*)With__New2_fn;
    type->fp_GetImplicitDataForChild = (void(*)(::g::Fuse::Node*, ::g::Fuse::Node*, ::g::Uno::Collections::List*))With__GetImplicitDataForChild_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))With__OnRooted_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated With() :2454
void With__ctor_4_fn(With* __this)
{
    __this->ctor_4();
}

// public object get_Data() :2466
void With__get_Data_fn(With* __this, uObject** __retval)
{
    *__retval = __this->Data();
}

// public void set_Data(object value) :2467
void With__set_Data_fn(With* __this, uObject* value)
{
    __this->Data(value);
}

// protected internal override sealed void GetImplicitDataForChild(Fuse.Node child, Uno.Collections.List<object> result) :2483
void With__GetImplicitDataForChild_fn(With* __this, ::g::Fuse::Node* child, ::g::Uno::Collections::List* result)
{
    uStackFrame __("Fuse.Reactive.With", "GetImplicitDataForChild(Fuse.Node,Uno.Collections.List<object>)");
    ::g::Uno::Collections::List__Add_fn(uPtr(result), __this->_data);
}

// public generated With New() :2454
void With__New2_fn(With** __retval)
{
    *__retval = With::New2();
}

// private void OnChanged() :2477
void With__OnChanged_fn(With* __this)
{
    __this->OnChanged();
}

// protected override sealed void OnRooted() :2456
void With__OnRooted_fn(With* __this)
{
    uStackFrame __("Fuse.Reactive.With", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->Activate(NULL);
}

// public generated With() [instance] :2454
void With::ctor_4()
{
    uStackFrame __("Fuse.Reactive.With", ".ctor()");
    ctor_3();
}

// public object get_Data() [instance] :2466
uObject* With::Data()
{
    uStackFrame __("Fuse.Reactive.With", "get_Data()");
    return _data;
}

// public void set_Data(object value) [instance] :2467
void With::Data(uObject* value)
{
    uStackFrame __("Fuse.Reactive.With", "set_Data(object)");

    if (_data != value)
    {
        _data = value;
        OnChanged();
    }
}

// private void OnChanged() [instance] :2477
void With::OnChanged()
{
    uStackFrame __("Fuse.Reactive.With", "OnChanged()");
    ::g::Fuse::Node* ret3;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Nodes()), ::TYPES[56/*Uno.Collections.IEnumerable<Fuse.Node>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[41/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::Node* n = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[57/*Uno.Collections.IEnumerator<Fuse.Node>*/]), &ret3), ret3);
        uPtr(n)->OnDataContextChanged();
    }
}

// public generated With New() [static] :2454
With* With::New2()
{
    With* obj2 = (With*)uNew(With_typeof());
    obj2->ctor_4();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/$.uno
// --------------------------------------------------------

// public sealed class WriteDataBinding<T> :414
// {
static void WriteDataBinding_build(uType* type)
{
    type->SetBase(::g::Fuse::Reactive::DataBinding_typeof()->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Fuse::Scripting::IObserver_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface0),
        ::g::Fuse::INameListener_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface1),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface2));
    type->SetFields(8);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", type, (void*)WriteDataBinding__New3_fn, 0, true, type, 2, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0)), ::g::Uno::String_typeof()));
}

::g::Fuse::Reactive::DataBinding_type* WriteDataBinding_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::DataBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::DataBinding_typeof();
    options.FieldCount = 8;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(WriteDataBinding);
    options.TypeSize = sizeof(::g::Fuse::Reactive::DataBinding_type);
    type = (::g::Fuse::Reactive::DataBinding_type*)uClassType::New("Fuse.Reactive.WriteDataBinding`1", options);
    type->fp_build_ = WriteDataBinding_build;
    type->interface0.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnClear_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnAdd_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnNewAt_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnFailed_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::ListMirror*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnNewAll_fn;
    type->interface0.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnRemoveAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnInsertAt_fn;
    type->interface1.fp_OnNameChanged = (void(*)(uObject*, ::g::Fuse::Node*, ::g::Uno::UX::Selector*))::g::Fuse::Reactive::DataBinding__FuseINameListenerOnNameChanged_fn;
    type->interface2.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Reactive::DataBinding__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// public WriteDataBinding(Uno.UX.Property<T> target, string key) :417
void WriteDataBinding__ctor_4_fn(WriteDataBinding* __this, ::g::Uno::UX::Property1* target, uString* key)
{
    __this->ctor_4(target, key);
}

// public WriteDataBinding New(Uno.UX.Property<T> target, string key) :417
void WriteDataBinding__New3_fn(uType* __type, ::g::Uno::UX::Property1* target, uString* key, WriteDataBinding** __retval)
{
    *__retval = WriteDataBinding::New3(__type, target, key);
}

// public WriteDataBinding(Uno.UX.Property<T> target, string key) [instance] :417
void WriteDataBinding::ctor_4(::g::Uno::UX::Property1* target, uString* key)
{
    uStackFrame __("Fuse.Reactive.WriteDataBinding`1", ".ctor(Uno.UX.Property<T>,string)");
    ctor_3(target, key, false, true);
}

// public WriteDataBinding New(Uno.UX.Property<T> target, string key) [static] :417
WriteDataBinding* WriteDataBinding::New3(uType* __type, ::g::Uno::UX::Property1* target, uString* key)
{
    WriteDataBinding* obj1 = (WriteDataBinding*)uNew(__type);
    obj1->ctor_4(target, key);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/reactive/$.uno
// ------------------------------------------------------------

// public sealed class WritePropertyBinding :132
// {
static void WritePropertyBinding_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Reactive::PropertyBinding_type, interface0));
    type->SetFields(5);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WritePropertyBinding__New3_fn, 0, true, WritePropertyBinding_typeof(), 2, ::g::Uno::UX::Property_typeof(), ::g::Uno::UX::Property_typeof()));
}

::g::Fuse::Reactive::PropertyBinding_type* WritePropertyBinding_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::PropertyBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::PropertyBinding_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(WritePropertyBinding);
    options.TypeSize = sizeof(::g::Fuse::Reactive::PropertyBinding_type);
    type = (::g::Fuse::Reactive::PropertyBinding_type*)uClassType::New("Fuse.Reactive.WritePropertyBinding", options);
    type->fp_build_ = WritePropertyBinding_build;
    type->interface0.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Reactive::PropertyBinding__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// public WritePropertyBinding(Uno.UX.Property target, Uno.UX.Property source) :135
void WritePropertyBinding__ctor_3_fn(WritePropertyBinding* __this, ::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source)
{
    __this->ctor_3(target, source);
}

// public WritePropertyBinding New(Uno.UX.Property target, Uno.UX.Property source) :135
void WritePropertyBinding__New3_fn(::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source, WritePropertyBinding** __retval)
{
    *__retval = WritePropertyBinding::New3(target, source);
}

// public WritePropertyBinding(Uno.UX.Property target, Uno.UX.Property source) [instance] :135
void WritePropertyBinding::ctor_3(::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source)
{
    uStackFrame __("Fuse.Reactive.WritePropertyBinding", ".ctor(Uno.UX.Property,Uno.UX.Property)");
    ctor_2(target, source, false, true);
}

// public WritePropertyBinding New(Uno.UX.Property target, Uno.UX.Property source) [static] :135
WritePropertyBinding* WritePropertyBinding::New3(::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source)
{
    WritePropertyBinding* obj1 = (WritePropertyBinding*)uNew(WritePropertyBinding_typeof());
    obj1->ctor_3(target, source);
    return obj1;
}
// }

}}} // ::g::Fuse::Reactive
