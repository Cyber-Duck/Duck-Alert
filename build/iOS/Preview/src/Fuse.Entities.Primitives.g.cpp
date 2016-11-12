// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Drawing.Meshes.MeshGenerator.h>
#include <Fuse.Entities.Mesh.h>
#include <Fuse.Entities.MeshHitTestMode.h>
#include <Fuse.Entities.Primitives.ConeRenderer.h>
#include <Fuse.Entities.Primitives.CubeRenderer.h>
#include <Fuse.Entities.Primitives.CylinderRenderer.h>
#include <Fuse.Entities.Primitives.SphereRenderer.h>
#include <Uno.Bool.h>
#include <Uno.Content.Models.ModelMesh.h>
#include <Uno.Float.h>
#include <Uno.Float3.h>
#include <Uno.Int.h>

namespace g{
namespace Fuse{
namespace Entities{
namespace Primitives{

// /usr/local/share/uno/Packages/Fuse.Entities/0.40.8/$.uno
// --------------------------------------------------------

// public sealed class ConeRenderer :1670
// {
static void ConeRenderer_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Entities::MeshRenderer_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Entities::MeshRenderer_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Entities::MeshRenderer_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Entities::MeshRenderer_type, interface3),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Entities::MeshRenderer_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Entities::MeshRenderer_type, interface5),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Entities::MeshRenderer_type, interface6),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Entities::MeshRenderer_type, interface7));
    type->SetFields(60);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ConeRenderer__New3_fn, 0, true, ConeRenderer_typeof(), 0));
}

::g::Fuse::Entities::MeshRenderer_type* ConeRenderer_typeof()
{
    static uSStrong< ::g::Fuse::Entities::MeshRenderer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Entities::MeshRenderer_typeof();
    options.FieldCount = 60;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(ConeRenderer);
    options.TypeSize = sizeof(::g::Fuse::Entities::MeshRenderer_type);
    type = (::g::Fuse::Entities::MeshRenderer_type*)uClassType::New("Fuse.Entities.Primitives.ConeRenderer", options);
    type->fp_build_ = ConeRenderer_build;
    type->fp_ctor_ = (void*)ConeRenderer__New3_fn;
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

// public ConeRenderer() :1672
void ConeRenderer__ctor_4_fn(ConeRenderer* __this)
{
    __this->ctor_4();
}

// public ConeRenderer New() :1672
void ConeRenderer__New3_fn(ConeRenderer** __retval)
{
    *__retval = ConeRenderer::New3();
}

// public ConeRenderer() [instance] :1672
void ConeRenderer::ctor_4()
{
    uStackFrame __("Fuse.Entities.Primitives.ConeRenderer", ".ctor()");
    ctor_3();
    Mesh(::g::Fuse::Entities::Mesh::New2(::g::Fuse::Drawing::Meshes::MeshGenerator::CreateCone(10.0f, 5.0f, 16, 16)));
}

// public ConeRenderer New() [static] :1672
ConeRenderer* ConeRenderer::New3()
{
    ConeRenderer* obj1 = (ConeRenderer*)uNew(ConeRenderer_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Entities/0.40.8/$.uno
// --------------------------------------------------------

// public sealed class CubeRenderer :1611
// {
static void CubeRenderer_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Entities::MeshRenderer_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Entities::MeshRenderer_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Entities::MeshRenderer_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Entities::MeshRenderer_type, interface3),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Entities::MeshRenderer_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Entities::MeshRenderer_type, interface5),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Entities::MeshRenderer_type, interface6),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Entities::MeshRenderer_type, interface7));
    type->SetFields(60);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)CubeRenderer__New3_fn, 0, true, CubeRenderer_typeof(), 0));
}

::g::Fuse::Entities::MeshRenderer_type* CubeRenderer_typeof()
{
    static uSStrong< ::g::Fuse::Entities::MeshRenderer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Entities::MeshRenderer_typeof();
    options.FieldCount = 60;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(CubeRenderer);
    options.TypeSize = sizeof(::g::Fuse::Entities::MeshRenderer_type);
    type = (::g::Fuse::Entities::MeshRenderer_type*)uClassType::New("Fuse.Entities.Primitives.CubeRenderer", options);
    type->fp_build_ = CubeRenderer_build;
    type->fp_ctor_ = (void*)CubeRenderer__New3_fn;
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

// public CubeRenderer() :1613
void CubeRenderer__ctor_4_fn(CubeRenderer* __this)
{
    __this->ctor_4();
}

// public CubeRenderer New() :1613
void CubeRenderer__New3_fn(CubeRenderer** __retval)
{
    *__retval = CubeRenderer::New3();
}

// public CubeRenderer() [instance] :1613
void CubeRenderer::ctor_4()
{
    uStackFrame __("Fuse.Entities.Primitives.CubeRenderer", ".ctor()");
    ctor_3();
    Mesh(::g::Fuse::Entities::Mesh::New2(::g::Fuse::Drawing::Meshes::MeshGenerator::CreateCube(::g::Uno::Float3__New1(0.0f), 5.0f)));
    HitTestMode(1);
}

// public CubeRenderer New() [static] :1613
CubeRenderer* CubeRenderer::New3()
{
    CubeRenderer* obj1 = (CubeRenderer*)uNew(CubeRenderer_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Entities/0.40.8/$.uno
// --------------------------------------------------------

// public sealed class CylinderRenderer :1679
// {
static void CylinderRenderer_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Entities::MeshRenderer_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Entities::MeshRenderer_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Entities::MeshRenderer_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Entities::MeshRenderer_type, interface3),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Entities::MeshRenderer_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Entities::MeshRenderer_type, interface5),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Entities::MeshRenderer_type, interface6),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Entities::MeshRenderer_type, interface7));
    type->SetFields(60);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)CylinderRenderer__New3_fn, 0, true, CylinderRenderer_typeof(), 0));
}

::g::Fuse::Entities::MeshRenderer_type* CylinderRenderer_typeof()
{
    static uSStrong< ::g::Fuse::Entities::MeshRenderer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Entities::MeshRenderer_typeof();
    options.FieldCount = 60;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(CylinderRenderer);
    options.TypeSize = sizeof(::g::Fuse::Entities::MeshRenderer_type);
    type = (::g::Fuse::Entities::MeshRenderer_type*)uClassType::New("Fuse.Entities.Primitives.CylinderRenderer", options);
    type->fp_build_ = CylinderRenderer_build;
    type->fp_ctor_ = (void*)CylinderRenderer__New3_fn;
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

// public CylinderRenderer() :1681
void CylinderRenderer__ctor_4_fn(CylinderRenderer* __this)
{
    __this->ctor_4();
}

// public CylinderRenderer New() :1681
void CylinderRenderer__New3_fn(CylinderRenderer** __retval)
{
    *__retval = CylinderRenderer::New3();
}

// public CylinderRenderer() [instance] :1681
void CylinderRenderer::ctor_4()
{
    uStackFrame __("Fuse.Entities.Primitives.CylinderRenderer", ".ctor()");
    ctor_3();
    Mesh(::g::Fuse::Entities::Mesh::New2(::g::Fuse::Drawing::Meshes::MeshGenerator::CreateCylinder(10.0f, 5.0f, 16, 16)));
}

// public CylinderRenderer New() [static] :1681
CylinderRenderer* CylinderRenderer::New3()
{
    CylinderRenderer* obj1 = (CylinderRenderer*)uNew(CylinderRenderer_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Entities/0.40.8/$.uno
// --------------------------------------------------------

// public sealed class SphereRenderer :1621
// {
static void SphereRenderer_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Entities::MeshRenderer_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Entities::MeshRenderer_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Entities::MeshRenderer_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Entities::MeshRenderer_type, interface3),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Entities::MeshRenderer_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Entities::MeshRenderer_type, interface5),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Entities::MeshRenderer_type, interface6),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Entities::MeshRenderer_type, interface7));
    type->SetFields(60,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Entities::Primitives::SphereRenderer, _isDirty), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Entities::Primitives::SphereRenderer, _quality), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Entities::Primitives::SphereRenderer, _radius), 0);
    type->Reflection.SetFunctions(5,
        new uFunction(".ctor", NULL, (void*)SphereRenderer__New3_fn, 0, true, SphereRenderer_typeof(), 0),
        new uFunction("get_Quality", NULL, (void*)SphereRenderer__get_Quality_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_Quality", NULL, (void*)SphereRenderer__set_Quality_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_Radius", NULL, (void*)SphereRenderer__get_Radius_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Radius", NULL, (void*)SphereRenderer__set_Radius_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

::g::Fuse::Entities::MeshRenderer_type* SphereRenderer_typeof()
{
    static uSStrong< ::g::Fuse::Entities::MeshRenderer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Entities::MeshRenderer_typeof();
    options.FieldCount = 63;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(SphereRenderer);
    options.TypeSize = sizeof(::g::Fuse::Entities::MeshRenderer_type);
    type = (::g::Fuse::Entities::MeshRenderer_type*)uClassType::New("Fuse.Entities.Primitives.SphereRenderer", options);
    type->fp_build_ = SphereRenderer_build;
    type->fp_ctor_ = (void*)SphereRenderer__New3_fn;
    type->fp_Validate = (void(*)(::g::Fuse::Entities::MeshRenderer*))SphereRenderer__Validate_fn;
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

// public SphereRenderer() :1653
void SphereRenderer__ctor_4_fn(SphereRenderer* __this)
{
    __this->ctor_4();
}

// public SphereRenderer New() :1653
void SphereRenderer__New3_fn(SphereRenderer** __retval)
{
    *__retval = SphereRenderer::New3();
}

// public int get_Quality() :1642
void SphereRenderer__get_Quality_fn(SphereRenderer* __this, int* __retval)
{
    *__retval = __this->Quality();
}

// public void set_Quality(int value) :1643
void SphereRenderer__set_Quality_fn(SphereRenderer* __this, int* value)
{
    __this->Quality(*value);
}

// public float get_Radius() :1628
void SphereRenderer__get_Radius_fn(SphereRenderer* __this, float* __retval)
{
    *__retval = __this->Radius();
}

// public void set_Radius(float value) :1629
void SphereRenderer__set_Radius_fn(SphereRenderer* __this, float* value)
{
    __this->Radius(*value);
}

// protected override sealed void Validate() :1658
void SphereRenderer__Validate_fn(SphereRenderer* __this)
{
    uStackFrame __("Fuse.Entities.Primitives.SphereRenderer", "Validate()");

    if (__this->_isDirty || (__this->Mesh() == NULL))
    {
        if (__this->Mesh() != NULL)
            uPtr(__this->Mesh())->Dispose();

        __this->Mesh(::g::Fuse::Entities::Mesh::New2(::g::Fuse::Drawing::Meshes::MeshGenerator::CreateSphere(::g::Uno::Float3__New1(0.0f), __this->_radius, __this->_quality, __this->_quality)));
        __this->_isDirty = false;
    }
}

// public SphereRenderer() [instance] :1653
void SphereRenderer::ctor_4()
{
    uStackFrame __("Fuse.Entities.Primitives.SphereRenderer", ".ctor()");
    _radius = 5.0f;
    _quality = 16;
    ctor_3();
    HitTestMode(2);
}

// public int get_Quality() [instance] :1642
int SphereRenderer::Quality()
{
    uStackFrame __("Fuse.Entities.Primitives.SphereRenderer", "get_Quality()");
    return _quality;
}

// public void set_Quality(int value) [instance] :1643
void SphereRenderer::Quality(int value)
{
    uStackFrame __("Fuse.Entities.Primitives.SphereRenderer", "set_Quality(int)");

    if (_quality != value)
    {
        _quality = value;
        _isDirty = true;
    }
}

// public float get_Radius() [instance] :1628
float SphereRenderer::Radius()
{
    uStackFrame __("Fuse.Entities.Primitives.SphereRenderer", "get_Radius()");
    return _radius;
}

// public void set_Radius(float value) [instance] :1629
void SphereRenderer::Radius(float value)
{
    uStackFrame __("Fuse.Entities.Primitives.SphereRenderer", "set_Radius(float)");

    if (_radius != value)
    {
        _radius = value;
        _isDirty = true;
    }
}

// public SphereRenderer New() [static] :1653
SphereRenderer* SphereRenderer::New3()
{
    SphereRenderer* obj1 = (SphereRenderer*)uNew(SphereRenderer_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

}}}} // ::g::Fuse::Entities::Primitives
