// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseCore_bundle.h>
#include <Fuse.AlternateRoot.h>
#include <Fuse.AppBase.h>
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.CacheFramebuffer.h>
#include <Fuse.Deferred.h>
#include <Fuse.DeferredManager.h>
#include <Fuse.Diagnostic.h>
#include <Fuse.DiagnosticHandler.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.DiagnosticType.h>
#include <Fuse.DrawContext.h>
#include <Fuse.DrawHelpers.h>
#include <Fuse.FastMatrix.h>
#include <Fuse.FastProperty1.h>
#include <Fuse.FastProperty1Link.h>
#include <Fuse.FastProperty1Link-1.h>
#include <Fuse.FastProperty2.h>
#include <Fuse.FastProperty2Link.h>
#include <Fuse.FastProperty2Link-1.h>
#include <Fuse.FixedViewport.h>
#include <Fuse.Font.h>
#include <Fuse.FramebufferPool.h>
#include <Fuse.FramebufferPoolImpl.h>
#include <Fuse.FrustumViewport.h>
#include <Fuse.HitTestCallback.h>
#include <Fuse.HitTestContext.h>
#include <Fuse.HitTestResult.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IBeginRemoveVisualListener.h>
#include <Fuse.ICommonViewport.h>
#include <Fuse.IDataProvider.h>
#include <Fuse.IDeferred.h>
#include <Fuse.IFlush.h>
#include <Fuse.IFrustum.h>
#include <Fuse.ILoading.h>
#include <Fuse.ILoadingStatic.h>
#include <Fuse.INameListener.h>
#include <Fuse.InheritViewport.h>
#include <Fuse.Input.Focus.h>
#include <Fuse.Input.FocusNavigationDirection.h>
#include <Fuse.Input.Keyboard.h>
#include <Fuse.Input.TextService.h>
#include <Fuse.Internal.FontFaceDescriptor.h>
#include <Fuse.Internal.FrustumMatrix.h>
#include <Fuse.Internal.SystemFont.h>
#include <Fuse.InvalidateLayoutReason.h>
#include <Fuse.iOSDevice.ScreenOrientation.h>
#include <Fuse.IOutput-1.h>
#include <Fuse.IParentObserver.h>
#include <Fuse.IRenderViewport.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITemplateObserver.h>
#include <Fuse.ITransformMode.h>
#include <Fuse.ITransformRelative.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.IUpdateListener.h>
#include <Fuse.IViewport.h>
#include <Fuse.KeyboardBootstrapper.h>
#include <Fuse.Layer.h>
#include <Fuse.LayoutDependent.h>
#include <Fuse.LayoutParams.Flags.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.LayoutPriority.h>
#include <Fuse.LayoutRole.h>
#include <Fuse.MarginBoxDependent.h>
#include <Fuse.MobileBootstrapping.h>
#include <Fuse.NameRegistry.h>
#include <Fuse.Node.CallFuncClosure.h>
#include <Fuse.Node.h>
#include <Fuse.OrthographicFrustum.h>
#include <Fuse.OSVersion.h>
#include <Fuse.PendingRemoveVisual.h>
#include <Fuse.PerspectiveFrustum.h>
#include <Fuse.PlacedArgs.h>
#include <Fuse.PlacedHandler.h>
#include <Fuse.Platform.AppEvents.h>
#include <Fuse.Platform.ApplicationState.h>
#include <Fuse.Platform.Display.h>
#include <Fuse.Platform.Lifecycle.h>
#include <Fuse.Preview.SelectionManager.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.PropertyState.h>
#include <Fuse.RelativeTransform-1.h>
#include <Fuse.RenderTargetEntry.h>
#include <Fuse.RequestBringIntoViewArgs.h>
#include <Fuse.RequestBringIntoViewHandler.h>
#include <Fuse.RequiresRootedException.h>
#include <Fuse.Resources.DisposalManager.h>
#include <Fuse.Resources.DisposalRequest.h>
#include <Fuse.Resources.ResourceRegistry.h>
#include <Fuse.RootStage.h>
#include <Fuse.RootViewport.h>
#include <Fuse.Rotation.h>
#include <Fuse.Scaling.h>
#include <Fuse.ScalingModes.h>
#include <Fuse.ScalingModes.IdentityMode.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.ExecutionThread.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.IEventSerializer.h>
#include <Fuse.Scripting.IObject.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ScriptClass.h>
#include <Fuse.Scripting.ScriptException.h>
#include <Fuse.Scripting.ScriptMember.h>
#include <Fuse.Scripting.ScriptMethod-1.h>
#include <Fuse.Scripting.ScriptMethodInline.h>
#include <Fuse.Scripting.ScriptProperty-2.h>
#include <Fuse.Shear.h>
#include <Fuse.Stage.h>
#include <Fuse.SystemFont.h>
#include <Fuse.SystemFont.Style.h>
#include <Fuse.SystemFont.Weight.h>
#include <Fuse.TestDeferredManager.h>
#include <Fuse.Time.h>
#include <Fuse.Timer.h>
#include <Fuse.Toast.h>
#include <Fuse.Transform.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.TranslationModes.HeightMode.h>
#include <Fuse.TranslationModes.LocalMode.h>
#include <Fuse.TranslationModes.ParentSizeMode.h>
#include <Fuse.TranslationModes.SizeMode.h>
#include <Fuse.TranslationModes.WidthMode.h>
#include <Fuse.Triggers.BusyTask.h>
#include <Fuse.UnhandledExceptionArgs.h>
#include <Fuse.UnhandledExceptionHandler.h>
#include <Fuse.UpdateAction.h>
#include <Fuse.UpdateDispatcher.h>
#include <Fuse.UpdateListener.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.UserEvent.h>
#include <Fuse.UserEventArgs.h>
#include <Fuse.UserEventDispatch.h>
#include <Fuse.UserEventHandler.h>
#include <Fuse.Visual.CancelInteractionsType.h>
#include <Fuse.Visual.h>
#include <Fuse.Visual.HitTestRecord.h>
#include <Fuse.Visual.HitTestTransformMode.h>
#include <Fuse.Visual.InteractionItem.h>
#include <Fuse.Visual.ParameterProperty.h>
#include <Fuse.Visual.VisualBits.h>
#include <Fuse.VisualBounds.h>
#include <Fuse.VisualContext.h>
#include <Fuse.VisualEvent-2.h>
#include <Fuse.VisualEventArgs.h>
#include <Fuse.VisualEventHandler.h>
#include <Fuse.VisualEventMode.h>
#include <Fuse.VisualListCache.h>
#include <Fuse.WrapException.h>
#include <OpenGL.GL.h>
#include <OpenGL.GLClearBufferMask.h>
#include <OpenGL.GLEnableCap.h>
#include <OpenGL.GLError.h>
#include <OpenGL.GLFramebufferHandle.h>
#include <OpenGL.GLFramebufferTarget.h>
#include <OpenGL.GLInteger4Name.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Action-3.h>
#include <Uno.AggregateException.h>
#include <Uno.Application.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.ArgumentOutOfRangeException.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h>
#include <Uno.Collections.Dictionary-2.ValueCollection.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.HashSet-1.Enumerator.h>
#include <Uno.Collections.HashSet-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.IListExtensions.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.ObservableList-1.h>
#include <Uno.Collections.PriorityQueue-1.h>
#include <Uno.Collections.PriorityQueueType.h>
#include <Uno.Comparison-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Func-2.h>
#include <Uno.Geometry.Collision.h>
#include <Uno.Geometry.Ray.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.Framebuffer.h>
#include <Uno.Graphics.FramebufferFlags.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.PrimitiveType.h>
#include <Uno.Graphics.RenderTarget.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Object.h>
#include <Uno.Platform.Key.h>
#include <Uno.Platform.KeyEventArgs.h>
#include <Uno.Platform.TextInputEventArgs.h>
#include <Uno.Platform.Window.h>
#include <Uno.Platform2.Application.h>
#include <Uno.Platform2.Display.h>
#include <Uno.Predicate-1.h>
#include <Uno.Quaternion.h>
#include <Uno.Rect.h>
#include <Uno.Recti.h>
#include <Uno.Runtime.Implementation.GraphicsContextHandle.h>
#include <Uno.Runtime.Implementation.GraphicsContextImpl.h>
#include <Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.Threading.LockGuard.h>
#include <Uno.Threading.Mutex.h>
#include <Uno.Type.h>
#include <Uno.UInt.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Template.h>
#include <Uno.Vector.h>
static uString* STRINGS[86];
static uType* TYPES[130];

namespace g{
namespace Fuse{

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public sealed class AlternateRoot :11
// {
static void AlternateRoot_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface3));
    type->SetFields(13,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::AlternateRoot, _isEnabled), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::AlternateRoot, _node), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::AlternateRoot, _parentNode), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::AlternateRoot, _preserveContext), 0);
    type->Reflection.SetFunctions(11,
        new uFunction("get_IsEnabled", NULL, (void*)AlternateRoot__get_IsEnabled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsEnabled", NULL, (void*)AlternateRoot__set_IsEnabled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)AlternateRoot__New2_fn, 0, true, AlternateRoot_typeof(), 0),
        new uFunction("get_Node", NULL, (void*)AlternateRoot__get_Node_fn, 0, false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("set_Node", NULL, (void*)AlternateRoot__set_Node_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("get_ParentNode", NULL, (void*)AlternateRoot__get_ParentNode_fn, 0, false, ::g::Fuse::Visual_typeof(), 0),
        new uFunction("set_ParentNode", NULL, (void*)AlternateRoot__set_ParentNode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("get_PreserveContext", NULL, (void*)AlternateRoot__get_PreserveContext_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_PreserveContext", NULL, (void*)AlternateRoot__set_PreserveContext_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Visual", NULL, (void*)AlternateRoot__get_Visual_fn, 0, false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("set_Visual", NULL, (void*)AlternateRoot__set_Visual_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()));
}

::g::Fuse::Node_type* AlternateRoot_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 17;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(AlternateRoot);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.AlternateRoot", options);
    type->fp_build_ = AlternateRoot_build;
    type->fp_ctor_ = (void*)AlternateRoot__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))AlternateRoot__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))AlternateRoot__OnUnrooted_fn;
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

// public generated AlternateRoot() :11
void AlternateRoot__ctor_3_fn(AlternateRoot* __this)
{
    __this->ctor_3();
}

// private void Add() :117
void AlternateRoot__Add1_fn(AlternateRoot* __this)
{
    __this->Add1();
}

// public bool get_IsEnabled() :71
void AlternateRoot__get_IsEnabled_fn(AlternateRoot* __this, bool* __retval)
{
    *__retval = __this->IsEnabled();
}

// public void set_IsEnabled(bool value) :72
void AlternateRoot__set_IsEnabled_fn(AlternateRoot* __this, bool* value)
{
    __this->IsEnabled(*value);
}

// public generated AlternateRoot New() :11
void AlternateRoot__New2_fn(AlternateRoot** __retval)
{
    *__retval = AlternateRoot::New2();
}

// public Fuse.Node get_Node() :41
void AlternateRoot__get_Node_fn(AlternateRoot* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Node();
}

// public void set_Node(Fuse.Node value) :42
void AlternateRoot__set_Node_fn(AlternateRoot* __this, ::g::Fuse::Node* value)
{
    __this->Node(value);
}

// protected override sealed void OnRooted() :97
void AlternateRoot__OnRooted_fn(AlternateRoot* __this)
{
    uStackFrame __("Fuse.AlternateRoot", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);

    if (__this->IsEnabled())
        __this->Add1();
}

// protected override sealed void OnUnrooted() :104
void AlternateRoot__OnUnrooted_fn(AlternateRoot* __this)
{
    uStackFrame __("Fuse.AlternateRoot", "OnUnrooted()");
    __this->Remove1();
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// public Fuse.Visual get_ParentNode() :17
void AlternateRoot__get_ParentNode_fn(AlternateRoot* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->ParentNode();
}

// public void set_ParentNode(Fuse.Visual value) :18
void AlternateRoot__set_ParentNode_fn(AlternateRoot* __this, ::g::Fuse::Visual* value)
{
    __this->ParentNode(value);
}

// public bool get_PreserveContext() :93
void AlternateRoot__get_PreserveContext_fn(AlternateRoot* __this, bool* __retval)
{
    *__retval = __this->PreserveContext();
}

// public void set_PreserveContext(bool value) :94
void AlternateRoot__set_PreserveContext_fn(AlternateRoot* __this, bool* value)
{
    __this->PreserveContext(*value);
}

// private void Remove() :110
void AlternateRoot__Remove1_fn(AlternateRoot* __this)
{
    __this->Remove1();
}

// public Fuse.Node get_Visual() :62
void AlternateRoot__get_Visual_fn(AlternateRoot* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Visual();
}

// public void set_Visual(Fuse.Node value) :63
void AlternateRoot__set_Visual_fn(AlternateRoot* __this, ::g::Fuse::Node* value)
{
    __this->Visual(value);
}

// public generated AlternateRoot() [instance] :11
void AlternateRoot::ctor_3()
{
    uStackFrame __("Fuse.AlternateRoot", ".ctor()");
    _isEnabled = true;
    _preserveContext = true;
    ctor_2();
}

// private void Add() [instance] :117
void AlternateRoot::Add1()
{
    uStackFrame __("Fuse.AlternateRoot", "Add()");

    if ((ParentNode() == NULL) || (Node() == NULL))
        return;

    if (PreserveContext())
        uPtr(Node())->OverrideContextParent = Parent();

    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ParentNode())->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), Node());
}

// public bool get_IsEnabled() [instance] :71
bool AlternateRoot::IsEnabled()
{
    uStackFrame __("Fuse.AlternateRoot", "get_IsEnabled()");
    return _isEnabled;
}

// public void set_IsEnabled(bool value) [instance] :72
void AlternateRoot::IsEnabled(bool value)
{
    uStackFrame __("Fuse.AlternateRoot", "set_IsEnabled(bool)");

    if (_isEnabled == value)
        return;

    _isEnabled = value;

    if (!IsRootingCompleted())
        return;

    if (_isEnabled)
        Add1();
    else 
        Remove1();
}

// public Fuse.Node get_Node() [instance] :41
::g::Fuse::Node* AlternateRoot::Node()
{
    uStackFrame __("Fuse.AlternateRoot", "get_Node()");
    return _node;
}

// public void set_Node(Fuse.Node value) [instance] :42
void AlternateRoot::Node(::g::Fuse::Node* value)
{
    uStackFrame __("Fuse.AlternateRoot", "set_Node(Fuse.Node)");

    if (value == _node)
        return;

    if (!IsRootingCompleted())
    {
        _node = value;
        return;
    }

    Remove1();
    _node = value;
    Add1();
}

// public Fuse.Visual get_ParentNode() [instance] :17
::g::Fuse::Visual* AlternateRoot::ParentNode()
{
    uStackFrame __("Fuse.AlternateRoot", "get_ParentNode()");
    return _parentNode;
}

// public void set_ParentNode(Fuse.Visual value) [instance] :18
void AlternateRoot::ParentNode(::g::Fuse::Visual* value)
{
    uStackFrame __("Fuse.AlternateRoot", "set_ParentNode(Fuse.Visual)");

    if (value == _parentNode)
        return;

    if (!IsRootingCompleted())
    {
        _parentNode = value;
        return;
    }

    Remove1();
    _parentNode = value;
    Add1();
}

// public bool get_PreserveContext() [instance] :93
bool AlternateRoot::PreserveContext()
{
    uStackFrame __("Fuse.AlternateRoot", "get_PreserveContext()");
    return _preserveContext;
}

// public void set_PreserveContext(bool value) [instance] :94
void AlternateRoot::PreserveContext(bool value)
{
    uStackFrame __("Fuse.AlternateRoot", "set_PreserveContext(bool)");
    _preserveContext = value;
}

// private void Remove() [instance] :110
void AlternateRoot::Remove1()
{
    uStackFrame __("Fuse.AlternateRoot", "Remove()");

    if ((ParentNode() == NULL) || (Node() == NULL))
        return;

    uPtr(ParentNode())->BeginRemoveChild(Node(), NULL);
}

// public Fuse.Node get_Visual() [instance] :62
::g::Fuse::Node* AlternateRoot::Visual()
{
    uStackFrame __("Fuse.AlternateRoot", "get_Visual()");
    return Node();
}

// public void set_Visual(Fuse.Node value) [instance] :63
void AlternateRoot::Visual(::g::Fuse::Node* value)
{
    uStackFrame __("Fuse.AlternateRoot", "set_Visual(Fuse.Node)");
    Node(value);
}

// public generated AlternateRoot New() [static] :11
AlternateRoot* AlternateRoot::New2()
{
    AlternateRoot* obj1 = (AlternateRoot*)uNew(AlternateRoot_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public abstract class AppBase :164
// {
static void AppBase_build(uType* type)
{
    ::STRINGS[0] = uString::Const("");
    ::STRINGS[1] = uString::Const("\n"
        "");
    ::STRINGS[2] = uString::Const("No AppBase Current defined");
    ::STRINGS[3] = uString::Const("No RootViewport defined");
    ::TYPES[1] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Visual_typeof());
    ::TYPES[2] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Platform::ApplicationState_typeof());
    ::TYPES[3] = ::g::Uno::Action_typeof();
    ::TYPES[4] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof());
    ::TYPES[5] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[6] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Visual_typeof());
    ::TYPES[7] = ::g::Fuse::Visual_typeof();
    ::TYPES[8] = ::g::Fuse::IViewport_typeof();
    ::TYPES[9] = ::g::Fuse::UnhandledExceptionHandler_typeof();
    type->SetFields(4,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::AppBase, _isInvalidateSelectionScheduled), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Visual_typeof()), offsetof(::g::Fuse::AppBase, _selection), 0,
        ::g::Fuse::RootViewport_typeof(), offsetof(::g::Fuse::AppBase, _RootViewport), 0,
        ::g::Fuse::UnhandledExceptionHandler_typeof(), offsetof(::g::Fuse::AppBase, UnhandledException1), 0,
        ::g::Fuse::RootViewport_typeof(), (uintptr_t)&::g::Fuse::AppBase::_testRootViewport_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(12,
        new uFunction("get_Background", NULL, (void*)AppBase__get_Background_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_Background", NULL, (void*)AppBase__set_Background_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_Children", NULL, NULL, offsetof(AppBase_type, fp_get_Children), false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof()), 0),
        new uFunction("get_ChildrenVisual", NULL, NULL, offsetof(AppBase_type, fp_get_ChildrenVisual), false, ::g::Fuse::Visual_typeof(), 0),
        new uFunction("get_Current", NULL, (void*)AppBase__get_Current1_fn, 0, true, AppBase_typeof(), 0),
        new uFunction("DrawSelection", NULL, (void*)AppBase__DrawSelection_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::DrawContext_typeof()),
        new uFunction("InvalidateSelection", NULL, (void*)AppBase__InvalidateSelection_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("OnUnhandledException", NULL, (void*)AppBase__OnUnhandledException_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Exception_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("get_Resources", NULL, (void*)AppBase__get_Resources_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Resource_typeof()), 0),
        new uFunction("get_RootViewport", NULL, (void*)AppBase__get_RootViewport_fn, 0, false, ::g::Fuse::RootViewport_typeof(), 0),
        new uFunction("add_UnhandledException", NULL, (void*)AppBase__add_UnhandledException_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::UnhandledExceptionHandler_typeof()),
        new uFunction("remove_UnhandledException", NULL, (void*)AppBase__remove_UnhandledException_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::UnhandledExceptionHandler_typeof()));
}

AppBase_type* AppBase_typeof()
{
    static uSStrong<AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Application_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(AppBase);
    options.TypeSize = sizeof(AppBase_type);
    type = (AppBase_type*)uClassType::New("Fuse.AppBase", options);
    type->fp_build_ = AppBase_build;
    type->fp_OnUpdate = AppBase__OnUpdate_fn;
    return type;
}

// protected AppBase() :169
void AppBase__ctor_1_fn(AppBase* __this)
{
    __this->ctor_1();
}

// public float4 get_Background() :371
void AppBase__get_Background_fn(AppBase* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Background();
}

// public void set_Background(float4 value) :372
void AppBase__set_Background_fn(AppBase* __this, ::g::Uno::Float4* value)
{
    __this->Background(*value);
}

// public static new Fuse.AppBase get_Current() :340
void AppBase__get_Current1_fn(AppBase** __retval)
{
    *__retval = AppBase::Current1();
}

// internal static Fuse.RootViewport get_CurrentRootViewport() :352
void AppBase__get_CurrentRootViewport_fn(::g::Fuse::RootViewport** __retval)
{
    *__retval = AppBase::CurrentRootViewport();
}

// private void DoInvalidateSelection() :263
void AppBase__DoInvalidateSelection_fn(AppBase* __this)
{
    __this->DoInvalidateSelection();
}

// public void DrawSelection(Fuse.DrawContext dc) :279
void AppBase__DrawSelection_fn(AppBase* __this, ::g::Fuse::DrawContext* dc)
{
    __this->DrawSelection(dc);
}

// private void FindSelection(Fuse.Node n) :236
void AppBase__FindSelection_fn(AppBase* __this, ::g::Fuse::Node* n)
{
    __this->FindSelection(n);
}

// private void InvalidateGraphicsView(Fuse.Node n) :247
void AppBase__InvalidateGraphicsView_fn(AppBase* __this, ::g::Fuse::Node* n)
{
    __this->InvalidateGraphicsView(n);
}

// public void InvalidateSelection() :269
void AppBase__InvalidateSelection_fn(AppBase* __this)
{
    __this->InvalidateSelection();
}

// private void OnEnteringBackground(Fuse.Platform.ApplicationState s) :290
void AppBase__OnEnteringBackground_fn(AppBase* __this, int* s)
{
    __this->OnEnteringBackground(*s);
}

// private void OnLowMemory() :295
void AppBase__OnLowMemory_fn(AppBase* __this)
{
    __this->OnLowMemory();
}

// private void OnSelectionChanged(object sender, Uno.EventArgs args) :225
void AppBase__OnSelectionChanged_fn(AppBase* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnSelectionChanged(sender, args);
}

// public void OnUnhandledException(Uno.Exception e, [bool propagate]) :312
void AppBase__OnUnhandledException_fn(AppBase* __this, ::g::Uno::Exception* e, bool* propagate)
{
    __this->OnUnhandledException(e, *propagate);
}

// internal static void OnUnhandledExceptionInternal(Uno.Exception e) :330
void AppBase__OnUnhandledExceptionInternal_fn(::g::Uno::Exception* e)
{
    AppBase::OnUnhandledExceptionInternal(e);
}

// protected virtual void OnUpdate() :397
void AppBase__OnUpdate_fn(AppBase* __this)
{
    uStackFrame __("Fuse.AppBase", "OnUpdate()");
    ::g::Fuse::UpdateManager::Update();
    ::g::Fuse::UpdateManager::IncreaseFrameIndex();
}

// internal float get_PixelsPerPoint() :205
void AppBase__get_PixelsPerPoint_fn(AppBase* __this, float* __retval)
{
    *__retval = __this->PixelsPerPoint();
}

// public Uno.Collections.IList<Uno.UX.Resource> get_Resources() :392
void AppBase__get_Resources_fn(AppBase* __this, uObject** __retval)
{
    *__retval = __this->Resources();
}

// public generated Fuse.RootViewport get_RootViewport() :167
void AppBase__get_RootViewport_fn(AppBase* __this, ::g::Fuse::RootViewport** __retval)
{
    *__retval = __this->RootViewport();
}

// protected generated void set_RootViewport(Fuse.RootViewport value) :167
void AppBase__set_RootViewport_fn(AppBase* __this, ::g::Fuse::RootViewport* value)
{
    __this->RootViewport(value);
}

// public generated void add_UnhandledException(Fuse.UnhandledExceptionHandler value) :305
void AppBase__add_UnhandledException_fn(AppBase* __this, uDelegate* value)
{
    __this->add_UnhandledException(value);
}

// public generated void remove_UnhandledException(Fuse.UnhandledExceptionHandler value) :305
void AppBase__remove_UnhandledException_fn(AppBase* __this, uDelegate* value)
{
    __this->remove_UnhandledException(value);
}

uSStrong< ::g::Fuse::RootViewport*> AppBase::_testRootViewport_;

// protected AppBase() [instance] :169
void AppBase::ctor_1()
{
    uStackFrame __("Fuse.AppBase", ".ctor()");
    _selection = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[1/*Uno.Collections.List<Fuse.Visual>*/]));
    ctor_();
    ClearColor(::g::Uno::Float4__New1(1.0f));
    ::g::Fuse::Platform::Lifecycle::add_EnteringBackground(uDelegate::New(::TYPES[2/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)AppBase__OnEnteringBackground_fn, this));
    ::g::Fuse::Platform::AppEvents::add_LowMemoryWarning(uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)AppBase__OnLowMemory_fn, this));
    ::g::Fuse::Preview::SelectionManager::add_SelectionChanged(uDelegate::New(::TYPES[4/*Uno.EventHandler<Uno.EventArgs>*/], (void*)AppBase__OnSelectionChanged_fn, this));
}

// public float4 get_Background() [instance] :371
::g::Uno::Float4 AppBase::Background()
{
    uStackFrame __("Fuse.AppBase", "get_Background()");
    return ClearColor();
}

// public void set_Background(float4 value) [instance] :372
void AppBase::Background(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.AppBase", "set_Background(float4)");
    ClearColor(value);
}

// private void DoInvalidateSelection() [instance] :263
void AppBase::DoInvalidateSelection()
{
    uStackFrame __("Fuse.AppBase", "DoInvalidateSelection()");
    uPtr(RootViewport())->VisitSubtree(uDelegate::New(::TYPES[5/*Uno.Action<Fuse.Node>*/], (void*)AppBase__InvalidateGraphicsView_fn, this));
    _isInvalidateSelectionScheduled = false;
}

// public void DrawSelection(Fuse.DrawContext dc) [instance] :279
void AppBase::DrawSelection(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.AppBase", "DrawSelection(Fuse.DrawContext)");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Visual*> > ret2;

    if (uPtr(_selection)->Count() > 0)
    {
        for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Visual*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_selection), &ret2), ret2); enum1.MoveNext(::TYPES[6/*Uno.Collections.List<Fuse.Visual>.Enumerator*/]); )
        {
            ::g::Fuse::Visual* n = enum1.Current(::TYPES[6/*Uno.Collections.List<Fuse.Visual>.Enumerator*/]);
            uPtr(n)->DrawSelection(dc);
        }

        InvalidateSelection();
    }
}

// private void FindSelection(Fuse.Node n) [instance] :236
void AppBase::FindSelection(::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.AppBase", "FindSelection(Fuse.Node)");
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(n, ::TYPES[7/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    if (::g::Fuse::Preview::SelectionManager::IsSelected(v))
        ::g::Uno::Collections::List__Add_fn(uPtr(_selection), v);
}

// private void InvalidateGraphicsView(Fuse.Node n) [instance] :247
void AppBase::InvalidateGraphicsView(::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.AppBase", "InvalidateGraphicsView(Fuse.Node)");
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(n, ::TYPES[7/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    if (!uIs(v, ::TYPES[8/*Fuse.IViewport*/]))
        return;

    uPtr(v)->InvalidateVisual();
}

// public void InvalidateSelection() [instance] :269
void AppBase::InvalidateSelection()
{
    uStackFrame __("Fuse.AppBase", "InvalidateSelection()");

    if (_isInvalidateSelectionScheduled)
        return;

    ::g::Fuse::UpdateManager::AddOnceAction(uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)AppBase__DoInvalidateSelection_fn, this), 0);
    _isInvalidateSelectionScheduled = true;
}

// private void OnEnteringBackground(Fuse.Platform.ApplicationState s) [instance] :290
void AppBase::OnEnteringBackground(int s)
{
    uStackFrame __("Fuse.AppBase", "OnEnteringBackground(Fuse.Platform.ApplicationState)");
    ::g::Fuse::Resources::DisposalManager::Clean(1);
}

// private void OnLowMemory() [instance] :295
void AppBase::OnLowMemory()
{
    uStackFrame __("Fuse.AppBase", "OnLowMemory()");
    ::g::Fuse::Resources::DisposalManager::Clean(2);
}

// private void OnSelectionChanged(object sender, Uno.EventArgs args) [instance] :225
void AppBase::OnSelectionChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.AppBase", "OnSelectionChanged(object,Uno.EventArgs)");
    uPtr(_selection)->Clear();
    uPtr(RootViewport())->VisitSubtree(uDelegate::New(::TYPES[5/*Uno.Action<Fuse.Node>*/], (void*)AppBase__FindSelection_fn, this));
    InvalidateSelection();
}

// public void OnUnhandledException(Uno.Exception e, [bool propagate]) [instance] :312
void AppBase::OnUnhandledException(::g::Uno::Exception* e, bool propagate)
{
    uStackFrame __("Fuse.AppBase", "OnUnhandledException(Uno.Exception,[bool])");
    ::g::Uno::Diagnostics::Debug::Log4(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[0/*""*/], uPtr(e)->ToString()), ::STRINGS[1/*"\n"*/]), uPtr(e)->Message()), 3);

    if (::g::Uno::Delegate::op_Inequality(UnhandledException1, NULL))
    {
        ::g::Fuse::UnhandledExceptionArgs* args = ::g::Fuse::UnhandledExceptionArgs::New2(e);
        uPtr(UnhandledException1)->Invoke(2, this, args);

        if (args->IsHandled())
            return;
    }

    if (propagate)
        U_THROW(::g::Fuse::WrapException::New4(e));
}

// internal float get_PixelsPerPoint() [instance] :205
float AppBase::PixelsPerPoint()
{
    uStackFrame __("Fuse.AppBase", "get_PixelsPerPoint()");

    if (RootViewport() == NULL)
        return 1.0f;

    return uPtr(RootViewport())->PixelsPerPoint();
}

// public Uno.Collections.IList<Uno.UX.Resource> get_Resources() [instance] :392
uObject* AppBase::Resources()
{
    uStackFrame __("Fuse.AppBase", "get_Resources()");
    return uPtr(RootViewport())->Resources();
}

// public generated Fuse.RootViewport get_RootViewport() [instance] :167
::g::Fuse::RootViewport* AppBase::RootViewport()
{
    uStackFrame __("Fuse.AppBase", "get_RootViewport()");
    return _RootViewport;
}

// protected generated void set_RootViewport(Fuse.RootViewport value) [instance] :167
void AppBase::RootViewport(::g::Fuse::RootViewport* value)
{
    uStackFrame __("Fuse.AppBase", "set_RootViewport(Fuse.RootViewport)");
    _RootViewport = value;
}

// public generated void add_UnhandledException(Fuse.UnhandledExceptionHandler value) [instance] :305
void AppBase::add_UnhandledException(uDelegate* value)
{
    uStackFrame __("Fuse.AppBase", "add_UnhandledException(Fuse.UnhandledExceptionHandler)");
    UnhandledException1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(UnhandledException1, value), ::TYPES[9/*Fuse.UnhandledExceptionHandler*/]);
}

// public generated void remove_UnhandledException(Fuse.UnhandledExceptionHandler value) [instance] :305
void AppBase::remove_UnhandledException(uDelegate* value)
{
    uStackFrame __("Fuse.AppBase", "remove_UnhandledException(Fuse.UnhandledExceptionHandler)");
    UnhandledException1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(UnhandledException1, value), ::TYPES[9/*Fuse.UnhandledExceptionHandler*/]);
}

// internal static void OnUnhandledExceptionInternal(Uno.Exception e) [static] :330
void AppBase::OnUnhandledExceptionInternal(::g::Uno::Exception* e)
{
    uStackFrame __("Fuse.AppBase", "OnUnhandledExceptionInternal(Uno.Exception)");
    AppBase* app = uAs<AppBase*>(AppBase::Current1(), AppBase_typeof());

    if (app != NULL)
        uPtr(app)->OnUnhandledException(e, true);
}

// public static new Fuse.AppBase get_Current() [static] :340
AppBase* AppBase::Current1()
{
    uStackFrame __("Fuse.AppBase", "get_Current()");
    return uAs<AppBase*>(::g::Uno::Application::Current(), AppBase_typeof());
}

// internal static Fuse.RootViewport get_CurrentRootViewport() [static] :352
::g::Fuse::RootViewport* AppBase::CurrentRootViewport()
{
    uStackFrame __("Fuse.AppBase", "get_CurrentRootViewport()");

    if (AppBase::_testRootViewport_ != NULL)
        return AppBase::_testRootViewport_;

    if (AppBase::Current1() == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[2/*"No AppBase ...*/]));

    ::g::Fuse::RootViewport* rv = uPtr(AppBase::Current1())->RootViewport();

    if (rv == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[3/*"No RootView...*/]));

    return rv;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public abstract class Behavior :419
// {
static void Behavior_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface3));
    type->SetFields(13);
}

::g::Fuse::Node_type* Behavior_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Node_typeof();
    options.FieldCount = 13;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Behavior);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Behavior", options);
    type->fp_build_ = Behavior_build;
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

// protected generated Behavior() :419
void Behavior__ctor_2_fn(Behavior* __this)
{
    __this->ctor_2();
}

// protected generated Behavior() [instance] :419
void Behavior::ctor_2()
{
    uStackFrame __("Fuse.Behavior", ".ctor()");
    ctor_1();
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public abstract class Binding :431
// {
static void Binding_build(uType* type)
{
    ::STRINGS[4] = uString::Const("double Binding rooting detected");
    ::STRINGS[5] = uString::Const("/usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno");
    ::STRINGS[6] = uString::Const("Root");
    ::STRINGS[7] = uString::Const("double Binding unrooting detected");
    ::STRINGS[8] = uString::Const("Unroot");
    type->SetFields(0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Binding, _Parent), 0);
}

Binding_type* Binding_typeof()
{
    static uSStrong<Binding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Binding);
    options.TypeSize = sizeof(Binding_type);
    type = (Binding_type*)uClassType::New("Fuse.Binding", options);
    type->fp_build_ = Binding_build;
    type->fp_OnRooted = Binding__OnRooted_fn;
    type->fp_OnUnrooted = Binding__OnUnrooted_fn;
    return type;
}

// protected generated Binding() :431
void Binding__ctor__fn(Binding* __this)
{
    __this->ctor_();
}

// protected virtual void OnRooted() :435
void Binding__OnRooted_fn(Binding* __this)
{
}

// protected virtual void OnUnrooted() :436
void Binding__OnUnrooted_fn(Binding* __this)
{
}

// protected generated Fuse.Node get_Parent() :433
void Binding__get_Parent_fn(Binding* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Parent();
}

// private generated void set_Parent(Fuse.Node value) :433
void Binding__set_Parent_fn(Binding* __this, ::g::Fuse::Node* value)
{
    __this->Parent(value);
}

// internal void Root(Fuse.Node parent) :438
void Binding__Root_fn(Binding* __this, ::g::Fuse::Node* parent)
{
    __this->Root(parent);
}

// internal void Unroot() :447
void Binding__Unroot_fn(Binding* __this)
{
    __this->Unroot();
}

// protected generated Binding() [instance] :431
void Binding::ctor_()
{
}

// protected generated Fuse.Node get_Parent() [instance] :433
::g::Fuse::Node* Binding::Parent()
{
    uStackFrame __("Fuse.Binding", "get_Parent()");
    return _Parent;
}

// private generated void set_Parent(Fuse.Node value) [instance] :433
void Binding::Parent(::g::Fuse::Node* value)
{
    uStackFrame __("Fuse.Binding", "set_Parent(Fuse.Node)");
    _Parent = value;
}

// internal void Root(Fuse.Node parent) [instance] :438
void Binding::Root(::g::Fuse::Node* parent)
{
    uStackFrame __("Fuse.Binding", "Root(Fuse.Node)");

    if (Parent() != NULL)
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[4/*"double Bind...*/], this, ::STRINGS[5/*"/usr/local/...*/], 441, ::STRINGS[6/*"Root"*/]);

    Parent(parent);
    OnRooted();
}

// internal void Unroot() [instance] :447
void Binding::Unroot()
{
    uStackFrame __("Fuse.Binding", "Unroot()");

    if (Parent() == NULL)
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[7/*"double Bind...*/], this, ::STRINGS[5/*"/usr/local/...*/], 450, ::STRINGS[8/*"Unroot"*/]);

    OnUnrooted();
    Parent(NULL);
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// internal sealed class CacheFramebuffer :467
// {
static void CacheFramebuffer_build(uType* type)
{
    ::STRINGS[9] = uString::Const("Cannot access unpinned CacheFramebuffer");
    type->SetFields(0,
        ::g::Uno::Graphics::Framebuffer_typeof(), offsetof(::g::Fuse::CacheFramebuffer, _fb), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::CacheFramebuffer, _isContentValid), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::CacheFramebuffer, _isPinned), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::CacheFramebuffer, _lastFrameUsed), 0,
        ::g::Uno::Graphics::FramebufferFlags_typeof(), offsetof(::g::Fuse::CacheFramebuffer, _Flags), 0,
        ::g::Uno::Graphics::Format_typeof(), offsetof(::g::Fuse::CacheFramebuffer, _Format), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::CacheFramebuffer, _Height), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::CacheFramebuffer, _Width), 0);
}

uType* CacheFramebuffer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(CacheFramebuffer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.CacheFramebuffer", options);
    type->fp_build_ = CacheFramebuffer_build;
    return type;
}

// public CacheFramebuffer(int width, int height, Uno.Graphics.Format format, Uno.Graphics.FramebufferFlags flags) :566
void CacheFramebuffer__ctor__fn(CacheFramebuffer* __this, int* width, int* height, int* format, int* flags)
{
    __this->ctor_(*width, *height, *format, *flags);
}

// internal void Collect() :486
void CacheFramebuffer__Collect_fn(CacheFramebuffer* __this)
{
    __this->Collect();
}

// public void Dispose() :493
void CacheFramebuffer__Dispose_fn(CacheFramebuffer* __this)
{
    __this->Dispose();
}

// private void EnsurePinned() :479
void CacheFramebuffer__EnsurePinned_fn(CacheFramebuffer* __this)
{
    __this->EnsurePinned();
}

// public generated Uno.Graphics.FramebufferFlags get_Flags() :564
void CacheFramebuffer__get_Flags_fn(CacheFramebuffer* __this, int* __retval)
{
    *__retval = __this->Flags();
}

// private generated void set_Flags(Uno.Graphics.FramebufferFlags value) :564
void CacheFramebuffer__set_Flags_fn(CacheFramebuffer* __this, int* value)
{
    __this->Flags(*value);
}

// public generated Uno.Graphics.Format get_Format() :563
void CacheFramebuffer__get_Format_fn(CacheFramebuffer* __this, int* __retval)
{
    *__retval = __this->Format();
}

// private generated void set_Format(Uno.Graphics.Format value) :563
void CacheFramebuffer__set_Format_fn(CacheFramebuffer* __this, int* value)
{
    __this->Format(*value);
}

// public framebuffer get_Framebuffer() :507
void CacheFramebuffer__get_Framebuffer_fn(CacheFramebuffer* __this, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = __this->Framebuffer();
}

// internal int get_FramesSinceLastUse() :535
void CacheFramebuffer__get_FramesSinceLastUse_fn(CacheFramebuffer* __this, int* __retval)
{
    *__retval = __this->FramesSinceLastUse();
}

// public bool get_HasValidContentIfPinned() :526
void CacheFramebuffer__get_HasValidContentIfPinned_fn(CacheFramebuffer* __this, bool* __retval)
{
    *__retval = __this->HasValidContentIfPinned();
}

// public generated int get_Height() :562
void CacheFramebuffer__get_Height_fn(CacheFramebuffer* __this, int* __retval)
{
    *__retval = __this->Height();
}

// private generated void set_Height(int value) :562
void CacheFramebuffer__set_Height_fn(CacheFramebuffer* __this, int* value)
{
    __this->Height(*value);
}

// public bool get_IsContentValid() :517
void CacheFramebuffer__get_IsContentValid_fn(CacheFramebuffer* __this, bool* __retval)
{
    *__retval = __this->IsContentValid();
}

// public bool get_IsPinned() :473
void CacheFramebuffer__get_IsPinned_fn(CacheFramebuffer* __this, bool* __retval)
{
    *__retval = __this->IsPinned();
}

// public CacheFramebuffer New(int width, int height, Uno.Graphics.Format format, Uno.Graphics.FramebufferFlags flags) :566
void CacheFramebuffer__New1_fn(int* width, int* height, int* format, int* flags, CacheFramebuffer** __retval)
{
    *__retval = CacheFramebuffer::New1(*width, *height, *format, *flags);
}

// public void Pin() :541
void CacheFramebuffer__Pin_fn(CacheFramebuffer* __this)
{
    __this->Pin();
}

// public void Unpin(bool validate) :553
void CacheFramebuffer__Unpin_fn(CacheFramebuffer* __this, bool* validate)
{
    __this->Unpin(*validate);
}

// public generated int get_Width() :561
void CacheFramebuffer__get_Width_fn(CacheFramebuffer* __this, int* __retval)
{
    *__retval = __this->Width();
}

// private generated void set_Width(int value) :561
void CacheFramebuffer__set_Width_fn(CacheFramebuffer* __this, int* value)
{
    __this->Width(*value);
}

// public CacheFramebuffer(int width, int height, Uno.Graphics.Format format, Uno.Graphics.FramebufferFlags flags) [instance] :566
void CacheFramebuffer::ctor_(int width, int height, int format, int flags)
{
    uStackFrame __("Fuse.CacheFramebuffer", ".ctor(int,int,Uno.Graphics.Format,Uno.Graphics.FramebufferFlags)");
    Width(width);
    Height(height);
    Format(format);
    Flags(flags);
}

// internal void Collect() [instance] :486
void CacheFramebuffer::Collect()
{
    uStackFrame __("Fuse.CacheFramebuffer", "Collect()");

    if (_fb != NULL)
        ::g::Fuse::FramebufferPool::Release(_fb);

    _fb = NULL;
    _isContentValid = false;
}

// public void Dispose() [instance] :493
void CacheFramebuffer::Dispose()
{
    uStackFrame __("Fuse.CacheFramebuffer", "Dispose()");
    Collect();
    ::g::Fuse::FramebufferPool::UnRegister(this);
}

// private void EnsurePinned() [instance] :479
void CacheFramebuffer::EnsurePinned()
{
    uStackFrame __("Fuse.CacheFramebuffer", "EnsurePinned()");

    if (!IsPinned())
        U_THROW(::g::Uno::Exception::New2(::STRINGS[9/*"Cannot acce...*/]));
}

// public generated Uno.Graphics.FramebufferFlags get_Flags() [instance] :564
int CacheFramebuffer::Flags()
{
    uStackFrame __("Fuse.CacheFramebuffer", "get_Flags()");
    return _Flags;
}

// private generated void set_Flags(Uno.Graphics.FramebufferFlags value) [instance] :564
void CacheFramebuffer::Flags(int value)
{
    uStackFrame __("Fuse.CacheFramebuffer", "set_Flags(Uno.Graphics.FramebufferFlags)");
    _Flags = value;
}

// public generated Uno.Graphics.Format get_Format() [instance] :563
int CacheFramebuffer::Format()
{
    uStackFrame __("Fuse.CacheFramebuffer", "get_Format()");
    return _Format;
}

// private generated void set_Format(Uno.Graphics.Format value) [instance] :563
void CacheFramebuffer::Format(int value)
{
    uStackFrame __("Fuse.CacheFramebuffer", "set_Format(Uno.Graphics.Format)");
    _Format = value;
}

// public framebuffer get_Framebuffer() [instance] :507
::g::Uno::Graphics::Framebuffer* CacheFramebuffer::Framebuffer()
{
    uStackFrame __("Fuse.CacheFramebuffer", "get_Framebuffer()");
    EnsurePinned();
    return _fb;
}

// internal int get_FramesSinceLastUse() [instance] :535
int CacheFramebuffer::FramesSinceLastUse()
{
    uStackFrame __("Fuse.CacheFramebuffer", "get_FramesSinceLastUse()");
    return ::g::Fuse::FramebufferPool::Frame() - _lastFrameUsed;
}

// public bool get_HasValidContentIfPinned() [instance] :526
bool CacheFramebuffer::HasValidContentIfPinned()
{
    uStackFrame __("Fuse.CacheFramebuffer", "get_HasValidContentIfPinned()");
    return (_fb != NULL) && _isContentValid;
}

// public generated int get_Height() [instance] :562
int CacheFramebuffer::Height()
{
    uStackFrame __("Fuse.CacheFramebuffer", "get_Height()");
    return _Height;
}

// private generated void set_Height(int value) [instance] :562
void CacheFramebuffer::Height(int value)
{
    uStackFrame __("Fuse.CacheFramebuffer", "set_Height(int)");
    _Height = value;
}

// public bool get_IsContentValid() [instance] :517
bool CacheFramebuffer::IsContentValid()
{
    uStackFrame __("Fuse.CacheFramebuffer", "get_IsContentValid()");
    EnsurePinned();
    return _isContentValid;
}

// public bool get_IsPinned() [instance] :473
bool CacheFramebuffer::IsPinned()
{
    uStackFrame __("Fuse.CacheFramebuffer", "get_IsPinned()");
    return _isPinned;
}

// public void Pin() [instance] :541
void CacheFramebuffer::Pin()
{
    uStackFrame __("Fuse.CacheFramebuffer", "Pin()");
    _isPinned = true;
    _lastFrameUsed = ::g::Fuse::FramebufferPool::Frame();

    if (_fb == NULL)
    {
        _fb = ::g::Fuse::FramebufferPool::Lock(Width(), Height(), Format(), (Flags() & 1) == 1);
        ::g::Fuse::FramebufferPool::Register(this);
    }
}

// public void Unpin(bool validate) [instance] :553
void CacheFramebuffer::Unpin(bool validate)
{
    uStackFrame __("Fuse.CacheFramebuffer", "Unpin(bool)");
    EnsurePinned();
    _isPinned = false;

    if (validate)
        _isContentValid = true;

    _lastFrameUsed = ::g::Fuse::FramebufferPool::Frame();
}

// public generated int get_Width() [instance] :561
int CacheFramebuffer::Width()
{
    uStackFrame __("Fuse.CacheFramebuffer", "get_Width()");
    return _Width;
}

// private generated void set_Width(int value) [instance] :561
void CacheFramebuffer::Width(int value)
{
    uStackFrame __("Fuse.CacheFramebuffer", "set_Width(int)");
    _Width = value;
}

// public CacheFramebuffer New(int width, int height, Uno.Graphics.Format format, Uno.Graphics.FramebufferFlags flags) [static] :566
CacheFramebuffer* CacheFramebuffer::New1(int width, int height, int format, int flags)
{
    CacheFramebuffer* obj1 = (CacheFramebuffer*)uNew(CacheFramebuffer_typeof());
    obj1->ctor_(width, height, format, flags);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// private sealed class Node.CallFuncClosure :4181
// {
static void Node__CallFuncClosure_build(uType* type)
{
    ::TYPES[10] = uObject_typeof()->Array();
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Fuse::Node__CallFuncClosure, _arg), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Node__CallFuncClosure, _func), 0);
}

uType* Node__CallFuncClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Node__CallFuncClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Node.CallFuncClosure", options);
    type->fp_build_ = Node__CallFuncClosure_build;
    return type;
}

// public CallFuncClosure(Fuse.Scripting.Function func, object arg) :4185
void Node__CallFuncClosure__ctor__fn(Node__CallFuncClosure* __this, ::g::Fuse::Scripting::Function* func, uObject* arg)
{
    __this->ctor_(func, arg);
}

// public CallFuncClosure New(Fuse.Scripting.Function func, object arg) :4185
void Node__CallFuncClosure__New1_fn(::g::Fuse::Scripting::Function* func, uObject* arg, Node__CallFuncClosure** __retval)
{
    *__retval = Node__CallFuncClosure::New1(func, arg);
}

// public void Run() :4191
void Node__CallFuncClosure__Run_fn(Node__CallFuncClosure* __this)
{
    __this->Run();
}

// public CallFuncClosure(Fuse.Scripting.Function func, object arg) [instance] :4185
void Node__CallFuncClosure::ctor_(::g::Fuse::Scripting::Function* func, uObject* arg)
{
    uStackFrame __("Fuse.Node.CallFuncClosure", ".ctor(Fuse.Scripting.Function,object)");
    _func = func;
    _arg = arg;
}

// public void Run() [instance] :4191
void Node__CallFuncClosure::Run()
{
    uStackFrame __("Fuse.Node.CallFuncClosure", "Run()");
    uPtr(_func)->Call(uArray::Init<uObject*>(::TYPES[10/*object[]*/], 1, (uObject*)_arg));
}

// public CallFuncClosure New(Fuse.Scripting.Function func, object arg) [static] :4185
Node__CallFuncClosure* Node__CallFuncClosure::New1(::g::Fuse::Scripting::Function* func, uObject* arg)
{
    Node__CallFuncClosure* obj1 = (Node__CallFuncClosure*)uNew(Node__CallFuncClosure_typeof());
    obj1->ctor_(func, arg);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public enum Visual.CancelInteractionsType :5957
uEnumType* Visual__CancelInteractionsType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Visual.CancelInteractionsType", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Local", 0LL,
        "Recursive", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Triggers/0.40.8/$.uno
// --------------------------------------------------------

// public sealed class Deferred :462
// {
static void Deferred_build(uType* type)
{
    ::STRINGS[10] = uString::Const("Duplicate call to Deferred.Perform");
    ::STRINGS[11] = uString::Const("/usr/local/share/uno/Packages/Fuse.Triggers/0.40.8/$.uno");
    ::STRINGS[12] = uString::Const("Fuse.IDeferred.Perform");
    ::TYPES[11] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Fuse::Node_typeof());
    ::TYPES[12] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[13] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    ::TYPES[14] = ::g::Fuse::Node_typeof();
    ::TYPES[15] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[16] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Deferred_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Deferred_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Deferred_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Deferred_type, interface3),
        ::g::Fuse::IDeferred_typeof(), offsetof(Deferred_type, interface4));
    type->SetFields(13,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Deferred, _added), 0,
        ::g::Fuse::Triggers::BusyTask_typeof(), offsetof(::g::Fuse::Deferred, _busyTask), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Deferred, _priority), 0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Template_typeof()), offsetof(::g::Fuse::Deferred, _templates), 0);
    type->Reflection.SetFunctions(4,
        new uFunction(".ctor", NULL, (void*)Deferred__New2_fn, 0, true, Deferred_typeof(), 0),
        new uFunction("get_Priority", NULL, (void*)Deferred__get_Priority_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Priority", NULL, (void*)Deferred__set_Priority_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Templates", NULL, (void*)Deferred__get_Templates_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Template_typeof()), 0));
}

Deferred_type* Deferred_typeof()
{
    static uSStrong<Deferred_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 17;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Deferred);
    options.TypeSize = sizeof(Deferred_type);
    type = (Deferred_type*)uClassType::New("Fuse.Deferred", options);
    type->fp_build_ = Deferred_build;
    type->fp_ctor_ = (void*)Deferred__New2_fn;
    type->fp_GetLastNodeInGroup = (void(*)(::g::Fuse::Node*, ::g::Fuse::Node**))Deferred__GetLastNodeInGroup_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Deferred__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Deferred__OnUnrooted_fn;
    type->interface4.fp_Perform = (void(*)(uObject*))Deferred__FuseIDeferredPerform_fn;
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

// public generated Deferred() :462
void Deferred__ctor_3_fn(Deferred* __this)
{
    __this->ctor_3();
}

// private void Fuse.IDeferred.Perform() :513
void Deferred__FuseIDeferredPerform_fn(Deferred* __this)
{
    uStackFrame __("Fuse.Deferred", "Fuse.IDeferred.Perform()");
    int ret2;
    ::g::Uno::UX::Template* ret3;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret4;

    if (__this->_added != NULL)
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[10/*"Duplicate c...*/], __this, ::STRINGS[11/*"/usr/local/...*/], 516, ::STRINGS[12/*"Fuse.IDefer...*/]);

    int childIndex = (::g::Uno::Collections::EnumerableExtensions__IndexOf_fn(::TYPES[11/*Uno.Collections.EnumerableExtensions.IndexOf<Fuse.Node>*/], uPtr(__this->Parent())->Children(), __this, &ret2), ret2) + 1;
    __this->_added = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[12/*Uno.Collections.List<Fuse.Node>*/]));

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->Templates()), ::TYPES[13/*Uno.Collections.ICollection<Uno.UX.Template>*/])); ++i)
    {
        ::g::Fuse::Node* elm = uAs< ::g::Fuse::Node*>(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(__this->Templates()), ::TYPES[15/*Uno.Collections.IList<Uno.UX.Template>*/]), uCRef<int>(i), &ret3), ret3))->New1(), ::TYPES[14/*Fuse.Node*/]);
        uPtr(elm)->OverrideContextParent = __this;
        ::g::Uno::Collections::List__Add_fn(uPtr(__this->_added), elm);
    }

    uPtr(__this->Parent())->InsertNodes(childIndex, uBox(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::TYPES[14/*Fuse.Node*/]), (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(__this->_added), &ret4), ret4)));
    ::g::Fuse::Triggers::BusyTask::SetBusy(__this->Parent(), &__this->_busyTask, false);
}

// internal override sealed Fuse.Node GetLastNodeInGroup() :534
void Deferred__GetLastNodeInGroup_fn(Deferred* __this, ::g::Fuse::Node** __retval)
{
    uStackFrame __("Fuse.Deferred", "GetLastNodeInGroup()");
    ::g::Fuse::Node* ret5;

    if ((__this->_added == NULL) || (uPtr(__this->_added)->Count() == 0))
        return *__retval = __this, void();

    return *__retval = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_added), uCRef<int>(uPtr(__this->_added)->Count() - 1), &ret5), ret5), void();
}

// public generated Deferred New() :462
void Deferred__New2_fn(Deferred** __retval)
{
    *__retval = Deferred::New2();
}

// protected override sealed void OnRooted() :490
void Deferred__OnRooted_fn(Deferred* __this)
{
    uStackFrame __("Fuse.Deferred", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    ::g::Fuse::DeferredManager::AddPending((uObject*)__this, __this->Priority());
    ::g::Fuse::Triggers::BusyTask::SetBusy(__this->Parent(), &__this->_busyTask, true);
}

// protected override sealed void OnUnrooted() :497
void Deferred__OnUnrooted_fn(Deferred* __this)
{
    uStackFrame __("Fuse.Deferred", "OnUnrooted()");
    bool ret6;
    ::g::Fuse::Node* ret7;
    ::g::Fuse::DeferredManager::RemovePending((uObject*)__this);
    ::g::Fuse::Triggers::BusyTask::SetBusy(__this->Parent(), &__this->_busyTask, false);

    if (__this->_added != NULL)
    {
        for (int i = 0; i < uPtr(__this->_added)->Count(); ++i)
            ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(uPtr(__this->Parent())->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_added), uCRef<int>(i), &ret7), ret7), &ret6);

        __this->_added = NULL;
    }

    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// public float get_Priority() :485
void Deferred__get_Priority_fn(Deferred* __this, float* __retval)
{
    *__retval = __this->Priority();
}

// public void set_Priority(float value) :486
void Deferred__set_Priority_fn(Deferred* __this, float* value)
{
    __this->Priority(*value);
}

// public Uno.Collections.IList<Uno.UX.Template> get_Templates() :469
void Deferred__get_Templates_fn(Deferred* __this, uObject** __retval)
{
    *__retval = __this->Templates();
}

// public generated Deferred() [instance] :462
void Deferred::ctor_3()
{
    uStackFrame __("Fuse.Deferred", ".ctor()");
    _priority = 0.0f;
    ctor_2();
}

// public float get_Priority() [instance] :485
float Deferred::Priority()
{
    uStackFrame __("Fuse.Deferred", "get_Priority()");
    return _priority;
}

// public void set_Priority(float value) [instance] :486
void Deferred::Priority(float value)
{
    uStackFrame __("Fuse.Deferred", "set_Priority(float)");
    _priority = value;
}

// public Uno.Collections.IList<Uno.UX.Template> get_Templates() [instance] :469
uObject* Deferred::Templates()
{
    uStackFrame __("Fuse.Deferred", "get_Templates()");

    if (_templates == NULL)
        _templates = (uObject*)((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[16/*Uno.Collections.List<Uno.UX.Template>*/]));

    return _templates;
}

// public generated Deferred New() [static] :462
Deferred* Deferred::New2()
{
    Deferred* obj1 = (Deferred*)uNew(Deferred_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.40.8/$.uno
// --------------------------------------------------------

// internal static class DeferredManager :360
// {
// static DeferredManager() :360
static void DeferredManager__cctor__fn(uType* __type)
{
    DeferredManager::_pending_ = ((::g::Uno::Collections::PriorityQueue*)::g::Uno::Collections::PriorityQueue::New1(::TYPES[17/*Uno.Collections.PriorityQueue<Fuse.IDeferred>*/], 0));
    DeferredManager::TimeLimit_ = 0.002;
}

static void DeferredManager_build(uType* type)
{
    ::TYPES[17] = ::g::Uno::Collections::PriorityQueue_typeof()->MakeType(::g::Fuse::IDeferred_typeof());
    ::TYPES[3] = ::g::Uno::Action_typeof();
    ::TYPES[18] = ::g::Fuse::IDeferred_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::PriorityQueue_typeof()->MakeType(::g::Fuse::IDeferred_typeof()), (uintptr_t)&::g::Fuse::DeferredManager::_pending_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::DeferredManager::_startFrame_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::DeferredManager::_update_, uFieldFlagsStatic,
        ::g::Uno::Double_typeof(), (uintptr_t)&::g::Fuse::DeferredManager::TimeLimit_, uFieldFlagsStatic);
}

uClassType* DeferredManager_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.DeferredManager", options);
    type->fp_build_ = DeferredManager_build;
    type->fp_cctor_ = DeferredManager__cctor__fn;
    return type;
}

// public static void AddPending(Fuse.IDeferred d, [float priority]) :364
void DeferredManager__AddPending_fn(uObject* d, float* priority)
{
    DeferredManager::AddPending(d, *priority);
}

// private static void CheckUpdate() :378
void DeferredManager__CheckUpdate_fn()
{
    DeferredManager::CheckUpdate();
}

// internal static bool get_HasPending() :425
void DeferredManager__get_HasPending_fn(bool* __retval)
{
    *__retval = DeferredManager::HasPending();
}

// private static void OnUpdate() :404
void DeferredManager__OnUpdate_fn()
{
    DeferredManager::OnUpdate();
}

// public static void RemovePending(Fuse.IDeferred d) :370
void DeferredManager__RemovePending_fn(uObject* d)
{
    DeferredManager::RemovePending(d);
}

uSStrong< ::g::Uno::Collections::PriorityQueue*> DeferredManager::_pending_;
int DeferredManager::_startFrame_;
bool DeferredManager::_update_;
double DeferredManager::TimeLimit_;

// public static void AddPending(Fuse.IDeferred d, [float priority]) [static] :364
void DeferredManager::AddPending(uObject* d, float priority)
{
    uStackFrame __("Fuse.DeferredManager", "AddPending(Fuse.IDeferred,[float])");
    DeferredManager_typeof()->Init();
    ::g::Uno::Collections::PriorityQueue__Add_fn(uPtr(DeferredManager::_pending()), d, uCRef(priority));
    DeferredManager::CheckUpdate();
}

// private static void CheckUpdate() [static] :378
void DeferredManager::CheckUpdate()
{
    uStackFrame __("Fuse.DeferredManager", "CheckUpdate()");
    DeferredManager_typeof()->Init();
    bool needUpdate = uPtr(DeferredManager::_pending())->Count() > 0;

    if (needUpdate == DeferredManager::_update())
        return;

    DeferredManager::_update() = needUpdate;

    if (DeferredManager::_update())
    {
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)DeferredManager__OnUpdate_fn), 0);
        DeferredManager::_startFrame() = (::g::Fuse::UpdateManager::FrameIndex() + 1);
    }
    else 
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)DeferredManager__OnUpdate_fn), 0);
}

// private static void OnUpdate() [static] :404
void DeferredManager::OnUpdate()
{
    uStackFrame __("Fuse.DeferredManager", "OnUpdate()");
    DeferredManager_typeof()->Init();
    uObject* ret1;

    if (::g::Fuse::UpdateManager::FrameIndex() < DeferredManager::_startFrame())
        return;

    double startTime = ::g::Uno::Diagnostics::Clock::GetSeconds();

    while (!uPtr(DeferredManager::_pending())->Empty())
    {
        uObject* r = (::g::Uno::Collections::PriorityQueue__PopTop_fn(uPtr(DeferredManager::_pending()), &ret1), ret1);
        ::g::Fuse::IDeferred::Perform(uInterface(uPtr(r), ::TYPES[18/*Fuse.IDeferred*/]));
        double elapsed = ::g::Uno::Diagnostics::Clock::GetSeconds() - startTime;

        if (elapsed > DeferredManager::TimeLimit())
            break;
    }

    DeferredManager::CheckUpdate();
}

// public static void RemovePending(Fuse.IDeferred d) [static] :370
void DeferredManager::RemovePending(uObject* d)
{
    uStackFrame __("Fuse.DeferredManager", "RemovePending(Fuse.IDeferred)");
    DeferredManager_typeof()->Init();
    ::g::Uno::Collections::PriorityQueue__Remove_fn(uPtr(DeferredManager::_pending()), d);
    DeferredManager::CheckUpdate();
}

// internal static bool get_HasPending() [static] :425
bool DeferredManager::HasPending()
{
    uStackFrame __("Fuse.DeferredManager", "get_HasPending()");
    DeferredManager_typeof()->Init();
    return !uPtr(DeferredManager::_pending())->Empty();
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public sealed class Diagnostic :598
// {
static void Diagnostic_build(uType* type)
{
    ::STRINGS[13] = uString::Const("Success");
    ::STRINGS[14] = uString::Const("Error");
    ::STRINGS[15] = uString::Const("Warning");
    ::STRINGS[16] = uString::Const(": ");
    ::STRINGS[17] = uString::Const(" in ");
    ::STRINGS[18] = uString::Const("<");
    ::STRINGS[19] = uString::Const(":");
    ::STRINGS[20] = uString::Const(">");
    ::STRINGS[21] = uString::Const("invalid Type: ");
    type->SetFields(0,
        ::g::Uno::Exception_typeof(), offsetof(::g::Fuse::Diagnostic, Exception), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Diagnostic, FilePath), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Diagnostic, LineNumber), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Diagnostic, MemberName), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Diagnostic, Message), 0,
        uObject_typeof(), offsetof(::g::Fuse::Diagnostic, SourceObject), 0,
        ::g::Fuse::DiagnosticType_typeof(), offsetof(::g::Fuse::Diagnostic, Type), 0);
    type->Reflection.SetFields(7,
        new uField("Exception", 0),
        new uField("FilePath", 1),
        new uField("LineNumber", 2),
        new uField("MemberName", 3),
        new uField("Message", 4),
        new uField("SourceObject", 5),
        new uField("Type", 6));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Diagnostic__New1_fn, 0, true, Diagnostic_typeof(), 7, ::g::Fuse::DiagnosticType_typeof(), ::g::Uno::String_typeof(), uObject_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Exception_typeof()));
}

uType* Diagnostic_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(Diagnostic);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Diagnostic", options);
    type->fp_build_ = Diagnostic_build;
    type->fp_ToString = (void(*)(uObject*, uString**))Diagnostic__ToString_fn;
    return type;
}

// public Diagnostic(Fuse.DiagnosticType type, string message, object sourceObject, string filePath, int lineNumber, string memberName, [Uno.Exception exception]) :633
void Diagnostic__ctor__fn(Diagnostic* __this, int* type, uString* message, uObject* sourceObject, uString* filePath, int* lineNumber, uString* memberName, ::g::Uno::Exception* exception)
{
    __this->ctor_(*type, message, sourceObject, filePath, *lineNumber, memberName, exception);
}

// public Diagnostic New(Fuse.DiagnosticType type, string message, object sourceObject, string filePath, int lineNumber, string memberName, [Uno.Exception exception]) :633
void Diagnostic__New1_fn(int* type, uString* message, uObject* sourceObject, uString* filePath, int* lineNumber, uString* memberName, ::g::Uno::Exception* exception, Diagnostic** __retval)
{
    *__retval = Diagnostic::New1(*type, message, sourceObject, filePath, *lineNumber, memberName, exception);
}

// public override sealed string ToString() :645
void Diagnostic__ToString_fn(Diagnostic* __this, uString** __retval)
{
    uStackFrame __("Fuse.Diagnostic", "ToString()");
    uString* msg = ::g::Uno::String::Empty();

    switch (__this->Type)
    {
        case 0:
        {
            msg = ::g::Uno::String::op_Addition2(msg, ::STRINGS[13/*"Success"*/]);
            break;
        }
        case 1:
        {
            msg = ::g::Uno::String::op_Addition2(msg, ::STRINGS[14/*"Error"*/]);
            break;
        }
        case 2:
        {
            msg = ::g::Uno::String::op_Addition2(msg, ::STRINGS[15/*"Warning"*/]);
            break;
        }
        default:
        {
            msg = ::g::Uno::String::op_Addition1(msg, uBox<int>(::g::Fuse::DiagnosticType_typeof(), __this->Type));
            break;
        }
    }

    msg = ::g::Uno::String::op_Addition2(msg, ::STRINGS[16/*": "*/]);

    if (::g::Uno::String::op_Inequality(__this->Message, NULL))
        msg = ::g::Uno::String::op_Addition2(msg, __this->Message);

    if (__this->Exception != NULL)
        msg = ::g::Uno::String::op_Addition2(msg, ::g::Uno::String::op_Addition2(::STRINGS[16/*": "*/], uPtr(__this->Exception)->Message()));

    if (__this->SourceObject != NULL)
        msg = ::g::Uno::String::op_Addition2(msg, ::g::Uno::String::op_Addition1(::STRINGS[17/*" in "*/], __this->SourceObject));

    if (::g::Uno::String::op_Inequality(__this->FilePath, NULL))
        msg = ::g::Uno::String::op_Addition2(msg, ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[18/*"<"*/], __this->FilePath), ::STRINGS[19/*":"*/]), uBox<int>(::g::Uno::Int_typeof(), __this->LineNumber)), ::STRINGS[20/*">"*/]));

    return *__retval = msg, void();
}

// internal Uno.Diagnostics.DebugMessageType get_UnoType() :610
void Diagnostic__get_UnoType_fn(Diagnostic* __this, int* __retval)
{
    *__retval = __this->UnoType();
}

// public Diagnostic(Fuse.DiagnosticType type, string message, object sourceObject, string filePath, int lineNumber, string memberName, [Uno.Exception exception]) [instance] :633
void Diagnostic::ctor_(int type, uString* message, uObject* sourceObject, uString* filePath, int lineNumber, uString* memberName, ::g::Uno::Exception* exception)
{
    uStackFrame __("Fuse.Diagnostic", ".ctor(Fuse.DiagnosticType,string,object,string,int,string,[Uno.Exception])");
    Type = type;
    Message = message;
    SourceObject = sourceObject;
    FilePath = filePath;
    LineNumber = lineNumber;
    MemberName = memberName;
    Exception = ::g::Fuse::WrapException::Unwrap(exception);
}

// internal Uno.Diagnostics.DebugMessageType get_UnoType() [instance] :610
int Diagnostic::UnoType()
{
    uStackFrame __("Fuse.Diagnostic", "get_UnoType()");

    switch (Type)
    {
        case 0:
            return 2;
        case 2:
        case 4:
        case 5:
        case 6:
            return 4;
        case 1:
        case 3:
            return 3;
        default:
            U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[21/*"invalid Typ...*/], uBox<int>(::g::Fuse::DiagnosticType_typeof(), Type))));
    }
}

// public Diagnostic New(Fuse.DiagnosticType type, string message, object sourceObject, string filePath, int lineNumber, string memberName, [Uno.Exception exception]) [static] :633
Diagnostic* Diagnostic::New1(int type, uString* message, uObject* sourceObject, uString* filePath, int lineNumber, uString* memberName, ::g::Uno::Exception* exception)
{
    Diagnostic* obj1 = (Diagnostic*)uNew(Diagnostic_typeof());
    obj1->ctor_(type, message, sourceObject, filePath, lineNumber, memberName, exception);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public delegate void DiagnosticHandler(Fuse.Diagnostic d) :675
uDelegateType* DiagnosticHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.DiagnosticHandler", 1, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Fuse::Diagnostic_typeof());
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public static class Diagnostics :695
// {
static void Diagnostics_build(uType* type)
{
    ::STRINGS[22] = uString::Const(" cannot be used in a ");
    ::STRINGS[23] = uString::Const(".");
    ::STRINGS[24] = uString::Const(" A ");
    ::STRINGS[25] = uString::Const(" parent is expected");
    ::STRINGS[17] = uString::Const(" in ");
    ::STRINGS[26] = uString::Const(" line ");
    ::STRINGS[0] = uString::Const("");
    ::TYPES[19] = ::g::Fuse::DiagnosticHandler_typeof();
    type->SetFields(0,
        ::g::Fuse::DiagnosticHandler_typeof(), (uintptr_t)&::g::Fuse::Diagnostics::DiagnosticReported1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(11,
        new uFunction("Deprecated", NULL, (void*)Diagnostics__Deprecated_fn, 0, true, uVoid_typeof(), 5, ::g::Uno::String_typeof(), uObject_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::String_typeof()),
        new uFunction("add_DiagnosticReported", NULL, (void*)Diagnostics__add_DiagnosticReported_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::DiagnosticHandler_typeof()),
        new uFunction("remove_DiagnosticReported", NULL, (void*)Diagnostics__remove_DiagnosticReported_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::DiagnosticHandler_typeof()),
        new uFunction("InternalError", NULL, (void*)Diagnostics__InternalError_fn, 0, true, uVoid_typeof(), 5, ::g::Uno::String_typeof(), uObject_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::String_typeof()),
        new uFunction("PerformanceWarning", NULL, (void*)Diagnostics__PerformanceWarning_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::String_typeof()),
        new uFunction("UnknownException", NULL, (void*)Diagnostics__UnknownException_fn, 0, true, uVoid_typeof(), 6, ::g::Uno::String_typeof(), ::g::Uno::Exception_typeof(), uObject_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::String_typeof()),
        new uFunction("Unsupported", NULL, (void*)Diagnostics__Unsupported_fn, 0, true, uVoid_typeof(), 5, ::g::Uno::String_typeof(), uObject_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::String_typeof()),
        new uFunction("UserError", NULL, (void*)Diagnostics__UserError_fn, 0, true, uVoid_typeof(), 5, ::g::Uno::String_typeof(), uObject_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::String_typeof()),
        new uFunction("UserRootError", NULL, (void*)Diagnostics__UserRootError_fn, 0, true, uVoid_typeof(), 6, ::g::Uno::String_typeof(), uObject_typeof(), uObject_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::String_typeof()),
        new uFunction("UserSuccess", NULL, (void*)Diagnostics__UserSuccess_fn, 0, true, uVoid_typeof(), 5, ::g::Uno::String_typeof(), uObject_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::String_typeof()),
        new uFunction("UserWarning", NULL, (void*)Diagnostics__UserWarning_fn, 0, true, uVoid_typeof(), 5, ::g::Uno::String_typeof(), uObject_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::String_typeof()));
}

uClassType* Diagnostics_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Diagnostics", options);
    type->fp_build_ = Diagnostics_build;
    return type;
}

// public static void Deprecated(string msg, object obj, [string filePath], [int lineNumber], [string memberName]) :790
void Diagnostics__Deprecated_fn(uString* msg, uObject* obj, uString* filePath, int* lineNumber, uString* memberName)
{
    Diagnostics::Deprecated(msg, obj, filePath, *lineNumber, memberName);
}

// public static generated void add_DiagnosticReported(Fuse.DiagnosticHandler value) :697
void Diagnostics__add_DiagnosticReported_fn(uDelegate* value)
{
    Diagnostics::add_DiagnosticReported(value);
}

// public static generated void remove_DiagnosticReported(Fuse.DiagnosticHandler value) :697
void Diagnostics__remove_DiagnosticReported_fn(uDelegate* value)
{
    Diagnostics::remove_DiagnosticReported(value);
}

// public static void InternalError(string msg, [object obj], [string filePath], [int lineNumber], [string memberName]) :772
void Diagnostics__InternalError_fn(uString* msg, uObject* obj, uString* filePath, int* lineNumber, uString* memberName)
{
    Diagnostics::InternalError(msg, obj, filePath, *lineNumber, memberName);
}

// public static void PerformanceWarning(string msg, [string filePath], [int lineNumber], [string memberName]) :804
void Diagnostics__PerformanceWarning_fn(uString* msg, uString* filePath, int* lineNumber, uString* memberName)
{
    Diagnostics::PerformanceWarning(msg, filePath, *lineNumber, memberName);
}

// private static void Report(Fuse.Diagnostic d) :699
void Diagnostics__Report_fn(::g::Fuse::Diagnostic* d)
{
    Diagnostics::Report(d);
}

// public static void UnknownException(string msg, Uno.Exception ex, object obj, [string filePath], [int lineNumber], [string memberName]) :783
void Diagnostics__UnknownException_fn(uString* msg, ::g::Uno::Exception* ex, uObject* obj, uString* filePath, int* lineNumber, uString* memberName)
{
    Diagnostics::UnknownException(msg, ex, obj, filePath, *lineNumber, memberName);
}

// public static void Unsupported(string msg, object obj, [string filePath], [int lineNumber], [string memberName]) :797
void Diagnostics__Unsupported_fn(uString* msg, uObject* obj, uString* filePath, int* lineNumber, uString* memberName)
{
    Diagnostics::Unsupported(msg, obj, filePath, *lineNumber, memberName);
}

// public static void UserError(string msg, object obj, [string filePath], [int lineNumber], [string memberName]) :713
void Diagnostics__UserError_fn(uString* msg, uObject* obj, uString* filePath, int* lineNumber, uString* memberName)
{
    Diagnostics::UserError(msg, obj, filePath, *lineNumber, memberName);
}

// public static void UserRootError(string expectedType, object actualParent, object obj, [string filePath], [int lineNumber], [string memberName]) :760
void Diagnostics__UserRootError_fn(uString* expectedType, uObject* actualParent, uObject* obj, uString* filePath, int* lineNumber, uString* memberName)
{
    Diagnostics::UserRootError(expectedType, actualParent, obj, filePath, *lineNumber, memberName);
}

// internal static void UserScriptError(string msg, Fuse.Scripting.ScriptException ex, object obj, [string filePath], [int lineNumber], [string memberName]) :720
void Diagnostics__UserScriptError_fn(uString* msg, ::g::Fuse::Scripting::ScriptException* ex, uObject* obj, uString* filePath, int* lineNumber, uString* memberName)
{
    Diagnostics::UserScriptError(msg, ex, obj, filePath, *lineNumber, memberName);
}

// public static void UserSuccess(string msg, object obj, [string filePath], [int lineNumber], [string memberName]) :733
void Diagnostics__UserSuccess_fn(uString* msg, uObject* obj, uString* filePath, int* lineNumber, uString* memberName)
{
    Diagnostics::UserSuccess(msg, obj, filePath, *lineNumber, memberName);
}

// private static string UserTypeOf(object a) :745
void Diagnostics__UserTypeOf_fn(uObject* a, uString** __retval)
{
    *__retval = Diagnostics::UserTypeOf(a);
}

// public static void UserWarning(string msg, object obj, [string filePath], [int lineNumber], [string memberName]) :818
void Diagnostics__UserWarning_fn(uString* msg, uObject* obj, uString* filePath, int* lineNumber, uString* memberName)
{
    Diagnostics::UserWarning(msg, obj, filePath, *lineNumber, memberName);
}

uSStrong<uDelegate*> Diagnostics::DiagnosticReported1_;

// public static void Deprecated(string msg, object obj, [string filePath], [int lineNumber], [string memberName]) [static] :790
void Diagnostics::Deprecated(uString* msg, uObject* obj, uString* filePath, int lineNumber, uString* memberName)
{
    uStackFrame __("Fuse.Diagnostics", "Deprecated(string,object,[string],[int],[string])");
    Diagnostics::Report(::g::Fuse::Diagnostic::New1(4, msg, obj, filePath, lineNumber, memberName, NULL));
}

// public static void InternalError(string msg, [object obj], [string filePath], [int lineNumber], [string memberName]) [static] :772
void Diagnostics::InternalError(uString* msg, uObject* obj, uString* filePath, int lineNumber, uString* memberName)
{
    uStackFrame __("Fuse.Diagnostics", "InternalError(string,[object],[string],[int],[string])");
    Diagnostics::Report(::g::Fuse::Diagnostic::New1(3, msg, obj, filePath, lineNumber, memberName, NULL));
}

// public static void PerformanceWarning(string msg, [string filePath], [int lineNumber], [string memberName]) [static] :804
void Diagnostics::PerformanceWarning(uString* msg, uString* filePath, int lineNumber, uString* memberName)
{
    uStackFrame __("Fuse.Diagnostics", "PerformanceWarning(string,[string],[int],[string])");
    Diagnostics::Report(::g::Fuse::Diagnostic::New1(6, msg, NULL, filePath, lineNumber, memberName, NULL));
}

// private static void Report(Fuse.Diagnostic d) [static] :699
void Diagnostics::Report(::g::Fuse::Diagnostic* d)
{
    uStackFrame __("Fuse.Diagnostics", "Report(Fuse.Diagnostic)");

    if (::g::Uno::Delegate::op_Inequality(Diagnostics::DiagnosticReported1_, NULL))
        uPtr(Diagnostics::DiagnosticReported1_)->InvokeVoid(d);
    else 
        ::g::Uno::Diagnostics::Debug::Log4(uPtr(d)->ToString(), uPtr(d)->UnoType());
}

// public static void UnknownException(string msg, Uno.Exception ex, object obj, [string filePath], [int lineNumber], [string memberName]) [static] :783
void Diagnostics::UnknownException(uString* msg, ::g::Uno::Exception* ex, uObject* obj, uString* filePath, int lineNumber, uString* memberName)
{
    uStackFrame __("Fuse.Diagnostics", "UnknownException(string,Uno.Exception,object,[string],[int],[string])");
    Diagnostics::Report(::g::Fuse::Diagnostic::New1(3, msg, obj, filePath, lineNumber, memberName, ex));
}

// public static void Unsupported(string msg, object obj, [string filePath], [int lineNumber], [string memberName]) [static] :797
void Diagnostics::Unsupported(uString* msg, uObject* obj, uString* filePath, int lineNumber, uString* memberName)
{
    uStackFrame __("Fuse.Diagnostics", "Unsupported(string,object,[string],[int],[string])");
    Diagnostics::Report(::g::Fuse::Diagnostic::New1(5, msg, obj, filePath, lineNumber, memberName, NULL));
}

// public static void UserError(string msg, object obj, [string filePath], [int lineNumber], [string memberName]) [static] :713
void Diagnostics::UserError(uString* msg, uObject* obj, uString* filePath, int lineNumber, uString* memberName)
{
    uStackFrame __("Fuse.Diagnostics", "UserError(string,object,[string],[int],[string])");
    Diagnostics::Report(::g::Fuse::Diagnostic::New1(1, msg, obj, filePath, lineNumber, memberName, NULL));
}

// public static void UserRootError(string expectedType, object actualParent, object obj, [string filePath], [int lineNumber], [string memberName]) [static] :760
void Diagnostics::UserRootError(uString* expectedType, uObject* actualParent, uObject* obj, uString* filePath, int lineNumber, uString* memberName)
{
    uStackFrame __("Fuse.Diagnostics", "UserRootError(string,object,object,[string],[int],[string])");
    Diagnostics::UserError(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(Diagnostics::UserTypeOf(obj), ::STRINGS[22/*" cannot be ...*/]), Diagnostics::UserTypeOf(actualParent)), ::STRINGS[23/*"."*/]), ::STRINGS[24/*" A "*/]), expectedType), ::STRINGS[25/*" parent is ...*/]), obj, filePath, lineNumber, memberName);
}

// internal static void UserScriptError(string msg, Fuse.Scripting.ScriptException ex, object obj, [string filePath], [int lineNumber], [string memberName]) [static] :720
void Diagnostics::UserScriptError(uString* msg, ::g::Fuse::Scripting::ScriptException* ex, uObject* obj, uString* filePath, int lineNumber, uString* memberName)
{
    uStackFrame __("Fuse.Diagnostics", "UserScriptError(string,Fuse.Scripting.ScriptException,object,[string],[int],[string])");
    msg = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(msg, ::STRINGS[17/*" in "*/]), uPtr(ex)->FileName()), ::STRINGS[26/*" line "*/]), uBox<int>(::g::Uno::Int_typeof(), uPtr(ex)->LineNumber()));
    Diagnostics::Report(::g::Fuse::Diagnostic::New1(1, msg, obj, filePath, lineNumber, memberName, ex));
}

// public static void UserSuccess(string msg, object obj, [string filePath], [int lineNumber], [string memberName]) [static] :733
void Diagnostics::UserSuccess(uString* msg, uObject* obj, uString* filePath, int lineNumber, uString* memberName)
{
    uStackFrame __("Fuse.Diagnostics", "UserSuccess(string,object,[string],[int],[string])");
    Diagnostics::Report(::g::Fuse::Diagnostic::New1(0, msg, obj, filePath, lineNumber, memberName, NULL));
}

// private static string UserTypeOf(object a) [static] :745
uString* Diagnostics::UserTypeOf(uObject* a)
{
    uStackFrame __("Fuse.Diagnostics", "UserTypeOf(object)");
    uString* q = ::g::Uno::String::op_Addition1(::STRINGS[0/*""*/], a);
    int e = ::g::Uno::String::LastIndexOf(uPtr(q), '.');

    if (e == -1)
        e = 0;
    else 
        e = e + 1;

    return ::g::Uno::String::Substring(q, e);
}

// public static void UserWarning(string msg, object obj, [string filePath], [int lineNumber], [string memberName]) [static] :818
void Diagnostics::UserWarning(uString* msg, uObject* obj, uString* filePath, int lineNumber, uString* memberName)
{
    uStackFrame __("Fuse.Diagnostics", "UserWarning(string,object,[string],[int],[string])");
    Diagnostics::Report(::g::Fuse::Diagnostic::New1(2, msg, obj, filePath, lineNumber, memberName, NULL));
}

// public static generated void add_DiagnosticReported(Fuse.DiagnosticHandler value) [static] :697
void Diagnostics::add_DiagnosticReported(uDelegate* value)
{
    uStackFrame __("Fuse.Diagnostics", "add_DiagnosticReported(Fuse.DiagnosticHandler)");
    Diagnostics::DiagnosticReported1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Diagnostics::DiagnosticReported1_, value), ::TYPES[19/*Fuse.DiagnosticHandler*/]);
}

// public static generated void remove_DiagnosticReported(Fuse.DiagnosticHandler value) [static] :697
void Diagnostics::remove_DiagnosticReported(uDelegate* value)
{
    uStackFrame __("Fuse.Diagnostics", "remove_DiagnosticReported(Fuse.DiagnosticHandler)");
    Diagnostics::DiagnosticReported1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Diagnostics::DiagnosticReported1_, value), ::TYPES[19/*Fuse.DiagnosticHandler*/]);
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public enum DiagnosticType :584
uEnumType* DiagnosticType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.DiagnosticType", ::g::Uno::Int_typeof(), 7);
    type->SetLiterals(
        "UserSuccess", 0LL,
        "UserError", 1LL,
        "UserWarning", 2LL,
        "InternalError", 3LL,
        "Deprecated", 4LL,
        "Unsupported", 5LL,
        "PerformanceWarning", 6LL);
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public sealed class DrawContext :862
// {
static void DrawContext_build(uType* type)
{
    ::STRINGS[5] = uString::Const("/usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno");
    ::STRINGS[27] = uString::Const("CaptureRootbuffer");
    ::STRINGS[0] = uString::Const("");
    ::STRINGS[28] = uString::Const("Clear");
    ::STRINGS[29] = uString::Const("PopRenderTarget");
    ::STRINGS[30] = uString::Const("PushRenderTarget");
    ::STRINGS[31] = uString::Const("Unpopped Scissor");
    ::STRINGS[32] = uString::Const("ReleaseRootbuffer");
    ::STRINGS[33] = uString::Const("Unpopped CullFace");
    ::STRINGS[34] = uString::Const("Unpopped Viewport");
    ::STRINGS[35] = uString::Const("Unpopped RenderTarget");
    ::STRINGS[36] = uString::Const("set_GLFramebuffer");
    ::STRINGS[37] = uString::Const("set_GLScissor");
    ::STRINGS[38] = uString::Const("set_GLViewportPixelSize");
    ::TYPES[20] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::IRenderViewport_typeof());
    ::TYPES[21] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::RenderTargetEntry_typeof());
    ::TYPES[22] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Int4_typeof());
    ::TYPES[23] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Graphics::PolygonFace_typeof());
    ::TYPES[24] = ::g::Uno::Collections::HashSet_typeof()->MakeType(::g::Fuse::IFlush_typeof());
    ::TYPES[25] = ::g::Uno::Collections::HashSet__Enumerator_typeof()->MakeType(::g::Fuse::IFlush_typeof());
    ::TYPES[26] = ::g::Fuse::IFlush_typeof();
    ::TYPES[27] = ::g::Fuse::IRenderViewport_typeof();
    ::TYPES[28] = ::g::Uno::Collections::IListExtensions_typeof()->MakeMethod(1, ::g::Uno::Graphics::PolygonFace_typeof());
    ::TYPES[29] = ::g::Uno::Collections::IListExtensions_typeof()->MakeMethod(1, ::g::Fuse::RenderTargetEntry_typeof());
    ::TYPES[30] = ::g::Uno::Collections::IListExtensions_typeof()->MakeMethod(1, ::g::Uno::Int4_typeof());
    ::TYPES[31] = ::g::Uno::Collections::IListExtensions_typeof()->MakeMethod(1, ::g::Fuse::IRenderViewport_typeof());
    ::TYPES[32] = ::g::Fuse::ICommonViewport_typeof();
    type->SetFields(0,
        ::g::Uno::Graphics::PolygonFace_typeof(), offsetof(::g::Fuse::DrawContext, _cullFace), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Graphics::PolygonFace_typeof()), offsetof(::g::Fuse::DrawContext, _cullFaces), 0,
        ::g::OpenGL::GLFramebufferHandle_typeof(), offsetof(::g::Fuse::DrawContext, _glFramebuffer), 0,
        ::g::Uno::Int4_typeof(), offsetof(::g::Fuse::DrawContext, _glScissor), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Int4_typeof()), offsetof(::g::Fuse::DrawContext, _glScissors), 0,
        ::g::Uno::Int4_typeof(), offsetof(::g::Fuse::DrawContext, _glViewport), 0,
        ::g::Uno::Runtime::Implementation::GraphicsContextHandle_typeof(), offsetof(::g::Fuse::DrawContext, _handle), 0,
        ::g::Uno::Graphics::RenderTarget_typeof(), offsetof(::g::Fuse::DrawContext, _renderTarget), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::RenderTargetEntry_typeof()), offsetof(::g::Fuse::DrawContext, _renderTargets), 0,
        ::g::Uno::Graphics::RenderTarget_typeof(), offsetof(::g::Fuse::DrawContext, _rootbuffer), 0,
        ::g::Fuse::IRenderViewport_typeof(), offsetof(::g::Fuse::DrawContext, _viewport), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::IRenderViewport_typeof()), offsetof(::g::Fuse::DrawContext, _viewports), 0,
        ::g::Uno::Collections::HashSet_typeof()->MakeType(::g::Fuse::IFlush_typeof()), offsetof(::g::Fuse::DrawContext, flushSet), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::DrawContext, _IsCaching), 0);
    type->Reflection.SetFunctions(27,
        new uFunction("AddFlushListener", NULL, (void*)DrawContext__AddFlushListener_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::IFlush_typeof()),
        new uFunction("Clear", NULL, (void*)DrawContext__Clear_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float4_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("get_CullFace", NULL, (void*)DrawContext__get_CullFace_fn, 0, false, ::g::Uno::Graphics::PolygonFace_typeof(), 0),
        new uFunction("Flush", NULL, (void*)DrawContext__Flush_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("GetLocalToClipTransform", NULL, (void*)DrawContext__GetLocalToClipTransform_fn, 0, false, ::g::Uno::Float4x4_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("get_GLViewportPixelSize", NULL, (void*)DrawContext__get_GLViewportPixelSize_fn, 0, false, ::g::Uno::Int2_typeof(), 0),
        new uFunction("get_GLViewportPointSize", NULL, (void*)DrawContext__get_GLViewportPointSize_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_IsCaching", NULL, (void*)DrawContext__get_IsCaching_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsCaching", NULL, (void*)DrawContext__set_IsCaching_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)DrawContext__New1_fn, 0, true, DrawContext_typeof(), 1, ::g::Fuse::IRenderViewport_typeof()),
        new uFunction("PopCullFace", NULL, (void*)DrawContext__PopCullFace_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("PopRenderTarget", NULL, (void*)DrawContext__PopRenderTarget_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("PopRenderTargetFrustum", NULL, (void*)DrawContext__PopRenderTargetFrustum_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("PopRenderTargetViewport", NULL, (void*)DrawContext__PopRenderTargetViewport_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("PopScissor", NULL, (void*)DrawContext__PopScissor_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("PopViewport", NULL, (void*)DrawContext__PopViewport_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("PushCullFace", NULL, (void*)DrawContext__PushCullFace_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Graphics::PolygonFace_typeof()),
        new uFunction("PushRenderTarget", NULL, (void*)DrawContext__PushRenderTarget_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Graphics::Framebuffer_typeof()),
        new uFunction("PushRenderTarget", NULL, (void*)DrawContext__PushRenderTarget1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Graphics::RenderTarget_typeof()),
        new uFunction("PushRenderTargetFrustum", NULL, (void*)DrawContext__PushRenderTargetFrustum_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Graphics::Framebuffer_typeof(), ::g::Fuse::IFrustum_typeof()),
        new uFunction("PushRenderTargetViewport", NULL, (void*)DrawContext__PushRenderTargetViewport_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Graphics::Framebuffer_typeof(), ::g::Fuse::IRenderViewport_typeof()),
        new uFunction("PushScissor", NULL, (void*)DrawContext__PushScissor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Recti_typeof()),
        new uFunction("PushViewport", NULL, (void*)DrawContext__PushViewport_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::IRenderViewport_typeof()),
        new uFunction("get_RenderTarget", NULL, (void*)DrawContext__get_RenderTarget_fn, 0, false, ::g::Uno::Graphics::RenderTarget_typeof(), 0),
        new uFunction("get_Scissor", NULL, (void*)DrawContext__get_Scissor_fn, 0, false, ::g::Uno::Recti_typeof(), 0),
        new uFunction("get_Viewport", NULL, (void*)DrawContext__get_Viewport_fn, 0, false, ::g::Fuse::IRenderViewport_typeof(), 0),
        new uFunction("get_ViewportPixelsPerPoint", NULL, (void*)DrawContext__get_ViewportPixelsPerPoint_fn, 0, false, ::g::Uno::Float_typeof(), 0));
}

uType* DrawContext_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.ObjectSize = sizeof(DrawContext);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.DrawContext", options);
    type->fp_build_ = DrawContext_build;
    return type;
}

// public DrawContext(Fuse.IRenderViewport viewport) :895
void DrawContext__ctor__fn(DrawContext* __this, uObject* viewport)
{
    __this->ctor_(viewport);
}

// public void AddFlushListener(Fuse.IFlush f) :908
void DrawContext__AddFlushListener_fn(DrawContext* __this, uObject* f)
{
    __this->AddFlushListener(f);
}

// internal void CaptureRootbuffer() :924
void DrawContext__CaptureRootbuffer_fn(DrawContext* __this)
{
    __this->CaptureRootbuffer();
}

// private void CheckGLError([string filePath], [int lineNumber], [string memberName]) :1195
void DrawContext__CheckGLError_fn(DrawContext* __this, uString* filePath, int* lineNumber, uString* memberName)
{
    __this->CheckGLError(filePath, *lineNumber, memberName);
}

// public void Clear(float4 color, [float depth]) :1060
void DrawContext__Clear_fn(DrawContext* __this, ::g::Uno::Float4* color, float* depth)
{
    __this->Clear(*color, *depth);
}

// public Uno.Graphics.PolygonFace get_CullFace() :1181
void DrawContext__get_CullFace_fn(DrawContext* __this, int* __retval)
{
    *__retval = __this->CullFace();
}

// public void Flush() :914
void DrawContext__Flush_fn(DrawContext* __this)
{
    __this->Flush();
}

// public float4x4 GetLocalToClipTransform(Fuse.Visual n) :885
void DrawContext__GetLocalToClipTransform_fn(DrawContext* __this, ::g::Fuse::Visual* n, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetLocalToClipTransform(n);
}

// internal Fuse.RenderTargetEntry GetRenderTargetEntry() :990
void DrawContext__GetRenderTargetEntry_fn(DrawContext* __this, ::g::Fuse::RenderTargetEntry** __retval)
{
    *__retval = __this->GetRenderTargetEntry();
}

// private extern OpenGL.GLFramebufferHandle get_GLFramebuffer() :972
void DrawContext__get_GLFramebuffer_fn(DrawContext* __this, uint32_t* __retval)
{
    *__retval = __this->GLFramebuffer();
}

// private extern void set_GLFramebuffer(OpenGL.GLFramebufferHandle value) :982
void DrawContext__set_GLFramebuffer_fn(DrawContext* __this, uint32_t* value)
{
    __this->GLFramebuffer(*value);
}

// private int4 get_GLScissor() :1092
void DrawContext__get_GLScissor_fn(DrawContext* __this, ::g::Uno::Int4* __retval)
{
    *__retval = __this->GLScissor();
}

// private void set_GLScissor(int4 value) :1103
void DrawContext__set_GLScissor_fn(DrawContext* __this, ::g::Uno::Int4* value)
{
    __this->GLScissor(*value);
}

// public int2 get_GLViewportPixelSize() :1136
void DrawContext__get_GLViewportPixelSize_fn(DrawContext* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->GLViewportPixelSize();
}

// private void set_GLViewportPixelSize(int2 value) :1147
void DrawContext__set_GLViewportPixelSize_fn(DrawContext* __this, ::g::Uno::Int2* value)
{
    __this->GLViewportPixelSize(*value);
}

// public float2 get_GLViewportPointSize() :1160
void DrawContext__get_GLViewportPointSize_fn(DrawContext* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GLViewportPointSize();
}

// public generated bool get_IsCaching() :1175
void DrawContext__get_IsCaching_fn(DrawContext* __this, bool* __retval)
{
    *__retval = __this->IsCaching();
}

// public generated void set_IsCaching(bool value) :1175
void DrawContext__set_IsCaching_fn(DrawContext* __this, bool* value)
{
    __this->IsCaching(*value);
}

// public DrawContext New(Fuse.IRenderViewport viewport) :895
void DrawContext__New1_fn(uObject* viewport, DrawContext** __retval)
{
    *__retval = DrawContext::New1(viewport);
}

// public void PopCullFace() :1190
void DrawContext__PopCullFace_fn(DrawContext* __this)
{
    __this->PopCullFace();
}

// public void PopRenderTarget() :1022
void DrawContext__PopRenderTarget_fn(DrawContext* __this)
{
    __this->PopRenderTarget();
}

// public void PopRenderTargetFrustum() :1048
void DrawContext__PopRenderTargetFrustum_fn(DrawContext* __this)
{
    __this->PopRenderTargetFrustum();
}

// public void PopRenderTargetViewport() :1054
void DrawContext__PopRenderTargetViewport_fn(DrawContext* __this)
{
    __this->PopRenderTargetViewport();
}

// public void PopScissor() :1122
void DrawContext__PopScissor_fn(DrawContext* __this)
{
    __this->PopScissor();
}

// public void PopViewport() :879
void DrawContext__PopViewport_fn(DrawContext* __this)
{
    __this->PopViewport();
}

// public void PushCullFace(Uno.Graphics.PolygonFace cf) :1184
void DrawContext__PushCullFace_fn(DrawContext* __this, int* cf)
{
    __this->PushCullFace(*cf);
}

// public void PushRenderTarget(framebuffer fb) :998
void DrawContext__PushRenderTarget_fn(DrawContext* __this, ::g::Uno::Graphics::Framebuffer* fb)
{
    __this->PushRenderTarget(fb);
}

// public void PushRenderTarget(Uno.Graphics.RenderTarget rt) :1003
void DrawContext__PushRenderTarget1_fn(DrawContext* __this, ::g::Uno::Graphics::RenderTarget* rt)
{
    __this->PushRenderTarget1(rt);
}

// private void PushRenderTarget(Uno.Graphics.RenderTarget rt, int2 viewportPixelSize, int4 glscissor) :1008
void DrawContext__PushRenderTarget2_fn(DrawContext* __this, ::g::Uno::Graphics::RenderTarget* rt, ::g::Uno::Int2* viewportPixelSize, ::g::Uno::Int4* glscissor)
{
    __this->PushRenderTarget2(rt, *viewportPixelSize, *glscissor);
}

// public void PushRenderTargetFrustum(framebuffer fb, Fuse.IFrustum frustum) :1036
void DrawContext__PushRenderTargetFrustum_fn(DrawContext* __this, ::g::Uno::Graphics::Framebuffer* fb, uObject* frustum)
{
    __this->PushRenderTargetFrustum(fb, frustum);
}

// public void PushRenderTargetViewport(framebuffer fb, Fuse.IRenderViewport viewport) :1042
void DrawContext__PushRenderTargetViewport_fn(DrawContext* __this, ::g::Uno::Graphics::Framebuffer* fb, uObject* viewport)
{
    __this->PushRenderTargetViewport(fb, viewport);
}

// public void PushScissor(Uno.Recti scissor) :1116
void DrawContext__PushScissor_fn(DrawContext* __this, ::g::Uno::Recti* scissor)
{
    __this->PushScissor(*scissor);
}

// public void PushViewport(Fuse.IRenderViewport v) :872
void DrawContext__PushViewport_fn(DrawContext* __this, uObject* v)
{
    __this->PushViewport(v);
}

// internal void ReleaseRootbuffer() :941
void DrawContext__ReleaseRootbuffer_fn(DrawContext* __this)
{
    __this->ReleaseRootbuffer();
}

// public Uno.Graphics.RenderTarget get_RenderTarget() :966
void DrawContext__get_RenderTarget_fn(DrawContext* __this, ::g::Uno::Graphics::RenderTarget** __retval)
{
    *__retval = __this->RenderTarget();
}

// public Uno.Recti get_Scissor() :1074
void DrawContext__get_Scissor_fn(DrawContext* __this, ::g::Uno::Recti* __retval)
{
    *__retval = __this->Scissor();
}

// internal void set_Scissor(Uno.Recti value) :1082
void DrawContext__set_Scissor_fn(DrawContext* __this, ::g::Uno::Recti* value)
{
    __this->Scissor(*value);
}

// public Fuse.IRenderViewport get_Viewport() :868
void DrawContext__get_Viewport_fn(DrawContext* __this, uObject** __retval)
{
    *__retval = __this->Viewport();
}

// public float get_ViewportPixelsPerPoint() :1169
void DrawContext__get_ViewportPixelsPerPoint_fn(DrawContext* __this, float* __retval)
{
    *__retval = __this->ViewportPixelsPerPoint();
}

// public DrawContext(Fuse.IRenderViewport viewport) [instance] :895
void DrawContext::ctor_(uObject* viewport)
{
    uStackFrame __("Fuse.DrawContext", ".ctor(Fuse.IRenderViewport)");
    _viewports = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[20/*Uno.Collections.List<Fuse.IRenderViewport>*/]));
    _renderTargets = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[21/*Uno.Collections.List<Fuse.RenderTargetEntry>*/]));
    _glScissors = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[22/*Uno.Collections.List<int4>*/]));
    _cullFaces = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[23/*Uno.Collections.List<Uno.Graphics.PolygonFace>*/]));
    _handle = ::g::Uno::Runtime::Implementation::GraphicsContextImpl::GetInstance();
    _viewport = viewport;
    _rootbuffer = ::g::Uno::Graphics::RenderTarget::New1();
    _renderTarget = _rootbuffer;
}

// public void AddFlushListener(Fuse.IFlush f) [instance] :908
void DrawContext::AddFlushListener(uObject* f)
{
    uStackFrame __("Fuse.DrawContext", "AddFlushListener(Fuse.IFlush)");
    bool ret4;

    if (flushSet == NULL)
        flushSet = ((::g::Uno::Collections::HashSet*)::g::Uno::Collections::HashSet::New1(::TYPES[24/*Uno.Collections.HashSet<Fuse.IFlush>*/]));

    ::g::Uno::Collections::HashSet__Add_fn(uPtr(flushSet), f, &ret4);
}

// internal void CaptureRootbuffer() [instance] :924
void DrawContext::CaptureRootbuffer()
{
    uStackFrame __("Fuse.DrawContext", "CaptureRootbuffer()");
    ::g::OpenGL::GL::Enable(3089);
    CheckGLError(::STRINGS[5/*"/usr/local/...*/], 929, ::STRINGS[27/*"CaptureRoot...*/]);
    _glScissor = ::g::OpenGL::GL::GetInteger(3088);
    _glViewport = ::g::OpenGL::GL::GetInteger(2978);
    _glFramebuffer = ::g::OpenGL::GL::GetFramebufferBinding();
    uPtr(_rootbuffer)->GLFramebufferHandle(_glFramebuffer);
    uPtr(_rootbuffer)->Size(::g::Uno::Runtime::Implementation::GraphicsContextImpl::GetBackbufferSize(_handle));
    uPtr(_rootbuffer)->HasDepth(true);
}

// private void CheckGLError([string filePath], [int lineNumber], [string memberName]) [instance] :1195
void DrawContext::CheckGLError(uString* filePath, int lineNumber, uString* memberName)
{
    uStackFrame __("Fuse.DrawContext", "CheckGLError([string],[int],[string])");
    int e = ::g::OpenGL::GL::GetError();

    if (e != 0)
        ::g::Fuse::Diagnostics::InternalError(::g::Uno::String::op_Addition1(::STRINGS[0/*""*/], uBox<int>(::g::OpenGL::GLError_typeof(), e)), this, filePath, lineNumber, memberName);
}

// public void Clear(float4 color, [float depth]) [instance] :1060
void DrawContext::Clear(::g::Uno::Float4 color, float depth)
{
    uStackFrame __("Fuse.DrawContext", "Clear(float4,[float])");
    ::g::OpenGL::GL::ClearDepth(depth);
    ::g::OpenGL::GL::ClearColor(color.X, color.Y, color.Z, color.W);
    ::g::OpenGL::GL::Clear(17664);
    CheckGLError(::STRINGS[5/*"/usr/local/...*/], 1068, ::STRINGS[28/*"Clear"*/]);
}

// public Uno.Graphics.PolygonFace get_CullFace() [instance] :1181
int DrawContext::CullFace()
{
    uStackFrame __("Fuse.DrawContext", "get_CullFace()");
    return _cullFace;
}

// public void Flush() [instance] :914
void DrawContext::Flush()
{
    uStackFrame __("Fuse.DrawContext", "Flush()");
    ::g::Uno::Collections::HashSet__Enumerator<uStrong<uObject*> > ret5;

    if (flushSet != NULL)
    {
        for (::g::Uno::Collections::HashSet__Enumerator<uStrong<uObject*> > enum1 = (::g::Uno::Collections::HashSet__GetEnumerator_fn(uPtr(flushSet), &ret5), ret5); enum1.MoveNext(::TYPES[25/*Uno.Collections.HashSet<Fuse.IFlush>.Enumerator*/]); )
        {
            uObject* f = enum1.Current(::TYPES[25/*Uno.Collections.HashSet<Fuse.IFlush>.Enumerator*/]);
            ::g::Fuse::IFlush::Flush(uInterface(uPtr(f), ::TYPES[26/*Fuse.IFlush*/]), this);
        }

        uPtr(flushSet)->Clear();
        flushSet = NULL;
    }
}

// public float4x4 GetLocalToClipTransform(Fuse.Visual n) [instance] :885
::g::Uno::Float4x4 DrawContext::GetLocalToClipTransform(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.DrawContext", "GetLocalToClipTransform(Fuse.Visual)");
    ::g::Uno::Float4x4 m = uPtr(n)->WorldTransform();
    ::g::Uno::Float4x4 p = ::g::Uno::Matrix::Mul8(m, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(_viewport), ::TYPES[27/*Fuse.IRenderViewport*/])));
    return p;
}

// internal Fuse.RenderTargetEntry GetRenderTargetEntry() [instance] :990
::g::Fuse::RenderTargetEntry* DrawContext::GetRenderTargetEntry()
{
    uStackFrame __("Fuse.DrawContext", "GetRenderTargetEntry()");
    return ::g::Fuse::RenderTargetEntry::New1(RenderTarget(), GLViewportPixelSize(), GLScissor(), GLFramebuffer());
    return NULL;
}

// private extern OpenGL.GLFramebufferHandle get_GLFramebuffer() [instance] :972
uint32_t DrawContext::GLFramebuffer()
{
    uStackFrame __("Fuse.DrawContext", "get_GLFramebuffer()");
    return _glFramebuffer;
}

// private extern void set_GLFramebuffer(OpenGL.GLFramebufferHandle value) [instance] :982
void DrawContext::GLFramebuffer(uint32_t value)
{
    uStackFrame __("Fuse.DrawContext", "set_GLFramebuffer(OpenGL.GLFramebufferHandle)");
    _glFramebuffer = value;
    ::g::OpenGL::GL::BindFramebuffer(36160, value);
    CheckGLError(::STRINGS[5/*"/usr/local/...*/], 986, ::STRINGS[36/*"set_GLFrame...*/]);
}

// private int4 get_GLScissor() [instance] :1092
::g::Uno::Int4 DrawContext::GLScissor()
{
    uStackFrame __("Fuse.DrawContext", "get_GLScissor()");
    return _glScissor;
}

// private void set_GLScissor(int4 value) [instance] :1103
void DrawContext::GLScissor(::g::Uno::Int4 value)
{
    uStackFrame __("Fuse.DrawContext", "set_GLScissor(int4)");
    _glScissor = value;
    ::g::OpenGL::GL::Scissor(value.Item(0), value.Item(1), value.Item(2), value.Item(3));
    CheckGLError(::STRINGS[5/*"/usr/local/...*/], 1109, ::STRINGS[37/*"set_GLScissor"*/]);
}

// public int2 get_GLViewportPixelSize() [instance] :1136
::g::Uno::Int2 DrawContext::GLViewportPixelSize()
{
    uStackFrame __("Fuse.DrawContext", "get_GLViewportPixelSize()");
    ::g::Uno::Int4 ind2 = _glViewport;
    return ::g::Uno::Int2__New2(ind2.Z, ind2.W);
}

// private void set_GLViewportPixelSize(int2 value) [instance] :1147
void DrawContext::GLViewportPixelSize(::g::Uno::Int2 value)
{
    uStackFrame __("Fuse.DrawContext", "set_GLViewportPixelSize(int2)");
    _glViewport = ::g::Uno::Int4__New2(0, 0, value.X, value.Y);
    ::g::OpenGL::GL::Viewport(0, 0, value.X, value.Y);
    CheckGLError(::STRINGS[5/*"/usr/local/...*/], 1153, ::STRINGS[38/*"set_GLViewp...*/]);
}

// public float2 get_GLViewportPointSize() [instance] :1160
::g::Uno::Float2 DrawContext::GLViewportPointSize()
{
    uStackFrame __("Fuse.DrawContext", "get_GLViewportPointSize()");
    ::g::Uno::Float2 rsz = ::g::Uno::Float2__op_Implicit1(GLViewportPixelSize());
    return ::g::Uno::Float2__op_Division1(rsz, ViewportPixelsPerPoint());
}

// public generated bool get_IsCaching() [instance] :1175
bool DrawContext::IsCaching()
{
    uStackFrame __("Fuse.DrawContext", "get_IsCaching()");
    return _IsCaching;
}

// public generated void set_IsCaching(bool value) [instance] :1175
void DrawContext::IsCaching(bool value)
{
    uStackFrame __("Fuse.DrawContext", "set_IsCaching(bool)");
    _IsCaching = value;
}

// public void PopCullFace() [instance] :1190
void DrawContext::PopCullFace()
{
    uStackFrame __("Fuse.DrawContext", "PopCullFace()");
    int ret6;
    _cullFace = (::g::Uno::Collections::IListExtensions__RemoveLast_fn(::TYPES[28/*Uno.Collections.IListExtensions.RemoveLast<Uno.Graphics.PolygonFace>*/], (uObject*)_cullFaces, &ret6), ret6);
}

// public void PopRenderTarget() [instance] :1022
void DrawContext::PopRenderTarget()
{
    uStackFrame __("Fuse.DrawContext", "PopRenderTarget()");
    ::g::Fuse::RenderTargetEntry* ret7;
    Flush();
    ::g::Fuse::RenderTargetEntry* old = (::g::Uno::Collections::IListExtensions__RemoveLast_fn(::TYPES[29/*Uno.Collections.IListExtensions.RemoveLast<Fuse.RenderTargetEntry>*/], (uObject*)_renderTargets, &ret7), ret7);
    _renderTarget = uPtr(old)->RenderTarget;
    GLFramebuffer(uPtr(old)->GLFramebuffer);
    CheckGLError(::STRINGS[5/*"/usr/local/...*/], 1030, ::STRINGS[29/*"PopRenderTa...*/]);
    GLViewportPixelSize(old->GLViewportPixelSize);
    GLScissor(old->GLScissor);
}

// public void PopRenderTargetFrustum() [instance] :1048
void DrawContext::PopRenderTargetFrustum()
{
    uStackFrame __("Fuse.DrawContext", "PopRenderTargetFrustum()");
    PopViewport();
    PopRenderTarget();
}

// public void PopRenderTargetViewport() [instance] :1054
void DrawContext::PopRenderTargetViewport()
{
    uStackFrame __("Fuse.DrawContext", "PopRenderTargetViewport()");
    PopViewport();
    PopRenderTarget();
}

// public void PopScissor() [instance] :1122
void DrawContext::PopScissor()
{
    uStackFrame __("Fuse.DrawContext", "PopScissor()");
    ::g::Uno::Int4 ret8;
    ::g::Uno::Int4 s = (::g::Uno::Collections::IListExtensions__RemoveLast_fn(::TYPES[30/*Uno.Collections.IListExtensions.RemoveLast<int4>*/], (uObject*)_glScissors, &ret8), ret8);
    GLScissor(s);
}

// public void PopViewport() [instance] :879
void DrawContext::PopViewport()
{
    uStackFrame __("Fuse.DrawContext", "PopViewport()");
    uObject* ret9;
    Flush();
    _viewport = (::g::Uno::Collections::IListExtensions__RemoveLast_fn(::TYPES[31/*Uno.Collections.IListExtensions.RemoveLast<Fuse.IRenderViewport>*/], (uObject*)_viewports, &ret9), ret9);
}

// public void PushCullFace(Uno.Graphics.PolygonFace cf) [instance] :1184
void DrawContext::PushCullFace(int cf)
{
    uStackFrame __("Fuse.DrawContext", "PushCullFace(Uno.Graphics.PolygonFace)");
    ::g::Uno::Collections::List__Add_fn(uPtr(_cullFaces), uCRef<int>(_cullFace));
    _cullFace = cf;
}

// public void PushRenderTarget(framebuffer fb) [instance] :998
void DrawContext::PushRenderTarget(::g::Uno::Graphics::Framebuffer* fb)
{
    uStackFrame __("Fuse.DrawContext", "PushRenderTarget(framebuffer)");
    PushRenderTarget1(uPtr(fb)->RenderTarget());
}

// public void PushRenderTarget(Uno.Graphics.RenderTarget rt) [instance] :1003
void DrawContext::PushRenderTarget1(::g::Uno::Graphics::RenderTarget* rt)
{
    uStackFrame __("Fuse.DrawContext", "PushRenderTarget(Uno.Graphics.RenderTarget)");
    PushRenderTarget2(rt, uPtr(rt)->Size(), ::g::Uno::Int4__New2(0, 0, uPtr(rt)->Size().X, uPtr(rt)->Size().Y));
}

// private void PushRenderTarget(Uno.Graphics.RenderTarget rt, int2 viewportPixelSize, int4 glscissor) [instance] :1008
void DrawContext::PushRenderTarget2(::g::Uno::Graphics::RenderTarget* rt, ::g::Uno::Int2 viewportPixelSize, ::g::Uno::Int4 glscissor)
{
    uStackFrame __("Fuse.DrawContext", "PushRenderTarget(Uno.Graphics.RenderTarget,int2,int4)");
    Flush();
    ::g::Uno::Collections::List__Add_fn(uPtr(_renderTargets), GetRenderTargetEntry());
    GLFramebuffer(uPtr(rt)->GLFramebufferHandle());
    CheckGLError(::STRINGS[5/*"/usr/local/...*/], 1015, ::STRINGS[30/*"PushRenderT...*/]);
    _renderTarget = rt;
    GLViewportPixelSize(viewportPixelSize);
    GLScissor(glscissor);
}

// public void PushRenderTargetFrustum(framebuffer fb, Fuse.IFrustum frustum) [instance] :1036
void DrawContext::PushRenderTargetFrustum(::g::Uno::Graphics::Framebuffer* fb, uObject* frustum)
{
    uStackFrame __("Fuse.DrawContext", "PushRenderTargetFrustum(framebuffer,Fuse.IFrustum)");
    PushRenderTarget2(uPtr(fb)->RenderTarget(), uPtr(fb)->Size(), ::g::Uno::Int4__New7(::g::Uno::Int2__New2(0, 0), uPtr(fb)->Size()));
    PushViewport((uObject*)::g::Fuse::FixedViewport::New1(fb->Size(), ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(Viewport()), ::TYPES[32/*Fuse.ICommonViewport*/])), frustum));
}

// public void PushRenderTargetViewport(framebuffer fb, Fuse.IRenderViewport viewport) [instance] :1042
void DrawContext::PushRenderTargetViewport(::g::Uno::Graphics::Framebuffer* fb, uObject* viewport)
{
    uStackFrame __("Fuse.DrawContext", "PushRenderTargetViewport(framebuffer,Fuse.IRenderViewport)");
    PushRenderTarget2(uPtr(fb)->RenderTarget(), uPtr(fb)->Size(), ::g::Uno::Int4__New7(::g::Uno::Int2__New2(0, 0), uPtr(fb)->Size()));
    PushViewport(viewport);
}

// public void PushScissor(Uno.Recti scissor) [instance] :1116
void DrawContext::PushScissor(::g::Uno::Recti scissor)
{
    uStackFrame __("Fuse.DrawContext", "PushScissor(Uno.Recti)");
    ::g::Uno::Collections::List__Add_fn(uPtr(_glScissors), uCRef(GLScissor()));
    Scissor(scissor);
}

// public void PushViewport(Fuse.IRenderViewport v) [instance] :872
void DrawContext::PushViewport(uObject* v)
{
    uStackFrame __("Fuse.DrawContext", "PushViewport(Fuse.IRenderViewport)");
    Flush();
    ::g::Uno::Collections::List__Add_fn(uPtr(_viewports), _viewport);
    _viewport = v;
}

// internal void ReleaseRootbuffer() [instance] :941
void DrawContext::ReleaseRootbuffer()
{
    uStackFrame __("Fuse.DrawContext", "ReleaseRootbuffer()");

    if (uPtr(_glScissors)->Count() > 0)
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[31/*"Unpopped Sc...*/], this, ::STRINGS[5/*"/usr/local/...*/], 946, ::STRINGS[32/*"ReleaseRoot...*/]);

    uPtr(_glScissors)->Clear();

    if (uPtr(_cullFaces)->Count() > 0)
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[33/*"Unpopped Cu...*/], this, ::STRINGS[5/*"/usr/local/...*/], 950, ::STRINGS[32/*"ReleaseRoot...*/]);

    uPtr(_cullFaces)->Clear();

    if (uPtr(_viewports)->Count() > 0)
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[34/*"Unpopped Vi...*/], this, ::STRINGS[5/*"/usr/local/...*/], 954, ::STRINGS[32/*"ReleaseRoot...*/]);

    uPtr(_viewports)->Clear();

    if (uPtr(_renderTargets)->Count() > 0)
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[35/*"Unpopped Re...*/], this, ::STRINGS[5/*"/usr/local/...*/], 958, ::STRINGS[32/*"ReleaseRoot...*/]);

    uPtr(_renderTargets)->Clear();
}

// public Uno.Graphics.RenderTarget get_RenderTarget() [instance] :966
::g::Uno::Graphics::RenderTarget* DrawContext::RenderTarget()
{
    uStackFrame __("Fuse.DrawContext", "get_RenderTarget()");
    return _renderTarget;
}

// public Uno.Recti get_Scissor() [instance] :1074
::g::Uno::Recti DrawContext::Scissor()
{
    uStackFrame __("Fuse.DrawContext", "get_Scissor()");
    ::g::Uno::Int2 vsz = GLViewportPixelSize();
    ::g::Uno::Int4 gl = GLScissor();
    int x = gl.X;
    int y = -gl.W - (gl.Y - vsz.Y);
    return ::g::Uno::Recti__New1(x, y, x + gl.Z, y + gl.W);
}

// internal void set_Scissor(Uno.Recti value) [instance] :1082
void DrawContext::Scissor(::g::Uno::Recti value)
{
    uStackFrame __("Fuse.DrawContext", "set_Scissor(Uno.Recti)");
    ::g::Uno::Int2 vsz = GLViewportPixelSize();
    GLScissor(::g::Uno::Int4__New2(value.Left, vsz.Y - (value.Top + value.Size().Y), value.Size().X, value.Size().Y));
}

// public Fuse.IRenderViewport get_Viewport() [instance] :868
uObject* DrawContext::Viewport()
{
    uStackFrame __("Fuse.DrawContext", "get_Viewport()");
    return _viewport;
}

// public float get_ViewportPixelsPerPoint() [instance] :1169
float DrawContext::ViewportPixelsPerPoint()
{
    uStackFrame __("Fuse.DrawContext", "get_ViewportPixelsPerPoint()");
    return ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(Viewport()), ::TYPES[32/*Fuse.ICommonViewport*/]));
}

// public DrawContext New(Fuse.IRenderViewport viewport) [static] :895
DrawContext* DrawContext::New1(uObject* viewport)
{
    DrawContext* obj3 = (DrawContext*)uNew(DrawContext_typeof());
    obj3->ctor_(viewport);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// internal sealed class DrawHelpers :5295
// {
static void DrawHelpers_build(uType* type)
{
    ::TYPES[33] = ::g::Uno::Float2_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::DrawHelpers, _draw_1e24cb92), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::DrawHelpers, DrawLocalRect_Coord_1e24cb92_1_2_1), 0,
        ::g::Uno::Float2_typeof()->Array(), offsetof(::g::Fuse::DrawHelpers, DrawLocalRect_Vertices_1e24cb92_1_1_4), 0,
        DrawHelpers_typeof(), (uintptr_t)&::g::Fuse::DrawHelpers::_instance_, uFieldFlagsStatic);
}

uType* DrawHelpers_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(DrawHelpers);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.DrawHelpers", options);
    type->fp_build_ = DrawHelpers_build;
    type->fp_ctor_ = (void*)DrawHelpers__New1_fn;
    return type;
}

// public generated DrawHelpers() :5295
void DrawHelpers__ctor__fn(DrawHelpers* __this)
{
    __this->ctor_();
}

// internal void DrawLocalRect(Fuse.DrawContext dc, Uno.Rect rect, float4x4 transform, float lineWidth, float4 color) :5309
void DrawHelpers__DrawLocalRect_fn(DrawHelpers* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* rect, ::g::Uno::Float4x4* transform, float* lineWidth, ::g::Uno::Float4* color)
{
    __this->DrawLocalRect(dc, *rect, *transform, *lineWidth, *color);
}

// private generated void init_DrawCalls() :5295
void DrawHelpers__init_DrawCalls_fn(DrawHelpers* __this)
{
    __this->init_DrawCalls();
}

// public generated DrawHelpers New() :5295
void DrawHelpers__New1_fn(DrawHelpers** __retval)
{
    *__retval = DrawHelpers::New1();
}

// internal static Fuse.DrawHelpers get_Singelton() :5301
void DrawHelpers__get_Singelton_fn(DrawHelpers** __retval)
{
    *__retval = DrawHelpers::Singelton();
}

uSStrong<DrawHelpers*> DrawHelpers::_instance_;

// public generated DrawHelpers() [instance] :5295
void DrawHelpers::ctor_()
{
    uStackFrame __("Fuse.DrawHelpers", ".ctor()");
    init_DrawCalls();
}

// internal void DrawLocalRect(Fuse.DrawContext dc, Uno.Rect rect, float4x4 transform, float lineWidth, float4 color) [instance] :5309
void DrawHelpers::DrawLocalRect(::g::Fuse::DrawContext* dc, ::g::Uno::Rect rect, ::g::Uno::Float4x4 transform, float lineWidth, ::g::Uno::Float4 color)
{
    uStackFrame __("Fuse.DrawHelpers", "DrawLocalRect(Fuse.DrawContext,Uno.Rect,float4x4,float,float4)");
    _draw_1e24cb92.BlendEnabled(true);
    _draw_1e24cb92.DepthTestEnabled(false);
    _draw_1e24cb92.LineWidth(lineWidth);
    _draw_1e24cb92.PrimitiveType(5);
    _draw_1e24cb92.BlendSrcRgb(2);
    _draw_1e24cb92.BlendDstRgb(3);
    _draw_1e24cb92.BlendDstAlpha(3);
    _draw_1e24cb92.Use();
    _draw_1e24cb92.Attrib1(0, 2, DrawLocalRect_Coord_1e24cb92_1_2_1, 8, 0);
    _draw_1e24cb92.Uniform2(1, rect.Size());
    _draw_1e24cb92.Uniform2(2, rect.Position());
    _draw_1e24cb92.Uniform12(3, transform);
    _draw_1e24cb92.Uniform10(4, color);
    _draw_1e24cb92.DrawArrays(uPtr(DrawLocalRect_Vertices_1e24cb92_1_1_4)->Length());
}

// private generated void init_DrawCalls() [instance] :5295
void DrawHelpers::init_DrawCalls()
{
    uStackFrame __("Fuse.DrawHelpers", "init_DrawCalls()");
    uArray* Vertices_1e24cb92_1_1_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[33/*float2[]*/], 5, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 0.0f));
    DrawLocalRect_Coord_1e24cb92_1_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_1e24cb92_1_1_0), 0);
    DrawLocalRect_Vertices_1e24cb92_1_1_4 = Vertices_1e24cb92_1_1_0;
    _draw_1e24cb92 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseCore_bundle::DrawHelpers4c5c39ae());
}

// public generated DrawHelpers New() [static] :5295
DrawHelpers* DrawHelpers::New1()
{
    DrawHelpers* obj1 = (DrawHelpers*)uNew(DrawHelpers_typeof());
    obj1->ctor_();
    return obj1;
}

// internal static Fuse.DrawHelpers get_Singelton() [static] :5301
DrawHelpers* DrawHelpers::Singelton()
{
    uStackFrame __("Fuse.DrawHelpers", "get_Singelton()");

    if (DrawHelpers::_instance_ == NULL)
        DrawHelpers::_instance_ = DrawHelpers::New1();

    return DrawHelpers::_instance_;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public sealed class FastMatrix :2212
// {
static void FastMatrix_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::FastMatrix, _hasNonTranslation), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::FastMatrix, _isValid), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::FastMatrix, _matrix), 0);
    type->Reflection.SetFunctions(25,
        new uFunction("AppendFastMatrix", NULL, (void*)FastMatrix__AppendFastMatrix_fn, 0, false, uVoid_typeof(), 1, FastMatrix_typeof()),
        new uFunction("AppendRotation", NULL, (void*)FastMatrix__AppendRotation_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("AppendRotationQuaternion", NULL, (void*)FastMatrix__AppendRotationQuaternion_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("AppendScale", NULL, (void*)FastMatrix__AppendScale_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("AppendScale", NULL, (void*)FastMatrix__AppendScale1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("AppendShear", NULL, (void*)FastMatrix__AppendShear_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("AppendTranslation", NULL, (void*)FastMatrix__AppendTranslation_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("AppendTranslation", NULL, (void*)FastMatrix__AppendTranslation1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("Copy", NULL, (void*)FastMatrix__Copy_fn, 0, false, FastMatrix_typeof(), 0),
        new uFunction("FromFloat4x4", NULL, (void*)FastMatrix__FromFloat4x4_fn, 0, true, FastMatrix_typeof(), 1, ::g::Uno::Float4x4_typeof()),
        new uFunction("get_HasNonTranslation", NULL, (void*)FastMatrix__get_HasNonTranslation_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("Identity", NULL, (void*)FastMatrix__Identity_fn, 0, true, FastMatrix_typeof(), 0),
        new uFunction("Invert", NULL, (void*)FastMatrix__Invert_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_IsValid", NULL, (void*)FastMatrix__get_IsValid_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Matrix", NULL, (void*)FastMatrix__get_Matrix_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("Mul", NULL, (void*)FastMatrix__Mul_fn, 0, false, FastMatrix_typeof(), 1, FastMatrix_typeof()),
        new uFunction("PrependFastMatrix", NULL, (void*)FastMatrix__PrependFastMatrix_fn, 0, false, uVoid_typeof(), 1, FastMatrix_typeof()),
        new uFunction("PrependRotation", NULL, (void*)FastMatrix__PrependRotation_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("PrependRotationQuaternion", NULL, (void*)FastMatrix__PrependRotationQuaternion_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("PrependScale", NULL, (void*)FastMatrix__PrependScale_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("PrependScale", NULL, (void*)FastMatrix__PrependScale1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("PrependShear", NULL, (void*)FastMatrix__PrependShear_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("PrependTranslation", NULL, (void*)FastMatrix__PrependTranslation_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("PrependTranslation", NULL, (void*)FastMatrix__PrependTranslation1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("ResetIdentity", NULL, (void*)FastMatrix__ResetIdentity_fn, 0, false, uVoid_typeof(), 0));
}

uType* FastMatrix_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FastMatrix);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FastMatrix", options);
    type->fp_build_ = FastMatrix_build;
    type->fp_ctor_ = (void*)FastMatrix__New1_fn;
    return type;
}

// private FastMatrix() :2227
void FastMatrix__ctor__fn(FastMatrix* __this)
{
    __this->ctor_();
}

// private FastMatrix(Fuse.FastMatrix orig) :2232
void FastMatrix__ctor_1_fn(FastMatrix* __this, FastMatrix* orig)
{
    __this->ctor_1(orig);
}

// public void AppendFastMatrix(Fuse.FastMatrix fm) :2406
void FastMatrix__AppendFastMatrix_fn(FastMatrix* __this, FastMatrix* fm)
{
    __this->AppendFastMatrix(fm);
}

// public void AppendRotation(float zRadians) :2285
void FastMatrix__AppendRotation_fn(FastMatrix* __this, float* zRadians)
{
    __this->AppendRotation(*zRadians);
}

// public void AppendRotationQuaternion(float4 q) :2362
void FastMatrix__AppendRotationQuaternion_fn(FastMatrix* __this, ::g::Uno::Float4* q)
{
    __this->AppendRotationQuaternion(*q);
}

// public void AppendScale(float factor) :2297
void FastMatrix__AppendScale_fn(FastMatrix* __this, float* factor)
{
    __this->AppendScale(*factor);
}

// public void AppendScale(float3 scale) :2356
void FastMatrix__AppendScale1_fn(FastMatrix* __this, ::g::Uno::Float3* scale)
{
    __this->AppendScale1(*scale);
}

// public void AppendShear(float xRadians, float yRadians) :2315
void FastMatrix__AppendShear_fn(FastMatrix* __this, float* xRadians, float* yRadians)
{
    __this->AppendShear(*xRadians, *yRadians);
}

// public void AppendTranslation(float x, float y, float z) :2261
void FastMatrix__AppendTranslation_fn(FastMatrix* __this, float* x, float* y, float* z)
{
    __this->AppendTranslation(*x, *y, *z);
}

// public void AppendTranslation(float3 offset) :2368
void FastMatrix__AppendTranslation1_fn(FastMatrix* __this, ::g::Uno::Float3* offset)
{
    __this->AppendTranslation1(*offset);
}

// public Fuse.FastMatrix Copy() :2241
void FastMatrix__Copy_fn(FastMatrix* __this, FastMatrix** __retval)
{
    *__retval = __this->Copy();
}

// public static Fuse.FastMatrix FromFloat4x4(float4x4 m) :2253
void FastMatrix__FromFloat4x4_fn(::g::Uno::Float4x4* m, FastMatrix** __retval)
{
    *__retval = FastMatrix::FromFloat4x4(*m);
}

// public bool get_HasNonTranslation() :2218
void FastMatrix__get_HasNonTranslation_fn(FastMatrix* __this, bool* __retval)
{
    *__retval = __this->HasNonTranslation();
}

// public static Fuse.FastMatrix Identity() :2239
void FastMatrix__Identity_fn(FastMatrix** __retval)
{
    *__retval = FastMatrix::Identity();
}

// public void Invert() :2340
void FastMatrix__Invert_fn(FastMatrix* __this)
{
    __this->Invert();
}

// public bool get_IsValid() :2225
void FastMatrix__get_IsValid_fn(FastMatrix* __this, bool* __retval)
{
    *__retval = __this->IsValid();
}

// public float4x4 get_Matrix() :2215
void FastMatrix__get_Matrix_fn(FastMatrix* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->Matrix();
}

// public Fuse.FastMatrix Mul(Fuse.FastMatrix m) :2328
void FastMatrix__Mul_fn(FastMatrix* __this, FastMatrix* m, FastMatrix** __retval)
{
    *__retval = __this->Mul(m);
}

// private FastMatrix New() :2227
void FastMatrix__New1_fn(FastMatrix** __retval)
{
    *__retval = FastMatrix::New1();
}

// private FastMatrix New(Fuse.FastMatrix orig) :2232
void FastMatrix__New2_fn(FastMatrix* orig, FastMatrix** __retval)
{
    *__retval = FastMatrix::New2(orig);
}

// public void PrependFastMatrix(Fuse.FastMatrix fm) :2390
void FastMatrix__PrependFastMatrix_fn(FastMatrix* __this, FastMatrix* fm)
{
    __this->PrependFastMatrix(fm);
}

// public void PrependRotation(float zRadians) :2291
void FastMatrix__PrependRotation_fn(FastMatrix* __this, float* zRadians)
{
    __this->PrependRotation(*zRadians);
}

// public void PrependRotationQuaternion(float4 q) :2379
void FastMatrix__PrependRotationQuaternion_fn(FastMatrix* __this, ::g::Uno::Float4* q)
{
    __this->PrependRotationQuaternion(*q);
}

// public void PrependScale(float factor) :2303
void FastMatrix__PrependScale_fn(FastMatrix* __this, float* factor)
{
    __this->PrependScale(*factor);
}

// public void PrependScale(float3 scale) :2373
void FastMatrix__PrependScale1_fn(FastMatrix* __this, ::g::Uno::Float3* scale)
{
    __this->PrependScale1(*scale);
}

// public void PrependShear(float xRadians, float yRadians) :2309
void FastMatrix__PrependShear_fn(FastMatrix* __this, float* xRadians, float* yRadians)
{
    __this->PrependShear(*xRadians, *yRadians);
}

// public void PrependTranslation(float x, float y, float z) :2273
void FastMatrix__PrependTranslation_fn(FastMatrix* __this, float* x, float* y, float* z)
{
    __this->PrependTranslation(*x, *y, *z);
}

// public void PrependTranslation(float3 offset) :2385
void FastMatrix__PrependTranslation1_fn(FastMatrix* __this, ::g::Uno::Float3* offset)
{
    __this->PrependTranslation1(*offset);
}

// public void ResetIdentity() :2246
void FastMatrix__ResetIdentity_fn(FastMatrix* __this)
{
    __this->ResetIdentity();
}

// private void SimpleTranslation(float x, float y, float z) :2321
void FastMatrix__SimpleTranslation_fn(FastMatrix* __this, float* x, float* y, float* z)
{
    __this->SimpleTranslation(*x, *y, *z);
}

// private FastMatrix() [instance] :2227
void FastMatrix::ctor_()
{
    uStackFrame __("Fuse.FastMatrix", ".ctor()");
    _isValid = true;
    _matrix = ::g::Uno::Float4x4__Identity();
}

// private FastMatrix(Fuse.FastMatrix orig) [instance] :2232
void FastMatrix::ctor_1(FastMatrix* orig)
{
    uStackFrame __("Fuse.FastMatrix", ".ctor(Fuse.FastMatrix)");
    _isValid = true;
    _matrix = uPtr(orig)->_matrix;
    _hasNonTranslation = orig->_hasNonTranslation;
    _isValid = orig->_isValid;
}

// public void AppendFastMatrix(Fuse.FastMatrix fm) [instance] :2406
void FastMatrix::AppendFastMatrix(FastMatrix* fm)
{
    uStackFrame __("Fuse.FastMatrix", "AppendFastMatrix(Fuse.FastMatrix)");
    _isValid = (_isValid && uPtr(fm)->_isValid);

    if (_hasNonTranslation || fm->_hasNonTranslation)
    {
        _matrix = ::g::Uno::Matrix::Mul8(_matrix, uPtr(fm)->Matrix());
        _hasNonTranslation = true;
    }
    else 
    {
        _matrix.M41 = (_matrix.M41 + uPtr(fm)->_matrix.M41);
        _matrix.M42 = (_matrix.M42 + fm->_matrix.M42);
        _matrix.M43 = (_matrix.M43 + fm->_matrix.M43);
    }
}

// public void AppendRotation(float zRadians) [instance] :2285
void FastMatrix::AppendRotation(float zRadians)
{
    uStackFrame __("Fuse.FastMatrix", "AppendRotation(float)");
    _matrix = ::g::Uno::Matrix::Mul8(_matrix, ::g::Uno::Matrix::RotationZ(zRadians));
    _hasNonTranslation = true;
}

// public void AppendRotationQuaternion(float4 q) [instance] :2362
void FastMatrix::AppendRotationQuaternion(::g::Uno::Float4 q)
{
    uStackFrame __("Fuse.FastMatrix", "AppendRotationQuaternion(float4)");
    _matrix = ::g::Uno::Matrix::Mul8(_matrix, ::g::Uno::Matrix::RotationQuaternion(q));
    _hasNonTranslation = true;
}

// public void AppendScale(float factor) [instance] :2297
void FastMatrix::AppendScale(float factor)
{
    uStackFrame __("Fuse.FastMatrix", "AppendScale(float)");
    _matrix = ::g::Uno::Matrix::Mul8(_matrix, ::g::Uno::Matrix::Scaling2(::g::Uno::Float3__New2(factor, factor, factor)));
    _hasNonTranslation = true;
}

// public void AppendScale(float3 scale) [instance] :2356
void FastMatrix::AppendScale1(::g::Uno::Float3 scale)
{
    uStackFrame __("Fuse.FastMatrix", "AppendScale(float3)");
    _matrix = ::g::Uno::Matrix::Mul8(_matrix, ::g::Uno::Matrix::Scaling2(scale));
    _hasNonTranslation = true;
}

// public void AppendShear(float xRadians, float yRadians) [instance] :2315
void FastMatrix::AppendShear(float xRadians, float yRadians)
{
    uStackFrame __("Fuse.FastMatrix", "AppendShear(float,float)");
    _matrix = ::g::Uno::Matrix::Mul8(_matrix, ::g::Uno::Matrix::Shear(::g::Uno::Float2__New2(xRadians, yRadians)));
    _hasNonTranslation = true;
}

// public void AppendTranslation(float x, float y, float z) [instance] :2261
void FastMatrix::AppendTranslation(float x, float y, float z)
{
    uStackFrame __("Fuse.FastMatrix", "AppendTranslation(float,float,float)");

    if (!_hasNonTranslation)
        SimpleTranslation(x, y, z);
    else 
        _matrix = ::g::Uno::Matrix::Mul8(_matrix, ::g::Uno::Matrix::Translation1(::g::Uno::Float3__New2(x, y, z)));
}

// public void AppendTranslation(float3 offset) [instance] :2368
void FastMatrix::AppendTranslation1(::g::Uno::Float3 offset)
{
    uStackFrame __("Fuse.FastMatrix", "AppendTranslation(float3)");
    _matrix = ::g::Uno::Matrix::Mul8(_matrix, ::g::Uno::Matrix::Translation1(offset));
}

// public Fuse.FastMatrix Copy() [instance] :2241
FastMatrix* FastMatrix::Copy()
{
    uStackFrame __("Fuse.FastMatrix", "Copy()");
    return FastMatrix::New2(this);
}

// public bool get_HasNonTranslation() [instance] :2218
bool FastMatrix::HasNonTranslation()
{
    uStackFrame __("Fuse.FastMatrix", "get_HasNonTranslation()");
    return _hasNonTranslation;
}

// public void Invert() [instance] :2340
void FastMatrix::Invert()
{
    uStackFrame __("Fuse.FastMatrix", "Invert()");

    if (!_hasNonTranslation)
    {
        _matrix.M41 = -_matrix.M41;
        _matrix.M42 = -_matrix.M42;
        _matrix.M43 = -_matrix.M43;
    }
    else 
    {
        ::g::Uno::Float4x4 result = ::g::Uno::Float4x4__Identity();
        _isValid = (_isValid && ::g::Uno::Matrix::TryInvert2(_matrix, &result));
        _matrix = result;
    }
}

// public bool get_IsValid() [instance] :2225
bool FastMatrix::IsValid()
{
    uStackFrame __("Fuse.FastMatrix", "get_IsValid()");
    return _isValid;
}

// public float4x4 get_Matrix() [instance] :2215
::g::Uno::Float4x4 FastMatrix::Matrix()
{
    uStackFrame __("Fuse.FastMatrix", "get_Matrix()");
    return _matrix;
}

// public Fuse.FastMatrix Mul(Fuse.FastMatrix m) [instance] :2328
FastMatrix* FastMatrix::Mul(FastMatrix* m)
{
    uStackFrame __("Fuse.FastMatrix", "Mul(Fuse.FastMatrix)");
    FastMatrix* res = FastMatrix::New1();
    res->_matrix = ::g::Uno::Matrix::Mul8(_matrix, uPtr(m)->_matrix);
    res->_hasNonTranslation = (_hasNonTranslation || m->_hasNonTranslation);
    res->_isValid = (_isValid && m->_isValid);
    return res;
}

// public void PrependFastMatrix(Fuse.FastMatrix fm) [instance] :2390
void FastMatrix::PrependFastMatrix(FastMatrix* fm)
{
    uStackFrame __("Fuse.FastMatrix", "PrependFastMatrix(Fuse.FastMatrix)");
    _isValid = (_isValid && uPtr(fm)->_isValid);

    if (_hasNonTranslation || fm->_hasNonTranslation)
    {
        _matrix = ::g::Uno::Matrix::Mul8(uPtr(fm)->Matrix(), _matrix);
        _hasNonTranslation = true;
    }
    else 
    {
        _matrix.M41 = (_matrix.M41 + uPtr(fm)->_matrix.M41);
        _matrix.M42 = (_matrix.M42 + fm->_matrix.M42);
        _matrix.M43 = (_matrix.M43 + fm->_matrix.M43);
    }
}

// public void PrependRotation(float zRadians) [instance] :2291
void FastMatrix::PrependRotation(float zRadians)
{
    uStackFrame __("Fuse.FastMatrix", "PrependRotation(float)");
    _matrix = ::g::Uno::Matrix::Mul8(::g::Uno::Matrix::RotationZ(zRadians), _matrix);
    _hasNonTranslation = true;
}

// public void PrependRotationQuaternion(float4 q) [instance] :2379
void FastMatrix::PrependRotationQuaternion(::g::Uno::Float4 q)
{
    uStackFrame __("Fuse.FastMatrix", "PrependRotationQuaternion(float4)");
    _matrix = ::g::Uno::Matrix::Mul8(::g::Uno::Matrix::RotationQuaternion(q), _matrix);
    _hasNonTranslation = true;
}

// public void PrependScale(float factor) [instance] :2303
void FastMatrix::PrependScale(float factor)
{
    uStackFrame __("Fuse.FastMatrix", "PrependScale(float)");
    _matrix = ::g::Uno::Matrix::Mul8(::g::Uno::Matrix::Scaling2(::g::Uno::Float3__New2(factor, factor, factor)), _matrix);
    _hasNonTranslation = true;
}

// public void PrependScale(float3 scale) [instance] :2373
void FastMatrix::PrependScale1(::g::Uno::Float3 scale)
{
    uStackFrame __("Fuse.FastMatrix", "PrependScale(float3)");
    _matrix = ::g::Uno::Matrix::Mul8(::g::Uno::Matrix::Scaling2(scale), _matrix);
    _hasNonTranslation = true;
}

// public void PrependShear(float xRadians, float yRadians) [instance] :2309
void FastMatrix::PrependShear(float xRadians, float yRadians)
{
    uStackFrame __("Fuse.FastMatrix", "PrependShear(float,float)");
    _matrix = ::g::Uno::Matrix::Mul8(::g::Uno::Matrix::Shear(::g::Uno::Float2__New2(xRadians, yRadians)), _matrix);
    _hasNonTranslation = true;
}

// public void PrependTranslation(float x, float y, float z) [instance] :2273
void FastMatrix::PrependTranslation(float x, float y, float z)
{
    uStackFrame __("Fuse.FastMatrix", "PrependTranslation(float,float,float)");

    if (!_hasNonTranslation)
        SimpleTranslation(x, y, z);
    else 
        _matrix = ::g::Uno::Matrix::Mul8(::g::Uno::Matrix::Translation1(::g::Uno::Float3__New2(x, y, z)), _matrix);
}

// public void PrependTranslation(float3 offset) [instance] :2385
void FastMatrix::PrependTranslation1(::g::Uno::Float3 offset)
{
    uStackFrame __("Fuse.FastMatrix", "PrependTranslation(float3)");
    _matrix = ::g::Uno::Matrix::Mul8(::g::Uno::Matrix::Translation1(offset), _matrix);
}

// public void ResetIdentity() [instance] :2246
void FastMatrix::ResetIdentity()
{
    uStackFrame __("Fuse.FastMatrix", "ResetIdentity()");
    _matrix = ::g::Uno::Float4x4__Identity();
    _hasNonTranslation = false;
    _isValid = true;
}

// private void SimpleTranslation(float x, float y, float z) [instance] :2321
void FastMatrix::SimpleTranslation(float x, float y, float z)
{
    uStackFrame __("Fuse.FastMatrix", "SimpleTranslation(float,float,float)");
    _matrix.M41 = (_matrix.M41 + x);
    _matrix.M42 = (_matrix.M42 + y);
    _matrix.M43 = (_matrix.M43 + z);
}

// public static Fuse.FastMatrix FromFloat4x4(float4x4 m) [static] :2253
FastMatrix* FastMatrix::FromFloat4x4(::g::Uno::Float4x4 m)
{
    uStackFrame __("Fuse.FastMatrix", "FromFloat4x4(float4x4)");
    FastMatrix* k = FastMatrix::New1();
    k->_matrix = m;
    k->_hasNonTranslation = true;
    return k;
}

// public static Fuse.FastMatrix Identity() [static] :2239
FastMatrix* FastMatrix::Identity()
{
    uStackFrame __("Fuse.FastMatrix", "Identity()");
    return FastMatrix::New1();
}

// private FastMatrix New() [static] :2227
FastMatrix* FastMatrix::New1()
{
    FastMatrix* obj1 = (FastMatrix*)uNew(FastMatrix_typeof());
    obj1->ctor_();
    return obj1;
}

// private FastMatrix New(Fuse.FastMatrix orig) [static] :2232
FastMatrix* FastMatrix::New2(FastMatrix* orig)
{
    FastMatrix* obj2 = (FastMatrix*)uNew(FastMatrix_typeof());
    obj2->ctor_1(orig);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// internal enum FastProperty1 :5434
uEnumType* FastProperty1_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.FastProperty1", ::g::Uno::Int_typeof(), 29);
    type->SetLiterals(
        "IsEnabled", 1LL,
        "IsContextEnabledCache", 2LL,
        "IsLocalFlat", 4LL,
        "IsLocalFlatCached", 8LL,
        "AreChildrenFlatCached", 16LL,
        "AreChildrenFlat", 32LL,
        "MinWidth", 64LL,
        "MinHeight", 128LL,
        "MaxWidth", 256LL,
        "MaxHeight", 512LL,
        "Margin", 1024LL,
        "Padding", 2048LL,
        "Anchor", 4096LL,
        "Offset", 8192LL,
        "X", 16384LL,
        "Y", 32768LL,
        "Aspect", 65536LL,
        "AspectConstraint", 131072LL,
        "CachingMode", 262144LL,
        "HitTestMode", 524288LL,
        "ClipToBounds", 1048576LL,
        "TransformOrigin", 2097152LL,
        "Opacity", 4194304LL,
        "LimitWidth", 8388608LL,
        "LimitHeight", 16777216LL,
        "SnapToPixels", 33554432LL,
        "ContextSnapToPixelsCache", 67108864LL,
        "HasSnapToPixels", 134217728LL,
        "PendingRemove", 268435456LL);
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// internal class FastProperty1Link :5476
// {
static void FastProperty1Link_build(uType* type)
{
    type->SetFields(0,
        FastProperty1Link_typeof(), offsetof(::g::Fuse::FastProperty1Link, Next), 0,
        ::g::Fuse::FastProperty1_typeof(), offsetof(::g::Fuse::FastProperty1Link, Property), 0);
}

uType* FastProperty1Link_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FastProperty1Link);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FastProperty1Link", options);
    type->fp_build_ = FastProperty1Link_build;
    return type;
}

// public FastProperty1Link(Fuse.FastProperty1 p) :5481
void FastProperty1Link__ctor__fn(FastProperty1Link* __this, int* p)
{
    __this->ctor_(*p);
}

// public FastProperty1Link New(Fuse.FastProperty1 p) :5481
void FastProperty1Link__New1_fn(int* p, FastProperty1Link** __retval)
{
    *__retval = FastProperty1Link::New1(*p);
}

// public FastProperty1Link(Fuse.FastProperty1 p) [instance] :5481
void FastProperty1Link::ctor_(int p)
{
    uStackFrame __("Fuse.FastProperty1Link", ".ctor(Fuse.FastProperty1)");
    Property = p;
}

// public FastProperty1Link New(Fuse.FastProperty1 p) [static] :5481
FastProperty1Link* FastProperty1Link::New1(int p)
{
    FastProperty1Link* obj1 = (FastProperty1Link*)uNew(FastProperty1Link_typeof());
    obj1->ctor_(p);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// internal sealed class FastProperty1Link<T> :5487
// {
static void FastProperty1Link1_build(uType* type)
{
    type->SetFields(2,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* FastProperty1Link1_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::FastProperty1Link_typeof();
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(FastProperty1Link1);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FastProperty1Link`1", options);
    type->fp_build_ = FastProperty1Link1_build;
    return type;
}

// public FastProperty1Link(Fuse.FastProperty1 p, T value) :5490
void FastProperty1Link1__ctor_1_fn(FastProperty1Link1* __this, int* p, void* value)
{
    uStackFrame __("Fuse.FastProperty1Link`1", ".ctor(Fuse.FastProperty1,T)");
    int p_ = *p;
    __this->ctor_(p_);
    __this->Value() = value;
}

// public FastProperty1Link New(Fuse.FastProperty1 p, T value) :5490
void FastProperty1Link1__New2_fn(uType* __type, int* p, void* value, FastProperty1Link1** __retval)
{
    int p_ = *p;
    FastProperty1Link1* obj1 = (FastProperty1Link1*)uNew(__type);
    FastProperty1Link1__ctor_1_fn(obj1, uCRef<int>(p_), value);
    return *__retval = obj1, void();
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// internal enum FastProperty2 :5607
uEnumType* FastProperty2_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.FastProperty2", ::g::Uno::Int_typeof(), 16);
    type->SetLiterals(
        "Color", 1LL,
        "TextWrapping", 2LL,
        "IsMultiline", 4LL,
        "InputHint", 8LL,
        "PlaceholderText", 16LL,
        "PlaceholderColor", 32LL,
        "ActionStyle", 64LL,
        "CaretColor", 128LL,
        "SelectionColor", 256LL,
        "LineSpacing", 512LL,
        "TextAlignment", 1024LL,
        "TextTruncation", 2048LL,
        "IsPassword", 4096LL,
        "IsReadOnly", 8192LL,
        "AutoCorrectHint", 16384LL,
        "AutoCapitalizationHint", 32768LL);
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// internal class FastProperty2Link :5629
// {
static void FastProperty2Link_build(uType* type)
{
    type->SetFields(0,
        FastProperty2Link_typeof(), offsetof(::g::Fuse::FastProperty2Link, Next), 0,
        ::g::Fuse::FastProperty2_typeof(), offsetof(::g::Fuse::FastProperty2Link, Property), 0);
}

uType* FastProperty2Link_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FastProperty2Link);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FastProperty2Link", options);
    type->fp_build_ = FastProperty2Link_build;
    return type;
}

// public FastProperty2Link(Fuse.FastProperty2 p) :5634
void FastProperty2Link__ctor__fn(FastProperty2Link* __this, int* p)
{
    __this->ctor_(*p);
}

// public FastProperty2Link New(Fuse.FastProperty2 p) :5634
void FastProperty2Link__New1_fn(int* p, FastProperty2Link** __retval)
{
    *__retval = FastProperty2Link::New1(*p);
}

// public FastProperty2Link(Fuse.FastProperty2 p) [instance] :5634
void FastProperty2Link::ctor_(int p)
{
    uStackFrame __("Fuse.FastProperty2Link", ".ctor(Fuse.FastProperty2)");
    Property = p;
}

// public FastProperty2Link New(Fuse.FastProperty2 p) [static] :5634
FastProperty2Link* FastProperty2Link::New1(int p)
{
    FastProperty2Link* obj1 = (FastProperty2Link*)uNew(FastProperty2Link_typeof());
    obj1->ctor_(p);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// internal sealed class FastProperty2Link<T> :5640
// {
static void FastProperty2Link1_build(uType* type)
{
    type->SetFields(2,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* FastProperty2Link1_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::FastProperty2Link_typeof();
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(FastProperty2Link1);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FastProperty2Link`1", options);
    type->fp_build_ = FastProperty2Link1_build;
    return type;
}

// public FastProperty2Link(Fuse.FastProperty2 p, T value) :5643
void FastProperty2Link1__ctor_1_fn(FastProperty2Link1* __this, int* p, void* value)
{
    uStackFrame __("Fuse.FastProperty2Link`1", ".ctor(Fuse.FastProperty2,T)");
    int p_ = *p;
    __this->ctor_(p_);
    __this->Value() = value;
}

// public FastProperty2Link New(Fuse.FastProperty2 p, T value) :5643
void FastProperty2Link1__New2_fn(uType* __type, int* p, void* value, FastProperty2Link1** __retval)
{
    int p_ = *p;
    FastProperty2Link1* obj1 = (FastProperty2Link1*)uNew(__type);
    FastProperty2Link1__ctor_1_fn(obj1, uCRef<int>(p_), value);
    return *__retval = obj1, void();
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// internal sealed class FixedViewport :3186
// {
static void FixedViewport_build(uType* type)
{
    ::TYPES[34] = ::g::Fuse::IFrustum_typeof();
    type->SetInterfaces(
        ::g::Fuse::IRenderViewport_typeof(), offsetof(FixedViewport_type, interface0),
        ::g::Fuse::IViewport_typeof(), offsetof(FixedViewport_type, interface1),
        ::g::Fuse::ICommonViewport_typeof(), offsetof(FixedViewport_type, interface2));
    type->SetFields(0,
        ::g::Fuse::IFrustum_typeof(), offsetof(::g::Fuse::FixedViewport, _frustum), 0,
        ::g::Fuse::FrustumViewport_typeof(), offsetof(::g::Fuse::FixedViewport, _frustumViewport), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::FixedViewport, _pixelSize), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::FixedViewport, _pixelsPerPoint), 0);
}

FixedViewport_type* FixedViewport_typeof()
{
    static uSStrong<FixedViewport_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(FixedViewport);
    options.TypeSize = sizeof(FixedViewport_type);
    type = (FixedViewport_type*)uClassType::New("Fuse.FixedViewport", options);
    type->fp_build_ = FixedViewport_build;
    type->interface0.fp_get_ProjectionTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))FixedViewport__get_ProjectionTransform_fn;
    type->interface0.fp_get_ViewProjectionTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))FixedViewport__get_ViewProjectionTransform_fn;
    type->interface0.fp_get_ViewOrigin = (void(*)(uObject*, ::g::Uno::Float3*))FixedViewport__get_ViewOrigin_fn;
    type->interface0.fp_get_ViewRange = (void(*)(uObject*, ::g::Uno::Float2*))FixedViewport__get_ViewRange_fn;
    type->interface1.fp_PointToWorldRay = (void(*)(uObject*, ::g::Uno::Float2*, ::g::Uno::Geometry::Ray*))FixedViewport__PointToWorldRay_fn;
    type->interface1.fp_WorldToLocalRay = (void(*)(uObject*, uObject*, ::g::Uno::Geometry::Ray*, ::g::Fuse::Visual*, ::g::Uno::Geometry::Ray*))FixedViewport__WorldToLocalRay_fn;
    type->interface2.fp_get_PixelsPerPoint = (void(*)(uObject*, float*))FixedViewport__get_PixelsPerPoint_fn;
    type->interface2.fp_get_Size = (void(*)(uObject*, ::g::Uno::Float2*))FixedViewport__get_Size_fn;
    type->interface2.fp_get_PixelSize = (void(*)(uObject*, ::g::Uno::Float2*))FixedViewport__get_PixelSize_fn;
    type->interface2.fp_get_ViewTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))FixedViewport__get_ViewTransform_fn;
    return type;
}

// public FixedViewport(int2 pixelSize, float pixelsPerPoint, Fuse.IFrustum frustum) :3225
void FixedViewport__ctor__fn(FixedViewport* __this, ::g::Uno::Int2* pixelSize, float* pixelsPerPoint, uObject* frustum)
{
    __this->ctor_(*pixelSize, *pixelsPerPoint, frustum);
}

// public FixedViewport New(int2 pixelSize, float pixelsPerPoint, Fuse.IFrustum frustum) :3225
void FixedViewport__New1_fn(::g::Uno::Int2* pixelSize, float* pixelsPerPoint, uObject* frustum, FixedViewport** __retval)
{
    *__retval = FixedViewport::New1(*pixelSize, *pixelsPerPoint, frustum);
}

// public float2 get_PixelSize() :3194
void FixedViewport__get_PixelSize_fn(FixedViewport* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PixelSize();
}

// public float get_PixelsPerPoint() :3189
void FixedViewport__get_PixelsPerPoint_fn(FixedViewport* __this, float* __retval)
{
    *__retval = __this->PixelsPerPoint();
}

// public Uno.Geometry.Ray PointToWorldRay(float2 pointPos) :3214
void FixedViewport__PointToWorldRay_fn(FixedViewport* __this, ::g::Uno::Float2* pointPos, ::g::Uno::Geometry::Ray* __retval)
{
    *__retval = __this->PointToWorldRay(*pointPos);
}

// public float4x4 get_ProjectionTransform() :3199
void FixedViewport__get_ProjectionTransform_fn(FixedViewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ProjectionTransform();
}

// public float4x4 get_ProjectionTransformInverse() :3201
void FixedViewport__get_ProjectionTransformInverse_fn(FixedViewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ProjectionTransformInverse();
}

// public float2 get_Size() :3191
void FixedViewport__get_Size_fn(FixedViewport* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// public float3 get_ViewOrigin() :3211
void FixedViewport__get_ViewOrigin_fn(FixedViewport* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->ViewOrigin();
}

// public float4x4 get_ViewProjectionTransform() :3203
void FixedViewport__get_ViewProjectionTransform_fn(FixedViewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ViewProjectionTransform();
}

// public float4x4 get_ViewProjectionTransformInverse() :3205
void FixedViewport__get_ViewProjectionTransformInverse_fn(FixedViewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ViewProjectionTransformInverse();
}

// public float2 get_ViewRange() :3212
void FixedViewport__get_ViewRange_fn(FixedViewport* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ViewRange();
}

// public float4x4 get_ViewTransform() :3207
void FixedViewport__get_ViewTransform_fn(FixedViewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ViewTransform();
}

// public float4x4 get_ViewTransformInverse() :3209
void FixedViewport__get_ViewTransformInverse_fn(FixedViewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ViewTransformInverse();
}

// public Uno.Geometry.Ray WorldToLocalRay(Fuse.IViewport world, Uno.Geometry.Ray worldRay, Fuse.Visual where) :3218
void FixedViewport__WorldToLocalRay_fn(FixedViewport* __this, uObject* world, ::g::Uno::Geometry::Ray* worldRay, ::g::Fuse::Visual* where, ::g::Uno::Geometry::Ray* __retval)
{
    *__retval = __this->WorldToLocalRay(world, *worldRay, where);
}

// public FixedViewport(int2 pixelSize, float pixelsPerPoint, Fuse.IFrustum frustum) [instance] :3225
void FixedViewport::ctor_(::g::Uno::Int2 pixelSize, float pixelsPerPoint, uObject* frustum)
{
    uStackFrame __("Fuse.FixedViewport", ".ctor(int2,float,Fuse.IFrustum)");
    _frustumViewport = ::g::Fuse::FrustumViewport::New1();
    _frustum = frustum;
    _pixelSize = ::g::Uno::Float2__New2((float)pixelSize.X, (float)pixelSize.Y);
    _pixelsPerPoint = pixelsPerPoint;
    uPtr(_frustumViewport)->Update((uObject*)this, frustum);
}

// public float2 get_PixelSize() [instance] :3194
::g::Uno::Float2 FixedViewport::PixelSize()
{
    uStackFrame __("Fuse.FixedViewport", "get_PixelSize()");
    return _pixelSize;
}

// public float get_PixelsPerPoint() [instance] :3189
float FixedViewport::PixelsPerPoint()
{
    uStackFrame __("Fuse.FixedViewport", "get_PixelsPerPoint()");
    return _pixelsPerPoint;
}

// public Uno.Geometry.Ray PointToWorldRay(float2 pointPos) [instance] :3214
::g::Uno::Geometry::Ray FixedViewport::PointToWorldRay(::g::Uno::Float2 pointPos)
{
    uStackFrame __("Fuse.FixedViewport", "PointToWorldRay(float2)");
    return ::g::Fuse::FrustumViewport::PointToWorldRay((uObject*)this, uPtr(_frustumViewport)->ViewProjectionTransformInverse, pointPos);
}

// public float4x4 get_ProjectionTransform() [instance] :3199
::g::Uno::Float4x4 FixedViewport::ProjectionTransform()
{
    uStackFrame __("Fuse.FixedViewport", "get_ProjectionTransform()");
    return uPtr(_frustumViewport)->ProjectionTransform;
}

// public float4x4 get_ProjectionTransformInverse() [instance] :3201
::g::Uno::Float4x4 FixedViewport::ProjectionTransformInverse()
{
    uStackFrame __("Fuse.FixedViewport", "get_ProjectionTransformInverse()");
    return uPtr(_frustumViewport)->ProjectionTransformInverse;
}

// public float2 get_Size() [instance] :3191
::g::Uno::Float2 FixedViewport::Size()
{
    uStackFrame __("Fuse.FixedViewport", "get_Size()");
    return ::g::Uno::Float2__op_Division1(PixelSize(), PixelsPerPoint());
}

// public float3 get_ViewOrigin() [instance] :3211
::g::Uno::Float3 FixedViewport::ViewOrigin()
{
    uStackFrame __("Fuse.FixedViewport", "get_ViewOrigin()");
    return ::g::Fuse::IFrustum::GetWorldPosition(uInterface(uPtr(_frustum), ::TYPES[34/*Fuse.IFrustum*/]), (uObject*)this);
}

// public float4x4 get_ViewProjectionTransform() [instance] :3203
::g::Uno::Float4x4 FixedViewport::ViewProjectionTransform()
{
    uStackFrame __("Fuse.FixedViewport", "get_ViewProjectionTransform()");
    return uPtr(_frustumViewport)->ViewProjectionTransform;
}

// public float4x4 get_ViewProjectionTransformInverse() [instance] :3205
::g::Uno::Float4x4 FixedViewport::ViewProjectionTransformInverse()
{
    uStackFrame __("Fuse.FixedViewport", "get_ViewProjectionTransformInverse()");
    return uPtr(_frustumViewport)->ViewProjectionTransformInverse;
}

// public float2 get_ViewRange() [instance] :3212
::g::Uno::Float2 FixedViewport::ViewRange()
{
    uStackFrame __("Fuse.FixedViewport", "get_ViewRange()");
    return ::g::Fuse::IFrustum::GetDepthRange(uInterface(uPtr(_frustum), ::TYPES[34/*Fuse.IFrustum*/]), (uObject*)this);
}

// public float4x4 get_ViewTransform() [instance] :3207
::g::Uno::Float4x4 FixedViewport::ViewTransform()
{
    uStackFrame __("Fuse.FixedViewport", "get_ViewTransform()");
    return uPtr(_frustumViewport)->ViewTransform;
}

// public float4x4 get_ViewTransformInverse() [instance] :3209
::g::Uno::Float4x4 FixedViewport::ViewTransformInverse()
{
    uStackFrame __("Fuse.FixedViewport", "get_ViewTransformInverse()");
    return uPtr(_frustumViewport)->ViewTransformInverse;
}

// public Uno.Geometry.Ray WorldToLocalRay(Fuse.IViewport world, Uno.Geometry.Ray worldRay, Fuse.Visual where) [instance] :3218
::g::Uno::Geometry::Ray FixedViewport::WorldToLocalRay(uObject* world, ::g::Uno::Geometry::Ray worldRay, ::g::Fuse::Visual* where)
{
    uStackFrame __("Fuse.FixedViewport", "WorldToLocalRay(Fuse.IViewport,Uno.Geometry.Ray,Fuse.Visual)");
    return ::g::Fuse::FrustumViewport::WorldToLocalRay((uObject*)this, world, worldRay, where);
}

// public FixedViewport New(int2 pixelSize, float pixelsPerPoint, Fuse.IFrustum frustum) [static] :3225
FixedViewport* FixedViewport::New1(::g::Uno::Int2 pixelSize, float pixelsPerPoint, uObject* frustum)
{
    FixedViewport* obj1 = (FixedViewport*)uNew(FixedViewport_typeof());
    obj1->ctor_(pixelSize, pixelsPerPoint, frustum);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// private enum LayoutParams.Flags :3284
uEnumType* LayoutParams__Flags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.LayoutParams.Flags", ::g::Uno::Int_typeof(), 12);
    type->SetLiterals(
        "None", 0LL,
        "X", 1LL,
        "Y", 2LL,
        "Temporary", 4LL,
        "MaxX", 8LL,
        "MaxY", 16LL,
        "MinX", 32LL,
        "MinY", 64LL,
        "RelativeX", 128LL,
        "RelativeY", 256LL,
        "NoRelativeX", 512LL,
        "NoRelativeY", 1024LL);
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public class Font :2452
// {
static void Font_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Internal::FontFaceDescriptor_typeof()), offsetof(::g::Fuse::Font, Descriptors), 0,
        Font_typeof(), (uintptr_t)&::g::Fuse::Font::_fallback_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(4,
        new uFunction(".ctor", NULL, (void*)Font__New2_fn, 0, true, Font_typeof(), 1, ::g::Uno::UX::FileSource_typeof()),
        new uFunction("get_PlatformDefault", NULL, (void*)Font__get_PlatformDefault_fn, 0, true, Font_typeof(), 0),
        new uFunction("get_PlatformDefaultSize", NULL, (void*)Font__get_PlatformDefaultSize_fn, 0, true, ::g::Uno::Float_typeof(), 0),
        new uFunction("get_PlatformDefaultTextColor", NULL, (void*)Font__get_PlatformDefaultTextColor_fn, 0, true, ::g::Uno::Float4_typeof(), 0));
}

uType* Font_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Font);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Font", options);
    type->fp_build_ = Font_build;
    return type;
}

// internal Font(Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> descriptors) :2470
void Font__ctor__fn(Font* __this, ::g::Uno::Collections::List* descriptors)
{
    __this->ctor_(descriptors);
}

// public Font(Uno.UX.FileSource file) :2465
void Font__ctor_1_fn(Font* __this, ::g::Uno::UX::FileSource* file)
{
    __this->ctor_1(file);
}

// internal Uno.UX.FileSource get_FileSource() :2458
void Font__get_FileSource_fn(Font* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->FileSource();
}

// internal Font New(Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> descriptors) :2470
void Font__New1_fn(::g::Uno::Collections::List* descriptors, Font** __retval)
{
    *__retval = Font::New1(descriptors);
}

// public Font New(Uno.UX.FileSource file) :2465
void Font__New2_fn(::g::Uno::UX::FileSource* file, Font** __retval)
{
    *__retval = Font::New2(file);
}

// public static Fuse.Font get_PlatformDefault() :2481
void Font__get_PlatformDefault_fn(Font** __retval)
{
    *__retval = Font::PlatformDefault();
}

// public static float get_PlatformDefaultSize() :2492
void Font__get_PlatformDefaultSize_fn(float* __retval)
{
    *__retval = Font::PlatformDefaultSize();
}

// public static float4 get_PlatformDefaultTextColor() :2502
void Font__get_PlatformDefaultTextColor_fn(::g::Uno::Float4* __retval)
{
    *__retval = Font::PlatformDefaultTextColor();
}

uSStrong<Font*> Font::_fallback_;

// internal Font(Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> descriptors) [instance] :2470
void Font::ctor_(::g::Uno::Collections::List* descriptors)
{
    uStackFrame __("Fuse.Font", ".ctor(Uno.Collections.List<Fuse.Internal.FontFaceDescriptor>)");
    Descriptors = descriptors;
}

// public Font(Uno.UX.FileSource file) [instance] :2465
void Font::ctor_1(::g::Uno::UX::FileSource* file)
{
    uStackFrame __("Fuse.Font", ".ctor(Uno.UX.FileSource)");
    ctor_(::g::Fuse::Internal::SystemFont::GetFallback(file));
}

// internal Uno.UX.FileSource get_FileSource() [instance] :2458
::g::Uno::UX::FileSource* Font::FileSource()
{
    uStackFrame __("Fuse.Font", "get_FileSource()");
    ::g::Fuse::Internal::FontFaceDescriptor* ret3;
    return uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Descriptors), uCRef<int>(0), &ret3), ret3))->FileSource;
}

// internal Font New(Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> descriptors) [static] :2470
Font* Font::New1(::g::Uno::Collections::List* descriptors)
{
    Font* obj2 = (Font*)uNew(Font_typeof());
    obj2->ctor_(descriptors);
    return obj2;
}

// public Font New(Uno.UX.FileSource file) [static] :2465
Font* Font::New2(::g::Uno::UX::FileSource* file)
{
    Font* obj1 = (Font*)uNew(Font_typeof());
    obj1->ctor_1(file);
    return obj1;
}

// public static Fuse.Font get_PlatformDefault() [static] :2481
Font* Font::PlatformDefault()
{
    uStackFrame __("Fuse.Font", "get_PlatformDefault()");

    if (Font::_fallback_ == NULL)
        Font::_fallback_ = Font::New1(::g::Fuse::Internal::SystemFont::Default());

    return Font::_fallback_;
}

// public static float get_PlatformDefaultSize() [static] :2492
float Font::PlatformDefaultSize()
{
    uStackFrame __("Fuse.Font", "get_PlatformDefaultSize()");
    return 16.0f;
}

// public static float4 get_PlatformDefaultTextColor() [static] :2502
::g::Uno::Float4 Font::PlatformDefaultTextColor()
{
    uStackFrame __("Fuse.Font", "get_PlatformDefaultTextColor()");
    return ::g::Uno::Float4__New2(0.321568638f, 0.321568638f, 0.321568638f, 1.0f);
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public static class FramebufferPool :2524
// {
static void FramebufferPool_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::FramebufferPoolImpl_typeof(), (uintptr_t)&::g::Fuse::FramebufferPool::framebufferPool_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("Lock", NULL, (void*)FramebufferPool__Lock_fn, 0, true, ::g::Uno::Graphics::Framebuffer_typeof(), 4, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Graphics::Format_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("Lock", NULL, (void*)FramebufferPool__Lock1_fn, 0, true, ::g::Uno::Graphics::Framebuffer_typeof(), 3, ::g::Uno::Int2_typeof(), ::g::Uno::Graphics::Format_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("Release", NULL, (void*)FramebufferPool__Release_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Graphics::Framebuffer_typeof()));
}

uClassType* FramebufferPool_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.FramebufferPool", options);
    type->fp_build_ = FramebufferPool_build;
    return type;
}

// private static void EnsurePool() :2528
void FramebufferPool__EnsurePool_fn()
{
    FramebufferPool::EnsurePool();
}

// internal static int get_Frame() :2560
void FramebufferPool__get_Frame_fn(int* __retval)
{
    *__retval = FramebufferPool::Frame();
}

// public static framebuffer Lock(int width, int height, Uno.Graphics.Format format, bool depth) :2546
void FramebufferPool__Lock_fn(int* width, int* height, int* format, bool* depth, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = FramebufferPool::Lock(*width, *height, *format, *depth);
}

// public static framebuffer Lock(int2 size, Uno.Graphics.Format format, bool depth) :2542
void FramebufferPool__Lock1_fn(::g::Uno::Int2* size, int* format, bool* depth, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = FramebufferPool::Lock1(*size, *format, *depth);
}

// internal static void Register(Fuse.CacheFramebuffer cfb) :2530
void FramebufferPool__Register_fn(::g::Fuse::CacheFramebuffer* cfb)
{
    FramebufferPool::Register(cfb);
}

// public static void Release(framebuffer fb) :2552
void FramebufferPool__Release_fn(::g::Uno::Graphics::Framebuffer* fb)
{
    FramebufferPool::Release(fb);
}

// internal static void UnRegister(Fuse.CacheFramebuffer cfb) :2536
void FramebufferPool__UnRegister_fn(::g::Fuse::CacheFramebuffer* cfb)
{
    FramebufferPool::UnRegister(cfb);
}

uSStrong< ::g::Fuse::FramebufferPoolImpl*> FramebufferPool::framebufferPool_;

// private static void EnsurePool() [static] :2528
void FramebufferPool::EnsurePool()
{
    uStackFrame __("Fuse.FramebufferPool", "EnsurePool()");

    if (FramebufferPool::framebufferPool_ == NULL)
        FramebufferPool::framebufferPool_ = ::g::Fuse::FramebufferPoolImpl::New1();
}

// public static framebuffer Lock(int width, int height, Uno.Graphics.Format format, bool depth) [static] :2546
::g::Uno::Graphics::Framebuffer* FramebufferPool::Lock(int width, int height, int format, bool depth)
{
    uStackFrame __("Fuse.FramebufferPool", "Lock(int,int,Uno.Graphics.Format,bool)");
    FramebufferPool::EnsurePool();
    return uPtr(FramebufferPool::framebufferPool_)->Lock(width, height, format, depth);
}

// public static framebuffer Lock(int2 size, Uno.Graphics.Format format, bool depth) [static] :2542
::g::Uno::Graphics::Framebuffer* FramebufferPool::Lock1(::g::Uno::Int2 size, int format, bool depth)
{
    uStackFrame __("Fuse.FramebufferPool", "Lock(int2,Uno.Graphics.Format,bool)");
    return FramebufferPool::Lock(size.X, size.Y, format, depth);
}

// internal static void Register(Fuse.CacheFramebuffer cfb) [static] :2530
void FramebufferPool::Register(::g::Fuse::CacheFramebuffer* cfb)
{
    uStackFrame __("Fuse.FramebufferPool", "Register(Fuse.CacheFramebuffer)");
    FramebufferPool::EnsurePool();
    uPtr(FramebufferPool::framebufferPool_)->Register(cfb);
}

// public static void Release(framebuffer fb) [static] :2552
void FramebufferPool::Release(::g::Uno::Graphics::Framebuffer* fb)
{
    uStackFrame __("Fuse.FramebufferPool", "Release(framebuffer)");
    FramebufferPool::EnsurePool();
    uPtr(FramebufferPool::framebufferPool_)->Release(fb);
}

// internal static void UnRegister(Fuse.CacheFramebuffer cfb) [static] :2536
void FramebufferPool::UnRegister(::g::Fuse::CacheFramebuffer* cfb)
{
    uStackFrame __("Fuse.FramebufferPool", "UnRegister(Fuse.CacheFramebuffer)");
    FramebufferPool::EnsurePool();
    uPtr(FramebufferPool::framebufferPool_)->UnRegister(cfb);
}

// internal static int get_Frame() [static] :2560
int FramebufferPool::Frame()
{
    uStackFrame __("Fuse.FramebufferPool", "get_Frame()");
    FramebufferPool::EnsurePool();
    return uPtr(FramebufferPool::framebufferPool_)->frame;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// internal sealed class FramebufferPoolImpl :2569
// {
static void FramebufferPoolImpl_build(uType* type)
{
    ::STRINGS[39] = uString::Const("Attempted to allocate ");
    ::STRINGS[40] = uString::Const("x");
    ::STRINGS[41] = uString::Const(" framebuffer, max is ");
    ::STRINGS[42] = uString::Const("framebuffer pinned while app going into the background");
    ::STRINGS[43] = uString::Const("Pool is leaking");
    ::TYPES[35] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Graphics::Framebuffer_typeof());
    ::TYPES[36] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Graphics::Framebuffer_typeof(), ::g::Uno::Int_typeof());
    ::TYPES[37] = ::g::Uno::Collections::HashSet_typeof()->MakeType(::g::Uno::Graphics::Framebuffer_typeof());
    ::TYPES[38] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::CacheFramebuffer_typeof());
    ::TYPES[3] = ::g::Uno::Action_typeof();
    ::TYPES[39] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::CacheFramebuffer_typeof());
    type->SetInterfaces(
        ::g::Fuse::Resources::ISoftDisposable_typeof(), offsetof(FramebufferPoolImpl_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::CacheFramebuffer_typeof()), offsetof(::g::Fuse::FramebufferPoolImpl, cacheFramebuffers), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::FramebufferPoolImpl, frame), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Graphics::Framebuffer_typeof()), offsetof(::g::Fuse::FramebufferPoolImpl, framebufferPool), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::FramebufferPoolImpl, framebuffersProvidedSinceLastCollect), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Graphics::Framebuffer_typeof(), ::g::Uno::Int_typeof()), offsetof(::g::Fuse::FramebufferPoolImpl, lastFrameUsed), 0,
        ::g::Uno::Collections::HashSet_typeof()->MakeType(::g::Uno::Graphics::Framebuffer_typeof()), offsetof(::g::Fuse::FramebufferPoolImpl, lockedFramebuffers), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::FramebufferPoolImpl, pixelsProvidedSinceLastCollect), 0);
}

FramebufferPoolImpl_type* FramebufferPoolImpl_typeof()
{
    static uSStrong<FramebufferPoolImpl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FramebufferPoolImpl);
    options.TypeSize = sizeof(FramebufferPoolImpl_type);
    type = (FramebufferPoolImpl_type*)uClassType::New("Fuse.FramebufferPoolImpl", options);
    type->fp_build_ = FramebufferPoolImpl_build;
    type->fp_ctor_ = (void*)FramebufferPoolImpl__New1_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))FramebufferPoolImpl__FuseResourcesISoftDisposableSoftDispose_fn;
    return type;
}

// public FramebufferPoolImpl() :2571
void FramebufferPoolImpl__ctor__fn(FramebufferPoolImpl* __this)
{
    __this->ctor_();
}

// private void CollectCacheFramebuffers() :2658
void FramebufferPoolImpl__CollectCacheFramebuffers_fn(FramebufferPoolImpl* __this)
{
    __this->CollectCacheFramebuffers();
}

// private framebuffer FindBuffer(int width, int height, Uno.Graphics.Format format, Uno.Graphics.FramebufferFlags flags) :2589
void FramebufferPoolImpl__FindBuffer_fn(FramebufferPoolImpl* __this, int* width, int* height, int* format, int* flags, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = __this->FindBuffer(*width, *height, *format, *flags);
}

// private void Fuse.Resources.ISoftDisposable.SoftDispose() :2690
void FramebufferPoolImpl__FuseResourcesISoftDisposableSoftDispose_fn(FramebufferPoolImpl* __this)
{
    uStackFrame __("Fuse.FramebufferPoolImpl", "Fuse.Resources.ISoftDisposable.SoftDispose()");
    ::g::Fuse::CacheFramebuffer* ret7;
    ::g::Uno::Graphics::Framebuffer* ret8;
    bool ret9;

    for (int i = 0; i < uPtr(__this->cacheFramebuffers)->Count(); i++)
    {
        ::g::Fuse::CacheFramebuffer* c = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->cacheFramebuffers), uCRef<int>(i), &ret7), ret7);

        if (uPtr(c)->IsPinned())
            U_THROW(::g::Uno::Exception::New2(::STRINGS[42/*"framebuffer...*/]));

        uPtr(c)->Collect();
        uPtr(__this->cacheFramebuffers)->RemoveAt(i--);
    }

    for (int i1 = 0; i1 < uPtr(__this->framebufferPool)->Count(); i1++)
    {
        ::g::Uno::Graphics::Framebuffer* fb = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->framebufferPool), uCRef<int>(i1), &ret8), ret8);
        uPtr(fb)->Dispose();
        uPtr(__this->framebufferPool)->RemoveAt(i1--);
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(__this->lastFrameUsed), fb, &ret9);
    }
}

// internal framebuffer Lock(int width, int height, Uno.Graphics.Format format, bool depth) :2712
void FramebufferPoolImpl__Lock_fn(FramebufferPoolImpl* __this, int* width, int* height, int* format, bool* depth, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = __this->Lock(*width, *height, *format, *depth);
}

// public FramebufferPoolImpl New() :2571
void FramebufferPoolImpl__New1_fn(FramebufferPoolImpl** __retval)
{
    *__retval = FramebufferPoolImpl::New1();
}

// internal void Register(Fuse.CacheFramebuffer cfb) :2630
void FramebufferPoolImpl__Register_fn(FramebufferPoolImpl* __this, ::g::Fuse::CacheFramebuffer* cfb)
{
    __this->Register(cfb);
}

// internal void Release(framebuffer fb) :2720
void FramebufferPoolImpl__Release_fn(FramebufferPoolImpl* __this, ::g::Uno::Graphics::Framebuffer* fb)
{
    __this->Release(fb);
}

// internal void UnRegister(Fuse.CacheFramebuffer cfb) :2651
void FramebufferPoolImpl__UnRegister_fn(FramebufferPoolImpl* __this, ::g::Fuse::CacheFramebuffer* cfb)
{
    __this->UnRegister(cfb);
}

// public void Update() :2730
void FramebufferPoolImpl__Update_fn(FramebufferPoolImpl* __this)
{
    __this->Update();
}

// public FramebufferPoolImpl() [instance] :2571
void FramebufferPoolImpl::ctor_()
{
    uStackFrame __("Fuse.FramebufferPoolImpl", ".ctor()");
    framebufferPool = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[35/*Uno.Collections.List<framebuffer>*/]));
    lastFrameUsed = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[36/*Uno.Collections.Dictionary<framebuffer, int>*/]));
    lockedFramebuffers = ((::g::Uno::Collections::HashSet*)::g::Uno::Collections::HashSet::New1(::TYPES[37/*Uno.Collections.HashSet<framebuffer>*/]));
    cacheFramebuffers = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[38/*Uno.Collections.List<Fuse.CacheFramebuffer>*/]));
    ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)FramebufferPoolImpl__Update_fn, this), 0);
    ::g::Fuse::Resources::DisposalManager::Add1((uObject*)this);
}

// private void CollectCacheFramebuffers() [instance] :2658
void FramebufferPoolImpl::CollectCacheFramebuffers()
{
    uStackFrame __("Fuse.FramebufferPoolImpl", "CollectCacheFramebuffers()");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::CacheFramebuffer*> > ret3;
    ::g::Fuse::CacheFramebuffer* ret4;

    if (uPtr(cacheFramebuffers)->Count() < 3)
        return;

    int sum = 0;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::CacheFramebuffer*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(cacheFramebuffers), &ret3), ret3); enum1.MoveNext(::TYPES[39/*Uno.Collections.List<Fuse.CacheFramebuffer>.Enumerator*/]); )
    {
        ::g::Fuse::CacheFramebuffer* cfb = enum1.Current(::TYPES[39/*Uno.Collections.List<Fuse.CacheFramebuffer>.Enumerator*/]);
        sum = sum + uPtr(cfb)->FramesSinceLastUse();
    }

    int avg = sum / uPtr(cacheFramebuffers)->Count();
    int limit = avg + 3;

    for (int i = 0; i < uPtr(cacheFramebuffers)->Count(); i++)
    {
        ::g::Fuse::CacheFramebuffer* c = (::g::Uno::Collections::List__get_Item_fn(uPtr(cacheFramebuffers), uCRef<int>(i), &ret4), ret4);

        if (!uPtr(c)->IsPinned() && (uPtr(c)->FramesSinceLastUse() >= limit))
        {
            uPtr(c)->Collect();
            uPtr(cacheFramebuffers)->RemoveAt(i--);
        }
    }

    framebuffersProvidedSinceLastCollect = 0;
    pixelsProvidedSinceLastCollect = 0;
}

// private framebuffer FindBuffer(int width, int height, Uno.Graphics.Format format, Uno.Graphics.FramebufferFlags flags) [instance] :2589
::g::Uno::Graphics::Framebuffer* FramebufferPoolImpl::FindBuffer(int width, int height, int format, int flags)
{
    uStackFrame __("Fuse.FramebufferPoolImpl", "FindBuffer(int,int,Uno.Graphics.Format,Uno.Graphics.FramebufferFlags)");
    ::g::Uno::Graphics::Framebuffer* ret5;
    bool ret6;
    width = ::g::Uno::Math::Max8(1, width);
    height = ::g::Uno::Math::Max8(1, height);

    for (int i = 0; i < uPtr(framebufferPool)->Count(); i++)
    {
        ::g::Uno::Graphics::Framebuffer* fb = (::g::Uno::Collections::List__get_Item_fn(uPtr(framebufferPool), uCRef<int>(i), &ret5), ret5);

        if (uPtr(fb)->Size().X != width)
            continue;

        if (uPtr(fb)->Size().Y != height)
            continue;

        if (uPtr(fb)->Format() != format)
            continue;

        if (uPtr(fb)->HasDepth() != ((flags & 1) == 1))
            continue;

        if (uPtr(fb)->SupportsMipmap() != ((flags & 2) == 2))
            continue;

        uPtr(framebufferPool)->RemoveAt(i);
        ::g::Uno::Collections::HashSet__Add_fn(uPtr(lockedFramebuffers), fb, &ret6);
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(lastFrameUsed), fb, uCRef<int>(frame));
        return fb;
    }

    int maxSize = ::g::Uno::Graphics::Texture2D::MaxSize();

    if ((width > maxSize) || (height > maxSize))
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[39/*"Attempted t...*/], uBox<int>(::g::Uno::Int_typeof(), width)), ::STRINGS[40/*"x"*/]), uBox<int>(::g::Uno::Int_typeof(), height)), ::STRINGS[41/*" framebuffe...*/]), uBox<int>(::g::Uno::Int_typeof(), maxSize)), ::STRINGS[40/*"x"*/]), uBox<int>(::g::Uno::Int_typeof(), maxSize))));

    double t = 0.0;
    ::g::Uno::Graphics::Framebuffer* buffer = ::g::Uno::Graphics::Framebuffer::New1(::g::Uno::Int2__New2(width, height), format, flags);
    return buffer;
}

// internal framebuffer Lock(int width, int height, Uno.Graphics.Format format, bool depth) [instance] :2712
::g::Uno::Graphics::Framebuffer* FramebufferPoolImpl::Lock(int width, int height, int format, bool depth)
{
    uStackFrame __("Fuse.FramebufferPoolImpl", "Lock(int,int,Uno.Graphics.Format,bool)");
    bool ret10;
    ::g::Uno::Graphics::Framebuffer* fb = FindBuffer(width, height, format, depth ? 1 : 0);
    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(lastFrameUsed), fb, uCRef<int>(frame));
    ::g::Uno::Collections::HashSet__Add_fn(uPtr(lockedFramebuffers), fb, &ret10);
    return fb;
}

// internal void Register(Fuse.CacheFramebuffer cfb) [instance] :2630
void FramebufferPoolImpl::Register(::g::Fuse::CacheFramebuffer* cfb)
{
    uStackFrame __("Fuse.FramebufferPoolImpl", "Register(Fuse.CacheFramebuffer)");
    framebuffersProvidedSinceLastCollect = (framebuffersProvidedSinceLastCollect + 1);
    pixelsProvidedSinceLastCollect = (pixelsProvidedSinceLastCollect + (uPtr(cfb)->Width() * uPtr(cfb)->Height()));
    ::g::Uno::Collections::List__Add_fn(uPtr(cacheFramebuffers), cfb);

    if (pixelsProvidedSinceLastCollect > 1000000)
        CollectCacheFramebuffers();
    else  if (framebuffersProvidedSinceLastCollect > 50)
        CollectCacheFramebuffers();
}

// internal void Release(framebuffer fb) [instance] :2720
void FramebufferPoolImpl::Release(::g::Uno::Graphics::Framebuffer* fb)
{
    uStackFrame __("Fuse.FramebufferPoolImpl", "Release(framebuffer)");
    bool ret11;
    bool ret12;

    if ((::g::Uno::Collections::HashSet__Contains_fn(uPtr(lockedFramebuffers), fb, &ret11), ret11))
    {
        ::g::Uno::Collections::HashSet__Remove_fn(uPtr(lockedFramebuffers), fb, &ret12);
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(lastFrameUsed), fb, uCRef<int>(frame));
        ::g::Uno::Collections::List__Add_fn(uPtr(framebufferPool), fb);
    }
}

// internal void UnRegister(Fuse.CacheFramebuffer cfb) [instance] :2651
void FramebufferPoolImpl::UnRegister(::g::Fuse::CacheFramebuffer* cfb)
{
    uStackFrame __("Fuse.FramebufferPoolImpl", "UnRegister(Fuse.CacheFramebuffer)");
    bool ret13;
    framebuffersProvidedSinceLastCollect = 0;
    ::g::Uno::Collections::List__Remove_fn(uPtr(cacheFramebuffers), cfb, &ret13);
}

// public void Update() [instance] :2730
void FramebufferPoolImpl::Update()
{
    uStackFrame __("Fuse.FramebufferPoolImpl", "Update()");
    ::g::Uno::Graphics::Framebuffer* ret14;
    bool ret15;
    bool ret16;
    bool contextBound = false;
    frame++;

    for (int i = 0; i < uPtr(framebufferPool)->Count(); i++)
    {
        ::g::Uno::Graphics::Framebuffer* fb = (::g::Uno::Collections::List__get_Item_fn(uPtr(framebufferPool), uCRef<int>(i), &ret14), ret14);
        int framesSinceUse;
        ::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(lastFrameUsed), fb, &framesSinceUse, &ret15);
        framesSinceUse = frame - framesSinceUse;

        if (framesSinceUse < 0)
            U_THROW(::g::Uno::Exception::New2(::STRINGS[43/*"Pool is lea...*/]));

        if (framesSinceUse > 1)
        {
            uPtr(fb)->Dispose();
            uPtr(framebufferPool)->RemoveAt(i--);
            ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(lastFrameUsed), fb, &ret16);
        }
    }
}

// public FramebufferPoolImpl New() [static] :2571
FramebufferPoolImpl* FramebufferPoolImpl::New1()
{
    FramebufferPoolImpl* obj2 = (FramebufferPoolImpl*)uNew(FramebufferPoolImpl_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// internal sealed class FrustumViewport :3104
// {
static void FrustumViewport_build(uType* type)
{
    ::TYPES[32] = ::g::Fuse::ICommonViewport_typeof();
    ::TYPES[34] = ::g::Fuse::IFrustum_typeof();
    type->SetFields(0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::FrustumViewport, LocalViewProjectionTransform), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::FrustumViewport, ProjectionTransform), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::FrustumViewport, ProjectionTransformInverse), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::FrustumViewport, ViewProjectionTransform), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::FrustumViewport, ViewProjectionTransformInverse), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::FrustumViewport, ViewTransform), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::FrustumViewport, ViewTransformInverse), 0);
}

uType* FrustumViewport_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(FrustumViewport);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FrustumViewport", options);
    type->fp_build_ = FrustumViewport_build;
    type->fp_ctor_ = (void*)FrustumViewport__New1_fn;
    return type;
}

// public generated FrustumViewport() :3104
void FrustumViewport__ctor__fn(FrustumViewport* __this)
{
    __this->ctor_();
}

// private float4x4 GetClipToVisualSpace(float2 size) :3124
void FrustumViewport__GetClipToVisualSpace_fn(FrustumViewport* __this, ::g::Uno::Float2* size, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetClipToVisualSpace(*size);
}

// public float4x4 GetFlatWorldToVisualTransform(float2 size) :3134
void FrustumViewport__GetFlatWorldToVisualTransform_fn(FrustumViewport* __this, ::g::Uno::Float2* size, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetFlatWorldToVisualTransform(*size);
}

// public static float2 LocalPlaneIntersection(Uno.Geometry.Ray local) :3177
void FrustumViewport__LocalPlaneIntersection_fn(::g::Uno::Geometry::Ray* local, ::g::Uno::Float2* __retval)
{
    *__retval = FrustumViewport::LocalPlaneIntersection(*local);
}

// public generated FrustumViewport New() :3104
void FrustumViewport__New1_fn(FrustumViewport** __retval)
{
    *__retval = FrustumViewport::New1();
}

// public static Uno.Geometry.Ray PointToWorldRay(Fuse.IViewport viewport, float4x4 viewProjectionInverse, float2 pointPos) :3148
void FrustumViewport__PointToWorldRay_fn(uObject* viewport, ::g::Uno::Float4x4* viewProjectionInverse, ::g::Uno::Float2* pointPos, ::g::Uno::Geometry::Ray* __retval)
{
    *__retval = FrustumViewport::PointToWorldRay(viewport, *viewProjectionInverse, *pointPos);
}

// public void Update(Fuse.IViewport viewport, Fuse.IFrustum frustum) :3113
void FrustumViewport__Update_fn(FrustumViewport* __this, uObject* viewport, uObject* frustum)
{
    __this->Update(viewport, frustum);
}

// public void Update(Fuse.IViewport viewport, Fuse.IFrustum frustum, Fuse.Visual where) :3141
void FrustumViewport__Update1_fn(FrustumViewport* __this, uObject* viewport, uObject* frustum, ::g::Fuse::Visual* where)
{
    __this->Update1(viewport, frustum, where);
}

// public static Uno.Geometry.Ray WorldToLocalRay(Fuse.IViewport viewport, Fuse.IViewport world, Uno.Geometry.Ray worldRay, Fuse.Visual where) :3163
void FrustumViewport__WorldToLocalRay_fn(uObject* viewport, uObject* world, ::g::Uno::Geometry::Ray* worldRay, ::g::Fuse::Visual* where, ::g::Uno::Geometry::Ray* __retval)
{
    *__retval = FrustumViewport::WorldToLocalRay(viewport, world, *worldRay, where);
}

// public generated FrustumViewport() [instance] :3104
void FrustumViewport::ctor_()
{
}

// private float4x4 GetClipToVisualSpace(float2 size) [instance] :3124
::g::Uno::Float4x4 FrustumViewport::GetClipToVisualSpace(::g::Uno::Float2 size)
{
    uStackFrame __("Fuse.FrustumViewport", "GetClipToVisualSpace(float2)");
    ::g::Uno::Float4x4 mx = ::g::Uno::Float4x4__Identity();
    mx.M11 = (size.X / 2.0f);
    mx.M22 = (-size.Y / 2.0f);
    mx.M41 = (size.X / 2.0f);
    mx.M42 = (size.Y / 2.0f);
    return mx;
}

// public float4x4 GetFlatWorldToVisualTransform(float2 size) [instance] :3134
::g::Uno::Float4x4 FrustumViewport::GetFlatWorldToVisualTransform(::g::Uno::Float2 size)
{
    uStackFrame __("Fuse.FrustumViewport", "GetFlatWorldToVisualTransform(float2)");
    ::g::Uno::Float4x4 mx = GetClipToVisualSpace(size);
    return ::g::Uno::Matrix::Mul8(ViewProjectionTransform, mx);
}

// public void Update(Fuse.IViewport viewport, Fuse.IFrustum frustum) [instance] :3113
void FrustumViewport::Update(uObject* viewport, uObject* frustum)
{
    uStackFrame __("Fuse.FrustumViewport", "Update(Fuse.IViewport,Fuse.IFrustum)");
    ProjectionTransform = ::g::Fuse::IFrustum::GetProjectionTransform(uInterface(uPtr(frustum), ::TYPES[34/*Fuse.IFrustum*/]), viewport);
    ProjectionTransformInverse = ::g::Fuse::IFrustum::GetProjectionTransformInverse(uInterface(frustum, ::TYPES[34/*Fuse.IFrustum*/]), viewport);
    ViewTransform = ::g::Fuse::IFrustum::GetViewTransform(uInterface(frustum, ::TYPES[34/*Fuse.IFrustum*/]), viewport);
    ViewTransformInverse = ::g::Fuse::IFrustum::GetViewTransformInverse(uInterface(frustum, ::TYPES[34/*Fuse.IFrustum*/]), viewport);
    ViewProjectionTransform = ::g::Uno::Matrix::Mul8(ViewTransform, ProjectionTransform);
    ViewProjectionTransformInverse = ::g::Uno::Matrix::Mul8(ProjectionTransformInverse, ViewTransformInverse);
}

// public void Update(Fuse.IViewport viewport, Fuse.IFrustum frustum, Fuse.Visual where) [instance] :3141
void FrustumViewport::Update1(uObject* viewport, uObject* frustum, ::g::Fuse::Visual* where)
{
    uStackFrame __("Fuse.FrustumViewport", "Update(Fuse.IViewport,Fuse.IFrustum,Fuse.Visual)");
    Update(viewport, frustum);
    LocalViewProjectionTransform = GetFlatWorldToVisualTransform(::g::Fuse::ICommonViewport::Size(uInterface(uPtr(viewport), ::TYPES[32/*Fuse.ICommonViewport*/])));
}

// public static float2 LocalPlaneIntersection(Uno.Geometry.Ray local) [static] :3177
::g::Uno::Float2 FrustumViewport::LocalPlaneIntersection(::g::Uno::Geometry::Ray local)
{
    uStackFrame __("Fuse.FrustumViewport", "LocalPlaneIntersection(Uno.Geometry.Ray)");
    float t = -local.Position.Z / local.Direction.Z;
    ::g::Uno::Float3 plane = ::g::Uno::Float3__op_Addition2(local.Position, ::g::Uno::Float3__op_Multiply1(local.Direction, t));
    return ::g::Uno::Float2__New2(plane.X, plane.Y);
}

// public generated FrustumViewport New() [static] :3104
FrustumViewport* FrustumViewport::New1()
{
    FrustumViewport* obj1 = (FrustumViewport*)uNew(FrustumViewport_typeof());
    obj1->ctor_();
    return obj1;
}

// public static Uno.Geometry.Ray PointToWorldRay(Fuse.IViewport viewport, float4x4 viewProjectionInverse, float2 pointPos) [static] :3148
::g::Uno::Geometry::Ray FrustumViewport::PointToWorldRay(uObject* viewport, ::g::Uno::Float4x4 viewProjectionInverse, ::g::Uno::Float2 pointPos)
{
    uStackFrame __("Fuse.FrustumViewport", "PointToWorldRay(Fuse.IViewport,float4x4,float2)");
    ::g::Uno::Float2 p = ::g::Uno::Float2__New2(((pointPos.X / ::g::Fuse::ICommonViewport::Size(uInterface(uPtr(viewport), ::TYPES[32/*Fuse.ICommonViewport*/])).X) * 2.0f) - 1.0f, ((pointPos.Y / ::g::Fuse::ICommonViewport::Size(uInterface(uPtr(viewport), ::TYPES[32/*Fuse.ICommonViewport*/])).Y) * -2.0f) + 1.0f);
    ::g::Uno::Float4x4 vpi = viewProjectionInverse;
    ::g::Uno::Float3 r0 = ::g::Uno::Vector::TransformCoordinate1(::g::Uno::Float3__New4(p, -1.0f), vpi);
    ::g::Uno::Float3 r1 = ::g::Uno::Vector::TransformCoordinate1(::g::Uno::Float3__New4(p, 1.0f), vpi);
    return ::g::Uno::Geometry::Ray__New1(r0, ::g::Uno::Vector::Normalize1(::g::Uno::Float3__op_Subtraction2(r1, r0)));
}

// public static Uno.Geometry.Ray WorldToLocalRay(Fuse.IViewport viewport, Fuse.IViewport world, Uno.Geometry.Ray worldRay, Fuse.Visual where) [static] :3163
::g::Uno::Geometry::Ray FrustumViewport::WorldToLocalRay(uObject* viewport, uObject* world, ::g::Uno::Geometry::Ray worldRay, ::g::Fuse::Visual* where)
{
    uStackFrame __("Fuse.FrustumViewport", "WorldToLocalRay(Fuse.IViewport,Fuse.IViewport,Uno.Geometry.Ray,Fuse.Visual)");

    if (where == world)
        return worldRay;

    ::g::Uno::Float4x4 wi = uPtr(where)->WorldTransformInverse();
    ::g::Uno::Float3 r0 = ::g::Uno::Vector::TransformCoordinate1(worldRay.Position, wi);
    ::g::Uno::Float3 r1 = ::g::Uno::Vector::TransformCoordinate1(::g::Uno::Float3__op_Addition2(worldRay.Position, worldRay.Direction), wi);
    return ::g::Uno::Geometry::Ray__New1(r0, ::g::Uno::Vector::Normalize1(::g::Uno::Float3__op_Subtraction2(r1, r0)));
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// private sealed class TranslationModes.HeightMode :10185
// {
static void TranslationModes__HeightMode_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(::g::Fuse::TranslationModes__SizeMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(::g::Fuse::TranslationModes__SizeMode_type, interface1));
}

::g::Fuse::TranslationModes__SizeMode_type* TranslationModes__HeightMode_typeof()
{
    static uSStrong< ::g::Fuse::TranslationModes__SizeMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::TranslationModes__SizeMode_typeof();
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TranslationModes__HeightMode);
    options.TypeSize = sizeof(::g::Fuse::TranslationModes__SizeMode_type);
    type = (::g::Fuse::TranslationModes__SizeMode_type*)uClassType::New("Fuse.TranslationModes.HeightMode", options);
    type->fp_build_ = TranslationModes__HeightMode_build;
    type->fp_ctor_ = (void*)TranslationModes__HeightMode__New2_fn;
    type->fp_GetAbsVector = (void(*)(::g::Fuse::TranslationModes__SizeMode*, ::g::Fuse::Translation*, ::g::Uno::Float3*))TranslationModes__HeightMode__GetAbsVector_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))TranslationModes__HeightMode__GetAbsVector_fn;
    type->interface1.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))::g::Fuse::TranslationModes__SizeMode__Subscribe_fn;
    type->interface1.fp_Unsubscribe = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::TranslationModes__SizeMode__Unsubscribe_fn;
    return type;
}

// public generated HeightMode() :10185
void TranslationModes__HeightMode__ctor_1_fn(TranslationModes__HeightMode* __this)
{
    __this->ctor_1();
}

// public override sealed float3 GetAbsVector(Fuse.Translation t) :10187
void TranslationModes__HeightMode__GetAbsVector_fn(TranslationModes__HeightMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval)
{
    uStackFrame __("Fuse.TranslationModes.HeightMode", "GetAbsVector(Fuse.Translation)");
    return *__retval = ::g::Uno::Float3__op_Multiply(::g::Fuse::TranslationModes::SizeOf(uPtr(t)->RelativeNode()).Y, uPtr(t)->Vector()), void();
}

// public generated HeightMode New() :10185
void TranslationModes__HeightMode__New2_fn(TranslationModes__HeightMode** __retval)
{
    *__retval = TranslationModes__HeightMode::New2();
}

// public generated HeightMode() [instance] :10185
void TranslationModes__HeightMode::ctor_1()
{
    uStackFrame __("Fuse.TranslationModes.HeightMode", ".ctor()");
    ctor_();
}

// public generated HeightMode New() [static] :10185
TranslationModes__HeightMode* TranslationModes__HeightMode::New2()
{
    TranslationModes__HeightMode* obj1 = (TranslationModes__HeightMode*)uNew(TranslationModes__HeightMode_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public delegate void HitTestCallback(Fuse.HitTestResult result) :2910
uDelegateType* HitTestCallback_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.HitTestCallback", 1, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Fuse::HitTestResult_typeof());
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public sealed class HitTestContext :2923
// {
static void HitTestContext_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::HitTestCallback_typeof(), offsetof(::g::Fuse::HitTestContext, _callback), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::HitTestContext, _localPoint), 0,
        ::g::Uno::Geometry::Ray_typeof(), offsetof(::g::Fuse::HitTestContext, _worldRay), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::HitTestContext, _WindowPoint), 0);
    type->Reflection.SetFunctions(12,
        new uFunction("get_Callback", NULL, (void*)HitTestContext__get_Callback_fn, 0, false, ::g::Fuse::HitTestCallback_typeof(), 0),
        new uFunction("Dispose", NULL, (void*)HitTestContext__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Hit", NULL, (void*)HitTestContext__Hit_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("Hit", NULL, (void*)HitTestContext__Hit1_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("get_LocalPoint", NULL, (void*)HitTestContext__get_LocalPoint_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)HitTestContext__New1_fn, 0, true, HitTestContext_typeof(), 2, ::g::Uno::Float2_typeof(), ::g::Fuse::HitTestCallback_typeof()),
        new uFunction("PopLocalPoint", NULL, (void*)HitTestContext__PopLocalPoint_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("PopWorldRay", NULL, (void*)HitTestContext__PopWorldRay_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Geometry::Ray_typeof()),
        new uFunction("PushLocalPoint", NULL, (void*)HitTestContext__PushLocalPoint_fn, 0, false, ::g::Uno::Float2_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("PushWorldRay", NULL, (void*)HitTestContext__PushWorldRay_fn, 0, false, ::g::Uno::Geometry::Ray_typeof(), 1, ::g::Uno::Geometry::Ray_typeof()),
        new uFunction("get_WindowPoint", NULL, (void*)HitTestContext__get_WindowPoint_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_WorldRay", NULL, (void*)HitTestContext__get_WorldRay_fn, 0, false, ::g::Uno::Geometry::Ray_typeof(), 0));
}

uType* HitTestContext_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(HitTestContext);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.HitTestContext", options);
    type->fp_build_ = HitTestContext_build;
    return type;
}

// public HitTestContext(float2 windowPoint, Fuse.HitTestCallback callback) :2985
void HitTestContext__ctor__fn(HitTestContext* __this, ::g::Uno::Float2* windowPoint, uDelegate* callback)
{
    __this->ctor_(*windowPoint, callback);
}

// public Fuse.HitTestCallback get_Callback() :2960
void HitTestContext__get_Callback_fn(HitTestContext* __this, uDelegate** __retval)
{
    *__retval = __this->Callback();
}

// public void Dispose() :2992
void HitTestContext__Dispose_fn(HitTestContext* __this)
{
    __this->Dispose();
}

// public void Hit(Fuse.Visual obj) :2963
void HitTestContext__Hit_fn(HitTestContext* __this, ::g::Fuse::Visual* obj)
{
    __this->Hit(obj);
}

// public void Hit(Fuse.Visual obj, float hitDistance) :2973
void HitTestContext__Hit1_fn(HitTestContext* __this, ::g::Fuse::Visual* obj, float* hitDistance)
{
    __this->Hit1(obj, *hitDistance);
}

// public float2 get_LocalPoint() :2928
void HitTestContext__get_LocalPoint_fn(HitTestContext* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->LocalPoint();
}

// public HitTestContext New(float2 windowPoint, Fuse.HitTestCallback callback) :2985
void HitTestContext__New1_fn(::g::Uno::Float2* windowPoint, uDelegate* callback, HitTestContext** __retval)
{
    *__retval = HitTestContext::New1(*windowPoint, callback);
}

// public void PopLocalPoint(float2 lp) :2937
void HitTestContext__PopLocalPoint_fn(HitTestContext* __this, ::g::Uno::Float2* lp)
{
    __this->PopLocalPoint(*lp);
}

// public void PopWorldRay(Uno.Geometry.Ray o) :2952
void HitTestContext__PopWorldRay_fn(HitTestContext* __this, ::g::Uno::Geometry::Ray* o)
{
    __this->PopWorldRay(*o);
}

// public float2 PushLocalPoint(float2 lp) :2930
void HitTestContext__PushLocalPoint_fn(HitTestContext* __this, ::g::Uno::Float2* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PushLocalPoint(*lp);
}

// public Uno.Geometry.Ray PushWorldRay(Uno.Geometry.Ray n) :2945
void HitTestContext__PushWorldRay_fn(HitTestContext* __this, ::g::Uno::Geometry::Ray* n, ::g::Uno::Geometry::Ray* __retval)
{
    *__retval = __this->PushWorldRay(*n);
}

// public generated float2 get_WindowPoint() :2925
void HitTestContext__get_WindowPoint_fn(HitTestContext* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->WindowPoint();
}

// private generated void set_WindowPoint(float2 value) :2925
void HitTestContext__set_WindowPoint_fn(HitTestContext* __this, ::g::Uno::Float2* value)
{
    __this->WindowPoint(*value);
}

// public Uno.Geometry.Ray get_WorldRay() :2943
void HitTestContext__get_WorldRay_fn(HitTestContext* __this, ::g::Uno::Geometry::Ray* __retval)
{
    *__retval = __this->WorldRay();
}

// public HitTestContext(float2 windowPoint, Fuse.HitTestCallback callback) [instance] :2985
void HitTestContext::ctor_(::g::Uno::Float2 windowPoint, uDelegate* callback)
{
    uStackFrame __("Fuse.HitTestContext", ".ctor(float2,Fuse.HitTestCallback)");
    WindowPoint(windowPoint);
    _localPoint = windowPoint;
    _callback = callback;
}

// public Fuse.HitTestCallback get_Callback() [instance] :2960
uDelegate* HitTestContext::Callback()
{
    uStackFrame __("Fuse.HitTestContext", "get_Callback()");
    return _callback;
}

// public void Dispose() [instance] :2992
void HitTestContext::Dispose()
{
    uStackFrame __("Fuse.HitTestContext", "Dispose()");
    _callback = NULL;
}

// public void Hit(Fuse.Visual obj) [instance] :2963
void HitTestContext::Hit(::g::Fuse::Visual* obj)
{
    uStackFrame __("Fuse.HitTestContext", "Hit(Fuse.Visual)");
    ::g::Fuse::HitTestResult* collection1;

    if (::g::Uno::Delegate::op_Inequality(Callback(), NULL))
        uPtr(Callback())->InvokeVoid((collection1 = ::g::Fuse::HitTestResult::New1(), uPtr(collection1)->HitObject(obj), obj, collection1));
}

// public void Hit(Fuse.Visual obj, float hitDistance) [instance] :2973
void HitTestContext::Hit1(::g::Fuse::Visual* obj, float hitDistance)
{
    uStackFrame __("Fuse.HitTestContext", "Hit(Fuse.Visual,float)");
    ::g::Fuse::HitTestResult* collection2;

    if (::g::Uno::Delegate::op_Inequality(Callback(), NULL))
        uPtr(Callback())->InvokeVoid((collection2 = ::g::Fuse::HitTestResult::New1(), uPtr(collection2)->HitObject(obj), obj, uPtr(collection2)->HasHitDistance(true), true, uPtr(collection2)->HitDistance(hitDistance), hitDistance, collection2));
}

// public float2 get_LocalPoint() [instance] :2928
::g::Uno::Float2 HitTestContext::LocalPoint()
{
    uStackFrame __("Fuse.HitTestContext", "get_LocalPoint()");
    return _localPoint;
}

// public void PopLocalPoint(float2 lp) [instance] :2937
void HitTestContext::PopLocalPoint(::g::Uno::Float2 lp)
{
    uStackFrame __("Fuse.HitTestContext", "PopLocalPoint(float2)");
    _localPoint = lp;
}

// public void PopWorldRay(Uno.Geometry.Ray o) [instance] :2952
void HitTestContext::PopWorldRay(::g::Uno::Geometry::Ray o)
{
    uStackFrame __("Fuse.HitTestContext", "PopWorldRay(Uno.Geometry.Ray)");
    _worldRay = o;
}

// public float2 PushLocalPoint(float2 lp) [instance] :2930
::g::Uno::Float2 HitTestContext::PushLocalPoint(::g::Uno::Float2 lp)
{
    uStackFrame __("Fuse.HitTestContext", "PushLocalPoint(float2)");
    ::g::Uno::Float2 r = _localPoint;
    _localPoint = lp;
    return r;
}

// public Uno.Geometry.Ray PushWorldRay(Uno.Geometry.Ray n) [instance] :2945
::g::Uno::Geometry::Ray HitTestContext::PushWorldRay(::g::Uno::Geometry::Ray n)
{
    uStackFrame __("Fuse.HitTestContext", "PushWorldRay(Uno.Geometry.Ray)");
    ::g::Uno::Geometry::Ray r = _worldRay;
    _worldRay = n;
    return r;
}

// public generated float2 get_WindowPoint() [instance] :2925
::g::Uno::Float2 HitTestContext::WindowPoint()
{
    uStackFrame __("Fuse.HitTestContext", "get_WindowPoint()");
    return _WindowPoint;
}

// private generated void set_WindowPoint(float2 value) [instance] :2925
void HitTestContext::WindowPoint(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.HitTestContext", "set_WindowPoint(float2)");
    _WindowPoint = value;
}

// public Uno.Geometry.Ray get_WorldRay() [instance] :2943
::g::Uno::Geometry::Ray HitTestContext::WorldRay()
{
    uStackFrame __("Fuse.HitTestContext", "get_WorldRay()");
    return _worldRay;
}

// public HitTestContext New(float2 windowPoint, Fuse.HitTestCallback callback) [static] :2985
HitTestContext* HitTestContext::New1(::g::Uno::Float2 windowPoint, uDelegate* callback)
{
    HitTestContext* obj3 = (HitTestContext*)uNew(HitTestContext_typeof());
    obj3->ctor_(windowPoint, callback);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// private sealed class Visual.HitTestRecord :5834
// {
static void Visual__HitTestRecord_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Visual__HitTestRecord, Visual), 0);
}

uType* Visual__HitTestRecord_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Visual__HitTestRecord);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Visual.HitTestRecord", options);
    type->fp_build_ = Visual__HitTestRecord_build;
    type->fp_ctor_ = (void*)Visual__HitTestRecord__New1_fn;
    return type;
}

// public generated HitTestRecord() :5834
void Visual__HitTestRecord__ctor__fn(Visual__HitTestRecord* __this)
{
    __this->ctor_();
}

// public void HitTestCallback(Fuse.HitTestResult result) :5837
void Visual__HitTestRecord__HitTestCallback_fn(Visual__HitTestRecord* __this, ::g::Fuse::HitTestResult* result)
{
    __this->HitTestCallback(result);
}

// public generated HitTestRecord New() :5834
void Visual__HitTestRecord__New1_fn(Visual__HitTestRecord** __retval)
{
    *__retval = Visual__HitTestRecord::New1();
}

// public generated HitTestRecord() [instance] :5834
void Visual__HitTestRecord::ctor_()
{
}

// public void HitTestCallback(Fuse.HitTestResult result) [instance] :5837
void Visual__HitTestRecord::HitTestCallback(::g::Fuse::HitTestResult* result)
{
    uStackFrame __("Fuse.Visual.HitTestRecord", "HitTestCallback(Fuse.HitTestResult)");

    if (Visual == NULL)
        Visual = uPtr(result)->HitObject();
}

// public generated HitTestRecord New() [static] :5834
Visual__HitTestRecord* Visual__HitTestRecord::New1()
{
    Visual__HitTestRecord* obj1 = (Visual__HitTestRecord*)uNew(Visual__HitTestRecord_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public sealed class HitTestResult :2914
// {
static void HitTestResult_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::HitTestResult, _HasHitDistance), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::HitTestResult, _HitDistance), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::HitTestResult, _HitObject), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_HasHitDistance", NULL, (void*)HitTestResult__get_HasHitDistance_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_HitDistance", NULL, (void*)HitTestResult__get_HitDistance_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("get_HitObject", NULL, (void*)HitTestResult__get_HitObject_fn, 0, false, ::g::Fuse::Visual_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)HitTestResult__New1_fn, 0, true, HitTestResult_typeof(), 0));
}

uType* HitTestResult_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(HitTestResult);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.HitTestResult", options);
    type->fp_build_ = HitTestResult_build;
    type->fp_ctor_ = (void*)HitTestResult__New1_fn;
    return type;
}

// public generated HitTestResult() :2914
void HitTestResult__ctor__fn(HitTestResult* __this)
{
    __this->ctor_();
}

// public generated bool get_HasHitDistance() :2916
void HitTestResult__get_HasHitDistance_fn(HitTestResult* __this, bool* __retval)
{
    *__retval = __this->HasHitDistance();
}

// internal generated void set_HasHitDistance(bool value) :2916
void HitTestResult__set_HasHitDistance_fn(HitTestResult* __this, bool* value)
{
    __this->HasHitDistance(*value);
}

// public generated float get_HitDistance() :2917
void HitTestResult__get_HitDistance_fn(HitTestResult* __this, float* __retval)
{
    *__retval = __this->HitDistance();
}

// internal generated void set_HitDistance(float value) :2917
void HitTestResult__set_HitDistance_fn(HitTestResult* __this, float* value)
{
    __this->HitDistance(*value);
}

// public generated Fuse.Visual get_HitObject() :2918
void HitTestResult__get_HitObject_fn(HitTestResult* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->HitObject();
}

// internal generated void set_HitObject(Fuse.Visual value) :2918
void HitTestResult__set_HitObject_fn(HitTestResult* __this, ::g::Fuse::Visual* value)
{
    __this->HitObject(value);
}

// public generated HitTestResult New() :2914
void HitTestResult__New1_fn(HitTestResult** __retval)
{
    *__retval = HitTestResult::New1();
}

// public generated HitTestResult() [instance] :2914
void HitTestResult::ctor_()
{
}

// public generated bool get_HasHitDistance() [instance] :2916
bool HitTestResult::HasHitDistance()
{
    uStackFrame __("Fuse.HitTestResult", "get_HasHitDistance()");
    return _HasHitDistance;
}

// internal generated void set_HasHitDistance(bool value) [instance] :2916
void HitTestResult::HasHitDistance(bool value)
{
    uStackFrame __("Fuse.HitTestResult", "set_HasHitDistance(bool)");
    _HasHitDistance = value;
}

// public generated float get_HitDistance() [instance] :2917
float HitTestResult::HitDistance()
{
    uStackFrame __("Fuse.HitTestResult", "get_HitDistance()");
    return _HitDistance;
}

// internal generated void set_HitDistance(float value) [instance] :2917
void HitTestResult::HitDistance(float value)
{
    uStackFrame __("Fuse.HitTestResult", "set_HitDistance(float)");
    _HitDistance = value;
}

// public generated Fuse.Visual get_HitObject() [instance] :2918
::g::Fuse::Visual* HitTestResult::HitObject()
{
    uStackFrame __("Fuse.HitTestResult", "get_HitObject()");
    return _HitObject;
}

// internal generated void set_HitObject(Fuse.Visual value) [instance] :2918
void HitTestResult::HitObject(::g::Fuse::Visual* value)
{
    uStackFrame __("Fuse.HitTestResult", "set_HitObject(Fuse.Visual)");
    _HitObject = value;
}

// public generated HitTestResult New() [static] :2914
HitTestResult* HitTestResult::New1()
{
    HitTestResult* obj1 = (HitTestResult*)uNew(HitTestResult_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// internal enum Visual.HitTestTransformMode :5764
uEnumType* Visual__HitTestTransformMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Visual.HitTestTransformMode", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "LocalPoint", 0LL,
        "WorldRay", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public abstract interface IActualPlacement :10103
// {
uInterfaceType* IActualPlacement_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IActualPlacement", 0, 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_ActualPosition", NULL, NULL, offsetof(IActualPlacement, fp_get_ActualPosition), false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("get_ActualSize", NULL, NULL, offsetof(IActualPlacement, fp_get_ActualSize), false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("add_Placed", NULL, NULL, offsetof(IActualPlacement, fp_add_Placed), false, uVoid_typeof(), 1, ::g::Fuse::PlacedHandler_typeof()),
        new uFunction("remove_Placed", NULL, NULL, offsetof(IActualPlacement, fp_remove_Placed), false, uVoid_typeof(), 1, ::g::Fuse::PlacedHandler_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public abstract interface IBeginRemoveVisualListener :4867
// {
uInterfaceType* IBeginRemoveVisualListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IBeginRemoveVisualListener", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("OnBeginRemoveVisual", NULL, NULL, offsetof(IBeginRemoveVisualListener, fp_OnBeginRemoveVisual), false, uVoid_typeof(), 1, ::g::Fuse::PendingRemoveVisual_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public abstract interface ICommonViewport :3026
// {
uInterfaceType* ICommonViewport_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.ICommonViewport", 0, 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_PixelSize", NULL, NULL, offsetof(ICommonViewport, fp_get_PixelSize), false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_PixelsPerPoint", NULL, NULL, offsetof(ICommonViewport, fp_get_PixelsPerPoint), false, ::g::Uno::Float_typeof(), 0),
        new uFunction("get_Size", NULL, NULL, offsetof(ICommonViewport, fp_get_Size), false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_ViewTransform", NULL, NULL, offsetof(ICommonViewport, fp_get_ViewTransform), false, ::g::Uno::Float4x4_typeof(), 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// internal abstract interface IDataProvider :7490
// {
uInterfaceType* IDataProvider_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IDataProvider", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.40.8/$.uno
// --------------------------------------------------------

// internal abstract interface IDeferred :355
// {
uInterfaceType* IDeferred_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IDeferred", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// private sealed class ScalingModes.IdentityMode :9168
// {
static void ScalingModes__IdentityMode_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::IScalingMode_typeof(), offsetof(ScalingModes__IdentityMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(ScalingModes__IdentityMode_type, interface1));
}

ScalingModes__IdentityMode_type* ScalingModes__IdentityMode_typeof()
{
    static uSStrong<ScalingModes__IdentityMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ScalingModes__IdentityMode);
    options.TypeSize = sizeof(ScalingModes__IdentityMode_type);
    type = (ScalingModes__IdentityMode_type*)uClassType::New("Fuse.ScalingModes.IdentityMode", options);
    type->fp_build_ = ScalingModes__IdentityMode_build;
    type->fp_ctor_ = (void*)ScalingModes__IdentityMode__New1_fn;
    type->interface0.fp_GetScaleVector = (void(*)(uObject*, ::g::Fuse::Scaling*, ::g::Uno::Float3*))ScalingModes__IdentityMode__GetScaleVector_fn;
    type->interface1.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))ScalingModes__IdentityMode__Subscribe_fn;
    type->interface1.fp_Unsubscribe = (void(*)(uObject*, uObject*, uObject*))ScalingModes__IdentityMode__Unsubscribe_fn;
    return type;
}

// public generated IdentityMode() :9168
void ScalingModes__IdentityMode__ctor__fn(ScalingModes__IdentityMode* __this)
{
    __this->ctor_();
}

// public float3 GetScaleVector(Fuse.Scaling t) :9170
void ScalingModes__IdentityMode__GetScaleVector_fn(ScalingModes__IdentityMode* __this, ::g::Fuse::Scaling* t, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetScaleVector(t);
}

// public generated IdentityMode New() :9168
void ScalingModes__IdentityMode__New1_fn(ScalingModes__IdentityMode** __retval)
{
    *__retval = ScalingModes__IdentityMode::New1();
}

// public object Subscribe(Fuse.ITransformRelative transform) :9172
void ScalingModes__IdentityMode__Subscribe_fn(ScalingModes__IdentityMode* __this, uObject* transform, uObject** __retval)
{
    *__retval = __this->Subscribe(transform);
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) :9173
void ScalingModes__IdentityMode__Unsubscribe_fn(ScalingModes__IdentityMode* __this, uObject* transform, uObject* sub)
{
    __this->Unsubscribe(transform, sub);
}

// public generated IdentityMode() [instance] :9168
void ScalingModes__IdentityMode::ctor_()
{
}

// public float3 GetScaleVector(Fuse.Scaling t) [instance] :9170
::g::Uno::Float3 ScalingModes__IdentityMode::GetScaleVector(::g::Fuse::Scaling* t)
{
    uStackFrame __("Fuse.ScalingModes.IdentityMode", "GetScaleVector(Fuse.Scaling)");
    return uPtr(t)->Vector();
}

// public object Subscribe(Fuse.ITransformRelative transform) [instance] :9172
uObject* ScalingModes__IdentityMode::Subscribe(uObject* transform)
{
    uStackFrame __("Fuse.ScalingModes.IdentityMode", "Subscribe(Fuse.ITransformRelative)");
    return NULL;
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) [instance] :9173
void ScalingModes__IdentityMode::Unsubscribe(uObject* transform, uObject* sub)
{
}

// public generated IdentityMode New() [static] :9168
ScalingModes__IdentityMode* ScalingModes__IdentityMode::New1()
{
    ScalingModes__IdentityMode* obj1 = (ScalingModes__IdentityMode*)uNew(ScalingModes__IdentityMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public abstract interface IFlush :840
// {
uInterfaceType* IFlush_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IFlush", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Flush", NULL, NULL, offsetof(IFlush, fp_Flush), false, uVoid_typeof(), 1, ::g::Fuse::DrawContext_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public abstract interface IFrustum :3007
// {
uInterfaceType* IFrustum_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IFrustum", 0, 0);
    type->Reflection.SetFunctions(6,
        new uFunction("GetDepthRange", NULL, NULL, offsetof(IFrustum, fp_GetDepthRange), false, ::g::Uno::Float2_typeof(), 1, ::g::Fuse::ICommonViewport_typeof()),
        new uFunction("GetProjectionTransform", NULL, NULL, offsetof(IFrustum, fp_GetProjectionTransform), false, ::g::Uno::Float4x4_typeof(), 1, ::g::Fuse::ICommonViewport_typeof()),
        new uFunction("GetProjectionTransformInverse", NULL, NULL, offsetof(IFrustum, fp_GetProjectionTransformInverse), false, ::g::Uno::Float4x4_typeof(), 1, ::g::Fuse::ICommonViewport_typeof()),
        new uFunction("GetViewTransform", NULL, NULL, offsetof(IFrustum, fp_GetViewTransform), false, ::g::Uno::Float4x4_typeof(), 1, ::g::Fuse::ICommonViewport_typeof()),
        new uFunction("GetViewTransformInverse", NULL, NULL, offsetof(IFrustum, fp_GetViewTransformInverse), false, ::g::Uno::Float4x4_typeof(), 1, ::g::Fuse::ICommonViewport_typeof()),
        new uFunction("GetWorldPosition", NULL, NULL, offsetof(IFrustum, fp_GetWorldPosition), false, ::g::Uno::Float3_typeof(), 1, ::g::Fuse::ICommonViewport_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/resources/$.uno
// -------------------------------------------------------------

// internal abstract interface ILoading :235
// {
uInterfaceType* ILoading_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.ILoading", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/resources/$.uno
// -------------------------------------------------------------

// internal static class ILoadingStatic :240
// {
// static ILoadingStatic() :240
static void ILoadingStatic__cctor__fn(uType* __type)
{
    ILoadingStatic::IsLoadingName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[44/*"IsLoading"*/]);
}

static void ILoadingStatic_build(uType* type)
{
    ::STRINGS[44] = uString::Const("IsLoading");
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::ILoadingStatic::IsLoadingName_, uFieldFlagsStatic);
}

uClassType* ILoadingStatic_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.ILoadingStatic", options);
    type->fp_build_ = ILoadingStatic_build;
    type->fp_cctor_ = ILoadingStatic__cctor__fn;
    return type;
}

::g::Uno::UX::Selector ILoadingStatic::IsLoadingName_;
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public abstract interface INameListener :9308
// {
uInterfaceType* INameListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.INameListener", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("OnNameChanged", NULL, NULL, offsetof(INameListener, fp_OnNameChanged), false, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Uno::UX::Selector_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// internal sealed class InheritViewport :3234
// {
static void InheritViewport_build(uType* type)
{
    ::TYPES[32] = ::g::Fuse::ICommonViewport_typeof();
    ::TYPES[27] = ::g::Fuse::IRenderViewport_typeof();
    type->SetInterfaces(
        ::g::Fuse::IRenderViewport_typeof(), offsetof(InheritViewport_type, interface0),
        ::g::Fuse::ICommonViewport_typeof(), offsetof(InheritViewport_type, interface1));
    type->SetFields(0,
        ::g::Fuse::IRenderViewport_typeof(), offsetof(::g::Fuse::InheritViewport, _baseView), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::InheritViewport, _child), 0,
        ::g::Fuse::FrustumViewport_typeof(), offsetof(::g::Fuse::InheritViewport, _childView), 0);
}

InheritViewport_type* InheritViewport_typeof()
{
    static uSStrong<InheritViewport_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(InheritViewport);
    options.TypeSize = sizeof(InheritViewport_type);
    type = (InheritViewport_type*)uClassType::New("Fuse.InheritViewport", options);
    type->fp_build_ = InheritViewport_build;
    type->interface0.fp_get_ProjectionTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))InheritViewport__get_ProjectionTransform_fn;
    type->interface0.fp_get_ViewProjectionTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))InheritViewport__get_ViewProjectionTransform_fn;
    type->interface0.fp_get_ViewOrigin = (void(*)(uObject*, ::g::Uno::Float3*))InheritViewport__get_ViewOrigin_fn;
    type->interface0.fp_get_ViewRange = (void(*)(uObject*, ::g::Uno::Float2*))InheritViewport__get_ViewRange_fn;
    type->interface1.fp_get_PixelsPerPoint = (void(*)(uObject*, float*))InheritViewport__get_PixelsPerPoint_fn;
    type->interface1.fp_get_Size = (void(*)(uObject*, ::g::Uno::Float2*))InheritViewport__get_Size_fn;
    type->interface1.fp_get_PixelSize = (void(*)(uObject*, ::g::Uno::Float2*))InheritViewport__get_PixelSize_fn;
    type->interface1.fp_get_ViewTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))InheritViewport__get_ViewTransform_fn;
    return type;
}

// public InheritViewport(Fuse.IRenderViewport baseView, Fuse.FrustumViewport childView, Fuse.Visual child) :3240
void InheritViewport__ctor__fn(InheritViewport* __this, uObject* baseView, ::g::Fuse::FrustumViewport* childView, ::g::Fuse::Visual* child)
{
    __this->ctor_(baseView, childView, child);
}

// public InheritViewport New(Fuse.IRenderViewport baseView, Fuse.FrustumViewport childView, Fuse.Visual child) :3240
void InheritViewport__New1_fn(uObject* baseView, ::g::Fuse::FrustumViewport* childView, ::g::Fuse::Visual* child, InheritViewport** __retval)
{
    *__retval = InheritViewport::New1(baseView, childView, child);
}

// public float2 get_PixelSize() :3251
void InheritViewport__get_PixelSize_fn(InheritViewport* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PixelSize();
}

// public float get_PixelsPerPoint() :3246
void InheritViewport__get_PixelsPerPoint_fn(InheritViewport* __this, float* __retval)
{
    *__retval = __this->PixelsPerPoint();
}

// public float4x4 get_ProjectionTransform() :3253
void InheritViewport__get_ProjectionTransform_fn(InheritViewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ProjectionTransform();
}

// public float2 get_Size() :3249
void InheritViewport__get_Size_fn(InheritViewport* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// public float3 get_ViewOrigin() :3263
void InheritViewport__get_ViewOrigin_fn(InheritViewport* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->ViewOrigin();
}

// public float4x4 get_ViewProjectionTransform() :3256
void InheritViewport__get_ViewProjectionTransform_fn(InheritViewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ViewProjectionTransform();
}

// public float2 get_ViewRange() :3264
void InheritViewport__get_ViewRange_fn(InheritViewport* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ViewRange();
}

// public float4x4 get_ViewTransform() :3262
void InheritViewport__get_ViewTransform_fn(InheritViewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ViewTransform();
}

// public InheritViewport(Fuse.IRenderViewport baseView, Fuse.FrustumViewport childView, Fuse.Visual child) [instance] :3240
void InheritViewport::ctor_(uObject* baseView, ::g::Fuse::FrustumViewport* childView, ::g::Fuse::Visual* child)
{
    uStackFrame __("Fuse.InheritViewport", ".ctor(Fuse.IRenderViewport,Fuse.FrustumViewport,Fuse.Visual)");
    _baseView = baseView;
    _childView = childView;
    _child = child;
}

// public float2 get_PixelSize() [instance] :3251
::g::Uno::Float2 InheritViewport::PixelSize()
{
    uStackFrame __("Fuse.InheritViewport", "get_PixelSize()");
    return ::g::Fuse::ICommonViewport::PixelSize(uInterface(uPtr(_baseView), ::TYPES[32/*Fuse.ICommonViewport*/]));
}

// public float get_PixelsPerPoint() [instance] :3246
float InheritViewport::PixelsPerPoint()
{
    uStackFrame __("Fuse.InheritViewport", "get_PixelsPerPoint()");
    return ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(_baseView), ::TYPES[32/*Fuse.ICommonViewport*/]));
}

// public float4x4 get_ProjectionTransform() [instance] :3253
::g::Uno::Float4x4 InheritViewport::ProjectionTransform()
{
    uStackFrame __("Fuse.InheritViewport", "get_ProjectionTransform()");
    return ::g::Fuse::IRenderViewport::ProjectionTransform(uInterface(uPtr(_baseView), ::TYPES[27/*Fuse.IRenderViewport*/]));
}

// public float2 get_Size() [instance] :3249
::g::Uno::Float2 InheritViewport::Size()
{
    uStackFrame __("Fuse.InheritViewport", "get_Size()");
    return ::g::Fuse::ICommonViewport::Size(uInterface(uPtr(_baseView), ::TYPES[32/*Fuse.ICommonViewport*/]));
}

// public float3 get_ViewOrigin() [instance] :3263
::g::Uno::Float3 InheritViewport::ViewOrigin()
{
    uStackFrame __("Fuse.InheritViewport", "get_ViewOrigin()");
    return ::g::Fuse::IRenderViewport::ViewOrigin(uInterface(uPtr(_baseView), ::TYPES[27/*Fuse.IRenderViewport*/]));
}

// public float4x4 get_ViewProjectionTransform() [instance] :3256
::g::Uno::Float4x4 InheritViewport::ViewProjectionTransform()
{
    uStackFrame __("Fuse.InheritViewport", "get_ViewProjectionTransform()");
    return ::g::Uno::Matrix::Mul8(::g::Uno::Matrix::Mul8(uPtr(_childView)->LocalViewProjectionTransform, uPtr(_child)->WorldTransform()), ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(_baseView), ::TYPES[27/*Fuse.IRenderViewport*/])));
}

// public float2 get_ViewRange() [instance] :3264
::g::Uno::Float2 InheritViewport::ViewRange()
{
    uStackFrame __("Fuse.InheritViewport", "get_ViewRange()");
    return ::g::Fuse::IRenderViewport::ViewRange(uInterface(uPtr(_baseView), ::TYPES[27/*Fuse.IRenderViewport*/]));
}

// public float4x4 get_ViewTransform() [instance] :3262
::g::Uno::Float4x4 InheritViewport::ViewTransform()
{
    uStackFrame __("Fuse.InheritViewport", "get_ViewTransform()");
    return ::g::Fuse::ICommonViewport::ViewTransform(uInterface(uPtr(_baseView), ::TYPES[32/*Fuse.ICommonViewport*/]));
}

// public InheritViewport New(Fuse.IRenderViewport baseView, Fuse.FrustumViewport childView, Fuse.Visual child) [static] :3240
InheritViewport* InheritViewport::New1(uObject* baseView, ::g::Fuse::FrustumViewport* childView, ::g::Fuse::Visual* child)
{
    InheritViewport* obj1 = (InheritViewport*)uNew(InheritViewport_typeof());
    obj1->ctor_(baseView, childView, child);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// private struct Visual.InteractionItem :5911
// {
static void Visual__InteractionItem_build(uType* type)
{
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Fuse::Visual__InteractionItem, Id), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Visual__InteractionItem, Cancelled), 0);
}

uStructType* Visual__InteractionItem_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(Visual__InteractionItem);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Visual.InteractionItem", options);
    type->fp_build_ = Visual__InteractionItem_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public enum InvalidateLayoutReason :6296
uEnumType* InvalidateLayoutReason_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.InvalidateLayoutReason", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "NothingChanged", 0LL,
        "ChildChanged", 1LL,
        "MarginBoxChanged", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Entities/0.40.8/processing/$.uno
// -------------------------------------------------------------------

// public abstract interface IOutput<T> :17
// {
uInterfaceType* IOutput_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IOutput`1", 1, 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Output", NULL, NULL, offsetof(IOutput, fp_get_Output), false, type->T(0), 0),
        new uFunction("add_OutputChanged", NULL, NULL, offsetof(IOutput, fp_add_OutputChanged), false, uVoid_typeof(), 1, ::g::Uno::Action_typeof()),
        new uFunction("remove_OutputChanged", NULL, NULL, offsetof(IOutput, fp_remove_OutputChanged), false, uVoid_typeof(), 1, ::g::Uno::Action_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public abstract interface IParentObserver :4962
// {
uInterfaceType* IParentObserver_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IParentObserver", 0, 0);
    type->Reflection.SetFunctions(2,
        new uFunction("OnChildAddedWhileRooted", NULL, NULL, offsetof(IParentObserver, fp_OnChildAddedWhileRooted), false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("OnChildRemovedWhileRooted", NULL, NULL, offsetof(IParentObserver, fp_OnChildRemovedWhileRooted), false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public abstract interface IRenderViewport :3054
// {
uInterfaceType* IRenderViewport_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IRenderViewport", 0, 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_ProjectionTransform", NULL, NULL, offsetof(IRenderViewport, fp_get_ProjectionTransform), false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("get_ViewOrigin", NULL, NULL, offsetof(IRenderViewport, fp_get_ViewOrigin), false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("get_ViewProjectionTransform", NULL, NULL, offsetof(IRenderViewport, fp_get_ViewProjectionTransform), false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("get_ViewRange", NULL, NULL, offsetof(IRenderViewport, fp_get_ViewRange), false, ::g::Uno::Float2_typeof(), 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public abstract interface IScalingMode :9161
// {
uInterfaceType* IScalingMode_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IScalingMode", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("GetScaleVector", NULL, NULL, offsetof(IScalingMode, fp_GetScaleVector), false, ::g::Uno::Float3_typeof(), 1, ::g::Fuse::Scaling_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public abstract interface ITemplateObserver :7405
// {
uInterfaceType* ITemplateObserver_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.ITemplateObserver", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("OnTemplatesChangedWileRooted", NULL, NULL, offsetof(ITemplateObserver, fp_OnTemplatesChangedWileRooted), false, uVoid_typeof(), 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public abstract interface ITransformMode :9915
// {
uInterfaceType* ITransformMode_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.ITransformMode", 0, 0);
    type->Reflection.SetFunctions(2,
        new uFunction("Subscribe", NULL, NULL, offsetof(ITransformMode, fp_Subscribe), false, uObject_typeof(), 1, ::g::Fuse::ITransformRelative_typeof()),
        new uFunction("Unsubscribe", NULL, NULL, offsetof(ITransformMode, fp_Unsubscribe), false, uVoid_typeof(), 2, ::g::Fuse::ITransformRelative_typeof(), uObject_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public abstract interface ITransformRelative :9905
// {
uInterfaceType* ITransformRelative_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.ITransformRelative", 0, 0);
    type->Reflection.SetFunctions(3,
        new uFunction("OnTransformChanged", NULL, NULL, offsetof(ITransformRelative, fp_OnTransformChanged), false, uVoid_typeof(), 2, uObject_typeof(), uObject_typeof()),
        new uFunction("get_RelativeNode", NULL, NULL, offsetof(ITransformRelative, fp_get_RelativeNode), false, ::g::Fuse::Visual_typeof(), 0),
        new uFunction("get_Target", NULL, NULL, offsetof(ITransformRelative, fp_get_Target), false, ::g::Fuse::Visual_typeof(), 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public abstract interface ITranslationMode :10110
// {
uInterfaceType* ITranslationMode_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.ITranslationMode", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("GetAbsVector", NULL, NULL, offsetof(ITranslationMode, fp_GetAbsVector), false, ::g::Uno::Float3_typeof(), 1, ::g::Fuse::Translation_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public abstract interface IUpdateListener :10348
// {
uInterfaceType* IUpdateListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IUpdateListener", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Update", NULL, NULL, offsetof(IUpdateListener, fp_Update), false, uVoid_typeof(), 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public abstract interface IViewport :3084
// {
uInterfaceType* IViewport_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.IViewport", 0, 0);
    type->Reflection.SetFunctions(2,
        new uFunction("PointToWorldRay", NULL, NULL, offsetof(IViewport, fp_PointToWorldRay), false, ::g::Uno::Geometry::Ray_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("WorldToLocalRay", NULL, NULL, offsetof(IViewport, fp_WorldToLocalRay), false, ::g::Uno::Geometry::Ray_typeof(), 3, IViewport_typeof(), ::g::Uno::Geometry::Ray_typeof(), ::g::Fuse::Visual_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// internal sealed class KeyboardBootstrapper :8898
// {
static void KeyboardBootstrapper_build(uType* type)
{
    ::TYPES[40] = ::g::Uno::Exception_typeof();
}

uType* KeyboardBootstrapper_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(KeyboardBootstrapper);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.KeyboardBootstrapper", options);
    type->fp_build_ = KeyboardBootstrapper_build;
    type->fp_ctor_ = (void*)KeyboardBootstrapper__New1_fn;
    return type;
}

// public generated KeyboardBootstrapper() :8898
void KeyboardBootstrapper__ctor__fn(KeyboardBootstrapper* __this)
{
    __this->ctor_();
}

// public generated KeyboardBootstrapper New() :8898
void KeyboardBootstrapper__New1_fn(KeyboardBootstrapper** __retval)
{
    *__retval = KeyboardBootstrapper::New1();
}

// public static void OnKeyPressed(object sender, Uno.Platform.KeyEventArgs args) :8900
void KeyboardBootstrapper__OnKeyPressed_fn(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args)
{
    KeyboardBootstrapper::OnKeyPressed(sender, args);
}

// public static void OnKeyReleased(object sender, Uno.Platform.KeyEventArgs args) :8917
void KeyboardBootstrapper__OnKeyReleased_fn(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args)
{
    KeyboardBootstrapper::OnKeyReleased(sender, args);
}

// public static void OnTextInput(object sender, Uno.Platform.TextInputEventArgs args) :8929
void KeyboardBootstrapper__OnTextInput_fn(uObject* sender, ::g::Uno::Platform::TextInputEventArgs* args)
{
    KeyboardBootstrapper::OnTextInput(sender, args);
}

// public generated KeyboardBootstrapper() [instance] :8898
void KeyboardBootstrapper::ctor_()
{
}

// public generated KeyboardBootstrapper New() [static] :8898
KeyboardBootstrapper* KeyboardBootstrapper::New1()
{
    KeyboardBootstrapper* obj1 = (KeyboardBootstrapper*)uNew(KeyboardBootstrapper_typeof());
    obj1->ctor_();
    return obj1;
}

// public static void OnKeyPressed(object sender, Uno.Platform.KeyEventArgs args) [static] :8900
void KeyboardBootstrapper::OnKeyPressed(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args)
{
    uStackFrame __("Fuse.KeyboardBootstrapper", "OnKeyPressed(object,Uno.Platform.KeyEventArgs)");

    try
    {
        if (!uPtr(args)->Handled() && (uPtr(args)->Key() == 9))
            ::g::Fuse::Input::Focus::Move(uPtr(args)->IsShiftKeyPressed() ? 0 : 1);

        ::g::Fuse::Input::Keyboard::RaiseKeyPressed(uPtr(args)->Key(), uPtr(args)->IsMetaKeyPressed(), uPtr(args)->IsControlKeyPressed(), uPtr(args)->IsShiftKeyPressed(), uPtr(args)->IsAltKeyPressed());
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// public static void OnKeyReleased(object sender, Uno.Platform.KeyEventArgs args) [static] :8917
void KeyboardBootstrapper::OnKeyReleased(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args)
{
    uStackFrame __("Fuse.KeyboardBootstrapper", "OnKeyReleased(object,Uno.Platform.KeyEventArgs)");

    try
    {
        ::g::Fuse::Input::Keyboard::RaiseKeyReleased(uPtr(args)->Key(), uPtr(args)->IsMetaKeyPressed(), uPtr(args)->IsControlKeyPressed(), uPtr(args)->IsShiftKeyPressed(), uPtr(args)->IsAltKeyPressed());
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// public static void OnTextInput(object sender, Uno.Platform.TextInputEventArgs args) [static] :8929
void KeyboardBootstrapper::OnTextInput(uObject* sender, ::g::Uno::Platform::TextInputEventArgs* args)
{
    uStackFrame __("Fuse.KeyboardBootstrapper", "OnTextInput(object,Uno.Platform.TextInputEventArgs)");

    try
    {
        uPtr(args)->Handled(::g::Fuse::Input::TextService::RaiseTextEntered(uPtr(args)->Text()));
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public enum Layer :6262
uEnumType* Layer_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Layer", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Underlay", 0LL,
        "Background", 1LL,
        "Layout", 2LL,
        "Overlay", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public enum LayoutDependent :6304
uEnumType* LayoutDependent_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.LayoutDependent", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "No", 0LL,
        "NoArrange", 1LL,
        "Maybe", 2LL,
        "MaybeArrange", 3LL,
        "Yes", 4LL);
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public struct LayoutParams :3282
// {
static void LayoutParams_build(uType* type)
{
    ::STRINGS[45] = uString::Const("Use CloneAndDerive instead of DeriveClone");
    ::STRINGS[5] = uString::Const("/usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno");
    ::STRINGS[46] = uString::Const("DeriveClone");
    ::STRINGS[47] = uString::Const("Use Clone instead of TrueClone");
    ::STRINGS[48] = uString::Const("TrueClone");
    type->SetFields(0,
        LayoutParams__Flags_typeof(), offsetof(::g::Fuse::LayoutParams, _flags), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::LayoutParams, _size), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::LayoutParams, _maxSize), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::LayoutParams, _minSize), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::LayoutParams, _relativeSize), 0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::LayoutParams::_warnTrueClone_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::LayoutParams::_warnDeriveClone_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(52,
        new uFunction("BoxConstrain", NULL, (void*)LayoutParams__BoxConstrain_fn, 0, false, uVoid_typeof(), 1, LayoutParams_typeof()),
        new uFunction("Clone", NULL, (void*)LayoutParams__Clone_fn, 0, false, LayoutParams_typeof(), 0),
        new uFunction("CloneAndDerive", NULL, (void*)LayoutParams__CloneAndDerive_fn, 0, false, LayoutParams_typeof(), 0),
        new uFunction("ConstrainMax", NULL, (void*)LayoutParams__ConstrainMax_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Float2_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("ConstrainMaxX", NULL, (void*)LayoutParams__ConstrainMaxX_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("ConstrainMaxY", NULL, (void*)LayoutParams__ConstrainMaxY_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("ConstrainMin", NULL, (void*)LayoutParams__ConstrainMin_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Float2_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("ConstrainMinX", NULL, (void*)LayoutParams__ConstrainMinX_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("ConstrainMinY", NULL, (void*)LayoutParams__ConstrainMinY_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Copy", NULL, (void*)LayoutParams__Copy_fn, 0, false, uVoid_typeof(), 1, LayoutParams_typeof()),
        new uFunction("Create", NULL, (void*)LayoutParams__Create_fn, 0, true, LayoutParams_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("CreateEmpty", NULL, (void*)LayoutParams__CreateEmpty_fn, 0, true, LayoutParams_typeof(), 0),
        new uFunction("CreateTemporary", NULL, (void*)LayoutParams__CreateTemporary_fn, 0, true, LayoutParams_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("CreateXY", NULL, (void*)LayoutParams__CreateXY_fn, 0, true, LayoutParams_typeof(), 3, ::g::Uno::Float2_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("DeriveClone", NULL, (void*)LayoutParams__DeriveClone_fn, 0, false, LayoutParams_typeof(), 0),
        new uFunction("GetAvailableSize", NULL, (void*)LayoutParams__GetAvailableSize_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_HasMaxSize", NULL, (void*)LayoutParams__get_HasMaxSize_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_HasMaxX", NULL, (void*)LayoutParams__get_HasMaxX_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_HasMaxY", NULL, (void*)LayoutParams__get_HasMaxY_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_HasMinSize", NULL, (void*)LayoutParams__get_HasMinSize_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_HasMinX", NULL, (void*)LayoutParams__get_HasMinX_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_HasMinY", NULL, (void*)LayoutParams__get_HasMinY_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_HasRelativeX", NULL, (void*)LayoutParams__get_HasRelativeX_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_HasRelativeY", NULL, (void*)LayoutParams__get_HasRelativeY_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_HasSize", NULL, (void*)LayoutParams__get_HasSize_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_HasX", NULL, (void*)LayoutParams__get_HasX_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_HasY", NULL, (void*)LayoutParams__get_HasY_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("IsCompatible", NULL, (void*)LayoutParams__IsCompatible_fn, 0, false, ::g::Uno::Bool_typeof(), 1, LayoutParams_typeof()),
        new uFunction("get_MaxSize", NULL, (void*)LayoutParams__get_MaxSize_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_MaxX", NULL, (void*)LayoutParams__get_MaxX_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("get_MaxY", NULL, (void*)LayoutParams__get_MaxY_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("get_MinSize", NULL, (void*)LayoutParams__get_MinSize_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_MinX", NULL, (void*)LayoutParams__get_MinX_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("get_MinY", NULL, (void*)LayoutParams__get_MinY_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("PointConstrain", NULL, (void*)LayoutParams__PointConstrain_fn, 0, false, ::g::Uno::Float2_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_RelativeSize", NULL, (void*)LayoutParams__get_RelativeSize_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_RelativeX", NULL, (void*)LayoutParams__get_RelativeX_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("get_RelativeY", NULL, (void*)LayoutParams__get_RelativeY_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("RemoveSize", NULL, (void*)LayoutParams__RemoveSize_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("RemoveSize", NULL, (void*)LayoutParams__RemoveSize1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("Reset", NULL, (void*)LayoutParams__Reset_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("RetainMaxXY", NULL, (void*)LayoutParams__RetainMaxXY_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("RetainXY", NULL, (void*)LayoutParams__RetainXY_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("SetRelativeSize", NULL, (void*)LayoutParams__SetRelativeSize_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Float2_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("SetSize", NULL, (void*)LayoutParams__SetSize_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Float2_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("SetX", NULL, (void*)LayoutParams__SetX_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("SetY", NULL, (void*)LayoutParams__SetY_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Size", NULL, (void*)LayoutParams__get_Size_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_Temporary", NULL, (void*)LayoutParams__get_Temporary_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("TrueClone", NULL, (void*)LayoutParams__TrueClone_fn, 0, false, LayoutParams_typeof(), 0),
        new uFunction("get_X", NULL, (void*)LayoutParams__get_X_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("get_Y", NULL, (void*)LayoutParams__get_Y_fn, 0, false, ::g::Uno::Float_typeof(), 0));
}

uStructType* LayoutParams_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ValueSize = sizeof(LayoutParams);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.LayoutParams", options);
    type->fp_build_ = LayoutParams_build;
    return type;
}

// public void BoxConstrain(Fuse.LayoutParams o) :3588
void LayoutParams__BoxConstrain_fn(LayoutParams* __this, LayoutParams* o)
{
    __this->BoxConstrain(*o);
}

// public Fuse.LayoutParams Clone() :3350
void LayoutParams__Clone_fn(LayoutParams* __this, LayoutParams* __retval)
{
    *__retval = __this->Clone();
}

// public Fuse.LayoutParams CloneAndDerive() :3379
void LayoutParams__CloneAndDerive_fn(LayoutParams* __this, LayoutParams* __retval)
{
    *__retval = __this->CloneAndDerive();
}

// public void ConstrainMax(float2 max, [bool hasMaxX], [bool hasMaxY]) :3545
void LayoutParams__ConstrainMax_fn(LayoutParams* __this, ::g::Uno::Float2* max, bool* hasMaxX, bool* hasMaxY)
{
    __this->ConstrainMax(*max, *hasMaxX, *hasMaxY);
}

// public void ConstrainMaxX(float max) :3527
void LayoutParams__ConstrainMaxX_fn(LayoutParams* __this, float* max)
{
    __this->ConstrainMaxX(*max);
}

// public void ConstrainMaxY(float max) :3536
void LayoutParams__ConstrainMaxY_fn(LayoutParams* __this, float* max)
{
    __this->ConstrainMaxY(*max);
}

// public void ConstrainMin(float2 min, [bool hasMinX], [bool hasMinY]) :3574
void LayoutParams__ConstrainMin_fn(LayoutParams* __this, ::g::Uno::Float2* min, bool* hasMinX, bool* hasMinY)
{
    __this->ConstrainMin(*min, *hasMinX, *hasMinY);
}

// public void ConstrainMinX(float min) :3556
void LayoutParams__ConstrainMinX_fn(LayoutParams* __this, float* min)
{
    __this->ConstrainMinX(*min);
}

// public void ConstrainMinY(float min) :3565
void LayoutParams__ConstrainMinY_fn(LayoutParams* __this, float* min)
{
    __this->ConstrainMinY(*min);
}

// public void Copy(Fuse.LayoutParams o) :3409
void LayoutParams__Copy_fn(LayoutParams* __this, LayoutParams* o)
{
    __this->Copy(*o);
}

// public static Fuse.LayoutParams Create(float2 size) :3418
void LayoutParams__Create_fn(::g::Uno::Float2* size, LayoutParams* __retval)
{
    *__retval = LayoutParams__Create(*size);
}

// public static Fuse.LayoutParams CreateEmpty() :3447
void LayoutParams__CreateEmpty_fn(LayoutParams* __retval)
{
    *__retval = LayoutParams__CreateEmpty();
}

// public static Fuse.LayoutParams CreateTemporary(float2 size) :3427
void LayoutParams__CreateTemporary_fn(::g::Uno::Float2* size, LayoutParams* __retval)
{
    *__retval = LayoutParams__CreateTemporary(*size);
}

// public static Fuse.LayoutParams CreateXY(float2 size, bool hasX, bool hasY) :3437
void LayoutParams__CreateXY_fn(::g::Uno::Float2* size, bool* hasX, bool* hasY, LayoutParams* __retval)
{
    *__retval = LayoutParams__CreateXY(*size, *hasX, *hasY);
}

// public Fuse.LayoutParams DeriveClone() :3392
void LayoutParams__DeriveClone_fn(LayoutParams* __this, LayoutParams* __retval)
{
    *__retval = __this->DeriveClone();
}

// public float2 GetAvailableSize() :3640
void LayoutParams__GetAvailableSize_fn(LayoutParams* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetAvailableSize();
}

// public bool get_HasMaxSize() :3322
void LayoutParams__get_HasMaxSize_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->HasMaxSize();
}

// public bool get_HasMaxX() :3320
void LayoutParams__get_HasMaxX_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->HasMaxX();
}

// public bool get_HasMaxY() :3321
void LayoutParams__get_HasMaxY_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->HasMaxY();
}

// public bool get_HasMinSize() :3326
void LayoutParams__get_HasMinSize_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->HasMinSize();
}

// public bool get_HasMinX() :3324
void LayoutParams__get_HasMinX_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->HasMinX();
}

// public bool get_HasMinY() :3325
void LayoutParams__get_HasMinY_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->HasMinY();
}

// public bool get_HasRelativeX() :3330
void LayoutParams__get_HasRelativeX_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->HasRelativeX();
}

// public bool get_HasRelativeY() :3339
void LayoutParams__get_HasRelativeY_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->HasRelativeY();
}

// public bool get_HasSize() :3316
void LayoutParams__get_HasSize_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->HasSize();
}

// public bool get_HasX() :3314
void LayoutParams__get_HasX_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->HasX();
}

// public bool get_HasY() :3315
void LayoutParams__get_HasY_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->HasY();
}

// public bool IsCompatible(Fuse.LayoutParams nlp) :3716
void LayoutParams__IsCompatible_fn(LayoutParams* __this, LayoutParams* nlp, bool* __retval)
{
    *__retval = __this->IsCompatible(*nlp);
}

// public float2 get_MaxSize() :3649
void LayoutParams__get_MaxSize_fn(LayoutParams* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->MaxSize();
}

// public float get_MaxX() :3650
void LayoutParams__get_MaxX_fn(LayoutParams* __this, float* __retval)
{
    *__retval = __this->MaxX();
}

// public float get_MaxY() :3651
void LayoutParams__get_MaxY_fn(LayoutParams* __this, float* __retval)
{
    *__retval = __this->MaxY();
}

// public float2 get_MinSize() :3653
void LayoutParams__get_MinSize_fn(LayoutParams* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->MinSize();
}

// public float get_MinX() :3654
void LayoutParams__get_MinX_fn(LayoutParams* __this, float* __retval)
{
    *__retval = __this->MinX();
}

// public float get_MinY() :3655
void LayoutParams__get_MinY_fn(LayoutParams* __this, float* __retval)
{
    *__retval = __this->MinY();
}

// public float2 PointConstrain(float2 p) :3598
void LayoutParams__PointConstrain_fn(LayoutParams* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PointConstrain(*p);
}

// private float2 PointConstrain(float2 p, bool knowX, bool knowY) :3603
void LayoutParams__PointConstrain1_fn(LayoutParams* __this, ::g::Uno::Float2* p, bool* knowX, bool* knowY, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PointConstrain1(*p, *knowX, *knowY);
}

// public float2 get_RelativeSize() :3657
void LayoutParams__get_RelativeSize_fn(LayoutParams* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->RelativeSize();
}

// public float get_RelativeX() :3660
void LayoutParams__get_RelativeX_fn(LayoutParams* __this, float* __retval)
{
    *__retval = __this->RelativeX();
}

// public float get_RelativeY() :3669
void LayoutParams__get_RelativeY_fn(LayoutParams* __this, float* __retval)
{
    *__retval = __this->RelativeY();
}

// public void RemoveSize(float2 size) :3455
void LayoutParams__RemoveSize_fn(LayoutParams* __this, ::g::Uno::Float2* size)
{
    __this->RemoveSize(*size);
}

// public void RemoveSize(float4 size) :3462
void LayoutParams__RemoveSize1_fn(LayoutParams* __this, ::g::Uno::Float4* size)
{
    __this->RemoveSize1(*size);
}

// public void Reset() :3403
void LayoutParams__Reset_fn(LayoutParams* __this)
{
    __this->Reset();
}

// public void RetainMaxXY(bool x, bool y) :3481
void LayoutParams__RetainMaxXY_fn(LayoutParams* __this, bool* x, bool* y)
{
    __this->RetainMaxXY(*x, *y);
}

// public void RetainXY(bool x, bool y) :3467
void LayoutParams__RetainXY_fn(LayoutParams* __this, bool* x, bool* y)
{
    __this->RetainXY(*x, *y);
}

// private void SetFlag(Fuse.LayoutParams.Flags g, bool val) :3306
void LayoutParams__SetFlag_fn(LayoutParams* __this, int* g, bool* val)
{
    __this->SetFlag(*g, *val);
}

// public void SetRelativeSize(float2 sz, bool hasX, bool hasY) :3518
void LayoutParams__SetRelativeSize_fn(LayoutParams* __this, ::g::Uno::Float2* sz, bool* hasX, bool* hasY)
{
    __this->SetRelativeSize(*sz, *hasX, *hasY);
}

// public void SetSize(float2 xy, [bool hasX], [bool hasY]) :3495
void LayoutParams__SetSize_fn(LayoutParams* __this, ::g::Uno::Float2* xy, bool* hasX, bool* hasY)
{
    __this->SetSize(*xy, *hasX, *hasY);
}

// public void SetX(float x) :3506
void LayoutParams__SetX_fn(LayoutParams* __this, float* x)
{
    __this->SetX(*x);
}

// public void SetY(float y) :3512
void LayoutParams__SetY_fn(LayoutParams* __this, float* y)
{
    __this->SetY(*y);
}

// public float2 get_Size() :3645
void LayoutParams__get_Size_fn(LayoutParams* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// public bool get_Temporary() :3318
void LayoutParams__get_Temporary_fn(LayoutParams* __this, bool* __retval)
{
    *__retval = __this->Temporary();
}

// public Fuse.LayoutParams TrueClone() :3363
void LayoutParams__TrueClone_fn(LayoutParams* __this, LayoutParams* __retval)
{
    *__retval = __this->TrueClone();
}

// public float get_X() :3646
void LayoutParams__get_X_fn(LayoutParams* __this, float* __retval)
{
    *__retval = __this->X();
}

// public float get_Y() :3647
void LayoutParams__get_Y_fn(LayoutParams* __this, float* __retval)
{
    *__retval = __this->Y();
}

bool LayoutParams::_warnTrueClone_;
bool LayoutParams::_warnDeriveClone_;

// public void BoxConstrain(Fuse.LayoutParams o) [instance] :3588
void LayoutParams::BoxConstrain(LayoutParams o)
{
    uStackFrame __("Fuse.LayoutParams", "BoxConstrain(Fuse.LayoutParams)");
    SetSize(o.Size(), o.HasX(), o.HasY());
    ConstrainMax(o.MaxSize(), o.HasMaxX(), o.HasMaxY());
    ConstrainMin(o.MinSize(), o.HasMinX(), o.HasMinY());
}

// public Fuse.LayoutParams Clone() [instance] :3350
LayoutParams LayoutParams::Clone()
{
    uStackFrame __("Fuse.LayoutParams", "Clone()");
    LayoutParams lp = uDefault<LayoutParams>();
    lp._flags = _flags;
    lp._size = _size;
    lp._maxSize = _maxSize;
    lp._minSize = _minSize;
    lp._relativeSize = _relativeSize;
    return lp;
}

// public Fuse.LayoutParams CloneAndDerive() [instance] :3379
LayoutParams LayoutParams::CloneAndDerive()
{
    uStackFrame __("Fuse.LayoutParams", "CloneAndDerive()");
    LayoutParams lp = Clone();
    lp.SetFlag(128, false);
    lp.SetFlag(256, false);
    lp.SetFlag(512, false);
    lp.SetFlag(1024, false);
    lp._relativeSize = ::g::Uno::Float2__New1(0.0f);
    return lp;
}

// public void ConstrainMax(float2 max, [bool hasMaxX], [bool hasMaxY]) [instance] :3545
void LayoutParams::ConstrainMax(::g::Uno::Float2 max, bool hasMaxX, bool hasMaxY)
{
    uStackFrame __("Fuse.LayoutParams", "ConstrainMax(float2,[bool],[bool])");
    max = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), max);

    if (hasMaxX)
        ConstrainMaxX(max.X);

    if (hasMaxY)
        ConstrainMaxY(max.Y);
}

// public void ConstrainMaxX(float max) [instance] :3527
void LayoutParams::ConstrainMaxX(float max)
{
    uStackFrame __("Fuse.LayoutParams", "ConstrainMaxX(float)");

    if (HasMaxX())
        _maxSize.X = ::g::Uno::Math::Min1(_maxSize.X, max);
    else 
        _maxSize.X = max;

    SetFlag(8, true);
}

// public void ConstrainMaxY(float max) [instance] :3536
void LayoutParams::ConstrainMaxY(float max)
{
    uStackFrame __("Fuse.LayoutParams", "ConstrainMaxY(float)");

    if (HasMaxY())
        _maxSize.Y = ::g::Uno::Math::Min1(_maxSize.Y, max);
    else 
        _maxSize.Y = max;

    SetFlag(16, true);
}

// public void ConstrainMin(float2 min, [bool hasMinX], [bool hasMinY]) [instance] :3574
void LayoutParams::ConstrainMin(::g::Uno::Float2 min, bool hasMinX, bool hasMinY)
{
    uStackFrame __("Fuse.LayoutParams", "ConstrainMin(float2,[bool],[bool])");
    min = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), min);

    if (hasMinX)
        ConstrainMinX(min.X);

    if (hasMinY)
        ConstrainMinY(min.Y);
}

// public void ConstrainMinX(float min) [instance] :3556
void LayoutParams::ConstrainMinX(float min)
{
    uStackFrame __("Fuse.LayoutParams", "ConstrainMinX(float)");

    if (HasMinX())
        _minSize.X = ::g::Uno::Math::Min1(_minSize.X, min);
    else 
        _minSize.X = min;

    SetFlag(32, true);
}

// public void ConstrainMinY(float min) [instance] :3565
void LayoutParams::ConstrainMinY(float min)
{
    uStackFrame __("Fuse.LayoutParams", "ConstrainMinY(float)");

    if (HasMinY())
        _minSize.Y = ::g::Uno::Math::Min1(_minSize.Y, min);
    else 
        _minSize.Y = min;

    SetFlag(64, true);
}

// public void Copy(Fuse.LayoutParams o) [instance] :3409
void LayoutParams::Copy(LayoutParams o)
{
    uStackFrame __("Fuse.LayoutParams", "Copy(Fuse.LayoutParams)");
    _flags = o._flags;
    _size = o._size;
    _maxSize = o._maxSize;
    _minSize = o._minSize;
    _relativeSize = o._relativeSize;
}

// public Fuse.LayoutParams DeriveClone() [instance] :3392
LayoutParams LayoutParams::DeriveClone()
{
    uStackFrame __("Fuse.LayoutParams", "DeriveClone()");

    if (!LayoutParams::_warnDeriveClone_)
    {
        ::g::Fuse::Diagnostics::Deprecated(::STRINGS[45/*"Use CloneAn...*/], uBox(LayoutParams_typeof(), *this), ::STRINGS[5/*"/usr/local/...*/], 3397, ::STRINGS[46/*"DeriveClone"*/]);
        LayoutParams::_warnDeriveClone_ = true;
    }

    return CloneAndDerive();
}

// public float2 GetAvailableSize() [instance] :3640
::g::Uno::Float2 LayoutParams::GetAvailableSize()
{
    uStackFrame __("Fuse.LayoutParams", "GetAvailableSize()");
    return PointConstrain1(::g::Uno::Float2__New1(0.0f), false, false);
}

// public bool get_HasMaxSize() [instance] :3322
bool LayoutParams::HasMaxSize()
{
    uStackFrame __("Fuse.LayoutParams", "get_HasMaxSize()");
    return HasMaxX() && HasMaxY();
}

// public bool get_HasMaxX() [instance] :3320
bool LayoutParams::HasMaxX()
{
    uStackFrame __("Fuse.LayoutParams", "get_HasMaxX()");
    return (_flags & 8) == 8;
}

// public bool get_HasMaxY() [instance] :3321
bool LayoutParams::HasMaxY()
{
    uStackFrame __("Fuse.LayoutParams", "get_HasMaxY()");
    return (_flags & 16) == 16;
}

// public bool get_HasMinSize() [instance] :3326
bool LayoutParams::HasMinSize()
{
    uStackFrame __("Fuse.LayoutParams", "get_HasMinSize()");
    return HasMinX() && HasMinY();
}

// public bool get_HasMinX() [instance] :3324
bool LayoutParams::HasMinX()
{
    uStackFrame __("Fuse.LayoutParams", "get_HasMinX()");
    return (_flags & 32) == 32;
}

// public bool get_HasMinY() [instance] :3325
bool LayoutParams::HasMinY()
{
    uStackFrame __("Fuse.LayoutParams", "get_HasMinY()");
    return (_flags & 64) == 64;
}

// public bool get_HasRelativeX() [instance] :3330
bool LayoutParams::HasRelativeX()
{
    uStackFrame __("Fuse.LayoutParams", "get_HasRelativeX()");

    if ((_flags & 512) == 512)
        return false;

    return ((_flags & 128) == 128) || HasX();
}

// public bool get_HasRelativeY() [instance] :3339
bool LayoutParams::HasRelativeY()
{
    uStackFrame __("Fuse.LayoutParams", "get_HasRelativeY()");

    if ((_flags & 1024) == 1024)
        return false;

    return ((_flags & 256) == 256) || HasY();
}

// public bool get_HasSize() [instance] :3316
bool LayoutParams::HasSize()
{
    uStackFrame __("Fuse.LayoutParams", "get_HasSize()");
    return HasX() && HasY();
}

// public bool get_HasX() [instance] :3314
bool LayoutParams::HasX()
{
    uStackFrame __("Fuse.LayoutParams", "get_HasX()");
    return (_flags & 1) == 1;
}

// public bool get_HasY() [instance] :3315
bool LayoutParams::HasY()
{
    uStackFrame __("Fuse.LayoutParams", "get_HasY()");
    return (_flags & 2) == 2;
}

// public bool IsCompatible(Fuse.LayoutParams nlp) [instance] :3716
bool LayoutParams::IsCompatible(LayoutParams nlp)
{
    uStackFrame __("Fuse.LayoutParams", "IsCompatible(Fuse.LayoutParams)");

    if ((((((HasX() != nlp.HasX()) || (HasY() != nlp.HasY())) || (HasMaxX() != nlp.HasMaxX())) || (HasMaxY() != nlp.HasMaxY())) || (HasMinX() != nlp.HasMinX())) || (HasMinY() != nlp.HasMinY()))
        return false;

    if (HasX() && (::g::Uno::Math::Abs1(X() - nlp.X()) > 1e-05f))
        return false;

    if (HasY() && (::g::Uno::Math::Abs1(Y() - nlp.Y()) > 1e-05f))
        return false;

    if (HasMaxX() && (::g::Uno::Math::Abs1(MaxX() - nlp.MaxX()) > 1e-05f))
        return false;

    if (HasMinX() && (::g::Uno::Math::Abs1(MinX() - nlp.MinX()) > 1e-05f))
        return false;

    if (HasMaxY() && (::g::Uno::Math::Abs1(MaxY() - nlp.MaxY()) > 1e-05f))
        return false;

    if (HasMinY() && (::g::Uno::Math::Abs1(MinY() - nlp.MinY()) > 1e-05f))
        return false;

    if (HasRelativeX() && (::g::Uno::Math::Abs1(RelativeX() - nlp.RelativeX()) > 1e-05f))
        return false;

    if (HasRelativeY() && (::g::Uno::Math::Abs1(RelativeY() - nlp.RelativeY()) > 1e-05f))
        return false;

    return true;
}

// public float2 get_MaxSize() [instance] :3649
::g::Uno::Float2 LayoutParams::MaxSize()
{
    uStackFrame __("Fuse.LayoutParams", "get_MaxSize()");
    return _maxSize;
}

// public float get_MaxX() [instance] :3650
float LayoutParams::MaxX()
{
    uStackFrame __("Fuse.LayoutParams", "get_MaxX()");
    return _maxSize.X;
}

// public float get_MaxY() [instance] :3651
float LayoutParams::MaxY()
{
    uStackFrame __("Fuse.LayoutParams", "get_MaxY()");
    return _maxSize.Y;
}

// public float2 get_MinSize() [instance] :3653
::g::Uno::Float2 LayoutParams::MinSize()
{
    uStackFrame __("Fuse.LayoutParams", "get_MinSize()");
    return _minSize;
}

// public float get_MinX() [instance] :3654
float LayoutParams::MinX()
{
    uStackFrame __("Fuse.LayoutParams", "get_MinX()");
    return _minSize.X;
}

// public float get_MinY() [instance] :3655
float LayoutParams::MinY()
{
    uStackFrame __("Fuse.LayoutParams", "get_MinY()");
    return _minSize.Y;
}

// public float2 PointConstrain(float2 p) [instance] :3598
::g::Uno::Float2 LayoutParams::PointConstrain(::g::Uno::Float2 p)
{
    uStackFrame __("Fuse.LayoutParams", "PointConstrain(float2)");
    return PointConstrain1(p, true, true);
}

// private float2 PointConstrain(float2 p, bool knowX, bool knowY) [instance] :3603
::g::Uno::Float2 LayoutParams::PointConstrain1(::g::Uno::Float2 p, bool knowX, bool knowY)
{
    uStackFrame __("Fuse.LayoutParams", "PointConstrain(float2,bool,bool)");

    if (HasX())
    {
        p.X = X();
        knowX = true;
    }

    if (HasMaxX())
    {
        p.X = (knowX ? ::g::Uno::Math::Min1(p.X, MaxX()) : MaxX());
        knowX = true;
    }

    if (HasMinX())
    {
        p.X = (knowX ? ::g::Uno::Math::Max1(p.X, MinX()) : MinX());
        knowX = true;
    }

    if (HasY())
    {
        p.Y = Y();
        knowY = true;
    }

    if (HasMaxY())
    {
        p.Y = (knowY ? ::g::Uno::Math::Min1(p.Y, MaxY()) : MaxY());
        knowY = true;
    }

    if (HasMinY())
    {
        p.Y = (knowY ? ::g::Uno::Math::Max1(p.Y, MinY()) : MinY());
        knowY = true;
    }

    return p;
}

// public float2 get_RelativeSize() [instance] :3657
::g::Uno::Float2 LayoutParams::RelativeSize()
{
    uStackFrame __("Fuse.LayoutParams", "get_RelativeSize()");
    return ::g::Uno::Float2__New2(RelativeX(), RelativeY());
}

// public float get_RelativeX() [instance] :3660
float LayoutParams::RelativeX()
{
    uStackFrame __("Fuse.LayoutParams", "get_RelativeX()");

    if ((_flags & 512) == 512)
        return 0.0f;

    return ((_flags & 128) == 128) ? _relativeSize.X : _size.X;
}

// public float get_RelativeY() [instance] :3669
float LayoutParams::RelativeY()
{
    uStackFrame __("Fuse.LayoutParams", "get_RelativeY()");

    if ((_flags & 1024) == 1024)
        return 0.0f;

    return ((_flags & 256) == 256) ? _relativeSize.Y : _size.Y;
}

// public void RemoveSize(float2 size) [instance] :3455
void LayoutParams::RemoveSize(::g::Uno::Float2 size)
{
    uStackFrame __("Fuse.LayoutParams", "RemoveSize(float2)");
    _size = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), ::g::Uno::Float2__op_Subtraction2(_size, size));
    _maxSize = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), ::g::Uno::Float2__op_Subtraction2(_maxSize, size));
    _minSize = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), ::g::Uno::Float2__op_Subtraction2(_minSize, size));
}

// public void RemoveSize(float4 size) [instance] :3462
void LayoutParams::RemoveSize1(::g::Uno::Float4 size)
{
    uStackFrame __("Fuse.LayoutParams", "RemoveSize(float4)");
    RemoveSize(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__New2(size.X, size.Y), ::g::Uno::Float2__New2(size.Z, size.W)));
}

// public void Reset() [instance] :3403
void LayoutParams::Reset()
{
    uStackFrame __("Fuse.LayoutParams", "Reset()");
    _flags = 0;
    _size = (_maxSize = (_minSize = (_relativeSize = ::g::Uno::Float2__New1(0.0f))));
}

// public void RetainMaxXY(bool x, bool y) [instance] :3481
void LayoutParams::RetainMaxXY(bool x, bool y)
{
    uStackFrame __("Fuse.LayoutParams", "RetainMaxXY(bool,bool)");

    if (!x)
    {
        _maxSize.X = 0.0f;
        SetFlag(8, false);
    }

    if (!y)
    {
        _maxSize.Y = 0.0f;
        SetFlag(16, false);
    }
}

// public void RetainXY(bool x, bool y) [instance] :3467
void LayoutParams::RetainXY(bool x, bool y)
{
    uStackFrame __("Fuse.LayoutParams", "RetainXY(bool,bool)");

    if (!x)
    {
        _size.X = 0.0f;
        SetFlag(1, false);
    }

    if (!y)
    {
        _size.Y = 0.0f;
        SetFlag(2, false);
    }
}

// private void SetFlag(Fuse.LayoutParams.Flags g, bool val) [instance] :3306
void LayoutParams::SetFlag(int g, bool val)
{
    uStackFrame __("Fuse.LayoutParams", "SetFlag(Fuse.LayoutParams.Flags,bool)");

    if (val)
        _flags = (_flags | g);
    else 
        _flags = (_flags & ~g);
}

// public void SetRelativeSize(float2 sz, bool hasX, bool hasY) [instance] :3518
void LayoutParams::SetRelativeSize(::g::Uno::Float2 sz, bool hasX, bool hasY)
{
    uStackFrame __("Fuse.LayoutParams", "SetRelativeSize(float2,bool,bool)");
    _relativeSize = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), sz);
    SetFlag(128, hasX);
    SetFlag(512, !hasX);
    SetFlag(256, hasY);
    SetFlag(1024, !hasY);
}

// public void SetSize(float2 xy, [bool hasX], [bool hasY]) [instance] :3495
void LayoutParams::SetSize(::g::Uno::Float2 xy, bool hasX, bool hasY)
{
    uStackFrame __("Fuse.LayoutParams", "SetSize(float2,[bool],[bool])");
    _size = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), xy);
    SetFlag(1, hasX);

    if (!hasX)
        _size.X = 0.0f;

    SetFlag(2, hasY);

    if (!hasY)
        _size.Y = 0.0f;
}

// public void SetX(float x) [instance] :3506
void LayoutParams::SetX(float x)
{
    uStackFrame __("Fuse.LayoutParams", "SetX(float)");
    SetFlag(1, true);
    _size.X = ::g::Uno::Math::Max1(x, 0.0f);
}

// public void SetY(float y) [instance] :3512
void LayoutParams::SetY(float y)
{
    uStackFrame __("Fuse.LayoutParams", "SetY(float)");
    SetFlag(2, true);
    _size.Y = ::g::Uno::Math::Max1(y, 0.0f);
}

// public float2 get_Size() [instance] :3645
::g::Uno::Float2 LayoutParams::Size()
{
    uStackFrame __("Fuse.LayoutParams", "get_Size()");
    return _size;
}

// public bool get_Temporary() [instance] :3318
bool LayoutParams::Temporary()
{
    uStackFrame __("Fuse.LayoutParams", "get_Temporary()");
    return (_flags & 4) == 4;
}

// public Fuse.LayoutParams TrueClone() [instance] :3363
LayoutParams LayoutParams::TrueClone()
{
    uStackFrame __("Fuse.LayoutParams", "TrueClone()");

    if (!LayoutParams::_warnTrueClone_)
    {
        ::g::Fuse::Diagnostics::Deprecated(::STRINGS[47/*"Use Clone i...*/], uBox(LayoutParams_typeof(), *this), ::STRINGS[5/*"/usr/local/...*/], 3368, ::STRINGS[48/*"TrueClone"*/]);
        LayoutParams::_warnTrueClone_ = true;
    }

    return Clone();
}

// public float get_X() [instance] :3646
float LayoutParams::X()
{
    uStackFrame __("Fuse.LayoutParams", "get_X()");
    return _size.X;
}

// public float get_Y() [instance] :3647
float LayoutParams::Y()
{
    uStackFrame __("Fuse.LayoutParams", "get_Y()");
    return _size.Y;
}

// public static Fuse.LayoutParams Create(float2 size) [static] :3418
LayoutParams LayoutParams__Create(::g::Uno::Float2 size)
{
    uStackFrame __("Fuse.LayoutParams", "Create(float2)");
    LayoutParams lp = uDefault<LayoutParams>();
    lp.SetFlag(1, true);
    lp.SetFlag(2, true);
    lp._size = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), size);
    return lp;
}

// public static Fuse.LayoutParams CreateEmpty() [static] :3447
LayoutParams LayoutParams__CreateEmpty()
{
    uStackFrame __("Fuse.LayoutParams", "CreateEmpty()");
    return uDefault<LayoutParams>();
}

// public static Fuse.LayoutParams CreateTemporary(float2 size) [static] :3427
LayoutParams LayoutParams__CreateTemporary(::g::Uno::Float2 size)
{
    uStackFrame __("Fuse.LayoutParams", "CreateTemporary(float2)");
    LayoutParams lp = uDefault<LayoutParams>();
    lp.SetFlag(1, true);
    lp.SetFlag(2, true);
    lp._size = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), size);
    lp.SetFlag(4, true);
    return lp;
}

// public static Fuse.LayoutParams CreateXY(float2 size, bool hasX, bool hasY) [static] :3437
LayoutParams LayoutParams__CreateXY(::g::Uno::Float2 size, bool hasX, bool hasY)
{
    uStackFrame __("Fuse.LayoutParams", "CreateXY(float2,bool,bool)");
    LayoutParams lp = uDefault<LayoutParams>();
    lp.SetFlag(1, hasX);
    lp.SetFlag(2, hasY);
    lp._size.X = (hasX ? ::g::Uno::Math::Max1(size.X, 0.0f) : 0.0f);
    lp._size.Y = (hasY ? ::g::Uno::Math::Max1(size.Y, 0.0f) : 0.0f);
    return lp;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public static class LayoutPriority :10341
// {
// static LayoutPriority() :10341
static void LayoutPriority__cctor__fn(uType* __type)
{
    LayoutPriority::Placement_ = 100;
    LayoutPriority::Post_ = 1000;
}

static void LayoutPriority_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::LayoutPriority::Placement_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::LayoutPriority::Post_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("Placement", 0),
        new uField("Post", 1));
}

uClassType* LayoutPriority_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.LayoutPriority", options);
    type->fp_build_ = LayoutPriority_build;
    type->fp_cctor_ = LayoutPriority__cctor__fn;
    return type;
}

int LayoutPriority::Placement_;
int LayoutPriority::Post_;
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public enum LayoutRole :6284
uEnumType* LayoutRole_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.LayoutRole", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Standard", 0LL,
        "Placeholder", 1LL,
        "Inert", 2LL,
        "Independent", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// private sealed class TranslationModes.LocalMode :10117
// {
static void TranslationModes__LocalMode_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(TranslationModes__LocalMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(TranslationModes__LocalMode_type, interface1));
}

TranslationModes__LocalMode_type* TranslationModes__LocalMode_typeof()
{
    static uSStrong<TranslationModes__LocalMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TranslationModes__LocalMode);
    options.TypeSize = sizeof(TranslationModes__LocalMode_type);
    type = (TranslationModes__LocalMode_type*)uClassType::New("Fuse.TranslationModes.LocalMode", options);
    type->fp_build_ = TranslationModes__LocalMode_build;
    type->fp_ctor_ = (void*)TranslationModes__LocalMode__New1_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))TranslationModes__LocalMode__GetAbsVector_fn;
    type->interface1.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))TranslationModes__LocalMode__Subscribe_fn;
    type->interface1.fp_Unsubscribe = (void(*)(uObject*, uObject*, uObject*))TranslationModes__LocalMode__Unsubscribe_fn;
    return type;
}

// public generated LocalMode() :10117
void TranslationModes__LocalMode__ctor__fn(TranslationModes__LocalMode* __this)
{
    __this->ctor_();
}

// public float3 GetAbsVector(Fuse.Translation t) :10119
void TranslationModes__LocalMode__GetAbsVector_fn(TranslationModes__LocalMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetAbsVector(t);
}

// public generated LocalMode New() :10117
void TranslationModes__LocalMode__New1_fn(TranslationModes__LocalMode** __retval)
{
    *__retval = TranslationModes__LocalMode::New1();
}

// public object Subscribe(Fuse.ITransformRelative transform) :10120
void TranslationModes__LocalMode__Subscribe_fn(TranslationModes__LocalMode* __this, uObject* transform, uObject** __retval)
{
    *__retval = __this->Subscribe(transform);
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) :10121
void TranslationModes__LocalMode__Unsubscribe_fn(TranslationModes__LocalMode* __this, uObject* transform, uObject* sub)
{
    __this->Unsubscribe(transform, sub);
}

// public generated LocalMode() [instance] :10117
void TranslationModes__LocalMode::ctor_()
{
}

// public float3 GetAbsVector(Fuse.Translation t) [instance] :10119
::g::Uno::Float3 TranslationModes__LocalMode::GetAbsVector(::g::Fuse::Translation* t)
{
    uStackFrame __("Fuse.TranslationModes.LocalMode", "GetAbsVector(Fuse.Translation)");
    return uPtr(t)->Vector();
}

// public object Subscribe(Fuse.ITransformRelative transform) [instance] :10120
uObject* TranslationModes__LocalMode::Subscribe(uObject* transform)
{
    uStackFrame __("Fuse.TranslationModes.LocalMode", "Subscribe(Fuse.ITransformRelative)");
    return NULL;
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) [instance] :10121
void TranslationModes__LocalMode::Unsubscribe(uObject* transform, uObject* sub)
{
}

// public generated LocalMode New() [static] :10117
TranslationModes__LocalMode* TranslationModes__LocalMode::New1()
{
    TranslationModes__LocalMode* obj1 = (TranslationModes__LocalMode*)uNew(TranslationModes__LocalMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public enum MarginBoxDependent :6316
uEnumType* MarginBoxDependent_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.MarginBoxDependent", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "Layout", 1LL,
        "Size", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// internal sealed extern class MobileBootstrapping :3752
// {
static void MobileBootstrapping_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Platform::ApplicationState_typeof());
    ::TYPES[41] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::KeyEventArgs_typeof());
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::MobileBootstrapping::_isInited_, uFieldFlagsStatic);
}

uType* MobileBootstrapping_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(MobileBootstrapping);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.MobileBootstrapping", options);
    type->fp_build_ = MobileBootstrapping_build;
    type->fp_ctor_ = (void*)MobileBootstrapping__New1_fn;
    return type;
}

// public generated MobileBootstrapping() :3752
void MobileBootstrapping__ctor__fn(MobileBootstrapping* __this)
{
    __this->ctor_();
}

// public static void Init() :3755
void MobileBootstrapping__Init_fn()
{
    MobileBootstrapping::Init();
}

// public generated MobileBootstrapping New() :3752
void MobileBootstrapping__New1_fn(MobileBootstrapping** __retval)
{
    *__retval = MobileBootstrapping::New1();
}

// private static void OnEnterForeground(Fuse.Platform.ApplicationState state) :3796
void MobileBootstrapping__OnEnterForeground_fn(int* state)
{
    MobileBootstrapping::OnEnterForeground(*state);
}

// private static void OnEnterInteractive(Fuse.Platform.ApplicationState state) :3801
void MobileBootstrapping__OnEnterInteractive_fn(int* state)
{
    MobileBootstrapping::OnEnterInteractive(*state);
}

// private static void OnExitInteractive(Fuse.Platform.ApplicationState state) :3807
void MobileBootstrapping__OnExitInteractive_fn(int* state)
{
    MobileBootstrapping::OnExitInteractive(*state);
}

// internal static void OnKeyPressed(object sender, Uno.Platform.KeyEventArgs args) :3781
void MobileBootstrapping__OnKeyPressed_fn(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args)
{
    MobileBootstrapping::OnKeyPressed(sender, args);
}

// internal static void OnKeyReleased(object sender, Uno.Platform.KeyEventArgs args) :3786
void MobileBootstrapping__OnKeyReleased_fn(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args)
{
    MobileBootstrapping::OnKeyReleased(sender, args);
}

// private static void OnStarted(Fuse.Platform.ApplicationState state) :3791
void MobileBootstrapping__OnStarted_fn(int* state)
{
    MobileBootstrapping::OnStarted(*state);
}

// private static void OnTerminating(Fuse.Platform.ApplicationState state) :3772
void MobileBootstrapping__OnTerminating_fn(int* state)
{
    MobileBootstrapping::OnTerminating(*state);
}

bool MobileBootstrapping::_isInited_;

// public generated MobileBootstrapping() [instance] :3752
void MobileBootstrapping::ctor_()
{
}

// public static void Init() [static] :3755
void MobileBootstrapping::Init()
{
    uStackFrame __("Fuse.MobileBootstrapping", "Init()");

    if (MobileBootstrapping::_isInited_)
        return;

    MobileBootstrapping::_isInited_ = true;
    ::g::Fuse::Platform::Lifecycle::add_Started(uDelegate::New(::TYPES[2/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)MobileBootstrapping__OnStarted_fn));
    ::g::Fuse::Platform::Lifecycle::add_EnteringForeground(uDelegate::New(::TYPES[2/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)MobileBootstrapping__OnEnterForeground_fn));
    ::g::Fuse::Platform::Lifecycle::add_EnteringInteractive(uDelegate::New(::TYPES[2/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)MobileBootstrapping__OnEnterInteractive_fn));
    ::g::Fuse::Platform::Lifecycle::add_ExitedInteractive(uDelegate::New(::TYPES[2/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)MobileBootstrapping__OnExitInteractive_fn));
    ::g::Fuse::Platform::Lifecycle::add_Terminating(uDelegate::New(::TYPES[2/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)MobileBootstrapping__OnTerminating_fn));
    ::g::Uno::Platform2::Application::add_KeyDown(uDelegate::New(::TYPES[41/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/], (void*)::g::Fuse::KeyboardBootstrapper__OnKeyPressed_fn));
    ::g::Uno::Platform2::Application::add_KeyDown(uDelegate::New(::TYPES[41/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/], (void*)MobileBootstrapping__OnKeyPressed_fn));
    ::g::Uno::Platform2::Application::add_KeyUp(uDelegate::New(::TYPES[41/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/], (void*)::g::Fuse::KeyboardBootstrapper__OnKeyReleased_fn));
    ::g::Uno::Platform2::Application::add_KeyUp(uDelegate::New(::TYPES[41/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/], (void*)MobileBootstrapping__OnKeyReleased_fn));
}

// public generated MobileBootstrapping New() [static] :3752
MobileBootstrapping* MobileBootstrapping::New1()
{
    MobileBootstrapping* obj1 = (MobileBootstrapping*)uNew(MobileBootstrapping_typeof());
    obj1->ctor_();
    return obj1;
}

// private static void OnEnterForeground(Fuse.Platform.ApplicationState state) [static] :3796
void MobileBootstrapping::OnEnterForeground(int state)
{
    uStackFrame __("Fuse.MobileBootstrapping", "OnEnterForeground(Fuse.Platform.ApplicationState)");
    uPtr(::g::Fuse::Platform::Display::MainDisplay())->FramesPerSecond(20U);
}

// private static void OnEnterInteractive(Fuse.Platform.ApplicationState state) [static] :3801
void MobileBootstrapping::OnEnterInteractive(int state)
{
    uStackFrame __("Fuse.MobileBootstrapping", "OnEnterInteractive(Fuse.Platform.ApplicationState)");
    uPtr(::g::Fuse::Platform::Display::MainDisplay())->FramesPerSecond(60U);
    uPtr(uPtr(::g::Uno::Application::Current())->Window())->OnGotFocus(::g::Uno::EventArgs::Empty());
}

// private static void OnExitInteractive(Fuse.Platform.ApplicationState state) [static] :3807
void MobileBootstrapping::OnExitInteractive(int state)
{
    uStackFrame __("Fuse.MobileBootstrapping", "OnExitInteractive(Fuse.Platform.ApplicationState)");
    uPtr(::g::Fuse::Platform::Display::MainDisplay())->FramesPerSecond(20U);
    uPtr(uPtr(::g::Uno::Application::Current())->Window())->OnLostFocus(::g::Uno::EventArgs::Empty());
}

// internal static void OnKeyPressed(object sender, Uno.Platform.KeyEventArgs args) [static] :3781
void MobileBootstrapping::OnKeyPressed(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args)
{
    uStackFrame __("Fuse.MobileBootstrapping", "OnKeyPressed(object,Uno.Platform.KeyEventArgs)");
    uPtr(uPtr(::g::Uno::Application::Current())->Window())->OnKeyPressed(args);
}

// internal static void OnKeyReleased(object sender, Uno.Platform.KeyEventArgs args) [static] :3786
void MobileBootstrapping::OnKeyReleased(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args)
{
    uStackFrame __("Fuse.MobileBootstrapping", "OnKeyReleased(object,Uno.Platform.KeyEventArgs)");
    uPtr(uPtr(::g::Uno::Application::Current())->Window())->OnKeyReleased(args);
}

// private static void OnStarted(Fuse.Platform.ApplicationState state) [static] :3791
void MobileBootstrapping::OnStarted(int state)
{
    uStackFrame __("Fuse.MobileBootstrapping", "OnStarted(Fuse.Platform.ApplicationState)");
    uPtr(::g::Uno::Application::Current())->Load();
}

// private static void OnTerminating(Fuse.Platform.ApplicationState state) [static] :3772
void MobileBootstrapping::OnTerminating(int state)
{
    uStackFrame __("Fuse.MobileBootstrapping", "OnTerminating(Fuse.Platform.ApplicationState)");
    ::g::Fuse::Platform::Lifecycle::remove_Started(uDelegate::New(::TYPES[2/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)MobileBootstrapping__OnStarted_fn));
    ::g::Fuse::Platform::Lifecycle::remove_EnteringForeground(uDelegate::New(::TYPES[2/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)MobileBootstrapping__OnEnterForeground_fn));
    ::g::Fuse::Platform::Lifecycle::remove_EnteringInteractive(uDelegate::New(::TYPES[2/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)MobileBootstrapping__OnEnterInteractive_fn));
    ::g::Fuse::Platform::Lifecycle::remove_ExitedInteractive(uDelegate::New(::TYPES[2/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)MobileBootstrapping__OnExitInteractive_fn));
    ::g::Fuse::Platform::Lifecycle::remove_Terminating(uDelegate::New(::TYPES[2/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)MobileBootstrapping__OnTerminating_fn));
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public static class NameRegistry :9314
// {
// static NameRegistry() :9314
static void NameRegistry__cctor__fn(uType* __type)
{
    NameRegistry::_nameToObj_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[42/*Uno.Collections.Dictionary<Uno.UX.Selector, Uno.Collections.List<Fuse.Node>>*/]));
    NameRegistry::_names_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[43/*Uno.Collections.Dictionary<Fuse.Node, Uno.UX.Selector>*/]));
    NameRegistry::_listeners_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[44/*Uno.Collections.Dictionary<Uno.UX.Selector, Uno.Collections.List<Fuse.INameListener>>*/]));
}

static void NameRegistry_build(uType* type)
{
    ::TYPES[42] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::UX::Selector_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof()));
    ::TYPES[43] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Node_typeof(), ::g::Uno::UX::Selector_typeof());
    ::TYPES[44] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::UX::Selector_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::INameListener_typeof()));
    ::TYPES[45] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::INameListener_typeof());
    ::TYPES[46] = ::g::Fuse::INameListener_typeof();
    ::TYPES[47] = ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator_typeof()->MakeType(::g::Uno::UX::Selector_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::INameListener_typeof()));
    ::TYPES[12] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof());
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::UX::Selector_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::INameListener_typeof())), (uintptr_t)&::g::Fuse::NameRegistry::_listeners_, uFieldFlagsStatic,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Node_typeof(), ::g::Uno::UX::Selector_typeof()), (uintptr_t)&::g::Fuse::NameRegistry::_names_, uFieldFlagsStatic,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::UX::Selector_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof())), (uintptr_t)&::g::Fuse::NameRegistry::_nameToObj_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(5,
        new uFunction("AddListener", NULL, (void*)NameRegistry__AddListener_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::UX::Selector_typeof(), ::g::Fuse::INameListener_typeof()),
        new uFunction("ClearName", NULL, (void*)NameRegistry__ClearName_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("GetName", NULL, (void*)NameRegistry__GetName_fn, 0, true, ::g::Uno::UX::Selector_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("RemoveListener", NULL, (void*)NameRegistry__RemoveListener_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::INameListener_typeof()),
        new uFunction("SetName", NULL, (void*)NameRegistry__SetName_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Uno::UX::Selector_typeof()));
}

uClassType* NameRegistry_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.NameRegistry", options);
    type->fp_build_ = NameRegistry_build;
    type->fp_cctor_ = NameRegistry__cctor__fn;
    return type;
}

// public static void AddListener(Uno.UX.Selector name, Fuse.INameListener listener) :9375
void NameRegistry__AddListener_fn(::g::Uno::UX::Selector* name, uObject* listener)
{
    NameRegistry::AddListener(*name, listener);
}

// public static void ClearName(Fuse.Node obj) :9368
void NameRegistry__ClearName_fn(::g::Fuse::Node* obj)
{
    NameRegistry::ClearName(obj);
}

// public static Uno.UX.Selector GetName(Fuse.Node obj) :9362
void NameRegistry__GetName_fn(::g::Fuse::Node* obj, ::g::Uno::UX::Selector* __retval)
{
    *__retval = NameRegistry::GetName(obj);
}

// internal static Uno.Collections.List<Fuse.Node> GetObjectsWithName(Uno.UX.Selector name) :9355
void NameRegistry__GetObjectsWithName_fn(::g::Uno::UX::Selector* name, ::g::Uno::Collections::List** __retval)
{
    *__retval = NameRegistry::GetObjectsWithName(*name);
}

// private static void NotifyNameChanged(Fuse.Node obj, Uno.UX.Selector name) :9397
void NameRegistry__NotifyNameChanged_fn(::g::Fuse::Node* obj, ::g::Uno::UX::Selector* name)
{
    NameRegistry::NotifyNameChanged(obj, *name);
}

// public static void RemoveListener(Fuse.INameListener listener) :9385
void NameRegistry__RemoveListener_fn(uObject* listener)
{
    NameRegistry::RemoveListener(listener);
}

// public static void SetName(Fuse.Node obj, Uno.UX.Selector name) :9320
void NameRegistry__SetName_fn(::g::Fuse::Node* obj, ::g::Uno::UX::Selector* name)
{
    NameRegistry::SetName(obj, *name);
}

uSStrong< ::g::Uno::Collections::Dictionary*> NameRegistry::_listeners_;
uSStrong< ::g::Uno::Collections::Dictionary*> NameRegistry::_names_;
uSStrong< ::g::Uno::Collections::Dictionary*> NameRegistry::_nameToObj_;

// public static void AddListener(Uno.UX.Selector name, Fuse.INameListener listener) [static] :9375
void NameRegistry::AddListener(::g::Uno::UX::Selector name, uObject* listener)
{
    uStackFrame __("Fuse.NameRegistry", "AddListener(Uno.UX.Selector,Fuse.INameListener)");
    NameRegistry_typeof()->Init();
    bool ret5;
    bool ret6;
    ::g::Uno::Collections::List* ret7;
    ::g::Uno::Collections::List* ret8;

    if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NameRegistry::_listeners()), uCRef(name), &ret5), ret5))
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(NameRegistry::_listeners()), uCRef(name), (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[45/*Uno.Collections.List<Fuse.INameListener>*/]));

    if (!(::g::Uno::Collections::List__Contains_fn(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NameRegistry::_listeners()), uCRef(name), &ret7), ret7)), listener, &ret6), ret6))
        ::g::Uno::Collections::List__Add_fn(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NameRegistry::_listeners()), uCRef(name), &ret8), ret8)), listener);
}

// public static void ClearName(Fuse.Node obj) [static] :9368
void NameRegistry::ClearName(::g::Fuse::Node* obj)
{
    uStackFrame __("Fuse.NameRegistry", "ClearName(Fuse.Node)");
    NameRegistry_typeof()->Init();
    NameRegistry::SetName(obj, uDefault< ::g::Uno::UX::Selector>());
}

// public static Uno.UX.Selector GetName(Fuse.Node obj) [static] :9362
::g::Uno::UX::Selector NameRegistry::GetName(::g::Fuse::Node* obj)
{
    uStackFrame __("Fuse.NameRegistry", "GetName(Fuse.Node)");
    NameRegistry_typeof()->Init();
    bool ret9;
    ::g::Uno::UX::Selector ret10;

    if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NameRegistry::_names()), obj, &ret9), ret9))
        return uDefault< ::g::Uno::UX::Selector>();

    return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NameRegistry::_names()), obj, &ret10), ret10);
}

// internal static Uno.Collections.List<Fuse.Node> GetObjectsWithName(Uno.UX.Selector name) [static] :9355
::g::Uno::Collections::List* NameRegistry::GetObjectsWithName(::g::Uno::UX::Selector name)
{
    uStackFrame __("Fuse.NameRegistry", "GetObjectsWithName(Uno.UX.Selector)");
    NameRegistry_typeof()->Init();
    bool ret11;
    ::g::Uno::Collections::List* res = NULL;
    ::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(NameRegistry::_nameToObj()), uCRef(name), (void**)(&res), &ret11);
    return res;
}

// private static void NotifyNameChanged(Fuse.Node obj, Uno.UX.Selector name) [static] :9397
void NameRegistry::NotifyNameChanged(::g::Fuse::Node* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("Fuse.NameRegistry", "NotifyNameChanged(Fuse.Node,Uno.UX.Selector)");
    NameRegistry_typeof()->Init();
    uArray* array2;
    int index3;
    int length4;
    bool ret12;
    ::g::Uno::Collections::List* ret13;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NameRegistry::_listeners()), uCRef(name), &ret12), ret12))

        for (array2 = (uArray*)uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NameRegistry::_listeners()), uCRef(name), &ret13), ret13))->ToArray(), index3 = 0, length4 = uPtr(array2)->Length(); index3 < length4; ++index3)
        {
            uObject* listener = uPtr(array2)->Strong<uObject*>(index3);
            ::g::Fuse::INameListener::OnNameChanged(uInterface(uPtr(listener), ::TYPES[46/*Fuse.INameListener*/]), obj, name);
        }
}

// public static void RemoveListener(Fuse.INameListener listener) [static] :9385
void NameRegistry::RemoveListener(uObject* listener)
{
    uStackFrame __("Fuse.NameRegistry", "RemoveListener(Fuse.INameListener)");
    NameRegistry_typeof()->Init();
    ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong< ::g::Uno::Collections::List*> > ret14;
    bool ret15;
    bool ret16;

    for (::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong< ::g::Uno::Collections::List*> > enum1 = (::g::Uno::Collections::Dictionary__ValueCollection__GetEnumerator_fn(uPtr((::g::Uno::Collections::Dictionary__ValueCollection*)uPtr(NameRegistry::_listeners())->Values()), &ret14), ret14); enum1.MoveNext(::TYPES[47/*Uno.Collections.Dictionary<Uno.UX.Selector, Uno.Collections.List<Fuse.INameListener>>.ValueCollection.Enumerator*/]); )
    {
        ::g::Uno::Collections::List* list = enum1.Current(::TYPES[47/*Uno.Collections.Dictionary<Uno.UX.Selector, Uno.Collections.List<Fuse.INameListener>>.ValueCollection.Enumerator*/]);

        if ((::g::Uno::Collections::List__Contains_fn(uPtr(list), listener, &ret15), ret15))
        {
            ::g::Uno::Collections::List__Remove_fn(uPtr(list), listener, &ret16);
            break;
        }
    }
}

// public static void SetName(Fuse.Node obj, Uno.UX.Selector name) [static] :9320
void NameRegistry::SetName(::g::Fuse::Node* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("Fuse.NameRegistry", "SetName(Fuse.Node,Uno.UX.Selector)");
    NameRegistry_typeof()->Init();
    bool ret17;
    ::g::Uno::UX::Selector ret18;
    bool ret19;
    ::g::Uno::Collections::List* ret20;
    ::g::Uno::Collections::List* ret21;
    bool ret22;
    bool ret23;
    bool ret24;
    ::g::Uno::Collections::List* ret25;
    ::g::Uno::UX::Selector oldName = uDefault< ::g::Uno::UX::Selector>();

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NameRegistry::_names()), obj, &ret17), ret17))
    {
        oldName = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NameRegistry::_names()), obj, &ret18), ret18);

        if (::g::Uno::UX::Selector__op_Equality(name, oldName))
            return;

        ::g::Uno::Collections::List__Remove_fn(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NameRegistry::_nameToObj()), uCRef(oldName), &ret20), ret20)), obj, &ret19);

        if (uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NameRegistry::_nameToObj()), uCRef(oldName), &ret21), ret21))->Count() == 0)
            ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(NameRegistry::_nameToObj()), uCRef(oldName), &ret22);
    }

    if (::g::Uno::UX::Selector__op_Inequality(name, oldName))
    {
        if (name.IsNull())
            ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(NameRegistry::_names()), obj, &ret23);
        else 
        {
            ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(NameRegistry::_names()), obj, uCRef(name));

            if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NameRegistry::_nameToObj()), uCRef(name), &ret24), ret24))
                ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(NameRegistry::_nameToObj()), uCRef(name), (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[12/*Uno.Collections.List<Fuse.Node>*/]));

            ::g::Uno::Collections::List__Add_fn(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NameRegistry::_nameToObj()), uCRef(name), &ret25), ret25)), obj);
        }

        if (!oldName.IsNull())
            NameRegistry::NotifyNameChanged(obj, oldName);

        if (!name.IsNull())
            NameRegistry::NotifyNameChanged(obj, name);
    }
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public interfacemodifiers class Node :3839
// {
// static Node() :4173
static void Node__cctor__fn(uType* __type)
{
    Node::_emptyBindings_ = (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[48/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Fuse.Binding>*/], uArray::New(::TYPES[49/*Fuse.Binding[]*/], 0)));
    ::g::Fuse::Scripting::ScriptClass::Register(Node_typeof(), uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[51/*Fuse.Scripting.ScriptMember[]*/], 2, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[52/*Fuse.Scripting.ScriptMethod<Fuse.Node>*/], ::STRINGS[49/*"_findData"*/], uDelegate::New(::TYPES[53/*Uno.Action<Fuse.Scripting.Context, Fuse.Node, object[]>*/], (void*)Node___findData_fn), 2), (::g::Fuse::Scripting::ScriptMethodInline*)::g::Fuse::Scripting::ScriptMethodInline::New1(::STRINGS[50/*"findData"*/], 1, ::STRINGS[51/*"function(ke...*/])));
}

static void Node_build(uType* type)
{
    ::STRINGS[49] = uString::Const("_findData");
    ::STRINGS[50] = uString::Const("findData");
    ::STRINGS[51] = uString::Const("function(key) { var res = Observable(); this._findData(function(data) { res.value = data; }, key); return res.inner().notNull(); }");
    ::STRINGS[52] = uString::Const("Incomplete or duplicate rooting: ");
    ::STRINGS[53] = uString::Const("/");
    ::STRINGS[54] = uString::Const("Node is already rooted with a different parent");
    ::STRINGS[55] = uString::Const("Invalid RootStage post rooting: ");
    ::STRINGS[56] = uString::Const("  ");
    ::STRINGS[57] = uString::Const(", Name: ");
    ::STRINGS[58] = uString::Const("Incomplete or duplicate unrooting: ");
    ::TYPES[48] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof());
    ::TYPES[49] = ::g::Fuse::Binding_typeof()->Array();
    ::TYPES[50] = ::g::Uno::Type_typeof();
    ::TYPES[51] = ::g::Fuse::Scripting::ScriptMember_typeof()->Array();
    ::TYPES[52] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(Node_typeof());
    ::TYPES[53] = ::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), Node_typeof(), uObject_typeof()->Array());
    ::TYPES[54] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[55] = ::g::Uno::String_typeof();
    ::TYPES[56] = ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof());
    ::TYPES[57] = ::g::Uno::Threading::IDispatcher_typeof();
    ::TYPES[3] = ::g::Uno::Action_typeof();
    ::TYPES[58] = ::g::Fuse::Binding_typeof();
    ::TYPES[59] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Binding_typeof());
    ::TYPES[5] = ::g::Uno::Action1_typeof()->MakeType(Node_typeof());
    ::TYPES[60] = ::g::Uno::UX::Selector_typeof();
    ::TYPES[61] = ::g::Fuse::Scripting::IObject_typeof();
    ::TYPES[62] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof());
    ::TYPES[63] = ::g::Uno::EventHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Node_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Node_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Node_type, interface3));
    type->SetFields(1,
        uObject_typeof(), offsetof(::g::Fuse::Node, _bindings), 0,
        ::g::Uno::UX::Selector_typeof(), offsetof(::g::Fuse::Node, _name), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Node, _parent), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Node, _preservedRootFrame), 0,
        ::g::Fuse::Properties_typeof(), offsetof(::g::Fuse::Node, _properties), 0,
        ::g::Fuse::RootStage_typeof(), offsetof(::g::Fuse::Node, _rootStage), 0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Node, _scriptContext), 0,
        uObject_typeof(), offsetof(::g::Fuse::Node, _scriptObject), 0,
        Node_typeof(), offsetof(::g::Fuse::Node, OverrideContextParent), uFieldFlagsWeak,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Node, DataContextChanged1), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Node, RootingCompleted1), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Node, Unrooted1), 0,
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), (uintptr_t)&::g::Fuse::Node::_emptyBindings_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::Node::_hasRootCapture_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::Node::_rootCaptureIndex_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(20,
        new uFunction("Add", NULL, (void*)Node__Add_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Binding_typeof()),
        new uFunction("get_Bindings", NULL, (void*)Node__get_Bindings_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), 0),
        new uFunction("get_ContextParent", NULL, (void*)Node__get_ContextParent_fn, 0, false, Node_typeof(), 0),
        new uFunction("add_DataContextChanged", NULL, (void*)Node__add_DataContextChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_DataContextChanged", NULL, (void*)Node__remove_DataContextChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("FindNodeByName", NULL, (void*)Node__FindNodeByName_fn, 0, false, Node_typeof(), 2, ::g::Uno::UX::Selector_typeof(), ::g::Uno::Predicate_typeof()->MakeType(Node_typeof())),
        new uFunction("GetFirstData", NULL, (void*)Node__GetFirstData_fn, 0, false, uObject_typeof(), 0),
        new uFunction("Insert", NULL, (void*)Node__Insert_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Fuse::Binding_typeof()),
        new uFunction("get_IsRootingCompleted", NULL, (void*)Node__get_IsRootingCompleted_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsRootingStarted", NULL, (void*)Node__get_IsRootingStarted_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Name", NULL, (void*)Node__get_Name_fn, 0, false, ::g::Uno::UX::Selector_typeof(), 0),
        new uFunction("set_Name", NULL, (void*)Node__set_Name_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Selector_typeof()),
        new uFunction("OnDataContextChanged", NULL, (void*)Node__OnDataContextChanged_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("OnSubtreeDataContextChanged", NULL, NULL, offsetof(Node_type, fp_OnSubtreeDataContextChanged), false, uVoid_typeof(), 0),
        new uFunction("get_Parent", NULL, (void*)Node__get_Parent_fn, 0, false, ::g::Fuse::Visual_typeof(), 0),
        new uFunction("get_Properties", NULL, (void*)Node__get_Properties_fn, 0, false, ::g::Fuse::Properties_typeof(), 0),
        new uFunction("Remove", NULL, (void*)Node__Remove_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Fuse::Binding_typeof()),
        new uFunction("SubtreeToString", NULL, (void*)Node__SubtreeToString_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("TryGetResource", NULL, NULL, offsetof(Node_type, fp_TryGetResource), false, ::g::Uno::Bool_typeof(), 3, ::g::Uno::String_typeof(), ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof()), uObject_typeof()->ByRef()),
        new uFunction("VisitSubtree", NULL, NULL, offsetof(Node_type, fp_VisitSubtree), false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(Node_typeof())));
}

Node_type* Node_typeof()
{
    static uSStrong<Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 16;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Node);
    options.TypeSize = sizeof(Node_type);
    type = (Node_type*)uClassType::New("Fuse.Node", options);
    type->fp_build_ = Node_build;
    type->fp_cctor_ = Node__cctor__fn;
    type->fp_AppendSubtreeData = Node__AppendSubtreeData_fn;
    type->fp_GetImplicitDataForChild = Node__GetImplicitDataForChild_fn;
    type->fp_GetLastNodeInGroup = Node__GetLastNodeInGroup_fn;
    type->fp_OnPreserveRootFrame = Node__OnPreserveRootFrame_fn;
    type->fp_OnRooted = Node__OnRooted_fn;
    type->fp_OnSubtreeDataContextChanged = Node__OnSubtreeDataContextChanged_fn;
    type->fp_OnUnrooted = Node__OnUnrooted_fn;
    type->fp_SoftDispose = Node__SoftDispose_fn;
    type->fp_SubtreeToString1 = Node__SubtreeToString1_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Node__ToString_fn;
    type->fp_TryGetResource = Node__TryGetResource_fn;
    type->fp_VisitSubtree = Node__VisitSubtree_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))Node__Remove_fn;
    return type;
}

// protected generated Node() :3839
void Node__ctor_1_fn(Node* __this)
{
    __this->ctor_1();
}

// private static void _findData(Fuse.Scripting.Context c, Fuse.Node n, object[] args) :4206
void Node___findData_fn(::g::Fuse::Scripting::Context* c, Node* n, uArray* args)
{
    Node::_findData(c, n, args);
}

// public void Add(Fuse.Binding item) :4012
void Node__Add_fn(Node* __this, ::g::Fuse::Binding* item)
{
    __this->Add(item);
}

// protected internal virtual void AppendSubtreeData(Uno.Collections.List<object> result) :4121
void Node__AppendSubtreeData_fn(Node* __this, ::g::Uno::Collections::List* result)
{
}

// private Fuse.Binding get_Binding() :3960
void Node__get_Binding_fn(Node* __this, ::g::Fuse::Binding** __retval)
{
    *__retval = __this->Binding();
}

// private Uno.Collections.List<Fuse.Binding> get_BindingList() :3961
void Node__get_BindingList_fn(Node* __this, ::g::Uno::Collections::List** __retval)
{
    *__retval = __this->BindingList();
}

// public Uno.Collections.IList<Fuse.Binding> get_Bindings() :3956
void Node__get_Bindings_fn(Node* __this, uObject** __retval)
{
    *__retval = __this->Bindings();
}

// internal static bool CaptureRooting() :4396
void Node__CaptureRooting_fn(bool* __retval)
{
    *__retval = Node::CaptureRooting();
}

// public Fuse.Node get_ContextParent() :3882
void Node__get_ContextParent_fn(Node* __this, Node** __retval)
{
    *__retval = __this->ContextParent();
}

// public generated void add_DataContextChanged(Uno.EventHandler value) :4156
void Node__add_DataContextChanged_fn(Node* __this, uDelegate* value)
{
    __this->add_DataContextChanged(value);
}

// public generated void remove_DataContextChanged(Uno.EventHandler value) :4156
void Node__remove_DataContextChanged_fn(Node* __this, uDelegate* value)
{
    __this->remove_DataContextChanged(value);
}

// private int DistanceTo(Fuse.Node obj, int reference) :4317
void Node__DistanceTo_fn(Node* __this, Node* obj, int* reference, int* __retval)
{
    *__retval = __this->DistanceTo(obj, *reference);
}

// public Fuse.Node FindNodeByName(Uno.UX.Selector name, [Uno.Predicate<Fuse.Node> acceptor]) :4292
void Node__FindNodeByName_fn(Node* __this, ::g::Uno::UX::Selector* name, uDelegate* acceptor, Node** __retval)
{
    *__retval = __this->FindNodeByName(*name, acceptor);
}

// private Fuse.Scripting.Context Fuse.Scripting.IScriptObject.get_ScriptContext() :3851
void Node__FuseScriptingIScriptObjectget_ScriptContext_fn(Node* __this, ::g::Fuse::Scripting::Context** __retval)
{
    uStackFrame __("Fuse.Node", "Fuse.Scripting.IScriptObject.get_ScriptContext()");
    return *__retval = __this->_scriptContext, void();
}

// private object Fuse.Scripting.IScriptObject.get_ScriptObject() :3846
void Node__FuseScriptingIScriptObjectget_ScriptObject_fn(Node* __this, uObject** __retval)
{
    uStackFrame __("Fuse.Node", "Fuse.Scripting.IScriptObject.get_ScriptObject()");
    return *__retval = __this->_scriptObject, void();
}

// private void Fuse.Scripting.IScriptObject.SetScriptObject(object obj, Fuse.Scripting.Context context) :3854
void Node__FuseScriptingIScriptObjectSetScriptObject_fn(Node* __this, uObject* obj, ::g::Fuse::Scripting::Context* context)
{
    uStackFrame __("Fuse.Node", "Fuse.Scripting.IScriptObject.SetScriptObject(object,Fuse.Scripting.Context)");
    __this->_scriptObject = obj;
    __this->_scriptContext = context;
}

// public object GetFirstData() :4125
void Node__GetFirstData_fn(Node* __this, uObject** __retval)
{
    *__retval = __this->GetFirstData();
}

// protected internal virtual void GetImplicitDataForChild(Fuse.Node child, Uno.Collections.List<object> result) :4117
void Node__GetImplicitDataForChild_fn(Node* __this, Node* child, ::g::Uno::Collections::List* result)
{
}

// internal virtual Fuse.Node GetLastNodeInGroup() :3931
void Node__GetLastNodeInGroup_fn(Node* __this, Node** __retval)
{
    uStackFrame __("Fuse.Node", "GetLastNodeInGroup()");
    return *__retval = __this, void();
}

// private bool HasInSubtree(Fuse.Node c) :4333
void Node__HasInSubtree_fn(Node* __this, Node* c, bool* __retval)
{
    *__retval = __this->HasInSubtree(c);
}

// public void Insert(int index, Fuse.Binding item) :4049
void Node__Insert_fn(Node* __this, int* index, ::g::Fuse::Binding* item)
{
    __this->Insert(*index, item);
}

// internal bool get_IsPreservedRootFrame() :4528
void Node__get_IsPreservedRootFrame_fn(Node* __this, bool* __retval)
{
    *__retval = __this->IsPreservedRootFrame();
}

// internal static bool IsRootCapture(int index) :4391
void Node__IsRootCapture_fn(int* index, bool* __retval)
{
    *__retval = Node::IsRootCapture(*index);
}

// public bool get_IsRootingCompleted() :4378
void Node__get_IsRootingCompleted_fn(Node* __this, bool* __retval)
{
    *__retval = __this->IsRootingCompleted();
}

// public bool get_IsRootingStarted() :4373
void Node__get_IsRootingStarted_fn(Node* __this, bool* __retval)
{
    *__retval = __this->IsRootingStarted();
}

// internal bool get_IsUnrooted() :4382
void Node__get_IsUnrooted_fn(Node* __this, bool* __retval)
{
    *__retval = __this->IsUnrooted();
}

// internal bool get_IsUnrooting() :4380
void Node__get_IsUnrooting_fn(Node* __this, bool* __retval)
{
    *__retval = __this->IsUnrooting();
}

// private void IterPreserveRootFrame(Fuse.Node n) :4543
void Node__IterPreserveRootFrame_fn(Node* __this, Node* n)
{
    __this->IterPreserveRootFrame(n);
}

// private void MakeBindingList(Fuse.Binding newItem) :3963
void Node__MakeBindingList_fn(Node* __this, ::g::Fuse::Binding* newItem)
{
    __this->MakeBindingList(newItem);
}

// public Uno.UX.Selector get_Name() :4270
void Node__get_Name_fn(Node* __this, ::g::Uno::UX::Selector* __retval)
{
    *__retval = __this->Name();
}

// public void set_Name(Uno.UX.Selector value) :4271
void Node__set_Name_fn(Node* __this, ::g::Uno::UX::Selector* value)
{
    __this->Name(*value);
}

// public void OnDataContextChanged() :4140
void Node__OnDataContextChanged_fn(Node* __this)
{
    __this->OnDataContextChanged();
}

// internal virtual void OnPreserveRootFrame() :4548
void Node__OnPreserveRootFrame_fn(Node* __this)
{
    uStackFrame __("Fuse.Node", "OnPreserveRootFrame()");
    __this->_preservedRootFrame = ::g::Fuse::UpdateManager::FrameIndex();
}

// protected virtual void OnRooted() :4471
void Node__OnRooted_fn(Node* __this)
{
    uStackFrame __("Fuse.Node", "OnRooted()");
    __this->RootBindings();
}

// public virtual void OnSubtreeDataContextChanged() :4147
void Node__OnSubtreeDataContextChanged_fn(Node* __this)
{
}

// protected virtual void OnUnrooted() :4500
void Node__OnUnrooted_fn(Node* __this)
{
    uStackFrame __("Fuse.Node", "OnUnrooted()");
    __this->UnrootBindings();
}

// public Fuse.Visual get_Parent() :3874
void Node__get_Parent_fn(Node* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Parent();
}

// internal void PreserveRootFrame() :4538
void Node__PreserveRootFrame_fn(Node* __this)
{
    __this->PreserveRootFrame();
}

// public Fuse.Properties get_Properties() :3864
void Node__get_Properties_fn(Node* __this, ::g::Fuse::Properties** __retval)
{
    *__retval = __this->Properties();
}

// internal static void Relate(Fuse.Visual parent, Fuse.Node child) :4505
void Node__Relate_fn(::g::Fuse::Visual* parent, Node* child)
{
    Node::Relate(parent, child);
}

// internal static void ReleaseRooting(bool captured) :4409
void Node__ReleaseRooting_fn(bool* captured)
{
    Node::ReleaseRooting(*captured);
}

// public bool Remove(Fuse.Binding item) :4021
void Node__Remove_fn(Node* __this, ::g::Fuse::Binding* item, bool* __retval)
{
    *__retval = __this->Remove(item);
}

// private void Root(Fuse.Binding b) :3972
void Node__Root_fn(Node* __this, ::g::Fuse::Binding* b)
{
    __this->Root(b);
}

// private void RootBindings() :3982
void Node__RootBindings_fn(Node* __this)
{
    __this->RootBindings();
}

// internal static int get_RootCaptureIndex() :4390
void Node__get_RootCaptureIndex_fn(int* __retval)
{
    *__retval = Node::RootCaptureIndex();
}

// internal generated void add_RootingCompleted(Uno.Action value) :4466
void Node__add_RootingCompleted_fn(Node* __this, uDelegate* value)
{
    __this->add_RootingCompleted(value);
}

// internal generated void remove_RootingCompleted(Uno.Action value) :4466
void Node__remove_RootingCompleted_fn(Node* __this, uDelegate* value)
{
    __this->remove_RootingCompleted(value);
}

// internal void RootInternal(Fuse.Visual parent) :4419
void Node__RootInternal_fn(Node* __this, ::g::Fuse::Visual* parent)
{
    __this->RootInternal(parent);
}

// private void RootInternalImpl(Fuse.Visual parent) :4432
void Node__RootInternalImpl_fn(Node* __this, ::g::Fuse::Visual* parent)
{
    __this->RootInternalImpl(parent);
}

// protected virtual void SoftDispose() :4522
void Node__SoftDispose_fn(Node* __this)
{
}

// public string SubtreeToString() :3914
void Node__SubtreeToString_fn(Node* __this, uString** __retval)
{
    *__retval = __this->SubtreeToString();
}

// protected virtual void SubtreeToString(Uno.Text.StringBuilder sb, int indent) :3921
void Node__SubtreeToString1_fn(Node* __this, ::g::Uno::Text::StringBuilder* sb, int* indent)
{
    uStackFrame __("Fuse.Node", "SubtreeToString(Uno.Text.StringBuilder,int)");
    int indent_ = *indent;

    for (int i = 0; i < indent_; i++)
        uPtr(sb)->Append2(::STRINGS[56/*"  "*/]);

    uPtr(sb)->AppendLine(__this->ToString());
}

// public override sealed string ToString() :3906
void Node__ToString_fn(Node* __this, uString** __retval)
{
    uStackFrame __("Fuse.Node", "ToString()");
    uString* ret8;
    uString* ret9;

    if (!__this->Name().IsNull())
        return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2((::g::Uno::Object__ToString_fn(__this, &ret8), ret8), ::STRINGS[57/*", Name: "*/]), __this->Name().ToString(::TYPES[60/*Uno.UX.Selector*/])), void();
    else 
        return *__retval = (::g::Uno::Object__ToString_fn(__this, &ret9), ret9), void();
}

// private static object TryFindData(object obj, string key) :4245
void Node__TryFindData_fn(uObject* obj, uString* key, uObject** __retval)
{
    *__retval = Node::TryFindData(obj, key);
}

// public virtual bool TryGetResource(string key, Uno.Predicate<object> acceptor, object& resource) :3892
void Node__TryGetResource_fn(Node* __this, uString* key, uDelegate* acceptor, uObject** resource, bool* __retval)
{
    uStackFrame __("Fuse.Node", "TryGetResource(string,Uno.Predicate<object>,object&)");

    if (__this->ContextParent() != NULL)
        return *__retval = uPtr(__this->ContextParent())->TryGetResource(key, acceptor, resource), void();

    *resource = NULL;
    return *__retval = false, void();
}

// private void Uno.Collections.ICollection<Fuse.Binding>.Clear() :4006
void Node__UnoCollectionsICollectionFuseBindingClear_fn(Node* __this)
{
    uStackFrame __("Fuse.Node", "Uno.Collections.ICollection<Fuse.Binding>.Clear()");

    if (__this->IsRootingStarted())
        __this->UnrootBindings();

    __this->_bindings = NULL;
}

// private bool Uno.Collections.ICollection<Fuse.Binding>.Contains(Fuse.Binding item) :4031
void Node__UnoCollectionsICollectionFuseBindingContains_fn(Node* __this, ::g::Fuse::Binding* item, bool* __retval)
{
    uStackFrame __("Fuse.Node", "Uno.Collections.ICollection<Fuse.Binding>.Contains(Fuse.Binding)");
    bool ret10;

    if (__this->_bindings == item)
        return *__retval = true, void();

    ::g::Uno::Collections::List* bl = __this->BindingList();

    if (bl != NULL)
        return *__retval = (::g::Uno::Collections::List__Contains_fn(uPtr(bl), item, &ret10), ret10), void();

    return *__retval = false, void();
}

// private int Uno.Collections.ICollection<Fuse.Binding>.get_Count() :4041
void Node__UnoCollectionsICollectionFuseBindingget_Count_fn(Node* __this, int* __retval)
{
    uStackFrame __("Fuse.Node", "Uno.Collections.ICollection<Fuse.Binding>.get_Count()");

    if (__this->_bindings == NULL)
        return *__retval = 0, void();

    if (uIs((uObject*)__this->_bindings, ::TYPES[58/*Fuse.Binding*/]))
        return *__retval = 1, void();

    return *__retval = uPtr(__this->BindingList())->Count(), void();
}

// private Uno.Collections.IEnumerator<Fuse.Binding> Uno.Collections.IEnumerable<Fuse.Binding>.GetEnumerator() :4099
void Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn(Node* __this, uObject** __retval)
{
    uStackFrame __("Fuse.Node", "Uno.Collections.IEnumerable<Fuse.Binding>.GetEnumerator()");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Binding*> > ret11;

    if (__this->_bindings == NULL)
        return *__retval = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Node::_emptyBindings()), ::TYPES[62/*Uno.Collections.IEnumerable<Fuse.Binding>*/])), void();

    if (uIs((uObject*)__this->_bindings, ::TYPES[58/*Fuse.Binding*/]))
        __this->MakeBindingList(NULL);

    return *__retval = uBox(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::TYPES[58/*Fuse.Binding*/]), (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(__this->BindingList()), &ret11), ret11)), void();
}

// private Fuse.Binding Uno.Collections.IList<Fuse.Binding>.get_Item(int index) :4080
void Node__UnoCollectionsIListFuseBindingget_Item_fn(Node* __this, int* index, ::g::Fuse::Binding** __retval)
{
    uStackFrame __("Fuse.Node", "Uno.Collections.IList<Fuse.Binding>.get_Item(int)");
    int index_ = *index;
    ::g::Fuse::Binding* ret13;

    if (__this->_bindings == NULL)
        U_THROW(::g::Uno::Exception::New1());

    ::g::Fuse::Binding* b = __this->Binding();

    if (b != NULL)
    {
        if (index_ != 0)
            U_THROW(::g::Uno::Exception::New1());

        return *__retval = b, void();
    }
    else 
        return *__retval = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->BindingList()), uCRef<int>(index_), &ret13), ret13), void();
}

// private void Uno.Collections.IList<Fuse.Binding>.RemoveAt(int index) :4061
void Node__UnoCollectionsIListFuseBindingRemoveAt_fn(Node* __this, int* index)
{
    uStackFrame __("Fuse.Node", "Uno.Collections.IList<Fuse.Binding>.RemoveAt(int)");
    int index_ = *index;

    if (__this->_bindings == NULL)
        U_THROW(::g::Uno::Exception::New1());

    ::g::Fuse::Binding* b = __this->Binding();

    if (b != NULL)
    {
        if (index_ != 0)
            U_THROW(::g::Uno::Exception::New1());

        __this->Unroot(b);
        __this->_bindings = NULL;
    }
    else 
        uPtr(__this->BindingList())->RemoveAt(index_);
}

// internal static void Unrelate(Fuse.Visual parent, Fuse.Node child) :4513
void Node__Unrelate_fn(::g::Fuse::Visual* parent, Node* child)
{
    Node::Unrelate(parent, child);
}

// private void Unroot(Fuse.Binding b) :3977
void Node__Unroot_fn(Node* __this, ::g::Fuse::Binding* b)
{
    __this->Unroot(b);
}

// private void UnrootBindings() :3994
void Node__UnrootBindings_fn(Node* __this)
{
    __this->UnrootBindings();
}

// internal generated void add_Unrooted(Uno.Action value) :4476
void Node__add_Unrooted_fn(Node* __this, uDelegate* value)
{
    __this->add_Unrooted(value);
}

// internal generated void remove_Unrooted(Uno.Action value) :4476
void Node__remove_Unrooted_fn(Node* __this, uDelegate* value)
{
    __this->remove_Unrooted(value);
}

// internal void UnrootInternal() :4478
void Node__UnrootInternal_fn(Node* __this)
{
    __this->UnrootInternal();
}

// public virtual void VisitSubtree(Uno.Action<Fuse.Node> action) :3901
void Node__VisitSubtree_fn(Node* __this, uDelegate* action)
{
    uStackFrame __("Fuse.Node", "VisitSubtree(Uno.Action<Fuse.Node>)");
    uPtr(action)->InvokeVoid(__this);
}

uSStrong<uObject*> Node::_emptyBindings_;
bool Node::_hasRootCapture_;
int Node::_rootCaptureIndex_;

// protected generated Node() [instance] :3839
void Node::ctor_1()
{
    uStackFrame __("Fuse.Node", ".ctor()");
    _preservedRootFrame = -1;
    ctor_();
}

// public void Add(Fuse.Binding item) [instance] :4012
void Node::Add(::g::Fuse::Binding* item)
{
    uStackFrame __("Fuse.Node", "Add(Fuse.Binding)");

    if (_bindings == NULL)
        _bindings = item;
    else  if (uIs((uObject*)_bindings, ::TYPES[58/*Fuse.Binding*/]))
        MakeBindingList(item);
    else 
        ::g::Uno::Collections::List__Add_fn(uPtr(BindingList()), item);

    Root(item);
}

// private Fuse.Binding get_Binding() [instance] :3960
::g::Fuse::Binding* Node::Binding()
{
    uStackFrame __("Fuse.Node", "get_Binding()");
    return uAs< ::g::Fuse::Binding*>(_bindings, ::TYPES[58/*Fuse.Binding*/]);
}

// private Uno.Collections.List<Fuse.Binding> get_BindingList() [instance] :3961
::g::Uno::Collections::List* Node::BindingList()
{
    uStackFrame __("Fuse.Node", "get_BindingList()");
    return uAs< ::g::Uno::Collections::List*>(_bindings, ::TYPES[59/*Uno.Collections.List<Fuse.Binding>*/]);
}

// public Uno.Collections.IList<Fuse.Binding> get_Bindings() [instance] :3956
uObject* Node::Bindings()
{
    uStackFrame __("Fuse.Node", "get_Bindings()");
    return (uObject*)this;
}

// public Fuse.Node get_ContextParent() [instance] :3882
Node* Node::ContextParent()
{
    uStackFrame __("Fuse.Node", "get_ContextParent()");
    Node* ind1 = OverrideContextParent;
    return (ind1 != NULL) ? ind1 : (::g::Fuse::Visual*)Parent();
}

// public generated void add_DataContextChanged(Uno.EventHandler value) [instance] :4156
void Node::add_DataContextChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Node", "add_DataContextChanged(Uno.EventHandler)");
    DataContextChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(DataContextChanged1, value), ::TYPES[63/*Uno.EventHandler*/]);
}

// public generated void remove_DataContextChanged(Uno.EventHandler value) [instance] :4156
void Node::remove_DataContextChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Node", "remove_DataContextChanged(Uno.EventHandler)");
    DataContextChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(DataContextChanged1, value), ::TYPES[63/*Uno.EventHandler*/]);
}

// private int DistanceTo(Fuse.Node obj, int reference) [instance] :4317
int Node::DistanceTo(Node* obj, int reference)
{
    uStackFrame __("Fuse.Node", "DistanceTo(Fuse.Node,int)");
    Node* p = this;
    int c = 0;

    while (p != NULL)
    {
        if (uPtr(p)->HasInSubtree(obj))
            return c;

        c++;

        if (c > reference)
            return c;

        p = uPtr(p)->Parent();
    }

    return 2147483647;
}

// public Fuse.Node FindNodeByName(Uno.UX.Selector name, [Uno.Predicate<Fuse.Node> acceptor]) [instance] :4292
Node* Node::FindNodeByName(::g::Uno::UX::Selector name, uDelegate* acceptor)
{
    uStackFrame __("Fuse.Node", "FindNodeByName(Uno.UX.Selector,[Uno.Predicate<Fuse.Node>])");
    Node* ret3;
    bool ret4;
    ::g::Uno::Collections::List* objs = ::g::Fuse::NameRegistry::GetObjectsWithName(name);

    if (objs == NULL)
        return NULL;

    int bestDistance = 2147483647;
    Node* best = NULL;

    for (int i = 0; i < uPtr(objs)->Count(); i++)
    {
        Node* n = (::g::Uno::Collections::List__get_Item_fn(uPtr(objs), uCRef<int>(i), &ret3), ret3);

        if (::g::Uno::Delegate::op_Inequality(acceptor, NULL) && !(uPtr(acceptor)->Invoke(&ret4, 1, n), ret4))
            continue;

        int dist = DistanceTo(n, bestDistance);

        if (dist < bestDistance)
        {
            bestDistance = dist;
            best = n;
        }

        if (bestDistance == 0)
            return best;
    }

    return best;
}

// public object GetFirstData() [instance] :4125
uObject* Node::GetFirstData()
{
    uStackFrame __("Fuse.Node", "GetFirstData()");
    uObject* ret5;
    Node* n = this;
    ::g::Uno::Collections::List* list = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[56/*Uno.Collections.List<object>*/]);

    while (n != NULL)
    {
        uPtr(n)->AppendSubtreeData(list);

        if (n->ContextParent() != NULL)
            uPtr(uPtr(n)->ContextParent())->GetImplicitDataForChild(n, list);

        if (uPtr(list)->Count() > 0)
            return (::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(0), &ret5), ret5);

        n = uPtr(n)->ContextParent();
    }

    return NULL;
}

// private bool HasInSubtree(Fuse.Node c) [instance] :4333
bool Node::HasInSubtree(Node* c)
{
    uStackFrame __("Fuse.Node", "HasInSubtree(Fuse.Node)");

    if (c == this)
        return true;

    if (c != NULL)
    {
        ::g::Fuse::Visual* p = uPtr(c)->Parent();

        if (p != NULL)
            return HasInSubtree(p);
    }

    return false;
}

// public void Insert(int index, Fuse.Binding item) [instance] :4049
void Node::Insert(int index, ::g::Fuse::Binding* item)
{
    uStackFrame __("Fuse.Node", "Insert(int,Fuse.Binding)");

    if (_bindings == NULL)
        _bindings = item;
    else 
    {
        if (uIs((uObject*)_bindings, ::TYPES[58/*Fuse.Binding*/]))
            MakeBindingList(NULL);

        ::g::Uno::Collections::List__Insert_fn(uPtr(BindingList()), uCRef<int>(index), item);
    }

    Root(item);
}

// internal bool get_IsPreservedRootFrame() [instance] :4528
bool Node::IsPreservedRootFrame()
{
    uStackFrame __("Fuse.Node", "get_IsPreservedRootFrame()");
    return _preservedRootFrame == ::g::Fuse::UpdateManager::FrameIndex();
}

// public bool get_IsRootingCompleted() [instance] :4378
bool Node::IsRootingCompleted()
{
    uStackFrame __("Fuse.Node", "get_IsRootingCompleted()");
    return _rootStage == 2;
}

// public bool get_IsRootingStarted() [instance] :4373
bool Node::IsRootingStarted()
{
    uStackFrame __("Fuse.Node", "get_IsRootingStarted()");
    return (_rootStage == 1) || (_rootStage == 2);
}

// internal bool get_IsUnrooted() [instance] :4382
bool Node::IsUnrooted()
{
    uStackFrame __("Fuse.Node", "get_IsUnrooted()");
    return _rootStage == 0;
}

// internal bool get_IsUnrooting() [instance] :4380
bool Node::IsUnrooting()
{
    uStackFrame __("Fuse.Node", "get_IsUnrooting()");
    return _rootStage == 3;
}

// private void IterPreserveRootFrame(Fuse.Node n) [instance] :4543
void Node::IterPreserveRootFrame(Node* n)
{
    uStackFrame __("Fuse.Node", "IterPreserveRootFrame(Fuse.Node)");
    uPtr(n)->OnPreserveRootFrame();
}

// private void MakeBindingList(Fuse.Binding newItem) [instance] :3963
void Node::MakeBindingList(::g::Fuse::Binding* newItem)
{
    uStackFrame __("Fuse.Node", "MakeBindingList(Fuse.Binding)");
    ::g::Uno::Collections::List* list = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[59/*Uno.Collections.List<Fuse.Binding>*/]);
    ::g::Fuse::Binding* oldItem = uAs< ::g::Fuse::Binding*>(_bindings, ::TYPES[58/*Fuse.Binding*/]);

    if (oldItem != NULL)
        ::g::Uno::Collections::List__Add_fn(uPtr(list), oldItem);

    if (newItem != NULL)
        ::g::Uno::Collections::List__Add_fn(uPtr(list), newItem);

    _bindings = list;
}

// public Uno.UX.Selector get_Name() [instance] :4270
::g::Uno::UX::Selector Node::Name()
{
    uStackFrame __("Fuse.Node", "get_Name()");
    return _name;
}

// public void set_Name(Uno.UX.Selector value) [instance] :4271
void Node::Name(::g::Uno::UX::Selector value)
{
    uStackFrame __("Fuse.Node", "set_Name(Uno.UX.Selector)");

    if (::g::Uno::UX::Selector__op_Inequality(_name, value))
    {
        _name = value;

        if (IsRootingStarted())
            ::g::Fuse::NameRegistry::SetName(this, _name);
    }
}

// public void OnDataContextChanged() [instance] :4140
void Node::OnDataContextChanged()
{
    uStackFrame __("Fuse.Node", "OnDataContextChanged()");

    if (::g::Uno::Delegate::op_Inequality(DataContextChanged1, NULL))
        uPtr(DataContextChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// public Fuse.Visual get_Parent() [instance] :3874
::g::Fuse::Visual* Node::Parent()
{
    uStackFrame __("Fuse.Node", "get_Parent()");
    return _parent;
}

// internal void PreserveRootFrame() [instance] :4538
void Node::PreserveRootFrame()
{
    uStackFrame __("Fuse.Node", "PreserveRootFrame()");
    VisitSubtree(uDelegate::New(::TYPES[5/*Uno.Action<Fuse.Node>*/], (void*)Node__IterPreserveRootFrame_fn, this));
}

// public Fuse.Properties get_Properties() [instance] :3864
::g::Fuse::Properties* Node::Properties()
{
    uStackFrame __("Fuse.Node", "get_Properties()");

    if (_properties == NULL)
        _properties = ::g::Fuse::Properties::New1();

    return _properties;
}

// public bool Remove(Fuse.Binding item) [instance] :4021
bool Node::Remove(::g::Fuse::Binding* item)
{
    uStackFrame __("Fuse.Node", "Remove(Fuse.Binding)");
    bool ret6;
    Unroot(item);

    if (_bindings == item)
    {
        _bindings = NULL;
        return true;
    }

    if ((_bindings == NULL) || uIs((uObject*)_bindings, ::TYPES[58/*Fuse.Binding*/]))
        return false;

    return (::g::Uno::Collections::List__Remove_fn(uPtr(BindingList()), item, &ret6), ret6);
}

// private void Root(Fuse.Binding b) [instance] :3972
void Node::Root(::g::Fuse::Binding* b)
{
    uStackFrame __("Fuse.Node", "Root(Fuse.Binding)");

    if (IsRootingStarted())
        uPtr(b)->Root(this);
}

// private void RootBindings() [instance] :3982
void Node::RootBindings()
{
    uStackFrame __("Fuse.Node", "RootBindings()");
    ::g::Fuse::Binding* ret7;

    if (_bindings == NULL)
        return;

    if (Binding() != NULL)
        uPtr(Binding())->Root(this);
    else 
    {
        ::g::Uno::Collections::List* bl = BindingList();

        for (int i = 0; i < uPtr(bl)->Count(); i++)
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(bl), uCRef<int>(i), &ret7), ret7))->Root(this);
    }
}

// internal generated void add_RootingCompleted(Uno.Action value) [instance] :4466
void Node::add_RootingCompleted(uDelegate* value)
{
    uStackFrame __("Fuse.Node", "add_RootingCompleted(Uno.Action)");
    RootingCompleted1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(RootingCompleted1, value), ::TYPES[3/*Uno.Action*/]);
}

// internal generated void remove_RootingCompleted(Uno.Action value) [instance] :4466
void Node::remove_RootingCompleted(uDelegate* value)
{
    uStackFrame __("Fuse.Node", "remove_RootingCompleted(Uno.Action)");
    RootingCompleted1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(RootingCompleted1, value), ::TYPES[3/*Uno.Action*/]);
}

// internal void RootInternal(Fuse.Visual parent) [instance] :4419
void Node::RootInternal(::g::Fuse::Visual* parent)
{
    uStackFrame __("Fuse.Node", "RootInternal(Fuse.Visual)");
    bool captured = Node::CaptureRooting();

    {
        const auto __finally_fun = [&]()
        {
            Node::ReleaseRooting(captured);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        RootInternalImpl(parent);
    }
}

// private void RootInternalImpl(Fuse.Visual parent) [instance] :4432
void Node::RootInternalImpl(::g::Fuse::Visual* parent)
{
    uStackFrame __("Fuse.Node", "RootInternalImpl(Fuse.Visual)");

    if (_rootStage != 0)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[52/*"Incomplete ...*/], this), ::STRINGS[53/*"/"*/]), ::g::Uno::UX::Selector__op_Implicit1(Name()))));

    if (_parent != NULL)
    {
        if (_parent != parent)
            U_THROW(::g::Uno::Exception::New2(::STRINGS[54/*"Node is alr...*/]));
        else 
            return;
    }

    _rootStage = 1;
    _parent = parent;

    if (::g::Uno::String::op_Inequality(::g::Uno::UX::Selector__op_Implicit1(Name()), NULL))
        ::g::Fuse::NameRegistry::SetName(this, Name());

    OnRooted();
    _rootStage = 2;

    if (::g::Uno::Delegate::op_Inequality(RootingCompleted1, NULL))
        uPtr(RootingCompleted1)->InvokeVoid();

    if (_rootStage != 2)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[55/*"Invalid Roo...*/], this), ::STRINGS[53/*"/"*/]), ::g::Uno::UX::Selector__op_Implicit1(Name()))));
}

// public string SubtreeToString() [instance] :3914
uString* Node::SubtreeToString()
{
    uStackFrame __("Fuse.Node", "SubtreeToString()");
    ::g::Uno::Text::StringBuilder* sb = ::g::Uno::Text::StringBuilder::New1();
    SubtreeToString1(sb, 0);
    return sb->ToString();
}

// private void Unroot(Fuse.Binding b) [instance] :3977
void Node::Unroot(::g::Fuse::Binding* b)
{
    uStackFrame __("Fuse.Node", "Unroot(Fuse.Binding)");

    if (IsRootingStarted())
        uPtr(b)->Unroot();
}

// private void UnrootBindings() [instance] :3994
void Node::UnrootBindings()
{
    uStackFrame __("Fuse.Node", "UnrootBindings()");
    ::g::Fuse::Binding* ret12;

    if (_bindings == NULL)
        return;

    if (Binding() != NULL)
        uPtr(Binding())->Unroot();
    else 
    {
        ::g::Uno::Collections::List* bl = BindingList();

        for (int i = 0; i < uPtr(bl)->Count(); i++)
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(bl), uCRef<int>(i), &ret12), ret12))->Unroot();
    }
}

// internal generated void add_Unrooted(Uno.Action value) [instance] :4476
void Node::add_Unrooted(uDelegate* value)
{
    uStackFrame __("Fuse.Node", "add_Unrooted(Uno.Action)");
    Unrooted1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Unrooted1, value), ::TYPES[3/*Uno.Action*/]);
}

// internal generated void remove_Unrooted(Uno.Action value) [instance] :4476
void Node::remove_Unrooted(uDelegate* value)
{
    uStackFrame __("Fuse.Node", "remove_Unrooted(Uno.Action)");
    Unrooted1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Unrooted1, value), ::TYPES[3/*Uno.Action*/]);
}

// internal void UnrootInternal() [instance] :4478
void Node::UnrootInternal()
{
    uStackFrame __("Fuse.Node", "UnrootInternal()");

    if (_rootStage == 0)
        return;

    if (_rootStage != 2)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[58/*"Incomplete ...*/], this), ::STRINGS[53/*"/"*/]), ::g::Uno::UX::Selector__op_Implicit1(Name()))));

    _rootStage = 3;
    OnUnrooted();

    if (::g::Uno::Delegate::op_Inequality(Unrooted1, NULL))
        uPtr(Unrooted1)->InvokeVoid();

    if (::g::Uno::String::op_Inequality(::g::Uno::UX::Selector__op_Implicit1(Name()), NULL))
        ::g::Fuse::NameRegistry::ClearName(this);

    OverrideContextParent = NULL;
    SoftDispose();
    _parent = NULL;
    _rootStage = 0;
}

// private static void _findData(Fuse.Scripting.Context c, Fuse.Node n, object[] args) [static] :4206
void Node::_findData(::g::Fuse::Scripting::Context* c, Node* n, uArray* args)
{
    uStackFrame __("Fuse.Node", "_findData(Fuse.Scripting.Context,Fuse.Node,object[])");
    Node_typeof()->Init();
    uObject* ret2;
    ::g::Fuse::Scripting::Function* callback = uAs< ::g::Fuse::Scripting::Function*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[54/*Fuse.Scripting.Function*/]);
    uString* key = uAs<uString*>(args->Strong<uObject*>(1), ::TYPES[55/*string*/]);

    if (::g::Uno::String::op_Equality(key, NULL))
        return;

    ::g::Uno::Collections::List* list = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[56/*Uno.Collections.List<object>*/]);
    n = uPtr(n)->ContextParent();
    bool first = false;

    while (n != NULL)
    {
        if (!first)
            uPtr(n)->AppendSubtreeData(list);

        first = false;

        if (uPtr(n)->ContextParent() != NULL)
            uPtr(n)->GetImplicitDataForChild(n, list);

        if (uPtr(list)->Count() > 0)
        {
            for (int i = 0; i < uPtr(list)->Count(); i++)
            {
                uObject* obj = (::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i), &ret2), ret2);
                uObject* res = Node::TryFindData(obj, key);

                if (res != NULL)
                {
                    ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(uPtr(c)->Dispatcher()), ::TYPES[57/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)Node__CallFuncClosure__Run_fn, Node__CallFuncClosure::New1(callback, res)));
                    return;
                }
            }

            uPtr(list)->Clear();
        }

        n = uPtr(n)->ContextParent();
    }
}

// internal static bool CaptureRooting() [static] :4396
bool Node::CaptureRooting()
{
    uStackFrame __("Fuse.Node", "CaptureRooting()");
    Node_typeof()->Init();

    if (Node::_hasRootCapture())
        return false;

    Node::_rootCaptureIndex()++;

    if (Node::_rootCaptureIndex() < 1)
        Node::_rootCaptureIndex() = 1;

    Node::_hasRootCapture() = true;
    return true;
}

// internal static bool IsRootCapture(int index) [static] :4391
bool Node::IsRootCapture(int index)
{
    uStackFrame __("Fuse.Node", "IsRootCapture(int)");
    Node_typeof()->Init();
    return Node::_hasRootCapture() && (index == Node::_rootCaptureIndex());
}

// internal static void Relate(Fuse.Visual parent, Fuse.Node child) [static] :4505
void Node::Relate(::g::Fuse::Visual* parent, Node* child)
{
    uStackFrame __("Fuse.Node", "Relate(Fuse.Visual,Fuse.Node)");
    Node_typeof()->Init();

    if (child != NULL)
    {
        if (uPtr(parent)->IsRootingStarted())
            uPtr(child)->RootInternal(parent);
    }
}

// internal static void ReleaseRooting(bool captured) [static] :4409
void Node::ReleaseRooting(bool captured)
{
    uStackFrame __("Fuse.Node", "ReleaseRooting(bool)");
    Node_typeof()->Init();

    if (!captured)
        return;

    Node::_hasRootCapture() = false;
}

// private static object TryFindData(object obj, string key) [static] :4245
uObject* Node::TryFindData(uObject* obj, uString* key)
{
    uStackFrame __("Fuse.Node", "TryFindData(object,string)");
    Node_typeof()->Init();
    uObject* om = uAs<uObject*>(obj, ::TYPES[61/*Fuse.Scripting.IObject*/]);

    if ((om != NULL) && ::g::Fuse::Scripting::IObject::ContainsKey(uInterface(uPtr(om), ::TYPES[61/*Fuse.Scripting.IObject*/]), key))
        return ::g::Fuse::Scripting::IObject::Item(uInterface(uPtr(om), ::TYPES[61/*Fuse.Scripting.IObject*/]), key);

    return NULL;
}

// internal static void Unrelate(Fuse.Visual parent, Fuse.Node child) [static] :4513
void Node::Unrelate(::g::Fuse::Visual* parent, Node* child)
{
    uStackFrame __("Fuse.Node", "Unrelate(Fuse.Visual,Fuse.Node)");
    Node_typeof()->Init();

    if ((child != NULL) && !uPtr(child)->IsUnrooting())
        uPtr(child)->UnrootInternal();
}

// internal static int get_RootCaptureIndex() [static] :4390
int Node::RootCaptureIndex()
{
    uStackFrame __("Fuse.Node", "get_RootCaptureIndex()");
    Node_typeof()->Init();
    return Node::_rootCaptureIndex();
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public sealed class OrthographicFrustum :8006
// {
static void OrthographicFrustum_build(uType* type)
{
    ::TYPES[32] = ::g::Fuse::ICommonViewport_typeof();
    type->SetInterfaces(
        ::g::Fuse::IFrustum_typeof(), offsetof(OrthographicFrustum_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::OrthographicFrustum, _hasLocalFromWorld), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::OrthographicFrustum, _hasOrigin), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::OrthographicFrustum, _hasSize), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::OrthographicFrustum, _localFromWorld), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::OrthographicFrustum, _origin), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::OrthographicFrustum, _size), 0);
    type->Reflection.SetFunctions(13,
        new uFunction("GetDepthRange", NULL, (void*)OrthographicFrustum__GetDepthRange_fn, 0, false, ::g::Uno::Float2_typeof(), 1, ::g::Fuse::ICommonViewport_typeof()),
        new uFunction("GetProjectionTransform", NULL, (void*)OrthographicFrustum__GetProjectionTransform_fn, 0, false, ::g::Uno::Float4x4_typeof(), 1, ::g::Fuse::ICommonViewport_typeof()),
        new uFunction("GetProjectionTransformInverse", NULL, (void*)OrthographicFrustum__GetProjectionTransformInverse_fn, 0, false, ::g::Uno::Float4x4_typeof(), 1, ::g::Fuse::ICommonViewport_typeof()),
        new uFunction("GetViewTransform", NULL, (void*)OrthographicFrustum__GetViewTransform_fn, 0, false, ::g::Uno::Float4x4_typeof(), 1, ::g::Fuse::ICommonViewport_typeof()),
        new uFunction("GetViewTransformInverse", NULL, (void*)OrthographicFrustum__GetViewTransformInverse_fn, 0, false, ::g::Uno::Float4x4_typeof(), 1, ::g::Fuse::ICommonViewport_typeof()),
        new uFunction("GetWorldPosition", NULL, (void*)OrthographicFrustum__GetWorldPosition_fn, 0, false, ::g::Uno::Float3_typeof(), 1, ::g::Fuse::ICommonViewport_typeof()),
        new uFunction("get_LocalFromWorld", NULL, (void*)OrthographicFrustum__get_LocalFromWorld_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("set_LocalFromWorld", NULL, (void*)OrthographicFrustum__set_LocalFromWorld_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4x4_typeof()),
        new uFunction(".ctor", NULL, (void*)OrthographicFrustum__New1_fn, 0, true, OrthographicFrustum_typeof(), 0),
        new uFunction("get_Origin", NULL, (void*)OrthographicFrustum__get_Origin_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_Origin", NULL, (void*)OrthographicFrustum__set_Origin_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_Size", NULL, (void*)OrthographicFrustum__get_Size_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_Size", NULL, (void*)OrthographicFrustum__set_Size_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()));
}

OrthographicFrustum_type* OrthographicFrustum_typeof()
{
    static uSStrong<OrthographicFrustum_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(OrthographicFrustum);
    options.TypeSize = sizeof(OrthographicFrustum_type);
    type = (OrthographicFrustum_type*)uClassType::New("Fuse.OrthographicFrustum", options);
    type->fp_build_ = OrthographicFrustum_build;
    type->fp_ctor_ = (void*)OrthographicFrustum__New1_fn;
    type->interface0.fp_GetProjectionTransform = (void(*)(uObject*, uObject*, ::g::Uno::Float4x4*))OrthographicFrustum__GetProjectionTransform_fn;
    type->interface0.fp_GetProjectionTransformInverse = (void(*)(uObject*, uObject*, ::g::Uno::Float4x4*))OrthographicFrustum__GetProjectionTransformInverse_fn;
    type->interface0.fp_GetViewTransform = (void(*)(uObject*, uObject*, ::g::Uno::Float4x4*))OrthographicFrustum__GetViewTransform_fn;
    type->interface0.fp_GetViewTransformInverse = (void(*)(uObject*, uObject*, ::g::Uno::Float4x4*))OrthographicFrustum__GetViewTransformInverse_fn;
    type->interface0.fp_GetDepthRange = (void(*)(uObject*, uObject*, ::g::Uno::Float2*))OrthographicFrustum__GetDepthRange_fn;
    type->interface0.fp_GetWorldPosition = (void(*)(uObject*, uObject*, ::g::Uno::Float3*))OrthographicFrustum__GetWorldPosition_fn;
    return type;
}

// public generated OrthographicFrustum() :8006
void OrthographicFrustum__ctor__fn(OrthographicFrustum* __this)
{
    __this->ctor_();
}

// public float2 GetDepthRange(Fuse.ICommonViewport viewport) :8078
void OrthographicFrustum__GetDepthRange_fn(OrthographicFrustum* __this, uObject* viewport, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetDepthRange(viewport);
}

// public float4x4 GetProjectionTransform(Fuse.ICommonViewport viewport) :8047
void OrthographicFrustum__GetProjectionTransform_fn(OrthographicFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetProjectionTransform(viewport);
}

// public float4x4 GetProjectionTransformInverse(Fuse.ICommonViewport viewport) :8060
void OrthographicFrustum__GetProjectionTransformInverse_fn(OrthographicFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetProjectionTransformInverse(viewport);
}

// public float4x4 GetViewTransform(Fuse.ICommonViewport viewport) :8052
void OrthographicFrustum__GetViewTransform_fn(OrthographicFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetViewTransform(viewport);
}

// public float4x4 GetViewTransformInverse(Fuse.ICommonViewport viewport) :8065
void OrthographicFrustum__GetViewTransformInverse_fn(OrthographicFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetViewTransformInverse(viewport);
}

// public float3 GetWorldPosition(Fuse.ICommonViewport viewport) :8073
void OrthographicFrustum__GetWorldPosition_fn(OrthographicFrustum* __this, uObject* viewport, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetWorldPosition(viewport);
}

// public float4x4 get_LocalFromWorld() :8039
void OrthographicFrustum__get_LocalFromWorld_fn(OrthographicFrustum* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->LocalFromWorld();
}

// public void set_LocalFromWorld(float4x4 value) :8040
void OrthographicFrustum__set_LocalFromWorld_fn(OrthographicFrustum* __this, ::g::Uno::Float4x4* value)
{
    __this->LocalFromWorld(*value);
}

// private float4x4 MatrixProjection(float2 viewSize) :8097
void OrthographicFrustum__MatrixProjection_fn(OrthographicFrustum* __this, ::g::Uno::Float2* viewSize, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->MatrixProjection(*viewSize);
}

// private float4x4 MatrixProjectionInverse(float2 viewSize) :8102
void OrthographicFrustum__MatrixProjectionInverse_fn(OrthographicFrustum* __this, ::g::Uno::Float2* viewSize, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->MatrixProjectionInverse(*viewSize);
}

// private float4x4 MatrixView(float2 origin, float2 viewSize) :8083
void OrthographicFrustum__MatrixView_fn(OrthographicFrustum* __this, ::g::Uno::Float2* origin, ::g::Uno::Float2* viewSize, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->MatrixView(*origin, *viewSize);
}

// private float4x4 MatrixViewInverse(float2 origin, float2 viewSize) :8090
void OrthographicFrustum__MatrixViewInverse_fn(OrthographicFrustum* __this, ::g::Uno::Float2* origin, ::g::Uno::Float2* viewSize, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->MatrixViewInverse(*origin, *viewSize);
}

// public generated OrthographicFrustum New() :8006
void OrthographicFrustum__New1_fn(OrthographicFrustum** __retval)
{
    *__retval = OrthographicFrustum::New1();
}

// public float2 get_Origin() :8012
void OrthographicFrustum__get_Origin_fn(OrthographicFrustum* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Origin();
}

// public void set_Origin(float2 value) :8013
void OrthographicFrustum__set_Origin_fn(OrthographicFrustum* __this, ::g::Uno::Float2* value)
{
    __this->Origin(*value);
}

// public float2 get_Size() :8024
void OrthographicFrustum__get_Size_fn(OrthographicFrustum* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// public void set_Size(float2 value) :8028
void OrthographicFrustum__set_Size_fn(OrthographicFrustum* __this, ::g::Uno::Float2* value)
{
    __this->Size(*value);
}

// public generated OrthographicFrustum() [instance] :8006
void OrthographicFrustum::ctor_()
{
    uStackFrame __("Fuse.OrthographicFrustum", ".ctor()");
    _localFromWorld = ::g::Uno::Float4x4__Identity();
}

// public float2 GetDepthRange(Fuse.ICommonViewport viewport) [instance] :8078
::g::Uno::Float2 OrthographicFrustum::GetDepthRange(uObject* viewport)
{
    uStackFrame __("Fuse.OrthographicFrustum", "GetDepthRange(Fuse.ICommonViewport)");
    return ::g::Uno::Float2__New2(1.0f, 1000.0f);
}

// public float4x4 GetProjectionTransform(Fuse.ICommonViewport viewport) [instance] :8047
::g::Uno::Float4x4 OrthographicFrustum::GetProjectionTransform(uObject* viewport)
{
    uStackFrame __("Fuse.OrthographicFrustum", "GetProjectionTransform(Fuse.ICommonViewport)");
    return MatrixProjection(_hasSize ? Size() : ::g::Fuse::ICommonViewport::Size(uInterface(uPtr(viewport), ::TYPES[32/*Fuse.ICommonViewport*/])));
}

// public float4x4 GetProjectionTransformInverse(Fuse.ICommonViewport viewport) [instance] :8060
::g::Uno::Float4x4 OrthographicFrustum::GetProjectionTransformInverse(uObject* viewport)
{
    uStackFrame __("Fuse.OrthographicFrustum", "GetProjectionTransformInverse(Fuse.ICommonViewport)");
    return MatrixProjectionInverse(_hasSize ? Size() : ::g::Fuse::ICommonViewport::Size(uInterface(uPtr(viewport), ::TYPES[32/*Fuse.ICommonViewport*/])));
}

// public float4x4 GetViewTransform(Fuse.ICommonViewport viewport) [instance] :8052
::g::Uno::Float4x4 OrthographicFrustum::GetViewTransform(uObject* viewport)
{
    uStackFrame __("Fuse.OrthographicFrustum", "GetViewTransform(Fuse.ICommonViewport)");
    ::g::Uno::Float4x4 ts = MatrixView(_hasOrigin ? Origin() : ::g::Uno::Float2__New1(0.0f), _hasSize ? Size() : ::g::Fuse::ICommonViewport::Size(uInterface(uPtr(viewport), ::TYPES[32/*Fuse.ICommonViewport*/])));

    if (_hasLocalFromWorld)
        ts = ::g::Uno::Matrix::Mul8(LocalFromWorld(), ts);

    return ts;
}

// public float4x4 GetViewTransformInverse(Fuse.ICommonViewport viewport) [instance] :8065
::g::Uno::Float4x4 OrthographicFrustum::GetViewTransformInverse(uObject* viewport)
{
    uStackFrame __("Fuse.OrthographicFrustum", "GetViewTransformInverse(Fuse.ICommonViewport)");
    ::g::Uno::Float4x4 ts = MatrixViewInverse(_hasOrigin ? Origin() : ::g::Uno::Float2__New1(0.0f), _hasSize ? Size() : ::g::Fuse::ICommonViewport::Size(uInterface(uPtr(viewport), ::TYPES[32/*Fuse.ICommonViewport*/])));

    if (_hasLocalFromWorld)
        ts = ::g::Uno::Matrix::Mul8(ts, ::g::Uno::Matrix::Invert2(LocalFromWorld()));

    return ts;
}

// public float3 GetWorldPosition(Fuse.ICommonViewport viewport) [instance] :8073
::g::Uno::Float3 OrthographicFrustum::GetWorldPosition(uObject* viewport)
{
    uStackFrame __("Fuse.OrthographicFrustum", "GetWorldPosition(Fuse.ICommonViewport)");
    return ::g::Uno::Float3__New4(::g::Uno::Float2__op_Division1(_hasSize ? Size() : ::g::Fuse::ICommonViewport::Size(uInterface(uPtr(viewport), ::TYPES[32/*Fuse.ICommonViewport*/])), 2.0f), 2.0f);
}

// public float4x4 get_LocalFromWorld() [instance] :8039
::g::Uno::Float4x4 OrthographicFrustum::LocalFromWorld()
{
    uStackFrame __("Fuse.OrthographicFrustum", "get_LocalFromWorld()");
    return _localFromWorld;
}

// public void set_LocalFromWorld(float4x4 value) [instance] :8040
void OrthographicFrustum::LocalFromWorld(::g::Uno::Float4x4 value)
{
    uStackFrame __("Fuse.OrthographicFrustum", "set_LocalFromWorld(float4x4)");
    _localFromWorld = value;
    _hasLocalFromWorld = true;
}

// private float4x4 MatrixProjection(float2 viewSize) [instance] :8097
::g::Uno::Float4x4 OrthographicFrustum::MatrixProjection(::g::Uno::Float2 viewSize)
{
    uStackFrame __("Fuse.OrthographicFrustum", "MatrixProjection(float2)");
    return ::g::Fuse::Internal::FrustumMatrix::OrthoRH(viewSize.X, viewSize.Y, 1.0f, 1000.0f);
}

// private float4x4 MatrixProjectionInverse(float2 viewSize) [instance] :8102
::g::Uno::Float4x4 OrthographicFrustum::MatrixProjectionInverse(::g::Uno::Float2 viewSize)
{
    uStackFrame __("Fuse.OrthographicFrustum", "MatrixProjectionInverse(float2)");
    return ::g::Fuse::Internal::FrustumMatrix::OrthoRHInverse(viewSize.X, viewSize.Y, 1.0f, 1000.0f);
}

// private float4x4 MatrixView(float2 origin, float2 viewSize) [instance] :8083
::g::Uno::Float4x4 OrthographicFrustum::MatrixView(::g::Uno::Float2 origin, ::g::Uno::Float2 viewSize)
{
    uStackFrame __("Fuse.OrthographicFrustum", "MatrixView(float2,float2)");
    ::g::Uno::Float4x4 t = ::g::Uno::Matrix::Translation((-viewSize.X / 2.0f) - origin.X, (-viewSize.Y / 2.0f) - origin.Y, -2.0f);
    ::g::Uno::Float4x4 s = ::g::Uno::Matrix::Scaling1(1.0f, -1.0f, 1.0f);
    return ::g::Uno::Matrix::Mul8(t, s);
}

// private float4x4 MatrixViewInverse(float2 origin, float2 viewSize) [instance] :8090
::g::Uno::Float4x4 OrthographicFrustum::MatrixViewInverse(::g::Uno::Float2 origin, ::g::Uno::Float2 viewSize)
{
    uStackFrame __("Fuse.OrthographicFrustum", "MatrixViewInverse(float2,float2)");
    ::g::Uno::Float4x4 s = ::g::Uno::Matrix::Scaling1(1.0f, -1.0f, 1.0f);
    ::g::Uno::Float4x4 t = ::g::Uno::Matrix::Translation((viewSize.X / 2.0f) + origin.X, (viewSize.Y / 2.0f) + origin.Y, 2.0f);
    return ::g::Uno::Matrix::Mul8(s, t);
}

// public float2 get_Origin() [instance] :8012
::g::Uno::Float2 OrthographicFrustum::Origin()
{
    uStackFrame __("Fuse.OrthographicFrustum", "get_Origin()");
    return _origin;
}

// public void set_Origin(float2 value) [instance] :8013
void OrthographicFrustum::Origin(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.OrthographicFrustum", "set_Origin(float2)");
    _origin = value;
    _hasOrigin = true;
}

// public float2 get_Size() [instance] :8024
::g::Uno::Float2 OrthographicFrustum::Size()
{
    uStackFrame __("Fuse.OrthographicFrustum", "get_Size()");
    return _size;
}

// public void set_Size(float2 value) [instance] :8028
void OrthographicFrustum::Size(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.OrthographicFrustum", "set_Size(float2)");
    _size = value;
    _hasSize = true;
}

// public generated OrthographicFrustum New() [static] :8006
OrthographicFrustum* OrthographicFrustum::New1()
{
    OrthographicFrustum* obj1 = (OrthographicFrustum*)uNew(OrthographicFrustum_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.iOS/0.40.8/$.uno
// ---------------------------------------------------

// public sealed extern class OSVersion :262
// {
static void OSVersion_build(uType* type)
{
    ::STRINGS[23] = uString::Const(".");
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::OSVersion, Major), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::OSVersion, Minor), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::OSVersion, Patch), 0);
    type->Reflection.SetFields(3,
        new uField("Major", 0),
        new uField("Minor", 1),
        new uField("Patch", 2));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)OSVersion__New1_fn, 0, true, OSVersion_typeof(), 3, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()));
}

uType* OSVersion_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(OSVersion);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.OSVersion", options);
    type->fp_build_ = OSVersion_build;
    type->fp_ToString = (void(*)(uObject*, uString**))OSVersion__ToString_fn;
    return type;
}

// public OSVersion(int major, int minor, int patch) :267
void OSVersion__ctor__fn(OSVersion* __this, int* major, int* minor, int* patch)
{
    __this->ctor_(*major, *minor, *patch);
}

// public OSVersion New(int major, int minor, int patch) :267
void OSVersion__New1_fn(int* major, int* minor, int* patch, OSVersion** __retval)
{
    *__retval = OSVersion::New1(*major, *minor, *patch);
}

// public override sealed string ToString() :273
void OSVersion__ToString_fn(OSVersion* __this, uString** __retval)
{
    uStackFrame __("Fuse.OSVersion", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition(uBox<int>(::g::Uno::Int_typeof(), __this->Major), ::STRINGS[23/*"."*/]), uBox<int>(::g::Uno::Int_typeof(), __this->Minor)), ::STRINGS[23/*"."*/]), uBox<int>(::g::Uno::Int_typeof(), __this->Patch)), void();
}

// public OSVersion(int major, int minor, int patch) [instance] :267
void OSVersion::ctor_(int major, int minor, int patch)
{
    uStackFrame __("Fuse.OSVersion", ".ctor(int,int,int)");
    Major = major;
    Minor = minor;
    Patch = patch;
}

// public OSVersion New(int major, int minor, int patch) [static] :267
OSVersion* OSVersion::New1(int major, int minor, int patch)
{
    OSVersion* obj1 = (OSVersion*)uNew(OSVersion_typeof());
    obj1->ctor_(major, minor, patch);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// private sealed class Visual.ParameterProperty :7023
// {
// static ParameterProperty() :7023
static void Visual__ParameterProperty__cctor__fn(uType* __type)
{
    Visual__ParameterProperty::_name1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[59/*"Parameter"*/]);
}

static void Visual__ParameterProperty_build(uType* type)
{
    ::STRINGS[59] = uString::Const("Parameter");
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()));
    type->SetFields(1,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Visual__ParameterProperty, _visual), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Visual__ParameterProperty::_name1_, uFieldFlagsStatic);
}

::g::Uno::UX::Property1_type* Visual__ParameterProperty_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Visual__ParameterProperty);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("Fuse.Visual.ParameterProperty", options);
    type->fp_build_ = Visual__ParameterProperty_build;
    type->fp_cctor_ = Visual__ParameterProperty__cctor__fn;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))Visual__ParameterProperty__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))Visual__ParameterProperty__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))Visual__ParameterProperty__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))Visual__ParameterProperty__get_SupportsOriginSetter_fn;
    return type;
}

// public ParameterProperty(Fuse.Visual visual) :7031
void Visual__ParameterProperty__ctor_2_fn(Visual__ParameterProperty* __this, ::g::Fuse::Visual* visual)
{
    __this->ctor_2(visual);
}

// public override sealed string Get() :7028
void Visual__ParameterProperty__Get_fn(Visual__ParameterProperty* __this, uString** __retval)
{
    uStackFrame __("Fuse.Visual.ParameterProperty", "Get()");
    return *__retval = uPtr(__this->_visual)->Parameter(), void();
}

// public ParameterProperty New(Fuse.Visual visual) :7031
void Visual__ParameterProperty__New1_fn(::g::Fuse::Visual* visual, Visual__ParameterProperty** __retval)
{
    *__retval = Visual__ParameterProperty::New1(visual);
}

// public override sealed Uno.UX.PropertyObject get_Object() :7026
void Visual__ParameterProperty__get_Object_fn(Visual__ParameterProperty* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("Fuse.Visual.ParameterProperty", "get_Object()");
    return *__retval = __this->_visual, void();
}

// public override sealed void Set(string value, Uno.UX.IPropertyListener origin) :7029
void Visual__ParameterProperty__Set_fn(Visual__ParameterProperty* __this, uString* value, uObject* origin)
{
    uStackFrame __("Fuse.Visual.ParameterProperty", "Set(string,Uno.UX.IPropertyListener)");
    uPtr(__this->_visual)->Parameter(value);
}

// public override sealed bool get_SupportsOriginSetter() :7027
void Visual__ParameterProperty__get_SupportsOriginSetter_fn(Visual__ParameterProperty* __this, bool* __retval)
{
    uStackFrame __("Fuse.Visual.ParameterProperty", "get_SupportsOriginSetter()");
    return *__retval = false, void();
}

::g::Uno::UX::Selector Visual__ParameterProperty::_name1_;

// public ParameterProperty(Fuse.Visual visual) [instance] :7031
void Visual__ParameterProperty::ctor_2(::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Visual.ParameterProperty", ".ctor(Fuse.Visual)");
    ctor_1(Visual__ParameterProperty::_name1());
    _visual = visual;
}

// public ParameterProperty New(Fuse.Visual visual) [static] :7031
Visual__ParameterProperty* Visual__ParameterProperty::New1(::g::Fuse::Visual* visual)
{
    Visual__ParameterProperty* obj1 = (Visual__ParameterProperty*)uNew(Visual__ParameterProperty_typeof());
    obj1->ctor_2(visual);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// private sealed class TranslationModes.ParentSizeMode :10140
// {
static void TranslationModes__ParentSizeMode_build(uType* type)
{
    ::TYPES[64] = ::g::Fuse::IActualPlacement_typeof();
    ::TYPES[65] = ::g::Fuse::ITransformRelative_typeof();
    ::TYPES[66] = ::g::Fuse::PlacedHandler_typeof();
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(TranslationModes__ParentSizeMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(TranslationModes__ParentSizeMode_type, interface1));
}

TranslationModes__ParentSizeMode_type* TranslationModes__ParentSizeMode_typeof()
{
    static uSStrong<TranslationModes__ParentSizeMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TranslationModes__ParentSizeMode);
    options.TypeSize = sizeof(TranslationModes__ParentSizeMode_type);
    type = (TranslationModes__ParentSizeMode_type*)uClassType::New("Fuse.TranslationModes.ParentSizeMode", options);
    type->fp_build_ = TranslationModes__ParentSizeMode_build;
    type->fp_ctor_ = (void*)TranslationModes__ParentSizeMode__New1_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))TranslationModes__ParentSizeMode__GetAbsVector_fn;
    type->interface1.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))TranslationModes__ParentSizeMode__Subscribe_fn;
    type->interface1.fp_Unsubscribe = (void(*)(uObject*, uObject*, uObject*))TranslationModes__ParentSizeMode__Unsubscribe_fn;
    return type;
}

// public generated ParentSizeMode() :10140
void TranslationModes__ParentSizeMode__ctor__fn(TranslationModes__ParentSizeMode* __this)
{
    __this->ctor_();
}

// public float3 GetAbsVector(Fuse.Translation t) :10142
void TranslationModes__ParentSizeMode__GetAbsVector_fn(TranslationModes__ParentSizeMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetAbsVector(t);
}

// public generated ParentSizeMode New() :10140
void TranslationModes__ParentSizeMode__New1_fn(TranslationModes__ParentSizeMode** __retval)
{
    *__retval = TranslationModes__ParentSizeMode::New1();
}

// public object Subscribe(Fuse.ITransformRelative transform) :10143
void TranslationModes__ParentSizeMode__Subscribe_fn(TranslationModes__ParentSizeMode* __this, uObject* transform, uObject** __retval)
{
    *__retval = __this->Subscribe(transform);
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) :10150
void TranslationModes__ParentSizeMode__Unsubscribe_fn(TranslationModes__ParentSizeMode* __this, uObject* transform, uObject* sub)
{
    __this->Unsubscribe(transform, sub);
}

// public generated ParentSizeMode() [instance] :10140
void TranslationModes__ParentSizeMode::ctor_()
{
}

// public float3 GetAbsVector(Fuse.Translation t) [instance] :10142
::g::Uno::Float3 TranslationModes__ParentSizeMode::GetAbsVector(::g::Fuse::Translation* t)
{
    uStackFrame __("Fuse.TranslationModes.ParentSizeMode", "GetAbsVector(Fuse.Translation)");
    return ::g::Uno::Float3__op_Multiply2(::g::Fuse::TranslationModes::SizeOf(uPtr(uPtr(t)->RelativeNode())->Parent()), uPtr(t)->Vector());
}

// public object Subscribe(Fuse.ITransformRelative transform) [instance] :10143
uObject* TranslationModes__ParentSizeMode::Subscribe(uObject* transform)
{
    uStackFrame __("Fuse.TranslationModes.ParentSizeMode", "Subscribe(Fuse.ITransformRelative)");
    uObject* n = uAs<uObject*>(uPtr(::g::Fuse::ITransformRelative::RelativeNode(uInterface(uPtr(transform), ::TYPES[65/*Fuse.ITransformRelative*/])))->Parent(), ::TYPES[64/*Fuse.IActualPlacement*/]);

    if (n != NULL)
        ::g::Fuse::IActualPlacement::add_Placed(uInterface(uPtr(n), ::TYPES[64/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[66/*Fuse.PlacedHandler*/], uInterface(uPtr(transform), ::TYPES[65/*Fuse.ITransformRelative*/]), offsetof(::g::Fuse::ITransformRelative, fp_OnTransformChanged)));

    return n;
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) [instance] :10150
void TranslationModes__ParentSizeMode::Unsubscribe(uObject* transform, uObject* sub)
{
    uStackFrame __("Fuse.TranslationModes.ParentSizeMode", "Unsubscribe(Fuse.ITransformRelative,object)");

    if (sub != NULL)
        ::g::Fuse::IActualPlacement::remove_Placed(uInterface(uPtr(uAs<uObject*>(sub, ::TYPES[64/*Fuse.IActualPlacement*/])), ::TYPES[64/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[66/*Fuse.PlacedHandler*/], uInterface(uPtr(transform), ::TYPES[65/*Fuse.ITransformRelative*/]), offsetof(::g::Fuse::ITransformRelative, fp_OnTransformChanged)));
}

// public generated ParentSizeMode New() [static] :10140
TranslationModes__ParentSizeMode* TranslationModes__ParentSizeMode::New1()
{
    TranslationModes__ParentSizeMode* obj1 = (TranslationModes__ParentSizeMode*)uNew(TranslationModes__ParentSizeMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public sealed class PendingRemoveVisual :4821
// {
static void PendingRemoveVisual_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::PendingRemoveVisual, _done), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::PendingRemoveVisual, _then), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::PendingRemoveVisual, subscribers), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::PendingRemoveVisual, _Child), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::PendingRemoveVisual, _Parent), 0);
    type->Reflection.SetFunctions(6,
        new uFunction("AddSubscriber", NULL, (void*)PendingRemoveVisual__AddSubscriber_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Child", NULL, (void*)PendingRemoveVisual__get_Child_fn, 0, false, ::g::Fuse::Visual_typeof(), 0),
        new uFunction("get_HasSubscribers", NULL, (void*)PendingRemoveVisual__get_HasSubscribers_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Parent", NULL, (void*)PendingRemoveVisual__get_Parent_fn, 0, false, ::g::Fuse::Visual_typeof(), 0),
        new uFunction("Remove", NULL, (void*)PendingRemoveVisual__Remove_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("RemoveSubscriber", NULL, (void*)PendingRemoveVisual__RemoveSubscriber_fn, 0, false, uVoid_typeof(), 0));
}

uType* PendingRemoveVisual_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(PendingRemoveVisual);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.PendingRemoveVisual", options);
    type->fp_build_ = PendingRemoveVisual_build;
    return type;
}

// internal PendingRemoveVisual(Fuse.Visual child, Fuse.Visual parent, Uno.Action then) :4828
void PendingRemoveVisual__ctor__fn(PendingRemoveVisual* __this, ::g::Fuse::Visual* child, ::g::Fuse::Visual* parent, uDelegate* then)
{
    __this->ctor_(child, parent, then);
}

// public void AddSubscriber() :4836
void PendingRemoveVisual__AddSubscriber_fn(PendingRemoveVisual* __this)
{
    __this->AddSubscriber();
}

// public generated Fuse.Visual get_Child() :4824
void PendingRemoveVisual__get_Child_fn(PendingRemoveVisual* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Child();
}

// private generated void set_Child(Fuse.Visual value) :4824
void PendingRemoveVisual__set_Child_fn(PendingRemoveVisual* __this, ::g::Fuse::Visual* value)
{
    __this->Child(value);
}

// public bool get_HasSubscribers() :4852
void PendingRemoveVisual__get_HasSubscribers_fn(PendingRemoveVisual* __this, bool* __retval)
{
    *__retval = __this->HasSubscribers();
}

// internal PendingRemoveVisual New(Fuse.Visual child, Fuse.Visual parent, Uno.Action then) :4828
void PendingRemoveVisual__New1_fn(::g::Fuse::Visual* child, ::g::Fuse::Visual* parent, uDelegate* then, PendingRemoveVisual** __retval)
{
    *__retval = PendingRemoveVisual::New1(child, parent, then);
}

// public generated Fuse.Visual get_Parent() :4823
void PendingRemoveVisual__get_Parent_fn(PendingRemoveVisual* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Parent();
}

// private generated void set_Parent(Fuse.Visual value) :4823
void PendingRemoveVisual__set_Parent_fn(PendingRemoveVisual* __this, ::g::Fuse::Visual* value)
{
    __this->Parent(value);
}

// public void Remove() :4856
void PendingRemoveVisual__Remove_fn(PendingRemoveVisual* __this)
{
    __this->Remove();
}

// public void RemoveSubscriber() :4841
void PendingRemoveVisual__RemoveSubscriber_fn(PendingRemoveVisual* __this)
{
    __this->RemoveSubscriber();
}

// internal PendingRemoveVisual(Fuse.Visual child, Fuse.Visual parent, Uno.Action then) [instance] :4828
void PendingRemoveVisual::ctor_(::g::Fuse::Visual* child, ::g::Fuse::Visual* parent, uDelegate* then)
{
    uStackFrame __("Fuse.PendingRemoveVisual", ".ctor(Fuse.Visual,Fuse.Visual,Uno.Action)");
    Parent(parent);
    Child(child);
    _then = then;
}

// public void AddSubscriber() [instance] :4836
void PendingRemoveVisual::AddSubscriber()
{
    uStackFrame __("Fuse.PendingRemoveVisual", "AddSubscriber()");
    subscribers++;
}

// public generated Fuse.Visual get_Child() [instance] :4824
::g::Fuse::Visual* PendingRemoveVisual::Child()
{
    uStackFrame __("Fuse.PendingRemoveVisual", "get_Child()");
    return _Child;
}

// private generated void set_Child(Fuse.Visual value) [instance] :4824
void PendingRemoveVisual::Child(::g::Fuse::Visual* value)
{
    uStackFrame __("Fuse.PendingRemoveVisual", "set_Child(Fuse.Visual)");
    _Child = value;
}

// public bool get_HasSubscribers() [instance] :4852
bool PendingRemoveVisual::HasSubscribers()
{
    uStackFrame __("Fuse.PendingRemoveVisual", "get_HasSubscribers()");
    return subscribers > 0;
}

// public generated Fuse.Visual get_Parent() [instance] :4823
::g::Fuse::Visual* PendingRemoveVisual::Parent()
{
    uStackFrame __("Fuse.PendingRemoveVisual", "get_Parent()");
    return _Parent;
}

// private generated void set_Parent(Fuse.Visual value) [instance] :4823
void PendingRemoveVisual::Parent(::g::Fuse::Visual* value)
{
    uStackFrame __("Fuse.PendingRemoveVisual", "set_Parent(Fuse.Visual)");
    _Parent = value;
}

// public void Remove() [instance] :4856
void PendingRemoveVisual::Remove()
{
    uStackFrame __("Fuse.PendingRemoveVisual", "Remove()");

    if (_done)
        return;

    if (::g::Uno::Delegate::op_Inequality(_then, NULL))
        uPtr(_then)->InvokeVoid();

    _done = true;
    uPtr(Child())->ConcludePendingRemove();
}

// public void RemoveSubscriber() [instance] :4841
void PendingRemoveVisual::RemoveSubscriber()
{
    uStackFrame __("Fuse.PendingRemoveVisual", "RemoveSubscriber()");
    subscribers--;

    if (subscribers == 0)
        Remove();
}

// internal PendingRemoveVisual New(Fuse.Visual child, Fuse.Visual parent, Uno.Action then) [static] :4828
PendingRemoveVisual* PendingRemoveVisual::New1(::g::Fuse::Visual* child, ::g::Fuse::Visual* parent, uDelegate* then)
{
    PendingRemoveVisual* obj1 = (PendingRemoveVisual*)uNew(PendingRemoveVisual_typeof());
    obj1->ctor_(child, parent, then);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public sealed class PerspectiveFrustum :8119
// {
static void PerspectiveFrustum_build(uType* type)
{
    ::TYPES[32] = ::g::Fuse::ICommonViewport_typeof();
    type->SetInterfaces(
        ::g::Fuse::IFrustum_typeof(), offsetof(PerspectiveFrustum_type, interface0));
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::PerspectiveFrustum, _Distance), 0);
    type->Reflection.SetFunctions(9,
        new uFunction("get_Distance", NULL, (void*)PerspectiveFrustum__get_Distance_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Distance", NULL, (void*)PerspectiveFrustum__set_Distance_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("GetDepthRange", NULL, (void*)PerspectiveFrustum__GetDepthRange_fn, 0, false, ::g::Uno::Float2_typeof(), 1, ::g::Fuse::ICommonViewport_typeof()),
        new uFunction("GetProjectionTransform", NULL, (void*)PerspectiveFrustum__GetProjectionTransform_fn, 0, false, ::g::Uno::Float4x4_typeof(), 1, ::g::Fuse::ICommonViewport_typeof()),
        new uFunction("GetProjectionTransformInverse", NULL, (void*)PerspectiveFrustum__GetProjectionTransformInverse_fn, 0, false, ::g::Uno::Float4x4_typeof(), 1, ::g::Fuse::ICommonViewport_typeof()),
        new uFunction("GetViewTransform", NULL, (void*)PerspectiveFrustum__GetViewTransform_fn, 0, false, ::g::Uno::Float4x4_typeof(), 1, ::g::Fuse::ICommonViewport_typeof()),
        new uFunction("GetViewTransformInverse", NULL, (void*)PerspectiveFrustum__GetViewTransformInverse_fn, 0, false, ::g::Uno::Float4x4_typeof(), 1, ::g::Fuse::ICommonViewport_typeof()),
        new uFunction("GetWorldPosition", NULL, (void*)PerspectiveFrustum__GetWorldPosition_fn, 0, false, ::g::Uno::Float3_typeof(), 1, ::g::Fuse::ICommonViewport_typeof()),
        new uFunction(".ctor", NULL, (void*)PerspectiveFrustum__New1_fn, 0, true, PerspectiveFrustum_typeof(), 0));
}

PerspectiveFrustum_type* PerspectiveFrustum_typeof()
{
    static uSStrong<PerspectiveFrustum_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PerspectiveFrustum);
    options.TypeSize = sizeof(PerspectiveFrustum_type);
    type = (PerspectiveFrustum_type*)uClassType::New("Fuse.PerspectiveFrustum", options);
    type->fp_build_ = PerspectiveFrustum_build;
    type->fp_ctor_ = (void*)PerspectiveFrustum__New1_fn;
    type->interface0.fp_GetProjectionTransform = (void(*)(uObject*, uObject*, ::g::Uno::Float4x4*))PerspectiveFrustum__GetProjectionTransform_fn;
    type->interface0.fp_GetProjectionTransformInverse = (void(*)(uObject*, uObject*, ::g::Uno::Float4x4*))PerspectiveFrustum__GetProjectionTransformInverse_fn;
    type->interface0.fp_GetViewTransform = (void(*)(uObject*, uObject*, ::g::Uno::Float4x4*))PerspectiveFrustum__GetViewTransform_fn;
    type->interface0.fp_GetViewTransformInverse = (void(*)(uObject*, uObject*, ::g::Uno::Float4x4*))PerspectiveFrustum__GetViewTransformInverse_fn;
    type->interface0.fp_GetDepthRange = (void(*)(uObject*, uObject*, ::g::Uno::Float2*))PerspectiveFrustum__GetDepthRange_fn;
    type->interface0.fp_GetWorldPosition = (void(*)(uObject*, uObject*, ::g::Uno::Float3*))PerspectiveFrustum__GetWorldPosition_fn;
    return type;
}

// public generated PerspectiveFrustum() :8119
void PerspectiveFrustum__ctor__fn(PerspectiveFrustum* __this)
{
    __this->ctor_();
}

// public generated float get_Distance() :8121
void PerspectiveFrustum__get_Distance_fn(PerspectiveFrustum* __this, float* __retval)
{
    *__retval = __this->Distance();
}

// public generated void set_Distance(float value) :8121
void PerspectiveFrustum__set_Distance_fn(PerspectiveFrustum* __this, float* value)
{
    __this->Distance(*value);
}

// public float2 GetDepthRange(Fuse.ICommonViewport viewport) :8155
void PerspectiveFrustum__GetDepthRange_fn(PerspectiveFrustum* __this, uObject* viewport, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetDepthRange(viewport);
}

// public float4x4 GetProjectionTransform(Fuse.ICommonViewport viewport) :8125
void PerspectiveFrustum__GetProjectionTransform_fn(PerspectiveFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetProjectionTransform(viewport);
}

// public float4x4 GetProjectionTransformInverse(Fuse.ICommonViewport viewport) :8136
void PerspectiveFrustum__GetProjectionTransformInverse_fn(PerspectiveFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetProjectionTransformInverse(viewport);
}

// public float4x4 GetViewTransform(Fuse.ICommonViewport viewport) :8131
void PerspectiveFrustum__GetViewTransform_fn(PerspectiveFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetViewTransform(viewport);
}

// public float4x4 GetViewTransformInverse(Fuse.ICommonViewport viewport) :8143
void PerspectiveFrustum__GetViewTransformInverse_fn(PerspectiveFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetViewTransformInverse(viewport);
}

// public float3 GetWorldPosition(Fuse.ICommonViewport viewport) :8148
void PerspectiveFrustum__GetWorldPosition_fn(PerspectiveFrustum* __this, uObject* viewport, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetWorldPosition(viewport);
}

// public generated PerspectiveFrustum New() :8119
void PerspectiveFrustum__New1_fn(PerspectiveFrustum** __retval)
{
    *__retval = PerspectiveFrustum::New1();
}

// public generated PerspectiveFrustum() [instance] :8119
void PerspectiveFrustum::ctor_()
{
}

// public generated float get_Distance() [instance] :8121
float PerspectiveFrustum::Distance()
{
    uStackFrame __("Fuse.PerspectiveFrustum", "get_Distance()");
    return _Distance;
}

// public generated void set_Distance(float value) [instance] :8121
void PerspectiveFrustum::Distance(float value)
{
    uStackFrame __("Fuse.PerspectiveFrustum", "set_Distance(float)");
    _Distance = value;
}

// public float2 GetDepthRange(Fuse.ICommonViewport viewport) [instance] :8155
::g::Uno::Float2 PerspectiveFrustum::GetDepthRange(uObject* viewport)
{
    uStackFrame __("Fuse.PerspectiveFrustum", "GetDepthRange(Fuse.ICommonViewport)");
    return ::g::Uno::Float2__New2(10.0f, 5000.0f + Distance());
}

// public float4x4 GetProjectionTransform(Fuse.ICommonViewport viewport) [instance] :8125
::g::Uno::Float4x4 PerspectiveFrustum::GetProjectionTransform(uObject* viewport)
{
    uStackFrame __("Fuse.PerspectiveFrustum", "GetProjectionTransform(Fuse.ICommonViewport)");
    return ::g::Fuse::Internal::FrustumMatrix::PerspectiveProjection(::g::Fuse::ICommonViewport::Size(uInterface(uPtr(viewport), ::TYPES[32/*Fuse.ICommonViewport*/])), 10.0f, 5000.0f + Distance(), Distance());
}

// public float4x4 GetProjectionTransformInverse(Fuse.ICommonViewport viewport) [instance] :8136
::g::Uno::Float4x4 PerspectiveFrustum::GetProjectionTransformInverse(uObject* viewport)
{
    uStackFrame __("Fuse.PerspectiveFrustum", "GetProjectionTransformInverse(Fuse.ICommonViewport)");
    ::g::Uno::Float4x4 pi = ::g::Fuse::Internal::FrustumMatrix::PerspectiveProjectionInverse(::g::Fuse::ICommonViewport::Size(uInterface(uPtr(viewport), ::TYPES[32/*Fuse.ICommonViewport*/])), 10.0f, 5000.0f + Distance(), Distance());
    return pi;
}

// public float4x4 GetViewTransform(Fuse.ICommonViewport viewport) [instance] :8131
::g::Uno::Float4x4 PerspectiveFrustum::GetViewTransform(uObject* viewport)
{
    uStackFrame __("Fuse.PerspectiveFrustum", "GetViewTransform(Fuse.ICommonViewport)");
    return ::g::Fuse::Internal::FrustumMatrix::PerspectiveView(::g::Fuse::ICommonViewport::Size(uInterface(uPtr(viewport), ::TYPES[32/*Fuse.ICommonViewport*/])), Distance(), ::g::Uno::Float2__New2(0.5f, 0.5f));
}

// public float4x4 GetViewTransformInverse(Fuse.ICommonViewport viewport) [instance] :8143
::g::Uno::Float4x4 PerspectiveFrustum::GetViewTransformInverse(uObject* viewport)
{
    uStackFrame __("Fuse.PerspectiveFrustum", "GetViewTransformInverse(Fuse.ICommonViewport)");
    return ::g::Fuse::Internal::FrustumMatrix::PerspectiveViewInverse(::g::Fuse::ICommonViewport::Size(uInterface(uPtr(viewport), ::TYPES[32/*Fuse.ICommonViewport*/])), Distance(), ::g::Uno::Float2__New2(0.5f, 0.5f));
}

// public float3 GetWorldPosition(Fuse.ICommonViewport viewport) [instance] :8148
::g::Uno::Float3 PerspectiveFrustum::GetWorldPosition(uObject* viewport)
{
    uStackFrame __("Fuse.PerspectiveFrustum", "GetWorldPosition(Fuse.ICommonViewport)");
    return ::g::Uno::Float3__New4(::g::Uno::Float2__op_Division1(::g::Fuse::ICommonViewport::Size(uInterface(uPtr(viewport), ::TYPES[32/*Fuse.ICommonViewport*/])), 2.0f), -Distance());
}

// public generated PerspectiveFrustum New() [static] :8119
PerspectiveFrustum* PerspectiveFrustum::New1()
{
    PerspectiveFrustum* obj1 = (PerspectiveFrustum*)uNew(PerspectiveFrustum_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public sealed class PlacedArgs :10070
// {
static void PlacedArgs_build(uType* type)
{
    ::STRINGS[40] = uString::Const("x");
    ::STRINGS[60] = uString::Const("y");
    ::STRINGS[61] = uString::Const("width");
    ::STRINGS[62] = uString::Const("height");
    ::TYPES[67] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(PlacedArgs_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::PlacedArgs, _HasPrev), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::PlacedArgs, _NewPosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::PlacedArgs, _NewSize), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::PlacedArgs, _PrevPosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::PlacedArgs, _PrevSize), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_DefaultValue", NULL, (void*)PlacedArgs__get_DefaultValue_fn, 0, false, uObject_typeof(), 0),
        new uFunction("get_HasPrev", NULL, (void*)PlacedArgs__get_HasPrev_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_NewPosition", NULL, (void*)PlacedArgs__get_NewPosition_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_NewSize", NULL, (void*)PlacedArgs__get_NewSize_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_PrevPosition", NULL, (void*)PlacedArgs__get_PrevPosition_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_PrevSize", NULL, (void*)PlacedArgs__get_PrevSize_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("Serialize", NULL, (void*)PlacedArgs__Serialize_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Scripting::IEventSerializer_typeof()));
}

PlacedArgs_type* PlacedArgs_typeof()
{
    static uSStrong<PlacedArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PlacedArgs);
    options.TypeSize = sizeof(PlacedArgs_type);
    type = (PlacedArgs_type*)uClassType::New("Fuse.PlacedArgs", options);
    type->fp_build_ = PlacedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))PlacedArgs__Serialize_fn;
    return type;
}

// internal PlacedArgs(bool hasPrev, float2 prevPosition, float2 newPosition, float2 prevSize, float2 newSize) :10078
void PlacedArgs__ctor_1_fn(PlacedArgs* __this, bool* hasPrev, ::g::Uno::Float2* prevPosition, ::g::Uno::Float2* newPosition, ::g::Uno::Float2* prevSize, ::g::Uno::Float2* newSize)
{
    __this->ctor_1(*hasPrev, *prevPosition, *newPosition, *prevSize, *newSize);
}

// public object get_DefaultValue() :10097
void PlacedArgs__get_DefaultValue_fn(PlacedArgs* __this, uObject** __retval)
{
    *__retval = __this->DefaultValue();
}

// public generated bool get_HasPrev() :10072
void PlacedArgs__get_HasPrev_fn(PlacedArgs* __this, bool* __retval)
{
    *__retval = __this->HasPrev();
}

// private generated void set_HasPrev(bool value) :10072
void PlacedArgs__set_HasPrev_fn(PlacedArgs* __this, bool* value)
{
    __this->HasPrev(*value);
}

// internal PlacedArgs New(bool hasPrev, float2 prevPosition, float2 newPosition, float2 prevSize, float2 newSize) :10078
void PlacedArgs__New2_fn(bool* hasPrev, ::g::Uno::Float2* prevPosition, ::g::Uno::Float2* newPosition, ::g::Uno::Float2* prevSize, ::g::Uno::Float2* newSize, PlacedArgs** __retval)
{
    *__retval = PlacedArgs::New2(*hasPrev, *prevPosition, *newPosition, *prevSize, *newSize);
}

// public generated float2 get_NewPosition() :10076
void PlacedArgs__get_NewPosition_fn(PlacedArgs* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->NewPosition();
}

// private generated void set_NewPosition(float2 value) :10076
void PlacedArgs__set_NewPosition_fn(PlacedArgs* __this, ::g::Uno::Float2* value)
{
    __this->NewPosition(*value);
}

// public generated float2 get_NewSize() :10075
void PlacedArgs__get_NewSize_fn(PlacedArgs* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->NewSize();
}

// private generated void set_NewSize(float2 value) :10075
void PlacedArgs__set_NewSize_fn(PlacedArgs* __this, ::g::Uno::Float2* value)
{
    __this->NewSize(*value);
}

// public generated float2 get_PrevPosition() :10073
void PlacedArgs__get_PrevPosition_fn(PlacedArgs* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PrevPosition();
}

// private generated void set_PrevPosition(float2 value) :10073
void PlacedArgs__set_PrevPosition_fn(PlacedArgs* __this, ::g::Uno::Float2* value)
{
    __this->PrevPosition(*value);
}

// public generated float2 get_PrevSize() :10074
void PlacedArgs__get_PrevSize_fn(PlacedArgs* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PrevSize();
}

// private generated void set_PrevSize(float2 value) :10074
void PlacedArgs__set_PrevSize_fn(PlacedArgs* __this, ::g::Uno::Float2* value)
{
    __this->PrevSize(*value);
}

// public void Serialize(Fuse.Scripting.IEventSerializer serializer) :10088
void PlacedArgs__Serialize_fn(PlacedArgs* __this, uObject* serializer)
{
    __this->Serialize(serializer);
}

// internal PlacedArgs(bool hasPrev, float2 prevPosition, float2 newPosition, float2 prevSize, float2 newSize) [instance] :10078
void PlacedArgs::ctor_1(bool hasPrev, ::g::Uno::Float2 prevPosition, ::g::Uno::Float2 newPosition, ::g::Uno::Float2 prevSize, ::g::Uno::Float2 newSize)
{
    uStackFrame __("Fuse.PlacedArgs", ".ctor(bool,float2,float2,float2,float2)");
    ctor_();
    HasPrev(hasPrev);
    PrevPosition(prevPosition);
    PrevSize(prevSize);
    NewSize(newSize);
    NewPosition(newPosition);
}

// public object get_DefaultValue() [instance] :10097
uObject* PlacedArgs::DefaultValue()
{
    uStackFrame __("Fuse.PlacedArgs", "get_DefaultValue()");
    return NULL;
}

// public generated bool get_HasPrev() [instance] :10072
bool PlacedArgs::HasPrev()
{
    uStackFrame __("Fuse.PlacedArgs", "get_HasPrev()");
    return _HasPrev;
}

// private generated void set_HasPrev(bool value) [instance] :10072
void PlacedArgs::HasPrev(bool value)
{
    uStackFrame __("Fuse.PlacedArgs", "set_HasPrev(bool)");
    _HasPrev = value;
}

// public generated float2 get_NewPosition() [instance] :10076
::g::Uno::Float2 PlacedArgs::NewPosition()
{
    uStackFrame __("Fuse.PlacedArgs", "get_NewPosition()");
    return _NewPosition;
}

// private generated void set_NewPosition(float2 value) [instance] :10076
void PlacedArgs::NewPosition(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.PlacedArgs", "set_NewPosition(float2)");
    _NewPosition = value;
}

// public generated float2 get_NewSize() [instance] :10075
::g::Uno::Float2 PlacedArgs::NewSize()
{
    uStackFrame __("Fuse.PlacedArgs", "get_NewSize()");
    return _NewSize;
}

// private generated void set_NewSize(float2 value) [instance] :10075
void PlacedArgs::NewSize(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.PlacedArgs", "set_NewSize(float2)");
    _NewSize = value;
}

// public generated float2 get_PrevPosition() [instance] :10073
::g::Uno::Float2 PlacedArgs::PrevPosition()
{
    uStackFrame __("Fuse.PlacedArgs", "get_PrevPosition()");
    return _PrevPosition;
}

// private generated void set_PrevPosition(float2 value) [instance] :10073
void PlacedArgs::PrevPosition(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.PlacedArgs", "set_PrevPosition(float2)");
    _PrevPosition = value;
}

// public generated float2 get_PrevSize() [instance] :10074
::g::Uno::Float2 PlacedArgs::PrevSize()
{
    uStackFrame __("Fuse.PlacedArgs", "get_PrevSize()");
    return _PrevSize;
}

// private generated void set_PrevSize(float2 value) [instance] :10074
void PlacedArgs::PrevSize(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.PlacedArgs", "set_PrevSize(float2)");
    _PrevSize = value;
}

// public void Serialize(Fuse.Scripting.IEventSerializer serializer) [instance] :10088
void PlacedArgs::Serialize(uObject* serializer)
{
    uStackFrame __("Fuse.PlacedArgs", "Serialize(Fuse.Scripting.IEventSerializer)");
    ::g::Fuse::Scripting::IEventSerializer::AddDouble(uInterface(uPtr(serializer), ::TYPES[67/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[40/*"x"*/], (double)NewPosition().X);
    ::g::Fuse::Scripting::IEventSerializer::AddDouble(uInterface(serializer, ::TYPES[67/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[60/*"y"*/], (double)NewPosition().Y);
    ::g::Fuse::Scripting::IEventSerializer::AddDouble(uInterface(serializer, ::TYPES[67/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[61/*"width"*/], (double)NewSize().X);
    ::g::Fuse::Scripting::IEventSerializer::AddDouble(uInterface(serializer, ::TYPES[67/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[62/*"height"*/], (double)NewSize().Y);
}

// internal PlacedArgs New(bool hasPrev, float2 prevPosition, float2 newPosition, float2 prevSize, float2 newSize) [static] :10078
PlacedArgs* PlacedArgs::New2(bool hasPrev, ::g::Uno::Float2 prevPosition, ::g::Uno::Float2 newPosition, ::g::Uno::Float2 prevSize, ::g::Uno::Float2 newSize)
{
    PlacedArgs* obj1 = (PlacedArgs*)uNew(PlacedArgs_typeof());
    obj1->ctor_1(hasPrev, prevPosition, newPosition, prevSize, newSize);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public delegate void PlacedHandler(object sender, Fuse.PlacedArgs args) :10101
uDelegateType* PlacedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.PlacedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::PlacedArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public sealed class Properties :8614
// {
// static Properties() :8614
static void Properties__cctor__fn(uType* __type)
{
    Properties::NoValue_ = ::g::Uno::Object::New();
}

static void Properties_build(uType* type)
{
    ::TYPES[10] = uObject_typeof()->Array();
    ::TYPES[56] = ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof());
    type->SetFields(0,
        ::g::Fuse::PropertyHandle_typeof(), offsetof(::g::Fuse::Properties, _handle), 0,
        Properties_typeof(), offsetof(::g::Fuse::Properties, _next), 0,
        uObject_typeof(), offsetof(::g::Fuse::Properties, _value), 0,
        uObject_typeof(), (uintptr_t)&::g::Fuse::Properties::NoValue_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(13,
        new uFunction("AddToList", NULL, (void*)Properties__AddToList_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::PropertyHandle_typeof(), uObject_typeof()),
        new uFunction("Clear", NULL, (void*)Properties__Clear_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::PropertyHandle_typeof()),
        new uFunction("CreateHandle", NULL, (void*)Properties__CreateHandle_fn, 0, true, ::g::Fuse::PropertyHandle_typeof(), 0),
        new uFunction("ForeachInList", NULL, (void*)Properties__ForeachInList_fn, 0, false, uVoid_typeof(), 3, ::g::Fuse::PropertyHandle_typeof(), ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), uObject_typeof()->Array()), uObject_typeof()->Array()),
        new uFunction("ForeachInList", NULL, (void*)Properties__ForeachInList1_fn, 0, false, uVoid_typeof(), 3, ::g::Fuse::PropertyHandle_typeof(), ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), uObject_typeof()), uObject_typeof()),
        new uFunction("Get", NULL, (void*)Properties__Get_fn, 0, false, uObject_typeof(), 1, ::g::Fuse::PropertyHandle_typeof()),
        new uFunction("Has", NULL, (void*)Properties__Has_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Fuse::PropertyHandle_typeof()),
        new uFunction(".ctor", NULL, (void*)Properties__New1_fn, 0, true, Properties_typeof(), 0),
        new uFunction("RemoveAllFromList", NULL, (void*)Properties__RemoveAllFromList_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::PropertyHandle_typeof(), uObject_typeof()),
        new uFunction("RemoveFromList", NULL, (void*)Properties__RemoveFromList_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::PropertyHandle_typeof(), uObject_typeof()),
        new uFunction("Set", NULL, (void*)Properties__Set_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::PropertyHandle_typeof(), uObject_typeof()),
        new uFunction("ToArray", NULL, (void*)Properties__ToArray_fn, 0, false, uObject_typeof()->Array(), 1, ::g::Fuse::PropertyHandle_typeof()),
        new uFunction("TryGet", NULL, (void*)Properties__TryGet_fn, 0, false, ::g::Uno::Bool_typeof(), 2, ::g::Fuse::PropertyHandle_typeof(), uObject_typeof()->ByRef()));
}

uType* Properties_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Properties);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Properties", options);
    type->fp_build_ = Properties_build;
    type->fp_ctor_ = (void*)Properties__New1_fn;
    type->fp_cctor_ = Properties__cctor__fn;
    return type;
}

// public generated Properties() :8614
void Properties__ctor__fn(Properties* __this)
{
    __this->ctor_();
}

// public void AddToList(Fuse.PropertyHandle handle, object val) :8665
void Properties__AddToList_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uObject* val)
{
    __this->AddToList(handle, val);
}

// public void Clear(Fuse.PropertyHandle handle) :8748
void Properties__Clear_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle)
{
    __this->Clear(handle);
}

// private void Clear(Fuse.PropertyHandle handle, object val, bool all) :8755
void Properties__Clear1_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uObject* val, bool* all)
{
    __this->Clear1(handle, val, *all);
}

// public static Fuse.PropertyHandle CreateHandle() :8620
void Properties__CreateHandle_fn(::g::Fuse::PropertyHandle** __retval)
{
    *__retval = Properties::CreateHandle();
}

// public void ForeachInList(Fuse.PropertyHandle handle, Uno.Action<object, object[]> action, object[] state) :8731
void Properties__ForeachInList_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uDelegate* action, uArray* state)
{
    __this->ForeachInList(handle, action, state);
}

// public void ForeachInList(Fuse.PropertyHandle handle, Uno.Action<object, object> action, object state) :8714
void Properties__ForeachInList1_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uDelegate* action, uObject* state)
{
    __this->ForeachInList1(handle, action, state);
}

// public object Get(Fuse.PropertyHandle handle) :8625
void Properties__Get_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uObject** __retval)
{
    *__retval = __this->Get(handle);
}

// public bool Has(Fuse.PropertyHandle handle) :8640
void Properties__Has_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, bool* __retval)
{
    *__retval = __this->Has(handle);
}

// public generated Properties New() :8614
void Properties__New1_fn(Properties** __retval)
{
    *__retval = Properties::New1();
}

// public void RemoveAllFromList(Fuse.PropertyHandle handle, object val) :8688
void Properties__RemoveAllFromList_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uObject* val)
{
    __this->RemoveAllFromList(handle, val);
}

// public void RemoveFromList(Fuse.PropertyHandle handle, object val) :8683
void Properties__RemoveFromList_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uObject* val)
{
    __this->RemoveFromList(handle, val);
}

// public void Set(Fuse.PropertyHandle handle, object val) :8647
void Properties__Set_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uObject* val)
{
    __this->Set(handle, val);
}

// public object[] ToArray(Fuse.PropertyHandle handle) :8693
void Properties__ToArray_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uArray** __retval)
{
    *__retval = __this->ToArray(handle);
}

// public bool TryGet(Fuse.PropertyHandle handle, object& val) :8632
void Properties__TryGet_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uObject** val, bool* __retval)
{
    *__retval = __this->TryGet(handle, val);
}

uSStrong<uObject*> Properties::NoValue_;

// public generated Properties() [instance] :8614
void Properties::ctor_()
{
}

// public void AddToList(Fuse.PropertyHandle handle, object val) [instance] :8665
void Properties::AddToList(::g::Fuse::PropertyHandle* handle, uObject* val)
{
    uStackFrame __("Fuse.Properties", "AddToList(Fuse.PropertyHandle,object)");

    if (_handle == NULL)
    {
        _handle = handle;
        _value = val;
    }
    else  if (_next == NULL)
    {
        _next = Properties::New1();
        uPtr(_next)->AddToList(handle, val);
    }
    else 
        uPtr(_next)->AddToList(handle, val);
}

// public void Clear(Fuse.PropertyHandle handle) [instance] :8748
void Properties::Clear(::g::Fuse::PropertyHandle* handle)
{
    uStackFrame __("Fuse.Properties", "Clear(Fuse.PropertyHandle)");
    Clear1(handle, Properties::NoValue(), true);
}

// private void Clear(Fuse.PropertyHandle handle, object val, bool all) [instance] :8755
void Properties::Clear1(::g::Fuse::PropertyHandle* handle, uObject* val, bool all)
{
    uStackFrame __("Fuse.Properties", "Clear(Fuse.PropertyHandle,object,bool)");

    if (_handle == NULL)
        return;

    Properties* p = this;
    Properties* previous = NULL;

    while (p != NULL)
        if ((uPtr(p)->_handle == handle) && ((val == Properties::NoValue()) || ::g::Uno::Object::Equals(uPtr(val), uPtr(p)->_value)))
        {
            if (previous == NULL)
            {
                if (uPtr(p)->_next == NULL)
                {
                    uPtr(p)->_handle = NULL;
                    p->_value = NULL;
                    break;
                }
                else 
                {
                    uPtr(p)->_handle = uPtr(uPtr(p)->_next)->_handle;
                    p->_value = uPtr(p->_next)->_value;
                    p->_next = uPtr(p->_next)->_next;

                    if (all)
                        continue;
                    else 
                        break;
                }
            }
            else 
            {
                uPtr(previous)->_next = uPtr(p)->_next;
                p = uPtr(p)->_next;

                if (all)
                    continue;
                else 
                    break;
            }
        }
        else 
        {
            previous = p;
            p = uPtr(p)->_next;
        }
}

// public void ForeachInList(Fuse.PropertyHandle handle, Uno.Action<object, object[]> action, object[] state) [instance] :8731
void Properties::ForeachInList(::g::Fuse::PropertyHandle* handle, uDelegate* action, uArray* state)
{
    uStackFrame __("Fuse.Properties", "ForeachInList(Fuse.PropertyHandle,Uno.Action<object, object[]>,object[])");

    if (_handle == NULL)
        return;

    Properties* p = this;

    while (p != NULL)
    {
        if (uPtr(p)->_handle == handle)
            uPtr(action)->Invoke(2, (uObject*)uPtr(p)->_value, state);

        p = uPtr(p)->_next;
    }
}

// public void ForeachInList(Fuse.PropertyHandle handle, Uno.Action<object, object> action, object state) [instance] :8714
void Properties::ForeachInList1(::g::Fuse::PropertyHandle* handle, uDelegate* action, uObject* state)
{
    uStackFrame __("Fuse.Properties", "ForeachInList(Fuse.PropertyHandle,Uno.Action<object, object>,object)");

    if (_handle == NULL)
        return;

    Properties* p = this;

    while (p != NULL)
    {
        if (uPtr(p)->_handle == handle)
            uPtr(action)->Invoke(2, (uObject*)uPtr(p)->_value, state);

        p = uPtr(p)->_next;
    }
}

// public object Get(Fuse.PropertyHandle handle) [instance] :8625
uObject* Properties::Get(::g::Fuse::PropertyHandle* handle)
{
    uStackFrame __("Fuse.Properties", "Get(Fuse.PropertyHandle)");

    if (_handle == handle)
        return _value;

    if (_next != NULL)
        return uPtr(_next)->Get(handle);

    return NULL;
}

// public bool Has(Fuse.PropertyHandle handle) [instance] :8640
bool Properties::Has(::g::Fuse::PropertyHandle* handle)
{
    uStackFrame __("Fuse.Properties", "Has(Fuse.PropertyHandle)");

    if (_handle == handle)
        return true;

    if (_next != NULL)
        return uPtr(_next)->Has(handle);

    return false;
}

// public void RemoveAllFromList(Fuse.PropertyHandle handle, object val) [instance] :8688
void Properties::RemoveAllFromList(::g::Fuse::PropertyHandle* handle, uObject* val)
{
    uStackFrame __("Fuse.Properties", "RemoveAllFromList(Fuse.PropertyHandle,object)");
    Clear1(handle, val, true);
}

// public void RemoveFromList(Fuse.PropertyHandle handle, object val) [instance] :8683
void Properties::RemoveFromList(::g::Fuse::PropertyHandle* handle, uObject* val)
{
    uStackFrame __("Fuse.Properties", "RemoveFromList(Fuse.PropertyHandle,object)");
    Clear1(handle, val, false);
}

// public void Set(Fuse.PropertyHandle handle, object val) [instance] :8647
void Properties::Set(::g::Fuse::PropertyHandle* handle, uObject* val)
{
    uStackFrame __("Fuse.Properties", "Set(Fuse.PropertyHandle,object)");

    if (_handle == NULL)
    {
        _handle = handle;
        _value = val;
    }
    else  if (_handle == handle)
        _value = val;
    else 
    {
        if (_next == NULL)
            _next = Properties::New1();

        uPtr(_next)->Set(handle, val);
    }
}

// public object[] ToArray(Fuse.PropertyHandle handle) [instance] :8693
uArray* Properties::ToArray(::g::Fuse::PropertyHandle* handle)
{
    uStackFrame __("Fuse.Properties", "ToArray(Fuse.PropertyHandle)");

    if (_handle == NULL)
        return uArray::New(::TYPES[10/*object[]*/], 0);

    ::g::Uno::Collections::List* list = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[56/*Uno.Collections.List<object>*/]);
    Properties* p = this;

    while (p != NULL)
    {
        if (uPtr(p)->_handle == handle)
            ::g::Uno::Collections::List__Add_fn(uPtr(list), uPtr(p)->_value);

        p = uPtr(p)->_next;
    }

    return (uArray*)list->ToArray();
}

// public bool TryGet(Fuse.PropertyHandle handle, object& val) [instance] :8632
bool Properties::TryGet(::g::Fuse::PropertyHandle* handle, uObject** val)
{
    uStackFrame __("Fuse.Properties", "TryGet(Fuse.PropertyHandle,object&)");

    if (_handle == handle)
    {
        *val = _value;
        return true;
    }

    if (_next != NULL)
        return uPtr(_next)->TryGet(handle, val);

    *val = NULL;
    return false;
}

// public static Fuse.PropertyHandle CreateHandle() [static] :8620
::g::Fuse::PropertyHandle* Properties::CreateHandle()
{
    uStackFrame __("Fuse.Properties", "CreateHandle()");
    Properties_typeof()->Init();
    return ::g::Fuse::PropertyHandle::New1();
}

// public generated Properties New() [static] :8614
Properties* Properties::New1()
{
    Properties* obj1 = (Properties*)uNew(Properties_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public sealed class PropertyHandle :8609
// {
static void PropertyHandle_build(uType* type)
{
}

uType* PropertyHandle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(PropertyHandle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.PropertyHandle", options);
    type->fp_build_ = PropertyHandle_build;
    type->fp_ctor_ = (void*)PropertyHandle__New1_fn;
    return type;
}

// internal PropertyHandle() :8611
void PropertyHandle__ctor__fn(PropertyHandle* __this)
{
    __this->ctor_();
}

// internal PropertyHandle New() :8611
void PropertyHandle__New1_fn(PropertyHandle** __retval)
{
    *__retval = PropertyHandle::New1();
}

// internal PropertyHandle() [instance] :8611
void PropertyHandle::ctor_()
{
}

// internal PropertyHandle New() [static] :8611
PropertyHandle* PropertyHandle::New1()
{
    PropertyHandle* obj1 = (PropertyHandle*)uNew(PropertyHandle_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public enum PropertyState :6793
uEnumType* PropertyState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.PropertyState", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "NoValue", 0LL,
        "StyleValue", 1LL,
        "LocalValue", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public abstract class RelativeTransform<TransformMode> :9945
// {
static void RelativeTransform_build(uType* type)
{
    ::TYPES[3] = ::g::Uno::Action_typeof();
    ::TYPES[68] = ::g::Fuse::ITransformMode_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(RelativeTransform_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(RelativeTransform_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(RelativeTransform_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(RelativeTransform_type, interface3),
        ::g::Fuse::ITransformRelative_typeof(), offsetof(RelativeTransform_type, interface4));
    type->SetFields(14,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::RelativeTransform, _relativeNode), 0,
        type->T(0), offsetof(::g::Fuse::RelativeTransform, _relativeTo), 0,
        uObject_typeof(), offsetof(::g::Fuse::RelativeTransform, _subscription), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::RelativeTransform, _waitRootingCompleted), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_RelativeNode", NULL, (void*)RelativeTransform__get_RelativeNode_fn, 0, false, ::g::Fuse::Visual_typeof(), 0),
        new uFunction("set_RelativeNode", NULL, (void*)RelativeTransform__set_RelativeNode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("get_RelativeTo", NULL, (void*)RelativeTransform__get_RelativeTo_fn, 0, false, type->T(0), 0),
        new uFunction("set_RelativeTo", NULL, (void*)RelativeTransform__set_RelativeTo_fn, 0, false, uVoid_typeof(), 1, type->T(0)));
}

RelativeTransform_type* RelativeTransform_typeof()
{
    static uSStrong<RelativeTransform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Transform_typeof();
    options.FieldCount = 18;
    options.GenericCount = 1;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(RelativeTransform);
    options.TypeSize = sizeof(RelativeTransform_type);
    type = (RelativeTransform_type*)uClassType::New("Fuse.RelativeTransform`1", options);
    type->fp_build_ = RelativeTransform_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))RelativeTransform__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))RelativeTransform__OnUnrooted_fn;
    type->interface4.fp_OnTransformChanged = (void(*)(uObject*, uObject*, uObject*))RelativeTransform__FuseITransformRelativeOnTransformChanged_fn;
    type->interface4.fp_get_Target = (void(*)(uObject*, ::g::Fuse::Visual**))RelativeTransform__FuseITransformRelativeget_Target_fn;
    type->interface4.fp_get_RelativeNode = (void(*)(uObject*, ::g::Fuse::Visual**))RelativeTransform__FuseITransformRelativeget_RelativeNode_fn;
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

// internal RelativeTransform(TransformMode defaultTransform) :9977
void RelativeTransform__ctor_3_fn(RelativeTransform* __this, uObject* defaultTransform)
{
    __this->ctor_3(defaultTransform);
}

// private void CheckSubscription(bool fromRooted) :10024
void RelativeTransform__CheckSubscription_fn(RelativeTransform* __this, bool* fromRooted)
{
    __this->CheckSubscription(*fromRooted);
}

// private void ClearRootingCompleted() :10010
void RelativeTransform__ClearRootingCompleted_fn(RelativeTransform* __this)
{
    __this->ClearRootingCompleted();
}

// private void ClearSubscription() :9999
void RelativeTransform__ClearSubscription_fn(RelativeTransform* __this)
{
    __this->ClearSubscription();
}

// private void Fuse.ITransformRelative.OnTransformChanged(object s, object a) :9984
void RelativeTransform__FuseITransformRelativeOnTransformChanged_fn(RelativeTransform* __this, uObject* s, uObject* a)
{
    uStackFrame __("Fuse.RelativeTransform`1", "Fuse.ITransformRelative.OnTransformChanged(object,object)");
    __this->OnMatrixChanged(NULL, NULL);
}

// private Fuse.Visual Fuse.ITransformRelative.get_RelativeNode() :9983
void RelativeTransform__FuseITransformRelativeget_RelativeNode_fn(RelativeTransform* __this, ::g::Fuse::Visual** __retval)
{
    uStackFrame __("Fuse.RelativeTransform`1", "Fuse.ITransformRelative.get_RelativeNode()");
    return *__retval = __this->RelativeNode(), void();
}

// private Fuse.Visual Fuse.ITransformRelative.get_Target() :9982
void RelativeTransform__FuseITransformRelativeget_Target_fn(RelativeTransform* __this, ::g::Fuse::Visual** __retval)
{
    uStackFrame __("Fuse.RelativeTransform`1", "Fuse.ITransformRelative.get_Target()");
    return *__retval = __this->Parent(), void();
}

// protected override sealed void OnRooted() :9986
void RelativeTransform__OnRooted_fn(RelativeTransform* __this)
{
    uStackFrame __("Fuse.RelativeTransform`1", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->CheckSubscription(true);
}

// private void OnRootingCompleted() :10018
void RelativeTransform__OnRootingCompleted_fn(RelativeTransform* __this)
{
    __this->OnRootingCompleted();
}

// protected override sealed void OnUnrooted() :9992
void RelativeTransform__OnUnrooted_fn(RelativeTransform* __this)
{
    uStackFrame __("Fuse.RelativeTransform`1", "OnUnrooted()");
    __this->ClearRootingCompleted();
    __this->ClearSubscription();
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// public Fuse.Visual get_RelativeNode() :9951
void RelativeTransform__get_RelativeNode_fn(RelativeTransform* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->RelativeNode();
}

// public void set_RelativeNode(Fuse.Visual value) :9952
void RelativeTransform__set_RelativeNode_fn(RelativeTransform* __this, ::g::Fuse::Visual* value)
{
    __this->RelativeNode(value);
}

// public TransformMode get_RelativeTo() :9965
void RelativeTransform__get_RelativeTo_fn(RelativeTransform* __this, uObject** __retval)
{
    *__retval = __this->RelativeTo();
}

// public void set_RelativeTo(TransformMode value) :9966
void RelativeTransform__set_RelativeTo_fn(RelativeTransform* __this, uObject* value)
{
    __this->RelativeTo(value);
}

// internal RelativeTransform(TransformMode defaultTransform) [instance] :9977
void RelativeTransform::ctor_3(uObject* defaultTransform)
{
    uStackFrame __("Fuse.RelativeTransform`1", ".ctor(TransformMode)");
    ctor_2();
    _relativeTo = defaultTransform;
}

// private void CheckSubscription(bool fromRooted) [instance] :10024
void RelativeTransform::CheckSubscription(bool fromRooted)
{
    uStackFrame __("Fuse.RelativeTransform`1", "CheckSubscription(bool)");

    if (!fromRooted && !IsRootingCompleted())
        return;

    if ((RelativeNode() != NULL) && !uPtr(RelativeNode())->IsRootingStarted())
    {
        ClearRootingCompleted();
        _waitRootingCompleted = RelativeNode();
        uPtr(_waitRootingCompleted)->add_RootingCompleted(uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)RelativeTransform__OnRootingCompleted_fn, this));
        return;
    }

    ClearSubscription();
    _subscription = ::g::Fuse::ITransformMode::Subscribe(uInterface(uPtr(uAs<uObject*>(RelativeTo(), ::TYPES[68/*Fuse.ITransformMode*/])), ::TYPES[68/*Fuse.ITransformMode*/]), (uObject*)this);
    OnMatrixChanged(NULL, NULL);
}

// private void ClearRootingCompleted() [instance] :10010
void RelativeTransform::ClearRootingCompleted()
{
    uStackFrame __("Fuse.RelativeTransform`1", "ClearRootingCompleted()");

    if (_waitRootingCompleted != NULL)
    {
        uPtr(_waitRootingCompleted)->remove_RootingCompleted(uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)RelativeTransform__OnRootingCompleted_fn, this));
        _waitRootingCompleted = NULL;
    }
}

// private void ClearSubscription() [instance] :9999
void RelativeTransform::ClearSubscription()
{
    uStackFrame __("Fuse.RelativeTransform`1", "ClearSubscription()");

    if (_subscription != NULL)
    {
        ::g::Fuse::ITransformMode::Unsubscribe(uInterface(uPtr(uAs<uObject*>(RelativeTo(), ::TYPES[68/*Fuse.ITransformMode*/])), ::TYPES[68/*Fuse.ITransformMode*/]), (uObject*)this, _subscription);
        _subscription = NULL;
    }
}

// private void OnRootingCompleted() [instance] :10018
void RelativeTransform::OnRootingCompleted()
{
    uStackFrame __("Fuse.RelativeTransform`1", "OnRootingCompleted()");
    CheckSubscription(false);
}

// public Fuse.Visual get_RelativeNode() [instance] :9951
::g::Fuse::Visual* RelativeTransform::RelativeNode()
{
    uStackFrame __("Fuse.RelativeTransform`1", "get_RelativeNode()");
    ::g::Fuse::Visual* ind1 = _relativeNode;
    return (ind1 != NULL) ? ind1 : (::g::Fuse::Visual*)Parent();
}

// public void set_RelativeNode(Fuse.Visual value) [instance] :9952
void RelativeTransform::RelativeNode(::g::Fuse::Visual* value)
{
    uStackFrame __("Fuse.RelativeTransform`1", "set_RelativeNode(Fuse.Visual)");

    if (_relativeNode == value)
        return;

    _relativeNode = value;
    CheckSubscription(false);
}

// public TransformMode get_RelativeTo() [instance] :9965
uObject* RelativeTransform::RelativeTo()
{
    uStackFrame __("Fuse.RelativeTransform`1", "get_RelativeTo()");
    return _relativeTo;
}

// public void set_RelativeTo(TransformMode value) [instance] :9966
void RelativeTransform::RelativeTo(uObject* value)
{
    uStackFrame __("Fuse.RelativeTransform`1", "set_RelativeTo(TransformMode)");

    if (_relativeTo == value)
        return;

    ClearSubscription();
    _relativeTo = value;
    CheckSubscription(false);
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// internal sealed class RenderTargetEntry :845
// {
static void RenderTargetEntry_build(uType* type)
{
    type->SetFields(0,
        ::g::OpenGL::GLFramebufferHandle_typeof(), offsetof(::g::Fuse::RenderTargetEntry, GLFramebuffer), 0,
        ::g::Uno::Int4_typeof(), offsetof(::g::Fuse::RenderTargetEntry, GLScissor), 0,
        ::g::Uno::Int2_typeof(), offsetof(::g::Fuse::RenderTargetEntry, GLViewportPixelSize), 0,
        ::g::Uno::Graphics::RenderTarget_typeof(), offsetof(::g::Fuse::RenderTargetEntry, RenderTarget), 0);
}

uType* RenderTargetEntry_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(RenderTargetEntry);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.RenderTargetEntry", options);
    type->fp_build_ = RenderTargetEntry_build;
    return type;
}

// public extern RenderTargetEntry(Uno.Graphics.RenderTarget rt, int2 viewportPixelSize, int4 glScissor, OpenGL.GLFramebufferHandle handle) :852
void RenderTargetEntry__ctor__fn(RenderTargetEntry* __this, ::g::Uno::Graphics::RenderTarget* rt, ::g::Uno::Int2* viewportPixelSize, ::g::Uno::Int4* glScissor, uint32_t* handle)
{
    __this->ctor_(rt, *viewportPixelSize, *glScissor, *handle);
}

// public extern RenderTargetEntry New(Uno.Graphics.RenderTarget rt, int2 viewportPixelSize, int4 glScissor, OpenGL.GLFramebufferHandle handle) :852
void RenderTargetEntry__New1_fn(::g::Uno::Graphics::RenderTarget* rt, ::g::Uno::Int2* viewportPixelSize, ::g::Uno::Int4* glScissor, uint32_t* handle, RenderTargetEntry** __retval)
{
    *__retval = RenderTargetEntry::New1(rt, *viewportPixelSize, *glScissor, *handle);
}

// public extern RenderTargetEntry(Uno.Graphics.RenderTarget rt, int2 viewportPixelSize, int4 glScissor, OpenGL.GLFramebufferHandle handle) [instance] :852
void RenderTargetEntry::ctor_(::g::Uno::Graphics::RenderTarget* rt, ::g::Uno::Int2 viewportPixelSize, ::g::Uno::Int4 glScissor, uint32_t handle)
{
    uStackFrame __("Fuse.RenderTargetEntry", ".ctor(Uno.Graphics.RenderTarget,int2,int4,OpenGL.GLFramebufferHandle)");
    RenderTarget = rt;
    GLViewportPixelSize = viewportPixelSize;
    GLScissor = glScissor;
    GLFramebuffer = handle;
}

// public extern RenderTargetEntry New(Uno.Graphics.RenderTarget rt, int2 viewportPixelSize, int4 glScissor, OpenGL.GLFramebufferHandle handle) [static] :852
RenderTargetEntry* RenderTargetEntry::New1(::g::Uno::Graphics::RenderTarget* rt, ::g::Uno::Int2 viewportPixelSize, ::g::Uno::Int4 glScissor, uint32_t handle)
{
    RenderTargetEntry* obj1 = (RenderTargetEntry*)uNew(RenderTargetEntry_typeof());
    obj1->ctor_(rt, viewportPixelSize, glScissor, handle);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public sealed class RequestBringIntoViewArgs :6328
// {
static void RequestBringIntoViewArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::RequestBringIntoViewArgs, _Visual), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)RequestBringIntoViewArgs__New2_fn, 0, true, RequestBringIntoViewArgs_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("get_Visual", NULL, (void*)RequestBringIntoViewArgs__get_Visual_fn, 0, false, ::g::Fuse::Visual_typeof(), 0));
}

uType* RequestBringIntoViewArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(RequestBringIntoViewArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.RequestBringIntoViewArgs", options);
    type->fp_build_ = RequestBringIntoViewArgs_build;
    return type;
}

// public RequestBringIntoViewArgs(Fuse.Visual elm) :6331
void RequestBringIntoViewArgs__ctor_1_fn(RequestBringIntoViewArgs* __this, ::g::Fuse::Visual* elm)
{
    __this->ctor_1(elm);
}

// public RequestBringIntoViewArgs New(Fuse.Visual elm) :6331
void RequestBringIntoViewArgs__New2_fn(::g::Fuse::Visual* elm, RequestBringIntoViewArgs** __retval)
{
    *__retval = RequestBringIntoViewArgs::New2(elm);
}

// public generated Fuse.Visual get_Visual() :6330
void RequestBringIntoViewArgs__get_Visual_fn(RequestBringIntoViewArgs* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Visual();
}

// private generated void set_Visual(Fuse.Visual value) :6330
void RequestBringIntoViewArgs__set_Visual_fn(RequestBringIntoViewArgs* __this, ::g::Fuse::Visual* value)
{
    __this->Visual(value);
}

// public RequestBringIntoViewArgs(Fuse.Visual elm) [instance] :6331
void RequestBringIntoViewArgs::ctor_1(::g::Fuse::Visual* elm)
{
    uStackFrame __("Fuse.RequestBringIntoViewArgs", ".ctor(Fuse.Visual)");
    ctor_();
    Visual(elm);
}

// public generated Fuse.Visual get_Visual() [instance] :6330
::g::Fuse::Visual* RequestBringIntoViewArgs::Visual()
{
    uStackFrame __("Fuse.RequestBringIntoViewArgs", "get_Visual()");
    return _Visual;
}

// private generated void set_Visual(Fuse.Visual value) [instance] :6330
void RequestBringIntoViewArgs::Visual(::g::Fuse::Visual* value)
{
    uStackFrame __("Fuse.RequestBringIntoViewArgs", "set_Visual(Fuse.Visual)");
    _Visual = value;
}

// public RequestBringIntoViewArgs New(Fuse.Visual elm) [static] :6331
RequestBringIntoViewArgs* RequestBringIntoViewArgs::New2(::g::Fuse::Visual* elm)
{
    RequestBringIntoViewArgs* obj1 = (RequestBringIntoViewArgs*)uNew(RequestBringIntoViewArgs_typeof());
    obj1->ctor_1(elm);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public delegate void RequestBringIntoViewHandler(object sender, Fuse.RequestBringIntoViewArgs args) :6337
uDelegateType* RequestBringIntoViewHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.RequestBringIntoViewHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::RequestBringIntoViewArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public sealed class RequiresRootedException :7481
// {
static void RequiresRootedException_build(uType* type)
{
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)RequiresRootedException__New4_fn, 0, true, RequiresRootedException_typeof(), 0));
}

::g::Uno::Exception_type* RequiresRootedException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(RequiresRootedException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Fuse.RequiresRootedException", options);
    type->fp_build_ = RequiresRootedException_build;
    type->fp_ctor_ = (void*)RequiresRootedException__New4_fn;
    return type;
}

// public generated RequiresRootedException() :7481
void RequiresRootedException__ctor_3_fn(RequiresRootedException* __this)
{
    __this->ctor_3();
}

// public generated RequiresRootedException New() :7481
void RequiresRootedException__New4_fn(RequiresRootedException** __retval)
{
    *__retval = RequiresRootedException::New4();
}

// public generated RequiresRootedException() [instance] :7481
void RequiresRootedException::ctor_3()
{
    ctor_();
}

// public generated RequiresRootedException New() [static] :7481
RequiresRootedException* RequiresRootedException::New4()
{
    RequiresRootedException* obj1 = (RequiresRootedException*)uNew(RequiresRootedException_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// internal enum RootStage :4356
uEnumType* RootStage_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.RootStage", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Unrooted", 0LL,
        "Started", 1LL,
        "Completed", 2LL,
        "Unrooting", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public class RootViewport :8942
// {
static void RootViewport_build(uType* type)
{
    ::TYPES[63] = ::g::Uno::EventHandler_typeof();
    ::TYPES[3] = ::g::Uno::Action_typeof();
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[7] = ::g::Fuse::Visual_typeof();
    ::TYPES[69] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[40] = ::g::Uno::Exception_typeof();
    ::TYPES[34] = ::g::Fuse::IFrustum_typeof();
    ::TYPES[70] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float2_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(RootViewport_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(RootViewport_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(RootViewport_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(RootViewport_type, interface3),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(RootViewport_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(RootViewport_type, interface5),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(RootViewport_type, interface6),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(RootViewport_type, interface7),
        ::g::Fuse::IViewport_typeof(), offsetof(RootViewport_type, interface8),
        ::g::Uno::IDisposable_typeof(), offsetof(RootViewport_type, interface9),
        ::g::Fuse::ICommonViewport_typeof(), offsetof(RootViewport_type, interface10));
    type->SetFields(55,
        ::g::Fuse::FrustumViewport_typeof(), offsetof(::g::Fuse::RootViewport, _frustumViewport), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::RootViewport, _overridePixelsPerPoint), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::RootViewport, _pixelSize), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::RootViewport, _pixelsPerOSPoint), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::RootViewport, _pixelsPerPoint), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::RootViewport, _sizeOverridden), 0,
        ::g::Fuse::IFrustum_typeof(), offsetof(::g::Fuse::RootViewport, Frustum), 0,
        ::g::Uno::Platform::Window_typeof(), offsetof(::g::Fuse::RootViewport, Window), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float2_typeof()), offsetof(::g::Fuse::RootViewport, Resized1), 0);
    type->Reflection.SetFunctions(16,
        new uFunction(".ctor", NULL, (void*)RootViewport__New2_fn, 0, true, RootViewport_typeof(), 2, ::g::Uno::Platform::Window_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("get_PixelSize", NULL, (void*)RootViewport__get_PixelSize_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_PixelsPerPoint", NULL, (void*)RootViewport__get_PixelsPerPoint_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("PointToWorldRay", NULL, (void*)RootViewport__PointToWorldRay_fn, 0, false, ::g::Uno::Geometry::Ray_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_ProjectionTransform", NULL, (void*)RootViewport__get_ProjectionTransform_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("get_ProjectionTransformInverse", NULL, (void*)RootViewport__get_ProjectionTransformInverse_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("add_Resized", NULL, (void*)RootViewport__add_Resized_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float2_typeof())),
        new uFunction("remove_Resized", NULL, (void*)RootViewport__remove_Resized_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float2_typeof())),
        new uFunction("get_Size", NULL, (void*)RootViewport__get_Size_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_ViewOrigin", NULL, (void*)RootViewport__get_ViewOrigin_fn, 0, false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("get_ViewProjectionTransform", NULL, (void*)RootViewport__get_ViewProjectionTransform_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("get_ViewProjectionTransformInverse", NULL, (void*)RootViewport__get_ViewProjectionTransformInverse_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("get_ViewRange", NULL, (void*)RootViewport__get_ViewRange_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_ViewTransform", NULL, (void*)RootViewport__get_ViewTransform_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("get_ViewTransformInverse", NULL, (void*)RootViewport__get_ViewTransformInverse_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("WorldToLocalRay", NULL, (void*)RootViewport__WorldToLocalRay_fn, 0, false, ::g::Uno::Geometry::Ray_typeof(), 3, ::g::Fuse::IViewport_typeof(), ::g::Uno::Geometry::Ray_typeof(), ::g::Fuse::Visual_typeof()));
}

RootViewport_type* RootViewport_typeof()
{
    static uSStrong<RootViewport_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Visual_typeof();
    options.FieldCount = 64;
    options.InterfaceCount = 11;
    options.ObjectSize = sizeof(RootViewport);
    options.TypeSize = sizeof(RootViewport_type);
    type = (RootViewport_type*)uClassType::New("Fuse.RootViewport", options);
    type->fp_build_ = RootViewport_build;
    type->fp_Draw = (void(*)(::g::Fuse::Visual*, ::g::Fuse::DrawContext*))RootViewport__Draw_fn;
    type->fp_get_VisualContext = (void(*)(::g::Fuse::Visual*, int*))RootViewport__get_VisualContext_fn;
    type->interface9.fp_Dispose = (void(*)(uObject*))RootViewport__UnoIDisposableDispose_fn;
    type->interface8.fp_PointToWorldRay = (void(*)(uObject*, ::g::Uno::Float2*, ::g::Uno::Geometry::Ray*))RootViewport__PointToWorldRay_fn;
    type->interface8.fp_WorldToLocalRay = (void(*)(uObject*, uObject*, ::g::Uno::Geometry::Ray*, ::g::Fuse::Visual*, ::g::Uno::Geometry::Ray*))RootViewport__WorldToLocalRay_fn;
    type->interface10.fp_get_PixelsPerPoint = (void(*)(uObject*, float*))RootViewport__get_PixelsPerPoint_fn;
    type->interface10.fp_get_Size = (void(*)(uObject*, ::g::Uno::Float2*))RootViewport__get_Size_fn;
    type->interface10.fp_get_PixelSize = (void(*)(uObject*, ::g::Uno::Float2*))RootViewport__get_PixelSize_fn;
    type->interface10.fp_get_ViewTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))RootViewport__get_ViewTransform_fn;
    type->interface6.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface6.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface4.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface7.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface6.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface4.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface4.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface5.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Visual__OnPropertyChanged2_fn;
    type->interface6.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface6.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
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

// public RootViewport(Uno.Platform.Window window, [float overridePixelsPerPoint]) :8948
void RootViewport__ctor_3_fn(RootViewport* __this, ::g::Uno::Platform::Window* window, float* overridePixelsPerPoint)
{
    __this->ctor_3(window, *overridePixelsPerPoint);
}

// public override sealed void Draw(Fuse.DrawContext dc) :8979
void RootViewport__Draw_fn(RootViewport* __this, ::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.RootViewport", "Draw(Fuse.DrawContext)");
    ::g::Fuse::Node* ret2;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
    {
        ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(__this->Children()), ::TYPES[69/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret2), ret2), ::TYPES[7/*Fuse.Visual*/]);
        uPtr(v)->Draw(dc);
    }
}

// private void EstablishSize() :9031
void RootViewport__EstablishSize_fn(RootViewport* __this)
{
    __this->EstablishSize();
}

// private extern void EstablishSizeInternals() :9093
void RootViewport__EstablishSizeInternals_fn(RootViewport* __this)
{
    __this->EstablishSizeInternals();
}

// public RootViewport New(Uno.Platform.Window window, [float overridePixelsPerPoint]) :8948
void RootViewport__New2_fn(::g::Uno::Platform::Window* window, float* overridePixelsPerPoint, RootViewport** __retval)
{
    *__retval = RootViewport::New2(window, *overridePixelsPerPoint);
}

// private void OnGotFocus(object sender, Uno.EventArgs args) :8988
void RootViewport__OnGotFocus_fn(RootViewport* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnGotFocus(sender, args);
}

// private void OnLostFocus(object sender, Uno.EventArgs args) :9000
void RootViewport__OnLostFocus_fn(RootViewport* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnLostFocus(sender, args);
}

// internal void OnResized(object s, object a) :9012
void RootViewport__OnResized_fn(RootViewport* __this, uObject* s, uObject* a)
{
    __this->OnResized(s, a);
}

// public float2 get_PixelSize() :9124
void RootViewport__get_PixelSize_fn(RootViewport* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PixelSize();
}

// internal float get_PixelsPerOSPoint() :9106
void RootViewport__get_PixelsPerOSPoint_fn(RootViewport* __this, float* __retval)
{
    *__retval = __this->PixelsPerOSPoint();
}

// public float get_PixelsPerPoint() :9111
void RootViewport__get_PixelsPerPoint_fn(RootViewport* __this, float* __retval)
{
    *__retval = __this->PixelsPerPoint();
}

// public Uno.Geometry.Ray PointToWorldRay(float2 pixelPos) :9141
void RootViewport__PointToWorldRay_fn(RootViewport* __this, ::g::Uno::Float2* pixelPos, ::g::Uno::Geometry::Ray* __retval)
{
    *__retval = __this->PointToWorldRay(*pixelPos);
}

// public float4x4 get_ProjectionTransform() :9128
void RootViewport__get_ProjectionTransform_fn(RootViewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ProjectionTransform();
}

// public float4x4 get_ProjectionTransformInverse() :9130
void RootViewport__get_ProjectionTransformInverse_fn(RootViewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ProjectionTransformInverse();
}

// public generated void add_Resized(Uno.Action<float2> value) :8946
void RootViewport__add_Resized_fn(RootViewport* __this, uDelegate* value)
{
    __this->add_Resized(value);
}

// public generated void remove_Resized(Uno.Action<float2> value) :8946
void RootViewport__remove_Resized_fn(RootViewport* __this, uDelegate* value)
{
    __this->remove_Resized(value);
}

// public float2 get_Size() :9118
void RootViewport__get_Size_fn(RootViewport* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// private void Uno.IDisposable.Dispose() :8968
void RootViewport__UnoIDisposableDispose_fn(RootViewport* __this)
{
    uStackFrame __("Fuse.RootViewport", "Uno.IDisposable.Dispose()");
    ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)::g::Fuse::Visual__PerformLayout_fn, __this), 1);
    ::g::Uno::Collections::ICollection::Clear(uInterface(uPtr(__this->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]));
}

// public float3 get_ViewOrigin() :9139
void RootViewport__get_ViewOrigin_fn(RootViewport* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->ViewOrigin();
}

// public float4x4 get_ViewProjectionTransform() :9132
void RootViewport__get_ViewProjectionTransform_fn(RootViewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ViewProjectionTransform();
}

// public float4x4 get_ViewProjectionTransformInverse() :9134
void RootViewport__get_ViewProjectionTransformInverse_fn(RootViewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ViewProjectionTransformInverse();
}

// public float2 get_ViewRange() :9140
void RootViewport__get_ViewRange_fn(RootViewport* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ViewRange();
}

// public float4x4 get_ViewTransform() :9138
void RootViewport__get_ViewTransform_fn(RootViewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ViewTransform();
}

// public float4x4 get_ViewTransformInverse() :9136
void RootViewport__get_ViewTransformInverse_fn(RootViewport* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ViewTransformInverse();
}

// public override sealed Fuse.VisualContext get_VisualContext() :8976
void RootViewport__get_VisualContext_fn(RootViewport* __this, int* __retval)
{
    uStackFrame __("Fuse.RootViewport", "get_VisualContext()");
    return *__retval = 1, void();
}

// public Uno.Geometry.Ray WorldToLocalRay(Fuse.IViewport world, Uno.Geometry.Ray worldRay, Fuse.Visual where) :9145
void RootViewport__WorldToLocalRay_fn(RootViewport* __this, uObject* world, ::g::Uno::Geometry::Ray* worldRay, ::g::Fuse::Visual* where, ::g::Uno::Geometry::Ray* __retval)
{
    *__retval = __this->WorldToLocalRay(world, *worldRay, where);
}

// public RootViewport(Uno.Platform.Window window, [float overridePixelsPerPoint]) [instance] :8948
void RootViewport::ctor_3(::g::Uno::Platform::Window* window, float overridePixelsPerPoint)
{
    uStackFrame __("Fuse.RootViewport", ".ctor(Uno.Platform.Window,[float])");
    Frustum = (uObject*)::g::Fuse::OrthographicFrustum::New1();
    _frustumViewport = ::g::Fuse::FrustumViewport::New1();
    ctor_2();
    _overridePixelsPerPoint = overridePixelsPerPoint;
    Window = window;
    EstablishSize();
    uPtr(Window)->add_GotFocus(uDelegate::New(::TYPES[63/*Uno.EventHandler*/], (void*)RootViewport__OnGotFocus_fn, this));
    uPtr(Window)->add_LostFocus(uDelegate::New(::TYPES[63/*Uno.EventHandler*/], (void*)RootViewport__OnLostFocus_fn, this));
    uPtr(Window)->add_Resized(uDelegate::New(::TYPES[63/*Uno.EventHandler*/], (void*)RootViewport__OnResized_fn, this));
    uPtr(::g::Fuse::Platform::Display::MainDisplay())->add_FrameChanged(uDelegate::New(::TYPES[63/*Uno.EventHandler*/], (void*)RootViewport__OnResized_fn, this));
    uPtr(_frustumViewport)->Update((uObject*)this, Frustum);
    RootInternal(NULL);
    ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)::g::Fuse::Visual__PerformLayout_fn, this), 1);
}

// private void EstablishSize() [instance] :9031
void RootViewport::EstablishSize()
{
    uStackFrame __("Fuse.RootViewport", "EstablishSize()");

    if (!_sizeOverridden)
    {
        if ((Window == NULL) || (::g::Fuse::AppBase::Current1() == NULL))
        {
            _pixelsPerPoint = 1.0f;
            _pixelsPerOSPoint = 1.0f;
        }
        else 
            EstablishSizeInternals();
    }

    if (::g::Uno::Delegate::op_Inequality(Resized1, NULL))
        uPtr(Resized1)->InvokeVoid(uCRef(_pixelSize));
}

// private extern void EstablishSizeInternals() [instance] :9093
void RootViewport::EstablishSizeInternals()
{
    uStackFrame __("Fuse.RootViewport", "EstablishSizeInternals()");
    _pixelSize = uPtr(::g::Fuse::Platform::Display::MainDisplay())->Frame().Size();
    _pixelsPerOSPoint = uPtr(::g::Fuse::Platform::Display::MainDisplay())->Density();
    _pixelsPerPoint = _pixelsPerOSPoint;
}

// private void OnGotFocus(object sender, Uno.EventArgs args) [instance] :8988
void RootViewport::OnGotFocus(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.RootViewport", "OnGotFocus(object,Uno.EventArgs)");

    try
    {
        ::g::Fuse::Input::Focus::OnWindowGotFocus(sender, args);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private void OnLostFocus(object sender, Uno.EventArgs args) [instance] :9000
void RootViewport::OnLostFocus(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.RootViewport", "OnLostFocus(object,Uno.EventArgs)");

    try
    {
        ::g::Fuse::Input::Focus::OnWindowLostFocus(sender, args);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// internal void OnResized(object s, object a) [instance] :9012
void RootViewport::OnResized(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.RootViewport", "OnResized(object,object)");
    EstablishSize();
    uPtr(_frustumViewport)->Update((uObject*)this, Frustum);
}

// public float2 get_PixelSize() [instance] :9124
::g::Uno::Float2 RootViewport::PixelSize()
{
    uStackFrame __("Fuse.RootViewport", "get_PixelSize()");
    return _pixelSize;
}

// internal float get_PixelsPerOSPoint() [instance] :9106
float RootViewport::PixelsPerOSPoint()
{
    uStackFrame __("Fuse.RootViewport", "get_PixelsPerOSPoint()");
    return _pixelsPerOSPoint;
}

// public float get_PixelsPerPoint() [instance] :9111
float RootViewport::PixelsPerPoint()
{
    uStackFrame __("Fuse.RootViewport", "get_PixelsPerPoint()");
    return (_overridePixelsPerPoint > 0.0f) ? _overridePixelsPerPoint : _pixelsPerPoint;
}

// public Uno.Geometry.Ray PointToWorldRay(float2 pixelPos) [instance] :9141
::g::Uno::Geometry::Ray RootViewport::PointToWorldRay(::g::Uno::Float2 pixelPos)
{
    uStackFrame __("Fuse.RootViewport", "PointToWorldRay(float2)");
    return ::g::Fuse::FrustumViewport::PointToWorldRay((uObject*)this, uPtr(_frustumViewport)->ViewProjectionTransformInverse, pixelPos);
}

// public float4x4 get_ProjectionTransform() [instance] :9128
::g::Uno::Float4x4 RootViewport::ProjectionTransform()
{
    uStackFrame __("Fuse.RootViewport", "get_ProjectionTransform()");
    return uPtr(_frustumViewport)->ProjectionTransform;
}

// public float4x4 get_ProjectionTransformInverse() [instance] :9130
::g::Uno::Float4x4 RootViewport::ProjectionTransformInverse()
{
    uStackFrame __("Fuse.RootViewport", "get_ProjectionTransformInverse()");
    return uPtr(_frustumViewport)->ProjectionTransformInverse;
}

// public generated void add_Resized(Uno.Action<float2> value) [instance] :8946
void RootViewport::add_Resized(uDelegate* value)
{
    uStackFrame __("Fuse.RootViewport", "add_Resized(Uno.Action<float2>)");
    Resized1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Resized1, value), ::TYPES[70/*Uno.Action<float2>*/]);
}

// public generated void remove_Resized(Uno.Action<float2> value) [instance] :8946
void RootViewport::remove_Resized(uDelegate* value)
{
    uStackFrame __("Fuse.RootViewport", "remove_Resized(Uno.Action<float2>)");
    Resized1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Resized1, value), ::TYPES[70/*Uno.Action<float2>*/]);
}

// public float2 get_Size() [instance] :9118
::g::Uno::Float2 RootViewport::Size()
{
    uStackFrame __("Fuse.RootViewport", "get_Size()");
    return ::g::Uno::Float2__op_Division1(PixelSize(), PixelsPerPoint());
}

// public float3 get_ViewOrigin() [instance] :9139
::g::Uno::Float3 RootViewport::ViewOrigin()
{
    uStackFrame __("Fuse.RootViewport", "get_ViewOrigin()");
    return ::g::Fuse::IFrustum::GetWorldPosition(uInterface(uPtr(Frustum), ::TYPES[34/*Fuse.IFrustum*/]), (uObject*)this);
}

// public float4x4 get_ViewProjectionTransform() [instance] :9132
::g::Uno::Float4x4 RootViewport::ViewProjectionTransform()
{
    uStackFrame __("Fuse.RootViewport", "get_ViewProjectionTransform()");
    return uPtr(_frustumViewport)->ViewProjectionTransform;
}

// public float4x4 get_ViewProjectionTransformInverse() [instance] :9134
::g::Uno::Float4x4 RootViewport::ViewProjectionTransformInverse()
{
    uStackFrame __("Fuse.RootViewport", "get_ViewProjectionTransformInverse()");
    return uPtr(_frustumViewport)->ViewProjectionTransformInverse;
}

// public float2 get_ViewRange() [instance] :9140
::g::Uno::Float2 RootViewport::ViewRange()
{
    uStackFrame __("Fuse.RootViewport", "get_ViewRange()");
    return ::g::Fuse::IFrustum::GetDepthRange(uInterface(uPtr(Frustum), ::TYPES[34/*Fuse.IFrustum*/]), (uObject*)this);
}

// public float4x4 get_ViewTransform() [instance] :9138
::g::Uno::Float4x4 RootViewport::ViewTransform()
{
    uStackFrame __("Fuse.RootViewport", "get_ViewTransform()");
    return uPtr(_frustumViewport)->ViewTransform;
}

// public float4x4 get_ViewTransformInverse() [instance] :9136
::g::Uno::Float4x4 RootViewport::ViewTransformInverse()
{
    uStackFrame __("Fuse.RootViewport", "get_ViewTransformInverse()");
    return uPtr(_frustumViewport)->ViewTransformInverse;
}

// public Uno.Geometry.Ray WorldToLocalRay(Fuse.IViewport world, Uno.Geometry.Ray worldRay, Fuse.Visual where) [instance] :9145
::g::Uno::Geometry::Ray RootViewport::WorldToLocalRay(uObject* world, ::g::Uno::Geometry::Ray worldRay, ::g::Fuse::Visual* where)
{
    uStackFrame __("Fuse.RootViewport", "WorldToLocalRay(Fuse.IViewport,Uno.Geometry.Ray,Fuse.Visual)");
    return ::g::Fuse::FrustumViewport::WorldToLocalRay((uObject*)this, world, worldRay, where);
}

// public RootViewport New(Uno.Platform.Window window, [float overridePixelsPerPoint]) [static] :8948
RootViewport* RootViewport::New2(::g::Uno::Platform::Window* window, float overridePixelsPerPoint)
{
    RootViewport* obj1 = (RootViewport*)uNew(RootViewport_typeof());
    obj1->ctor_3(window, overridePixelsPerPoint);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public sealed class Rotation :9706
// {
static void Rotation_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Transform_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Transform_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Transform_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Transform_type, interface3));
    type->SetFields(14,
        ::g::Uno::Float3_typeof(), offsetof(::g::Fuse::Rotation, _euler), 0);
    type->Reflection.SetFunctions(13,
        new uFunction("get_Degrees", NULL, (void*)Rotation__get_Degrees_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Degrees", NULL, (void*)Rotation__set_Degrees_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_DegreesX", NULL, (void*)Rotation__get_DegreesX_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesX", NULL, (void*)Rotation__set_DegreesX_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_DegreesY", NULL, (void*)Rotation__get_DegreesY_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesY", NULL, (void*)Rotation__set_DegreesY_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_DegreesZ", NULL, (void*)Rotation__get_DegreesZ_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesZ", NULL, (void*)Rotation__set_DegreesZ_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_EulerAngle", NULL, (void*)Rotation__get_EulerAngle_fn, 0, false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("set_EulerAngle", NULL, (void*)Rotation__set_EulerAngle_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("get_EulerAngleDegrees", NULL, (void*)Rotation__get_EulerAngleDegrees_fn, 0, false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("set_EulerAngleDegrees", NULL, (void*)Rotation__set_EulerAngleDegrees_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction(".ctor", NULL, (void*)Rotation__New2_fn, 0, true, Rotation_typeof(), 0));
}

::g::Fuse::Transform_type* Rotation_typeof()
{
    static uSStrong< ::g::Fuse::Transform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Transform_typeof();
    options.FieldCount = 15;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Rotation);
    options.TypeSize = sizeof(::g::Fuse::Transform_type);
    type = (::g::Fuse::Transform_type*)uClassType::New("Fuse.Rotation", options);
    type->fp_build_ = Rotation_build;
    type->fp_ctor_ = (void*)Rotation__New2_fn;
    type->fp_AppendTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*, float*))Rotation__AppendTo_fn;
    type->fp_get_IsFlat = (void(*)(::g::Fuse::Transform*, bool*))Rotation__get_IsFlat_fn;
    type->fp_PrependTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*))Rotation__PrependTo_fn;
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

// public generated Rotation() :9706
void Rotation__ctor_3_fn(Rotation* __this)
{
    __this->ctor_3();
}

// public override sealed void AppendTo(Fuse.FastMatrix m, float weight) :9805
void Rotation__AppendTo_fn(Rotation* __this, ::g::Fuse::FastMatrix* m, float* weight)
{
    uStackFrame __("Fuse.Rotation", "AppendTo(Fuse.FastMatrix,float)");
    float weight_ = *weight;

    if (__this->HasRotation())
        uPtr(m)->AppendRotationQuaternion(::g::Uno::Quaternion::FromEulerAngle1(::g::Uno::Float3__op_Multiply1(__this->_euler, weight_)));
}

// public float get_Degrees() :9744
void Rotation__get_Degrees_fn(Rotation* __this, float* __retval)
{
    *__retval = __this->Degrees();
}

// public void set_Degrees(float value) :9745
void Rotation__set_Degrees_fn(Rotation* __this, float* value)
{
    __this->Degrees(*value);
}

// public float get_DegreesX() :9784
void Rotation__get_DegreesX_fn(Rotation* __this, float* __retval)
{
    *__retval = __this->DegreesX();
}

// public void set_DegreesX(float value) :9785
void Rotation__set_DegreesX_fn(Rotation* __this, float* value)
{
    __this->DegreesX(*value);
}

// public float get_DegreesY() :9770
void Rotation__get_DegreesY_fn(Rotation* __this, float* __retval)
{
    *__retval = __this->DegreesY();
}

// public void set_DegreesY(float value) :9771
void Rotation__set_DegreesY_fn(Rotation* __this, float* value)
{
    __this->DegreesY(*value);
}

// public float get_DegreesZ() :9753
void Rotation__get_DegreesZ_fn(Rotation* __this, float* __retval)
{
    *__retval = __this->DegreesZ();
}

// public void set_DegreesZ(float value) :9754
void Rotation__set_DegreesZ_fn(Rotation* __this, float* value)
{
    __this->DegreesZ(*value);
}

// public float3 get_EulerAngle() :9712
void Rotation__get_EulerAngle_fn(Rotation* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->EulerAngle();
}

// public void set_EulerAngle(float3 value) :9713
void Rotation__set_EulerAngle_fn(Rotation* __this, ::g::Uno::Float3* value)
{
    __this->EulerAngle(*value);
}

// public float3 get_EulerAngleDegrees() :9726
void Rotation__get_EulerAngleDegrees_fn(Rotation* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->EulerAngleDegrees();
}

// public void set_EulerAngleDegrees(float3 value) :9727
void Rotation__set_EulerAngleDegrees_fn(Rotation* __this, ::g::Uno::Float3* value)
{
    __this->EulerAngleDegrees(*value);
}

// private bool get_HasRotation() :9798
void Rotation__get_HasRotation_fn(Rotation* __this, bool* __retval)
{
    *__retval = __this->HasRotation();
}

// public override sealed bool get_IsFlat() :9819
void Rotation__get_IsFlat_fn(Rotation* __this, bool* __retval)
{
    uStackFrame __("Fuse.Rotation", "get_IsFlat()");
    return *__retval = (::g::Uno::Math::Abs1(__this->_euler.X) < 1e-05f) && (::g::Uno::Math::Abs1(__this->_euler.Y) < 1e-05f), void();
}

// public generated Rotation New() :9706
void Rotation__New2_fn(Rotation** __retval)
{
    *__retval = Rotation::New2();
}

// public override sealed void PrependTo(Fuse.FastMatrix m) :9811
void Rotation__PrependTo_fn(Rotation* __this, ::g::Fuse::FastMatrix* m)
{
    uStackFrame __("Fuse.Rotation", "PrependTo(Fuse.FastMatrix)");

    if (__this->HasRotation())
        uPtr(m)->PrependRotationQuaternion(::g::Uno::Quaternion::FromEulerAngle1(__this->_euler));
}

// public generated Rotation() [instance] :9706
void Rotation::ctor_3()
{
    uStackFrame __("Fuse.Rotation", ".ctor()");
    ctor_2();
}

// public float get_Degrees() [instance] :9744
float Rotation::Degrees()
{
    uStackFrame __("Fuse.Rotation", "get_Degrees()");
    return DegreesZ();
}

// public void set_Degrees(float value) [instance] :9745
void Rotation::Degrees(float value)
{
    uStackFrame __("Fuse.Rotation", "set_Degrees(float)");
    DegreesZ(value);
}

// public float get_DegreesX() [instance] :9784
float Rotation::DegreesX()
{
    uStackFrame __("Fuse.Rotation", "get_DegreesX()");
    return ::g::Uno::Math::RadiansToDegrees1(_euler.X);
}

// public void set_DegreesX(float value) [instance] :9785
void Rotation::DegreesX(float value)
{
    uStackFrame __("Fuse.Rotation", "set_DegreesX(float)");
    float r = ::g::Uno::Math::DegreesToRadians1(value);

    if (_euler.X != r)
    {
        _euler.X = r;
        OnMatrixChanged(NULL, NULL);
    }
}

// public float get_DegreesY() [instance] :9770
float Rotation::DegreesY()
{
    uStackFrame __("Fuse.Rotation", "get_DegreesY()");
    return ::g::Uno::Math::RadiansToDegrees1(_euler.Y);
}

// public void set_DegreesY(float value) [instance] :9771
void Rotation::DegreesY(float value)
{
    uStackFrame __("Fuse.Rotation", "set_DegreesY(float)");
    float r = ::g::Uno::Math::DegreesToRadians1(value);

    if (_euler.Y != r)
    {
        _euler.Y = r;
        OnMatrixChanged(NULL, NULL);
    }
}

// public float get_DegreesZ() [instance] :9753
float Rotation::DegreesZ()
{
    uStackFrame __("Fuse.Rotation", "get_DegreesZ()");
    return ::g::Uno::Math::RadiansToDegrees1(_euler.Z);
}

// public void set_DegreesZ(float value) [instance] :9754
void Rotation::DegreesZ(float value)
{
    uStackFrame __("Fuse.Rotation", "set_DegreesZ(float)");
    float r = ::g::Uno::Math::DegreesToRadians1(value);

    if (_euler.Z != r)
    {
        _euler.Z = r;
        OnMatrixChanged(NULL, NULL);
    }
}

// public float3 get_EulerAngle() [instance] :9712
::g::Uno::Float3 Rotation::EulerAngle()
{
    uStackFrame __("Fuse.Rotation", "get_EulerAngle()");
    return _euler;
}

// public void set_EulerAngle(float3 value) [instance] :9713
void Rotation::EulerAngle(::g::Uno::Float3 value)
{
    uStackFrame __("Fuse.Rotation", "set_EulerAngle(float3)");

    if (::g::Uno::Float3__op_Inequality(_euler, value))
    {
        _euler = value;
        OnMatrixChanged(NULL, NULL);
    }
}

// public float3 get_EulerAngleDegrees() [instance] :9726
::g::Uno::Float3 Rotation::EulerAngleDegrees()
{
    uStackFrame __("Fuse.Rotation", "get_EulerAngleDegrees()");
    return ::g::Uno::Math::RadiansToDegrees3(_euler);
}

// public void set_EulerAngleDegrees(float3 value) [instance] :9727
void Rotation::EulerAngleDegrees(::g::Uno::Float3 value)
{
    uStackFrame __("Fuse.Rotation", "set_EulerAngleDegrees(float3)");
    ::g::Uno::Float3 r = ::g::Uno::Math::DegreesToRadians3(value);

    if (::g::Uno::Float3__op_Inequality(_euler, r))
    {
        _euler = r;
        OnMatrixChanged(NULL, NULL);
    }
}

// private bool get_HasRotation() [instance] :9798
bool Rotation::HasRotation()
{
    uStackFrame __("Fuse.Rotation", "get_HasRotation()");
    return ((::g::Uno::Math::Abs1(_euler.X) + ::g::Uno::Math::Abs1(_euler.Y)) + ::g::Uno::Math::Abs1(_euler.Z)) > 1e-05f;
}

// public generated Rotation New() [static] :9706
Rotation* Rotation::New2()
{
    Rotation* obj1 = (Rotation*)uNew(Rotation_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public sealed class Scaling :9198
// {
static void Scaling_build(uType* type)
{
    ::TYPES[71] = ::g::Fuse::IScalingMode_typeof();
    type->SetBase(::g::Fuse::RelativeTransform_typeof()->MakeType(::g::Fuse::IScalingMode_typeof()));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::RelativeTransform_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::RelativeTransform_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::RelativeTransform_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::RelativeTransform_type, interface3),
        ::g::Fuse::ITransformRelative_typeof(), offsetof(::g::Fuse::RelativeTransform_type, interface4));
    type->SetFields(18,
        ::g::Uno::Float3_typeof(), offsetof(::g::Fuse::Scaling, _vector), 0);
    type->Reflection.SetFunctions(11,
        new uFunction("get_Factor", NULL, (void*)Scaling__get_Factor_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Factor", NULL, (void*)Scaling__set_Factor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)Scaling__New2_fn, 0, true, Scaling_typeof(), 0),
        new uFunction("get_Vector", NULL, (void*)Scaling__get_Vector_fn, 0, false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("set_Vector", NULL, (void*)Scaling__set_Vector_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("get_X", NULL, (void*)Scaling__get_X_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_X", NULL, (void*)Scaling__set_X_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Y", NULL, (void*)Scaling__get_Y_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Y", NULL, (void*)Scaling__set_Y_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Z", NULL, (void*)Scaling__get_Z_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Z", NULL, (void*)Scaling__set_Z_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

::g::Fuse::RelativeTransform_type* Scaling_typeof()
{
    static uSStrong< ::g::Fuse::RelativeTransform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::RelativeTransform_typeof();
    options.FieldCount = 19;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Scaling);
    options.TypeSize = sizeof(::g::Fuse::RelativeTransform_type);
    type = (::g::Fuse::RelativeTransform_type*)uClassType::New("Fuse.Scaling", options);
    type->fp_build_ = Scaling_build;
    type->fp_ctor_ = (void*)Scaling__New2_fn;
    type->fp_AppendTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*, float*))Scaling__AppendTo_fn;
    type->fp_get_IsFlat = (void(*)(::g::Fuse::Transform*, bool*))Scaling__get_IsFlat_fn;
    type->fp_PrependTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*))Scaling__PrependTo_fn;
    type->interface4.fp_OnTransformChanged = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::RelativeTransform__FuseITransformRelativeOnTransformChanged_fn;
    type->interface4.fp_get_Target = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::RelativeTransform__FuseITransformRelativeget_Target_fn;
    type->interface4.fp_get_RelativeNode = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::RelativeTransform__FuseITransformRelativeget_RelativeNode_fn;
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

// public Scaling() :9200
void Scaling__ctor_4_fn(Scaling* __this)
{
    __this->ctor_4();
}

// public override sealed void AppendTo(Fuse.FastMatrix m, float weight) :9277
void Scaling__AppendTo_fn(Scaling* __this, ::g::Fuse::FastMatrix* m, float* weight)
{
    uStackFrame __("Fuse.Scaling", "AppendTo(Fuse.FastMatrix,float)");
    float weight_ = *weight;
    ::g::Uno::Float3 v = __this->EffectiveVector();

    if (!__this->IsIdentity(v))
        uPtr(m)->AppendScale1(::g::Uno::Math::Lerp4(::g::Uno::Float3__New1(1.0f), v, weight_));
}

// private float3 get_EffectiveVector() :9264
void Scaling__get_EffectiveVector_fn(Scaling* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->EffectiveVector();
}

// public float get_Factor() :9211
void Scaling__get_Factor_fn(Scaling* __this, float* __retval)
{
    *__retval = __this->Factor();
}

// public void set_Factor(float value) :9212
void Scaling__set_Factor_fn(Scaling* __this, float* value)
{
    __this->Factor(*value);
}

// public override sealed bool get_IsFlat() :9293
void Scaling__get_IsFlat_fn(Scaling* __this, bool* __retval)
{
    uStackFrame __("Fuse.Scaling", "get_IsFlat()");
    return *__retval = true, void();
}

// private bool IsIdentity(float3 v) :9270
void Scaling__IsIdentity_fn(Scaling* __this, ::g::Uno::Float3* v, bool* __retval)
{
    *__retval = __this->IsIdentity(*v);
}

// public Scaling New() :9200
void Scaling__New2_fn(Scaling** __retval)
{
    *__retval = Scaling::New2();
}

// public override sealed void PrependTo(Fuse.FastMatrix m) :9284
void Scaling__PrependTo_fn(Scaling* __this, ::g::Fuse::FastMatrix* m)
{
    uStackFrame __("Fuse.Scaling", "PrependTo(Fuse.FastMatrix)");
    ::g::Uno::Float3 v = __this->EffectiveVector();

    if (!__this->IsIdentity(v))
        uPtr(m)->PrependScale1(v);
}

// public float3 get_Vector() :9230
void Scaling__get_Vector_fn(Scaling* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->Vector();
}

// public void set_Vector(float3 value) :9231
void Scaling__set_Vector_fn(Scaling* __this, ::g::Uno::Float3* value)
{
    __this->Vector(*value);
}

// public float get_X() :9244
void Scaling__get_X_fn(Scaling* __this, float* __retval)
{
    *__retval = __this->X();
}

// public void set_X(float value) :9245
void Scaling__set_X_fn(Scaling* __this, float* value)
{
    __this->X(*value);
}

// public float get_Y() :9251
void Scaling__get_Y_fn(Scaling* __this, float* __retval)
{
    *__retval = __this->Y();
}

// public void set_Y(float value) :9252
void Scaling__set_Y_fn(Scaling* __this, float* value)
{
    __this->Y(*value);
}

// public float get_Z() :9258
void Scaling__get_Z_fn(Scaling* __this, float* __retval)
{
    *__retval = __this->Z();
}

// public void set_Z(float value) :9259
void Scaling__set_Z_fn(Scaling* __this, float* value)
{
    __this->Z(*value);
}

// public Scaling() [instance] :9200
void Scaling::ctor_4()
{
    uStackFrame __("Fuse.Scaling", ".ctor()");
    _vector = ::g::Uno::Float3__New1(1.0f);
    ctor_3(::g::Fuse::ScalingModes::Identity());
}

// private float3 get_EffectiveVector() [instance] :9264
::g::Uno::Float3 Scaling::EffectiveVector()
{
    uStackFrame __("Fuse.Scaling", "get_EffectiveVector()");
    return ::g::Fuse::IScalingMode::GetScaleVector(uInterface(uPtr((uObject*)RelativeTo()), ::TYPES[71/*Fuse.IScalingMode*/]), this);
}

// public float get_Factor() [instance] :9211
float Scaling::Factor()
{
    uStackFrame __("Fuse.Scaling", "get_Factor()");
    return _vector.X;
}

// public void set_Factor(float value) [instance] :9212
void Scaling::Factor(float value)
{
    uStackFrame __("Fuse.Scaling", "set_Factor(float)");

    if (::g::Uno::Float3__op_Inequality(_vector, ::g::Uno::Float3__New1(value)))
    {
        _vector = ::g::Uno::Float3__New1(value);
        OnMatrixChanged(NULL, NULL);
    }
}

// private bool IsIdentity(float3 v) [instance] :9270
bool Scaling::IsIdentity(::g::Uno::Float3 v)
{
    uStackFrame __("Fuse.Scaling", "IsIdentity(float3)");
    return ((::g::Uno::Math::Abs1(v.X - 1.0f) < 1e-05f) && (::g::Uno::Math::Abs1(v.Y - 1.0f) < 1e-05f)) && (::g::Uno::Math::Abs1(v.Z - 1.0f) < 1e-05f);
}

// public float3 get_Vector() [instance] :9230
::g::Uno::Float3 Scaling::Vector()
{
    uStackFrame __("Fuse.Scaling", "get_Vector()");
    return _vector;
}

// public void set_Vector(float3 value) [instance] :9231
void Scaling::Vector(::g::Uno::Float3 value)
{
    uStackFrame __("Fuse.Scaling", "set_Vector(float3)");

    if (::g::Uno::Float3__op_Inequality(_vector, value))
    {
        _vector = value;
        OnMatrixChanged(NULL, NULL);
    }
}

// public float get_X() [instance] :9244
float Scaling::X()
{
    uStackFrame __("Fuse.Scaling", "get_X()");
    return Vector().X;
}

// public void set_X(float value) [instance] :9245
void Scaling::X(float value)
{
    uStackFrame __("Fuse.Scaling", "set_X(float)");
    Vector(::g::Uno::Float3__New2(value, Vector().Y, Vector().Z));
}

// public float get_Y() [instance] :9251
float Scaling::Y()
{
    uStackFrame __("Fuse.Scaling", "get_Y()");
    return Vector().Y;
}

// public void set_Y(float value) [instance] :9252
void Scaling::Y(float value)
{
    uStackFrame __("Fuse.Scaling", "set_Y(float)");
    Vector(::g::Uno::Float3__New2(Vector().X, value, Vector().Z));
}

// public float get_Z() [instance] :9258
float Scaling::Z()
{
    uStackFrame __("Fuse.Scaling", "get_Z()");
    return Vector().Z;
}

// public void set_Z(float value) [instance] :9259
void Scaling::Z(float value)
{
    uStackFrame __("Fuse.Scaling", "set_Z(float)");
    Vector(::g::Uno::Float3__New2(Vector().X, Vector().Y, value));
}

// public Scaling New() [static] :9200
Scaling* Scaling::New2()
{
    Scaling* obj1 = (Scaling*)uNew(Scaling_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public static class ScalingModes :9166
// {
// static ScalingModes() :9166
static void ScalingModes__cctor__fn(uType* __type)
{
    ScalingModes::Identity_ = (uObject*)ScalingModes__IdentityMode::New1();
}

static void ScalingModes_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::IScalingMode_typeof(), (uintptr_t)&::g::Fuse::ScalingModes::Identity_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Identity", 0));
}

uClassType* ScalingModes_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.ScalingModes", options);
    type->fp_build_ = ScalingModes_build;
    type->fp_cctor_ = ScalingModes__cctor__fn;
    return type;
}

uSStrong<uObject*> ScalingModes::Identity_;
// }

// /usr/local/share/uno/Packages/Fuse.iOS/0.40.8/$.uno
// ---------------------------------------------------

// public enum iOSDevice.ScreenOrientation :282
uEnumType* iOSDevice__ScreenOrientation_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.iOSDevice.ScreenOrientation", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Portrait", 0LL,
        "Landscape", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public sealed class Shear :9829
// {
static void Shear_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Transform_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Transform_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Transform_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Transform_type, interface3));
    type->SetFields(14,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Shear, _vector), 0);
    type->Reflection.SetFunctions(9,
        new uFunction("get_Degrees", NULL, (void*)Shear__get_Degrees_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_Degrees", NULL, (void*)Shear__set_Degrees_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_DegreesX", NULL, (void*)Shear__get_DegreesX_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesX", NULL, (void*)Shear__set_DegreesX_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_DegreesY", NULL, (void*)Shear__get_DegreesY_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DegreesY", NULL, (void*)Shear__set_DegreesY_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)Shear__New2_fn, 0, true, Shear_typeof(), 0),
        new uFunction("get_Vector", NULL, (void*)Shear__get_Vector_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_Vector", NULL, (void*)Shear__set_Vector_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()));
}

::g::Fuse::Transform_type* Shear_typeof()
{
    static uSStrong< ::g::Fuse::Transform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Transform_typeof();
    options.FieldCount = 15;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Shear);
    options.TypeSize = sizeof(::g::Fuse::Transform_type);
    type = (::g::Fuse::Transform_type*)uClassType::New("Fuse.Shear", options);
    type->fp_build_ = Shear_build;
    type->fp_ctor_ = (void*)Shear__New2_fn;
    type->fp_AppendTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*, float*))Shear__AppendTo_fn;
    type->fp_get_IsFlat = (void(*)(::g::Fuse::Transform*, bool*))Shear__get_IsFlat_fn;
    type->fp_PrependTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*))Shear__PrependTo_fn;
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

// public generated Shear() :9829
void Shear__ctor_3_fn(Shear* __this)
{
    __this->ctor_3();
}

// public override sealed void AppendTo(Fuse.FastMatrix m, float weight) :9887
void Shear__AppendTo_fn(Shear* __this, ::g::Fuse::FastMatrix* m, float* weight)
{
    uStackFrame __("Fuse.Shear", "AppendTo(Fuse.FastMatrix,float)");
    float weight_ = *weight;
    ::g::Uno::Float2 v = ::g::Uno::Float2__op_Multiply1(__this->Vector(), weight_);
    uPtr(m)->AppendShear(v.X, v.Y);
}

// public float2 get_Degrees() :9879
void Shear__get_Degrees_fn(Shear* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Degrees();
}

// public void set_Degrees(float2 value) :9880
void Shear__set_Degrees_fn(Shear* __this, ::g::Uno::Float2* value)
{
    __this->Degrees(*value);
}

// public float get_DegreesX() :9849
void Shear__get_DegreesX_fn(Shear* __this, float* __retval)
{
    *__retval = __this->DegreesX();
}

// public void set_DegreesX(float value) :9850
void Shear__set_DegreesX_fn(Shear* __this, float* value)
{
    __this->DegreesX(*value);
}

// public float get_DegreesY() :9864
void Shear__get_DegreesY_fn(Shear* __this, float* __retval)
{
    *__retval = __this->DegreesY();
}

// public void set_DegreesY(float value) :9865
void Shear__set_DegreesY_fn(Shear* __this, float* value)
{
    __this->DegreesY(*value);
}

// public override sealed bool get_IsFlat() :9901
void Shear__get_IsFlat_fn(Shear* __this, bool* __retval)
{
    uStackFrame __("Fuse.Shear", "get_IsFlat()");
    return *__retval = true, void();
}

// public generated Shear New() :9829
void Shear__New2_fn(Shear** __retval)
{
    *__retval = Shear::New2();
}

// public override sealed void PrependTo(Fuse.FastMatrix m) :9893
void Shear__PrependTo_fn(Shear* __this, ::g::Fuse::FastMatrix* m)
{
    uStackFrame __("Fuse.Shear", "PrependTo(Fuse.FastMatrix)");
    ::g::Uno::Float2 v = __this->Vector();
    uPtr(m)->PrependShear(v.X, v.Y);
}

// public float2 get_Vector() :9835
void Shear__get_Vector_fn(Shear* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Vector();
}

// public void set_Vector(float2 value) :9836
void Shear__set_Vector_fn(Shear* __this, ::g::Uno::Float2* value)
{
    __this->Vector(*value);
}

// public generated Shear() [instance] :9829
void Shear::ctor_3()
{
    uStackFrame __("Fuse.Shear", ".ctor()");
    ctor_2();
}

// public float2 get_Degrees() [instance] :9879
::g::Uno::Float2 Shear::Degrees()
{
    uStackFrame __("Fuse.Shear", "get_Degrees()");
    return ::g::Uno::Float2__New2(DegreesX(), DegreesY());
}

// public void set_Degrees(float2 value) [instance] :9880
void Shear::Degrees(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Shear", "set_Degrees(float2)");
    Vector(::g::Uno::Float2__New2(::g::Uno::Math::DegreesToRadians1(value.X), ::g::Uno::Math::DegreesToRadians1(value.Y)));
}

// public float get_DegreesX() [instance] :9849
float Shear::DegreesX()
{
    uStackFrame __("Fuse.Shear", "get_DegreesX()");
    return _vector.X;
}

// public void set_DegreesX(float value) [instance] :9850
void Shear::DegreesX(float value)
{
    uStackFrame __("Fuse.Shear", "set_DegreesX(float)");
    float r = ::g::Uno::Math::DegreesToRadians1(value);

    if (_vector.X != r)
    {
        _vector.X = r;
        OnMatrixChanged(NULL, NULL);
    }
}

// public float get_DegreesY() [instance] :9864
float Shear::DegreesY()
{
    uStackFrame __("Fuse.Shear", "get_DegreesY()");
    return _vector.Y;
}

// public void set_DegreesY(float value) [instance] :9865
void Shear::DegreesY(float value)
{
    uStackFrame __("Fuse.Shear", "set_DegreesY(float)");
    float r = ::g::Uno::Math::DegreesToRadians1(value);

    if (_vector.Y != r)
    {
        _vector.Y = r;
        OnMatrixChanged(NULL, NULL);
    }
}

// public float2 get_Vector() [instance] :9835
::g::Uno::Float2 Shear::Vector()
{
    uStackFrame __("Fuse.Shear", "get_Vector()");
    return _vector;
}

// public void set_Vector(float2 value) [instance] :9836
void Shear::Vector(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Shear", "set_Vector(float2)");

    if (::g::Uno::Float2__op_Inequality(_vector, value))
    {
        _vector = value;
        OnMatrixChanged(NULL, NULL);
    }
}

// public generated Shear New() [static] :9829
Shear* Shear::New2()
{
    Shear* obj1 = (Shear*)uNew(Shear_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// private class TranslationModes.SizeMode :10124
// {
static void TranslationModes__SizeMode_build(uType* type)
{
    ::TYPES[64] = ::g::Fuse::IActualPlacement_typeof();
    ::TYPES[65] = ::g::Fuse::ITransformRelative_typeof();
    ::TYPES[66] = ::g::Fuse::PlacedHandler_typeof();
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(TranslationModes__SizeMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(TranslationModes__SizeMode_type, interface1));
}

TranslationModes__SizeMode_type* TranslationModes__SizeMode_typeof()
{
    static uSStrong<TranslationModes__SizeMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TranslationModes__SizeMode);
    options.TypeSize = sizeof(TranslationModes__SizeMode_type);
    type = (TranslationModes__SizeMode_type*)uClassType::New("Fuse.TranslationModes.SizeMode", options);
    type->fp_build_ = TranslationModes__SizeMode_build;
    type->fp_ctor_ = (void*)TranslationModes__SizeMode__New1_fn;
    type->fp_GetAbsVector = TranslationModes__SizeMode__GetAbsVector_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))TranslationModes__SizeMode__GetAbsVector_fn;
    type->interface1.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))TranslationModes__SizeMode__Subscribe_fn;
    type->interface1.fp_Unsubscribe = (void(*)(uObject*, uObject*, uObject*))TranslationModes__SizeMode__Unsubscribe_fn;
    return type;
}

// public generated SizeMode() :10124
void TranslationModes__SizeMode__ctor__fn(TranslationModes__SizeMode* __this)
{
    __this->ctor_();
}

// public virtual float3 GetAbsVector(Fuse.Translation t) :10126
void TranslationModes__SizeMode__GetAbsVector_fn(TranslationModes__SizeMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval)
{
    uStackFrame __("Fuse.TranslationModes.SizeMode", "GetAbsVector(Fuse.Translation)");
    return *__retval = ::g::Uno::Float3__op_Multiply2(::g::Fuse::TranslationModes::SizeOf(uPtr(t)->RelativeNode()), uPtr(t)->Vector()), void();
}

// public generated SizeMode New() :10124
void TranslationModes__SizeMode__New1_fn(TranslationModes__SizeMode** __retval)
{
    *__retval = TranslationModes__SizeMode::New1();
}

// public object Subscribe(Fuse.ITransformRelative transform) :10127
void TranslationModes__SizeMode__Subscribe_fn(TranslationModes__SizeMode* __this, uObject* transform, uObject** __retval)
{
    *__retval = __this->Subscribe(transform);
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) :10134
void TranslationModes__SizeMode__Unsubscribe_fn(TranslationModes__SizeMode* __this, uObject* transform, uObject* sub)
{
    __this->Unsubscribe(transform, sub);
}

// public generated SizeMode() [instance] :10124
void TranslationModes__SizeMode::ctor_()
{
}

// public object Subscribe(Fuse.ITransformRelative transform) [instance] :10127
uObject* TranslationModes__SizeMode::Subscribe(uObject* transform)
{
    uStackFrame __("Fuse.TranslationModes.SizeMode", "Subscribe(Fuse.ITransformRelative)");
    uObject* n = uAs<uObject*>(::g::Fuse::ITransformRelative::RelativeNode(uInterface(uPtr(transform), ::TYPES[65/*Fuse.ITransformRelative*/])), ::TYPES[64/*Fuse.IActualPlacement*/]);

    if (n != NULL)
        ::g::Fuse::IActualPlacement::add_Placed(uInterface(uPtr(n), ::TYPES[64/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[66/*Fuse.PlacedHandler*/], uInterface(uPtr(transform), ::TYPES[65/*Fuse.ITransformRelative*/]), offsetof(::g::Fuse::ITransformRelative, fp_OnTransformChanged)));

    return ::g::Fuse::ITransformRelative::RelativeNode(uInterface(transform, ::TYPES[65/*Fuse.ITransformRelative*/]));
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) [instance] :10134
void TranslationModes__SizeMode::Unsubscribe(uObject* transform, uObject* sub)
{
    uStackFrame __("Fuse.TranslationModes.SizeMode", "Unsubscribe(Fuse.ITransformRelative,object)");
    ::g::Fuse::IActualPlacement::remove_Placed(uInterface(uPtr(uAs<uObject*>(sub, ::TYPES[64/*Fuse.IActualPlacement*/])), ::TYPES[64/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[66/*Fuse.PlacedHandler*/], uInterface(uPtr(transform), ::TYPES[65/*Fuse.ITransformRelative*/]), offsetof(::g::Fuse::ITransformRelative, fp_OnTransformChanged)));
}

// public generated SizeMode New() [static] :10124
TranslationModes__SizeMode* TranslationModes__SizeMode::New1()
{
    TranslationModes__SizeMode* obj1 = (TranslationModes__SizeMode*)uNew(TranslationModes__SizeMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// internal sealed class Stage :10381
// {
static void Stage_build(uType* type)
{
    ::TYPES[72] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::UpdateListener_typeof());
    ::TYPES[73] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::UpdateAction_typeof());
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Stage, HasListenersRemoved), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::UpdateListener_typeof()), offsetof(::g::Fuse::Stage, Listeners), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::UpdateListener_typeof()), offsetof(::g::Fuse::Stage, Onces), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::UpdateListener_typeof()), offsetof(::g::Fuse::Stage, OncesPending), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::UpdateAction_typeof()), offsetof(::g::Fuse::Stage, PhaseDeferredActions), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Stage, PhaseDeferredActionsAt), 0,
        ::g::Fuse::UpdateStage_typeof(), offsetof(::g::Fuse::Stage, UpdateStage), 0);
}

uType* Stage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(Stage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Stage", options);
    type->fp_build_ = Stage_build;
    return type;
}

// public Stage(Fuse.UpdateStage _updateStage) :10394
void Stage__ctor__fn(Stage* __this, int* _updateStage)
{
    __this->ctor_(*_updateStage);
}

// public void AddDeferredAction(Uno.Action pu, [int priority]) :10418
void Stage__AddDeferredAction_fn(Stage* __this, uDelegate* pu, int* priority)
{
    __this->AddDeferredAction(pu, *priority);
}

// public void Insert(Uno.Collections.List<Fuse.UpdateListener> list, Fuse.UpdateListener us) :10400
void Stage__Insert_fn(Stage* __this, ::g::Uno::Collections::List* list, ::g::Fuse::UpdateListener* us)
{
    __this->Insert(list, us);
}

// public Stage New(Fuse.UpdateStage _updateStage) :10394
void Stage__New1_fn(int* _updateStage, Stage** __retval)
{
    *__retval = Stage::New1(*_updateStage);
}

// public void ResetDeferredActions() :10429
void Stage__ResetDeferredActions_fn(Stage* __this)
{
    __this->ResetDeferredActions();
}

// public Stage(Fuse.UpdateStage _updateStage) [instance] :10394
void Stage::ctor_(int _updateStage)
{
    uStackFrame __("Fuse.Stage", ".ctor(Fuse.UpdateStage)");
    Listeners = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[72/*Uno.Collections.List<Fuse.UpdateListener>*/]));
    Onces = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[72/*Uno.Collections.List<Fuse.UpdateListener>*/]));
    OncesPending = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[72/*Uno.Collections.List<Fuse.UpdateListener>*/]));
    PhaseDeferredActions = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[73/*Uno.Collections.List<Fuse.UpdateAction>*/]));
    PhaseDeferredActionsAt = -1;
    UpdateStage = _updateStage;
}

// public void AddDeferredAction(Uno.Action pu, [int priority]) [instance] :10418
void Stage::AddDeferredAction(uDelegate* pu, int priority)
{
    uStackFrame __("Fuse.Stage", "AddDeferredAction(Uno.Action,[int])");
    ::g::Fuse::UpdateAction collection1;
    ::g::Fuse::UpdateAction ret3;
    int at = uPtr(PhaseDeferredActions)->Count();

    while (((at - 1) > PhaseDeferredActionsAt) && ((::g::Uno::Collections::List__get_Item_fn(uPtr(PhaseDeferredActions), uCRef<int>(at - 1), &ret3), ret3).priority > priority))
        at--;

    ::g::Uno::Collections::List__Insert_fn(uPtr(PhaseDeferredActions), uCRef<int>(at), uCRef((collection1 = uDefault< ::g::Fuse::UpdateAction>(), collection1.action = pu, collection1.priority = priority, collection1)));
}

// public void Insert(Uno.Collections.List<Fuse.UpdateListener> list, Fuse.UpdateListener us) [instance] :10400
void Stage::Insert(::g::Uno::Collections::List* list, ::g::Fuse::UpdateListener* us)
{
    uStackFrame __("Fuse.Stage", "Insert(Uno.Collections.List<Fuse.UpdateListener>,Fuse.UpdateListener)");
    ::g::Fuse::UpdateListener* ret4;

    for (int i = uPtr(list)->Count(); i > 0; --i)
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i - 1), &ret4), ret4))->sequence <= uPtr(us)->sequence)
        {
            ::g::Uno::Collections::List__Insert_fn(uPtr(list), uCRef<int>(i), us);
            return;
        }

    ::g::Uno::Collections::List__Insert_fn(list, uCRef<int>(0), us);
}

// public void ResetDeferredActions() [instance] :10429
void Stage::ResetDeferredActions()
{
    uStackFrame __("Fuse.Stage", "ResetDeferredActions()");
    uPtr(PhaseDeferredActions)->Clear();
    PhaseDeferredActionsAt = -1;
}

// public Stage New(Fuse.UpdateStage _updateStage) [static] :10394
Stage* Stage::New1(int _updateStage)
{
    Stage* obj2 = (Stage*)uNew(Stage_typeof());
    obj2->ctor_(_updateStage);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public enum SystemFont.Style :9496
uEnumType* SystemFont__Style_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.SystemFont.Style", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Normal", 0LL,
        "Italic", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public sealed class SystemFont :9481
// {
static void SystemFont_build(uType* type)
{
    type->SetFields(1);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)SystemFont__New3_fn, 0, true, SystemFont_typeof(), 3, ::g::Uno::String_typeof(), SystemFont__Style_typeof(), SystemFont__Weight_typeof()));
}

uType* SystemFont_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Font_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(SystemFont);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.SystemFont", options);
    type->fp_build_ = SystemFont_build;
    return type;
}

// public SystemFont(string family, [Fuse.SystemFont.Style style], [Fuse.SystemFont.Weight weight]) :9503
void SystemFont__ctor_2_fn(SystemFont* __this, uString* family, int* style, int* weight)
{
    __this->ctor_2(family, *style, *weight);
}

// public SystemFont New(string family, [Fuse.SystemFont.Style style], [Fuse.SystemFont.Weight weight]) :9503
void SystemFont__New3_fn(uString* family, int* style, int* weight, SystemFont** __retval)
{
    *__retval = SystemFont::New3(family, *style, *weight);
}

// public SystemFont(string family, [Fuse.SystemFont.Style style], [Fuse.SystemFont.Weight weight]) [instance] :9503
void SystemFont::ctor_2(uString* family, int style, int weight)
{
    uStackFrame __("Fuse.SystemFont", ".ctor(string,[Fuse.SystemFont.Style],[Fuse.SystemFont.Weight])");
    ctor_(::g::Fuse::Internal::SystemFont::Get(family, style, weight));
}

// public SystemFont New(string family, [Fuse.SystemFont.Style style], [Fuse.SystemFont.Weight weight]) [static] :9503
SystemFont* SystemFont::New3(uString* family, int style, int weight)
{
    SystemFont* obj1 = (SystemFont*)uNew(SystemFont_typeof());
    obj1->ctor_2(family, style, weight);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.40.8/$.uno
// --------------------------------------------------------

// internal static class TestDeferredManager :429
// {
static void TestDeferredManager_build(uType* type)
{
}

uClassType* TestDeferredManager_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.TestDeferredManager", options);
    type->fp_build_ = TestDeferredManager_build;
    return type;
}

// public static bool get_HasPending() :433
void TestDeferredManager__get_HasPending_fn(bool* __retval)
{
    *__retval = TestDeferredManager::HasPending();
}

// public static bool get_HasPending() [static] :433
bool TestDeferredManager::HasPending()
{
    uStackFrame __("Fuse.TestDeferredManager", "get_HasPending()");
    return ::g::Fuse::DeferredManager::HasPending();
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public static class Time :9584
// {
static void Time_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Double_typeof(), (uintptr_t)&::g::Fuse::Time::_base_, uFieldFlagsStatic,
        ::g::Uno::Double_typeof(), (uintptr_t)&::g::Fuse::Time::_current_, uFieldFlagsStatic,
        ::g::Uno::Double_typeof(), (uintptr_t)&::g::Fuse::Time::_delta_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::Time::_init_, uFieldFlagsStatic,
        ::g::Uno::Double_typeof(), (uintptr_t)&::g::Fuse::Time::_prev_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(4,
        new uFunction("get_FrameInterval", NULL, (void*)Time__get_FrameInterval_fn, 0, true, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_FrameIntervalFloat", NULL, (void*)Time__get_FrameIntervalFloat_fn, 0, true, ::g::Uno::Float_typeof(), 0),
        new uFunction("get_FrameTime", NULL, (void*)Time__get_FrameTime_fn, 0, true, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_FrameTimeBase", NULL, (void*)Time__get_FrameTimeBase_fn, 0, true, ::g::Uno::Double_typeof(), 0));
}

uClassType* Time_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Time", options);
    type->fp_build_ = Time_build;
    return type;
}

// public static double get_FrameInterval() :9626
void Time__get_FrameInterval_fn(double* __retval)
{
    *__retval = Time::FrameInterval();
}

// public static float get_FrameIntervalFloat() :9638
void Time__get_FrameIntervalFloat_fn(float* __retval)
{
    *__retval = Time::FrameIntervalFloat();
}

// public static double get_FrameTime() :9619
void Time__get_FrameTime_fn(double* __retval)
{
    *__retval = Time::FrameTime();
}

// public static double get_FrameTimeBase() :9632
void Time__get_FrameTimeBase_fn(double* __retval)
{
    *__retval = Time::FrameTimeBase();
}

// internal static void Init(double start) :9592
void Time__Init_fn(double* start)
{
    Time::Init(*start);
}

// internal static void Set(double current) :9601
void Time__Set_fn(double* current)
{
    Time::Set(*current);
}

double Time::_base_;
double Time::_current_;
double Time::_delta_;
bool Time::_init_;
double Time::_prev_;

// internal static void Init(double start) [static] :9592
void Time::Init(double start)
{
    uStackFrame __("Fuse.Time", "Init(double)");
    Time::_base_ = start;
    Time::_current_ = start;
    Time::_delta_ = 0.0;
    Time::_prev_ = start;
    Time::_init_ = true;
}

// internal static void Set(double current) [static] :9601
void Time::Set(double current)
{
    uStackFrame __("Fuse.Time", "Set(double)");

    if (!Time::_init_)
        Time::Init(current);
    else 
    {
        Time::_delta_ = (current - Time::_prev_);
        Time::_current_ = current;
        Time::_prev_ = current;
    }
}

// public static double get_FrameInterval() [static] :9626
double Time::FrameInterval()
{
    uStackFrame __("Fuse.Time", "get_FrameInterval()");
    return Time::_delta_;
}

// public static float get_FrameIntervalFloat() [static] :9638
float Time::FrameIntervalFloat()
{
    uStackFrame __("Fuse.Time", "get_FrameIntervalFloat()");
    return (float)Time::_delta_;
}

// public static double get_FrameTime() [static] :9619
double Time::FrameTime()
{
    uStackFrame __("Fuse.Time", "get_FrameTime()");
    return Time::_current_ - Time::_base_;
}

// public static double get_FrameTimeBase() [static] :9632
double Time::FrameTimeBase()
{
    uStackFrame __("Fuse.Time", "get_FrameTimeBase()");
    return Time::_base_;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public sealed class Timer :9519
// {
static void Timer_build(uType* type)
{
    ::TYPES[3] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Timer, _callback), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Timer, _interval), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Timer, _once), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Timer, _running), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Timer, _startTime), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Wait", NULL, (void*)Timer__Wait_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Action_typeof()));
}

uType* Timer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(Timer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Timer", options);
    type->fp_build_ = Timer_build;
    return type;
}

// private Timer(double interval, Uno.Action callback) :9527
void Timer__ctor__fn(Timer* __this, double* interval, uDelegate* callback)
{
    __this->ctor_(*interval, callback);
}

// private Timer New(double interval, Uno.Action callback) :9527
void Timer__New1_fn(double* interval, uDelegate* callback, Timer** __retval)
{
    *__retval = Timer::New1(*interval, callback);
}

// private void Start() :9535
void Timer__Start_fn(Timer* __this)
{
    __this->Start();
}

// private void Stop() :9542
void Timer__Stop_fn(Timer* __this)
{
    __this->Stop();
}

// private void Update() :9548
void Timer__Update_fn(Timer* __this)
{
    __this->Update();
}

// public static void Wait(double duration, Uno.Action callback) :9569
void Timer__Wait_fn(double* duration, uDelegate* callback)
{
    Timer::Wait(*duration, callback);
}

// private Timer(double interval, Uno.Action callback) [instance] :9527
void Timer::ctor_(double interval, uDelegate* callback)
{
    uStackFrame __("Fuse.Timer", ".ctor(double,Uno.Action)");
    _callback = callback;
    _startTime = ::g::Uno::Diagnostics::Clock::GetSeconds();
    _interval = interval;
    _once = true;
}

// private void Start() [instance] :9535
void Timer::Start()
{
    uStackFrame __("Fuse.Timer", "Start()");
    _startTime = ::g::Uno::Diagnostics::Clock::GetSeconds();
    ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)Timer__Update_fn, this), 0);
    _running = true;
}

// private void Stop() [instance] :9542
void Timer::Stop()
{
    uStackFrame __("Fuse.Timer", "Stop()");
    _running = false;
    ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)Timer__Update_fn, this), 0);
}

// private void Update() [instance] :9548
void Timer::Update()
{
    uStackFrame __("Fuse.Timer", "Update()");
    double now = ::g::Uno::Diagnostics::Clock::GetSeconds();
    double time = now - _startTime;

    if (time > _interval)
    {
        uPtr(_callback)->InvokeVoid();

        if (_once)
            Stop();
        else 
            _startTime = now;
    }
}

// private Timer New(double interval, Uno.Action callback) [static] :9527
Timer* Timer::New1(double interval, uDelegate* callback)
{
    Timer* obj1 = (Timer*)uNew(Timer_typeof());
    obj1->ctor_(interval, callback);
    return obj1;
}

// public static void Wait(double duration, Uno.Action callback) [static] :9569
void Timer::Wait(double duration, uDelegate* callback)
{
    uStackFrame __("Fuse.Timer", "Wait(double,Uno.Action)");
    Timer* t = Timer::New1(duration, callback);
    t->Start();
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public sealed class Toast :8811
// {
// static Toast() :8811
static void Toast__cctor__fn(uType* __type)
{
    Toast::_queue_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[74/*Uno.Collections.List<Fuse.Toast>*/]));
}

static void Toast_build(uType* type)
{
    ::TYPES[74] = ::g::Uno::Collections::List_typeof()->MakeType(Toast_typeof());
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[3] = ::g::Uno::Action_typeof();
    ::TYPES[69] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Toast, _duration), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Toast, _visual), 0,
        Toast_typeof(), (uintptr_t)&::g::Fuse::Toast::_ongoing_, uFieldFlagsStatic,
        ::g::Uno::Collections::List_typeof()->MakeType(Toast_typeof()), (uintptr_t)&::g::Fuse::Toast::_queue_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("Dismiss", NULL, (void*)Toast__Dismiss_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("OnUnrooted", NULL, (void*)Toast__OnUnrooted_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("Post", NULL, (void*)Toast__Post_fn, 0, true, Toast_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Uno::Double_typeof()));
}

uType* Toast_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Toast);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Toast", options);
    type->fp_build_ = Toast_build;
    type->fp_cctor_ = Toast__cctor__fn;
    return type;
}

// private Toast(Fuse.Visual visual, double duration) :8819
void Toast__ctor__fn(Toast* __this, ::g::Fuse::Visual* visual, double* duration)
{
    __this->ctor_(visual, *duration);
}

// public void Dismiss() :8850
void Toast__Dismiss_fn(Toast* __this)
{
    __this->Dismiss();
}

// private static void DispatchNext() :8825
void Toast__DispatchNext_fn()
{
    Toast::DispatchNext();
}

// private Toast New(Fuse.Visual visual, double duration) :8819
void Toast__New1_fn(::g::Fuse::Visual* visual, double* duration, Toast** __retval)
{
    *__retval = Toast::New1(visual, *duration);
}

// public static void OnUnrooted(Fuse.Visual toast) :8844
void Toast__OnUnrooted_fn(::g::Fuse::Visual* toast)
{
    Toast::OnUnrooted(toast);
}

// public static Fuse.Toast Post(Fuse.Visual visual, [double duration]) :8872
void Toast__Post_fn(::g::Fuse::Visual* visual, double* duration, Toast** __retval)
{
    *__retval = Toast::Post(visual, *duration);
}

uSStrong<Toast*> Toast::_ongoing_;
uSStrong< ::g::Uno::Collections::List*> Toast::_queue_;

// private Toast(Fuse.Visual visual, double duration) [instance] :8819
void Toast::ctor_(::g::Fuse::Visual* visual, double duration)
{
    uStackFrame __("Fuse.Toast", ".ctor(Fuse.Visual,double)");
    _visual = visual;
    _duration = duration;
}

// public void Dismiss() [instance] :8850
void Toast::Dismiss()
{
    uStackFrame __("Fuse.Toast", "Dismiss()");
    bool ret2;
    bool ret3;
    bool ret4;

    if ((::g::Uno::Collections::List__Contains_fn(uPtr(Toast::_queue()), this, &ret2), ret2))
        ::g::Uno::Collections::List__Remove_fn(uPtr(Toast::_queue()), this, &ret3);

    if (Toast::_ongoing() == this)
    {
        if ((::g::Uno::Collections::ICollection::Contains_ex(uInterface(uPtr(uPtr(::g::Fuse::AppBase::Current1())->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), _visual, &ret4), ret4))
        {
            Toast::_ongoing() = NULL;
            uPtr(uPtr(::g::Fuse::AppBase::Current1())->ChildrenVisual())->BeginRemoveVisual(_visual, uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)Toast__DispatchNext_fn));
        }
        else 
            Toast::DispatchNext();
    }
    else 
        uPtr(uPtr(::g::Fuse::AppBase::Current1())->ChildrenVisual())->BeginRemoveVisual(_visual, NULL);
}

// private static void DispatchNext() [static] :8825
void Toast::DispatchNext()
{
    uStackFrame __("Fuse.Toast", "DispatchNext()");
    Toast_typeof()->Init();
    Toast* ret5;

    if (Toast::_ongoing() != NULL)
    {
        uPtr(uPtr(::g::Fuse::AppBase::Current1())->ChildrenVisual())->BeginRemoveVisual(uPtr(Toast::_ongoing())->_visual, NULL);
        Toast::_ongoing() = NULL;
    }

    if (uPtr(Toast::_queue())->Count() == 0)
        return;

    Toast::_ongoing() = (::g::Uno::Collections::List__get_Item_fn(uPtr(Toast::_queue()), uCRef<int>(0), &ret5), ret5);
    uPtr(Toast::_queue())->RemoveAt(0);
    ::g::Uno::Collections::IList::Insert_ex(uInterface(uPtr(uPtr(::g::Fuse::AppBase::Current1())->Children()), ::TYPES[69/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(0), uPtr(Toast::_ongoing())->_visual);

    if (uPtr(Toast::_ongoing())->_duration > 0.0)
        ::g::Fuse::Timer::Wait(uPtr(Toast::_ongoing())->_duration, uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)Toast__Dismiss_fn, uPtr(Toast::_ongoing())));
}

// private Toast New(Fuse.Visual visual, double duration) [static] :8819
Toast* Toast::New1(::g::Fuse::Visual* visual, double duration)
{
    Toast* obj1 = (Toast*)uNew(Toast_typeof());
    obj1->ctor_(visual, duration);
    return obj1;
}

// public static void OnUnrooted(Fuse.Visual toast) [static] :8844
void Toast::OnUnrooted(::g::Fuse::Visual* toast)
{
    uStackFrame __("Fuse.Toast", "OnUnrooted(Fuse.Visual)");
    Toast_typeof()->Init();
    Toast::_ongoing() = NULL;
    Toast::DispatchNext();
}

// public static Fuse.Toast Post(Fuse.Visual visual, [double duration]) [static] :8872
Toast* Toast::Post(::g::Fuse::Visual* visual, double duration)
{
    uStackFrame __("Fuse.Toast", "Post(Fuse.Visual,[double])");
    Toast_typeof()->Init();
    Toast* t = Toast::New1(visual, duration);
    ::g::Uno::Collections::List__Add_fn(uPtr(Toast::_queue()), t);

    if (Toast::_ongoing() == NULL)
        Toast::DispatchNext();

    return t;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public abstract class Transform :9669
// {
static void Transform_build(uType* type)
{
    ::TYPES[75] = ::g::Uno::Action1_typeof()->MakeType(Transform_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Transform_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Transform_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Transform_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Transform_type, interface3));
    type->SetFields(13,
        ::g::Uno::Action1_typeof()->MakeType(Transform_typeof()), offsetof(::g::Fuse::Transform, MatrixChanged1), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("AppendTo", NULL, NULL, offsetof(Transform_type, fp_AppendTo), false, uVoid_typeof(), 2, ::g::Fuse::FastMatrix_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("get_IsFlat", NULL, NULL, offsetof(Transform_type, fp_get_IsFlat), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("PrependTo", NULL, NULL, offsetof(Transform_type, fp_PrependTo), false, uVoid_typeof(), 1, ::g::Fuse::FastMatrix_typeof()));
}

Transform_type* Transform_typeof()
{
    static uSStrong<Transform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Node_typeof();
    options.FieldCount = 14;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Transform);
    options.TypeSize = sizeof(Transform_type);
    type = (Transform_type*)uClassType::New("Fuse.Transform", options);
    type->fp_build_ = Transform_build;
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

// internal Transform() :9689
void Transform__ctor_2_fn(Transform* __this)
{
    __this->ctor_2();
}

// internal generated void add_MatrixChanged(Uno.Action<Fuse.Transform> value) :9674
void Transform__add_MatrixChanged_fn(Transform* __this, uDelegate* value)
{
    __this->add_MatrixChanged(value);
}

// internal generated void remove_MatrixChanged(Uno.Action<Fuse.Transform> value) :9674
void Transform__remove_MatrixChanged_fn(Transform* __this, uDelegate* value)
{
    __this->remove_MatrixChanged(value);
}

// protected void OnMatrixChanged([object igoreSender], [object ignoreArgs]) :9676
void Transform__OnMatrixChanged_fn(Transform* __this, uObject* igoreSender, uObject* ignoreArgs)
{
    __this->OnMatrixChanged(igoreSender, ignoreArgs);
}

// internal Transform() [instance] :9689
void Transform::ctor_2()
{
    uStackFrame __("Fuse.Transform", ".ctor()");
    ctor_1();
}

// internal generated void add_MatrixChanged(Uno.Action<Fuse.Transform> value) [instance] :9674
void Transform::add_MatrixChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Transform", "add_MatrixChanged(Uno.Action<Fuse.Transform>)");
    MatrixChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(MatrixChanged1, value), ::TYPES[75/*Uno.Action<Fuse.Transform>*/]);
}

// internal generated void remove_MatrixChanged(Uno.Action<Fuse.Transform> value) [instance] :9674
void Transform::remove_MatrixChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Transform", "remove_MatrixChanged(Uno.Action<Fuse.Transform>)");
    MatrixChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(MatrixChanged1, value), ::TYPES[75/*Uno.Action<Fuse.Transform>*/]);
}

// protected void OnMatrixChanged([object igoreSender], [object ignoreArgs]) [instance] :9676
void Transform::OnMatrixChanged(uObject* igoreSender, uObject* ignoreArgs)
{
    uStackFrame __("Fuse.Transform", "OnMatrixChanged([object],[object])");

    if (::g::Uno::Delegate::op_Inequality(MatrixChanged1, NULL))
        uPtr(MatrixChanged1)->InvokeVoid(this);
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public sealed class Translation :10198
// {
static void Translation_build(uType* type)
{
    ::TYPES[76] = ::g::Fuse::ITranslationMode_typeof();
    type->SetBase(::g::Fuse::RelativeTransform_typeof()->MakeType(::g::Fuse::ITranslationMode_typeof()));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::RelativeTransform_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::RelativeTransform_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::RelativeTransform_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::RelativeTransform_type, interface3),
        ::g::Fuse::ITransformRelative_typeof(), offsetof(::g::Fuse::RelativeTransform_type, interface4));
    type->SetFields(18,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Translation, _x), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Translation, _y), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Translation, _z), 0);
    type->Reflection.SetFunctions(11,
        new uFunction(".ctor", NULL, (void*)Translation__New2_fn, 0, true, Translation_typeof(), 0),
        new uFunction("get_Vector", NULL, (void*)Translation__get_Vector_fn, 0, false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("set_Vector", NULL, (void*)Translation__set_Vector_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("get_X", NULL, (void*)Translation__get_X_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_X", NULL, (void*)Translation__set_X_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_XY", NULL, (void*)Translation__get_XY_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_XY", NULL, (void*)Translation__set_XY_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_Y", NULL, (void*)Translation__get_Y_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Y", NULL, (void*)Translation__set_Y_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Z", NULL, (void*)Translation__get_Z_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Z", NULL, (void*)Translation__set_Z_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

::g::Fuse::RelativeTransform_type* Translation_typeof()
{
    static uSStrong< ::g::Fuse::RelativeTransform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::RelativeTransform_typeof();
    options.FieldCount = 21;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Translation);
    options.TypeSize = sizeof(::g::Fuse::RelativeTransform_type);
    type = (::g::Fuse::RelativeTransform_type*)uClassType::New("Fuse.Translation", options);
    type->fp_build_ = Translation_build;
    type->fp_ctor_ = (void*)Translation__New2_fn;
    type->fp_AppendTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*, float*))Translation__AppendTo_fn;
    type->fp_get_IsFlat = (void(*)(::g::Fuse::Transform*, bool*))Translation__get_IsFlat_fn;
    type->fp_PrependTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*))Translation__PrependTo_fn;
    type->interface4.fp_OnTransformChanged = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::RelativeTransform__FuseITransformRelativeOnTransformChanged_fn;
    type->interface4.fp_get_Target = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::RelativeTransform__FuseITransformRelativeget_Target_fn;
    type->interface4.fp_get_RelativeNode = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::RelativeTransform__FuseITransformRelativeget_RelativeNode_fn;
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

// public Translation() :10200
void Translation__ctor_4_fn(Translation* __this)
{
    __this->ctor_4();
}

// public override sealed void AppendTo(Fuse.FastMatrix m, float weight) :10299
void Translation__AppendTo_fn(Translation* __this, ::g::Fuse::FastMatrix* m, float* weight)
{
    uStackFrame __("Fuse.Translation", "AppendTo(Fuse.FastMatrix,float)");
    float weight_ = *weight;
    ::g::Uno::Float3 v = ::g::Uno::Float3__op_Multiply1(::g::Fuse::ITranslationMode::GetAbsVector(uInterface(uPtr((uObject*)__this->RelativeTo()), ::TYPES[76/*Fuse.ITranslationMode*/]), __this), weight_);
    uPtr(m)->AppendTranslation(v.X, v.Y, v.Z);
}

// public override sealed bool get_IsFlat() :10313
void Translation__get_IsFlat_fn(Translation* __this, bool* __retval)
{
    uStackFrame __("Fuse.Translation", "get_IsFlat()");
    return *__retval = ::g::Uno::Math::Abs1(__this->Z()) < 1e-05f, void();
}

// public Translation New() :10200
void Translation__New2_fn(Translation** __retval)
{
    *__retval = Translation::New2();
}

// public override sealed void PrependTo(Fuse.FastMatrix m) :10305
void Translation__PrependTo_fn(Translation* __this, ::g::Fuse::FastMatrix* m)
{
    uStackFrame __("Fuse.Translation", "PrependTo(Fuse.FastMatrix)");
    ::g::Uno::Float3 v = ::g::Fuse::ITranslationMode::GetAbsVector(uInterface(uPtr((uObject*)__this->RelativeTo()), ::TYPES[76/*Fuse.ITranslationMode*/]), __this);
    uPtr(m)->PrependTranslation(v.X, v.Y, v.Z);
}

// public float3 get_Vector() :10285
void Translation__get_Vector_fn(Translation* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->Vector();
}

// public void set_Vector(float3 value) :10286
void Translation__set_Vector_fn(Translation* __this, ::g::Uno::Float3* value)
{
    __this->Vector(*value);
}

// public float get_X() :10212
void Translation__get_X_fn(Translation* __this, float* __retval)
{
    *__retval = __this->X();
}

// public void set_X(float value) :10213
void Translation__set_X_fn(Translation* __this, float* value)
{
    __this->X(*value);
}

// public float2 get_XY() :10230
void Translation__get_XY_fn(Translation* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->XY();
}

// public void set_XY(float2 value) :10231
void Translation__set_XY_fn(Translation* __this, ::g::Uno::Float2* value)
{
    __this->XY(*value);
}

// public float get_Y() :10250
void Translation__get_Y_fn(Translation* __this, float* __retval)
{
    *__retval = __this->Y();
}

// public void set_Y(float value) :10251
void Translation__set_Y_fn(Translation* __this, float* value)
{
    __this->Y(*value);
}

// public float get_Z() :10269
void Translation__get_Z_fn(Translation* __this, float* __retval)
{
    *__retval = __this->Z();
}

// public void set_Z(float value) :10270
void Translation__set_Z_fn(Translation* __this, float* value)
{
    __this->Z(*value);
}

// public Translation() [instance] :10200
void Translation::ctor_4()
{
    uStackFrame __("Fuse.Translation", ".ctor()");
    ctor_3(::g::Fuse::TranslationModes::Local());
}

// public float3 get_Vector() [instance] :10285
::g::Uno::Float3 Translation::Vector()
{
    uStackFrame __("Fuse.Translation", "get_Vector()");
    return ::g::Uno::Float3__New2(X(), Y(), Z());
}

// public void set_Vector(float3 value) [instance] :10286
void Translation::Vector(::g::Uno::Float3 value)
{
    uStackFrame __("Fuse.Translation", "set_Vector(float3)");

    if (((_x != value.X) || (_y != value.Y)) || (_z != value.Z))
    {
        _x = value.X;
        _y = value.Y;
        _z = value.Z;
        OnMatrixChanged(NULL, NULL);
    }
}

// public float get_X() [instance] :10212
float Translation::X()
{
    uStackFrame __("Fuse.Translation", "get_X()");
    return _x;
}

// public void set_X(float value) [instance] :10213
void Translation::X(float value)
{
    uStackFrame __("Fuse.Translation", "set_X(float)");

    if (_x != value)
    {
        _x = value;
        OnMatrixChanged(NULL, NULL);
    }
}

// public float2 get_XY() [instance] :10230
::g::Uno::Float2 Translation::XY()
{
    uStackFrame __("Fuse.Translation", "get_XY()");
    return ::g::Uno::Float2__New2(_x, _y);
}

// public void set_XY(float2 value) [instance] :10231
void Translation::XY(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Translation", "set_XY(float2)");

    if ((_x != value.X) || (_y != value.Y))
    {
        _x = value.X;
        _y = value.Y;
        OnMatrixChanged(NULL, NULL);
    }
}

// public float get_Y() [instance] :10250
float Translation::Y()
{
    uStackFrame __("Fuse.Translation", "get_Y()");
    return _y;
}

// public void set_Y(float value) [instance] :10251
void Translation::Y(float value)
{
    uStackFrame __("Fuse.Translation", "set_Y(float)");

    if (_y != value)
    {
        _y = value;
        OnMatrixChanged(NULL, NULL);
    }
}

// public float get_Z() [instance] :10269
float Translation::Z()
{
    uStackFrame __("Fuse.Translation", "get_Z()");
    return _z;
}

// public void set_Z(float value) [instance] :10270
void Translation::Z(float value)
{
    uStackFrame __("Fuse.Translation", "set_Z(float)");

    if (_z != value)
    {
        _z = value;
        OnMatrixChanged(NULL, NULL);
    }
}

// public Translation New() [static] :10200
Translation* Translation::New2()
{
    Translation* obj1 = (Translation*)uNew(Translation_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public static class TranslationModes :10115
// {
// static TranslationModes() :10115
static void TranslationModes__cctor__fn(uType* __type)
{
    TranslationModes::Local_ = (uObject*)TranslationModes__LocalMode::New1();
    TranslationModes::Size_ = (uObject*)TranslationModes__SizeMode::New1();
    TranslationModes::ParentSize_ = (uObject*)TranslationModes__ParentSizeMode::New1();
    TranslationModes::Width_ = (uObject*)TranslationModes__WidthMode::New2();
    TranslationModes::Height_ = (uObject*)TranslationModes__HeightMode::New2();
}

static void TranslationModes_build(uType* type)
{
    ::TYPES[64] = ::g::Fuse::IActualPlacement_typeof();
    type->SetFields(0,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&::g::Fuse::TranslationModes::Height_, uFieldFlagsStatic,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&::g::Fuse::TranslationModes::Local_, uFieldFlagsStatic,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&::g::Fuse::TranslationModes::ParentSize_, uFieldFlagsStatic,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&::g::Fuse::TranslationModes::Size_, uFieldFlagsStatic,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&::g::Fuse::TranslationModes::Width_, uFieldFlagsStatic);
    type->Reflection.SetFields(5,
        new uField("Height", 0),
        new uField("Local", 1),
        new uField("ParentSize", 2),
        new uField("Size", 3),
        new uField("Width", 4));
}

uClassType* TranslationModes_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.TranslationModes", options);
    type->fp_build_ = TranslationModes_build;
    type->fp_cctor_ = TranslationModes__cctor__fn;
    return type;
}

// private static float3 SizeOf(Fuse.Node node) :10157
void TranslationModes__SizeOf_fn(::g::Fuse::Node* node, ::g::Uno::Float3* __retval)
{
    *__retval = TranslationModes::SizeOf(node);
}

uSStrong<uObject*> TranslationModes::Height_;
uSStrong<uObject*> TranslationModes::Local_;
uSStrong<uObject*> TranslationModes::ParentSize_;
uSStrong<uObject*> TranslationModes::Size_;
uSStrong<uObject*> TranslationModes::Width_;

// private static float3 SizeOf(Fuse.Node node) [static] :10157
::g::Uno::Float3 TranslationModes::SizeOf(::g::Fuse::Node* node)
{
    uStackFrame __("Fuse.TranslationModes", "SizeOf(Fuse.Node)");
    TranslationModes_typeof()->Init();
    uObject* isz = uAs<uObject*>(node, ::TYPES[64/*Fuse.IActualPlacement*/]);

    if (isz == NULL)
        return ::g::Uno::Float3__New1(0.0f);

    return ::g::Fuse::IActualPlacement::ActualSize(uInterface(uPtr(isz), ::TYPES[64/*Fuse.IActualPlacement*/]));
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public sealed class UnhandledExceptionArgs :143
// {
static void UnhandledExceptionArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Exception_typeof(), offsetof(::g::Fuse::UnhandledExceptionArgs, _Exception), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::UnhandledExceptionArgs, _IsHandled), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_Exception", NULL, (void*)UnhandledExceptionArgs__get_Exception_fn, 0, false, ::g::Uno::Exception_typeof(), 0),
        new uFunction("get_IsHandled", NULL, (void*)UnhandledExceptionArgs__get_IsHandled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsHandled", NULL, (void*)UnhandledExceptionArgs__set_IsHandled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)UnhandledExceptionArgs__New2_fn, 0, true, UnhandledExceptionArgs_typeof(), 1, ::g::Uno::Exception_typeof()));
}

uType* UnhandledExceptionArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(UnhandledExceptionArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.UnhandledExceptionArgs", options);
    type->fp_build_ = UnhandledExceptionArgs_build;
    return type;
}

// public UnhandledExceptionArgs(Uno.Exception e) :148
void UnhandledExceptionArgs__ctor_1_fn(UnhandledExceptionArgs* __this, ::g::Uno::Exception* e)
{
    __this->ctor_1(e);
}

// public generated Uno.Exception get_Exception() :145
void UnhandledExceptionArgs__get_Exception_fn(UnhandledExceptionArgs* __this, ::g::Uno::Exception** __retval)
{
    *__retval = __this->Exception();
}

// private generated void set_Exception(Uno.Exception value) :145
void UnhandledExceptionArgs__set_Exception_fn(UnhandledExceptionArgs* __this, ::g::Uno::Exception* value)
{
    __this->Exception(value);
}

// public generated bool get_IsHandled() :146
void UnhandledExceptionArgs__get_IsHandled_fn(UnhandledExceptionArgs* __this, bool* __retval)
{
    *__retval = __this->IsHandled();
}

// public generated void set_IsHandled(bool value) :146
void UnhandledExceptionArgs__set_IsHandled_fn(UnhandledExceptionArgs* __this, bool* value)
{
    __this->IsHandled(*value);
}

// public UnhandledExceptionArgs New(Uno.Exception e) :148
void UnhandledExceptionArgs__New2_fn(::g::Uno::Exception* e, UnhandledExceptionArgs** __retval)
{
    *__retval = UnhandledExceptionArgs::New2(e);
}

// public UnhandledExceptionArgs(Uno.Exception e) [instance] :148
void UnhandledExceptionArgs::ctor_1(::g::Uno::Exception* e)
{
    uStackFrame __("Fuse.UnhandledExceptionArgs", ".ctor(Uno.Exception)");
    ctor_();
    Exception(e);
}

// public generated Uno.Exception get_Exception() [instance] :145
::g::Uno::Exception* UnhandledExceptionArgs::Exception()
{
    uStackFrame __("Fuse.UnhandledExceptionArgs", "get_Exception()");
    return _Exception;
}

// private generated void set_Exception(Uno.Exception value) [instance] :145
void UnhandledExceptionArgs::Exception(::g::Uno::Exception* value)
{
    uStackFrame __("Fuse.UnhandledExceptionArgs", "set_Exception(Uno.Exception)");
    _Exception = value;
}

// public generated bool get_IsHandled() [instance] :146
bool UnhandledExceptionArgs::IsHandled()
{
    uStackFrame __("Fuse.UnhandledExceptionArgs", "get_IsHandled()");
    return _IsHandled;
}

// public generated void set_IsHandled(bool value) [instance] :146
void UnhandledExceptionArgs::IsHandled(bool value)
{
    uStackFrame __("Fuse.UnhandledExceptionArgs", "set_IsHandled(bool)");
    _IsHandled = value;
}

// public UnhandledExceptionArgs New(Uno.Exception e) [static] :148
UnhandledExceptionArgs* UnhandledExceptionArgs::New2(::g::Uno::Exception* e)
{
    UnhandledExceptionArgs* obj1 = (UnhandledExceptionArgs*)uNew(UnhandledExceptionArgs_typeof());
    obj1->ctor_1(e);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public delegate void UnhandledExceptionHandler(object sender, Fuse.UnhandledExceptionArgs args) :155
uDelegateType* UnhandledExceptionHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.UnhandledExceptionHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::UnhandledExceptionArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// internal struct UpdateAction :10375
// {
static void UpdateAction_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::UpdateAction, action), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::UpdateAction, priority), 0);
}

uStructType* UpdateAction_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(UpdateAction);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.UpdateAction", options);
    type->fp_build_ = UpdateAction_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// internal sealed class UpdateDispatcher :10436
// {
static void UpdateDispatcher_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(UpdateDispatcher_type, interface0));
}

UpdateDispatcher_type* UpdateDispatcher_typeof()
{
    static uSStrong<UpdateDispatcher_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UpdateDispatcher);
    options.TypeSize = sizeof(UpdateDispatcher_type);
    type = (UpdateDispatcher_type*)uClassType::New("Fuse.UpdateDispatcher", options);
    type->fp_build_ = UpdateDispatcher_build;
    type->fp_ctor_ = (void*)UpdateDispatcher__New1_fn;
    type->interface0.fp_Invoke = (void(*)(uObject*, uDelegate*))UpdateDispatcher__Invoke_fn;
    return type;
}

// public generated UpdateDispatcher() :10436
void UpdateDispatcher__ctor__fn(UpdateDispatcher* __this)
{
    __this->ctor_();
}

// public void Invoke(Uno.Action action) :10438
void UpdateDispatcher__Invoke_fn(UpdateDispatcher* __this, uDelegate* action)
{
    __this->Invoke(action);
}

// public generated UpdateDispatcher New() :10436
void UpdateDispatcher__New1_fn(UpdateDispatcher** __retval)
{
    *__retval = UpdateDispatcher::New1();
}

// public generated UpdateDispatcher() [instance] :10436
void UpdateDispatcher::ctor_()
{
}

// public void Invoke(Uno.Action action) [instance] :10438
void UpdateDispatcher::Invoke(uDelegate* action)
{
    uStackFrame __("Fuse.UpdateDispatcher", "Invoke(Uno.Action)");
    ::g::Fuse::UpdateManager::PostAction(action);
}

// public generated UpdateDispatcher New() [static] :10436
UpdateDispatcher* UpdateDispatcher::New1()
{
    UpdateDispatcher* obj1 = (UpdateDispatcher*)uNew(UpdateDispatcher_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// internal sealed class UpdateListener :10353
// {
static void UpdateListener_build(uType* type)
{
    ::TYPES[77] = ::g::Fuse::IUpdateListener_typeof();
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::UpdateListener, action), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::UpdateListener, deferFrame), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::UpdateListener, removed), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::UpdateListener, sequence), 0,
        ::g::Fuse::IUpdateListener_typeof(), offsetof(::g::Fuse::UpdateListener, update), 0);
}

uType* UpdateListener_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(UpdateListener);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.UpdateListener", options);
    type->fp_build_ = UpdateListener_build;
    type->fp_ctor_ = (void*)UpdateListener__New1_fn;
    return type;
}

// public generated UpdateListener() :10353
void UpdateListener__ctor__fn(UpdateListener* __this)
{
    __this->ctor_();
}

// public void Invoke() :10362
void UpdateListener__Invoke_fn(UpdateListener* __this)
{
    __this->Invoke();
}

// public generated UpdateListener New() :10353
void UpdateListener__New1_fn(UpdateListener** __retval)
{
    *__retval = UpdateListener::New1();
}

// public generated UpdateListener() [instance] :10353
void UpdateListener::ctor_()
{
}

// public void Invoke() [instance] :10362
void UpdateListener::Invoke()
{
    uStackFrame __("Fuse.UpdateListener", "Invoke()");

    if (removed)
        return;

    if (::g::Uno::Delegate::op_Inequality(action, NULL))
        uPtr(action)->InvokeVoid();

    if (update != NULL)
        ::g::Fuse::IUpdateListener::Update(uInterface(uPtr(update), ::TYPES[77/*Fuse.IUpdateListener*/]));
}

// public generated UpdateListener New() [static] :10353
UpdateListener* UpdateListener::New1()
{
    UpdateListener* obj1 = (UpdateListener*)uNew(UpdateListener_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public static class UpdateManager :10444
// {
// static UpdateManager() :10451
static void UpdateManager__cctor__fn(uType* __type)
{
    UpdateManager::_stages_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[78/*Uno.Collections.List<Fuse.Stage>*/]));
    UpdateManager::_postActions_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[79/*Uno.Collections.List<Uno.Action>*/]));
    UpdateManager::_postActionsSwap_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[79/*Uno.Collections.List<Uno.Action>*/]));
    UpdateManager::Dispatcher_ = (uObject*)::g::Fuse::UpdateDispatcher::New1();
    UpdateManager::_postActionLock_ = ::g::Uno::Threading::Mutex::Create();
    UpdateManager::_frameIndex_ = 1;

    for (int i = 0; i <= 2; ++i)
        ::g::Uno::Collections::List__Add_fn(uPtr(UpdateManager::_stages_), ::g::Fuse::Stage::New1(i));
}

static void UpdateManager_build(uType* type)
{
    ::STRINGS[63] = uString::Const("no Action found to remove");
    ::STRINGS[64] = uString::Const("no OnceAction found to remove");
    ::TYPES[78] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Stage_typeof());
    ::TYPES[79] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof());
    ::TYPES[80] = ::g::Uno::IDisposable_typeof();
    ::TYPES[40] = ::g::Uno::Exception_typeof();
    ::TYPES[81] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Exception_typeof());
    type->SetFields(0,
        ::g::Fuse::Stage_typeof(), (uintptr_t)&::g::Fuse::UpdateManager::_currentStage_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::UpdateManager::_frameIndex_, uFieldFlagsStatic,
        ::g::Uno::Threading::Mutex_typeof(), (uintptr_t)&::g::Fuse::UpdateManager::_postActionLock_, uFieldFlagsStatic,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof()), (uintptr_t)&::g::Fuse::UpdateManager::_postActions_, uFieldFlagsStatic,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof()), (uintptr_t)&::g::Fuse::UpdateManager::_postActionsSwap_, uFieldFlagsStatic,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Stage_typeof()), (uintptr_t)&::g::Fuse::UpdateManager::_stages_, uFieldFlagsStatic,
        ::g::Uno::Threading::IDispatcher_typeof(), (uintptr_t)&::g::Fuse::UpdateManager::Dispatcher_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Dispatcher", 6));
    type->Reflection.SetFunctions(13,
        new uFunction("AddAction", NULL, (void*)UpdateManager__AddAction_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::IUpdateListener_typeof(), ::g::Fuse::UpdateStage_typeof()),
        new uFunction("AddAction", NULL, (void*)UpdateManager__AddAction1_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Action_typeof(), ::g::Fuse::UpdateStage_typeof()),
        new uFunction("AddDeferredAction", NULL, (void*)UpdateManager__AddDeferredAction_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Action_typeof(), ::g::Fuse::UpdateStage_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("AddDeferredAction", NULL, (void*)UpdateManager__AddDeferredAction1_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Action_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("AddOnceAction", NULL, (void*)UpdateManager__AddOnceAction_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Action_typeof(), ::g::Fuse::UpdateStage_typeof()),
        new uFunction("get_FrameIndex", NULL, (void*)UpdateManager__get_FrameIndex_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("IncreaseFrameIndex", NULL, (void*)UpdateManager__IncreaseFrameIndex_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("PerformNextFrame", NULL, (void*)UpdateManager__PerformNextFrame_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Action_typeof(), ::g::Fuse::UpdateStage_typeof()),
        new uFunction("PostAction", NULL, (void*)UpdateManager__PostAction_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Action_typeof()),
        new uFunction("RemoveAction", NULL, (void*)UpdateManager__RemoveAction_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::IUpdateListener_typeof(), ::g::Fuse::UpdateStage_typeof()),
        new uFunction("RemoveAction", NULL, (void*)UpdateManager__RemoveAction1_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Action_typeof(), ::g::Fuse::UpdateStage_typeof()),
        new uFunction("RemoveOnceAction", NULL, (void*)UpdateManager__RemoveOnceAction_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Action_typeof(), ::g::Fuse::UpdateStage_typeof()),
        new uFunction("Update", NULL, (void*)UpdateManager__Update_fn, 0, true, uVoid_typeof(), 0));
}

uClassType* UpdateManager_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.UpdateManager", options);
    type->fp_build_ = UpdateManager_build;
    type->fp_cctor_ = UpdateManager__cctor__fn;
    return type;
}

// public static void AddAction(Fuse.IUpdateListener pu, [Fuse.UpdateStage stage]) :10471
void UpdateManager__AddAction_fn(uObject* pu, int* stage)
{
    UpdateManager::AddAction(pu, *stage);
}

// public static void AddAction(Uno.Action pu, [Fuse.UpdateStage stage]) :10460
void UpdateManager__AddAction1_fn(uDelegate* pu, int* stage)
{
    UpdateManager::AddAction1(pu, *stage);
}

// public static void AddDeferredAction(Uno.Action pu, [Fuse.UpdateStage stage], [int priority]) :10562
void UpdateManager__AddDeferredAction_fn(uDelegate* pu, int* stage, int* priority)
{
    UpdateManager::AddDeferredAction(pu, *stage, *priority);
}

// public static void AddDeferredAction(Uno.Action pu, int priority) :10569
void UpdateManager__AddDeferredAction1_fn(uDelegate* pu, int* priority)
{
    UpdateManager::AddDeferredAction1(pu, *priority);
}

// public static void AddOnceAction(Uno.Action pu, [Fuse.UpdateStage stage]) :10515
void UpdateManager__AddOnceAction_fn(uDelegate* pu, int* stage)
{
    UpdateManager::AddOnceAction(pu, *stage);
}

// private static void CheckExceptions(Uno.Collections.List<Uno.Exception> exs) :10741
void UpdateManager__CheckExceptions_fn(::g::Uno::Collections::List* exs)
{
    UpdateManager::CheckExceptions(exs);
}

// public static int get_FrameIndex() :10755
void UpdateManager__get_FrameIndex_fn(int* __retval)
{
    *__retval = UpdateManager::FrameIndex();
}

// public static void IncreaseFrameIndex() :10574
void UpdateManager__IncreaseFrameIndex_fn()
{
    UpdateManager::IncreaseFrameIndex();
}

// public static void PerformNextFrame(Uno.Action pu, [Fuse.UpdateStage stage]) :10532
void UpdateManager__PerformNextFrame_fn(uDelegate* pu, int* stage)
{
    UpdateManager::PerformNextFrame(pu, *stage);
}

// public static void PostAction(Uno.Action pu) :10546
void UpdateManager__PostAction_fn(uDelegate* pu)
{
    UpdateManager::PostAction(pu);
}

// private static void ProcessPostActions() :10705
void UpdateManager__ProcessPostActions_fn()
{
    UpdateManager::ProcessPostActions();
}

// public static void RemoveAction(Fuse.IUpdateListener pu, [Fuse.UpdateStage stage]) :10507
void UpdateManager__RemoveAction_fn(uObject* pu, int* stage)
{
    UpdateManager::RemoveAction(pu, *stage);
}

// public static void RemoveAction(Uno.Action pu, [Fuse.UpdateStage stage]) :10499
void UpdateManager__RemoveAction1_fn(uDelegate* pu, int* stage)
{
    UpdateManager::RemoveAction1(pu, *stage);
}

// private static bool RemoveFrom(Uno.Collections.List<Fuse.UpdateListener> list, Uno.Action action, Fuse.IUpdateListener update) :10481
void UpdateManager__RemoveFrom_fn(::g::Uno::Collections::List* list, uDelegate* action, uObject* update, bool* __retval)
{
    *__retval = UpdateManager::RemoveFrom(list, action, update);
}

// public static void RemoveOnceAction(Uno.Action pu, [Fuse.UpdateStage stage]) :10522
void UpdateManager__RemoveOnceAction_fn(uDelegate* pu, int* stage)
{
    UpdateManager::RemoveOnceAction(pu, *stage);
}

// public static void Update() :10580
void UpdateManager__Update_fn()
{
    UpdateManager::Update();
}

// private static void Update(Fuse.Stage stage) :10620
void UpdateManager__Update1_fn(::g::Fuse::Stage* stage)
{
    UpdateManager::Update1(stage);
}

uSStrong< ::g::Fuse::Stage*> UpdateManager::_currentStage_;
int UpdateManager::_frameIndex_;
uSStrong< ::g::Uno::Threading::Mutex*> UpdateManager::_postActionLock_;
uSStrong< ::g::Uno::Collections::List*> UpdateManager::_postActions_;
uSStrong< ::g::Uno::Collections::List*> UpdateManager::_postActionsSwap_;
uSStrong< ::g::Uno::Collections::List*> UpdateManager::_stages_;
uSStrong<uObject*> UpdateManager::Dispatcher_;

// public static void AddAction(Fuse.IUpdateListener pu, [Fuse.UpdateStage stage]) [static] :10471
void UpdateManager::AddAction(uObject* pu, int stage)
{
    uStackFrame __("Fuse.UpdateManager", "AddAction(Fuse.IUpdateListener,[Fuse.UpdateStage])");
    UpdateManager_typeof()->Init();
    ::g::Fuse::Stage* ret1;
    ::g::Fuse::UpdateListener* us = ::g::Fuse::UpdateListener::New1();
    us->update = pu;
    ::g::Fuse::Stage* s = (::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages()), uCRef<int>(stage), &ret1), ret1);
    uPtr(s)->Insert(uPtr(s)->Listeners, us);
}

// public static void AddAction(Uno.Action pu, [Fuse.UpdateStage stage]) [static] :10460
void UpdateManager::AddAction1(uDelegate* pu, int stage)
{
    uStackFrame __("Fuse.UpdateManager", "AddAction(Uno.Action,[Fuse.UpdateStage])");
    UpdateManager_typeof()->Init();
    ::g::Fuse::Stage* ret2;
    ::g::Fuse::UpdateListener* us = ::g::Fuse::UpdateListener::New1();
    us->action = pu;
    ::g::Fuse::Stage* s = (::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages()), uCRef<int>(stage), &ret2), ret2);
    uPtr(s)->Insert(uPtr(s)->Listeners, us);
}

// public static void AddDeferredAction(Uno.Action pu, [Fuse.UpdateStage stage], [int priority]) [static] :10562
void UpdateManager::AddDeferredAction(uDelegate* pu, int stage, int priority)
{
    uStackFrame __("Fuse.UpdateManager", "AddDeferredAction(Uno.Action,[Fuse.UpdateStage],[int])");
    UpdateManager_typeof()->Init();
    ::g::Fuse::Stage* ret3;
    ::g::Fuse::Stage* ret4;
    ::g::Fuse::Stage* use = (stage != -1) ? (::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages()), uCRef<int>(stage), &ret3), ret3) : (UpdateManager::_currentStage() != NULL) ? (::g::Fuse::Stage*)UpdateManager::_currentStage() : (::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages()), uCRef<int>(0), &ret4), ret4);
    uPtr(use)->AddDeferredAction(pu, priority);
}

// public static void AddDeferredAction(Uno.Action pu, int priority) [static] :10569
void UpdateManager::AddDeferredAction1(uDelegate* pu, int priority)
{
    uStackFrame __("Fuse.UpdateManager", "AddDeferredAction(Uno.Action,int)");
    UpdateManager_typeof()->Init();
    UpdateManager::AddDeferredAction(pu, -1, priority);
}

// public static void AddOnceAction(Uno.Action pu, [Fuse.UpdateStage stage]) [static] :10515
void UpdateManager::AddOnceAction(uDelegate* pu, int stage)
{
    uStackFrame __("Fuse.UpdateManager", "AddOnceAction(Uno.Action,[Fuse.UpdateStage])");
    UpdateManager_typeof()->Init();
    ::g::Fuse::Stage* ret5;
    ::g::Fuse::UpdateListener* us = ::g::Fuse::UpdateListener::New1();
    us->action = pu;
    ::g::Uno::Collections::List__Add_fn(uPtr(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages()), uCRef<int>(stage), &ret5), ret5))->OncesPending), us);
}

// private static void CheckExceptions(Uno.Collections.List<Uno.Exception> exs) [static] :10741
void UpdateManager::CheckExceptions(::g::Uno::Collections::List* exs)
{
    uStackFrame __("Fuse.UpdateManager", "CheckExceptions(Uno.Collections.List<Uno.Exception>)");
    UpdateManager_typeof()->Init();
    ::g::Uno::Exception* ret6;

    if (exs != NULL)
    {
        if (uPtr(exs)->Count() == 1)
            U_THROW(::g::Fuse::WrapException::New4((::g::Uno::Collections::List__get_Item_fn(uPtr(exs), uCRef<int>(0), &ret6), ret6)));
        else 
            U_THROW(::g::Uno::AggregateException::New7((uArray*)uPtr(exs)->ToArray()));
    }
}

// public static void IncreaseFrameIndex() [static] :10574
void UpdateManager::IncreaseFrameIndex()
{
    uStackFrame __("Fuse.UpdateManager", "IncreaseFrameIndex()");
    UpdateManager_typeof()->Init();
    UpdateManager::_frameIndex()++;
}

// public static void PerformNextFrame(Uno.Action pu, [Fuse.UpdateStage stage]) [static] :10532
void UpdateManager::PerformNextFrame(uDelegate* pu, int stage)
{
    uStackFrame __("Fuse.UpdateManager", "PerformNextFrame(Uno.Action,[Fuse.UpdateStage])");
    UpdateManager_typeof()->Init();
    ::g::Fuse::Stage* ret8;
    ::g::Fuse::UpdateListener* us = ::g::Fuse::UpdateListener::New1();
    us->action = pu;
    us->deferFrame = (UpdateManager::FrameIndex() + 1);
    ::g::Uno::Collections::List__Add_fn(uPtr(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages()), uCRef<int>(stage), &ret8), ret8))->OncesPending), us);
}

// public static void PostAction(Uno.Action pu) [static] :10546
void UpdateManager::PostAction(uDelegate* pu)
{
    uStackFrame __("Fuse.UpdateManager", "PostAction(Uno.Action)");
    UpdateManager_typeof()->Init();
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(UpdateManager::_postActionLock());

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[80/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::List__Add_fn(uPtr(UpdateManager::_postActions()), pu);
    }
}

// private static void ProcessPostActions() [static] :10705
void UpdateManager::ProcessPostActions()
{
    uStackFrame __("Fuse.UpdateManager", "ProcessPostActions()");
    UpdateManager_typeof()->Init();
    uDelegate* ret9;
    ::g::Uno::Collections::List* _exceptions = NULL;

    while (true)
    {
        uPtr(UpdateManager::_postActionLock())->Lock();
        ::g::Uno::Collections::List* a = UpdateManager::_postActions();
        UpdateManager::_postActions() = UpdateManager::_postActionsSwap();
        UpdateManager::_postActionsSwap() = a;
        uPtr(UpdateManager::_postActionLock())->Unlock();

        if (uPtr(a)->Count() == 0)
            break;

        for (int i = 0; i < uPtr(a)->Count(); ++i)

            try
            {
                uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(a), uCRef<int>(i), &ret9), ret9))->InvokeVoid();
            }
            catch (const uThrowable& __t)
            {
                ::g::Uno::Exception* e = __t.Exception;

                if (_exceptions == NULL)
                    _exceptions = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[81/*Uno.Collections.List<Uno.Exception>*/]);

                ::g::Uno::Collections::List__Add_fn(uPtr(_exceptions), e);
            }

        uPtr(a)->Clear();
    }

    UpdateManager::_currentStage() = NULL;
    UpdateManager::CheckExceptions(_exceptions);
}

// public static void RemoveAction(Fuse.IUpdateListener pu, [Fuse.UpdateStage stage]) [static] :10507
void UpdateManager::RemoveAction(uObject* pu, int stage)
{
    uStackFrame __("Fuse.UpdateManager", "RemoveAction(Fuse.IUpdateListener,[Fuse.UpdateStage])");
    UpdateManager_typeof()->Init();
    ::g::Fuse::Stage* ret10;
    ::g::Fuse::Stage* s = (::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages()), uCRef<int>(stage), &ret10), ret10);

    if (!UpdateManager::RemoveFrom(uPtr(s)->Listeners, NULL, pu))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[63/*"no Action f...*/]));

    uPtr(s)->HasListenersRemoved = true;
}

// public static void RemoveAction(Uno.Action pu, [Fuse.UpdateStage stage]) [static] :10499
void UpdateManager::RemoveAction1(uDelegate* pu, int stage)
{
    uStackFrame __("Fuse.UpdateManager", "RemoveAction(Uno.Action,[Fuse.UpdateStage])");
    UpdateManager_typeof()->Init();
    ::g::Fuse::Stage* ret11;
    ::g::Fuse::Stage* s = (::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages()), uCRef<int>(stage), &ret11), ret11);

    if (!UpdateManager::RemoveFrom(uPtr(s)->Listeners, pu, NULL))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[63/*"no Action f...*/]));

    uPtr(s)->HasListenersRemoved = true;
}

// private static bool RemoveFrom(Uno.Collections.List<Fuse.UpdateListener> list, Uno.Action action, Fuse.IUpdateListener update) [static] :10481
bool UpdateManager::RemoveFrom(::g::Uno::Collections::List* list, uDelegate* action, uObject* update)
{
    uStackFrame __("Fuse.UpdateManager", "RemoveFrom(Uno.Collections.List<Fuse.UpdateListener>,Uno.Action,Fuse.IUpdateListener)");
    UpdateManager_typeof()->Init();
    ::g::Fuse::UpdateListener* ret12;
    ::g::Fuse::UpdateListener* ret13;
    ::g::Fuse::UpdateListener* ret14;
    ::g::Fuse::UpdateListener* ret15;

    for (int i = 0; i < uPtr(list)->Count(); ++i)
    {
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i), &ret12), ret12))->removed)
            continue;

        if ((::g::Uno::Delegate::op_Inequality(action, NULL) && ::g::Uno::Object::Equals1(action, uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i), &ret13), ret13))->action)) || ((update != NULL) && ::g::Uno::Object::Equals1(update, uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i), &ret14), ret14))->update)))
        {
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i), &ret15), ret15))->removed = true;
            return true;
        }
    }

    return false;
}

// public static void RemoveOnceAction(Uno.Action pu, [Fuse.UpdateStage stage]) [static] :10522
void UpdateManager::RemoveOnceAction(uDelegate* pu, int stage)
{
    uStackFrame __("Fuse.UpdateManager", "RemoveOnceAction(Uno.Action,[Fuse.UpdateStage])");
    UpdateManager_typeof()->Init();
    ::g::Fuse::Stage* ret16;
    ::g::Fuse::Stage* s = (::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages()), uCRef<int>(stage), &ret16), ret16);

    if (UpdateManager::RemoveFrom(uPtr(s)->OncesPending, pu, NULL))
        return;

    if (!UpdateManager::RemoveFrom(uPtr(s)->Onces, pu, NULL))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[64/*"no OnceActi...*/]));
}

// public static void Update() [static] :10580
void UpdateManager::Update()
{
    uStackFrame __("Fuse.UpdateManager", "Update()");
    UpdateManager_typeof()->Init();
    ::g::Fuse::Stage* ret17;
    double t;
    UpdateManager::ProcessPostActions();
    int c = uPtr(UpdateManager::_stages())->Count();

    for (int i = 0; i < c; ++i)
        UpdateManager::Update1((::g::Uno::Collections::List__get_Item_fn(uPtr(UpdateManager::_stages()), uCRef<int>(i), &ret17), ret17));
}

// private static void Update(Fuse.Stage stage) [static] :10620
void UpdateManager::Update1(::g::Fuse::Stage* stage)
{
    uStackFrame __("Fuse.UpdateManager", "Update(Fuse.Stage)");
    UpdateManager_typeof()->Init();
    ::g::Fuse::UpdateListener* ret18;
    ::g::Fuse::UpdateListener* ret19;
    ::g::Fuse::UpdateListener* ret20;
    ::g::Fuse::UpdateAction ret21;
    UpdateManager::_currentStage() = stage;
    ::g::Uno::Collections::List* _exceptions = NULL;

    if (uPtr(uPtr(stage)->OncesPending)->Count() > 0)
    {
        ::g::Uno::Collections::List* t = uPtr(stage)->Onces;
        stage->Onces = stage->OncesPending;
        stage->OncesPending = t;
        uPtr(stage->OncesPending)->Clear();
        int c = uPtr(stage->Onces)->Count();

        for (int i = 0; i < c; ++i)
        {
            ::g::Fuse::UpdateListener* ul = (::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(stage)->Onces), uCRef<int>(i), &ret18), ret18);

            if (uPtr(ul)->deferFrame > UpdateManager::FrameIndex())
                ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(stage)->OncesPending), ul);
            else 
            {
                try
                {
                    uPtr(ul)->Invoke();
                }
                catch (const uThrowable& __t)
                {
                    ::g::Uno::Exception* e = __t.Exception;

                    if (_exceptions == NULL)
                        _exceptions = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[81/*Uno.Collections.List<Uno.Exception>*/]);

                    ::g::Uno::Collections::List__Add_fn(uPtr(_exceptions), e);
                }
            }
        }
    }

    for (int i1 = 0; i1 < uPtr(uPtr(stage)->Listeners)->Count(); ++i1)
    {
        ::g::Fuse::UpdateListener* ul1 = (::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(stage)->Listeners), uCRef<int>(i1), &ret19), ret19);

        try
        {
            uPtr(ul1)->Invoke();
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e1 = __t.Exception;

            if (_exceptions == NULL)
                _exceptions = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[81/*Uno.Collections.List<Uno.Exception>*/]);

            ::g::Uno::Collections::List__Add_fn(uPtr(_exceptions), e1);
        }
    }

    if (uPtr(stage)->HasListenersRemoved)

        for (int i2 = uPtr(uPtr(stage)->Listeners)->Count() - 1; i2 >= 0; --i2)
            if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(stage)->Listeners), uCRef<int>(i2), &ret20), ret20))->removed)
                uPtr(uPtr(stage)->Listeners)->RemoveAt(i2);

    uPtr(stage)->PhaseDeferredActionsAt = 0;

    for (; stage->PhaseDeferredActionsAt < uPtr(stage->PhaseDeferredActions)->Count(); ++stage->PhaseDeferredActionsAt)

        try
        {
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(stage)->PhaseDeferredActions), uCRef<int>(uPtr(stage)->PhaseDeferredActionsAt), &ret21), ret21).action)->InvokeVoid();
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e2 = __t.Exception;

            if (_exceptions == NULL)
                _exceptions = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[81/*Uno.Collections.List<Uno.Exception>*/]);

            ::g::Uno::Collections::List__Add_fn(uPtr(_exceptions), e2);
        }

    stage->ResetDeferredActions();
    UpdateManager::_currentStage() = NULL;
    UpdateManager::CheckExceptions(_exceptions);
}

// public static int get_FrameIndex() [static] :10755
int UpdateManager::FrameIndex()
{
    uStackFrame __("Fuse.UpdateManager", "get_FrameIndex()");
    UpdateManager_typeof()->Init();
    return UpdateManager::_frameIndex();
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public enum UpdateStage :10327
uEnumType* UpdateStage_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.UpdateStage", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "None", -1LL,
        "Primary", 0LL,
        "Layout", 1LL,
        "Draw", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.UserEvents/0.40.8/$.uno
// ----------------------------------------------------------

// public partial sealed class UserEvent :354
// {
// static UserEvent() :356
static void UserEvent__cctor_1_fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass::Register(UserEvent_typeof(), uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[51/*Fuse.Scripting.ScriptMember[]*/], 1, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[82/*Fuse.Scripting.ScriptMethod<Fuse.UserEvent>*/], ::STRINGS[65/*"raise"*/], uDelegate::New(::TYPES[83/*Uno.Action<Fuse.Scripting.Context, Fuse.UserEvent, object[]>*/], (void*)UserEvent__raise_fn), 2)));
}

static void UserEvent_build(uType* type)
{
    ::STRINGS[65] = uString::Const("raise");
    ::STRINGS[66] = uString::Const("UserEvent requires a Name");
    ::STRINGS[67] = uString::Const("/usr/local/share/uno/Packages/Fuse.UserEvents/0.40.8/$.uno");
    ::STRINGS[68] = uString::Const("OnRooted");
    ::STRINGS[69] = uString::Const("Raise must be called with zero arguments, or one argument defining the arguments to the event");
    ::STRINGS[70] = uString::Const("Raise must be called with a JavaScript object to define name/value pairs");
    ::STRINGS[71] = uString::Const("Trying to Raise on unrooted UserEvent");
    ::STRINGS[72] = uString::Const("Raise");
    ::STRINGS[73] = uString::Const("Unknown event: ");
    ::STRINGS[74] = uString::Const("RaiseEvent");
    ::TYPES[50] = ::g::Uno::Type_typeof();
    ::TYPES[51] = ::g::Fuse::Scripting::ScriptMember_typeof()->Array();
    ::TYPES[82] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(UserEvent_typeof());
    ::TYPES[83] = ::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), UserEvent_typeof(), uObject_typeof()->Array());
    ::TYPES[84] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[85] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof());
    ::TYPES[7] = ::g::Fuse::Visual_typeof();
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[69] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface3));
    type->SetFields(13,
        ::g::Fuse::UserEventDispatch_typeof(), offsetof(::g::Fuse::UserEvent, Dispatch), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)UserEvent__New2_fn, 0, true, UserEvent_typeof(), 0),
        new uFunction("Raise", NULL, (void*)UserEvent__Raise_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof())),
        new uFunction("RaiseEvent", NULL, (void*)UserEvent__RaiseEvent_fn, 0, true, uVoid_typeof(), 3, ::g::Fuse::Visual_typeof(), ::g::Uno::UX::Selector_typeof(), ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof())));
}

::g::Fuse::Node_type* UserEvent_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 14;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(UserEvent);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.UserEvent", options);
    type->fp_build_ = UserEvent_build;
    type->fp_ctor_ = (void*)UserEvent__New2_fn;
    type->fp_cctor_ = UserEvent__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))UserEvent__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))UserEvent__OnUnrooted_fn;
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

// public generated UserEvent() :354
void UserEvent__ctor_3_fn(UserEvent* __this)
{
    __this->ctor_3();
}

// public generated UserEvent New() :354
void UserEvent__New2_fn(UserEvent** __retval)
{
    *__retval = UserEvent::New2();
}

// protected override sealed void OnRooted() :633
void UserEvent__OnRooted_fn(UserEvent* __this)
{
    uStackFrame __("Fuse.UserEvent", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);

    if (::g::Uno::String::op_Equality(::g::Uno::UX::Selector__op_Implicit1(__this->Name()), NULL))
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[66/*"UserEvent r...*/], __this, ::STRINGS[67/*"/usr/local/...*/], 638, ::STRINGS[68/*"OnRooted"*/]);
        return;
    }

    __this->Dispatch = ::g::Fuse::UserEventDispatch::GetByName(__this->Name());
}

// protected override sealed void OnUnrooted() :645
void UserEvent__OnUnrooted_fn(UserEvent* __this)
{
    uStackFrame __("Fuse.UserEvent", "OnUnrooted()");
    __this->Dispatch = NULL;
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private static void raise(Fuse.Scripting.Context c, Fuse.UserEvent n, object[] args) :411
void UserEvent__raise_fn(::g::Fuse::Scripting::Context* c, UserEvent* n, uArray* args)
{
    UserEvent::raise(c, n, args);
}

// public void Raise([Uno.Collections.Dictionary<string, object> args]) :681
void UserEvent__Raise_fn(UserEvent* __this, ::g::Uno::Collections::Dictionary* args)
{
    __this->Raise(args);
}

// public static void RaiseEvent(Fuse.Visual from, Uno.UX.Selector name, [Uno.Collections.Dictionary<string, object> args]) :692
void UserEvent__RaiseEvent_fn(::g::Fuse::Visual* from, ::g::Uno::UX::Selector* name, ::g::Uno::Collections::Dictionary* args)
{
    UserEvent::RaiseEvent(from, *name, args);
}

// internal static Fuse.UserEvent ScanTree(Fuse.Node at, Uno.UX.Selector name, Fuse.Visual& visual) :657
void UserEvent__ScanTree_fn(::g::Fuse::Node* at, ::g::Uno::UX::Selector* name, ::g::Fuse::Visual** visual, UserEvent** __retval)
{
    *__retval = UserEvent::ScanTree(at, *name, visual);
}

// public generated UserEvent() [instance] :354
void UserEvent::ctor_3()
{
    uStackFrame __("Fuse.UserEvent", ".ctor()");
    ctor_2();
}

// public void Raise([Uno.Collections.Dictionary<string, object> args]) [instance] :681
void UserEvent::Raise(::g::Uno::Collections::Dictionary* args)
{
    uStackFrame __("Fuse.UserEvent", "Raise([Uno.Collections.Dictionary<string, object>])");

    if (Dispatch == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[71/*"Trying to R...*/], this, ::STRINGS[67/*"/usr/local/...*/], 685, ::STRINGS[72/*"Raise"*/]);
        return;
    }

    uPtr(Dispatch)->Raise(Parent(), args);
}

// public generated UserEvent New() [static] :354
UserEvent* UserEvent::New2()
{
    UserEvent* obj1 = (UserEvent*)uNew(UserEvent_typeof());
    obj1->ctor_3();
    return obj1;
}

// private static void raise(Fuse.Scripting.Context c, Fuse.UserEvent n, object[] args) [static] :411
void UserEvent::raise(::g::Fuse::Scripting::Context* c, UserEvent* n, uArray* args)
{
    uStackFrame __("Fuse.UserEvent", "raise(Fuse.Scripting.Context,Fuse.UserEvent,object[])");
    UserEvent_typeof()->Init();

    if (uPtr(args)->Length() == 0)
    {
        uPtr(n)->Raise(NULL);
        return;
    }

    if (uPtr(args)->Length() > 1)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[69/*"Raise must ...*/], n, ::STRINGS[67/*"/usr/local/...*/], 421, ::STRINGS[65/*"raise"*/]);
        return;
    }

    ::g::Fuse::Scripting::Object* so = uAs< ::g::Fuse::Scripting::Object*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[84/*Fuse.Scripting.Object*/]);

    if (so == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[70/*"Raise must ...*/], uPtr(args)->Strong<uObject*>(0), ::STRINGS[67/*"/usr/local/...*/], 428, ::STRINGS[65/*"raise"*/]);
        return;
    }

    uArray* keys = uPtr(so)->Keys();
    ::g::Uno::Collections::Dictionary* evArgs = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[85/*Uno.Collections.Dictionary<string, object>*/]);

    for (int i = 0; i < uPtr(keys)->Length(); i++)
    {
        uString* name = uPtr(keys)->Strong<uString*>(i);
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(evArgs), name, uPtr(so)->Item(name));
    }

    uPtr(n)->Raise(evArgs);
}

// public static void RaiseEvent(Fuse.Visual from, Uno.UX.Selector name, [Uno.Collections.Dictionary<string, object> args]) [static] :692
void UserEvent::RaiseEvent(::g::Fuse::Visual* from, ::g::Uno::UX::Selector name, ::g::Uno::Collections::Dictionary* args)
{
    uStackFrame __("Fuse.UserEvent", "RaiseEvent(Fuse.Visual,Uno.UX.Selector,[Uno.Collections.Dictionary<string, object>])");
    UserEvent_typeof()->Init();
    ::g::Fuse::Visual* n;
    UserEvent* ev = UserEvent::ScanTree(from, name, &n);

    if (ev == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::g::Uno::String::op_Addition2(::STRINGS[73/*"Unknown eve...*/], ::g::Uno::UX::Selector__op_Implicit1(name)), NULL, ::STRINGS[67/*"/usr/local/...*/], 698, ::STRINGS[74/*"RaiseEvent"*/]);
        return;
    }

    uPtr(ev)->Raise(args);
}

// internal static Fuse.UserEvent ScanTree(Fuse.Node at, Uno.UX.Selector name, Fuse.Visual& visual) [static] :657
UserEvent* UserEvent::ScanTree(::g::Fuse::Node* at, ::g::Uno::UX::Selector name, ::g::Fuse::Visual** visual)
{
    uStackFrame __("Fuse.UserEvent", "ScanTree(Fuse.Node,Uno.UX.Selector,Fuse.Visual&)");
    UserEvent_typeof()->Init();
    ::g::Fuse::Node* ret2;

    while (at != NULL)
    {
        ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(at, ::TYPES[7/*Fuse.Visual*/]);

        if (v != NULL)

            for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(v)->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
            {
                UserEvent* ue = uAs<UserEvent*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(v)->Children()), ::TYPES[69/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret2), ret2), UserEvent_typeof());

                if ((ue != NULL) && ::g::Uno::UX::Selector__op_Equality(uPtr(ue)->Name(), name))
                {
                    *visual = v;
                    return ue;
                }
            }

        at = uPtr(at)->ContextParent();
    }

    *visual = NULL;
    return NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.UserEvents/0.40.8/$.uno
// ----------------------------------------------------------

// public sealed class UserEventArgs :457
// {
static void UserEventArgs_build(uType* type)
{
    ::STRINGS[75] = uString::Const("name");
    ::TYPES[67] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    ::TYPES[86] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof());
    ::TYPES[87] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(UserEventArgs_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof()), offsetof(::g::Fuse::UserEventArgs, _Args), 0,
        ::g::Fuse::UserEventDispatch_typeof(), offsetof(::g::Fuse::UserEventArgs, _Dispatch), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::UserEventArgs, _Source), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Args", NULL, (void*)UserEventArgs__get_Args_fn, 0, false, ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof()), 0),
        new uFunction("get_Name", NULL, (void*)UserEventArgs__get_Name_fn, 0, false, ::g::Uno::UX::Selector_typeof(), 0),
        new uFunction("get_Source", NULL, (void*)UserEventArgs__get_Source_fn, 0, false, ::g::Fuse::Node_typeof(), 0));
}

UserEventArgs_type* UserEventArgs_typeof()
{
    static uSStrong<UserEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UserEventArgs);
    options.TypeSize = sizeof(UserEventArgs_type);
    type = (UserEventArgs_type*)uClassType::New("Fuse.UserEventArgs", options);
    type->fp_build_ = UserEventArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))UserEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// internal UserEventArgs(Fuse.UserEventDispatch dispatch, Fuse.Node source, [Uno.Collections.Dictionary<string, object> args]) :471
void UserEventArgs__ctor_1_fn(UserEventArgs* __this, ::g::Fuse::UserEventDispatch* dispatch, ::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args)
{
    __this->ctor_1(dispatch, source, args);
}

// public generated Uno.Collections.Dictionary<string, object> get_Args() :469
void UserEventArgs__get_Args_fn(UserEventArgs* __this, ::g::Uno::Collections::Dictionary** __retval)
{
    *__retval = __this->Args();
}

// private generated void set_Args(Uno.Collections.Dictionary<string, object> value) :469
void UserEventArgs__set_Args_fn(UserEventArgs* __this, ::g::Uno::Collections::Dictionary* value)
{
    __this->Args(value);
}

// internal generated Fuse.UserEventDispatch get_Dispatch() :459
void UserEventArgs__get_Dispatch_fn(UserEventArgs* __this, ::g::Fuse::UserEventDispatch** __retval)
{
    *__retval = __this->Dispatch();
}

// private generated void set_Dispatch(Fuse.UserEventDispatch value) :459
void UserEventArgs__set_Dispatch_fn(UserEventArgs* __this, ::g::Fuse::UserEventDispatch* value)
{
    __this->Dispatch(value);
}

// private void Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer s) :483
void UserEventArgs__FuseScriptingIScriptEventSerialize_fn(UserEventArgs* __this, uObject* s)
{
    uStackFrame __("Fuse.UserEventArgs", "Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer)");
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > ret3;
    ::g::Fuse::Scripting::IEventSerializer::AddString(uInterface(uPtr(s), ::TYPES[67/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[75/*"name"*/], ::g::Uno::UX::Selector__op_Implicit1(uPtr(__this->Dispatch())->Name()));

    if (__this->Args() != NULL)

        for (::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(__this->Args()), &ret3), ret3); enum1.MoveNext(::TYPES[86/*Uno.Collections.Dictionary<string, object>.Enumerator*/]); )
        {
            ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong<uObject*> > m = enum1.Current(::TYPES[86/*Uno.Collections.Dictionary<string, object>.Enumerator*/]);
            ::g::Fuse::Scripting::IEventSerializer::AddObject(uInterface(uPtr(s), ::TYPES[67/*Fuse.Scripting.IEventSerializer*/]), m.Key(::TYPES[87/*Uno.Collections.KeyValuePair<string, object>*/]), m.Value(::TYPES[87/*Uno.Collections.KeyValuePair<string, object>*/]));
        }
}

// public Uno.UX.Selector get_Name() :463
void UserEventArgs__get_Name_fn(UserEventArgs* __this, ::g::Uno::UX::Selector* __retval)
{
    *__retval = __this->Name();
}

// internal UserEventArgs New(Fuse.UserEventDispatch dispatch, Fuse.Node source, [Uno.Collections.Dictionary<string, object> args]) :471
void UserEventArgs__New2_fn(::g::Fuse::UserEventDispatch* dispatch, ::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args, UserEventArgs** __retval)
{
    *__retval = UserEventArgs::New2(dispatch, source, args);
}

// internal void Raise() :478
void UserEventArgs__Raise_fn(UserEventArgs* __this)
{
    __this->Raise();
}

// public generated Fuse.Node get_Source() :466
void UserEventArgs__get_Source_fn(UserEventArgs* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Source();
}

// private generated void set_Source(Fuse.Node value) :466
void UserEventArgs__set_Source_fn(UserEventArgs* __this, ::g::Fuse::Node* value)
{
    __this->Source(value);
}

// internal UserEventArgs(Fuse.UserEventDispatch dispatch, Fuse.Node source, [Uno.Collections.Dictionary<string, object> args]) [instance] :471
void UserEventArgs::ctor_1(::g::Fuse::UserEventDispatch* dispatch, ::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args)
{
    uStackFrame __("Fuse.UserEventArgs", ".ctor(Fuse.UserEventDispatch,Fuse.Node,[Uno.Collections.Dictionary<string, object>])");
    ctor_();
    Dispatch(dispatch);
    Source(source);
    Args(args);
}

// public generated Uno.Collections.Dictionary<string, object> get_Args() [instance] :469
::g::Uno::Collections::Dictionary* UserEventArgs::Args()
{
    uStackFrame __("Fuse.UserEventArgs", "get_Args()");
    return _Args;
}

// private generated void set_Args(Uno.Collections.Dictionary<string, object> value) [instance] :469
void UserEventArgs::Args(::g::Uno::Collections::Dictionary* value)
{
    uStackFrame __("Fuse.UserEventArgs", "set_Args(Uno.Collections.Dictionary<string, object>)");
    _Args = value;
}

// internal generated Fuse.UserEventDispatch get_Dispatch() [instance] :459
::g::Fuse::UserEventDispatch* UserEventArgs::Dispatch()
{
    uStackFrame __("Fuse.UserEventArgs", "get_Dispatch()");
    return _Dispatch;
}

// private generated void set_Dispatch(Fuse.UserEventDispatch value) [instance] :459
void UserEventArgs::Dispatch(::g::Fuse::UserEventDispatch* value)
{
    uStackFrame __("Fuse.UserEventArgs", "set_Dispatch(Fuse.UserEventDispatch)");
    _Dispatch = value;
}

// public Uno.UX.Selector get_Name() [instance] :463
::g::Uno::UX::Selector UserEventArgs::Name()
{
    uStackFrame __("Fuse.UserEventArgs", "get_Name()");
    return uPtr(Dispatch())->Name();
}

// internal void Raise() [instance] :478
void UserEventArgs::Raise()
{
    uStackFrame __("Fuse.UserEventArgs", "Raise()");
    uPtr(Dispatch())->OnRaised(this);
}

// public generated Fuse.Node get_Source() [instance] :466
::g::Fuse::Node* UserEventArgs::Source()
{
    uStackFrame __("Fuse.UserEventArgs", "get_Source()");
    return _Source;
}

// private generated void set_Source(Fuse.Node value) [instance] :466
void UserEventArgs::Source(::g::Fuse::Node* value)
{
    uStackFrame __("Fuse.UserEventArgs", "set_Source(Fuse.Node)");
    _Source = value;
}

// internal UserEventArgs New(Fuse.UserEventDispatch dispatch, Fuse.Node source, [Uno.Collections.Dictionary<string, object> args]) [static] :471
UserEventArgs* UserEventArgs::New2(::g::Fuse::UserEventDispatch* dispatch, ::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args)
{
    UserEventArgs* obj2 = (UserEventArgs*)uNew(UserEventArgs_typeof());
    obj2->ctor_1(dispatch, source, args);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.UserEvents/0.40.8/$.uno
// ----------------------------------------------------------

// internal sealed class UserEventDispatch :496
// {
// static UserEventDispatch() :496
static void UserEventDispatch__cctor__fn(uType* __type)
{
    UserEventDispatch::_userEvents_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[88/*Uno.Collections.Dictionary<Uno.UX.Selector, Fuse.UserEventDispatch>*/]));
}

static void UserEventDispatch_build(uType* type)
{
    ::TYPES[88] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::UX::Selector_typeof(), UserEventDispatch_typeof());
    ::TYPES[3] = ::g::Uno::Action_typeof();
    ::TYPES[89] = ::g::Fuse::UserEventHandler_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), offsetof(::g::Fuse::UserEventDispatch, _Name), 0,
        ::g::Fuse::UserEventHandler_typeof(), offsetof(::g::Fuse::UserEventDispatch, Raised1), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::UX::Selector_typeof(), UserEventDispatch_typeof()), (uintptr_t)&::g::Fuse::UserEventDispatch::_userEvents_, uFieldFlagsStatic);
}

uType* UserEventDispatch_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(UserEventDispatch);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.UserEventDispatch", options);
    type->fp_build_ = UserEventDispatch_build;
    type->fp_ctor_ = (void*)UserEventDispatch__New1_fn;
    type->fp_cctor_ = UserEventDispatch__cctor__fn;
    return type;
}

// public generated UserEventDispatch() :496
void UserEventDispatch__ctor__fn(UserEventDispatch* __this)
{
    __this->ctor_();
}

// internal void DirectRaise([Fuse.Node source], [Uno.Collections.Dictionary<string, object> args]) :523
void UserEventDispatch__DirectRaise_fn(UserEventDispatch* __this, ::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args)
{
    __this->DirectRaise(source, args);
}

// internal static Fuse.UserEventDispatch GetByName(Uno.UX.Selector name) :505
void UserEventDispatch__GetByName_fn(::g::Uno::UX::Selector* name, UserEventDispatch** __retval)
{
    *__retval = UserEventDispatch::GetByName(*name);
}

// public generated Uno.UX.Selector get_Name() :503
void UserEventDispatch__get_Name_fn(UserEventDispatch* __this, ::g::Uno::UX::Selector* __retval)
{
    *__retval = __this->Name();
}

// private generated void set_Name(Uno.UX.Selector value) :503
void UserEventDispatch__set_Name_fn(UserEventDispatch* __this, ::g::Uno::UX::Selector* value)
{
    __this->Name(*value);
}

// public generated UserEventDispatch New() :496
void UserEventDispatch__New1_fn(UserEventDispatch** __retval)
{
    *__retval = UserEventDispatch::New1();
}

// internal void OnRaised(Fuse.UserEventArgs args) :529
void UserEventDispatch__OnRaised_fn(UserEventDispatch* __this, ::g::Fuse::UserEventArgs* args)
{
    __this->OnRaised(args);
}

// public void Raise(Fuse.Node source, [Uno.Collections.Dictionary<string, object> args]) :517
void UserEventDispatch__Raise_fn(UserEventDispatch* __this, ::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args)
{
    __this->Raise(source, args);
}

// public generated void add_Raised(Fuse.UserEventHandler value) :501
void UserEventDispatch__add_Raised_fn(UserEventDispatch* __this, uDelegate* value)
{
    __this->add_Raised(value);
}

// public generated void remove_Raised(Fuse.UserEventHandler value) :501
void UserEventDispatch__remove_Raised_fn(UserEventDispatch* __this, uDelegate* value)
{
    __this->remove_Raised(value);
}

uSStrong< ::g::Uno::Collections::Dictionary*> UserEventDispatch::_userEvents_;

// public generated UserEventDispatch() [instance] :496
void UserEventDispatch::ctor_()
{
}

// internal void DirectRaise([Fuse.Node source], [Uno.Collections.Dictionary<string, object> args]) [instance] :523
void UserEventDispatch::DirectRaise(::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args)
{
    uStackFrame __("Fuse.UserEventDispatch", "DirectRaise([Fuse.Node],[Uno.Collections.Dictionary<string, object>])");
    ::g::Fuse::UserEventArgs* m = ::g::Fuse::UserEventArgs::New2(this, source, args);
    OnRaised(m);
}

// public generated Uno.UX.Selector get_Name() [instance] :503
::g::Uno::UX::Selector UserEventDispatch::Name()
{
    uStackFrame __("Fuse.UserEventDispatch", "get_Name()");
    return _Name;
}

// private generated void set_Name(Uno.UX.Selector value) [instance] :503
void UserEventDispatch::Name(::g::Uno::UX::Selector value)
{
    uStackFrame __("Fuse.UserEventDispatch", "set_Name(Uno.UX.Selector)");
    _Name = value;
}

// internal void OnRaised(Fuse.UserEventArgs args) [instance] :529
void UserEventDispatch::OnRaised(::g::Fuse::UserEventArgs* args)
{
    uStackFrame __("Fuse.UserEventDispatch", "OnRaised(Fuse.UserEventArgs)");

    if (::g::Uno::Delegate::op_Inequality(Raised1, NULL))
        uPtr(Raised1)->Invoke(2, this, args);
}

// public void Raise(Fuse.Node source, [Uno.Collections.Dictionary<string, object> args]) [instance] :517
void UserEventDispatch::Raise(::g::Fuse::Node* source, ::g::Uno::Collections::Dictionary* args)
{
    uStackFrame __("Fuse.UserEventDispatch", "Raise(Fuse.Node,[Uno.Collections.Dictionary<string, object>])");
    ::g::Fuse::UserEventArgs* m = ::g::Fuse::UserEventArgs::New2(this, source, args);
    ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)::g::Fuse::UserEventArgs__Raise_fn, m), -1, 0);
}

// public generated void add_Raised(Fuse.UserEventHandler value) [instance] :501
void UserEventDispatch::add_Raised(uDelegate* value)
{
    uStackFrame __("Fuse.UserEventDispatch", "add_Raised(Fuse.UserEventHandler)");
    Raised1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Raised1, value), ::TYPES[89/*Fuse.UserEventHandler*/]);
}

// public generated void remove_Raised(Fuse.UserEventHandler value) [instance] :501
void UserEventDispatch::remove_Raised(uDelegate* value)
{
    uStackFrame __("Fuse.UserEventDispatch", "remove_Raised(Fuse.UserEventHandler)");
    Raised1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Raised1, value), ::TYPES[89/*Fuse.UserEventHandler*/]);
}

// internal static Fuse.UserEventDispatch GetByName(Uno.UX.Selector name) [static] :505
UserEventDispatch* UserEventDispatch::GetByName(::g::Uno::UX::Selector name)
{
    uStackFrame __("Fuse.UserEventDispatch", "GetByName(Uno.UX.Selector)");
    UserEventDispatch_typeof()->Init();
    bool ret2;
    UserEventDispatch* current;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(UserEventDispatch::_userEvents()), uCRef(name), (void**)(&current), &ret2), ret2))
        return current;

    UserEventDispatch* ue = UserEventDispatch::New1();
    ue->Name(name);
    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(UserEventDispatch::_userEvents()), uCRef(name), ue);
    return ue;
}

// public generated UserEventDispatch New() [static] :496
UserEventDispatch* UserEventDispatch::New1()
{
    UserEventDispatch* obj1 = (UserEventDispatch*)uNew(UserEventDispatch_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.UserEvents/0.40.8/$.uno
// ----------------------------------------------------------

// public delegate void UserEventHandler(object sender, Fuse.UserEventArgs args) :494
uDelegateType* UserEventHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.UserEventHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::UserEventArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public interfacemodifiers class Visual :4872
// {
// static Visual() :7015
static void Visual__cctor_1_fn(uType* __type)
{
    Visual::_emptyChildren_ = (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[90/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Fuse.Node>*/], uArray::New(::TYPES[91/*Fuse.Node[]*/], 0)));
    Visual::_isContextEnabledChangedHandle_ = ::g::Fuse::Properties::CreateHandle();
    Visual::_isEnabledName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[76/*"IsEnabled"*/]);
    Visual::_isVisibleChangedHandle_ = ::g::Fuse::Properties::CreateHandle();
    Visual::_layerProperty_ = ::g::Fuse::Properties::CreateHandle();
    Visual::_layoutRoleProperty_ = ::g::Fuse::Properties::CreateHandle();
    Visual::_resourcesHandle_ = ::g::Fuse::Properties::CreateHandle();
    Visual::ParameterName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[59/*"Parameter"*/]);
    Visual::_worldTransformInvalidatedHandle_ = ::g::Fuse::Properties::CreateHandle();
    ::g::Fuse::Scripting::ScriptClass::Register(Visual_typeof(), uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[51/*Fuse.Scripting.ScriptMember[]*/], 3, (::g::Fuse::Scripting::ScriptProperty1*)::g::Fuse::Scripting::ScriptProperty1::New1(::TYPES[92/*Fuse.Scripting.ScriptProperty<Fuse.Visual, string>*/], ::STRINGS[59/*"Parameter"*/], uDelegate::New(::TYPES[93/*Uno.Func<Fuse.Visual, Uno.UX.Property<string>>*/], (void*)Visual__getParameterProperty_fn), ::STRINGS[77/*".notNull()....*/]), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[94/*Fuse.Scripting.ScriptMethod<Fuse.Visual>*/], ::STRINGS[78/*"onParameter...*/], uDelegate::New(::TYPES[95/*Uno.Action<Fuse.Scripting.Context, Fuse.Visual, object[]>*/], (void*)Visual__onParameterChanged_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[94/*Fuse.Scripting.ScriptMethod<Fuse.Visual>*/], ::STRINGS[79/*"bringIntoView"*/], uDelegate::New(::TYPES[95/*Uno.Action<Fuse.Scripting.Context, Fuse.Visual, object[]>*/], (void*)Visual__bringIntoView_fn), 2)));
}

static void Visual_build(uType* type)
{
    ::STRINGS[76] = uString::Const("IsEnabled");
    ::STRINGS[59] = uString::Const("Parameter");
    ::STRINGS[77] = uString::Const(".notNull().parseJson()");
    ::STRINGS[78] = uString::Const("onParameterChanged");
    ::STRINGS[79] = uString::Const("bringIntoView");
    ::STRINGS[80] = uString::Const("index");
    ::STRINGS[81] = uString::Const("Layout was invalidated while performing layout");
    ::STRINGS[82] = uString::Const("Invalid call to RearrangeMarginBox");
    ::TYPES[90] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[91] = ::g::Fuse::Node_typeof()->Array();
    ::TYPES[50] = ::g::Uno::Type_typeof();
    ::TYPES[51] = ::g::Fuse::Scripting::ScriptMember_typeof()->Array();
    ::TYPES[92] = ::g::Fuse::Scripting::ScriptProperty1_typeof()->MakeType(Visual_typeof(), ::g::Uno::String_typeof());
    ::TYPES[93] = ::g::Uno::Func1_typeof()->MakeType(Visual_typeof(), ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()));
    ::TYPES[94] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(Visual_typeof());
    ::TYPES[95] = ::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), Visual_typeof(), uObject_typeof()->Array());
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[96] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Scripting::Function_typeof());
    ::TYPES[97] = ::g::Fuse::Scripting::IScriptObject_typeof();
    ::TYPES[10] = uObject_typeof()->Array();
    ::TYPES[98] = ::g::Fuse::IDataProvider_typeof();
    ::TYPES[69] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[99] = ::g::Uno::Int_typeof()->Array();
    ::TYPES[100] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(uObject_typeof(), Visual__InteractionItem_typeof());
    ::TYPES[6] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(Visual_typeof());
    ::TYPES[101] = ::g::Fuse::Transform_typeof();
    ::TYPES[56] = ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof());
    ::TYPES[102] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(uObject_typeof(), Visual__InteractionItem_typeof());
    ::TYPES[103] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(uObject_typeof(), Visual__InteractionItem_typeof());
    ::TYPES[104] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(uObject_typeof());
    ::TYPES[105] = ::g::Uno::Comparison_typeof()->MakeType(Visual_typeof());
    ::TYPES[106] = ::g::Fuse::FastProperty1Link1_typeof();
    ::TYPES[107] = ::g::Fuse::FastProperty2Link1_typeof();
    ::TYPES[13] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    ::TYPES[15] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    ::TYPES[8] = ::g::Fuse::IViewport_typeof();
    ::TYPES[108] = ::g::Fuse::HitTestCallback_typeof();
    ::TYPES[109] = ::g::Uno::Collections::HashSet_typeof()->MakeType(Visual_typeof());
    ::TYPES[14] = ::g::Fuse::Node_typeof();
    ::TYPES[110] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[111] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[63] = ::g::Uno::EventHandler_typeof();
    ::TYPES[112] = ::g::Uno::EventArgs_typeof();
    ::TYPES[12] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[113] = ::g::Fuse::IBeginRemoveVisualListener_typeof();
    ::TYPES[114] = ::g::Fuse::IParentObserver_typeof();
    ::TYPES[54] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[115] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Fuse::Node_typeof());
    ::TYPES[116] = ::g::Fuse::ITemplateObserver_typeof();
    ::TYPES[75] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Transform_typeof());
    ::TYPES[32] = ::g::Fuse::ICommonViewport_typeof();
    ::TYPES[117] = ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), uObject_typeof());
    ::TYPES[118] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Resource_typeof());
    ::TYPES[119] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Resource_typeof());
    ::TYPES[3] = ::g::Uno::Action_typeof();
    ::TYPES[120] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[121] = Visual_typeof()->MakeMethod(1, Visual_typeof());
    ::TYPES[122] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Uno::UX::Resource_typeof());
    ::TYPES[123] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::Resource_typeof());
    ::TYPES[124] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    ::TYPES[125] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::Template_typeof());
    ::TYPES[1] = ::g::Uno::Collections::List_typeof()->MakeType(Visual_typeof());
    ::TYPES[126] = ::g::Fuse::RequestBringIntoViewHandler_typeof();
    type->SetPrecalc(
        ::g::Fuse::FastProperty1Link1_typeof()->MakeType(type->U(0)),
        ::g::Fuse::FastProperty2Link1_typeof()->MakeType(type->U(0)),
        Visual_typeof()->MakeMethod(1, type->U(0)),
        Visual_typeof()->MakeMethod(1, type->U(0)),
        Visual_typeof()->MakeMethod(1, type->U(0)),
        ::g::Fuse::FastProperty1Link1_typeof()->MakeType(type->U(0)),
        ::g::Fuse::FastProperty2Link1_typeof()->MakeType(type->U(0)),
        Visual_typeof()->MakeMethod(1, type->U(0)),
        Visual_typeof()->MakeMethod(1, type->U(0)),
        Visual_typeof()->MakeMethod(1, type->U(0)),
        Visual_typeof()->MakeMethod(1, type->U(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Visual_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Visual_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Visual_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(Visual_type, interface3),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(Visual_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(Visual_type, interface5),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(Visual_type, interface6),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(Visual_type, interface7));
    type->SetFields(13,
        ::g::Fuse::LayoutParams_typeof(), offsetof(::g::Fuse::Visual, _ambLayoutParams), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Visual, _ambMargin), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Visual, _ambPosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Visual, _cachedRenderTargetSize), 0,
        uObject_typeof(), offsetof(::g::Fuse::Visual, _children), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Visual, _drawCost), 0,
        ::g::Fuse::FastProperty1Link_typeof(), offsetof(::g::Fuse::Visual, _fastProperties1), 0,
        ::g::Fuse::FastProperty2Link_typeof(), offsetof(::g::Fuse::Visual, _fastProperties2), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Visual, _fastPropertyBits1), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Visual, _fastPropertyBits2), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Visual, _firstNonUnderlay), 0,
        Visual_typeof(), offsetof(::g::Fuse::Visual, _focusDelegate), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Visual, _hasMarginBox), 0,
        ::g::Fuse::VisualBounds_typeof(), offsetof(::g::Fuse::Visual, _hitTestBoundsCache), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(uObject_typeof(), Visual__InteractionItem_typeof()), offsetof(::g::Fuse::Visual, _interactions), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Visual, _isFocusable), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Visual, _isHitTestBoundsCacheValid), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Visual, _isVisibleCached), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Visual, _lastInvalidate), 0,
        ::g::Fuse::InvalidateLayoutReason_typeof(), offsetof(::g::Fuse::Visual, _layoutDirty), 0,
        ::g::Fuse::FastMatrix_typeof(), offsetof(::g::Fuse::Visual, _localTransform), 0,
        ::g::Fuse::FastMatrix_typeof(), offsetof(::g::Fuse::Visual, _localTransformInverse), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Visual, _nodebits), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Visual, _nodeZOrders), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Visual, _observerCount), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Visual, _parameter), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Scripting::Function_typeof()), offsetof(::g::Fuse::Visual, _parameterListeners), 0,
        Visual__ParameterProperty_typeof(), offsetof(::g::Fuse::Visual, _parameterProperty), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Visual, _sortedZOrder), 0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Template_typeof()), offsetof(::g::Fuse::Visual, _templates), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Visual, _transformCount), 0,
        ::g::Fuse::IViewport_typeof(), offsetof(::g::Fuse::Visual, _viewport), 0,
        ::g::Fuse::FastMatrix_typeof(), offsetof(::g::Fuse::Visual, _worldTransform), 0,
        ::g::Fuse::FastMatrix_typeof(), offsetof(::g::Fuse::Visual, _worldTransformInverse), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Visual, _zOffset), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(Visual_typeof()), offsetof(::g::Fuse::Visual, _zOrder), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Visual, ZLayer), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Visual, ZOffsetFixed), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Visual, ZOffsetNatural), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Visual, IsInteractingChanged1), 0,
        ::g::Fuse::RequestBringIntoViewHandler_typeof(), offsetof(::g::Fuse::Visual, RequestBringIntoView1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Visual, ZOrderChanged1), 0,
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof()), (uintptr_t)&::g::Fuse::Visual::_emptyChildren_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Visual::_isContextEnabledChangedHandle_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Visual::_isEnabledName_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Visual::_isVisibleChangedHandle_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Visual::_layerProperty_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Visual::_layoutRoleProperty_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::Visual::_performingLayout_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Visual::_resourcesHandle_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Visual::_worldTransformInvalidatedHandle_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Visual::ParameterName_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("ParameterName", 64));
    type->Reflection.SetFunctions(84,
        new uFunction("get_AbsoluteZoom", NULL, (void*)Visual__get_AbsoluteZoom_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("Add", NULL, (void*)Visual__Add1_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("AddDrawCost", NULL, (void*)Visual__AddDrawCost_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("ArrangeMarginBox", NULL, (void*)Visual__ArrangeMarginBox_fn, 0, false, ::g::Uno::Float2_typeof(), 2, ::g::Uno::Float2_typeof(), ::g::Fuse::LayoutParams_typeof()),
        new uFunction("BeginInteraction", NULL, (void*)Visual__BeginInteraction_fn, 0, false, uVoid_typeof(), 2, uObject_typeof(), ::g::Uno::Action_typeof()),
        new uFunction("BeginRemoveChild", NULL, (void*)Visual__BeginRemoveChild_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Uno::Action_typeof()),
        new uFunction("BeginRemoveVisual", NULL, (void*)Visual__BeginRemoveVisual_fn, 0, false, uVoid_typeof(), 2, Visual_typeof(), ::g::Uno::Action_typeof()),
        new uFunction("BringIntoView", NULL, (void*)Visual__BringIntoView_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("BringToFront", NULL, (void*)Visual__BringToFront_fn, 0, false, uVoid_typeof(), 1, Visual_typeof()),
        new uFunction("CancelInteractions", NULL, (void*)Visual__CancelInteractions_fn, 0, false, uVoid_typeof(), 1, Visual__CancelInteractionsType_typeof()),
        new uFunction("get_Children", NULL, (void*)Visual__get_Children_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof()), 0),
        new uFunction("Draw", NULL, NULL, offsetof(Visual_type, fp_Draw), false, uVoid_typeof(), 1, ::g::Fuse::DrawContext_typeof()),
        new uFunction("get_DrawCost", NULL, (void*)Visual__get_DrawCost_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("DrawSelection", NULL, NULL, offsetof(Visual_type, fp_DrawSelection), false, uVoid_typeof(), 1, ::g::Fuse::DrawContext_typeof()),
        new uFunction("EndInteraction", NULL, (void*)Visual__EndInteraction_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("FindByType`1", type, (void*)Visual__FindByType_fn, 0, false, type->U(0), 0),
        new uFunction("FindTemplate", NULL, (void*)Visual__FindTemplate_fn, 0, false, ::g::Uno::UX::Template_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("FindViewport", NULL, (void*)Visual__FindViewport_fn, 0, false, ::g::Fuse::IViewport_typeof(), 0),
        new uFunction("FirstChild`1", type, (void*)Visual__FirstChild_fn, 0, false, type->U(0), 0),
        new uFunction("get_FirstVisualChild", NULL, (void*)Visual__get_FirstVisualChild_fn, 0, false, Visual_typeof(), 0),
        new uFunction("GetHitWindowPoint", NULL, (void*)Visual__GetHitWindowPoint_fn, 0, false, Visual_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("GetMarginSize", NULL, NULL, offsetof(Visual_type, fp_GetMarginSize), false, ::g::Uno::Float2_typeof(), 1, ::g::Fuse::LayoutParams_typeof()),
        new uFunction("GetNearestAncestorOfType`1", type, (void*)Visual__GetNearestAncestorOfType_fn, 0, false, type->U(0), 0),
        new uFunction("GetTransformTo", NULL, (void*)Visual__GetTransformTo_fn, 0, false, ::g::Uno::Float4x4_typeof(), 1, Visual_typeof()),
        new uFunction("GetVisualChild", NULL, (void*)Visual__GetVisualChild_fn, 0, false, Visual_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("GetZOrderChild", NULL, (void*)Visual__GetZOrderChild_fn, 0, false, Visual_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_HasChildren", NULL, (void*)Visual__get_HasChildren_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_HasPendingRemove", NULL, (void*)Visual__get_HasPendingRemove_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_HasVisualChildren", NULL, (void*)Visual__get_HasVisualChildren_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("HitTest", NULL, (void*)Visual__HitTest_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::HitTestContext_typeof()),
        new uFunction("get_HitTestBounds", NULL, NULL, offsetof(Visual_type, fp_get_HitTestBounds), false, ::g::Fuse::VisualBounds_typeof(), 0),
        new uFunction("Insert", NULL, (void*)Visual__Insert1_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Fuse::Node_typeof()),
        new uFunction("InvalidateLayout", NULL, (void*)Visual__InvalidateLayout_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::InvalidateLayoutReason_typeof()),
        new uFunction("InvalidateVisual", NULL, (void*)Visual__InvalidateVisual_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("InvalidateVisualComposition", NULL, (void*)Visual__InvalidateVisualComposition_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_IsContextEnabled", NULL, (void*)Visual__get_IsContextEnabled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("add_IsContextEnabledChanged", NULL, (void*)Visual__add_IsContextEnabledChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_IsContextEnabledChanged", NULL, (void*)Visual__remove_IsContextEnabledChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("get_IsEnabled", NULL, (void*)Visual__get_IsEnabled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsEnabled", NULL, (void*)Visual__set_IsEnabled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_IsInteracting", NULL, (void*)Visual__get_IsInteracting_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("add_IsInteractingChanged", NULL, (void*)Visual__add_IsInteractingChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_IsInteractingChanged", NULL, (void*)Visual__remove_IsInteractingChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("get_IsLocalVisible", NULL, NULL, offsetof(Visual_type, fp_get_IsLocalVisible), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsVisible", NULL, (void*)Visual__get_IsVisible_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("add_IsVisibleChanged", NULL, (void*)Visual__add_IsVisibleChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_IsVisibleChanged", NULL, (void*)Visual__remove_IsVisibleChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("get_LastVisualChild", NULL, (void*)Visual__get_LastVisualChild_fn, 0, false, Visual_typeof(), 0),
        new uFunction("get_Layer", NULL, (void*)Visual__get_Layer_fn, 0, false, ::g::Fuse::Layer_typeof(), 0),
        new uFunction("set_Layer", NULL, (void*)Visual__set_Layer_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Layer_typeof()),
        new uFunction("get_LayoutRole", NULL, (void*)Visual__get_LayoutRole_fn, 0, false, ::g::Fuse::LayoutRole_typeof(), 0),
        new uFunction("set_LayoutRole", NULL, (void*)Visual__set_LayoutRole_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::LayoutRole_typeof()),
        new uFunction("get_LocalBounds", NULL, NULL, offsetof(Visual_type, fp_get_LocalBounds), false, ::g::Uno::Geometry::Box_typeof(), 0),
        new uFunction("get_LocalRenderBounds", NULL, NULL, offsetof(Visual_type, fp_get_LocalRenderBounds), false, ::g::Fuse::VisualBounds_typeof(), 0),
        new uFunction("LocalToParent", NULL, (void*)Visual__LocalToParent_fn, 0, false, ::g::Uno::Float2_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_LocalTransform", NULL, (void*)Visual__get_LocalTransform_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("OnIsSelectedChanged", NULL, (void*)Visual__OnIsSelectedChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("OnPropertyChanged", NULL, NULL, offsetof(Visual_type, fp_OnPropertyChanged2), false, uVoid_typeof(), 2, ::g::Uno::UX::PropertyObject_typeof(), ::g::Uno::UX::Selector_typeof()),
        new uFunction("get_Parameter", NULL, (void*)Visual__get_Parameter_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Parameter", NULL, (void*)Visual__set_Parameter_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Remove", NULL, (void*)Visual__Remove1_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("RemoveAllChildren`1", type, (void*)Visual__RemoveAllChildren_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("RemoveDrawCost", NULL, (void*)Visual__RemoveDrawCost_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("add_RequestBringIntoView", NULL, (void*)Visual__add_RequestBringIntoView_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::RequestBringIntoViewHandler_typeof()),
        new uFunction("remove_RequestBringIntoView", NULL, (void*)Visual__remove_RequestBringIntoView_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::RequestBringIntoViewHandler_typeof()),
        new uFunction("get_Resources", NULL, (void*)Visual__get_Resources_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Resource_typeof()), 0),
        new uFunction("SendToBack", NULL, (void*)Visual__SendToBack_fn, 0, false, uVoid_typeof(), 1, Visual_typeof()),
        new uFunction("SetResource", NULL, (void*)Visual__SetResource_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), uObject_typeof()),
        new uFunction("get_SnapToPixels", NULL, (void*)Visual__get_SnapToPixels_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_SnapToPixels", NULL, (void*)Visual__set_SnapToPixels_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Templates", NULL, (void*)Visual__get_Templates_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Template_typeof()), 0),
        new uFunction("TryParentToLocal", NULL, (void*)Visual__TryParentToLocal_fn, 0, false, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()->ByRef()),
        new uFunction("get_ValidFrameCount", NULL, (void*)Visual__get_ValidFrameCount_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_Viewport", NULL, (void*)Visual__get_Viewport_fn, 0, false, ::g::Fuse::IViewport_typeof(), 0),
        new uFunction("get_VisualContext", NULL, NULL, offsetof(Visual_type, fp_get_VisualContext), false, ::g::Fuse::VisualContext_typeof(), 0),
        new uFunction("WindowToLocal", NULL, (void*)Visual__WindowToLocal_fn, 0, false, ::g::Uno::Float2_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_WorldPosition", NULL, (void*)Visual__get_WorldPosition_fn, 0, false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("get_WorldTransform", NULL, (void*)Visual__get_WorldTransform_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("add_WorldTransformInvalidated", NULL, (void*)Visual__add_WorldTransformInvalidated_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_WorldTransformInvalidated", NULL, (void*)Visual__remove_WorldTransformInvalidated_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("get_WorldTransformInverse", NULL, (void*)Visual__get_WorldTransformInverse_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("get_ZOffset", NULL, (void*)Visual__get_ZOffset_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_ZOffset", NULL, (void*)Visual__set_ZOffset_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_ZOrderChildCount", NULL, (void*)Visual__get_ZOrderChildCount_fn, 0, false, ::g::Uno::Int_typeof(), 0));
}

Visual_type* Visual_typeof()
{
    static uSStrong<Visual_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Node_typeof();
    options.FieldCount = 65;
    options.InterfaceCount = 8;
    options.MethodTypeCount = 1;
    options.PrecalcCount = 11;
    options.ObjectSize = sizeof(Visual);
    options.TypeSize = sizeof(Visual_type);
    type = (Visual_type*)uClassType::New("Fuse.Visual", options);
    type->fp_build_ = Visual_build;
    type->fp_cctor_ = Visual__cctor_1_fn;
    type->fp_get_AbsoluteViewportOrigin = Visual__get_AbsoluteViewportOrigin_fn;
    type->fp_AppendSubtreeData = (void(*)(::g::Fuse::Node*, ::g::Uno::Collections::List*))Visual__AppendSubtreeData_fn;
    type->fp_CalcAreChildrenFlat = Visual__CalcAreChildrenFlat_fn;
    type->fp_CalcIsLocalFlat = Visual__CalcIsLocalFlat_fn;
    type->fp_get_CanAdjustMarginBox = Visual__get_CanAdjustMarginBox_fn;
    type->fp_DrawSelection = Visual__DrawSelection_fn;
    type->fp_GetMarginSize = Visual__GetMarginSize_fn;
    type->fp_get_HitTestBounds = Visual__get_HitTestBounds_fn;
    type->fp_get_HitTestChildrenBounds = Visual__get_HitTestChildrenBounds_fn;
    type->fp_get_HitTestLocalBounds = Visual__get_HitTestLocalBounds_fn;
    type->fp_get_HitTestTransform = Visual__get_HitTestTransform_fn;
    type->fp_InvalidateLocalTransform = Visual__InvalidateLocalTransform_fn;
    type->fp_get_IsLocalVisible = Visual__get_IsLocalVisible_fn;
    type->fp_IsMarginBoxDependent = Visual__IsMarginBoxDependent_fn;
    type->fp_get_LocalBounds = Visual__get_LocalBounds_fn;
    type->fp_get_LocalRenderBounds = Visual__get_LocalRenderBounds_fn;
    type->fp_OnAdjustMarginBoxPosition = Visual__OnAdjustMarginBoxPosition_fn;
    type->fp_OnArrangeMarginBox = Visual__OnArrangeMarginBox_fn;
    type->fp_OnChildAdded = Visual__OnChildAdded_fn;
    type->fp_OnChildRemoved = Visual__OnChildRemoved_fn;
    type->fp_OnHitTest = Visual__OnHitTest_fn;
    type->fp_OnInvalidateLayout = Visual__OnInvalidateLayout_fn;
    type->fp_OnInvalidateRenderBounds = Visual__OnInvalidateRenderBounds_fn;
    type->fp_OnInvalidateVisual = Visual__OnInvalidateVisual_fn;
    type->fp_OnInvalidateVisualComposition = Visual__OnInvalidateVisualComposition_fn;
    type->fp_OnInvalidateWorldTransform = Visual__OnInvalidateWorldTransform_fn;
    type->fp_OnIsVisibleChanged = Visual__OnIsVisibleChanged_fn;
    type->fp_OnPropertyChanged2 = Visual__OnPropertyChanged2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Visual__OnRooted_fn;
    type->fp_OnSubtreeDataContextChanged = (void(*)(::g::Fuse::Node*))Visual__OnSubtreeDataContextChanged_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Visual__OnUnrooted_fn;
    type->fp_OnZOrderInvalidated = Visual__OnZOrderInvalidated_fn;
    type->fp_get_ParentWorldTransformInternal = Visual__get_ParentWorldTransformInternal_fn;
    type->fp_PrependImplicitTransform = Visual__PrependImplicitTransform_fn;
    type->fp_PrependInverseTransformOrigin = Visual__PrependInverseTransformOrigin_fn;
    type->fp_PrependTransformOrigin = Visual__PrependTransformOrigin_fn;
    type->fp_SubtreeToString1 = (void(*)(::g::Fuse::Node*, ::g::Uno::Text::StringBuilder*, int*))Visual__SubtreeToString1_fn;
    type->fp_TryGetResource = (void(*)(::g::Fuse::Node*, uString*, uDelegate*, uObject**, bool*))Visual__TryGetResource_fn;
    type->fp_VisitSubtree = (void(*)(::g::Fuse::Node*, uDelegate*))Visual__VisitSubtree_fn;
    type->fp_get_VisualContext = Visual__get_VisualContext_fn;
    type->interface6.fp_Clear = (void(*)(uObject*))Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface6.fp_Contains = (void(*)(uObject*, void*, bool*))Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface4.fp_RemoveAt = (void(*)(uObject*, int*))Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface7.fp_GetEnumerator = (void(*)(uObject*, uObject**))Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface6.fp_get_Count = (void(*)(uObject*, int*))Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface4.fp_get_Item = (void(*)(uObject*, int*, uTRef))Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface4.fp_Insert = (void(*)(uObject*, int*, void*))Visual__Insert1_fn;
    type->interface5.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))Visual__OnPropertyChanged2_fn;
    type->interface6.fp_Add = (void(*)(uObject*, void*))Visual__Add1_fn;
    type->interface6.fp_Remove = (void(*)(uObject*, void*, bool*))Visual__Remove1_fn;
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

// protected generated Visual() :4872
void Visual__ctor_2_fn(Visual* __this)
{
    __this->ctor_2();
}

// private bool get__areChildrenFlat() :6145
void Visual__get__areChildrenFlat_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->_areChildrenFlat();
}

// private void set__areChildrenFlat(bool value) :6146
void Visual__set__areChildrenFlat_fn(Visual* __this, bool* value)
{
    __this->_areChildrenFlat(*value);
}

// private bool get__areChildrenFlatCached() :6139
void Visual__get__areChildrenFlatCached_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->_areChildrenFlatCached();
}

// private void set__areChildrenFlatCached(bool value) :6140
void Visual__set__areChildrenFlatCached_fn(Visual* __this, bool* value)
{
    __this->_areChildrenFlatCached(*value);
}

// private bool get__isLocalFlat() :6109
void Visual__get__isLocalFlat_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->_isLocalFlat();
}

// private void set__isLocalFlat(bool value) :6110
void Visual__set__isLocalFlat_fn(Visual* __this, bool* value)
{
    __this->_isLocalFlat(*value);
}

// private bool get__isLocalFlatCached() :6104
void Visual__get__isLocalFlatCached_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->_isLocalFlatCached();
}

// private void set__isLocalFlatCached(bool value) :6105
void Visual__set__isLocalFlatCached_fn(Visual* __this, bool* value)
{
    __this->_isLocalFlatCached(*value);
}

// protected virtual float2 get_AbsoluteViewportOrigin() :6733
void Visual__get_AbsoluteViewportOrigin_fn(Visual* __this, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Visual", "get_AbsoluteViewportOrigin()");

    if (__this->Parent() != NULL)
        return *__retval = uPtr(__this->Parent())->AbsoluteViewportOrigin(), void();

    return *__retval = ::g::Uno::Float2__New1(0.0f), void();
}

// public float get_AbsoluteZoom() :6544
void Visual__get_AbsoluteZoom_fn(Visual* __this, float* __retval)
{
    *__retval = __this->AbsoluteZoom();
}

// public void Add(Fuse.Node item) :5130
void Visual__Add1_fn(Visual* __this, ::g::Fuse::Node* item)
{
    __this->Add1(item);
}

// public void AddDrawCost(double cost) :7547
void Visual__AddDrawCost_fn(Visual* __this, double* cost)
{
    __this->AddDrawCost(*cost);
}

// private void AddEventHandler(Fuse.PropertyHandle ph, Fuse.Visual.VisualBits ne, object handler) :5412
void Visual__AddEventHandler_fn(Visual* __this, ::g::Fuse::PropertyHandle* ph, int* ne, uObject* handler)
{
    __this->AddEventHandler(ph, *ne, handler);
}

// private void AddParameterChangedListener(Fuse.Scripting.Function func) :6963
void Visual__AddParameterChangedListener_fn(Visual* __this, ::g::Fuse::Scripting::Function* func)
{
    __this->AddParameterChangedListener(func);
}

// internal void AdjustMarginBoxPosition(float2 position) :6718
void Visual__AdjustMarginBoxPosition_fn(Visual* __this, ::g::Uno::Float2* position)
{
    __this->AdjustMarginBoxPosition(*position);
}

// protected internal override sealed void AppendSubtreeData(Uno.Collections.List<object> result) :7567
void Visual__AppendSubtreeData_fn(Visual* __this, ::g::Uno::Collections::List* result)
{
    uStackFrame __("Fuse.Visual", "AppendSubtreeData(Uno.Collections.List<object>)");
    ::g::Fuse::Node* ret9;

    for (int i = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])) - 1; i >= 0; i--)
    {
        uObject* dp = uAs<uObject*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(__this->Children()), ::TYPES[69/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret9), ret9), ::TYPES[98/*Fuse.IDataProvider*/]);

        if (dp != NULL)
        {
            uObject* data = ::g::Fuse::IDataProvider::Data(uInterface(uPtr(dp), ::TYPES[98/*Fuse.IDataProvider*/]));

            if (data != NULL)
                ::g::Uno::Collections::List__Add_fn(uPtr(result), data);
        }
    }
}

// internal bool get_AreChildrenFlat() :6152
void Visual__get_AreChildrenFlat_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->AreChildrenFlat();
}

// public float2 ArrangeMarginBox(float2 position, Fuse.LayoutParams lp) :6685
void Visual__ArrangeMarginBox_fn(Visual* __this, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ArrangeMarginBox(*position, *lp);
}

// private static void AssignZOrder(Uno.Collections.IList<Fuse.Node> nodes) :7901
void Visual__AssignZOrder_fn(uObject* nodes)
{
    Visual::AssignZOrder(nodes);
}

// public void BeginInteraction(object id, Uno.Action cancelled) :5930
void Visual__BeginInteraction_fn(Visual* __this, uObject* id, uDelegate* cancelled)
{
    __this->BeginInteraction(id, cancelled);
}

// public void BeginRemoveChild(Fuse.Node n, [Uno.Action then]) :4908
void Visual__BeginRemoveChild_fn(Visual* __this, ::g::Fuse::Node* n, uDelegate* then)
{
    __this->BeginRemoveChild(n, then);
}

// public void BeginRemoveVisual(Fuse.Visual child, [Uno.Action then]) :4875
void Visual__BeginRemoveVisual_fn(Visual* __this, Visual* child, uDelegate* then)
{
    __this->BeginRemoveVisual(child, then);
}

// private static void bringIntoView(Fuse.Scripting.Context c, Fuse.Visual n, object[] args) :7047
void Visual__bringIntoView_fn(::g::Fuse::Scripting::Context* c, Visual* n, uArray* args)
{
    Visual::bringIntoView(c, n, args);
}

// public void BringIntoView() :6754
void Visual__BringIntoView_fn(Visual* __this)
{
    __this->BringIntoView();
}

// public void BringToFront(Fuse.Visual item) :7851
void Visual__BringToFront_fn(Visual* __this, Visual* item)
{
    __this->BringToFront(item);
}

// internal virtual bool CalcAreChildrenFlat() :6163
void Visual__CalcAreChildrenFlat_fn(Visual* __this, bool* __retval)
{
    uStackFrame __("Fuse.Visual", "CalcAreChildrenFlat()");

    for (int i = 0; i < __this->ZOrderChildCount(); ++i)
    {
        Visual* v = __this->GetZOrderChild(i);

        if (!uPtr(v)->AreChildrenFlat() || !uPtr(v)->IsLocalFlat())
            return *__retval = false, void();
    }

    return *__retval = true, void();
}

// internal virtual bool CalcIsLocalFlat() :6127
void Visual__CalcIsLocalFlat_fn(Visual* __this, bool* __retval)
{
    uStackFrame __("Fuse.Visual", "CalcIsLocalFlat()");
    ::g::Fuse::Node* ret15;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
    {
        ::g::Fuse::Transform* t = uAs< ::g::Fuse::Transform*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(__this->Children()), ::TYPES[69/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret15), ret15), ::TYPES[101/*Fuse.Transform*/]);

        if ((t != NULL) && !uPtr(t)->IsFlat())
            return *__retval = false, void();
    }

    return *__retval = true, void();
}

// internal Fuse.VisualBounds CalcRenderBoundsInParentSpace() :7389
void Visual__CalcRenderBoundsInParentSpace_fn(Visual* __this, ::g::Fuse::VisualBounds** __retval)
{
    *__retval = __this->CalcRenderBoundsInParentSpace();
}

// private Fuse.FastMatrix CalcWorldTransform() :7265
void Visual__CalcWorldTransform_fn(Visual* __this, ::g::Fuse::FastMatrix** __retval)
{
    *__retval = __this->CalcWorldTransform();
}

// internal virtual bool get_CanAdjustMarginBox() :6723
void Visual__get_CanAdjustMarginBox_fn(Visual* __this, bool* __retval)
{
    uStackFrame __("Fuse.Visual", "get_CanAdjustMarginBox()");
    return *__retval = false, void();
}

// public void CancelInteractions([Fuse.Visual.CancelInteractionsType how]) :5962
void Visual__CancelInteractions_fn(Visual* __this, int* how)
{
    __this->CancelInteractions(*how);
}

// internal void CancelPendingRemove() :4930
void Visual__CancelPendingRemove_fn(Visual* __this)
{
    __this->CancelPendingRemove();
}

// public Uno.Collections.IList<Fuse.Node> get_Children() :5022
void Visual__get_Children_fn(Visual* __this, uObject** __retval)
{
    *__retval = __this->Children();
}

// private void Clear(Fuse.FastProperty1 p) :5522
void Visual__Clear_fn(Visual* __this, int* p)
{
    __this->Clear(*p);
}

// private void Clear(Fuse.FastProperty2 p) :5674
void Visual__Clear1_fn(Visual* __this, int* p)
{
    __this->Clear1(*p);
}

// internal void ClearBit(Fuse.FastProperty1 p) :5538
void Visual__ClearBit_fn(Visual* __this, int* p)
{
    __this->ClearBit(*p);
}

// internal void ClearBit(Fuse.FastProperty2 p) :5690
void Visual__ClearBit1_fn(Visual* __this, int* p)
{
    __this->ClearBit1(*p);
}

// private void ClearBit(Fuse.Visual.VisualBits nb) :5399
void Visual__ClearBit2_fn(Visual* __this, int* nb)
{
    __this->ClearBit2(*nb);
}

// internal void ConcludePendingRemove() :4938
void Visual__ConcludePendingRemove_fn(Visual* __this)
{
    __this->ConcludePendingRemove();
}

// public double get_DrawCost() :7545
void Visual__get_DrawCost_fn(Visual* __this, double* __retval)
{
    *__retval = __this->DrawCost();
}

// private void DrawLocalRect(Fuse.DrawContext dc, Uno.Rect rect, float lineWidth, float4 color, float4x4 localToClipTransform) :5345
void Visual__DrawLocalRect_fn(Visual* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* rect, float* lineWidth, ::g::Uno::Float4* color, ::g::Uno::Float4x4* localToClipTransform)
{
    __this->DrawLocalRect(dc, *rect, *lineWidth, *color, *localToClipTransform);
}

// protected void DrawLocalSelectionRect(Fuse.DrawContext dc, Uno.Rect rect) :5350
void Visual__DrawLocalSelectionRect_fn(Visual* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* rect)
{
    __this->DrawLocalSelectionRect(dc, *rect);
}

// public virtual void DrawSelection(Fuse.DrawContext dc) :5360
void Visual__DrawSelection_fn(Visual* __this, ::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Visual", "DrawSelection(Fuse.DrawContext)");
    __this->DrawLocalSelectionRect(dc, uPtr(__this->LocalRenderBounds())->FlatRect());
}

// private void EmitZOrderChanged() :7979
void Visual__EmitZOrderChanged_fn(Visual* __this)
{
    __this->EmitZOrderChanged();
}

// public void EndInteraction(object id) :5939
void Visual__EndInteraction_fn(Visual* __this, uObject* id)
{
    __this->EndInteraction(id);
}

// internal void EnsureSortedZOrder() :7928
void Visual__EnsureSortedZOrder_fn(Visual* __this)
{
    __this->EnsureSortedZOrder();
}

// private void EnsureZOrder() :7944
void Visual__EnsureZOrder_fn(Visual* __this)
{
    __this->EnsureZOrder();
}

// private Fuse.FastProperty1Link<T> Find<T>(Fuse.FastProperty1 p) :5585
void Visual__Find_fn(Visual* __this, uType* __type, int* p, ::g::Fuse::FastProperty1Link1** __retval)
{
    *__retval = __this->Find(__type, *p);
}

// private Fuse.FastProperty2Link<T> Find<T>(Fuse.FastProperty2 p) :5737
void Visual__Find1_fn(Visual* __this, uType* __type, int* p, ::g::Fuse::FastProperty2Link1** __retval)
{
    *__retval = __this->Find1(__type, *p);
}

// public T FindByType<T>() :7648
void Visual__FindByType_fn(Visual* __this, uType* __type, Visual** __retval)
{
    *__retval = __this->FindByType(__type);
}

// private Fuse.FastProperty1Link FindPrevious(Fuse.FastProperty1 p) :5572
void Visual__FindPrevious_fn(Visual* __this, int* p, ::g::Fuse::FastProperty1Link** __retval)
{
    *__retval = __this->FindPrevious(*p);
}

// private Fuse.FastProperty2Link FindPrevious(Fuse.FastProperty2 p) :5724
void Visual__FindPrevious1_fn(Visual* __this, int* p, ::g::Fuse::FastProperty2Link** __retval)
{
    *__retval = __this->FindPrevious1(*p);
}

// public Uno.UX.Template FindTemplate(string key) :7457
void Visual__FindTemplate_fn(Visual* __this, uString* key, ::g::Uno::UX::Template** __retval)
{
    *__retval = __this->FindTemplate(key);
}

// public Fuse.IViewport FindViewport() :7687
void Visual__FindViewport_fn(Visual* __this, uObject** __retval)
{
    *__retval = __this->FindViewport();
}

// public T FirstChild<T>() :4992
void Visual__FirstChild_fn(Visual* __this, uType* __type, ::g::Fuse::Node** __retval)
{
    *__retval = __this->FirstChild(__type);
}

// public Fuse.Visual get_FirstVisualChild() :7781
void Visual__get_FirstVisualChild_fn(Visual* __this, Visual** __retval)
{
    *__retval = __this->FirstVisualChild();
}

// internal T Get<T>(Fuse.FastProperty1 p, T defaultValue) :5503
void Visual__Get_fn(Visual* __this, uType* __type, int* p, void* defaultValue, uTRef __retval)
{
    uType* __types[] = {
        __type->Precalced(3/*Fuse.Visual.Find<T>*/),
    };
    uStackFrame __("Fuse.Visual", "Get`1(Fuse.FastProperty1,T)");
    int p_ = *p;

    if (__this->HasBit(p_))
        return __retval.Store(uPtr((::g::Fuse::FastProperty1Link1*)__this->Find(__types[0], p_))->Value()), void();
    else 
        return __retval.Store(__type->U(0), defaultValue), void();
}

// internal T Get<T>(Fuse.FastProperty2 p, T defaultValue) :5655
void Visual__Get1_fn(Visual* __this, uType* __type, int* p, void* defaultValue, uTRef __retval)
{
    uType* __types[] = {
        __type->Precalced(4/*Fuse.Visual.Find<T>*/),
    };
    uStackFrame __("Fuse.Visual", "Get`1(Fuse.FastProperty2,T)");
    int p_ = *p;

    if (__this->HasBit1(p_))
        return __retval.Store(uPtr((::g::Fuse::FastProperty2Link1*)__this->Find1(__types[0], p_))->Value()), void();
    else 
        return __retval.Store(__type->U(0), defaultValue), void();
}

// public Fuse.Visual GetHitWindowPoint(float2 windowPoint) :5823
void Visual__GetHitWindowPoint_fn(Visual* __this, ::g::Uno::Float2* windowPoint, Visual** __retval)
{
    *__retval = __this->GetHitWindowPoint(*windowPoint);
}

// public virtual float2 GetMarginSize(Fuse.LayoutParams lp) :6389
void Visual__GetMarginSize_fn(Visual* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Visual", "GetMarginSize(Fuse.LayoutParams)");
    return *__retval = ::g::Uno::Float2__New1(0.0f), void();
}

// public T GetNearestAncestorOfType<T>() :7654
void Visual__GetNearestAncestorOfType_fn(Visual* __this, uType* __type, Visual** __retval)
{
    *__retval = __this->GetNearestAncestorOfType(__type);
}

// private static Uno.UX.Property<string> getParameterProperty(Fuse.Visual v) :7035
void Visual__getParameterProperty_fn(Visual* v, ::g::Uno::UX::Property1** __retval)
{
    *__retval = Visual::getParameterProperty(v);
}

// public float4x4 GetTransformTo(Fuse.Visual other) :7277
void Visual__GetTransformTo_fn(Visual* __this, Visual* other, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetTransformTo(other);
}

// private float4x4 GetTransformToAncestor(Fuse.Visual ancestor) :7306
void Visual__GetTransformToAncestor_fn(Visual* __this, Visual* ancestor, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->GetTransformToAncestor(ancestor);
}

// public Fuse.Visual GetVisualChild(int index) :7789
void Visual__GetVisualChild_fn(Visual* __this, int* index, Visual** __retval)
{
    *__retval = __this->GetVisualChild(*index);
}

// public Fuse.Visual GetZOrderChild(int index) :7830
void Visual__GetZOrderChild_fn(Visual* __this, int* index, Visual** __retval)
{
    *__retval = __this->GetZOrderChild(*index);
}

// internal bool HasBit(Fuse.FastProperty1 p) :5533
void Visual__HasBit_fn(Visual* __this, int* p, bool* __retval)
{
    *__retval = __this->HasBit(*p);
}

// internal bool HasBit(Fuse.FastProperty2 p) :5685
void Visual__HasBit1_fn(Visual* __this, int* p, bool* __retval)
{
    *__retval = __this->HasBit1(*p);
}

// private bool HasBit(Fuse.Visual.VisualBits nb) :5397
void Visual__HasBit2_fn(Visual* __this, int* nb, bool* __retval)
{
    *__retval = __this->HasBit2(*nb);
}

// public bool get_HasChildren() :4974
void Visual__get_HasChildren_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->HasChildren();
}

// private bool get_HasExplicitTransforms() :7115
void Visual__get_HasExplicitTransforms_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->HasExplicitTransforms();
}

// internal bool get_HasMarginBox() :6663
void Visual__get_HasMarginBox_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->HasMarginBox();
}

// public bool get_HasPendingRemove() :4947
void Visual__get_HasPendingRemove_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->HasPendingRemove();
}

// private bool get_HasResources() :6905
void Visual__get_HasResources_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->HasResources();
}

// public bool get_HasVisualChildren() :7777
void Visual__get_HasVisualChildren_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->HasVisualChildren();
}

// public void HitTest(Fuse.HitTestContext htc) :5780
void Visual__HitTest_fn(Visual* __this, ::g::Fuse::HitTestContext* htc)
{
    __this->HitTest(htc);
}

// public virtual Fuse.VisualBounds get_HitTestBounds() :5859
void Visual__get_HitTestBounds_fn(Visual* __this, ::g::Fuse::VisualBounds** __retval)
{
    uStackFrame __("Fuse.Visual", "get_HitTestBounds()");

    if (__this->_isHitTestBoundsCacheValid)
        return *__retval = __this->_hitTestBoundsCache, void();

    ::g::Fuse::VisualBounds* nb = ::g::Fuse::VisualBounds::Empty();

    if (__this->IsContextEnabled() && __this->IsVisible())
    {
        nb = uPtr(nb)->Merge(__this->HitTestLocalBounds(), NULL);
        nb = uPtr(nb)->Merge(__this->HitTestChildrenBounds(), NULL);
    }

    __this->_hitTestBoundsCache = nb;
    __this->_isHitTestBoundsCacheValid = true;
    return *__retval = nb, void();
}

// protected virtual Fuse.VisualBounds get_HitTestChildrenBounds() :5888
void Visual__get_HitTestChildrenBounds_fn(Visual* __this, ::g::Fuse::VisualBounds** __retval)
{
    uStackFrame __("Fuse.Visual", "get_HitTestChildrenBounds()");
    ::g::Fuse::VisualBounds* nb = ::g::Fuse::VisualBounds::Empty();

    for (int i = 0; i < __this->ZOrderChildCount(); ++i)
    {
        Visual* n = __this->GetZOrderChild(i);
        nb = uPtr(nb)->MergeChild(n, uPtr(n)->HitTestBounds());
    }

    return *__retval = nb, void();
}

// protected virtual Fuse.VisualBounds get_HitTestLocalBounds() :5880
void Visual__get_HitTestLocalBounds_fn(Visual* __this, ::g::Fuse::VisualBounds** __retval)
{
    uStackFrame __("Fuse.Visual", "get_HitTestLocalBounds()");
    return *__retval = ::g::Fuse::VisualBounds::Empty(), void();
}

// internal virtual Fuse.Visual.HitTestTransformMode get_HitTestTransform() :5772
void Visual__get_HitTestTransform_fn(Visual* __this, int* __retval)
{
    uStackFrame __("Fuse.Visual", "get_HitTestTransform()");

    if (__this->IsLocalFlat())
        return *__retval = 0, void();

    return *__retval = 1, void();
}

// protected float2 IfSnap(float2 p) :6511
void Visual__IfSnap_fn(Visual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->IfSnap(*p);
}

// protected float2 IfSnapDown(float2 p) :6536
void Visual__IfSnapDown_fn(Visual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->IfSnapDown(*p);
}

// protected float2 IfSnapUp(float2 p) :6516
void Visual__IfSnapUp_fn(Visual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->IfSnapUp(*p);
}

// public void Insert(int index, Fuse.Node item) :5175
void Visual__Insert1_fn(Visual* __this, int* index, ::g::Fuse::Node* item)
{
    __this->Insert1(*index, item);
}

// private void Insert<T>(Fuse.FastProperty1 p, T value) :5554
void Visual__Insert2_fn(Visual* __this, uType* __type, int* p, void* value)
{
    uType* __types[] = {
        __type->Precalced(5/*Fuse.FastProperty1Link<T>*/),
    };
    uStackFrame __("Fuse.Visual", "Insert`1(Fuse.FastProperty1,T)");
    ::g::Fuse::FastProperty1Link1* ret29;
    int p_ = *p;
    ::g::Fuse::FastProperty1Link1* nl = (::g::Fuse::FastProperty1Link1__New2_fn(__types[0], uCRef<int>(p_), value, &ret29), ret29);

    if (__this->_fastProperties1 == NULL)
        __this->_fastProperties1 = nl;
    else 
    {
        ::g::Fuse::FastProperty1Link* last = __this->_fastProperties1;

        while (uPtr(last)->Next != NULL)
            last = uPtr(last)->Next;

        uPtr(last)->Next = nl;
    }

    __this->SetBit(p_);
}

// private void Insert<T>(Fuse.FastProperty2 p, T value) :5706
void Visual__Insert3_fn(Visual* __this, uType* __type, int* p, void* value)
{
    uType* __types[] = {
        __type->Precalced(6/*Fuse.FastProperty2Link<T>*/),
    };
    uStackFrame __("Fuse.Visual", "Insert`1(Fuse.FastProperty2,T)");
    ::g::Fuse::FastProperty2Link1* ret30;
    int p_ = *p;
    ::g::Fuse::FastProperty2Link1* nl = (::g::Fuse::FastProperty2Link1__New2_fn(__types[0], uCRef<int>(p_), value, &ret30), ret30);

    if (__this->_fastProperties2 == NULL)
        __this->_fastProperties2 = nl;
    else 
    {
        ::g::Fuse::FastProperty2Link* last = __this->_fastProperties2;

        while (uPtr(last)->Next != NULL)
            last = uPtr(last)->Next;

        uPtr(last)->Next = nl;
    }

    __this->SetBit2(p_);
}

// private void InsertCleanup(Fuse.Node item) :5185
void Visual__InsertCleanup_fn(Visual* __this, ::g::Fuse::Node* item)
{
    __this->InsertCleanup(item);
}

// private void InsertImpl(int index, Fuse.Node item) :5191
void Visual__InsertImpl_fn(Visual* __this, int* index, ::g::Fuse::Node* item)
{
    __this->InsertImpl(*index, item);
}

// internal void InsertNodes(int index, Uno.Collections.IEnumerator<Fuse.Node> items) :5207
void Visual__InsertNodes_fn(Visual* __this, int* index, uObject* items)
{
    __this->InsertNodes(*index, items);
}

// internal Fuse.FastMatrix get_InternLocalTransformInternal() :7231
void Visual__get_InternLocalTransformInternal_fn(Visual* __this, ::g::Fuse::FastMatrix** __retval)
{
    *__retval = __this->InternLocalTransformInternal();
}

// internal float2 InternSnap(float2 p) :6504
void Visual__InternSnap_fn(Visual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->InternSnap(*p);
}

// internal float2 InternSnapUp(float2 p) :6523
void Visual__InternSnapUp_fn(Visual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->InternSnapUp(*p);
}

// internal void InvalidateFlat() :6091
void Visual__InvalidateFlat_fn(Visual* __this)
{
    __this->InvalidateFlat();
}

// protected void InvalidateHitTestBounds() :5844
void Visual__InvalidateHitTestBounds_fn(Visual* __this)
{
    __this->InvalidateHitTestBounds();
}

// public void InvalidateLayout([Fuse.InvalidateLayoutReason reason]) :6417
void Visual__InvalidateLayout_fn(Visual* __this, int* reason)
{
    __this->InvalidateLayout(*reason);
}

// protected virtual void InvalidateLocalTransform() :7139
void Visual__InvalidateLocalTransform_fn(Visual* __this)
{
    uStackFrame __("Fuse.Visual", "InvalidateLocalTransform()");
    __this->_localTransform = NULL;
    __this->_localTransformInverse = NULL;
    __this->InvalidateFlat();
    __this->InvalidateHitTestBounds();
    __this->InvalidateWorldTransform();
}

// protected void InvalidateRenderBounds() :7368
void Visual__InvalidateRenderBounds_fn(Visual* __this)
{
    __this->InvalidateRenderBounds();
}

// public void InvalidateVisual() :7722
void Visual__InvalidateVisual_fn(Visual* __this)
{
    __this->InvalidateVisual();
}

// public void InvalidateVisualComposition() :7742
void Visual__InvalidateVisualComposition_fn(Visual* __this)
{
    __this->InvalidateVisualComposition();
}

// private void InvalidateWorldTransform() :7148
void Visual__InvalidateWorldTransform_fn(Visual* __this)
{
    __this->InvalidateWorldTransform();
}

// private void InvalidateZOrder() :7985
void Visual__InvalidateZOrder_fn(Visual* __this)
{
    __this->InvalidateZOrder();
}

// private void InvokeEventHandler(object obj, object args) :5406
void Visual__InvokeEventHandler_fn(Visual* __this, uObject* obj, uObject* args)
{
    __this->InvokeEventHandler(obj, args);
}

// public bool get_IsContextEnabled() :6053
void Visual__get_IsContextEnabled_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->IsContextEnabled();
}

// public void add_IsContextEnabledChanged(Uno.EventHandler value) :6010
void Visual__add_IsContextEnabledChanged_fn(Visual* __this, uDelegate* value)
{
    __this->add_IsContextEnabledChanged(value);
}

// public void remove_IsContextEnabledChanged(Uno.EventHandler value) :6011
void Visual__remove_IsContextEnabledChanged_fn(Visual* __this, uDelegate* value)
{
    __this->remove_IsContextEnabledChanged(value);
}

// public bool get_IsEnabled() :6026
void Visual__get_IsEnabled_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->IsEnabled();
}

// public void set_IsEnabled(bool value) :6027
void Visual__set_IsEnabled_fn(Visual* __this, bool* value)
{
    __this->IsEnabled(*value);
}

// internal bool get_IsFlat() :6177
void Visual__get_IsFlat_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->IsFlat();
}

// public bool get_IsInteracting() :5923
void Visual__get_IsInteracting_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->IsInteracting();
}

// public generated void add_IsInteractingChanged(Uno.EventHandler value) :5920
void Visual__add_IsInteractingChanged_fn(Visual* __this, uDelegate* value)
{
    __this->add_IsInteractingChanged(value);
}

// public generated void remove_IsInteractingChanged(Uno.EventHandler value) :5920
void Visual__remove_IsInteractingChanged_fn(Visual* __this, uDelegate* value)
{
    __this->remove_IsInteractingChanged(value);
}

// internal bool get_IsLocalFlat() :6116
void Visual__get_IsLocalFlat_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->IsLocalFlat();
}

// public virtual bool get_IsLocalVisible() :6215
void Visual__get_IsLocalVisible_fn(Visual* __this, bool* __retval)
{
    uStackFrame __("Fuse.Visual", "get_IsLocalVisible()");
    return *__retval = true, void();
}

// protected virtual Fuse.LayoutDependent IsMarginBoxDependent(Fuse.Visual child) :6498
void Visual__IsMarginBoxDependent_fn(Visual* __this, Visual* child, int* __retval)
{
    uStackFrame __("Fuse.Visual", "IsMarginBoxDependent(Fuse.Visual)");
    return *__retval = 2, void();
}

// public bool get_IsVisible() :6209
void Visual__get_IsVisible_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->IsVisible();
}

// public void add_IsVisibleChanged(Uno.EventHandler value) :6198
void Visual__add_IsVisibleChanged_fn(Visual* __this, uDelegate* value)
{
    __this->add_IsVisibleChanged(value);
}

// public void remove_IsVisibleChanged(Uno.EventHandler value) :6199
void Visual__remove_IsVisibleChanged_fn(Visual* __this, uDelegate* value)
{
    __this->remove_IsVisibleChanged(value);
}

// public Fuse.Visual get_LastVisualChild() :7808
void Visual__get_LastVisualChild_fn(Visual* __this, Visual** __retval)
{
    *__retval = __this->LastVisualChild();
}

// public Fuse.Layer get_Layer() :6348
void Visual__get_Layer_fn(Visual* __this, int* __retval)
{
    *__retval = __this->Layer();
}

// public void set_Layer(Fuse.Layer value) :6355
void Visual__set_Layer_fn(Visual* __this, int* value)
{
    __this->Layer(*value);
}

// public Fuse.LayoutRole get_LayoutRole() :6370
void Visual__get_LayoutRole_fn(Visual* __this, int* __retval)
{
    *__retval = __this->LayoutRole();
}

// public void set_LayoutRole(Fuse.LayoutRole value) :6382
void Visual__set_LayoutRole_fn(Visual* __this, int* value)
{
    __this->LayoutRole(*value);
}

// public virtual Uno.Geometry.Box get_LocalBounds() :7203
void Visual__get_LocalBounds_fn(Visual* __this, ::g::Uno::Geometry::Box* __retval)
{
    uStackFrame __("Fuse.Visual", "get_LocalBounds()");
    return *__retval = ::g::Uno::Geometry::Box__New1(::g::Uno::Float3__New1(0.0f), ::g::Uno::Float3__New1(0.0f)), void();
}

// public virtual Fuse.VisualBounds get_LocalRenderBounds() :7357
void Visual__get_LocalRenderBounds_fn(Visual* __this, ::g::Fuse::VisualBounds** __retval)
{
    uStackFrame __("Fuse.Visual", "get_LocalRenderBounds()");
    return *__retval = ::g::Fuse::VisualBounds::Infinite(), void();
}

// public float2 LocalToParent(float2 localPoint) :7681
void Visual__LocalToParent_fn(Visual* __this, ::g::Uno::Float2* localPoint, ::g::Uno::Float2* __retval)
{
    *__retval = __this->LocalToParent(*localPoint);
}

// public float4x4 get_LocalTransform() :7225
void Visual__get_LocalTransform_fn(Visual* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->LocalTransform();
}

// protected Fuse.FastMatrix get_LocalTransformInternal() :7235
void Visual__get_LocalTransformInternal_fn(Visual* __this, ::g::Fuse::FastMatrix** __retval)
{
    *__retval = __this->LocalTransformInternal();
}

// protected float4x4 get_LocalTransformInverse() :7249
void Visual__get_LocalTransformInverse_fn(Visual* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->LocalTransformInverse();
}

// private Fuse.FastMatrix get_LocalTransformInverseInternal() :7254
void Visual__get_LocalTransformInverseInternal_fn(Visual* __this, ::g::Fuse::FastMatrix** __retval)
{
    *__retval = __this->LocalTransformInverseInternal();
}

// private void MakeNodeList(Fuse.Node newItem) :5064
void Visual__MakeNodeList_fn(Visual* __this, ::g::Fuse::Node* newItem)
{
    __this->MakeNodeList(newItem);
}

// internal float2 get_MarginBoxPosition() :6716
void Visual__get_MarginBoxPosition_fn(Visual* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->MarginBoxPosition();
}

// private Fuse.Node get_Node() :5061
void Visual__get_Node_fn(Visual* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Node();
}

// private Uno.Collections.List<Fuse.Node> get_NodeList() :5062
void Visual__get_NodeList_fn(Visual* __this, ::g::Uno::Collections::List** __retval)
{
    *__retval = __this->NodeList();
}

// private void OnAdded(Fuse.Node b) :5073
void Visual__OnAdded_fn(Visual* __this, ::g::Fuse::Node* b)
{
    __this->OnAdded(b);
}

// internal virtual void OnAdjustMarginBoxPosition(float2 position) :6724
void Visual__OnAdjustMarginBoxPosition_fn(Visual* __this, ::g::Uno::Float2* position)
{
}

// protected virtual float2 OnArrangeMarginBox(float2 position, Fuse.LayoutParams lp) :6674
void Visual__OnArrangeMarginBox_fn(Visual* __this, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Visual", "OnArrangeMarginBox(float2,Fuse.LayoutParams)");
    ::g::Uno::Float2 position_ = *position;
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float2 sz = ::g::Uno::Float2__New1(0.0f);

    for (int i = 0; i < __this->ZOrderChildCount(); ++i)
    {
        ::g::Uno::Float2 msz = uPtr(__this->GetZOrderChild(i))->ArrangeMarginBox(position_, lp_);
        sz = ::g::Uno::Math::Max3(sz, msz);
    }

    return *__retval = sz, void();
}

// protected void OnBeginRemoveVisual(Fuse.PendingRemoveVisual args) :4919
void Visual__OnBeginRemoveVisual_fn(Visual* __this, ::g::Fuse::PendingRemoveVisual* args)
{
    __this->OnBeginRemoveVisual(args);
}

// protected internal void OnBringIntoView(Fuse.Visual elm) :6745
void Visual__OnBringIntoView_fn(Visual* __this, Visual* elm)
{
    __this->OnBringIntoView(elm);
}

// protected virtual void OnChildAdded(Fuse.Node elm) :5027
void Visual__OnChildAdded_fn(Visual* __this, ::g::Fuse::Node* elm)
{
    uStackFrame __("Fuse.Visual", "OnChildAdded(Fuse.Node)");
    ::g::Fuse::Node* ret35;

    if ((__this->_observerCount != 0) && __this->IsRootingStarted())

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
        {
            ::g::Fuse::Node* n = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(__this->Children()), ::TYPES[69/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret35), ret35);
            uObject* obs = uAs<uObject*>(n, ::TYPES[114/*Fuse.IParentObserver*/]);

            if ((obs != NULL) && uPtr(n)->IsRootingCompleted())
                ::g::Fuse::IParentObserver::OnChildAddedWhileRooted(uInterface(uPtr(obs), ::TYPES[114/*Fuse.IParentObserver*/]), elm);
        }

    if (uIs(elm, ::TYPES[114/*Fuse.IParentObserver*/]))
        __this->_observerCount++;
}

// protected virtual void OnChildRemoved(Fuse.Node elm) :5043
void Visual__OnChildRemoved_fn(Visual* __this, ::g::Fuse::Node* elm)
{
    uStackFrame __("Fuse.Visual", "OnChildRemoved(Fuse.Node)");
    ::g::Fuse::Node* ret36;

    if ((__this->_observerCount != 0) && __this->IsRootingStarted())

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
        {
            ::g::Fuse::Node* n = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(__this->Children()), ::TYPES[69/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret36), ret36);
            uObject* obs = uAs<uObject*>(n, ::TYPES[114/*Fuse.IParentObserver*/]);

            if ((obs != NULL) && uPtr(n)->IsRootingCompleted())
                ::g::Fuse::IParentObserver::OnChildRemovedWhileRooted(uInterface(uPtr(obs), ::TYPES[114/*Fuse.IParentObserver*/]), elm);
        }

    if (uIs(elm, ::TYPES[114/*Fuse.IParentObserver*/]))
        __this->_observerCount--;
}

// protected virtual void OnHitTest(Fuse.HitTestContext htc) :5813
void Visual__OnHitTest_fn(Visual* __this, ::g::Fuse::HitTestContext* htc)
{
    uStackFrame __("Fuse.Visual", "OnHitTest(Fuse.HitTestContext)");
    Visual* ret37;

    if (__this->HasVisualChildren())
    {
        __this->EnsureSortedZOrder();

        for (int i = uPtr(__this->ZOrder())->Count() - 1; i >= 0; --i)
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->ZOrder()), uCRef<int>(i), &ret37), ret37))->HitTest(htc);
    }
}

// private void OnInteractionsChanged() :5951
void Visual__OnInteractionsChanged_fn(Visual* __this)
{
    __this->OnInteractionsChanged();
}

// private void OnInvalidateChildZOffset(Fuse.Visual child) :7953
void Visual__OnInvalidateChildZOffset_fn(Visual* __this, Visual* child)
{
    __this->OnInvalidateChildZOffset(child);
}

// protected virtual void OnInvalidateLayout() :6394
void Visual__OnInvalidateLayout_fn(Visual* __this)
{
}

// protected virtual bool OnInvalidateRenderBounds() :7382
void Visual__OnInvalidateRenderBounds_fn(Visual* __this, bool* __retval)
{
    uStackFrame __("Fuse.Visual", "OnInvalidateRenderBounds()");
    return *__retval = false, void();
}

// protected virtual void OnInvalidateVisual() :7734
void Visual__OnInvalidateVisual_fn(Visual* __this)
{
}

// protected virtual void OnInvalidateVisualComposition() :7753
void Visual__OnInvalidateVisualComposition_fn(Visual* __this)
{
}

// protected virtual void OnInvalidateWorldTransform() :7169
void Visual__OnInvalidateWorldTransform_fn(Visual* __this)
{
    uStackFrame __("Fuse.Visual", "OnInvalidateWorldTransform()");
    __this->RaiseEvent(Visual::_worldTransformInvalidatedHandle(), 10);
}

// protected void OnIsContextEnabledChanged() :6070
void Visual__OnIsContextEnabledChanged_fn(Visual* __this)
{
    __this->OnIsContextEnabledChanged();
}

// private void OnIsEnabledChanged(Uno.UX.IPropertyListener origin) :6038
void Visual__OnIsEnabledChanged_fn(Visual* __this, uObject* origin)
{
    __this->OnIsEnabledChanged(origin);
}

// public void OnIsSelectedChanged(bool isSelected) :7538
void Visual__OnIsSelectedChanged_fn(Visual* __this, bool* isSelected)
{
    __this->OnIsSelectedChanged(*isSelected);
}

// protected virtual void OnIsVisibleChanged() :6239
void Visual__OnIsVisibleChanged_fn(Visual* __this)
{
    uStackFrame __("Fuse.Visual", "OnIsVisibleChanged()");

    if (__this->IsVisible())
        __this->InvalidateVisual();

    if (__this->Parent() != NULL)
        uPtr(__this->Parent())->InvalidateVisual();

    __this->RaiseEvent(Visual::_isVisibleChangedHandle(), 5);
    __this->InvalidateHitTestBounds();
}

// protected void OnLocalVisibleChanged() :6218
void Visual__OnLocalVisibleChanged_fn(Visual* __this)
{
    __this->OnLocalVisibleChanged();
}

// private void OnMatrixChanged(Fuse.Transform t) :7134
void Visual__OnMatrixChanged_fn(Visual* __this, ::g::Fuse::Transform* t)
{
    __this->OnMatrixChanged(t);
}

// private static void onParameterChanged(Fuse.Scripting.Context c, Fuse.Visual v, object[] args) :7073
void Visual__onParameterChanged_fn(::g::Fuse::Scripting::Context* c, Visual* v, uArray* args)
{
    Visual::onParameterChanged(c, v, args);
}

// private void OnParameterChanged() :6980
void Visual__OnParameterChanged_fn(Visual* __this)
{
    __this->OnParameterChanged();
}

// public virtual void OnPropertyChanged(Uno.UX.PropertyObject sender, Uno.UX.Selector property) :7532
void Visual__OnPropertyChanged2_fn(Visual* __this, ::g::Uno::UX::PropertyObject* sender, ::g::Uno::UX::Selector* property)
{
}

// private void OnRemoved(Fuse.Node b) :5085
void Visual__OnRemoved_fn(Visual* __this, ::g::Fuse::Node* b)
{
    __this->OnRemoved(b);
}

// private void OnResourceChanged(Uno.UX.Resource res) :6908
void Visual__OnResourceChanged_fn(Visual* __this, ::g::Uno::UX::Resource* res)
{
    __this->OnResourceChanged(res);
}

// protected override void OnRooted() :7588
void Visual__OnRooted_fn(Visual* __this)
{
    uStackFrame __("Fuse.Visual", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->UpdateIsContextEnabledCache();
    __this->UpdateIsVisibleCache();
    __this->UpdateContextSnapToPixelsCache();

    if (__this->HasChildren())
    {
        uArray* children = (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[115/*Uno.Collections.EnumerableExtensions.ToArray<Fuse.Node>*/], __this->Children());

        for (int i = 0; i < uPtr(children)->Length(); i++)
            uPtr(uPtr(children)->Strong< ::g::Fuse::Node*>(i))->RootInternal(__this);
    }

    __this->_layoutDirty = 0;
    __this->_hasMarginBox = false;
    __this->InvalidateLayout(2);
    __this->_ambLayoutParams.Reset();
    __this->_viewport = __this->FindViewport();
}

// public override sealed void OnSubtreeDataContextChanged() :7580
void Visual__OnSubtreeDataContextChanged_fn(Visual* __this)
{
    uStackFrame __("Fuse.Visual", "OnSubtreeDataContextChanged()");
    uArray* children = (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[115/*Uno.Collections.EnumerableExtensions.ToArray<Fuse.Node>*/], __this->Children());

    for (int i = 0; i < uPtr(children)->Length(); i++)
        uPtr(uPtr(children)->Strong< ::g::Fuse::Node*>(i))->OnDataContextChanged();
}

// private void OnTemplatesChanged(Uno.UX.Template t) :7445
void Visual__OnTemplatesChanged_fn(Visual* __this, ::g::Uno::UX::Template* t)
{
    __this->OnTemplatesChanged(t);
}

// private void OnTransformAdded(Fuse.Transform t) :7120
void Visual__OnTransformAdded_fn(Visual* __this, ::g::Fuse::Transform* t)
{
    __this->OnTransformAdded(t);
}

// private void OnTransformRemoved(Fuse.Transform t) :7127
void Visual__OnTransformRemoved_fn(Visual* __this, ::g::Fuse::Transform* t)
{
    __this->OnTransformRemoved(t);
}

// protected override void OnUnrooted() :7615
void Visual__OnUnrooted_fn(Visual* __this)
{
    uStackFrame __("Fuse.Visual", "OnUnrooted()");
    ::g::Fuse::Node__OnUnrooted_fn(__this);
    __this->_viewport = NULL;
    __this->ResetParameterListeners();

    if (::g::Fuse::Input::Focus::FocusedVisual() == __this)
        ::g::Fuse::Input::Focus::Release();

    __this->ConcludePendingRemove();

    if (__this->HasChildren())
    {
        uArray* children = (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[115/*Uno.Collections.EnumerableExtensions.ToArray<Fuse.Node>*/], __this->Children());

        for (int i = 0; i < uPtr(children)->Length(); i++)
            uPtr(uPtr(children)->Strong< ::g::Fuse::Node*>(i))->UnrootInternal();
    }

    __this->ConcludePendingRemove();
}

// private void OnVisualAdded(Fuse.Visual v) :5097
void Visual__OnVisualAdded_fn(Visual* __this, Visual* v)
{
    __this->OnVisualAdded(v);
}

// private void OnVisualRemoved(Fuse.Visual v) :5105
void Visual__OnVisualRemoved_fn(Visual* __this, Visual* v)
{
    __this->OnVisualRemoved(v);
}

// protected virtual void OnZOrderInvalidated() :7977
void Visual__OnZOrderInvalidated_fn(Visual* __this)
{
}

// public string get_Parameter() :6950
void Visual__get_Parameter_fn(Visual* __this, uString** __retval)
{
    *__retval = __this->Parameter();
}

// public void set_Parameter(string value) :6951
void Visual__set_Parameter_fn(Visual* __this, uString* value)
{
    __this->Parameter(value);
}

// internal virtual Fuse.FastMatrix get_ParentWorldTransformInternal() :7219
void Visual__get_ParentWorldTransformInternal_fn(Visual* __this, ::g::Fuse::FastMatrix** __retval)
{
    uStackFrame __("Fuse.Visual", "get_ParentWorldTransformInternal()");
    return *__retval = __this->WorldTransformInternal(), void();
}

// protected void PerformLayout() :6592
void Visual__PerformLayout_fn(Visual* __this)
{
    __this->PerformLayout();
}

// protected void PerformLayout(float2 clientSize) :6600
void Visual__PerformLayout1_fn(Visual* __this, ::g::Uno::Float2* clientSize)
{
    __this->PerformLayout1(*clientSize);
}

// private void PrependExplicitTransforms(Fuse.FastMatrix m) :7325
void Visual__PrependExplicitTransforms_fn(Visual* __this, ::g::Fuse::FastMatrix* m)
{
    __this->PrependExplicitTransforms(m);
}

// protected virtual void PrependImplicitTransform(Fuse.FastMatrix m) :7108
void Visual__PrependImplicitTransform_fn(Visual* __this, ::g::Fuse::FastMatrix* m)
{
}

// protected virtual void PrependInverseTransformOrigin(Fuse.FastMatrix m) :7110
void Visual__PrependInverseTransformOrigin_fn(Visual* __this, ::g::Fuse::FastMatrix* m)
{
}

// private void PrependLocalTransform(Fuse.FastMatrix m) :7319
void Visual__PrependLocalTransform_fn(Visual* __this, ::g::Fuse::FastMatrix* m)
{
    __this->PrependLocalTransform(m);
}

// protected virtual void PrependTransformOrigin(Fuse.FastMatrix m) :7109
void Visual__PrependTransformOrigin_fn(Visual* __this, ::g::Fuse::FastMatrix* m)
{
}

// private void RaiseEvent(Fuse.PropertyHandle ph, Fuse.Visual.VisualBits ne) :5401
void Visual__RaiseEvent_fn(Visual* __this, ::g::Fuse::PropertyHandle* ph, int* ne)
{
    __this->RaiseEvent(ph, *ne);
}

// private void RearrangeMarginBox() :6665
void Visual__RearrangeMarginBox_fn(Visual* __this)
{
    __this->RearrangeMarginBox();
}

// public bool Remove(Fuse.Node item) :5135
void Visual__Remove1_fn(Visual* __this, ::g::Fuse::Node* item, bool* __retval)
{
    *__retval = __this->Remove1(item);
}

// public void RemoveAllChildren<T>() :5003
void Visual__RemoveAllChildren_fn(Visual* __this, uType* __type)
{
    __this->RemoveAllChildren(__type);
}

// public void RemoveDrawCost(double cost) :7557
void Visual__RemoveDrawCost_fn(Visual* __this, double* cost)
{
    __this->RemoveDrawCost(*cost);
}

// private void RemoveEventHandler(Fuse.PropertyHandle ph, Fuse.Visual.VisualBits ne, object handler) :5418
void Visual__RemoveEventHandler_fn(Visual* __this, ::g::Fuse::PropertyHandle* ph, int* ne, uObject* handler)
{
    __this->RemoveEventHandler(ph, *ne, handler);
}

// public generated void add_RequestBringIntoView(Fuse.RequestBringIntoViewHandler value) :6743
void Visual__add_RequestBringIntoView_fn(Visual* __this, uDelegate* value)
{
    __this->add_RequestBringIntoView(value);
}

// public generated void remove_RequestBringIntoView(Fuse.RequestBringIntoViewHandler value) :6743
void Visual__remove_RequestBringIntoView_fn(Visual* __this, uDelegate* value)
{
    __this->remove_RequestBringIntoView(value);
}

// private void ResetParameterListeners() :6995
void Visual__ResetParameterListeners_fn(Visual* __this)
{
    __this->ResetParameterListeners();
}

// public Uno.Collections.IList<Uno.UX.Resource> get_Resources() :6853
void Visual__get_Resources_fn(Visual* __this, uObject** __retval)
{
    *__retval = __this->Resources();
}

// public void SendToBack(Fuse.Visual item) :7872
void Visual__SendToBack_fn(Visual* __this, Visual* item)
{
    __this->SendToBack(item);
}

// internal void Set<T>(Fuse.FastProperty1 p, T value, T defaultValue) :5509
void Visual__Set_fn(Visual* __this, uType* __type, int* p, void* value, void* defaultValue)
{
    uType* __types[] = {
        __type->Precalced(7/*Fuse.Visual.Find<T>*/),
        __type->Precalced(8/*Fuse.Visual.Insert<T>*/),
    };
    uStackFrame __("Fuse.Visual", "Set`1(Fuse.FastProperty1,T,T)");
    int p_ = *p;

    if (__this->HasBit(p_))
    {
        if (::g::Uno::Object::Equals1(uBoxPtr(__type->U(0), value), uBoxPtr(__type->U(0), defaultValue)))
            __this->Clear(p_);
        else 
            uPtr((::g::Fuse::FastProperty1Link1*)__this->Find(__types[0], p_))->Value() = value;
    }
    else 
    {
        if (!::g::Uno::Object::Equals1(uBoxPtr(__type->U(0), value), uBoxPtr(__type->U(0), defaultValue)))
            Visual__Insert2_fn(__this, __types[1], uCRef<int>(p_), value);
    }
}

// internal void Set<T>(Fuse.FastProperty2 p, T value, T defaultValue) :5661
void Visual__Set1_fn(Visual* __this, uType* __type, int* p, void* value, void* defaultValue)
{
    uType* __types[] = {
        __type->Precalced(9/*Fuse.Visual.Find<T>*/),
        __type->Precalced(10/*Fuse.Visual.Insert<T>*/),
    };
    uStackFrame __("Fuse.Visual", "Set`1(Fuse.FastProperty2,T,T)");
    int p_ = *p;

    if (__this->HasBit1(p_))
    {
        if (::g::Uno::Object::Equals1(uBoxPtr(__type->U(0), value), uBoxPtr(__type->U(0), defaultValue)))
            __this->Clear1(p_);
        else 
            uPtr((::g::Fuse::FastProperty2Link1*)__this->Find1(__types[0], p_))->Value() = value;
    }
    else 
    {
        if (!::g::Uno::Object::Equals1(uBoxPtr(__type->U(0), value), uBoxPtr(__type->U(0), defaultValue)))
            Visual__Insert3_fn(__this, __types[1], uCRef<int>(p_), value);
    }
}

// internal void SetBit(Fuse.FastProperty1 p) :5543
void Visual__SetBit_fn(Visual* __this, int* p)
{
    __this->SetBit(*p);
}

// internal void SetBit(Fuse.FastProperty1 p, bool value) :5548
void Visual__SetBit1_fn(Visual* __this, int* p, bool* value)
{
    __this->SetBit1(*p, *value);
}

// internal void SetBit(Fuse.FastProperty2 p) :5695
void Visual__SetBit2_fn(Visual* __this, int* p)
{
    __this->SetBit2(*p);
}

// internal void SetBit(Fuse.FastProperty2 p, bool value) :5700
void Visual__SetBit3_fn(Visual* __this, int* p, bool* value)
{
    __this->SetBit3(*p, *value);
}

// private void SetBit(Fuse.Visual.VisualBits nb) :5398
void Visual__SetBit4_fn(Visual* __this, int* nb)
{
    __this->SetBit4(*nb);
}

// public void SetResource(string key, object value) :6864
void Visual__SetResource_fn(Visual* __this, uString* key, uObject* value)
{
    __this->SetResource(key, value);
}

// protected float2 Snap(float2 p) :6505
void Visual__Snap_fn(Visual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Snap(*p);
}

// protected float2 SnapDown(float2 p) :6530
void Visual__SnapDown_fn(Visual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->SnapDown(*p);
}

// public bool get_SnapToPixels() :6558
void Visual__get_SnapToPixels_fn(Visual* __this, bool* __retval)
{
    *__retval = __this->SnapToPixels();
}

// public void set_SnapToPixels(bool value) :6562
void Visual__set_SnapToPixels_fn(Visual* __this, bool* value)
{
    __this->SnapToPixels(*value);
}

// protected float2 SnapUp(float2 p) :6524
void Visual__SnapUp_fn(Visual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->SnapUp(*p);
}

// private void SoftInvalidateZOrder([bool force]) :7963
void Visual__SoftInvalidateZOrder_fn(Visual* __this, bool* force)
{
    __this->SoftInvalidateZOrder(*force);
}

// protected override sealed void SubtreeToString(Uno.Text.StringBuilder sb, int indent) :4985
void Visual__SubtreeToString1_fn(Visual* __this, ::g::Uno::Text::StringBuilder* sb, int* indent)
{
    uStackFrame __("Fuse.Visual", "SubtreeToString(Uno.Text.StringBuilder,int)");
    int indent_ = *indent;
    ::g::Fuse::Node* ret46;
    ::g::Fuse::Node__SubtreeToString1_fn(__this, sb, uCRef<int>(indent_));

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
        uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(__this->Children()), ::TYPES[69/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret46), ret46))->SubtreeToString1(sb, indent_ + 1);
}

// public Uno.Collections.IList<Uno.UX.Template> get_Templates() :7439
void Visual__get_Templates_fn(Visual* __this, uObject** __retval)
{
    *__retval = __this->Templates();
}

// public override sealed bool TryGetResource(string key, Uno.Predicate<object> acceptor, object& resource) :6881
void Visual__TryGetResource_fn(Visual* __this, uString* key, uDelegate* acceptor, uObject** resource, bool* __retval)
{
    uStackFrame __("Fuse.Visual", "TryGetResource(string,Uno.Predicate<object>,object&)");
    ::g::Uno::UX::Resource* ret47;
    bool ret48;

    if (__this->HasResources())
    {
        uObject* resources = __this->Resources();

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(resources), ::TYPES[118/*Uno.Collections.ICollection<Uno.UX.Resource>*/])); i++)
        {
            ::g::Uno::UX::Resource* r = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(resources), ::TYPES[119/*Uno.Collections.IList<Uno.UX.Resource>*/]), uCRef<int>(i), &ret47), ret47);

            if (::g::Uno::String::op_Equality(uPtr(r)->Key(), key) && (::g::Uno::Delegate::op_Equality(acceptor, NULL) || (uPtr(acceptor)->Invoke(&ret48, 1, (uObject*)uPtr(r)->Value()), ret48)))
            {
                *resource = uPtr(r)->Value();
                return *__retval = true, void();
            }
        }
    }

    if (__this->ContextParent() != NULL)
        return *__retval = uPtr(__this->ContextParent())->TryGetResource(key, acceptor, resource), void();

    return *__retval = ::g::Uno::UX::Resource::TryFindGlobal(key, acceptor, resource), void();
}

// public bool TryParentToLocal(float2 parentPoint, float2& result) :7671
void Visual__TryParentToLocal_fn(Visual* __this, ::g::Uno::Float2* parentPoint, ::g::Uno::Float2* result, bool* __retval)
{
    *__retval = __this->TryParentToLocal(*parentPoint, result);
}

// private void Uno.Collections.ICollection<Fuse.Node>.Clear() :5114
void Visual__UnoCollectionsICollectionFuseNodeClear_fn(Visual* __this)
{
    uStackFrame __("Fuse.Visual", "Uno.Collections.ICollection<Fuse.Node>.Clear()");
    ::g::Fuse::Node* ret49;

    if (__this->NodeList() != NULL)
    {
        ::g::Uno::Collections::List* q = __this->NodeList();
        __this->_children = NULL;

        for (int i = 0; i < uPtr(q)->Count(); i++)
            __this->OnRemoved((::g::Uno::Collections::List__get_Item_fn(uPtr(q), uCRef<int>(i), &ret49), ret49));
    }
    else 
    {
        ::g::Fuse::Node* c = __this->Node();
        __this->_children = NULL;

        if (c != NULL)
            __this->OnRemoved(c);
    }
}

// private bool Uno.Collections.ICollection<Fuse.Node>.Contains(Fuse.Node item) :5157
void Visual__UnoCollectionsICollectionFuseNodeContains_fn(Visual* __this, ::g::Fuse::Node* item, bool* __retval)
{
    uStackFrame __("Fuse.Visual", "Uno.Collections.ICollection<Fuse.Node>.Contains(Fuse.Node)");
    bool ret50;

    if (__this->_children == item)
        return *__retval = true, void();

    ::g::Uno::Collections::List* bl = __this->NodeList();

    if (bl != NULL)
        return *__retval = (::g::Uno::Collections::List__Contains_fn(uPtr(bl), item, &ret50), ret50), void();

    return *__retval = false, void();
}

// private int Uno.Collections.ICollection<Fuse.Node>.get_Count() :5167
void Visual__UnoCollectionsICollectionFuseNodeget_Count_fn(Visual* __this, int* __retval)
{
    uStackFrame __("Fuse.Visual", "Uno.Collections.ICollection<Fuse.Node>.get_Count()");

    if (__this->_children == NULL)
        return *__retval = 0, void();

    if (uIs((uObject*)__this->_children, ::TYPES[14/*Fuse.Node*/]))
        return *__retval = 1, void();

    return *__retval = uPtr(__this->NodeList())->Count(), void();
}

// private Uno.Collections.IEnumerator<Fuse.Node> Uno.Collections.IEnumerable<Fuse.Node>.GetEnumerator() :5276
void Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn(Visual* __this, uObject** __retval)
{
    uStackFrame __("Fuse.Visual", "Uno.Collections.IEnumerable<Fuse.Node>.GetEnumerator()");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret51;

    if (__this->_children == NULL)
        return *__retval = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Visual::_emptyChildren()), ::TYPES[120/*Uno.Collections.IEnumerable<Fuse.Node>*/])), void();

    if (uIs((uObject*)__this->_children, ::TYPES[14/*Fuse.Node*/]))
        __this->MakeNodeList(NULL);

    return *__retval = uBox(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::TYPES[14/*Fuse.Node*/]), (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(__this->NodeList()), &ret51), ret51)), void();
}

// private Fuse.Node Uno.Collections.IList<Fuse.Node>.get_Item(int index) :5257
void Visual__UnoCollectionsIListFuseNodeget_Item_fn(Visual* __this, int* index, ::g::Fuse::Node** __retval)
{
    uStackFrame __("Fuse.Visual", "Uno.Collections.IList<Fuse.Node>.get_Item(int)");
    int index_ = *index;
    ::g::Fuse::Node* ret57;

    if (__this->_children == NULL)
        U_THROW(::g::Uno::Exception::New1());

    ::g::Fuse::Node* b = __this->Node();

    if (b != NULL)
    {
        if (index_ != 0)
            U_THROW(::g::Uno::Exception::New1());

        return *__retval = b, void();
    }
    else 
        return *__retval = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->NodeList()), uCRef<int>(index_), &ret57), ret57), void();
}

// private void Uno.Collections.IList<Fuse.Node>.RemoveAt(int index) :5236
void Visual__UnoCollectionsIListFuseNodeRemoveAt_fn(Visual* __this, int* index)
{
    uStackFrame __("Fuse.Visual", "Uno.Collections.IList<Fuse.Node>.RemoveAt(int)");
    int index_ = *index;
    ::g::Fuse::Node* ret52;

    if (__this->_children == NULL)
        U_THROW(::g::Uno::Exception::New1());

    ::g::Fuse::Node* b = __this->Node();

    if (b != NULL)
    {
        if (index_ != 0)
            U_THROW(::g::Uno::Exception::New1());

        __this->_children = NULL;
        __this->OnRemoved(b);
    }
    else 
    {
        b = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->NodeList()), uCRef<int>(index_), &ret52), ret52);
        uPtr(__this->NodeList())->RemoveAt(index_);
        __this->OnRemoved(b);
    }
}

// private void UpdateContextSnapToPixelsCache() :6574
void Visual__UpdateContextSnapToPixelsCache_fn(Visual* __this)
{
    __this->UpdateContextSnapToPixelsCache();
}

// private void UpdateIsContextEnabledCache() :6056
void Visual__UpdateIsContextEnabledCache_fn(Visual* __this)
{
    __this->UpdateIsContextEnabledCache();
}

// private void UpdateIsVisibleCache() :6223
void Visual__UpdateIsVisibleCache_fn(Visual* __this)
{
    __this->UpdateIsVisibleCache();
}

// private void UpdateLayout() :6634
void Visual__UpdateLayout_fn(Visual* __this)
{
    __this->UpdateLayout();
}

// public int get_ValidFrameCount() :7759
void Visual__get_ValidFrameCount_fn(Visual* __this, int* __retval)
{
    *__retval = __this->ValidFrameCount();
}

// public Fuse.IViewport get_Viewport() :7703
void Visual__get_Viewport_fn(Visual* __this, uObject** __retval)
{
    *__retval = __this->Viewport();
}

// public override sealed void VisitSubtree(Uno.Action<Fuse.Node> action) :7641
void Visual__VisitSubtree_fn(Visual* __this, uDelegate* action)
{
    uStackFrame __("Fuse.Visual", "VisitSubtree(Uno.Action<Fuse.Node>)");
    ::g::Fuse::Node* ret55;
    uPtr(action)->InvokeVoid(__this);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
        uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(__this->Children()), ::TYPES[69/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret55), ret55))->VisitSubtree(action);
}

// public virtual Fuse.VisualContext get_VisualContext() :7519
void Visual__get_VisualContext_fn(Visual* __this, int* __retval)
{
    uStackFrame __("Fuse.Visual", "get_VisualContext()");

    if (__this->Parent() != NULL)
        return *__retval = uPtr(__this->Parent())->VisualContext(), void();
    else 
        return *__retval = 0, void();
}

// public float2 WindowToLocal(float2 windowCoord) :7339
void Visual__WindowToLocal_fn(Visual* __this, ::g::Uno::Float2* windowCoord, ::g::Uno::Float2* __retval)
{
    *__retval = __this->WindowToLocal(*windowCoord);
}

// public float3 get_WorldPosition() :7198
void Visual__get_WorldPosition_fn(Visual* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->WorldPosition();
}

// public float4x4 get_WorldTransform() :7190
void Visual__get_WorldTransform_fn(Visual* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->WorldTransform();
}

// private Fuse.FastMatrix get_WorldTransformInternal() :7209
void Visual__get_WorldTransformInternal_fn(Visual* __this, ::g::Fuse::FastMatrix** __retval)
{
    *__retval = __this->WorldTransformInternal();
}

// public void add_WorldTransformInvalidated(Uno.EventHandler value) :7165
void Visual__add_WorldTransformInvalidated_fn(Visual* __this, uDelegate* value)
{
    __this->add_WorldTransformInvalidated(value);
}

// public void remove_WorldTransformInvalidated(Uno.EventHandler value) :7166
void Visual__remove_WorldTransformInvalidated_fn(Visual* __this, uDelegate* value)
{
    __this->remove_WorldTransformInvalidated(value);
}

// public float4x4 get_WorldTransformInverse() :7177
void Visual__get_WorldTransformInverse_fn(Visual* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->WorldTransformInverse();
}

// public float get_ZOffset() :6773
void Visual__get_ZOffset_fn(Visual* __this, float* __retval)
{
    *__retval = __this->ZOffset();
}

// public void set_ZOffset(float value) :6774
void Visual__set_ZOffset_fn(Visual* __this, float* value)
{
    __this->ZOffset(*value);
}

// internal Uno.Collections.List<Fuse.Visual> get_ZOrder() :7838
void Visual__get_ZOrder_fn(Visual* __this, ::g::Uno::Collections::List** __retval)
{
    *__retval = __this->ZOrder();
}

// internal generated void add_ZOrderChanged(Uno.EventHandler value) :7958
void Visual__add_ZOrderChanged_fn(Visual* __this, uDelegate* value)
{
    __this->add_ZOrderChanged(value);
}

// internal generated void remove_ZOrderChanged(Uno.EventHandler value) :7958
void Visual__remove_ZOrderChanged_fn(Visual* __this, uDelegate* value)
{
    __this->remove_ZOrderChanged(value);
}

// public int get_ZOrderChildCount() :7823
void Visual__get_ZOrderChildCount_fn(Visual* __this, int* __retval)
{
    *__retval = __this->ZOrderChildCount();
}

// private int ZOrderComparator(Fuse.Visual a, Fuse.Visual b) :7890
void Visual__ZOrderComparator_fn(Visual* __this, Visual* a, Visual* b, int* __retval)
{
    *__retval = __this->ZOrderComparator(a, b);
}

uSStrong<uObject*> Visual::_emptyChildren_;
uSStrong< ::g::Fuse::PropertyHandle*> Visual::_isContextEnabledChangedHandle_;
::g::Uno::UX::Selector Visual::_isEnabledName_;
uSStrong< ::g::Fuse::PropertyHandle*> Visual::_isVisibleChangedHandle_;
uSStrong< ::g::Fuse::PropertyHandle*> Visual::_layerProperty_;
uSStrong< ::g::Fuse::PropertyHandle*> Visual::_layoutRoleProperty_;
bool Visual::_performingLayout_;
uSStrong< ::g::Fuse::PropertyHandle*> Visual::_resourcesHandle_;
uSStrong< ::g::Fuse::PropertyHandle*> Visual::_worldTransformInvalidatedHandle_;
::g::Uno::UX::Selector Visual::ParameterName_;

// protected generated Visual() [instance] :4872
void Visual::ctor_2()
{
    uStackFrame __("Fuse.Visual", ".ctor()");
    _fastPropertyBits1 = 100663299;
    _isVisibleCached = true;
    _ambLayoutParams = ::g::Fuse::LayoutParams__CreateEmpty();
    _zOffset = 0.0f;
    _lastInvalidate = -1;
    ctor_1();
}

// private bool get__areChildrenFlat() [instance] :6145
bool Visual::_areChildrenFlat()
{
    uStackFrame __("Fuse.Visual", "get__areChildrenFlat()");
    return HasBit(32);
}

// private void set__areChildrenFlat(bool value) [instance] :6146
void Visual::_areChildrenFlat(bool value)
{
    uStackFrame __("Fuse.Visual", "set__areChildrenFlat(bool)");
    SetBit1(32, value);
}

// private bool get__areChildrenFlatCached() [instance] :6139
bool Visual::_areChildrenFlatCached()
{
    uStackFrame __("Fuse.Visual", "get__areChildrenFlatCached()");
    return HasBit(16);
}

// private void set__areChildrenFlatCached(bool value) [instance] :6140
void Visual::_areChildrenFlatCached(bool value)
{
    uStackFrame __("Fuse.Visual", "set__areChildrenFlatCached(bool)");
    SetBit1(16, value);
}

// private bool get__isLocalFlat() [instance] :6109
bool Visual::_isLocalFlat()
{
    uStackFrame __("Fuse.Visual", "get__isLocalFlat()");
    return HasBit(4);
}

// private void set__isLocalFlat(bool value) [instance] :6110
void Visual::_isLocalFlat(bool value)
{
    uStackFrame __("Fuse.Visual", "set__isLocalFlat(bool)");
    SetBit1(4, value);
}

// private bool get__isLocalFlatCached() [instance] :6104
bool Visual::_isLocalFlatCached()
{
    uStackFrame __("Fuse.Visual", "get__isLocalFlatCached()");
    return HasBit(8);
}

// private void set__isLocalFlatCached(bool value) [instance] :6105
void Visual::_isLocalFlatCached(bool value)
{
    uStackFrame __("Fuse.Visual", "set__isLocalFlatCached(bool)");
    SetBit1(8, value);
}

// public float get_AbsoluteZoom() [instance] :6544
float Visual::AbsoluteZoom()
{
    uStackFrame __("Fuse.Visual", "get_AbsoluteZoom()");
    uObject* v = Viewport();

    if (v == NULL)
        return 1.0f;

    return ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(v), ::TYPES[32/*Fuse.ICommonViewport*/]));
}

// public void Add(Fuse.Node item) [instance] :5130
void Visual::Add1(::g::Fuse::Node* item)
{
    uStackFrame __("Fuse.Visual", "Add(Fuse.Node)");
    Insert1(::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])), item);
}

// public void AddDrawCost(double cost) [instance] :7547
void Visual::AddDrawCost(double cost)
{
    uStackFrame __("Fuse.Visual", "AddDrawCost(double)");
    Visual* p = this;

    while (p != NULL)
    {
        uPtr(p)->_drawCost = (uPtr(p)->_drawCost + cost);
        p = uPtr(p)->Parent();
    }
}

// private void AddEventHandler(Fuse.PropertyHandle ph, Fuse.Visual.VisualBits ne, object handler) [instance] :5412
void Visual::AddEventHandler(::g::Fuse::PropertyHandle* ph, int ne, uObject* handler)
{
    uStackFrame __("Fuse.Visual", "AddEventHandler(Fuse.PropertyHandle,Fuse.Visual.VisualBits,object)");
    uPtr(Properties())->AddToList(ph, handler);
    SetBit4(ne);
}

// private void AddParameterChangedListener(Fuse.Scripting.Function func) [instance] :6963
void Visual::AddParameterChangedListener(::g::Fuse::Scripting::Function* func)
{
    uStackFrame __("Fuse.Visual", "AddParameterChangedListener(Fuse.Scripting.Function)");

    if (_parameterListeners == NULL)
        _parameterListeners = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[96/*Uno.Collections.List<Fuse.Scripting.Function>*/]));

    ::g::Uno::Collections::List__Add_fn(uPtr(_parameterListeners), func);

    if (::g::Uno::String::op_Inequality(_parameter, NULL))
    {
        uObject* so = uAs<uObject*>(this, ::TYPES[97/*Fuse.Scripting.IScriptObject*/]);

        if (so != NULL)
            uPtr(func)->Call(uArray::Init<uObject*>(::TYPES[10/*object[]*/], 1, (uObject*)uPtr(::g::Fuse::Scripting::IScriptObject::ScriptContext(uInterface(uPtr(so), ::TYPES[97/*Fuse.Scripting.IScriptObject*/])))->ParseJson(_parameter)));
    }
}

// internal void AdjustMarginBoxPosition(float2 position) [instance] :6718
void Visual::AdjustMarginBoxPosition(::g::Uno::Float2 position)
{
    uStackFrame __("Fuse.Visual", "AdjustMarginBoxPosition(float2)");
    ArrangeMarginBox(position, _ambLayoutParams);
}

// internal bool get_AreChildrenFlat() [instance] :6152
bool Visual::AreChildrenFlat()
{
    uStackFrame __("Fuse.Visual", "get_AreChildrenFlat()");

    if (_areChildrenFlatCached())
        return _areChildrenFlat();

    _areChildrenFlat(CalcAreChildrenFlat());
    _areChildrenFlatCached(true);
    return _areChildrenFlat();
}

// public float2 ArrangeMarginBox(float2 position, Fuse.LayoutParams lp) [instance] :6685
::g::Uno::Float2 Visual::ArrangeMarginBox(::g::Uno::Float2 position, ::g::Fuse::LayoutParams lp)
{
    uStackFrame __("Fuse.Visual", "ArrangeMarginBox(float2,Fuse.LayoutParams)");
    bool same = (HasMarginBox() && (_layoutDirty == 0)) && _ambLayoutParams.IsCompatible(lp);
    ::g::Uno::Float2 marginBox;

    if (same && (::g::Uno::Vector::Distance(position, _ambPosition) < 1e-05f))
        return _ambMargin;
    else  if (same && CanAdjustMarginBox())
    {
        marginBox = _ambMargin;
        OnAdjustMarginBoxPosition(position);
    }
    else 
        marginBox = OnArrangeMarginBox(position, lp);

    _layoutDirty = 0;
    _ambMargin = marginBox;
    _ambPosition = position;
    _ambLayoutParams = lp.Clone();
    _hasMarginBox = true;
    return marginBox;
}

// public void BeginInteraction(object id, Uno.Action cancelled) [instance] :5930
void Visual::BeginInteraction(uObject* id, uDelegate* cancelled)
{
    uStackFrame __("Fuse.Visual", "BeginInteraction(object,Uno.Action)");
    Visual__InteractionItem collection1;

    if (_interactions == NULL)
        _interactions = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[100/*Uno.Collections.Dictionary<object, Fuse.Visual.InteractionItem>*/]));

    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(_interactions), id, uCRef((collection1 = uDefault<Visual__InteractionItem>(), collection1.Id = id, collection1.Cancelled = cancelled, collection1)));
    OnInteractionsChanged();
}

// public void BeginRemoveChild(Fuse.Node n, [Uno.Action then]) [instance] :4908
void Visual::BeginRemoveChild(::g::Fuse::Node* n, uDelegate* then)
{
    uStackFrame __("Fuse.Visual", "BeginRemoveChild(Fuse.Node,[Uno.Action])");
    bool ret11;
    Visual* v = uAs<Visual*>(n, Visual_typeof());

    if (v != NULL)
        BeginRemoveVisual(v, then);
    else 
    {
        ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), n, &ret11);

        if (::g::Uno::Delegate::op_Inequality(then, NULL))
            uPtr(then)->InvokeVoid();
    }
}

// public void BeginRemoveVisual(Fuse.Visual child, [Uno.Action then]) [instance] :4875
void Visual::BeginRemoveVisual(Visual* child, uDelegate* then)
{
    uStackFrame __("Fuse.Visual", "BeginRemoveVisual(Fuse.Visual,[Uno.Action])");
    bool ret12;
    bool ret13;

    if (!IsRootingCompleted())
    {
        ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), child, &ret12);

        if (::g::Uno::Delegate::op_Inequality(then, NULL))
            uPtr(then)->InvokeVoid();

        return;
    }

    if (!(::g::Uno::Collections::ICollection::Contains_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), child, &ret13), ret13))
        return;

    if (uPtr(child)->HasBit(268435456))
        return;

    ::g::Fuse::PendingRemoveVisual* args = ::g::Fuse::PendingRemoveVisual::New1(child, this, then);
    uPtr(child)->OnBeginRemoveVisual(args);

    if (args->HasSubscribers())
    {
        InvalidateLayout(2);
        return;
    }
    else 
        uPtr(args)->Remove();
}

// public void BringIntoView() [instance] :6754
void Visual::BringIntoView()
{
    uStackFrame __("Fuse.Visual", "BringIntoView()");
    OnBringIntoView(this);
}

// public void BringToFront(Fuse.Visual item) [instance] :7851
void Visual::BringToFront(Visual* item)
{
    uStackFrame __("Fuse.Visual", "BringToFront(Fuse.Visual)");
    ::g::Uno::Collections::List__Enumerator<uStrong<Visual*> > ret14;

    if (!HasChildren())
        return;

    EnsureZOrder();
    int mx = uPtr(item)->ZOffsetNatural;

    for (::g::Uno::Collections::List__Enumerator<uStrong<Visual*> > enum4 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(ZOrder()), &ret14), ret14); enum4.MoveNext(::TYPES[6/*Uno.Collections.List<Fuse.Visual>.Enumerator*/]); )
    {
        Visual* c = enum4.Current(::TYPES[6/*Uno.Collections.List<Fuse.Visual>.Enumerator*/]);

        if (uPtr(c)->ZLayer == uPtr(item)->ZLayer)
            mx = ::g::Uno::Math::Max8(mx, uPtr(c)->ZOffsetNatural);
    }

    item->ZOffsetNatural = (mx + 1);
    item->ZOffsetFixed = true;
    SoftInvalidateZOrder(false);
}

// internal Fuse.VisualBounds CalcRenderBoundsInParentSpace() [instance] :7389
::g::Fuse::VisualBounds* Visual::CalcRenderBoundsInParentSpace()
{
    uStackFrame __("Fuse.Visual", "CalcRenderBoundsInParentSpace()");
    return uPtr(::g::Fuse::VisualBounds::Empty())->MergeChild(this, LocalRenderBounds());
}

// private Fuse.FastMatrix CalcWorldTransform() [instance] :7265
::g::Fuse::FastMatrix* Visual::CalcWorldTransform()
{
    uStackFrame __("Fuse.Visual", "CalcWorldTransform()");
    ::g::Fuse::FastMatrix* m = LocalTransformInternal();

    if (Parent() != NULL)
        m = uPtr(m)->Mul(uPtr(Parent())->ParentWorldTransformInternal());

    return m;
}

// public void CancelInteractions([Fuse.Visual.CancelInteractionsType how]) [instance] :5962
void Visual::CancelInteractions(int how)
{
    uStackFrame __("Fuse.Visual", "CancelInteractions([Fuse.Visual.CancelInteractionsType])");
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uObject*>, Visual__InteractionItem> ret16;
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > ret17;
    bool ret18;
    Visual__InteractionItem ret19;

    if (_interactions != NULL)
    {
        ::g::Uno::Collections::List* ids = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[56/*Uno.Collections.List<object>*/]);

        for (::g::Uno::Collections::Dictionary__Enumerator<uStrong<uObject*>, Visual__InteractionItem> enum2 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_interactions), &ret16), ret16); enum2.MoveNext(::TYPES[102/*Uno.Collections.Dictionary<object, Fuse.Visual.InteractionItem>.Enumerator*/]); )
        {
            ::g::Uno::Collections::KeyValuePair<uStrong<uObject*>, Visual__InteractionItem> i = enum2.Current(::TYPES[102/*Uno.Collections.Dictionary<object, Fuse.Visual.InteractionItem>.Enumerator*/]);
            ::g::Uno::Collections::List__Add_fn(uPtr(ids), i.Key(::TYPES[103/*Uno.Collections.KeyValuePair<object, Fuse.Visual.InteractionItem>*/]));
        }

        for (::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > enum3 = (::g::Uno::Collections::List__GetEnumerator_fn(ids, &ret17), ret17); enum3.MoveNext(::TYPES[104/*Uno.Collections.List<object>.Enumerator*/]); )
        {
            uObject* id = enum3.Current(::TYPES[104/*Uno.Collections.List<object>.Enumerator*/]);

            if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(_interactions), id, &ret18), ret18))
            {
                Visual__InteractionItem i1 = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(_interactions), id, &ret19), ret19);
                uPtr(i1.Cancelled)->InvokeVoid();
            }
        }
    }

    if (how == 1)

        for (int i2 = 0; i2 < ZOrderChildCount(); ++i2)
            uPtr(GetZOrderChild(i2))->CancelInteractions(how);
}

// internal void CancelPendingRemove() [instance] :4930
void Visual::CancelPendingRemove()
{
    uStackFrame __("Fuse.Visual", "CancelPendingRemove()");

    if (HasBit(268435456))
        SetBit1(268435456, false);
}

// public Uno.Collections.IList<Fuse.Node> get_Children() [instance] :5022
uObject* Visual::Children()
{
    uStackFrame __("Fuse.Visual", "get_Children()");
    return (uObject*)this;
}

// private void Clear(Fuse.FastProperty1 p) [instance] :5522
void Visual::Clear(int p)
{
    uStackFrame __("Fuse.Visual", "Clear(Fuse.FastProperty1)");

    if (HasBit(p))
    {
        ::g::Fuse::FastProperty1Link* k = FindPrevious(p);

        if (k == NULL)
            _fastProperties1 = uPtr(_fastProperties1)->Next;
        else 
            uPtr(k)->Next = uPtr(uPtr(k)->Next)->Next;

        ClearBit(p);
    }
}

// private void Clear(Fuse.FastProperty2 p) [instance] :5674
void Visual::Clear1(int p)
{
    uStackFrame __("Fuse.Visual", "Clear(Fuse.FastProperty2)");

    if (HasBit1(p))
    {
        ::g::Fuse::FastProperty2Link* k = FindPrevious1(p);

        if (k == NULL)
            _fastProperties2 = uPtr(_fastProperties2)->Next;
        else 
            uPtr(k)->Next = uPtr(uPtr(k)->Next)->Next;

        ClearBit1(p);
    }
}

// internal void ClearBit(Fuse.FastProperty1 p) [instance] :5538
void Visual::ClearBit(int p)
{
    uStackFrame __("Fuse.Visual", "ClearBit(Fuse.FastProperty1)");
    _fastPropertyBits1 = (_fastPropertyBits1 & ~p);
}

// internal void ClearBit(Fuse.FastProperty2 p) [instance] :5690
void Visual::ClearBit1(int p)
{
    uStackFrame __("Fuse.Visual", "ClearBit(Fuse.FastProperty2)");
    _fastPropertyBits2 = (_fastPropertyBits2 ^ p);
}

// private void ClearBit(Fuse.Visual.VisualBits nb) [instance] :5399
void Visual::ClearBit2(int nb)
{
    uStackFrame __("Fuse.Visual", "ClearBit(Fuse.Visual.VisualBits)");
    _nodebits = (_nodebits & ~(1 << nb));
}

// internal void ConcludePendingRemove() [instance] :4938
void Visual::ConcludePendingRemove()
{
    uStackFrame __("Fuse.Visual", "ConcludePendingRemove()");
    bool ret20;

    if (HasBit(268435456))
    {
        ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(uPtr(Parent())->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), this, &ret20);
        SetBit1(268435456, false);
    }
}

// public double get_DrawCost() [instance] :7545
double Visual::DrawCost()
{
    uStackFrame __("Fuse.Visual", "get_DrawCost()");
    return _drawCost;
}

// private void DrawLocalRect(Fuse.DrawContext dc, Uno.Rect rect, float lineWidth, float4 color, float4x4 localToClipTransform) [instance] :5345
void Visual::DrawLocalRect(::g::Fuse::DrawContext* dc, ::g::Uno::Rect rect, float lineWidth, ::g::Uno::Float4 color, ::g::Uno::Float4x4 localToClipTransform)
{
    uStackFrame __("Fuse.Visual", "DrawLocalRect(Fuse.DrawContext,Uno.Rect,float,float4,float4x4)");
    uPtr(::g::Fuse::DrawHelpers::Singelton())->DrawLocalRect(dc, rect, localToClipTransform, lineWidth, color);
}

// protected void DrawLocalSelectionRect(Fuse.DrawContext dc, Uno.Rect rect) [instance] :5350
void Visual::DrawLocalSelectionRect(::g::Fuse::DrawContext* dc, ::g::Uno::Rect rect)
{
    uStackFrame __("Fuse.Visual", "DrawLocalSelectionRect(Fuse.DrawContext,Uno.Rect)");
    ::g::Uno::Float4x4 localToClipTransform = uPtr(dc)->GetLocalToClipTransform(this);
    double phase = ::g::Fuse::Time::FrameTime() * 4.0;
    float pulse = (float)(0.667 + (0.333 * ::g::Uno::Math::Sin(phase * 3.1415926535897931)));
    ::g::Uno::Float4 color = ::g::Uno::Float4__New2(0.25f, 0.5f, 0.75f, pulse);
    DrawLocalRect(dc, rect, 4.0f, ::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f), localToClipTransform);
    DrawLocalRect(dc, rect, 2.0f, color, localToClipTransform);
}

// private void EmitZOrderChanged() [instance] :7979
void Visual::EmitZOrderChanged()
{
    uStackFrame __("Fuse.Visual", "EmitZOrderChanged()");

    if (::g::Uno::Delegate::op_Inequality(ZOrderChanged1, NULL))
        uPtr(ZOrderChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// public void EndInteraction(object id) [instance] :5939
void Visual::EndInteraction(uObject* id)
{
    uStackFrame __("Fuse.Visual", "EndInteraction(object)");
    bool ret21;

    if (_interactions == NULL)
        return;

    ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(_interactions), id, &ret21);

    if (uPtr(_interactions)->Count() == 0)
        _interactions = NULL;

    OnInteractionsChanged();
}

// internal void EnsureSortedZOrder() [instance] :7928
void Visual::EnsureSortedZOrder()
{
    uStackFrame __("Fuse.Visual", "EnsureSortedZOrder()");
    Visual* ret22;

    if (_sortedZOrder && _nodeZOrders)
        return;

    EnsureZOrder();
    uPtr(ZOrder())->Sort(uDelegate::New(::TYPES[105/*Uno.Comparison<Fuse.Visual>*/], (void*)Visual__ZOrderComparator_fn, this));
    _sortedZOrder = true;
    int firstNonUnderlay;

    for (firstNonUnderlay = 0; firstNonUnderlay < uPtr(ZOrder())->Count(); ++firstNonUnderlay)
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(ZOrder()), uCRef<int>(firstNonUnderlay), &ret22), ret22))->Layer() != 0)
            break;

    _firstNonUnderlay = firstNonUnderlay;
}

// private void EnsureZOrder() [instance] :7944
void Visual::EnsureZOrder()
{
    uStackFrame __("Fuse.Visual", "EnsureZOrder()");

    if (!_nodeZOrders)
    {
        Visual::AssignZOrder(Children());
        _nodeZOrders = true;
    }
}

// private Fuse.FastProperty1Link<T> Find<T>(Fuse.FastProperty1 p) [instance] :5585
::g::Fuse::FastProperty1Link1* Visual::Find(uType* __type, int p)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.FastProperty1Link<T>*/),
    };
    uStackFrame __("Fuse.Visual", "Find`1(Fuse.FastProperty1)");
    ::g::Fuse::FastProperty1Link* n = _fastProperties1;

    while (n != NULL)
    {
        if (uPtr(n)->Property == p)
            return uCast< ::g::Fuse::FastProperty1Link1*>(n, __types[0]);

        n = uPtr(n)->Next;
    }

    return NULL;
}

// private Fuse.FastProperty2Link<T> Find<T>(Fuse.FastProperty2 p) [instance] :5737
::g::Fuse::FastProperty2Link1* Visual::Find1(uType* __type, int p)
{
    uType* __types[] = {
        __type->Precalced(1/*Fuse.FastProperty2Link<T>*/),
    };
    uStackFrame __("Fuse.Visual", "Find`1(Fuse.FastProperty2)");
    ::g::Fuse::FastProperty2Link* n = _fastProperties2;

    while (n != NULL)
    {
        if (uPtr(n)->Property == p)
            return uCast< ::g::Fuse::FastProperty2Link1*>(n, __types[0]);

        n = uPtr(n)->Next;
    }

    return NULL;
}

// public T FindByType<T>() [instance] :7648
Visual* Visual::FindByType(uType* __type)
{
    uType* __types[] = {
        __type->U(0),
        __type->Precalced(2/*Fuse.Visual.GetNearestAncestorOfType<T>*/),
    };
    uStackFrame __("Fuse.Visual", "FindByType`1()");

    if (uIs(this, __types[0]))
        return uAs<Visual*>(this, __types[0]);

    return (Visual*)GetNearestAncestorOfType(__types[1]);
}

// private Fuse.FastProperty1Link FindPrevious(Fuse.FastProperty1 p) [instance] :5572
::g::Fuse::FastProperty1Link* Visual::FindPrevious(int p)
{
    uStackFrame __("Fuse.Visual", "FindPrevious(Fuse.FastProperty1)");
    ::g::Fuse::FastProperty1Link* pr = NULL;
    ::g::Fuse::FastProperty1Link* n = _fastProperties1;

    while (n != NULL)
    {
        if (uPtr(n)->Property == p)
            return pr;

        pr = n;
        n = uPtr(n)->Next;
    }

    return NULL;
}

// private Fuse.FastProperty2Link FindPrevious(Fuse.FastProperty2 p) [instance] :5724
::g::Fuse::FastProperty2Link* Visual::FindPrevious1(int p)
{
    uStackFrame __("Fuse.Visual", "FindPrevious(Fuse.FastProperty2)");
    ::g::Fuse::FastProperty2Link* pr = NULL;
    ::g::Fuse::FastProperty2Link* n = _fastProperties2;

    while (n != NULL)
    {
        if (uPtr(n)->Property == p)
            return pr;

        pr = n;
        n = uPtr(n)->Next;
    }

    return NULL;
}

// public Uno.UX.Template FindTemplate(string key) [instance] :7457
::g::Uno::UX::Template* Visual::FindTemplate(uString* key)
{
    uStackFrame __("Fuse.Visual", "FindTemplate(string)");
    ::g::Uno::UX::Template* ret23;

    if (_templates == NULL)
        return NULL;

    for (int i = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_templates), ::TYPES[13/*Uno.Collections.ICollection<Uno.UX.Template>*/])); (i--) > 0; )
    {
        ::g::Uno::UX::Template* t = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_templates), ::TYPES[15/*Uno.Collections.IList<Uno.UX.Template>*/]), uCRef<int>(i), &ret23), ret23);

        if (::g::Uno::String::op_Equality(uPtr(t)->Key(), key))
            return t;
    }

    return NULL;
}

// public Fuse.IViewport FindViewport() [instance] :7687
uObject* Visual::FindViewport()
{
    uStackFrame __("Fuse.Visual", "FindViewport()");
    Visual* p = this;

    while (p != NULL)
    {
        uObject* vp = uAs<uObject*>(p, ::TYPES[8/*Fuse.IViewport*/]);

        if (vp != NULL)
            return vp;

        p = uPtr(p)->Parent();
    }

    return NULL;
}

// public T FirstChild<T>() [instance] :4992
::g::Fuse::Node* Visual::FirstChild(uType* __type)
{
    uType* __types[] = {
        __type->U(0),
    };
    uStackFrame __("Fuse.Visual", "FirstChild`1()");
    ::g::Fuse::Node* ret24;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])); ++i)
    {
        ::g::Fuse::Node* c = uAs< ::g::Fuse::Node*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Children()), ::TYPES[69/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret24), ret24), __types[0]);

        if (c != NULL)
            return c;
    }

    return NULL;
}

// public Fuse.Visual get_FirstVisualChild() [instance] :7781
Visual* Visual::FirstVisualChild()
{
    uStackFrame __("Fuse.Visual", "get_FirstVisualChild()");

    if (!HasVisualChildren())
        return NULL;

    return (Visual*)FirstChild(::TYPES[121/*Fuse.Visual.FirstChild<Fuse.Visual>*/]);
}

// public Fuse.Visual GetHitWindowPoint(float2 windowPoint) [instance] :5823
Visual* Visual::GetHitWindowPoint(::g::Uno::Float2 windowPoint)
{
    uStackFrame __("Fuse.Visual", "GetHitWindowPoint(float2)");
    Visual__HitTestRecord* htr = Visual__HitTestRecord::New1();
    ::g::Fuse::HitTestContext* htc = ::g::Fuse::HitTestContext::New1(windowPoint, uDelegate::New(::TYPES[108/*Fuse.HitTestCallback*/], (void*)Visual__HitTestRecord__HitTestCallback_fn, htr));

    if (Parent() != NULL)
        uPtr(htc)->PushLocalPoint(uPtr(Parent())->WindowToLocal(windowPoint));

    htc->PushWorldRay(::g::Fuse::IViewport::PointToWorldRay(uInterface(uPtr(Viewport()), ::TYPES[8/*Fuse.IViewport*/]), windowPoint));
    HitTest(htc);
    return htr->Visual;
}

// public T GetNearestAncestorOfType<T>() [instance] :7654
Visual* Visual::GetNearestAncestorOfType(uType* __type)
{
    uType* __types[] = {
        __type->U(0),
    };
    uStackFrame __("Fuse.Visual", "GetNearestAncestorOfType`1()");
    Visual* current = Parent();

    while (current != NULL)
    {
        if (uIs(current, __types[0]))
            return uAs<Visual*>(current, __types[0]);

        current = uPtr(current)->Parent();
    }

    return NULL;
}

// public float4x4 GetTransformTo(Fuse.Visual other) [instance] :7277
::g::Uno::Float4x4 Visual::GetTransformTo(Visual* other)
{
    uStackFrame __("Fuse.Visual", "GetTransformTo(Fuse.Visual)");
    bool ret25;
    bool ret26;
    ::g::Uno::Collections::HashSet* parents = (::g::Uno::Collections::HashSet*)::g::Uno::Collections::HashSet::New1(::TYPES[109/*Uno.Collections.HashSet<Fuse.Visual>*/]);
    Visual* q = this;

    while (q != NULL)
    {
        ::g::Uno::Collections::HashSet__Add_fn(uPtr(parents), q, &ret25);
        q = uPtr(q)->Parent();
    }

    Visual* c = other;

    while (c != NULL)
    {
        if ((::g::Uno::Collections::HashSet__Contains_fn(uPtr(parents), c, &ret26), ret26))
            break;

        c = uPtr(c)->Parent();
    }

    if (c == NULL)
        return ::g::Uno::Float4x4__Identity();

    ::g::Uno::Float4x4 thisTo = GetTransformToAncestor(c);
    ::g::Uno::Float4x4 otherTo = uPtr(other)->GetTransformToAncestor(c);
    return ::g::Uno::Matrix::Mul8(thisTo, ::g::Uno::Matrix::Invert2(otherTo));
}

// private float4x4 GetTransformToAncestor(Fuse.Visual ancestor) [instance] :7306
::g::Uno::Float4x4 Visual::GetTransformToAncestor(Visual* ancestor)
{
    uStackFrame __("Fuse.Visual", "GetTransformToAncestor(Fuse.Visual)");
    ::g::Fuse::FastMatrix* m = ::g::Fuse::FastMatrix::Identity();
    Visual* n = this;

    while ((n != NULL) && (n != ancestor))
    {
        m = uPtr(m)->Mul(uPtr(n)->LocalTransformInternal());
        n = uPtr(n)->Parent();
    }

    return uPtr(m)->Matrix();
}

// public Fuse.Visual GetVisualChild(int index) [instance] :7789
Visual* Visual::GetVisualChild(int index)
{
    uStackFrame __("Fuse.Visual", "GetVisualChild(int)");
    ::g::Fuse::Node* ret27;

    if (!HasVisualChildren())
        return NULL;

    int x = 0;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
    {
        Visual* c = uAs<Visual*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Children()), ::TYPES[69/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret27), ret27), Visual_typeof());

        if (c != NULL)
        {
            if (x == index)
                return c;

            x++;
        }
    }

    return NULL;
}

// public Fuse.Visual GetZOrderChild(int index) [instance] :7830
Visual* Visual::GetZOrderChild(int index)
{
    uStackFrame __("Fuse.Visual", "GetZOrderChild(int)");
    Visual* ret28;
    EnsureSortedZOrder();
    return (::g::Uno::Collections::List__get_Item_fn(uPtr(ZOrder()), uCRef<int>(index), &ret28), ret28);
}

// internal bool HasBit(Fuse.FastProperty1 p) [instance] :5533
bool Visual::HasBit(int p)
{
    uStackFrame __("Fuse.Visual", "HasBit(Fuse.FastProperty1)");
    return (_fastPropertyBits1 & p) != 0;
}

// internal bool HasBit(Fuse.FastProperty2 p) [instance] :5685
bool Visual::HasBit1(int p)
{
    uStackFrame __("Fuse.Visual", "HasBit(Fuse.FastProperty2)");
    return (_fastPropertyBits2 & p) != 0;
}

// private bool HasBit(Fuse.Visual.VisualBits nb) [instance] :5397
bool Visual::HasBit2(int nb)
{
    uStackFrame __("Fuse.Visual", "HasBit(Fuse.Visual.VisualBits)");
    return (_nodebits & (1 << nb)) != 0;
}

// public bool get_HasChildren() [instance] :4974
bool Visual::HasChildren()
{
    uStackFrame __("Fuse.Visual", "get_HasChildren()");

    if (_children == NULL)
        return false;

    if (uIs((uObject*)_children, ::TYPES[14/*Fuse.Node*/]))
        return true;

    ::g::Uno::Collections::List* list = uAs< ::g::Uno::Collections::List*>(_children, ::TYPES[12/*Uno.Collections.List<Fuse.Node>*/]);
    return uPtr(list)->Count() > 0;
}

// private bool get_HasExplicitTransforms() [instance] :7115
bool Visual::HasExplicitTransforms()
{
    uStackFrame __("Fuse.Visual", "get_HasExplicitTransforms()");
    return _transformCount > 0;
}

// internal bool get_HasMarginBox() [instance] :6663
bool Visual::HasMarginBox()
{
    uStackFrame __("Fuse.Visual", "get_HasMarginBox()");
    return _hasMarginBox;
}

// public bool get_HasPendingRemove() [instance] :4947
bool Visual::HasPendingRemove()
{
    uStackFrame __("Fuse.Visual", "get_HasPendingRemove()");
    return HasBit(268435456);
}

// private bool get_HasResources() [instance] :6905
bool Visual::HasResources()
{
    uStackFrame __("Fuse.Visual", "get_HasResources()");
    return HasBit2(1);
}

// public bool get_HasVisualChildren() [instance] :7777
bool Visual::HasVisualChildren()
{
    uStackFrame __("Fuse.Visual", "get_HasVisualChildren()");
    return (_zOrder != NULL) && (uPtr(_zOrder)->Count() > 0);
}

// public void HitTest(Fuse.HitTestContext htc) [instance] :5780
void Visual::HitTest(::g::Fuse::HitTestContext* htc)
{
    uStackFrame __("Fuse.Visual", "HitTest(Fuse.HitTestContext)");

    if (!IsVisible())
        return;

    ::g::Fuse::VisualBounds* bounds = HitTestBounds();
    ::g::Uno::Float2 localPoint;
    bool hit;

    if (uPtr(bounds)->IsFlat() && (HitTestTransform() == 0))
    {
        if (!TryParentToLocal(uPtr(htc)->LocalPoint(), &localPoint))
            return;

        hit = uPtr(bounds)->ContainsPoint(localPoint);
    }
    else 
    {
        ::g::Uno::Geometry::Ray world = ::g::Fuse::IViewport::PointToWorldRay(uInterface(uPtr(Viewport()), ::TYPES[8/*Fuse.IViewport*/]), uPtr(htc)->WindowPoint());
        ::g::Uno::Geometry::Ray local = ::g::Fuse::IViewport::WorldToLocalRay(uInterface(uPtr(Viewport()), ::TYPES[8/*Fuse.IViewport*/]), Viewport(), world, this);
        localPoint = ::g::Fuse::FrustumViewport::LocalPlaneIntersection(local);
        hit = uPtr(bounds)->IsFlat() ? uPtr(bounds)->ContainsPoint(localPoint) : uPtr(bounds)->IntersectsRay(local);
    }

    if (true && !hit)
        return;

    ::g::Uno::Float2 old = uPtr(htc)->PushLocalPoint(localPoint);
    OnHitTest(htc);
    htc->PopLocalPoint(old);
}

// protected float2 IfSnap(float2 p) [instance] :6511
::g::Uno::Float2 Visual::IfSnap(::g::Uno::Float2 p)
{
    uStackFrame __("Fuse.Visual", "IfSnap(float2)");
    return SnapToPixels() ? Snap(p) : p;
}

// protected float2 IfSnapDown(float2 p) [instance] :6536
::g::Uno::Float2 Visual::IfSnapDown(::g::Uno::Float2 p)
{
    uStackFrame __("Fuse.Visual", "IfSnapDown(float2)");
    return SnapToPixels() ? SnapDown(p) : p;
}

// protected float2 IfSnapUp(float2 p) [instance] :6516
::g::Uno::Float2 Visual::IfSnapUp(::g::Uno::Float2 p)
{
    uStackFrame __("Fuse.Visual", "IfSnapUp(float2)");
    return SnapToPixels() ? SnapUp(p) : p;
}

// public void Insert(int index, Fuse.Node item) [instance] :5175
void Visual::Insert1(int index, ::g::Fuse::Node* item)
{
    uStackFrame __("Fuse.Visual", "Insert(int,Fuse.Node)");

    if ((index < 0) || (index > ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]))))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[80/*"index"*/]));

    InsertCleanup(item);
    InsertImpl(index, item);
    OnAdded(item);
}

// private void InsertCleanup(Fuse.Node item) [instance] :5185
void Visual::InsertCleanup(::g::Fuse::Node* item)
{
    uStackFrame __("Fuse.Visual", "InsertCleanup(Fuse.Node)");
    Visual* v = uAs<Visual*>(item, Visual_typeof());

    if (v != NULL)
        uPtr(v)->ConcludePendingRemove();
}

// private void InsertImpl(int index, Fuse.Node item) [instance] :5191
void Visual::InsertImpl(int index, ::g::Fuse::Node* item)
{
    uStackFrame __("Fuse.Visual", "InsertImpl(int,Fuse.Node)");

    if (_children == NULL)
        _children = item;
    else 
    {
        if (uIs((uObject*)_children, ::TYPES[14/*Fuse.Node*/]))
            MakeNodeList(NULL);

        ::g::Uno::Collections::List__Insert_fn(uPtr(NodeList()), uCRef<int>(index), item);
    }
}

// internal void InsertNodes(int index, Uno.Collections.IEnumerator<Fuse.Node> items) [instance] :5207
void Visual::InsertNodes(int index, uObject* items)
{
    uStackFrame __("Fuse.Visual", "InsertNodes(int,Uno.Collections.IEnumerator<Fuse.Node>)");
    ::g::Fuse::Node* ret31;
    ::g::Fuse::Node* ret32;
    ::g::Fuse::Node* ret33;

    if ((index < 0) || (index > ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]))))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[80/*"index"*/]));

    while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(items), ::TYPES[110/*Uno.Collections.IEnumerator*/])))
        InsertCleanup((::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(items), ::TYPES[111/*Uno.Collections.IEnumerator<Fuse.Node>*/]), &ret31), ret31));

    bool capture = ::g::Fuse::Node::CaptureRooting();

    {
        const auto __finally_fun = [&]()
        {
            ::g::Fuse::Node::ReleaseRooting(capture);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::IEnumerator::Reset(uInterface(uPtr(items), ::TYPES[110/*Uno.Collections.IEnumerator*/]));

        while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(items, ::TYPES[110/*Uno.Collections.IEnumerator*/])))
            InsertImpl(index++, (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(items), ::TYPES[111/*Uno.Collections.IEnumerator<Fuse.Node>*/]), &ret32), ret32));

        ::g::Uno::Collections::IEnumerator::Reset(uInterface(items, ::TYPES[110/*Uno.Collections.IEnumerator*/]));

        while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(items, ::TYPES[110/*Uno.Collections.IEnumerator*/])))
            OnAdded((::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(items), ::TYPES[111/*Uno.Collections.IEnumerator<Fuse.Node>*/]), &ret33), ret33));
    }
}

// internal Fuse.FastMatrix get_InternLocalTransformInternal() [instance] :7231
::g::Fuse::FastMatrix* Visual::InternLocalTransformInternal()
{
    uStackFrame __("Fuse.Visual", "get_InternLocalTransformInternal()");
    return LocalTransformInternal();
}

// internal float2 InternSnap(float2 p) [instance] :6504
::g::Uno::Float2 Visual::InternSnap(::g::Uno::Float2 p)
{
    uStackFrame __("Fuse.Visual", "InternSnap(float2)");
    return Snap(p);
}

// internal float2 InternSnapUp(float2 p) [instance] :6523
::g::Uno::Float2 Visual::InternSnapUp(::g::Uno::Float2 p)
{
    uStackFrame __("Fuse.Visual", "InternSnapUp(float2)");
    return SnapUp(p);
}

// internal void InvalidateFlat() [instance] :6091
void Visual::InvalidateFlat()
{
    uStackFrame __("Fuse.Visual", "InvalidateFlat()");

    if (_isLocalFlatCached() || _areChildrenFlatCached())
    {
        _isLocalFlatCached(false);
        _areChildrenFlatCached(false);

        if (Parent() != NULL)
            uPtr(Parent())->InvalidateFlat();
    }
}

// protected void InvalidateHitTestBounds() [instance] :5844
void Visual::InvalidateHitTestBounds()
{
    uStackFrame __("Fuse.Visual", "InvalidateHitTestBounds()");
    Visual* p = this;

    while ((p != NULL) && p->_isHitTestBoundsCacheValid)
    {
        uPtr(p)->_isHitTestBoundsCacheValid = false;
        p = uPtr(p)->Parent();
    }
}

// public void InvalidateLayout([Fuse.InvalidateLayoutReason reason]) [instance] :6417
void Visual::InvalidateLayout(int reason)
{
    uStackFrame __("Fuse.Visual", "InvalidateLayout([Fuse.InvalidateLayoutReason])");

    if (Visual::_performingLayout())
        U_THROW(::g::Uno::Exception::New2(::STRINGS[81/*"Layout was ...*/]));

    if (reason <= _layoutDirty)
        return;

    _layoutDirty = reason;
    OnInvalidateLayout();
    Visual* child = this;
    Visual* parent = Parent();
    Visual* maybeChild = NULL;

    while (parent != NULL)
    {
        if (reason <= uPtr(parent)->_layoutDirty)
            break;

        int useReason = reason;

        if (uPtr(child)->HasMarginBox() && (reason > 1))
        {
            int mb = uPtr(parent)->IsMarginBoxDependent(child);

            if ((mb == 4) || (mb == 3))
            {
                while ((maybeChild != NULL) && (maybeChild != parent))
                {
                    uPtr(maybeChild)->_layoutDirty = 2;
                    maybeChild = uPtr(maybeChild)->Parent();
                }

                maybeChild = NULL;
            }

            switch (mb)
            {
                case 0:
                {
                    useReason = reason = 1;
                    break;
                }
                case 1:
                {
                    useReason = 2;
                    reason = 1;
                    break;
                }
                case 2:
                {
                    useReason = 1;

                    if (maybeChild == NULL)
                        maybeChild = parent;

                    break;
                }
                case 3:
                {
                    useReason = 2;

                    if (maybeChild == NULL)
                        maybeChild = parent;

                    break;
                }
                case 4:
                {
                    reason = useReason = 2;
                    break;
                }
            }
        }

        uPtr(parent)->OnInvalidateLayout();

        if (useReason > parent->_layoutDirty)
            uPtr(parent)->_layoutDirty = useReason;

        child = parent;
        parent = uPtr(parent)->Parent();
    }
}

// protected void InvalidateRenderBounds() [instance] :7368
void Visual::InvalidateRenderBounds()
{
    uStackFrame __("Fuse.Visual", "InvalidateRenderBounds()");
    InvalidateVisual();
    Visual* p = this;

    while (p != NULL)
    {
        if (uPtr(p)->OnInvalidateRenderBounds())
            break;

        p = uPtr(p)->Parent();
    }
}

// public void InvalidateVisual() [instance] :7722
void Visual::InvalidateVisual()
{
    uStackFrame __("Fuse.Visual", "InvalidateVisual()");

    if (_lastInvalidate == ::g::Fuse::UpdateManager::FrameIndex())
        return;

    _lastInvalidate = ::g::Fuse::UpdateManager::FrameIndex();
    OnInvalidateVisual();

    if ((Parent() != NULL) && IsVisible())
        uPtr(Parent())->InvalidateVisual();
}

// public void InvalidateVisualComposition() [instance] :7742
void Visual::InvalidateVisualComposition()
{
    uStackFrame __("Fuse.Visual", "InvalidateVisualComposition()");
    OnInvalidateVisualComposition();
    Visual* p = Parent();

    if (p != NULL)
        uPtr(p)->InvalidateVisual();
    else 
        InvalidateVisual();
}

// private void InvalidateWorldTransform() [instance] :7148
void Visual::InvalidateWorldTransform()
{
    uStackFrame __("Fuse.Visual", "InvalidateWorldTransform()");

    if ((_worldTransform == NULL) && (_worldTransformInverse == NULL))
        return;

    _worldTransform = NULL;
    _worldTransformInverse = NULL;

    for (int i = 0; i < ZOrderChildCount(); i++)
        uPtr(GetZOrderChild(i))->InvalidateWorldTransform();

    OnInvalidateWorldTransform();
}

// private void InvalidateZOrder() [instance] :7985
void Visual::InvalidateZOrder()
{
    uStackFrame __("Fuse.Visual", "InvalidateZOrder()");

    if (!_nodeZOrders)
        return;

    _nodeZOrders = false;
    SoftInvalidateZOrder(true);
}

// private void InvokeEventHandler(object obj, object args) [instance] :5406
void Visual::InvokeEventHandler(uObject* obj, uObject* args)
{
    uStackFrame __("Fuse.Visual", "InvokeEventHandler(object,object)");
    uPtr(uCast<uDelegate*>(obj, ::TYPES[63/*Uno.EventHandler*/]))->Invoke(2, this, uCast< ::g::Uno::EventArgs*>(args, ::TYPES[112/*Uno.EventArgs*/]));
}

// public bool get_IsContextEnabled() [instance] :6053
bool Visual::IsContextEnabled()
{
    uStackFrame __("Fuse.Visual", "get_IsContextEnabled()");
    return HasBit(2);
}

// public void add_IsContextEnabledChanged(Uno.EventHandler value) [instance] :6010
void Visual::add_IsContextEnabledChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Visual", "add_IsContextEnabledChanged(Uno.EventHandler)");
    AddEventHandler(Visual::_isContextEnabledChangedHandle(), 4, value);
}

// public void remove_IsContextEnabledChanged(Uno.EventHandler value) [instance] :6011
void Visual::remove_IsContextEnabledChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Visual", "remove_IsContextEnabledChanged(Uno.EventHandler)");
    RemoveEventHandler(Visual::_isContextEnabledChangedHandle(), 4, value);
}

// public bool get_IsEnabled() [instance] :6026
bool Visual::IsEnabled()
{
    uStackFrame __("Fuse.Visual", "get_IsEnabled()");
    return HasBit(1);
}

// public void set_IsEnabled(bool value) [instance] :6027
void Visual::IsEnabled(bool value)
{
    uStackFrame __("Fuse.Visual", "set_IsEnabled(bool)");

    if (value != IsEnabled())
    {
        SetBit1(1, value);
        UpdateIsContextEnabledCache();
        OnIsEnabledChanged((uObject*)this);
    }
}

// internal bool get_IsFlat() [instance] :6177
bool Visual::IsFlat()
{
    uStackFrame __("Fuse.Visual", "get_IsFlat()");
    return IsLocalFlat() && AreChildrenFlat();
}

// public bool get_IsInteracting() [instance] :5923
bool Visual::IsInteracting()
{
    uStackFrame __("Fuse.Visual", "get_IsInteracting()");
    return (_interactions != NULL) && (uPtr(_interactions)->Count() > 0);
}

// public generated void add_IsInteractingChanged(Uno.EventHandler value) [instance] :5920
void Visual::add_IsInteractingChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Visual", "add_IsInteractingChanged(Uno.EventHandler)");
    IsInteractingChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(IsInteractingChanged1, value), ::TYPES[63/*Uno.EventHandler*/]);
}

// public generated void remove_IsInteractingChanged(Uno.EventHandler value) [instance] :5920
void Visual::remove_IsInteractingChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Visual", "remove_IsInteractingChanged(Uno.EventHandler)");
    IsInteractingChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(IsInteractingChanged1, value), ::TYPES[63/*Uno.EventHandler*/]);
}

// internal bool get_IsLocalFlat() [instance] :6116
bool Visual::IsLocalFlat()
{
    uStackFrame __("Fuse.Visual", "get_IsLocalFlat()");

    if (_isLocalFlatCached())
        return _isLocalFlat();

    _isLocalFlat(CalcIsLocalFlat());
    _isLocalFlatCached(true);
    return _isLocalFlat();
}

// public bool get_IsVisible() [instance] :6209
bool Visual::IsVisible()
{
    uStackFrame __("Fuse.Visual", "get_IsVisible()");
    return _isVisibleCached;
}

// public void add_IsVisibleChanged(Uno.EventHandler value) [instance] :6198
void Visual::add_IsVisibleChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Visual", "add_IsVisibleChanged(Uno.EventHandler)");
    AddEventHandler(Visual::_isVisibleChangedHandle(), 5, value);
}

// public void remove_IsVisibleChanged(Uno.EventHandler value) [instance] :6199
void Visual::remove_IsVisibleChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Visual", "remove_IsVisibleChanged(Uno.EventHandler)");
    RemoveEventHandler(Visual::_isVisibleChangedHandle(), 5, value);
}

// public Fuse.Visual get_LastVisualChild() [instance] :7808
Visual* Visual::LastVisualChild()
{
    uStackFrame __("Fuse.Visual", "get_LastVisualChild()");
    ::g::Fuse::Node* ret56;

    if (!HasVisualChildren())
        return NULL;

    for (int i = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])); (i--) > 0; )
    {
        Visual* c = uAs<Visual*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Children()), ::TYPES[69/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret56), ret56), Visual_typeof());

        if (c != NULL)
            return c;
    }

    return NULL;
}

// public Fuse.Layer get_Layer() [instance] :6348
int Visual::Layer()
{
    uStackFrame __("Fuse.Visual", "get_Layer()");
    uObject* v;

    if (uPtr(Properties())->TryGet(Visual::_layerProperty(), &v))
        return uUnbox<int>(::g::Fuse::Layer_typeof(), v);

    return 2;
}

// public void set_Layer(Fuse.Layer value) [instance] :6355
void Visual::Layer(int value)
{
    uStackFrame __("Fuse.Visual", "set_Layer(Fuse.Layer)");
    uPtr(Properties())->Set(Visual::_layerProperty(), uBox<int>(::g::Fuse::Layer_typeof(), value));
    InvalidateLayout(2);
}

// public Fuse.LayoutRole get_LayoutRole() [instance] :6370
int Visual::LayoutRole()
{
    uStackFrame __("Fuse.Visual", "get_LayoutRole()");
    uObject* v;

    if (uPtr(Properties())->TryGet(Visual::_layoutRoleProperty(), &v))
        return uUnbox<int>(::g::Fuse::LayoutRole_typeof(), v);

    if (Layer() != 2)
        return 2;

    return 0;
}

// public void set_LayoutRole(Fuse.LayoutRole value) [instance] :6382
void Visual::LayoutRole(int value)
{
    uStackFrame __("Fuse.Visual", "set_LayoutRole(Fuse.LayoutRole)");
    uPtr(Properties())->Set(Visual::_layoutRoleProperty(), uBox<int>(::g::Fuse::LayoutRole_typeof(), value));
    InvalidateLayout(2);
}

// public float2 LocalToParent(float2 localPoint) [instance] :7681
::g::Uno::Float2 Visual::LocalToParent(::g::Uno::Float2 localPoint)
{
    uStackFrame __("Fuse.Visual", "LocalToParent(float2)");
    ::g::Uno::Float2 localPoint_ = localPoint;
    localPoint_ = ::g::Uno::Vector::TransformCoordinate(localPoint_, LocalTransform());
    return localPoint_;
}

// public float4x4 get_LocalTransform() [instance] :7225
::g::Uno::Float4x4 Visual::LocalTransform()
{
    uStackFrame __("Fuse.Visual", "get_LocalTransform()");
    return uPtr(LocalTransformInternal())->Matrix();
}

// protected Fuse.FastMatrix get_LocalTransformInternal() [instance] :7235
::g::Fuse::FastMatrix* Visual::LocalTransformInternal()
{
    uStackFrame __("Fuse.Visual", "get_LocalTransformInternal()");

    if (_localTransform == NULL)
    {
        _localTransform = ::g::Fuse::FastMatrix::Identity();
        PrependLocalTransform(_localTransform);
    }

    return _localTransform;
}

// protected float4x4 get_LocalTransformInverse() [instance] :7249
::g::Uno::Float4x4 Visual::LocalTransformInverse()
{
    uStackFrame __("Fuse.Visual", "get_LocalTransformInverse()");
    return uPtr(LocalTransformInverseInternal())->Matrix();
}

// private Fuse.FastMatrix get_LocalTransformInverseInternal() [instance] :7254
::g::Fuse::FastMatrix* Visual::LocalTransformInverseInternal()
{
    uStackFrame __("Fuse.Visual", "get_LocalTransformInverseInternal()");

    if (_localTransformInverse == NULL)
    {
        _localTransformInverse = ::g::Fuse::FastMatrix::FromFloat4x4(LocalTransform());
        uPtr(_localTransformInverse)->Invert();
    }

    return _localTransformInverse;
}

// private void MakeNodeList(Fuse.Node newItem) [instance] :5064
void Visual::MakeNodeList(::g::Fuse::Node* newItem)
{
    uStackFrame __("Fuse.Visual", "MakeNodeList(Fuse.Node)");
    ::g::Uno::Collections::List* list = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[12/*Uno.Collections.List<Fuse.Node>*/]);
    ::g::Fuse::Node* oldItem = uAs< ::g::Fuse::Node*>(_children, ::TYPES[14/*Fuse.Node*/]);

    if (oldItem != NULL)
        ::g::Uno::Collections::List__Add_fn(uPtr(list), oldItem);

    if (newItem != NULL)
        ::g::Uno::Collections::List__Add_fn(uPtr(list), newItem);

    _children = list;
}

// internal float2 get_MarginBoxPosition() [instance] :6716
::g::Uno::Float2 Visual::MarginBoxPosition()
{
    uStackFrame __("Fuse.Visual", "get_MarginBoxPosition()");
    return _ambPosition;
}

// private Fuse.Node get_Node() [instance] :5061
::g::Fuse::Node* Visual::Node()
{
    uStackFrame __("Fuse.Visual", "get_Node()");
    return uAs< ::g::Fuse::Node*>(_children, ::TYPES[14/*Fuse.Node*/]);
}

// private Uno.Collections.List<Fuse.Node> get_NodeList() [instance] :5062
::g::Uno::Collections::List* Visual::NodeList()
{
    uStackFrame __("Fuse.Visual", "get_NodeList()");
    return uAs< ::g::Uno::Collections::List*>(_children, ::TYPES[12/*Uno.Collections.List<Fuse.Node>*/]);
}

// private void OnAdded(Fuse.Node b) [instance] :5073
void Visual::OnAdded(::g::Fuse::Node* b)
{
    uStackFrame __("Fuse.Visual", "OnAdded(Fuse.Node)");
    Visual* v = uAs<Visual*>(b, Visual_typeof());

    if (v != NULL)
        OnVisualAdded(v);

    ::g::Fuse::Transform* t = uAs< ::g::Fuse::Transform*>(b, ::TYPES[101/*Fuse.Transform*/]);

    if (t != NULL)
        OnTransformAdded(t);

    ::g::Fuse::Node::Relate(this, b);
    OnChildAdded(b);
}

// protected void OnBeginRemoveVisual(Fuse.PendingRemoveVisual args) [instance] :4919
void Visual::OnBeginRemoveVisual(::g::Fuse::PendingRemoveVisual* args)
{
    uStackFrame __("Fuse.Visual", "OnBeginRemoveVisual(Fuse.PendingRemoveVisual)");
    ::g::Fuse::Node* ret34;
    SetBit1(268435456, true);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
    {
        uObject* rvl = uAs<uObject*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Children()), ::TYPES[69/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret34), ret34), ::TYPES[113/*Fuse.IBeginRemoveVisualListener*/]);

        if (rvl != NULL)
            ::g::Fuse::IBeginRemoveVisualListener::OnBeginRemoveVisual(uInterface(uPtr(rvl), ::TYPES[113/*Fuse.IBeginRemoveVisualListener*/]), args);
    }
}

// protected internal void OnBringIntoView(Fuse.Visual elm) [instance] :6745
void Visual::OnBringIntoView(Visual* elm)
{
    uStackFrame __("Fuse.Visual", "OnBringIntoView(Fuse.Visual)");

    if (::g::Uno::Delegate::op_Inequality(RequestBringIntoView1, NULL))
        uPtr(RequestBringIntoView1)->Invoke(2, this, (::g::Fuse::RequestBringIntoViewArgs*)::g::Fuse::RequestBringIntoViewArgs::New2(elm));

    if (Parent() != NULL)
        uPtr(Parent())->OnBringIntoView(elm);
}

// private void OnInteractionsChanged() [instance] :5951
void Visual::OnInteractionsChanged()
{
    uStackFrame __("Fuse.Visual", "OnInteractionsChanged()");

    if (::g::Uno::Delegate::op_Inequality(IsInteractingChanged1, NULL))
        uPtr(IsInteractingChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private void OnInvalidateChildZOffset(Fuse.Visual child) [instance] :7953
void Visual::OnInvalidateChildZOffset(Visual* child)
{
    uStackFrame __("Fuse.Visual", "OnInvalidateChildZOffset(Fuse.Visual)");
    SoftInvalidateZOrder(false);
}

// protected void OnIsContextEnabledChanged() [instance] :6070
void Visual::OnIsContextEnabledChanged()
{
    uStackFrame __("Fuse.Visual", "OnIsContextEnabledChanged()");
    RaiseEvent(Visual::_isContextEnabledChangedHandle(), 4);
    InvalidateHitTestBounds();
    InvalidateVisual();
}

// private void OnIsEnabledChanged(Uno.UX.IPropertyListener origin) [instance] :6038
void Visual::OnIsEnabledChanged(uObject* origin)
{
    uStackFrame __("Fuse.Visual", "OnIsEnabledChanged(Uno.UX.IPropertyListener)");
    OnPropertyChanged1(Visual::_isEnabledName(), origin);
}

// public void OnIsSelectedChanged(bool isSelected) [instance] :7538
void Visual::OnIsSelectedChanged(bool isSelected)
{
}

// protected void OnLocalVisibleChanged() [instance] :6218
void Visual::OnLocalVisibleChanged()
{
    uStackFrame __("Fuse.Visual", "OnLocalVisibleChanged()");
    UpdateIsVisibleCache();
}

// private void OnMatrixChanged(Fuse.Transform t) [instance] :7134
void Visual::OnMatrixChanged(::g::Fuse::Transform* t)
{
    uStackFrame __("Fuse.Visual", "OnMatrixChanged(Fuse.Transform)");
    InvalidateLocalTransform();
}

// private void OnParameterChanged() [instance] :6980
void Visual::OnParameterChanged()
{
    uStackFrame __("Fuse.Visual", "OnParameterChanged()");
    ::g::Fuse::Scripting::Function* ret38;

    if (_parameterListeners != NULL)
    {
        uObject* so = uAs<uObject*>(this, ::TYPES[97/*Fuse.Scripting.IScriptObject*/]);

        if (so != NULL)
        {
            uObject* param = uPtr(::g::Fuse::Scripting::IScriptObject::ScriptContext(uInterface(uPtr(so), ::TYPES[97/*Fuse.Scripting.IScriptObject*/])))->ParseJson(_parameter);

            for (int i = 0; i < uPtr(_parameterListeners)->Count(); i++)
                uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_parameterListeners), uCRef<int>(i), &ret38), ret38))->Call(uArray::Init<uObject*>(::TYPES[10/*object[]*/], 1, param));
        }
    }

    OnPropertyChanged(Visual::ParameterName());
}

// private void OnRemoved(Fuse.Node b) [instance] :5085
void Visual::OnRemoved(::g::Fuse::Node* b)
{
    uStackFrame __("Fuse.Visual", "OnRemoved(Fuse.Node)");
    Visual* v = uAs<Visual*>(b, Visual_typeof());

    if (v != NULL)
        OnVisualRemoved(v);

    ::g::Fuse::Transform* t = uAs< ::g::Fuse::Transform*>(b, ::TYPES[101/*Fuse.Transform*/]);

    if (t != NULL)
        OnTransformRemoved(t);

    ::g::Fuse::Node::Unrelate(this, b);
    OnChildRemoved(b);
}

// private void OnResourceChanged(Uno.UX.Resource res) [instance] :6908
void Visual::OnResourceChanged(::g::Uno::UX::Resource* res)
{
    uStackFrame __("Fuse.Visual", "OnResourceChanged(Uno.UX.Resource)");
    ::g::Fuse::Resources::ResourceRegistry::NotifyResourceChanged(uPtr(res)->Key());
}

// private void OnTemplatesChanged(Uno.UX.Template t) [instance] :7445
void Visual::OnTemplatesChanged(::g::Uno::UX::Template* t)
{
    uStackFrame __("Fuse.Visual", "OnTemplatesChanged(Uno.UX.Template)");
    ::g::Fuse::Node* ret39;

    if (IsRootingCompleted())

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
        {
            uObject* to = uAs<uObject*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Children()), ::TYPES[69/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret39), ret39), ::TYPES[116/*Fuse.ITemplateObserver*/]);

            if (to != NULL)
                ::g::Fuse::ITemplateObserver::OnTemplatesChangedWileRooted(uInterface(uPtr(to), ::TYPES[116/*Fuse.ITemplateObserver*/]));
        }
}

// private void OnTransformAdded(Fuse.Transform t) [instance] :7120
void Visual::OnTransformAdded(::g::Fuse::Transform* t)
{
    uStackFrame __("Fuse.Visual", "OnTransformAdded(Fuse.Transform)");
    _transformCount++;
    uPtr(t)->add_MatrixChanged(uDelegate::New(::TYPES[75/*Uno.Action<Fuse.Transform>*/], (void*)Visual__OnMatrixChanged_fn, this));
    OnMatrixChanged(t);
}

// private void OnTransformRemoved(Fuse.Transform t) [instance] :7127
void Visual::OnTransformRemoved(::g::Fuse::Transform* t)
{
    uStackFrame __("Fuse.Visual", "OnTransformRemoved(Fuse.Transform)");
    _transformCount--;
    uPtr(t)->remove_MatrixChanged(uDelegate::New(::TYPES[75/*Uno.Action<Fuse.Transform>*/], (void*)Visual__OnMatrixChanged_fn, this));
    OnMatrixChanged(t);
}

// private void OnVisualAdded(Fuse.Visual v) [instance] :5097
void Visual::OnVisualAdded(Visual* v)
{
    uStackFrame __("Fuse.Visual", "OnVisualAdded(Fuse.Visual)");
    ::g::Uno::Collections::List__Insert_fn(uPtr(ZOrder()), uCRef<int>(0), v);
    InvalidateZOrder();
    InvalidateHitTestBounds();
    InvalidateRenderBounds();
}

// private void OnVisualRemoved(Fuse.Visual v) [instance] :5105
void Visual::OnVisualRemoved(Visual* v)
{
    uStackFrame __("Fuse.Visual", "OnVisualRemoved(Fuse.Visual)");
    bool ret40;
    uPtr(v)->CancelPendingRemove();
    ::g::Uno::Collections::List__Remove_fn(uPtr(ZOrder()), v, &ret40);
    InvalidateZOrder();
    InvalidateHitTestBounds();
    InvalidateRenderBounds();
}

// public string get_Parameter() [instance] :6950
uString* Visual::Parameter()
{
    uStackFrame __("Fuse.Visual", "get_Parameter()");
    return _parameter;
}

// public void set_Parameter(string value) [instance] :6951
void Visual::Parameter(uString* value)
{
    uStackFrame __("Fuse.Visual", "set_Parameter(string)");

    if (::g::Uno::String::op_Inequality(_parameter, value))
    {
        _parameter = value;
        OnParameterChanged();
    }
}

// protected void PerformLayout() [instance] :6592
void Visual::PerformLayout()
{
    uStackFrame __("Fuse.Visual", "PerformLayout()");
    PerformLayout1(::g::Fuse::ICommonViewport::Size(uInterface(uPtr(Viewport()), ::TYPES[32/*Fuse.ICommonViewport*/])));
}

// protected void PerformLayout(float2 clientSize) [instance] :6600
void Visual::PerformLayout1(::g::Uno::Float2 clientSize)
{
    uStackFrame __("Fuse.Visual", "PerformLayout(float2)");

    if ((_cachedRenderTargetSize.X != clientSize.X) || (_cachedRenderTargetSize.Y != clientSize.Y))
    {
        _cachedRenderTargetSize = clientSize;
        InvalidateLayout(2);
    }

    if (_layoutDirty != 0)
    {
        Visual::_performingLayout() = true;

        {
            const auto __finally_fun = [&]()
            {
                Visual::_performingLayout() = false;
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);

            if (_layoutDirty == 2)
            {
                ::g::Uno::Float2 availableSize = clientSize;
                ::g::Uno::Float2 offset = ::g::Uno::Float2__New1(0.0f);
                ArrangeMarginBox(offset, ::g::Fuse::LayoutParams__Create(availableSize));
            }
            else 
                UpdateLayout();
        }
    }
}

// private void PrependExplicitTransforms(Fuse.FastMatrix m) [instance] :7325
void Visual::PrependExplicitTransforms(::g::Fuse::FastMatrix* m)
{
    uStackFrame __("Fuse.Visual", "PrependExplicitTransforms(Fuse.FastMatrix)");
    ::g::Fuse::Node* ret41;

    if (HasExplicitTransforms())
    {
        PrependTransformOrigin(m);

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
        {
            ::g::Fuse::Transform* t = uAs< ::g::Fuse::Transform*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Children()), ::TYPES[69/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret41), ret41), ::TYPES[101/*Fuse.Transform*/]);

            if (t != NULL)
                uPtr(t)->PrependTo(m);
        }

        PrependInverseTransformOrigin(m);
    }
}

// private void PrependLocalTransform(Fuse.FastMatrix m) [instance] :7319
void Visual::PrependLocalTransform(::g::Fuse::FastMatrix* m)
{
    uStackFrame __("Fuse.Visual", "PrependLocalTransform(Fuse.FastMatrix)");
    PrependImplicitTransform(m);
    PrependExplicitTransforms(m);
}

// private void RaiseEvent(Fuse.PropertyHandle ph, Fuse.Visual.VisualBits ne) [instance] :5401
void Visual::RaiseEvent(::g::Fuse::PropertyHandle* ph, int ne)
{
    uStackFrame __("Fuse.Visual", "RaiseEvent(Fuse.PropertyHandle,Fuse.Visual.VisualBits)");

    if (HasBit2(ne))
        uPtr(Properties())->ForeachInList1(ph, uDelegate::New(::TYPES[117/*Uno.Action<object, object>*/], (void*)Visual__InvokeEventHandler_fn, this), ::g::Uno::EventArgs::Empty());
}

// private void RearrangeMarginBox() [instance] :6665
void Visual::RearrangeMarginBox()
{
    uStackFrame __("Fuse.Visual", "RearrangeMarginBox()");

    if (!HasMarginBox())
        U_THROW(::g::Uno::Exception::New2(::STRINGS[82/*"Invalid cal...*/]));

    ArrangeMarginBox(_ambPosition, _ambLayoutParams);
}

// public bool Remove(Fuse.Node item) [instance] :5135
bool Visual::Remove1(::g::Fuse::Node* item)
{
    uStackFrame __("Fuse.Visual", "Remove(Fuse.Node)");
    bool ret42;
    bool r;

    if (_children == item)
    {
        _children = NULL;
        r = true;
    }
    else  if ((_children == NULL) || uIs((uObject*)_children, ::TYPES[14/*Fuse.Node*/]))
        r = false;
    else 
        r = (::g::Uno::Collections::List__Remove_fn(uPtr(NodeList()), item, &ret42), ret42);

    if (r)
        OnRemoved(item);

    return r;
}

// public void RemoveAllChildren<T>() [instance] :5003
void Visual::RemoveAllChildren(uType* __type)
{
    uType* __types[] = {
        __type->U(0),
    };
    uStackFrame __("Fuse.Visual", "RemoveAllChildren`1()");
    ::g::Fuse::Node* ret43;
    int i = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])) - 1;

    while (i >= 0)
    {
        if (uIs((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Children()), ::TYPES[69/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret43), ret43), __types[0]))
            ::g::Uno::Collections::IList::RemoveAt(uInterface(uPtr(Children()), ::TYPES[69/*Uno.Collections.IList<Fuse.Node>*/]), i);

        i = ::g::Uno::Math::Min8(i, ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]))) - 1;
    }
}

// public void RemoveDrawCost(double cost) [instance] :7557
void Visual::RemoveDrawCost(double cost)
{
    uStackFrame __("Fuse.Visual", "RemoveDrawCost(double)");
    Visual* p = this;

    while (p != NULL)
    {
        uPtr(p)->_drawCost = (uPtr(p)->_drawCost - cost);
        p = uPtr(p)->Parent();
    }
}

// private void RemoveEventHandler(Fuse.PropertyHandle ph, Fuse.Visual.VisualBits ne, object handler) [instance] :5418
void Visual::RemoveEventHandler(::g::Fuse::PropertyHandle* ph, int ne, uObject* handler)
{
    uStackFrame __("Fuse.Visual", "RemoveEventHandler(Fuse.PropertyHandle,Fuse.Visual.VisualBits,object)");
    uPtr(Properties())->RemoveFromList(ph, handler);
    uObject* foo;

    if (!uPtr(Properties())->TryGet(ph, &foo))
        ClearBit2(ne);
}

// public generated void add_RequestBringIntoView(Fuse.RequestBringIntoViewHandler value) [instance] :6743
void Visual::add_RequestBringIntoView(uDelegate* value)
{
    uStackFrame __("Fuse.Visual", "add_RequestBringIntoView(Fuse.RequestBringIntoViewHandler)");
    RequestBringIntoView1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(RequestBringIntoView1, value), ::TYPES[126/*Fuse.RequestBringIntoViewHandler*/]);
}

// public generated void remove_RequestBringIntoView(Fuse.RequestBringIntoViewHandler value) [instance] :6743
void Visual::remove_RequestBringIntoView(uDelegate* value)
{
    uStackFrame __("Fuse.Visual", "remove_RequestBringIntoView(Fuse.RequestBringIntoViewHandler)");
    RequestBringIntoView1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(RequestBringIntoView1, value), ::TYPES[126/*Fuse.RequestBringIntoViewHandler*/]);
}

// private void ResetParameterListeners() [instance] :6995
void Visual::ResetParameterListeners()
{
    uStackFrame __("Fuse.Visual", "ResetParameterListeners()");
    _parameterListeners = NULL;
}

// public Uno.Collections.IList<Uno.UX.Resource> get_Resources() [instance] :6853
uObject* Visual::Resources()
{
    uStackFrame __("Fuse.Visual", "get_Resources()");

    if (!HasResources())
    {
        SetBit4(1);
        uPtr(Properties())->Set(Visual::_resourcesHandle(), (::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[122/*Uno.Collections.ObservableList<Uno.UX.Resource>*/], uDelegate::New(::TYPES[123/*Uno.Action<Uno.UX.Resource>*/], (void*)Visual__OnResourceChanged_fn, this), uDelegate::New(::TYPES[123/*Uno.Action<Uno.UX.Resource>*/], (void*)Visual__OnResourceChanged_fn, this)));
    }

    return (uObject*)uPtr(Properties())->Get(Visual::_resourcesHandle());
}

// public void SendToBack(Fuse.Visual item) [instance] :7872
void Visual::SendToBack(Visual* item)
{
    uStackFrame __("Fuse.Visual", "SendToBack(Fuse.Visual)");
    ::g::Uno::Collections::List__Enumerator<uStrong<Visual*> > ret44;

    if (!HasChildren())
        return;

    EnsureZOrder();
    int mn = uPtr(item)->ZOffsetNatural;

    for (::g::Uno::Collections::List__Enumerator<uStrong<Visual*> > enum5 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(ZOrder()), &ret44), ret44); enum5.MoveNext(::TYPES[6/*Uno.Collections.List<Fuse.Visual>.Enumerator*/]); )
    {
        Visual* c = enum5.Current(::TYPES[6/*Uno.Collections.List<Fuse.Visual>.Enumerator*/]);

        if (uPtr(c)->ZLayer == uPtr(item)->ZLayer)
            mn = ::g::Uno::Math::Min8(mn, uPtr(c)->ZOffsetNatural);
    }

    item->ZOffsetNatural = (mn - 1);
    item->ZOffsetFixed = true;
    SoftInvalidateZOrder(false);
}

// internal void SetBit(Fuse.FastProperty1 p) [instance] :5543
void Visual::SetBit(int p)
{
    uStackFrame __("Fuse.Visual", "SetBit(Fuse.FastProperty1)");
    _fastPropertyBits1 = (_fastPropertyBits1 | p);
}

// internal void SetBit(Fuse.FastProperty1 p, bool value) [instance] :5548
void Visual::SetBit1(int p, bool value)
{
    uStackFrame __("Fuse.Visual", "SetBit(Fuse.FastProperty1,bool)");

    if (value)
        SetBit(p);
    else 
        ClearBit(p);
}

// internal void SetBit(Fuse.FastProperty2 p) [instance] :5695
void Visual::SetBit2(int p)
{
    uStackFrame __("Fuse.Visual", "SetBit(Fuse.FastProperty2)");
    _fastPropertyBits2 = (_fastPropertyBits2 | p);
}

// internal void SetBit(Fuse.FastProperty2 p, bool value) [instance] :5700
void Visual::SetBit3(int p, bool value)
{
    uStackFrame __("Fuse.Visual", "SetBit(Fuse.FastProperty2,bool)");

    if (value)
        SetBit2(p);
    else 
        ClearBit1(p);
}

// private void SetBit(Fuse.Visual.VisualBits nb) [instance] :5398
void Visual::SetBit4(int nb)
{
    uStackFrame __("Fuse.Visual", "SetBit(Fuse.Visual.VisualBits)");
    _nodebits = (_nodebits | (1 << nb));
}

// public void SetResource(string key, object value) [instance] :6864
void Visual::SetResource(uString* key, uObject* value)
{
    uStackFrame __("Fuse.Visual", "SetResource(string,object)");
    ::g::Uno::UX::Resource* ret45;
    uObject* resources = Resources();

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(resources), ::TYPES[118/*Uno.Collections.ICollection<Uno.UX.Resource>*/])); ++i)
    {
        ::g::Uno::UX::Resource* r = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(resources), ::TYPES[119/*Uno.Collections.IList<Uno.UX.Resource>*/]), uCRef<int>(i), &ret45), ret45);

        if (::g::Uno::String::op_Equality(uPtr(r)->Key(), key))
        {
            ::g::Uno::Collections::IList::RemoveAt(uInterface(uPtr(resources), ::TYPES[119/*Uno.Collections.IList<Uno.UX.Resource>*/]), i);
            break;
        }
    }

    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(resources), ::TYPES[118/*Uno.Collections.ICollection<Uno.UX.Resource>*/]), ::g::Uno::UX::Resource::New1(key, value));
}

// protected float2 Snap(float2 p) [instance] :6505
::g::Uno::Float2 Visual::Snap(::g::Uno::Float2 p)
{
    uStackFrame __("Fuse.Visual", "Snap(float2)");
    ::g::Uno::Float2 s = ::g::Uno::Float2__op_Division1(::g::Uno::Math::Round4(::g::Uno::Float2__op_Multiply1(p, AbsoluteZoom())), AbsoluteZoom());
    return s;
}

// protected float2 SnapDown(float2 p) [instance] :6530
::g::Uno::Float2 Visual::SnapDown(::g::Uno::Float2 p)
{
    uStackFrame __("Fuse.Visual", "SnapDown(float2)");
    ::g::Uno::Float2 s = ::g::Uno::Float2__op_Division1(::g::Uno::Math::Floor2(::g::Uno::Float2__op_Addition1(::g::Uno::Float2__op_Multiply1(p, AbsoluteZoom()), 0.005f)), AbsoluteZoom());
    return s;
}

// public bool get_SnapToPixels() [instance] :6558
bool Visual::SnapToPixels()
{
    uStackFrame __("Fuse.Visual", "get_SnapToPixels()");
    return HasBit(67108864);
}

// public void set_SnapToPixels(bool value) [instance] :6562
void Visual::SnapToPixels(bool value)
{
    uStackFrame __("Fuse.Visual", "set_SnapToPixels(bool)");

    if ((SnapToPixels() != value) || !HasBit(134217728))
    {
        SetBit(134217728);
        SetBit1(33554432, value);
        UpdateContextSnapToPixelsCache();
        InvalidateLayout(2);
    }
}

// protected float2 SnapUp(float2 p) [instance] :6524
::g::Uno::Float2 Visual::SnapUp(::g::Uno::Float2 p)
{
    uStackFrame __("Fuse.Visual", "SnapUp(float2)");
    ::g::Uno::Float2 s = ::g::Uno::Float2__op_Division1(::g::Uno::Math::Ceil2(::g::Uno::Float2__op_Subtraction1(::g::Uno::Float2__op_Multiply1(p, AbsoluteZoom()), 0.005f)), AbsoluteZoom());
    return s;
}

// private void SoftInvalidateZOrder([bool force]) [instance] :7963
void Visual::SoftInvalidateZOrder(bool force)
{
    uStackFrame __("Fuse.Visual", "SoftInvalidateZOrder([bool])");
    OnZOrderInvalidated();

    if (!_sortedZOrder && !force)
        return;

    _sortedZOrder = false;
    InvalidateVisual();

    if (::g::Uno::Delegate::op_Inequality(ZOrderChanged1, NULL))
        ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)Visual__EmitZOrderChanged_fn, this), -1, 0);
}

// public Uno.Collections.IList<Uno.UX.Template> get_Templates() [instance] :7439
uObject* Visual::Templates()
{
    uStackFrame __("Fuse.Visual", "get_Templates()");
    uObject* ind7 = _templates;
    return (ind7 != NULL) ? ind7 : (uObject*)(_templates = (uObject*)((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[124/*Uno.Collections.ObservableList<Uno.UX.Template>*/], uDelegate::New(::TYPES[125/*Uno.Action<Uno.UX.Template>*/], (void*)Visual__OnTemplatesChanged_fn, this), uDelegate::New(::TYPES[125/*Uno.Action<Uno.UX.Template>*/], (void*)Visual__OnTemplatesChanged_fn, this))));
}

// public bool TryParentToLocal(float2 parentPoint, float2& result) [instance] :7671
bool Visual::TryParentToLocal(::g::Uno::Float2 parentPoint, ::g::Uno::Float2* result)
{
    uStackFrame __("Fuse.Visual", "TryParentToLocal(float2,float2&)");
    ::g::Uno::Float2 parentPoint_ = parentPoint;
    ::g::Fuse::FastMatrix* t = LocalTransformInverseInternal();
    *result = ::g::Uno::Vector::TransformCoordinate(parentPoint_, uPtr(t)->Matrix());
    return t->IsValid();
}

// private void UpdateContextSnapToPixelsCache() [instance] :6574
void Visual::UpdateContextSnapToPixelsCache()
{
    uStackFrame __("Fuse.Visual", "UpdateContextSnapToPixelsCache()");
    ::g::Fuse::Node* ret53;
    bool newValue = HasBit(134217728) ? HasBit(33554432) : (Parent() != NULL) ? uPtr(Parent())->SnapToPixels() : true;

    if (newValue != SnapToPixels())
    {
        SetBit1(67108864, newValue);

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
        {
            Visual* v = uAs<Visual*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Children()), ::TYPES[69/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret53), ret53), Visual_typeof());

            if (v != NULL)
                uPtr(v)->UpdateContextSnapToPixelsCache();
        }
    }
}

// private void UpdateIsContextEnabledCache() [instance] :6056
void Visual::UpdateIsContextEnabledCache()
{
    uStackFrame __("Fuse.Visual", "UpdateIsContextEnabledCache()");
    bool newValue = IsEnabled() && ((Parent() == NULL) || uPtr(Parent())->IsContextEnabled());

    if (IsContextEnabled() != newValue)
    {
        SetBit1(2, newValue);
        OnIsContextEnabledChanged();

        for (int i = 0; i < ZOrderChildCount(); i++)
            uPtr(GetZOrderChild(i))->UpdateIsContextEnabledCache();
    }
}

// private void UpdateIsVisibleCache() [instance] :6223
void Visual::UpdateIsVisibleCache()
{
    uStackFrame __("Fuse.Visual", "UpdateIsVisibleCache()");
    bool newValue = IsLocalVisible() && ((Parent() == NULL) || uPtr(Parent())->IsVisible());

    if (_isVisibleCached != newValue)
    {
        _isVisibleCached = newValue;
        OnIsVisibleChanged();

        for (int i = 0; i < ZOrderChildCount(); i++)
            uPtr(GetZOrderChild(i))->UpdateIsVisibleCache();
    }
}

// private void UpdateLayout() [instance] :6634
void Visual::UpdateLayout()
{
    uStackFrame __("Fuse.Visual", "UpdateLayout()");
    ::g::Fuse::Node* ret54;

    switch (_layoutDirty)
    {
        case 0:
            break;
        case 1:
        {
            for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
            {
                Visual* v = uAs<Visual*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Children()), ::TYPES[69/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret54), ret54), Visual_typeof());

                if (v != NULL)
                    uPtr(v)->UpdateLayout();
            }

            break;
        }
        case 2:
        {
            RearrangeMarginBox();
            break;
        }
    }

    _layoutDirty = 0;
}

// public int get_ValidFrameCount() [instance] :7759
int Visual::ValidFrameCount()
{
    uStackFrame __("Fuse.Visual", "get_ValidFrameCount()");
    return ::g::Fuse::UpdateManager::FrameIndex() - _lastInvalidate;
}

// public Fuse.IViewport get_Viewport() [instance] :7703
uObject* Visual::Viewport()
{
    uStackFrame __("Fuse.Visual", "get_Viewport()");
    uObject* ind8 = _viewport;
    return (ind8 != NULL) ? ind8 : (uObject*)FindViewport();
}

// public float2 WindowToLocal(float2 windowCoord) [instance] :7339
::g::Uno::Float2 Visual::WindowToLocal(::g::Uno::Float2 windowCoord)
{
    uStackFrame __("Fuse.Visual", "WindowToLocal(float2)");

    if (HitTestTransform() == 0)
    {
        ::g::Uno::Float2 parentCoord = (Parent() == NULL) ? windowCoord : uPtr(Parent())->WindowToLocal(windowCoord);
        return ::g::Uno::Vector::TransformCoordinate(parentCoord, LocalTransformInverse());
    }
    else 
    {
        ::g::Uno::Geometry::Ray world = ::g::Fuse::IViewport::PointToWorldRay(uInterface(uPtr(Viewport()), ::TYPES[8/*Fuse.IViewport*/]), windowCoord);
        ::g::Uno::Geometry::Ray local = ::g::Fuse::IViewport::WorldToLocalRay(uInterface(uPtr(Viewport()), ::TYPES[8/*Fuse.IViewport*/]), Viewport(), world, this);
        return ::g::Fuse::FrustumViewport::LocalPlaneIntersection(local);
    }
}

// public float3 get_WorldPosition() [instance] :7198
::g::Uno::Float3 Visual::WorldPosition()
{
    uStackFrame __("Fuse.Visual", "get_WorldPosition()");
    ::g::Uno::Float4x4 ind6 = uPtr(WorldTransformInternal())->Matrix();
    return ::g::Uno::Float3__New2(ind6.M41, ind6.M42, ind6.M43);
}

// public float4x4 get_WorldTransform() [instance] :7190
::g::Uno::Float4x4 Visual::WorldTransform()
{
    uStackFrame __("Fuse.Visual", "get_WorldTransform()");
    return uPtr(WorldTransformInternal())->Matrix();
}

// private Fuse.FastMatrix get_WorldTransformInternal() [instance] :7209
::g::Fuse::FastMatrix* Visual::WorldTransformInternal()
{
    uStackFrame __("Fuse.Visual", "get_WorldTransformInternal()");

    if (_worldTransform == NULL)
        _worldTransform = CalcWorldTransform();

    return _worldTransform;
}

// public void add_WorldTransformInvalidated(Uno.EventHandler value) [instance] :7165
void Visual::add_WorldTransformInvalidated(uDelegate* value)
{
    uStackFrame __("Fuse.Visual", "add_WorldTransformInvalidated(Uno.EventHandler)");
    AddEventHandler(Visual::_worldTransformInvalidatedHandle(), 10, value);
}

// public void remove_WorldTransformInvalidated(Uno.EventHandler value) [instance] :7166
void Visual::remove_WorldTransformInvalidated(uDelegate* value)
{
    uStackFrame __("Fuse.Visual", "remove_WorldTransformInvalidated(Uno.EventHandler)");
    RemoveEventHandler(Visual::_worldTransformInvalidatedHandle(), 10, value);
}

// public float4x4 get_WorldTransformInverse() [instance] :7177
::g::Uno::Float4x4 Visual::WorldTransformInverse()
{
    uStackFrame __("Fuse.Visual", "get_WorldTransformInverse()");

    if (_worldTransformInverse == NULL)
    {
        _worldTransformInverse = uPtr(WorldTransformInternal())->Copy();
        uPtr(_worldTransformInverse)->Invert();
    }

    return uPtr(_worldTransformInverse)->Matrix();
}

// public float get_ZOffset() [instance] :6773
float Visual::ZOffset()
{
    uStackFrame __("Fuse.Visual", "get_ZOffset()");
    return _zOffset;
}

// public void set_ZOffset(float value) [instance] :6774
void Visual::ZOffset(float value)
{
    uStackFrame __("Fuse.Visual", "set_ZOffset(float)");

    if (_zOffset == value)
        return;

    _zOffset = value;

    if (Parent() != NULL)
        uPtr(Parent())->OnInvalidateChildZOffset(this);
}

// internal Uno.Collections.List<Fuse.Visual> get_ZOrder() [instance] :7838
::g::Uno::Collections::List* Visual::ZOrder()
{
    uStackFrame __("Fuse.Visual", "get_ZOrder()");

    if (_zOrder == NULL)
        _zOrder = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[1/*Uno.Collections.List<Fuse.Visual>*/]));

    return _zOrder;
}

// internal generated void add_ZOrderChanged(Uno.EventHandler value) [instance] :7958
void Visual::add_ZOrderChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Visual", "add_ZOrderChanged(Uno.EventHandler)");
    ZOrderChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ZOrderChanged1, value), ::TYPES[63/*Uno.EventHandler*/]);
}

// internal generated void remove_ZOrderChanged(Uno.EventHandler value) [instance] :7958
void Visual::remove_ZOrderChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Visual", "remove_ZOrderChanged(Uno.EventHandler)");
    ZOrderChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ZOrderChanged1, value), ::TYPES[63/*Uno.EventHandler*/]);
}

// public int get_ZOrderChildCount() [instance] :7823
int Visual::ZOrderChildCount()
{
    uStackFrame __("Fuse.Visual", "get_ZOrderChildCount()");

    if (!HasVisualChildren())
        return 0;

    return uPtr(ZOrder())->Count();
}

// private int ZOrderComparator(Fuse.Visual a, Fuse.Visual b) [instance] :7890
int Visual::ZOrderComparator(Visual* a, Visual* b)
{
    uStackFrame __("Fuse.Visual", "ZOrderComparator(Fuse.Visual,Fuse.Visual)");

    if (uPtr(a)->ZLayer != uPtr(b)->ZLayer)
        return uPtr(a)->ZLayer - uPtr(b)->ZLayer;

    if (uPtr(a)->ZOffset() != uPtr(b)->ZOffset())
        return (uPtr(a)->ZOffset() > uPtr(b)->ZOffset()) ? 1 : -1;

    return uPtr(a)->ZOffsetNatural - uPtr(b)->ZOffsetNatural;
}

// private static void AssignZOrder(Uno.Collections.IList<Fuse.Node> nodes) [static] :7901
void Visual::AssignZOrder(uObject* nodes)
{
    uStackFrame __("Fuse.Visual", "AssignZOrder(Uno.Collections.IList<Fuse.Node>)");
    Visual_typeof()->Init();
    ::g::Fuse::Node* ret10;
    uArray* current = uArray::Init<int>(::TYPES[99/*int[]*/], 4, 0, 0, 0, 0);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(nodes), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
    {
        Visual* visual = uAs<Visual*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(nodes), ::TYPES[69/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret10), ret10), Visual_typeof());

        if (visual == NULL)
            continue;

        int c = uPtr(visual)->Layer();
        visual->ZLayer = c;

        if (!visual->ZOffsetFixed)
            uPtr(visual)->ZOffsetNatural = (uPtr(current)->Item<int>(c)--);
    }
}

// private static void bringIntoView(Fuse.Scripting.Context c, Fuse.Visual n, object[] args) [static] :7047
void Visual::bringIntoView(::g::Fuse::Scripting::Context* c, Visual* n, uArray* args)
{
    uStackFrame __("Fuse.Visual", "bringIntoView(Fuse.Scripting.Context,Fuse.Visual,object[])");
    Visual_typeof()->Init();
    uPtr(n)->BringIntoView();
}

// private static Uno.UX.Property<string> getParameterProperty(Fuse.Visual v) [static] :7035
::g::Uno::UX::Property1* Visual::getParameterProperty(Visual* v)
{
    uStackFrame __("Fuse.Visual", "getParameterProperty(Fuse.Visual)");
    Visual_typeof()->Init();

    if (uPtr(v)->_parameterProperty == NULL)
        uPtr(v)->_parameterProperty = Visual__ParameterProperty::New1(v);

    return uPtr(v)->_parameterProperty;
}

// private static void onParameterChanged(Fuse.Scripting.Context c, Fuse.Visual v, object[] args) [static] :7073
void Visual::onParameterChanged(::g::Fuse::Scripting::Context* c, Visual* v, uArray* args)
{
    uStackFrame __("Fuse.Visual", "onParameterChanged(Fuse.Scripting.Context,Fuse.Visual,object[])");
    Visual_typeof()->Init();
    uPtr(v)->AddParameterChangedListener(uCast< ::g::Fuse::Scripting::Function*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[54/*Fuse.Scripting.Function*/]));
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// private enum Visual.VisualBits :5382
uEnumType* Visual__VisualBits_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Visual.VisualBits", ::g::Uno::Int_typeof(), 11);
    type->SetLiterals(
        "Styled", 0LL,
        "Resources", 1LL,
        "ResourceChanged", 2LL,
        "Style", 3LL,
        "IsContextEnabledChanged", 4LL,
        "IsVisibleChanged", 5LL,
        "Added", 6LL,
        "Removed", 7LL,
        "Rooted", 8LL,
        "Unrooted", 9LL,
        "WorldTransformInvalidated", 10LL);
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public sealed class VisualBounds :4569
// {
// static VisualBounds() :4569
static void VisualBounds__cctor__fn(uType* __type)
{
    VisualBounds::_empty_ = VisualBounds::New1();
    VisualBounds::_infinite_ = VisualBounds::New1();
}

static void VisualBounds_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Geometry::Box_typeof(), offsetof(::g::Fuse::VisualBounds, _box), 0,
        VisualBounds_typeof(), (uintptr_t)&::g::Fuse::VisualBounds::_empty_, uFieldFlagsStatic,
        VisualBounds_typeof(), (uintptr_t)&::g::Fuse::VisualBounds::_infinite_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(27,
        new uFunction("AddPoint", NULL, (void*)VisualBounds__AddPoint_fn, 0, false, VisualBounds_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("AddPoint", NULL, (void*)VisualBounds__AddPoint1_fn, 0, false, VisualBounds_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("AddRect", NULL, (void*)VisualBounds__AddRect_fn, 0, false, VisualBounds_typeof(), 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("AddRect", NULL, (void*)VisualBounds__AddRect1_fn, 0, false, VisualBounds_typeof(), 1, ::g::Uno::Rect_typeof()),
        new uFunction("get_AxisMax", NULL, (void*)VisualBounds__get_AxisMax_fn, 0, false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("get_AxisMin", NULL, (void*)VisualBounds__get_AxisMin_fn, 0, false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("Box", NULL, (void*)VisualBounds__Box_fn, 0, true, VisualBounds_typeof(), 1, ::g::Uno::Geometry::Box_typeof()),
        new uFunction("BoxTransform", NULL, (void*)VisualBounds__BoxTransform_fn, 0, true, ::g::Uno::Geometry::Box_typeof(), 2, ::g::Uno::Geometry::Box_typeof(), ::g::Uno::Float4x4_typeof()),
        new uFunction("ContainsPoint", NULL, (void*)VisualBounds__ContainsPoint_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_Empty", NULL, (void*)VisualBounds__get_Empty_fn, 0, true, VisualBounds_typeof(), 0),
        new uFunction("get_FlatRect", NULL, (void*)VisualBounds__get_FlatRect_fn, 0, false, ::g::Uno::Rect_typeof(), 0),
        new uFunction("get_Infinite", NULL, (void*)VisualBounds__get_Infinite_fn, 0, true, VisualBounds_typeof(), 0),
        new uFunction("InflateXY", NULL, (void*)VisualBounds__InflateXY_fn, 0, false, VisualBounds_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("IntersectsRay", NULL, (void*)VisualBounds__IntersectsRay_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Geometry::Ray_typeof()),
        new uFunction("IntersectXY", NULL, (void*)VisualBounds__IntersectXY_fn, 0, false, VisualBounds_typeof(), 1, VisualBounds_typeof()),
        new uFunction("get_IsEmpty", NULL, (void*)VisualBounds__get_IsEmpty_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsFlat", NULL, (void*)VisualBounds__get_IsFlat_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsInfinite", NULL, (void*)VisualBounds__get_IsInfinite_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("Merge", NULL, (void*)VisualBounds__Merge_fn, 0, false, VisualBounds_typeof(), 2, VisualBounds_typeof(), ::g::Fuse::FastMatrix_typeof()),
        new uFunction("MergeChild", NULL, (void*)VisualBounds__MergeChild_fn, 0, false, VisualBounds_typeof(), 2, ::g::Fuse::Visual_typeof(), VisualBounds_typeof()),
        new uFunction("Point", NULL, (void*)VisualBounds__Point_fn, 0, true, VisualBounds_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("Rect", NULL, (void*)VisualBounds__Rect_fn, 0, true, VisualBounds_typeof(), 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("Rect", NULL, (void*)VisualBounds__Rect1_fn, 0, true, VisualBounds_typeof(), 2, ::g::Uno::Float3_typeof(), ::g::Uno::Float3_typeof()),
        new uFunction("get_Size", NULL, (void*)VisualBounds__get_Size_fn, 0, false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("Transform", NULL, (void*)VisualBounds__Transform_fn, 0, false, VisualBounds_typeof(), 1, ::g::Uno::Float4x4_typeof()),
        new uFunction("TransformFlatten", NULL, (void*)VisualBounds__TransformFlatten_fn, 0, false, VisualBounds_typeof(), 1, ::g::Uno::Float4x4_typeof()),
        new uFunction("Translate", NULL, (void*)VisualBounds__Translate_fn, 0, false, VisualBounds_typeof(), 1, ::g::Uno::Float3_typeof()));
}

uType* VisualBounds_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(VisualBounds);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.VisualBounds", options);
    type->fp_build_ = VisualBounds_build;
    type->fp_ctor_ = (void*)VisualBounds__New1_fn;
    type->fp_cctor_ = VisualBounds__cctor__fn;
    return type;
}

// private VisualBounds() :4571
void VisualBounds__ctor__fn(VisualBounds* __this)
{
    __this->ctor_();
}

// public Fuse.VisualBounds AddPoint(float2 pt) :4647
void VisualBounds__AddPoint_fn(VisualBounds* __this, ::g::Uno::Float2* pt, VisualBounds** __retval)
{
    *__retval = __this->AddPoint(*pt);
}

// public Fuse.VisualBounds AddPoint(float3 pt) :4642
void VisualBounds__AddPoint1_fn(VisualBounds* __this, ::g::Uno::Float3* pt, VisualBounds** __retval)
{
    *__retval = __this->AddPoint1(*pt);
}

// public Fuse.VisualBounds AddRect(float2 mn, float2 mx) :4652
void VisualBounds__AddRect_fn(VisualBounds* __this, ::g::Uno::Float2* mn, ::g::Uno::Float2* mx, VisualBounds** __retval)
{
    *__retval = __this->AddRect(*mn, *mx);
}

// public Fuse.VisualBounds AddRect(Uno.Rect r) :4657
void VisualBounds__AddRect1_fn(VisualBounds* __this, ::g::Uno::Rect* r, VisualBounds** __retval)
{
    *__retval = __this->AddRect1(*r);
}

// public float3 get_AxisMax() :4629
void VisualBounds__get_AxisMax_fn(VisualBounds* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->AxisMax();
}

// public float3 get_AxisMin() :4628
void VisualBounds__get_AxisMin_fn(VisualBounds* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->AxisMin();
}

// public static Fuse.VisualBounds Box(Uno.Geometry.Box a) :4619
void VisualBounds__Box_fn(::g::Uno::Geometry::Box* a, VisualBounds** __retval)
{
    *__retval = VisualBounds::Box(*a);
}

// public static Uno.Geometry.Box BoxTransform(Uno.Geometry.Box box, float4x4 transform) :4795
void VisualBounds__BoxTransform_fn(::g::Uno::Geometry::Box* box, ::g::Uno::Float4x4* transform, ::g::Uno::Geometry::Box* __retval)
{
    *__retval = VisualBounds::BoxTransform(*box, *transform);
}

// public bool ContainsPoint(float2 pt) :4761
void VisualBounds__ContainsPoint_fn(VisualBounds* __this, ::g::Uno::Float2* pt, bool* __retval)
{
    *__retval = __this->ContainsPoint(*pt);
}

// public static Fuse.VisualBounds get_Empty() :4576
void VisualBounds__get_Empty_fn(VisualBounds** __retval)
{
    *__retval = VisualBounds::Empty();
}

// public Uno.Rect get_FlatRect() :4634
void VisualBounds__get_FlatRect_fn(VisualBounds* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->FlatRect();
}

// public static Fuse.VisualBounds get_Infinite() :4587
void VisualBounds__get_Infinite_fn(VisualBounds** __retval)
{
    *__retval = VisualBounds::Infinite();
}

// public Fuse.VisualBounds InflateXY(float padding) :4665
void VisualBounds__InflateXY_fn(VisualBounds* __this, float* padding, VisualBounds** __retval)
{
    *__retval = __this->InflateXY(*padding);
}

// public bool IntersectsRay(Uno.Geometry.Ray ray) :4773
void VisualBounds__IntersectsRay_fn(VisualBounds* __this, ::g::Uno::Geometry::Ray* ray, bool* __retval)
{
    *__retval = __this->IntersectsRay(*ray);
}

// public Fuse.VisualBounds IntersectXY(Fuse.VisualBounds nb) :4737
void VisualBounds__IntersectXY_fn(VisualBounds* __this, VisualBounds* nb, VisualBounds** __retval)
{
    *__retval = __this->IntersectXY(nb);
}

// public bool get_IsEmpty() :4581
void VisualBounds__get_IsEmpty_fn(VisualBounds* __this, bool* __retval)
{
    *__retval = __this->IsEmpty();
}

// public bool get_IsFlat() :4639
void VisualBounds__get_IsFlat_fn(VisualBounds* __this, bool* __retval)
{
    *__retval = __this->IsFlat();
}

// public bool get_IsInfinite() :4592
void VisualBounds__get_IsInfinite_fn(VisualBounds* __this, bool* __retval)
{
    *__retval = __this->IsInfinite();
}

// public Fuse.VisualBounds Merge(Fuse.VisualBounds nb, [Fuse.FastMatrix trans]) :4713
void VisualBounds__Merge_fn(VisualBounds* __this, VisualBounds* nb, ::g::Fuse::FastMatrix* trans, VisualBounds** __retval)
{
    *__retval = __this->Merge(nb, trans);
}

// public Fuse.VisualBounds MergeChild(Fuse.Visual child, Fuse.VisualBounds nb) :4756
void VisualBounds__MergeChild_fn(VisualBounds* __this, ::g::Fuse::Visual* child, VisualBounds* nb, VisualBounds** __retval)
{
    *__retval = __this->MergeChild(child, nb);
}

// private VisualBounds New() :4571
void VisualBounds__New1_fn(VisualBounds** __retval)
{
    *__retval = VisualBounds::New1();
}

// public static Fuse.VisualBounds Point(float3 pt) :4595
void VisualBounds__Point_fn(::g::Uno::Float3* pt, VisualBounds** __retval)
{
    *__retval = VisualBounds::Point(*pt);
}

// public static Fuse.VisualBounds Rect(float2 a, float2 b) :4614
void VisualBounds__Rect_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, VisualBounds** __retval)
{
    *__retval = VisualBounds::Rect(*a, *b);
}

// public static Fuse.VisualBounds Rect(float3 a, float3 b) :4606
void VisualBounds__Rect1_fn(::g::Uno::Float3* a, ::g::Uno::Float3* b, VisualBounds** __retval)
{
    *__retval = VisualBounds::Rect1(*a, *b);
}

// public float3 get_Size() :4630
void VisualBounds__get_Size_fn(VisualBounds* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->Size();
}

// public Fuse.VisualBounds Transform(float4x4 matrix) :4692
void VisualBounds__Transform_fn(VisualBounds* __this, ::g::Uno::Float4x4* matrix, VisualBounds** __retval)
{
    *__retval = __this->Transform(*matrix);
}

// public Fuse.VisualBounds TransformFlatten(float4x4 matrix) :4702
void VisualBounds__TransformFlatten_fn(VisualBounds* __this, ::g::Uno::Float4x4* matrix, VisualBounds** __retval)
{
    *__retval = __this->TransformFlatten(*matrix);
}

// public Fuse.VisualBounds Translate(float3 offset) :4680
void VisualBounds__Translate_fn(VisualBounds* __this, ::g::Uno::Float3* offset, VisualBounds** __retval)
{
    *__retval = __this->Translate(*offset);
}

uSStrong<VisualBounds*> VisualBounds::_empty_;
uSStrong<VisualBounds*> VisualBounds::_infinite_;

// private VisualBounds() [instance] :4571
void VisualBounds::ctor_()
{
}

// public Fuse.VisualBounds AddPoint(float2 pt) [instance] :4647
VisualBounds* VisualBounds::AddPoint(::g::Uno::Float2 pt)
{
    uStackFrame __("Fuse.VisualBounds", "AddPoint(float2)");
    return Merge(VisualBounds::Point(::g::Uno::Float3__New4(pt, 0.0f)), NULL);
}

// public Fuse.VisualBounds AddPoint(float3 pt) [instance] :4642
VisualBounds* VisualBounds::AddPoint1(::g::Uno::Float3 pt)
{
    uStackFrame __("Fuse.VisualBounds", "AddPoint(float3)");
    return Merge(VisualBounds::Point(pt), NULL);
}

// public Fuse.VisualBounds AddRect(float2 mn, float2 mx) [instance] :4652
VisualBounds* VisualBounds::AddRect(::g::Uno::Float2 mn, ::g::Uno::Float2 mx)
{
    uStackFrame __("Fuse.VisualBounds", "AddRect(float2,float2)");
    return Merge(VisualBounds::Rect1(::g::Uno::Float3__New4(mn, 0.0f), ::g::Uno::Float3__New4(mx, 0.0f)), NULL);
}

// public Fuse.VisualBounds AddRect(Uno.Rect r) [instance] :4657
VisualBounds* VisualBounds::AddRect1(::g::Uno::Rect r)
{
    uStackFrame __("Fuse.VisualBounds", "AddRect(Uno.Rect)");
    return AddRect(r.Minimum(), r.Maximum());
}

// public float3 get_AxisMax() [instance] :4629
::g::Uno::Float3 VisualBounds::AxisMax()
{
    uStackFrame __("Fuse.VisualBounds", "get_AxisMax()");
    return _box.Maximum;
}

// public float3 get_AxisMin() [instance] :4628
::g::Uno::Float3 VisualBounds::AxisMin()
{
    uStackFrame __("Fuse.VisualBounds", "get_AxisMin()");
    return _box.Minimum;
}

// public bool ContainsPoint(float2 pt) [instance] :4761
bool VisualBounds::ContainsPoint(::g::Uno::Float2 pt)
{
    uStackFrame __("Fuse.VisualBounds", "ContainsPoint(float2)");

    if (IsEmpty())
        return false;

    if (IsInfinite())
        return true;

    return (((((_box.Minimum.X <= pt.X) && (_box.Minimum.Y <= pt.Y)) && (_box.Maximum.X >= pt.X)) && (_box.Maximum.Y >= pt.Y)) && (_box.Minimum.Z <= 0.0f)) && (_box.Maximum.Z >= 0.0f);
}

// public Uno.Rect get_FlatRect() [instance] :4634
::g::Uno::Rect VisualBounds::FlatRect()
{
    uStackFrame __("Fuse.VisualBounds", "get_FlatRect()");
    ::g::Uno::Float3 ind1;
    ::g::Uno::Float3 ind2;
    return ::g::Uno::Rect__New2((ind1 = AxisMin(), ::g::Uno::Float2__New2(ind1.X, ind1.Y)), (ind2 = Size(), ::g::Uno::Float2__New2(ind2.X, ind2.Y)));
}

// public Fuse.VisualBounds InflateXY(float padding) [instance] :4665
VisualBounds* VisualBounds::InflateXY(float padding)
{
    uStackFrame __("Fuse.VisualBounds", "InflateXY(float)");

    if (IsInfinite())
        return VisualBounds::_infinite();

    if (IsEmpty())
        return VisualBounds::Rect(::g::Uno::Float2__New1(-padding), ::g::Uno::Float2__New1(padding));

    ::g::Uno::Geometry::Box add = _box;
    add.Minimum = ::g::Uno::Float3__op_Subtraction2(add.Minimum, ::g::Uno::Float3__New2(padding, padding, 0.0f));
    add.Maximum = ::g::Uno::Float3__op_Addition2(add.Maximum, ::g::Uno::Float3__New2(padding, padding, 0.0f));
    return VisualBounds::Box(add);
}

// public bool IntersectsRay(Uno.Geometry.Ray ray) [instance] :4773
bool VisualBounds::IntersectsRay(::g::Uno::Geometry::Ray ray)
{
    uStackFrame __("Fuse.VisualBounds", "IntersectsRay(Uno.Geometry.Ray)");

    if (IsEmpty())
        return false;

    if (IsInfinite())
        return true;

    float distance;
    return ::g::Uno::Geometry::Collision::RayIntersectsBox(ray, _box, &distance);
}

// public Fuse.VisualBounds IntersectXY(Fuse.VisualBounds nb) [instance] :4737
VisualBounds* VisualBounds::IntersectXY(VisualBounds* nb)
{
    uStackFrame __("Fuse.VisualBounds", "IntersectXY(Fuse.VisualBounds)");

    if (uPtr(nb)->IsEmpty() || IsEmpty())
        return VisualBounds::_empty();

    if (uPtr(nb)->IsInfinite() || IsInfinite())
        return VisualBounds::_infinite();

    ::g::Uno::Float3 mn = ::g::Uno::Math::Max5(AxisMin(), uPtr(nb)->AxisMin());
    ::g::Uno::Float3 mx = ::g::Uno::Math::Min5(AxisMax(), nb->AxisMax());

    if ((mn.X >= mx.X) || (mn.Y >= mx.Y))
        return VisualBounds::_empty();

    if (mn.Z > mx.Z)
        mx.Z = mn.Z;

    return VisualBounds::Rect1(mn, mx);
}

// public bool get_IsEmpty() [instance] :4581
bool VisualBounds::IsEmpty()
{
    uStackFrame __("Fuse.VisualBounds", "get_IsEmpty()");
    return this == VisualBounds::_empty();
}

// public bool get_IsFlat() [instance] :4639
bool VisualBounds::IsFlat()
{
    uStackFrame __("Fuse.VisualBounds", "get_IsFlat()");
    return IsEmpty() || ((_box.Minimum.Z == 0.0f) && (_box.Maximum.Z == 0.0f));
}

// public bool get_IsInfinite() [instance] :4592
bool VisualBounds::IsInfinite()
{
    uStackFrame __("Fuse.VisualBounds", "get_IsInfinite()");
    return this == VisualBounds::_infinite();
}

// public Fuse.VisualBounds Merge(Fuse.VisualBounds nb, [Fuse.FastMatrix trans]) [instance] :4713
VisualBounds* VisualBounds::Merge(VisualBounds* nb, ::g::Fuse::FastMatrix* trans)
{
    uStackFrame __("Fuse.VisualBounds", "Merge(Fuse.VisualBounds,[Fuse.FastMatrix])");

    if (uPtr(nb)->IsEmpty())
        return this;

    if (uPtr(nb)->IsInfinite() || IsInfinite())
        return VisualBounds::_infinite();

    ::g::Uno::Geometry::Box add = (trans != NULL) ? VisualBounds::BoxTransform(uPtr(nb)->_box, uPtr(trans)->Matrix()) : uPtr(nb)->_box;

    if (!IsEmpty())
    {
        add.Minimum = ::g::Uno::Math::Min5(_box.Minimum, add.Minimum);
        add.Maximum = ::g::Uno::Math::Max5(_box.Maximum, add.Maximum);
    }

    return VisualBounds::Box(add);
}

// public Fuse.VisualBounds MergeChild(Fuse.Visual child, Fuse.VisualBounds nb) [instance] :4756
VisualBounds* VisualBounds::MergeChild(::g::Fuse::Visual* child, VisualBounds* nb)
{
    uStackFrame __("Fuse.VisualBounds", "MergeChild(Fuse.Visual,Fuse.VisualBounds)");
    return Merge(nb, uPtr(child)->InternLocalTransformInternal());
}

// public float3 get_Size() [instance] :4630
::g::Uno::Float3 VisualBounds::Size()
{
    uStackFrame __("Fuse.VisualBounds", "get_Size()");
    return ::g::Uno::Float3__op_Subtraction2(_box.Maximum, _box.Minimum);
}

// public Fuse.VisualBounds Transform(float4x4 matrix) [instance] :4692
VisualBounds* VisualBounds::Transform(::g::Uno::Float4x4 matrix)
{
    uStackFrame __("Fuse.VisualBounds", "Transform(float4x4)");

    if (IsInfinite() || IsEmpty())
        return this;

    ::g::Uno::Geometry::Box n = VisualBounds::BoxTransform(_box, matrix);
    return VisualBounds::Box(n);
}

// public Fuse.VisualBounds TransformFlatten(float4x4 matrix) [instance] :4702
VisualBounds* VisualBounds::TransformFlatten(::g::Uno::Float4x4 matrix)
{
    uStackFrame __("Fuse.VisualBounds", "TransformFlatten(float4x4)");

    if (IsInfinite() || IsEmpty())
        return this;

    ::g::Uno::Geometry::Box n = VisualBounds::BoxTransform(_box, matrix);
    n.Minimum.Z = 0.0f;
    n.Maximum.Z = 0.0f;
    return VisualBounds::Box(n);
}

// public Fuse.VisualBounds Translate(float3 offset) [instance] :4680
VisualBounds* VisualBounds::Translate(::g::Uno::Float3 offset)
{
    uStackFrame __("Fuse.VisualBounds", "Translate(float3)");

    if (IsInfinite() || IsEmpty())
        return this;

    ::g::Uno::Geometry::Box add = _box;
    add.Minimum = ::g::Uno::Float3__op_Addition2(add.Minimum, offset);
    add.Maximum = ::g::Uno::Float3__op_Addition2(add.Maximum, offset);
    return VisualBounds::Box(add);
}

// public static Fuse.VisualBounds Box(Uno.Geometry.Box a) [static] :4619
VisualBounds* VisualBounds::Box(::g::Uno::Geometry::Box a)
{
    uStackFrame __("Fuse.VisualBounds", "Box(Uno.Geometry.Box)");
    VisualBounds_typeof()->Init();
    VisualBounds* nb = VisualBounds::New1();
    nb->_box = a;
    return nb;
}

// public static Uno.Geometry.Box BoxTransform(Uno.Geometry.Box box, float4x4 transform) [static] :4795
::g::Uno::Geometry::Box VisualBounds::BoxTransform(::g::Uno::Geometry::Box box, ::g::Uno::Float4x4 transform)
{
    uStackFrame __("Fuse.VisualBounds", "BoxTransform(Uno.Geometry.Box,float4x4)");
    VisualBounds_typeof()->Init();
    ::g::Uno::Float3 A = ::g::Uno::Vector::TransformCoordinate1(::g::Uno::Float3__New2(box.Minimum.X, box.Minimum.Y, box.Minimum.Z), transform);
    ::g::Uno::Float3 B = ::g::Uno::Vector::TransformCoordinate1(::g::Uno::Float3__New2(box.Maximum.X, box.Minimum.Y, box.Minimum.Z), transform);
    ::g::Uno::Float3 C = ::g::Uno::Vector::TransformCoordinate1(::g::Uno::Float3__New2(box.Maximum.X, box.Maximum.Y, box.Minimum.Z), transform);
    ::g::Uno::Float3 D = ::g::Uno::Vector::TransformCoordinate1(::g::Uno::Float3__New2(box.Minimum.X, box.Maximum.Y, box.Minimum.Z), transform);
    ::g::Uno::Float3 E = ::g::Uno::Vector::TransformCoordinate1(::g::Uno::Float3__New2(box.Minimum.X, box.Minimum.Y, box.Maximum.Z), transform);
    ::g::Uno::Float3 F = ::g::Uno::Vector::TransformCoordinate1(::g::Uno::Float3__New2(box.Maximum.X, box.Minimum.Y, box.Maximum.Z), transform);
    ::g::Uno::Float3 G = ::g::Uno::Vector::TransformCoordinate1(::g::Uno::Float3__New2(box.Maximum.X, box.Maximum.Y, box.Maximum.Z), transform);
    ::g::Uno::Float3 H = ::g::Uno::Vector::TransformCoordinate1(::g::Uno::Float3__New2(box.Minimum.X, box.Maximum.Y, box.Maximum.Z), transform);
    return ::g::Uno::Geometry::Box__New1(::g::Uno::Math::Min5(::g::Uno::Math::Min5(::g::Uno::Math::Min5(::g::Uno::Math::Min5(::g::Uno::Math::Min5(::g::Uno::Math::Min5(::g::Uno::Math::Min5(A, B), C), D), E), F), G), H), ::g::Uno::Math::Max5(::g::Uno::Math::Max5(::g::Uno::Math::Max5(::g::Uno::Math::Max5(::g::Uno::Math::Max5(::g::Uno::Math::Max5(::g::Uno::Math::Max5(A, B), C), D), E), F), G), H));
}

// private VisualBounds New() [static] :4571
VisualBounds* VisualBounds::New1()
{
    VisualBounds* obj3 = (VisualBounds*)uNew(VisualBounds_typeof());
    obj3->ctor_();
    return obj3;
}

// public static Fuse.VisualBounds Point(float3 pt) [static] :4595
VisualBounds* VisualBounds::Point(::g::Uno::Float3 pt)
{
    uStackFrame __("Fuse.VisualBounds", "Point(float3)");
    VisualBounds_typeof()->Init();
    VisualBounds* nb = VisualBounds::New1();
    nb->_box.Minimum = pt;
    nb->_box.Maximum = pt;
    return nb;
}

// public static Fuse.VisualBounds Rect(float2 a, float2 b) [static] :4614
VisualBounds* VisualBounds::Rect(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    uStackFrame __("Fuse.VisualBounds", "Rect(float2,float2)");
    VisualBounds_typeof()->Init();
    return VisualBounds::Rect1(::g::Uno::Float3__New4(a, 0.0f), ::g::Uno::Float3__New4(b, 0.0f));
}

// public static Fuse.VisualBounds Rect(float3 a, float3 b) [static] :4606
VisualBounds* VisualBounds::Rect1(::g::Uno::Float3 a, ::g::Uno::Float3 b)
{
    uStackFrame __("Fuse.VisualBounds", "Rect(float3,float3)");
    VisualBounds_typeof()->Init();
    VisualBounds* nb = VisualBounds::New1();
    nb->_box.Minimum = ::g::Uno::Math::Min5(a, b);
    nb->_box.Maximum = ::g::Uno::Math::Max5(a, b);
    return nb;
}

// public static Fuse.VisualBounds get_Empty() [static] :4576
VisualBounds* VisualBounds::Empty()
{
    uStackFrame __("Fuse.VisualBounds", "get_Empty()");
    VisualBounds_typeof()->Init();
    return VisualBounds::_empty();
}

// public static Fuse.VisualBounds get_Infinite() [static] :4587
VisualBounds* VisualBounds::Infinite()
{
    uStackFrame __("Fuse.VisualBounds", "get_Infinite()");
    VisualBounds_typeof()->Init();
    return VisualBounds::_infinite();
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public enum VisualContext :7483
uEnumType* VisualContext_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.VisualContext", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Unknown", 0LL,
        "Graphics", 1LL,
        "Native", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public abstract class VisualEvent<THandler, TArgs> :2058
// {
static void VisualEvent_build(uType* type)
{
    ::STRINGS[83] = uString::Const("Invalid RaiseType for event");
    ::STRINGS[5] = uString::Const("/usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno");
    ::TYPES[127] = ::g::Uno::Collections::List_typeof();
    ::TYPES[40] = ::g::Uno::Exception_typeof();
    ::TYPES[7] = ::g::Fuse::Visual_typeof();
    ::TYPES[128] = ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), uObject_typeof()->Array());
    ::TYPES[10] = uObject_typeof()->Array();
    type->SetPrecalc(
        ::g::Uno::Collections::List_typeof()->MakeType(type->T(0)));
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::VisualEvent, _globalHandlers), 0,
        ::g::Fuse::PropertyHandle_typeof(), offsetof(::g::Fuse::VisualEvent, _handle), 0);
    type->Reflection.SetFunctions(6,
        new uFunction("AddGlobalHandler", NULL, (void*)VisualEvent__AddGlobalHandler_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("AddHandler", NULL, (void*)VisualEvent__AddHandler_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), type->T(0)),
        new uFunction("RaiseWithBubble", NULL, (void*)VisualEvent__RaiseWithBubble_fn, 0, false, uVoid_typeof(), 2, type->T(1), ::g::Fuse::VisualEventMode_typeof()),
        new uFunction("RaiseWithoutBubble", NULL, (void*)VisualEvent__RaiseWithoutBubble_fn, 0, false, uVoid_typeof(), 2, type->T(1), ::g::Fuse::VisualEventMode_typeof()),
        new uFunction("RemoveGlobalHandler", NULL, (void*)VisualEvent__RemoveGlobalHandler_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("RemoveHandler", NULL, (void*)VisualEvent__RemoveHandler_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), type->T(0)));
}

VisualEvent_type* VisualEvent_typeof()
{
    static uSStrong<VisualEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(VisualEvent);
    options.TypeSize = sizeof(VisualEvent_type);
    type = (VisualEvent_type*)uClassType::New("Fuse.VisualEvent`2", options);
    type->fp_build_ = VisualEvent_build;
    return type;
}

// protected generated VisualEvent() :2058
void VisualEvent__ctor__fn(VisualEvent* __this)
{
    __this->ctor_();
}

// public void AddGlobalHandler(THandler handler) :2073
void VisualEvent__AddGlobalHandler_fn(VisualEvent* __this, void* handler)
{
    uStackFrame __("Fuse.VisualEvent`2", "AddGlobalHandler(THandler)");
    ::g::Uno::Collections::List__Add_fn(uPtr(__this->_globalHandlers), handler);
}

// public void AddHandler(Fuse.Visual visual, THandler handler) :2062
void VisualEvent__AddHandler_fn(VisualEvent* __this, ::g::Fuse::Visual* visual, void* handler)
{
    uStackFrame __("Fuse.VisualEvent`2", "AddHandler(Fuse.Visual,THandler)");
    uPtr(uPtr(visual)->Properties())->AddToList(__this->_handle, uBoxPtr(__this->__type->GetBase(VisualEvent_typeof())->T(0), handler));
}

// private void InvokeGlobalHandlers(Fuse.Visual visual, TArgs args) :2083
void VisualEvent__InvokeGlobalHandlers_fn(VisualEvent* __this, ::g::Fuse::Visual* visual, ::g::Fuse::VisualEventArgs* args)
{
    __this->InvokeGlobalHandlers(visual, args);
}

// private void InvokeInternal(THandler handler, object sender, TArgs args) :2160
void VisualEvent__InvokeInternal_fn(VisualEvent* __this, void* handler, uObject* sender, ::g::Fuse::VisualEventArgs* args)
{
    uStackFrame __("Fuse.VisualEvent`2", "InvokeInternal(THandler,object,TArgs)");

    try
    {
        __this->Invoke_ex(handler, sender, args);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private void OnRaise(object target, object[] args) :2143
void VisualEvent__OnRaise_fn(VisualEvent* __this, uObject* target, uArray* args)
{
    __this->OnRaise(target, args);
}

// private void OnRaiseEnabled(object target, object[] args) :2151
void VisualEvent__OnRaiseEnabled_fn(VisualEvent* __this, uObject* target, uArray* args)
{
    __this->OnRaiseEnabled(target, args);
}

// private void Raise(TArgs args, Fuse.VisualEventMode type, bool bubble, [Uno.Action<TArgs, Uno.Collections.IList<Fuse.Visual>> PostBubbleAction]) :2108
void VisualEvent__Raise_fn(VisualEvent* __this, ::g::Fuse::VisualEventArgs* args, int* type, bool* bubble, uDelegate* PostBubbleAction)
{
    __this->Raise(args, *type, *bubble, PostBubbleAction);
}

// public void RaiseWithBubble(TArgs args, [Fuse.VisualEventMode type]) :2092
void VisualEvent__RaiseWithBubble_fn(VisualEvent* __this, ::g::Fuse::VisualEventArgs* args, int* type)
{
    __this->RaiseWithBubble(args, *type);
}

// internal void RaiseWithBubble(TArgs args, Fuse.VisualEventMode type, Uno.Action<TArgs, Uno.Collections.IList<Fuse.Visual>> PostBubbleAction) :2097
void VisualEvent__RaiseWithBubble1_fn(VisualEvent* __this, ::g::Fuse::VisualEventArgs* args, int* type, uDelegate* PostBubbleAction)
{
    __this->RaiseWithBubble1(args, *type, PostBubbleAction);
}

// public void RaiseWithoutBubble(TArgs args, [Fuse.VisualEventMode type]) :2103
void VisualEvent__RaiseWithoutBubble_fn(VisualEvent* __this, ::g::Fuse::VisualEventArgs* args, int* type)
{
    __this->RaiseWithoutBubble(args, *type);
}

// public void RemoveGlobalHandler(THandler handler) :2078
void VisualEvent__RemoveGlobalHandler_fn(VisualEvent* __this, void* handler)
{
    uStackFrame __("Fuse.VisualEvent`2", "RemoveGlobalHandler(THandler)");
    bool ret4;
    ::g::Uno::Collections::List__Remove_fn(uPtr(__this->_globalHandlers), handler, &ret4);
}

// public void RemoveHandler(Fuse.Visual visual, THandler handler) :2067
void VisualEvent__RemoveHandler_fn(VisualEvent* __this, ::g::Fuse::Visual* visual, void* handler)
{
    uStackFrame __("Fuse.VisualEvent`2", "RemoveHandler(Fuse.Visual,THandler)");
    uPtr(uPtr(visual)->Properties())->RemoveFromList(__this->_handle, uBoxPtr(__this->__type->GetBase(VisualEvent_typeof())->T(0), handler));
}

// protected generated VisualEvent() [instance] :2058
void VisualEvent::ctor_()
{
    uType* __types[] = {
        __type->GetBase(VisualEvent_typeof())->Precalced(0/*Uno.Collections.List<THandler>*/),
    };
    uStackFrame __("Fuse.VisualEvent`2", ".ctor()");
    _handle = ::g::Fuse::Properties::CreateHandle();
    _globalHandlers = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[0]));
}

// private void InvokeGlobalHandlers(Fuse.Visual visual, TArgs args) [instance] :2083
void VisualEvent::InvokeGlobalHandlers(::g::Fuse::Visual* visual, ::g::Fuse::VisualEventArgs* args)
{
    uType* __types[] = {
        __type->GetBase(VisualEvent_typeof())->T(0),
    };
    uStackFrame __("Fuse.VisualEvent`2", "InvokeGlobalHandlers(Fuse.Visual,TArgs)");
    uT ret1(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (uPtr(_globalHandlers)->Count() > 0)

        for (int i = 0; i < uPtr(_globalHandlers)->Count(); i++)
            VisualEvent__InvokeInternal_fn(this, (::g::Uno::Collections::List__get_Item_fn(uPtr(_globalHandlers), uCRef<int>(i), &ret1), ret1), visual, args);
}

// private void OnRaise(object target, object[] args) [instance] :2143
void VisualEvent::OnRaise(uObject* target, uArray* args)
{
    uType* __types[] = {
        __type->GetBase(VisualEvent_typeof())->T(0),
        __type->GetBase(VisualEvent_typeof())->T(1),
    };
    uStackFrame __("Fuse.VisualEvent`2", "OnRaise(object,object[])");
    uT handler(__types[0], U_ALLOCA(__types[0]->ValueSize));
    handler = uUnboxAny(__types[0], target);
    ::g::Fuse::Visual* visual = uCast< ::g::Fuse::Visual*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[7/*Fuse.Visual*/]);
    ::g::Fuse::VisualEventArgs* eventArgs = uCast< ::g::Fuse::VisualEventArgs*>(args->Strong<uObject*>(1), __types[1]);
    VisualEvent__InvokeInternal_fn(this, handler, visual, eventArgs);
}

// private void OnRaiseEnabled(object target, object[] args) [instance] :2151
void VisualEvent::OnRaiseEnabled(uObject* target, uArray* args)
{
    uType* __types[] = {
        __type->GetBase(VisualEvent_typeof())->T(0),
        __type->GetBase(VisualEvent_typeof())->T(1),
    };
    uStackFrame __("Fuse.VisualEvent`2", "OnRaiseEnabled(object,object[])");
    uT handler(__types[0], U_ALLOCA(__types[0]->ValueSize));
    handler = uUnboxAny(__types[0], target);
    ::g::Fuse::Visual* visual = uCast< ::g::Fuse::Visual*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[7/*Fuse.Visual*/]);
    ::g::Fuse::VisualEventArgs* eventArgs = uCast< ::g::Fuse::VisualEventArgs*>(args->Strong<uObject*>(1), __types[1]);

    if (uPtr(visual)->IsContextEnabled())
        VisualEvent__InvokeInternal_fn(this, handler, visual, eventArgs);
}

// private void Raise(TArgs args, Fuse.VisualEventMode type, bool bubble, [Uno.Action<TArgs, Uno.Collections.IList<Fuse.Visual>> PostBubbleAction]) [instance] :2108
void VisualEvent::Raise(::g::Fuse::VisualEventArgs* args, int type, bool bubble, uDelegate* PostBubbleAction)
{
    uStackFrame __("Fuse.VisualEvent`2", "Raise(TArgs,Fuse.VisualEventMode,bool,[Uno.Action<TArgs, Uno.Collections.IList<Fuse.Visual>>])");
    ::g::Fuse::Visual* ret2;
    ::g::Fuse::Visual* ret3;
    ::g::Fuse::Visual* visual = uPtr(args)->Visual();
    uDelegate* handler = NULL;

    switch (type)
    {
        case 0:
        {
            handler = uDelegate::New(::TYPES[128/*Uno.Action<object, object[]>*/], (void*)VisualEvent__OnRaise_fn, this);
            break;
        }
        case 2:
        {
            handler = uDelegate::New(::TYPES[128/*Uno.Action<object, object[]>*/], (void*)VisualEvent__OnRaise_fn, this);
            break;
        }
        case 1:
        {
            handler = uDelegate::New(::TYPES[128/*Uno.Action<object, object[]>*/], (void*)VisualEvent__OnRaiseEnabled_fn, this);
            break;
        }
        default:
        {
            ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[83/*"Invalid Rai...*/], 1, ::STRINGS[5/*"/usr/local/...*/], 2120);
            return;
        }
    }

    ::g::Uno::Collections::List* list = ::g::Fuse::VisualListCache::Acquire();

    while (visual != NULL)
    {
        ::g::Uno::Collections::List__Add_fn(uPtr(list), visual);

        if (!bubble)
            break;

        visual = uPtr(visual)->Parent();
    }

    for (int i = 0; i < uPtr(list)->Count(); ++i)
        uPtr(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i), &ret2), ret2))->Properties())->ForeachInList(_handle, handler, uArray::Init<uObject*>(::TYPES[10/*object[]*/], 2, (::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i), &ret3), ret3), args));

    if (::g::Uno::Delegate::op_Inequality(PostBubbleAction, NULL))
        uPtr(PostBubbleAction)->Invoke(2, args, (uObject*)list);

    InvokeGlobalHandlers(visual, args);
    ::g::Fuse::VisualListCache::Release(list);
}

// public void RaiseWithBubble(TArgs args, [Fuse.VisualEventMode type]) [instance] :2092
void VisualEvent::RaiseWithBubble(::g::Fuse::VisualEventArgs* args, int type)
{
    uStackFrame __("Fuse.VisualEvent`2", "RaiseWithBubble(TArgs,[Fuse.VisualEventMode])");
    Raise(args, type, true, NULL);
}

// internal void RaiseWithBubble(TArgs args, Fuse.VisualEventMode type, Uno.Action<TArgs, Uno.Collections.IList<Fuse.Visual>> PostBubbleAction) [instance] :2097
void VisualEvent::RaiseWithBubble1(::g::Fuse::VisualEventArgs* args, int type, uDelegate* PostBubbleAction)
{
    uStackFrame __("Fuse.VisualEvent`2", "RaiseWithBubble(TArgs,Fuse.VisualEventMode,Uno.Action<TArgs, Uno.Collections.IList<Fuse.Visual>>)");
    Raise(args, type, true, PostBubbleAction);
}

// public void RaiseWithoutBubble(TArgs args, [Fuse.VisualEventMode type]) [instance] :2103
void VisualEvent::RaiseWithoutBubble(::g::Fuse::VisualEventArgs* args, int type)
{
    uStackFrame __("Fuse.VisualEvent`2", "RaiseWithoutBubble(TArgs,[Fuse.VisualEventMode])");
    Raise(args, type, false, NULL);
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public class VisualEventArgs :2176
// {
static void VisualEventArgs_build(uType* type)
{
    ::STRINGS[84] = uString::Const("visual");
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(VisualEventArgs_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::VisualEventArgs, _IsHandled), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::VisualEventArgs, _Visual), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_IsHandled", NULL, (void*)VisualEventArgs__get_IsHandled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsHandled", NULL, (void*)VisualEventArgs__set_IsHandled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)VisualEventArgs__New2_fn, 0, true, VisualEventArgs_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("get_Visual", NULL, (void*)VisualEventArgs__get_Visual_fn, 0, false, ::g::Fuse::Visual_typeof(), 0));
}

VisualEventArgs_type* VisualEventArgs_typeof()
{
    static uSStrong<VisualEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(VisualEventArgs);
    options.TypeSize = sizeof(VisualEventArgs_type);
    type = (VisualEventArgs_type*)uClassType::New("Fuse.VisualEventArgs", options);
    type->fp_build_ = VisualEventArgs_build;
    type->fp_Serialize = VisualEventArgs__Serialize_fn;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public VisualEventArgs(Fuse.Visual visual) :2182
void VisualEventArgs__ctor_1_fn(VisualEventArgs* __this, ::g::Fuse::Visual* visual)
{
    __this->ctor_1(visual);
}

// private void Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer s) :2190
void VisualEventArgs__FuseScriptingIScriptEventSerialize_fn(VisualEventArgs* __this, uObject* s)
{
    uStackFrame __("Fuse.VisualEventArgs", "Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer)");
    __this->Serialize(s);
}

// public generated bool get_IsHandled() :2178
void VisualEventArgs__get_IsHandled_fn(VisualEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsHandled();
}

// public generated void set_IsHandled(bool value) :2178
void VisualEventArgs__set_IsHandled_fn(VisualEventArgs* __this, bool* value)
{
    __this->IsHandled(*value);
}

// public VisualEventArgs New(Fuse.Visual visual) :2182
void VisualEventArgs__New2_fn(::g::Fuse::Visual* visual, VisualEventArgs** __retval)
{
    *__retval = VisualEventArgs::New2(visual);
}

// private virtual void Serialize(Fuse.Scripting.IEventSerializer s) :2195
void VisualEventArgs__Serialize_fn(VisualEventArgs* __this, uObject* s)
{
}

// public generated Fuse.Visual get_Visual() :2180
void VisualEventArgs__get_Visual_fn(VisualEventArgs* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Visual();
}

// private generated void set_Visual(Fuse.Visual value) :2180
void VisualEventArgs__set_Visual_fn(VisualEventArgs* __this, ::g::Fuse::Visual* value)
{
    __this->Visual(value);
}

// public VisualEventArgs(Fuse.Visual visual) [instance] :2182
void VisualEventArgs::ctor_1(::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.VisualEventArgs", ".ctor(Fuse.Visual)");
    ctor_();

    if (visual == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[84/*"visual"*/]));

    Visual(visual);
}

// public generated bool get_IsHandled() [instance] :2178
bool VisualEventArgs::IsHandled()
{
    uStackFrame __("Fuse.VisualEventArgs", "get_IsHandled()");
    return _IsHandled;
}

// public generated void set_IsHandled(bool value) [instance] :2178
void VisualEventArgs::IsHandled(bool value)
{
    uStackFrame __("Fuse.VisualEventArgs", "set_IsHandled(bool)");
    _IsHandled = value;
}

// public generated Fuse.Visual get_Visual() [instance] :2180
::g::Fuse::Visual* VisualEventArgs::Visual()
{
    uStackFrame __("Fuse.VisualEventArgs", "get_Visual()");
    return _Visual;
}

// private generated void set_Visual(Fuse.Visual value) [instance] :2180
void VisualEventArgs::Visual(::g::Fuse::Visual* value)
{
    uStackFrame __("Fuse.VisualEventArgs", "set_Visual(Fuse.Visual)");
    _Visual = value;
}

// public VisualEventArgs New(Fuse.Visual visual) [static] :2182
VisualEventArgs* VisualEventArgs::New2(::g::Fuse::Visual* visual)
{
    VisualEventArgs* obj1 = (VisualEventArgs*)uNew(VisualEventArgs_typeof());
    obj1->ctor_1(visual);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public delegate void VisualEventHandler(object sender, Fuse.VisualEventArgs args) :2200
uDelegateType* VisualEventHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.VisualEventHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::VisualEventArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public enum VisualEventMode :2023
uEnumType* VisualEventMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.VisualEventMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Normal", 0LL,
        "Enabled", 1LL,
        "Force", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// internal static class VisualListCache :2036
// {
// static VisualListCache() :2036
static void VisualListCache__cctor__fn(uType* __type)
{
    VisualListCache::_visualListCache_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[129/*Uno.Collections.List<Uno.Collections.List<Fuse.Visual>>*/]));
}

static void VisualListCache_build(uType* type)
{
    ::TYPES[129] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Visual_typeof()));
    ::TYPES[1] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Visual_typeof());
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Visual_typeof())), (uintptr_t)&::g::Fuse::VisualListCache::_visualListCache_, uFieldFlagsStatic);
}

uClassType* VisualListCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.VisualListCache", options);
    type->fp_build_ = VisualListCache_build;
    type->fp_cctor_ = VisualListCache__cctor__fn;
    return type;
}

// public static Uno.Collections.List<Fuse.Visual> Acquire() :2040
void VisualListCache__Acquire_fn(::g::Uno::Collections::List** __retval)
{
    *__retval = VisualListCache::Acquire();
}

// public static void Release(Uno.Collections.List<Fuse.Visual> list) :2051
void VisualListCache__Release_fn(::g::Uno::Collections::List* list)
{
    VisualListCache::Release(list);
}

uSStrong< ::g::Uno::Collections::List*> VisualListCache::_visualListCache_;

// public static Uno.Collections.List<Fuse.Visual> Acquire() [static] :2040
::g::Uno::Collections::List* VisualListCache::Acquire()
{
    uStackFrame __("Fuse.VisualListCache", "Acquire()");
    VisualListCache_typeof()->Init();
    ::g::Uno::Collections::List* ret1;

    if (uPtr(VisualListCache::_visualListCache())->Count() > 0)
    {
        ::g::Uno::Collections::List* l = (::g::Uno::Collections::List__get_Item_fn(uPtr(VisualListCache::_visualListCache()), uCRef<int>(uPtr(VisualListCache::_visualListCache())->Count() - 1), &ret1), ret1);
        uPtr(VisualListCache::_visualListCache())->RemoveAt(uPtr(VisualListCache::_visualListCache())->Count() - 1);
        return l;
    }

    return (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[1/*Uno.Collections.List<Fuse.Visual>*/]);
}

// public static void Release(Uno.Collections.List<Fuse.Visual> list) [static] :2051
void VisualListCache::Release(::g::Uno::Collections::List* list)
{
    uStackFrame __("Fuse.VisualListCache", "Release(Uno.Collections.List<Fuse.Visual>)");
    VisualListCache_typeof()->Init();
    uPtr(list)->Clear();
    ::g::Uno::Collections::List__Add_fn(uPtr(VisualListCache::_visualListCache()), list);
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// public enum SystemFont.Weight :9483
uEnumType* SystemFont__Weight_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.SystemFont.Weight", ::g::Uno::Int_typeof(), 9);
    type->SetLiterals(
        "UltraLight", 0LL,
        "Thin", 1LL,
        "Light", 2LL,
        "Normal", 3LL,
        "Medium", 4LL,
        "SemiBold", 5LL,
        "Bold", 6LL,
        "Heavy", 7LL,
        "Black", 8LL);
    return type;
}

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// private sealed class TranslationModes.WidthMode :10177
// {
static void TranslationModes__WidthMode_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(::g::Fuse::TranslationModes__SizeMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(::g::Fuse::TranslationModes__SizeMode_type, interface1));
}

::g::Fuse::TranslationModes__SizeMode_type* TranslationModes__WidthMode_typeof()
{
    static uSStrong< ::g::Fuse::TranslationModes__SizeMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::TranslationModes__SizeMode_typeof();
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TranslationModes__WidthMode);
    options.TypeSize = sizeof(::g::Fuse::TranslationModes__SizeMode_type);
    type = (::g::Fuse::TranslationModes__SizeMode_type*)uClassType::New("Fuse.TranslationModes.WidthMode", options);
    type->fp_build_ = TranslationModes__WidthMode_build;
    type->fp_ctor_ = (void*)TranslationModes__WidthMode__New2_fn;
    type->fp_GetAbsVector = (void(*)(::g::Fuse::TranslationModes__SizeMode*, ::g::Fuse::Translation*, ::g::Uno::Float3*))TranslationModes__WidthMode__GetAbsVector_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))TranslationModes__WidthMode__GetAbsVector_fn;
    type->interface1.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))::g::Fuse::TranslationModes__SizeMode__Subscribe_fn;
    type->interface1.fp_Unsubscribe = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::TranslationModes__SizeMode__Unsubscribe_fn;
    return type;
}

// public generated WidthMode() :10177
void TranslationModes__WidthMode__ctor_1_fn(TranslationModes__WidthMode* __this)
{
    __this->ctor_1();
}

// public override sealed float3 GetAbsVector(Fuse.Translation t) :10179
void TranslationModes__WidthMode__GetAbsVector_fn(TranslationModes__WidthMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval)
{
    uStackFrame __("Fuse.TranslationModes.WidthMode", "GetAbsVector(Fuse.Translation)");
    return *__retval = ::g::Uno::Float3__op_Multiply(::g::Fuse::TranslationModes::SizeOf(uPtr(t)->RelativeNode()).X, uPtr(t)->Vector()), void();
}

// public generated WidthMode New() :10177
void TranslationModes__WidthMode__New2_fn(TranslationModes__WidthMode** __retval)
{
    *__retval = TranslationModes__WidthMode::New2();
}

// public generated WidthMode() [instance] :10177
void TranslationModes__WidthMode::ctor_1()
{
    uStackFrame __("Fuse.TranslationModes.WidthMode", ".ctor()");
    ctor_();
}

// public generated WidthMode New() [static] :10177
TranslationModes__WidthMode* TranslationModes__WidthMode::New2()
{
    TranslationModes__WidthMode* obj1 = (TranslationModes__WidthMode*)uNew(TranslationModes__WidthMode_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno
// ---------------------------------------------------

// internal sealed class WrapException :10779
// {
static void WrapException_build(uType* type)
{
    ::STRINGS[85] = uString::Const("Wrapped Exception");
    type->SetFields(3);
}

::g::Uno::Exception_type* WrapException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(WrapException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Fuse.WrapException", options);
    type->fp_build_ = WrapException_build;
    type->fp_get_Message = (void(*)(::g::Uno::Exception*, uString**))WrapException__get_Message_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))WrapException__ToString_fn;
    return type;
}

// public WrapException(Uno.Exception inner) :10781
void WrapException__ctor_3_fn(WrapException* __this, ::g::Uno::Exception* inner)
{
    __this->ctor_3(inner);
}

// public override sealed string get_Message() :10805
void WrapException__get_Message_fn(WrapException* __this, uString** __retval)
{
    uStackFrame __("Fuse.WrapException", "get_Message()");
    return *__retval = uPtr(__this->InnerException())->Message(), void();
}

// public WrapException New(Uno.Exception inner) :10781
void WrapException__New4_fn(::g::Uno::Exception* inner, WrapException** __retval)
{
    *__retval = WrapException::New4(inner);
}

// public override sealed string ToString() :10798
void WrapException__ToString_fn(WrapException* __this, uString** __retval)
{
    uStackFrame __("Fuse.WrapException", "ToString()");
    return *__retval = uPtr(__this->InnerException())->ToString(), void();
}

// public static Uno.Exception Unwrap(Uno.Exception e) :10788
void WrapException__Unwrap_fn(::g::Uno::Exception* e, ::g::Uno::Exception** __retval)
{
    *__retval = WrapException::Unwrap(e);
}

// public WrapException(Uno.Exception inner) [instance] :10781
void WrapException::ctor_3(::g::Uno::Exception* inner)
{
    ctor_2(::STRINGS[85/*"Wrapped Exc...*/], inner);
}

// public WrapException New(Uno.Exception inner) [static] :10781
WrapException* WrapException::New4(::g::Uno::Exception* inner)
{
    WrapException* obj1 = (WrapException*)uNew(WrapException_typeof());
    obj1->ctor_3(inner);
    return obj1;
}

// public static Uno.Exception Unwrap(Uno.Exception e) [static] :10788
::g::Uno::Exception* WrapException::Unwrap(::g::Uno::Exception* e)
{
    uStackFrame __("Fuse.WrapException", "Unwrap(Uno.Exception)");

    while (uIs(e, WrapException_typeof()) && (uPtr(e)->InnerException() != NULL))
        e = uPtr(e)->InnerException();

    return e;
}
// }

}} // ::g::Fuse
