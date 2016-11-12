// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Drawing.Tesselation.Collections.ActiveRegionDict.h>
#include <Fuse.Drawing.Tesselation.Collections.Dict-1.h>
#include <Fuse.Drawing.Tesselation.Collections.DictNode-1.h>
#include <Fuse.Drawing.Tesselation.Collections.DictNodeEnumerable-1.h>
#include <Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable-1.h>
#include <Fuse.Drawing.Tesselation.Collections.LinkedListEnumerator-1.h>
#include <Fuse.Drawing.Tesselation.Collections.PriorityQueue-1.h>
#include <Fuse.Drawing.Tesselation.Collections.VertexQueue.h>
#include <Fuse.Drawing.Tesselation.Geom.h>
#include <Fuse.Drawing.Tesselation.HalfEdge.h>
#include <Fuse.Drawing.Tesselation.Mesh.h>
#include <Fuse.Drawing.Tesselation.Sweep.h>
#include <Fuse.Drawing.Tesselation.Vertex.h>
#include <Uno.ArgumentException.h>
#include <Uno.Bool.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Func-2.h>
#include <Uno.Int.h>
#include <Uno.String.h>
static uString* STRINGS[3];
static uType* TYPES[6];

namespace g{
namespace Fuse{
namespace Drawing{
namespace Tesselation{
namespace Collections{

// /usr/local/share/uno/Packages/Fuse.Drawing.Polygons/0.40.8/collections/$.uno
// ----------------------------------------------------------------------------

// internal sealed class ActiveRegionDict :188
// {
static void ActiveRegionDict_build(uType* type)
{
    type->SetBase(::g::Fuse::Drawing::Tesselation::Collections::Dict_typeof()->MakeType(::g::Fuse::Drawing::Tesselation::ActiveRegion_typeof()));
    type->SetFields(2,
        ::g::Fuse::Drawing::Tesselation::Mesh_typeof(), offsetof(::g::Fuse::Drawing::Tesselation::Collections::ActiveRegionDict, _mesh), uFieldFlagsWeak,
        ::g::Fuse::Drawing::Tesselation::Sweep_typeof(), offsetof(::g::Fuse::Drawing::Tesselation::Collections::ActiveRegionDict, _sweep), uFieldFlagsWeak);
}

::g::Fuse::Drawing::Tesselation::Collections::Dict_type* ActiveRegionDict_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::Tesselation::Collections::Dict_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Tesselation::Collections::Dict_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(ActiveRegionDict);
    options.TypeSize = sizeof(::g::Fuse::Drawing::Tesselation::Collections::Dict_type);
    type = (::g::Fuse::Drawing::Tesselation::Collections::Dict_type*)uClassType::New("Fuse.Drawing.Tesselation.Collections.ActiveRegionDict", options);
    type->fp_build_ = ActiveRegionDict_build;
    type->fp_Leq = (void(*)(::g::Fuse::Drawing::Tesselation::Collections::Dict*, void*, void*, bool*))ActiveRegionDict__Leq_fn;
    return type;
}

// public ActiveRegionDict(Fuse.Drawing.Tesselation.Sweep sweep, Fuse.Drawing.Tesselation.Mesh mesh) :195
void ActiveRegionDict__ctor_1_fn(ActiveRegionDict* __this, ::g::Fuse::Drawing::Tesselation::Sweep* sweep, ::g::Fuse::Drawing::Tesselation::Mesh* mesh)
{
    __this->ctor_1(sweep, mesh);
}

// public Fuse.Drawing.Tesselation.ActiveRegion AddRegionBelow(Fuse.Drawing.Tesselation.ActiveRegion regAbove, Fuse.Drawing.Tesselation.HalfEdge eNewUp) :289
void ActiveRegionDict__AddRegionBelow_fn(ActiveRegionDict* __this, ::g::Fuse::Drawing::Tesselation::ActiveRegion* regAbove, ::g::Fuse::Drawing::Tesselation::HalfEdge* eNewUp, ::g::Fuse::Drawing::Tesselation::ActiveRegion** __retval)
{
    *__retval = __this->AddRegionBelow(regAbove, eNewUp);
}

// public void CheckInvariants() :202
void ActiveRegionDict__CheckInvariants_fn(ActiveRegionDict* __this)
{
    __this->CheckInvariants();
}

// public bool EdgeLeq(Fuse.Drawing.Tesselation.HalfEdge e1, Fuse.Drawing.Tesselation.HalfEdge e2) :253
void ActiveRegionDict__EdgeLeq_fn(ActiveRegionDict* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge* e1, ::g::Fuse::Drawing::Tesselation::HalfEdge* e2, bool* __retval)
{
    *__retval = __this->EdgeLeq(e1, e2);
}

// public Fuse.Drawing.Tesselation.ActiveRegion GetRegionContaining(Fuse.Drawing.Tesselation.Vertex vEvent) :297
void ActiveRegionDict__GetRegionContaining_fn(ActiveRegionDict* __this, ::g::Fuse::Drawing::Tesselation::Vertex* vEvent, ::g::Fuse::Drawing::Tesselation::ActiveRegion** __retval)
{
    *__retval = __this->GetRegionContaining(vEvent);
}

// protected override sealed bool Leq(Fuse.Drawing.Tesselation.ActiveRegion reg1, Fuse.Drawing.Tesselation.ActiveRegion reg2) :246
void ActiveRegionDict__Leq_fn(ActiveRegionDict* __this, ::g::Fuse::Drawing::Tesselation::ActiveRegion* reg1, ::g::Fuse::Drawing::Tesselation::ActiveRegion* reg2, bool* __retval)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.ActiveRegionDict", "Leq(Fuse.Drawing.Tesselation.ActiveRegion,Fuse.Drawing.Tesselation.ActiveRegion)");
    ::g::Fuse::Drawing::Tesselation::HalfEdge* e1 = uPtr(reg1)->UpperEdge();
    ::g::Fuse::Drawing::Tesselation::HalfEdge* e2 = uPtr(reg2)->UpperEdge();
    return *__retval = __this->EdgeLeq(e1, e2), void();
}

// public ActiveRegionDict New(Fuse.Drawing.Tesselation.Sweep sweep, Fuse.Drawing.Tesselation.Mesh mesh) :195
void ActiveRegionDict__New1_fn(::g::Fuse::Drawing::Tesselation::Sweep* sweep, ::g::Fuse::Drawing::Tesselation::Mesh* mesh, ActiveRegionDict** __retval)
{
    *__retval = ActiveRegionDict::New1(sweep, mesh);
}

// public ActiveRegionDict(Fuse.Drawing.Tesselation.Sweep sweep, Fuse.Drawing.Tesselation.Mesh mesh) [instance] :195
void ActiveRegionDict::ctor_1(::g::Fuse::Drawing::Tesselation::Sweep* sweep, ::g::Fuse::Drawing::Tesselation::Mesh* mesh)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.ActiveRegionDict", ".ctor(Fuse.Drawing.Tesselation.Sweep,Fuse.Drawing.Tesselation.Mesh)");
    ctor_();
    _mesh = mesh;
    _sweep = sweep;
}

// public Fuse.Drawing.Tesselation.ActiveRegion AddRegionBelow(Fuse.Drawing.Tesselation.ActiveRegion regAbove, Fuse.Drawing.Tesselation.HalfEdge eNewUp) [instance] :289
::g::Fuse::Drawing::Tesselation::ActiveRegion* ActiveRegionDict::AddRegionBelow(::g::Fuse::Drawing::Tesselation::ActiveRegion* regAbove, ::g::Fuse::Drawing::Tesselation::HalfEdge* eNewUp)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.ActiveRegionDict", "AddRegionBelow(Fuse.Drawing.Tesselation.ActiveRegion,Fuse.Drawing.Tesselation.HalfEdge)");
    ::g::Fuse::Drawing::Tesselation::Collections::DictNode* ret2;
    ::g::Fuse::Drawing::Tesselation::ActiveRegion* regNew = ::g::Fuse::Drawing::Tesselation::ActiveRegion::New1(_mesh, eNewUp, false);
    regNew->UpperEdgeDictNode((::g::Fuse::Drawing::Tesselation::Collections::Dict__InsertBefore_fn(this, uPtr(regAbove)->UpperEdgeDictNode(), regNew, &ret2), ret2));
    uPtr(eNewUp)->ActiveRegion(regNew);
    return regNew;
}

// public void CheckInvariants() [instance] :202
void ActiveRegionDict::CheckInvariants()
{
}

// public bool EdgeLeq(Fuse.Drawing.Tesselation.HalfEdge e1, Fuse.Drawing.Tesselation.HalfEdge e2) [instance] :253
bool ActiveRegionDict::EdgeLeq(::g::Fuse::Drawing::Tesselation::HalfEdge* e1, ::g::Fuse::Drawing::Tesselation::HalfEdge* e2)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.ActiveRegionDict", "EdgeLeq(Fuse.Drawing.Tesselation.HalfEdge,Fuse.Drawing.Tesselation.HalfEdge)");

    if (uPtr(e1)->Destination() == uPtr(_sweep)->Event())
    {
        if (uPtr(e2)->Destination() == uPtr(_sweep)->Event())
        {
            if (uPtr(uPtr(e1)->Origin())->VertLeq(uPtr(e2)->Origin()))
                return ::g::Fuse::Drawing::Tesselation::Geom::EdgeSign(uPtr(e2)->Destination(), uPtr(e1)->Origin(), uPtr(e2)->Origin()) <= 0.0f;
            else 
                return ::g::Fuse::Drawing::Tesselation::Geom::EdgeSign(uPtr(e1)->Destination(), uPtr(e2)->Origin(), uPtr(e1)->Origin()) >= 0.0f;
        }
        else 
            return ::g::Fuse::Drawing::Tesselation::Geom::EdgeSign(uPtr(e2)->Destination(), uPtr(_sweep)->Event(), uPtr(e2)->Origin()) <= 0.0f;
    }

    if (uPtr(e2)->Destination() == uPtr(_sweep)->Event())
        return ::g::Fuse::Drawing::Tesselation::Geom::EdgeSign(uPtr(e1)->Destination(), uPtr(_sweep)->Event(), uPtr(e1)->Origin()) >= 0.0f;

    float t1 = ::g::Fuse::Drawing::Tesselation::Geom::EdgeEval(uPtr(e1)->Destination(), uPtr(_sweep)->Event(), uPtr(e1)->Origin());
    float t2 = ::g::Fuse::Drawing::Tesselation::Geom::EdgeEval(uPtr(e2)->Destination(), uPtr(_sweep)->Event(), uPtr(e2)->Origin());
    return t1 >= t2;
}

// public Fuse.Drawing.Tesselation.ActiveRegion GetRegionContaining(Fuse.Drawing.Tesselation.Vertex vEvent) [instance] :297
::g::Fuse::Drawing::Tesselation::ActiveRegion* ActiveRegionDict::GetRegionContaining(::g::Fuse::Drawing::Tesselation::Vertex* vEvent)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.ActiveRegionDict", "GetRegionContaining(Fuse.Drawing.Tesselation.Vertex)");
    ::g::Fuse::Drawing::Tesselation::ActiveRegion* ret3;
    ::g::Fuse::Drawing::Tesselation::Collections::DictNode* ret4;
    return (::g::Fuse::Drawing::Tesselation::Collections::DictNode__get_Key_fn(uPtr((::g::Fuse::Drawing::Tesselation::Collections::Dict__Search_fn(this, ::g::Fuse::Drawing::Tesselation::ActiveRegion::New1(_mesh, uPtr(uPtr(vEvent)->AnEdge())->Sym(), false), &ret4), ret4)), &ret3), ret3);
}

// public ActiveRegionDict New(Fuse.Drawing.Tesselation.Sweep sweep, Fuse.Drawing.Tesselation.Mesh mesh) [static] :195
ActiveRegionDict* ActiveRegionDict::New1(::g::Fuse::Drawing::Tesselation::Sweep* sweep, ::g::Fuse::Drawing::Tesselation::Mesh* mesh)
{
    ActiveRegionDict* obj1 = (ActiveRegionDict*)uNew(ActiveRegionDict_typeof());
    obj1->ctor_1(sweep, mesh);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Polygons/0.40.8/collections/$.uno
// ----------------------------------------------------------------------------

// internal abstract class Dict<T> :128
// {
// ~Dict() :143
static void Dict__Finalize_fn(Dict* __this)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.Dict`1", "Finalize()");
    uPtr(__this->_head)->Unlink();
    __this->_head = NULL;
}

static void Dict_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Drawing::Tesselation::Collections::DictNode_typeof();
    ::TYPES[1] = ::g::Fuse::Drawing::Tesselation::Collections::DictNodeEnumerable_typeof();
    ::TYPES[2] = ::g::Uno::Collections::EnumerableExtensions_typeof();
    ::TYPES[3] = ::g::Uno::Func1_typeof();
    type->SetPrecalc(
        ::g::Fuse::Drawing::Tesselation::Collections::DictNode_typeof()->MakeType(type->T(0)),
        ::g::Fuse::Drawing::Tesselation::Collections::DictNodeEnumerable_typeof()->MakeType(type->T(0)),
        ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(2, ::g::Fuse::Drawing::Tesselation::Collections::DictNode_typeof()->MakeType(type->T(0)), type->T(0)),
        ::g::Uno::Func1_typeof()->MakeType(::g::Fuse::Drawing::Tesselation::Collections::DictNode_typeof()->MakeType(type->T(0)), type->T(0)));
    type->SetFields(0,
        ::g::Fuse::Drawing::Tesselation::Collections::DictNode_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Drawing::Tesselation::Collections::Dict, _head), 0,
        ::g::Fuse::Drawing::Tesselation::Collections::DictNodeEnumerable_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Drawing::Tesselation::Collections::Dict, _nodes), 0);
}

Dict_type* Dict_typeof()
{
    static uSStrong<Dict_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.PrecalcCount = 4;
    options.ObjectSize = sizeof(Dict);
    options.TypeSize = sizeof(Dict_type);
    type = (Dict_type*)uClassType::New("Fuse.Drawing.Tesselation.Collections.Dict`1", options);
    type->fp_build_ = Dict_build;
    type->fp_Finalize = (void(*)(uObject*))Dict__Finalize_fn;
    return type;
}

// protected Dict() :138
void Dict__ctor__fn(Dict* __this)
{
    __this->ctor_();
}

// public void Delete(Fuse.Drawing.Tesselation.Collections.DictNode<T> node) :182
void Dict__Delete_fn(Dict* __this, ::g::Fuse::Drawing::Tesselation::Collections::DictNode* node)
{
    __this->Delete(node);
}

// public Fuse.Drawing.Tesselation.Collections.DictNode<T> Insert(T key) :169
void Dict__Insert_fn(Dict* __this, void* key, ::g::Fuse::Drawing::Tesselation::Collections::DictNode** __retval)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.Dict`1", "Insert(T)");
    ::g::Fuse::Drawing::Tesselation::Collections::DictNode* ret1;
    return *__retval = (Dict__InsertBefore_fn(__this, __this->_head, key, &ret1), ret1), void();
}

// public Fuse.Drawing.Tesselation.Collections.DictNode<T> InsertBefore(Fuse.Drawing.Tesselation.Collections.DictNode<T> node, T key) :174
void Dict__InsertBefore_fn(Dict* __this, ::g::Fuse::Drawing::Tesselation::Collections::DictNode* node, void* key, ::g::Fuse::Drawing::Tesselation::Collections::DictNode** __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(Dict_typeof())->T(0),
    };
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.Dict`1", "InsertBefore(Fuse.Drawing.Tesselation.Collections.DictNode<T>,T)");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    bool ret3;
    ::g::Fuse::Drawing::Tesselation::Collections::DictNode* ret5;

    do
        node = (::g::Fuse::Drawing::Tesselation::Collections::DictNode*)uPtr(node)->Prev();
    while ((uBoxPtr(__types[0], (::g::Fuse::Drawing::Tesselation::Collections::DictNode__get_Key_fn(uPtr(node), &ret2), ret2)) != NULL) && !(__this->Leq_ex((::g::Fuse::Drawing::Tesselation::Collections::DictNode__get_Key_fn(uPtr(node), &ret4), ret4), key, &ret3), ret3));

    return *__retval = (::g::Fuse::Drawing::Tesselation::Collections::DictNode__InsertBefore_fn(uPtr(node), key, &ret5), ret5), void();
}

// public Uno.Collections.IEnumerable<T> get_Items() :151
void Dict__get_Items_fn(Dict* __this, uObject** __retval)
{
    *__retval = __this->Items();
}

// private T Key(Fuse.Drawing.Tesselation.Collections.DictNode<T> node) :157
void Dict__Key_fn(Dict* __this, ::g::Fuse::Drawing::Tesselation::Collections::DictNode* node, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(Dict_typeof())->T(0),
    };
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.Dict`1", "Key(Fuse.Drawing.Tesselation.Collections.DictNode<T>)");
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((::g::Fuse::Drawing::Tesselation::Collections::DictNode__get_Key_fn(uPtr(node), &ret6), ret6)), void();
}

// public Fuse.Drawing.Tesselation.Collections.DictNode<T> get_Max() :136
void Dict__get_Max_fn(Dict* __this, ::g::Fuse::Drawing::Tesselation::Collections::DictNode** __retval)
{
    *__retval = __this->Max();
}

// public Fuse.Drawing.Tesselation.Collections.DictNode<T> get_Min() :135
void Dict__get_Min_fn(Dict* __this, ::g::Fuse::Drawing::Tesselation::Collections::DictNode** __retval)
{
    *__retval = __this->Min();
}

// public Fuse.Drawing.Tesselation.Collections.DictNode<T> Search(T key) :159
void Dict__Search_fn(Dict* __this, void* key, ::g::Fuse::Drawing::Tesselation::Collections::DictNode** __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(Dict_typeof())->T(0),
    };
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.Dict`1", "Search(T)");
    uT ret7(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret9(__types[0], U_ALLOCA(__types[0]->ValueSize));
    bool ret8;
    ::g::Fuse::Drawing::Tesselation::Collections::DictNode* node = __this->_head;

    do
        node = (::g::Fuse::Drawing::Tesselation::Collections::DictNode*)uPtr(node)->Next();
    while ((uBoxPtr(__types[0], (::g::Fuse::Drawing::Tesselation::Collections::DictNode__get_Key_fn(uPtr(node), &ret7), ret7)) != NULL) && !(__this->Leq_ex(key, (::g::Fuse::Drawing::Tesselation::Collections::DictNode__get_Key_fn(uPtr(node), &ret9), ret9), &ret8), ret8));

    return *__retval = node, void();
}

// protected Dict() [instance] :138
void Dict::ctor_()
{
    uType* __types[] = {
        __type->GetBase(Dict_typeof())->Precalced(0/*Fuse.Drawing.Tesselation.Collections.DictNode<T>*/),
        __type->GetBase(Dict_typeof())->Precalced(1/*Fuse.Drawing.Tesselation.Collections.DictNodeEnumerable<T>*/),
    };
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.Dict`1", ".ctor()");
    _head = ((::g::Fuse::Drawing::Tesselation::Collections::DictNode*)::g::Fuse::Drawing::Tesselation::Collections::DictNode::New1(__types[0]));
    _nodes = ((::g::Fuse::Drawing::Tesselation::Collections::DictNodeEnumerable*)::g::Fuse::Drawing::Tesselation::Collections::DictNodeEnumerable::New1(__types[1], _head));
}

// public void Delete(Fuse.Drawing.Tesselation.Collections.DictNode<T> node) [instance] :182
void Dict::Delete(::g::Fuse::Drawing::Tesselation::Collections::DictNode* node)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.Dict`1", "Delete(Fuse.Drawing.Tesselation.Collections.DictNode<T>)");
    uPtr(node)->Unlink();
}

// public Uno.Collections.IEnumerable<T> get_Items() [instance] :151
uObject* Dict::Items()
{
    uType* __types[] = {
        __type->GetBase(Dict_typeof())->Precalced(2/*Uno.Collections.EnumerableExtensions.Select<Fuse.Drawing.Tesselation.Collections.DictNode<T>, T>*/),
        __type->GetBase(Dict_typeof())->Precalced(3/*Uno.Func<Fuse.Drawing.Tesselation.Collections.DictNode<T>, T>*/),
    };
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.Dict`1", "get_Items()");
    return (uObject*)::g::Uno::Collections::EnumerableExtensions::Select(__types[0], (uObject*)_nodes, uDelegate::New(__types[1], (void*)Dict__Key_fn, this));
}

// public Fuse.Drawing.Tesselation.Collections.DictNode<T> get_Max() [instance] :136
::g::Fuse::Drawing::Tesselation::Collections::DictNode* Dict::Max()
{
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.Dict`1", "get_Max()");
    return (::g::Fuse::Drawing::Tesselation::Collections::DictNode*)uPtr(_head)->Prev();
}

// public Fuse.Drawing.Tesselation.Collections.DictNode<T> get_Min() [instance] :135
::g::Fuse::Drawing::Tesselation::Collections::DictNode* Dict::Min()
{
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.Dict`1", "get_Min()");
    return (::g::Fuse::Drawing::Tesselation::Collections::DictNode*)uPtr(_head)->Next();
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Polygons/0.40.8/collections/$.uno
// ----------------------------------------------------------------------------

// internal sealed class DictNode<T> :70
// {
static void DictNode_build(uType* type)
{
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type, offsetof(::g::Fuse::Drawing::Tesselation::Collections::DictNode, _prev), uFieldFlagsWeak,
        type, offsetof(::g::Fuse::Drawing::Tesselation::Collections::DictNode, _Next), 0);
}

uType* DictNode_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(DictNode);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Tesselation.Collections.DictNode`1", options);
    type->fp_build_ = DictNode_build;
    type->fp_ctor_ = (void*)DictNode__New1_fn;
    return type;
}

// public DictNode() :82
void DictNode__ctor__fn(DictNode* __this)
{
    __this->ctor_();
}

// public Fuse.Drawing.Tesselation.Collections.DictNode<T> InsertBefore(T key) :89
void DictNode__InsertBefore_fn(DictNode* __this, void* key, DictNode** __retval)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.DictNode`1", "InsertBefore(T)");
    DictNode* collection1;
    collection1 = DictNode::New1(__this->__type);
    DictNode__set_Key_fn(uPtr(collection1), key);
    key;
    DictNode* newNode = collection1;
    DictNode* node = __this;
    uPtr(newNode)->Next(node->Next());
    uPtr(node->Next())->Prev(newNode);
    newNode->Prev(node);
    node->Next(newNode);
    return *__retval = newNode, void();
}

// public T get_Key() :74
void DictNode__get_Key_fn(DictNode* __this, uTRef __retval)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.DictNode`1", "get_Key()");
    return __retval.Store(__this->_key()), void();
}

// private void set_Key(T value) :74
void DictNode__set_Key_fn(DictNode* __this, void* value)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.DictNode`1", "set_Key(T)");
    __this->_key() = value;
}

// public DictNode New() :82
void DictNode__New1_fn(uType* __type, DictNode** __retval)
{
    *__retval = DictNode::New1(__type);
}

// public generated Fuse.Drawing.Tesselation.Collections.DictNode<T> get_Next() :76
void DictNode__get_Next_fn(DictNode* __this, DictNode** __retval)
{
    *__retval = __this->Next();
}

// private generated void set_Next(Fuse.Drawing.Tesselation.Collections.DictNode<T> value) :76
void DictNode__set_Next_fn(DictNode* __this, DictNode* value)
{
    __this->Next(value);
}

// public Fuse.Drawing.Tesselation.Collections.DictNode<T> get_Prev() :80
void DictNode__get_Prev_fn(DictNode* __this, DictNode** __retval)
{
    *__retval = __this->Prev();
}

// private void set_Prev(Fuse.Drawing.Tesselation.Collections.DictNode<T> value) :80
void DictNode__set_Prev_fn(DictNode* __this, DictNode* value)
{
    __this->Prev(value);
}

// public void Unlink() :101
void DictNode__Unlink_fn(DictNode* __this)
{
    __this->Unlink();
}

// public DictNode() [instance] :82
void DictNode::ctor_()
{
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.DictNode`1", ".ctor()");
    DictNode__set_Key_fn(this, uT(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize)));
    Next(this);
    Prev(this);
}

// public generated Fuse.Drawing.Tesselation.Collections.DictNode<T> get_Next() [instance] :76
DictNode* DictNode::Next()
{
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.DictNode`1", "get_Next()");
    return _Next;
}

// private generated void set_Next(Fuse.Drawing.Tesselation.Collections.DictNode<T> value) [instance] :76
void DictNode::Next(DictNode* value)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.DictNode`1", "set_Next(Fuse.Drawing.Tesselation.Collections.DictNode<T>)");
    _Next = value;
}

// public Fuse.Drawing.Tesselation.Collections.DictNode<T> get_Prev() [instance] :80
DictNode* DictNode::Prev()
{
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.DictNode`1", "get_Prev()");
    return _prev;
}

// private void set_Prev(Fuse.Drawing.Tesselation.Collections.DictNode<T> value) [instance] :80
void DictNode::Prev(DictNode* value)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.DictNode`1", "set_Prev(Fuse.Drawing.Tesselation.Collections.DictNode<T>)");
    _prev = value;
}

// public void Unlink() [instance] :101
void DictNode::Unlink()
{
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.DictNode`1", "Unlink()");
    uPtr(Prev())->Next(Next());
    uPtr(Next())->Prev(Prev());
    Next(NULL);
    Prev(NULL);
}

// public DictNode New() [static] :82
DictNode* DictNode::New1(uType* __type)
{
    DictNode* obj1 = (DictNode*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Polygons/0.40.8/collections/$.uno
// ----------------------------------------------------------------------------

// internal sealed class DictNodeEnumerable<T> :112
// {
static void DictNodeEnumerable_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Drawing::Tesselation::Collections::DictNode_typeof();
    type->SetBase(::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_typeof()->MakeType(::g::Fuse::Drawing::Tesselation::Collections::DictNode_typeof()->MakeType(type->T(0))));
    type->SetPrecalc(
        ::g::Fuse::Drawing::Tesselation::Collections::DictNode_typeof()->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Drawing::Tesselation::Collections::DictNode_typeof()->MakeType(type->T(0))), offsetof(::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type, interface0));
    type->SetFields(1,
        ::g::Fuse::Drawing::Tesselation::Collections::DictNode_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Drawing::Tesselation::Collections::DictNodeEnumerable, _head), 0);
}

::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type* DictNodeEnumerable_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_typeof();
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(DictNodeEnumerable);
    options.TypeSize = sizeof(::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type);
    type = (::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type*)uClassType::New("Fuse.Drawing.Tesselation.Collections.DictNodeEnumerable`1", options);
    type->fp_build_ = DictNodeEnumerable_build;
    type->fp_GetNext = (void(*)(::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable*, void*, uTRef))DictNodeEnumerable__GetNext_fn;
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__GetEnumerator_fn;
    return type;
}

// public DictNodeEnumerable(Fuse.Drawing.Tesselation.Collections.DictNode<T> head) :116
void DictNodeEnumerable__ctor_1_fn(DictNodeEnumerable* __this, ::g::Fuse::Drawing::Tesselation::Collections::DictNode* head)
{
    __this->ctor_1(head);
}

// internal override sealed Fuse.Drawing.Tesselation.Collections.DictNode<T> GetNext(Fuse.Drawing.Tesselation.Collections.DictNode<T> current) :122
void DictNodeEnumerable__GetNext_fn(DictNodeEnumerable* __this, ::g::Fuse::Drawing::Tesselation::Collections::DictNode* current, ::g::Fuse::Drawing::Tesselation::Collections::DictNode** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Fuse.Drawing.Tesselation.Collections.DictNode<T>*/),
    };
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.DictNodeEnumerable`1", "GetNext(Fuse.Drawing.Tesselation.Collections.DictNode<T>)");
    return *__retval = (((::g::Fuse::Drawing::Tesselation::Collections::DictNode*)uPtr(current)->Next()) == __this->_head) ? uCast< ::g::Fuse::Drawing::Tesselation::Collections::DictNode*>(NULL, __types[0]) : (::g::Fuse::Drawing::Tesselation::Collections::DictNode*)uPtr(current)->Next(), void();
}

// public DictNodeEnumerable New(Fuse.Drawing.Tesselation.Collections.DictNode<T> head) :116
void DictNodeEnumerable__New1_fn(uType* __type, ::g::Fuse::Drawing::Tesselation::Collections::DictNode* head, DictNodeEnumerable** __retval)
{
    *__retval = DictNodeEnumerable::New1(__type, head);
}

// public DictNodeEnumerable(Fuse.Drawing.Tesselation.Collections.DictNode<T> head) [instance] :116
void DictNodeEnumerable::ctor_1(::g::Fuse::Drawing::Tesselation::Collections::DictNode* head)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.DictNodeEnumerable`1", ".ctor(Fuse.Drawing.Tesselation.Collections.DictNode<T>)");
    ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__ctor__fn(this, (::g::Fuse::Drawing::Tesselation::Collections::DictNode*)uPtr(head)->Next());
    _head = head;
}

// public DictNodeEnumerable New(Fuse.Drawing.Tesselation.Collections.DictNode<T> head) [static] :116
DictNodeEnumerable* DictNodeEnumerable::New1(uType* __type, ::g::Fuse::Drawing::Tesselation::Collections::DictNode* head)
{
    DictNodeEnumerable* obj1 = (DictNodeEnumerable*)uNew(__type);
    obj1->ctor_1(head);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Polygons/0.40.8/collections/$.uno
// ----------------------------------------------------------------------------

// internal abstract class LinkedListEnumerable<T> :314
// {
static void LinkedListEnumerable_build(uType* type)
{
    ::TYPES[4] = ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerator_typeof();
    type->SetPrecalc(
        ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerator_typeof()->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0)), offsetof(LinkedListEnumerable_type, interface0));
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

LinkedListEnumerable_type* LinkedListEnumerable_typeof()
{
    static uSStrong<LinkedListEnumerable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(LinkedListEnumerable);
    options.TypeSize = sizeof(LinkedListEnumerable_type);
    type = (LinkedListEnumerable_type*)uClassType::New("Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable`1", options);
    type->fp_build_ = LinkedListEnumerable_build;
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))LinkedListEnumerable__GetEnumerator_fn;
    return type;
}

// protected LinkedListEnumerable(T first) :320
void LinkedListEnumerable__ctor__fn(LinkedListEnumerable* __this, void* first)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable`1", ".ctor(T)");
    __this->_first() = first;
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() :325
void LinkedListEnumerable__GetEnumerator_fn(LinkedListEnumerable* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() [instance] :325
uObject* LinkedListEnumerable::GetEnumerator()
{
    uType* __types[] = {
        __type->GetBase(LinkedListEnumerable_typeof())->Precalced(0/*Fuse.Drawing.Tesselation.Collections.LinkedListEnumerator<T>*/),
    };
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable`1", "GetEnumerator()");
    ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerator* ret1;
    return (uObject*)(::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerator__New1_fn(__types[0], _first(), this, &ret1), ret1);
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Polygons/0.40.8/collections/$.uno
// ----------------------------------------------------------------------------

// internal sealed class LinkedListEnumerator<T> :344
// {
static void LinkedListEnumerator_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0)), offsetof(LinkedListEnumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(LinkedListEnumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(LinkedListEnumerator_type, interface2));
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerator, _enumerable), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

LinkedListEnumerator_type* LinkedListEnumerator_typeof()
{
    static uSStrong<LinkedListEnumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(LinkedListEnumerator);
    options.TypeSize = sizeof(LinkedListEnumerator_type);
    type = (LinkedListEnumerator_type*)uClassType::New("Fuse.Drawing.Tesselation.Collections.LinkedListEnumerator`1", options);
    type->fp_build_ = LinkedListEnumerator_build;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))LinkedListEnumerator__get_Current_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))LinkedListEnumerator__Dispose_fn;
    type->interface2.fp_Reset = (void(*)(uObject*))LinkedListEnumerator__Reset_fn;
    type->interface2.fp_MoveNext = (void(*)(uObject*, bool*))LinkedListEnumerator__MoveNext_fn;
    return type;
}

// public LinkedListEnumerator(T first, Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable<T> enumerable) :350
void LinkedListEnumerator__ctor__fn(LinkedListEnumerator* __this, void* first, ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable* enumerable)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.LinkedListEnumerator`1", ".ctor(T,Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable<T>)");
    __this->_enumerable = enumerable;
    __this->_current().Default();
    __this->_next() = first;
}

// public T get_Current() :374
void LinkedListEnumerator__get_Current_fn(LinkedListEnumerator* __this, uTRef __retval)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.LinkedListEnumerator`1", "get_Current()");
    return __retval.Store(__this->_current()), void();
}

// public void Dispose() :357
void LinkedListEnumerator__Dispose_fn(LinkedListEnumerator* __this)
{
    __this->Dispose();
}

// public bool MoveNext() :359
void LinkedListEnumerator__MoveNext_fn(LinkedListEnumerator* __this, bool* __retval)
{
    *__retval = __this->MoveNext();
}

// public LinkedListEnumerator New(T first, Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable<T> enumerable) :350
void LinkedListEnumerator__New1_fn(uType* __type, void* first, ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable* enumerable, LinkedListEnumerator** __retval)
{
    LinkedListEnumerator* obj1 = (LinkedListEnumerator*)uNew(__type);
    LinkedListEnumerator__ctor__fn(obj1, first, enumerable);
    return *__retval = obj1, void();
}

// public void Reset() :367
void LinkedListEnumerator__Reset_fn(LinkedListEnumerator* __this)
{
    __this->Reset();
}

// public void Dispose() [instance] :357
void LinkedListEnumerator::Dispose()
{
}

// public bool MoveNext() [instance] :359
bool LinkedListEnumerator::MoveNext()
{
    uType* __types[] = {
        __type->T(0),
    };
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.LinkedListEnumerator`1", "MoveNext()");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (uBoxPtr(__types[0], _next()) == NULL)
        return false;

    _current() = _next();
    _next() = (uPtr(_enumerable)->GetNext_ex(_current(), &ret2), ret2);
    return true;
}

// public void Reset() [instance] :367
void LinkedListEnumerator::Reset()
{
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.LinkedListEnumerator`1", "Reset()");
    _current().Default();
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Polygons/0.40.8/collections/$.uno
// ----------------------------------------------------------------------------

// internal abstract class PriorityQueue<PQkey> :485
// {
static void PriorityQueue_build(uType* type)
{
    ::STRINGS[0] = uString::Const("item ");
    ::STRINGS[1] = uString::Const(" not found in queue");
    ::STRINGS[2] = uString::Const("item");
    ::TYPES[5] = uObject_typeof()->Array();
    type->SetPrecalc(
        type->T(0)->Array());
    type->SetFields(0,
        type->T(0)->Array(), offsetof(::g::Fuse::Drawing::Tesselation::Collections::PriorityQueue, _elements), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Tesselation::Collections::PriorityQueue, _used), 0);
}

PriorityQueue_type* PriorityQueue_typeof()
{
    static uSStrong<PriorityQueue_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(PriorityQueue);
    options.TypeSize = sizeof(PriorityQueue_type);
    type = (PriorityQueue_type*)uClassType::New("Fuse.Drawing.Tesselation.Collections.PriorityQueue`1", options);
    type->fp_build_ = PriorityQueue_build;
    return type;
}

// protected PriorityQueue(PQkey maxValue) :501
void PriorityQueue__ctor__fn(PriorityQueue* __this, void* maxValue)
{
    uType* __types[] = {
        __this->__type->GetBase(PriorityQueue_typeof())->Precalced(0/*PQkey[]*/),
    };
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.PriorityQueue`1", ".ctor(PQkey)");
    __this->_maxValue() = maxValue;
    __this->_elements = uArray::New(__types[0], 256);
    __this->_used = 0;
}

// public PQkey Dequeue() :540
void PriorityQueue__Dequeue_fn(PriorityQueue* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(PriorityQueue_typeof())->T(0),
    };
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.PriorityQueue`1", "Dequeue()");
    uT max(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (__this->IsEmpty())
        return __retval.Store(__types[0], uT(__types[0], U_ALLOCA(__types[0]->ValueSize))), void();

    max = uPtr(__this->_elements)->TItem(0);
    __this->RemoveAt(0);
    return __retval.Store(max), void();
}

// public void Enqueue(PQkey newKey) :508
void PriorityQueue__Enqueue_fn(PriorityQueue* __this, void* newKey)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.PriorityQueue`1", "Enqueue(PQkey)");
    __this->EnsureCapacity();
    __this->_used = (__this->_used + 1);
    uPtr(__this->_elements)->TItem(__this->_used - 1) = __this->_maxValue();
    PriorityQueue__HeapIncreaseKey_fn(__this, uCRef<int>(__this->_used - 1), newKey);
}

// private void EnsureCapacity() :517
void PriorityQueue__EnsureCapacity_fn(PriorityQueue* __this)
{
    __this->EnsureCapacity();
}

// private void HeapIncreaseKey(int i, PQkey key) :528
void PriorityQueue__HeapIncreaseKey_fn(PriorityQueue* __this, int* i, void* key)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.PriorityQueue`1", "HeapIncreaseKey(int,PQkey)");
    int i_ = *i;
    uPtr(__this->_elements)->TItem(i_) = key;

    while ((i_ > 0) && __this->Leq(__this->Parent(i_), i_))
    {
        __this->Swap(i_, __this->Parent(i_));
        i_ = __this->Parent(i_);
    }
}

// public bool get_IsEmpty() :619
void PriorityQueue__get_IsEmpty_fn(PriorityQueue* __this, bool* __retval)
{
    *__retval = __this->IsEmpty();
}

// private int Left(int i) :602
void PriorityQueue__Left_fn(PriorityQueue* __this, int* i, int* __retval)
{
    *__retval = __this->Left(*i);
}

// private bool Leq(int ai, int bi) :493
void PriorityQueue__Leq_fn(PriorityQueue* __this, int* ai, int* bi, bool* __retval)
{
    *__retval = __this->Leq(*ai, *bi);
}

// private void MaxHeapify(int i) :569
void PriorityQueue__MaxHeapify_fn(PriorityQueue* __this, int* i)
{
    __this->MaxHeapify(*i);
}

// private int Parent(int i) :597
void PriorityQueue__Parent_fn(PriorityQueue* __this, int* i, int* __retval)
{
    *__retval = __this->Parent(*i);
}

// public PQkey get_Peek() :614
void PriorityQueue__get_Peek_fn(PriorityQueue* __this, uTRef __retval)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.PriorityQueue`1", "get_Peek()");
    return __retval.Store(__this->__type->GetBase(PriorityQueue_typeof())->T(0), __this->IsEmpty() ? (void*)uT(__this->__type->GetBase(PriorityQueue_typeof())->T(0), U_ALLOCA(__this->__type->GetBase(PriorityQueue_typeof())->T(0)->ValueSize)) : (void*)uPtr(__this->_elements)->TItem(0)), void();
}

// public void Remove(PQkey item) :548
void PriorityQueue__Remove_fn(PriorityQueue* __this, void* item)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.PriorityQueue`1", "Remove(PQkey)");

    for (int index = 0; index < __this->_used; ++index)
        if (::g::Uno::Object::Equals(uBoxPtr(__this->__type->GetBase(PriorityQueue_typeof())->T(0), uPtr(item), U_ALLOCA(__this->__type->GetBase(PriorityQueue_typeof())->T(0)->ObjectSize)), uBoxPtr(__this->__type->GetBase(PriorityQueue_typeof())->T(0), uPtr(__this->_elements)->TItem(index))))
        {
            __this->RemoveAt(index);
            return;
        }

    U_THROW(::g::Uno::ArgumentException::New5(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[0/*"item "*/], uBoxPtr(__this->__type->GetBase(PriorityQueue_typeof())->T(0), item)), ::STRINGS[1/*" not found ...*/]), ::STRINGS[2/*"item"*/]));
}

// private void RemoveAt(int index) :561
void PriorityQueue__RemoveAt_fn(PriorityQueue* __this, int* index)
{
    __this->RemoveAt(*index);
}

// private int Right(int i) :607
void PriorityQueue__Right_fn(PriorityQueue* __this, int* i, int* __retval)
{
    *__retval = __this->Right(*i);
}

// private void Swap(int a, int b) :590
void PriorityQueue__Swap_fn(PriorityQueue* __this, int* a, int* b)
{
    __this->Swap(*a, *b);
}

// private void EnsureCapacity() [instance] :517
void PriorityQueue::EnsureCapacity()
{
    uType* __types[] = {
        __type->GetBase(PriorityQueue_typeof())->Precalced(0/*PQkey[]*/),
    };
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.PriorityQueue`1", "EnsureCapacity()");

    if (uPtr(_elements)->Length() == _used)
    {
        uArray* oldElements = _elements;
        _elements = uArray::New(__types[0], uPtr(_elements)->Length() * 2);

        for (int i = 0; i < _used; i++)
            uPtr(_elements)->TItem(i) = uPtr(oldElements)->TItem(i);
    }
}

// public bool get_IsEmpty() [instance] :619
bool PriorityQueue::IsEmpty()
{
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.PriorityQueue`1", "get_IsEmpty()");
    return _used < 1;
}

// private int Left(int i) [instance] :602
int PriorityQueue::Left(int i)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.PriorityQueue`1", "Left(int)");
    return 2 * i;
}

// private bool Leq(int ai, int bi) [instance] :493
bool PriorityQueue::Leq(int ai, int bi)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.PriorityQueue`1", "Leq(int,int)");
    bool ret1;
    return (Leq1_ex(uPtr(_elements)->TItem(ai), uPtr(_elements)->TItem(bi), &ret1), ret1);
}

// private void MaxHeapify(int i) [instance] :569
void PriorityQueue::MaxHeapify(int i)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.PriorityQueue`1", "MaxHeapify(int)");
    bool ret2;
    bool ret3;
    int l = Left(i);
    int r = Right(i);
    int largest = -1;

    if ((l < _used) && !(Leq1_ex(uPtr(_elements)->TItem(l), uPtr(_elements)->TItem(i), &ret2), ret2))
        largest = l;
    else 
        largest = i;

    if ((r < _used) && !(Leq1_ex(uPtr(_elements)->TItem(r), uPtr(_elements)->TItem(largest), &ret3), ret3))
        largest = r;

    if (largest != i)
    {
        Swap(i, largest);
        MaxHeapify(largest);
    }
}

// private int Parent(int i) [instance] :597
int PriorityQueue::Parent(int i)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.PriorityQueue`1", "Parent(int)");
    return i / 2;
}

// private void RemoveAt(int index) [instance] :561
void PriorityQueue::RemoveAt(int index)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.PriorityQueue`1", "RemoveAt(int)");
    _used--;
    uPtr(_elements)->TItem(index) = uPtr(_elements)->TItem(_used);
    uPtr(_elements)->TItem(_used).Default();
    MaxHeapify(index);
}

// private int Right(int i) [instance] :607
int PriorityQueue::Right(int i)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.PriorityQueue`1", "Right(int)");
    return (2 * i) + 1;
}

// private void Swap(int a, int b) [instance] :590
void PriorityQueue::Swap(int a, int b)
{
    uType* __types[] = {
        __type->GetBase(PriorityQueue_typeof())->T(0),
    };
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.PriorityQueue`1", "Swap(int,int)");
    uT tmp(__types[0], U_ALLOCA(__types[0]->ValueSize));
    tmp = uPtr(_elements)->TItem(a);
    uPtr(_elements)->TItem(a) = uPtr(_elements)->TItem(b);
    uPtr(_elements)->TItem(b) = tmp;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Polygons/0.40.8/collections/$.uno
// ----------------------------------------------------------------------------

// internal sealed class VertexQueue :471
// {
static void VertexQueue_build(uType* type)
{
    type->SetBase(::g::Fuse::Drawing::Tesselation::Collections::PriorityQueue_typeof()->MakeType(::g::Fuse::Drawing::Tesselation::Vertex_typeof()));
    type->SetFields(3);
}

::g::Fuse::Drawing::Tesselation::Collections::PriorityQueue_type* VertexQueue_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::Tesselation::Collections::PriorityQueue_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Tesselation::Collections::PriorityQueue_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(VertexQueue);
    options.TypeSize = sizeof(::g::Fuse::Drawing::Tesselation::Collections::PriorityQueue_type);
    type = (::g::Fuse::Drawing::Tesselation::Collections::PriorityQueue_type*)uClassType::New("Fuse.Drawing.Tesselation.Collections.VertexQueue", options);
    type->fp_build_ = VertexQueue_build;
    type->fp_ctor_ = (void*)VertexQueue__New1_fn;
    type->fp_Leq1 = (void(*)(::g::Fuse::Drawing::Tesselation::Collections::PriorityQueue*, void*, void*, bool*))VertexQueue__Leq1_fn;
    return type;
}

// public VertexQueue() :473
void VertexQueue__ctor_1_fn(VertexQueue* __this)
{
    __this->ctor_1();
}

// protected override sealed bool Leq(Fuse.Drawing.Tesselation.Vertex a, Fuse.Drawing.Tesselation.Vertex b) :478
void VertexQueue__Leq1_fn(VertexQueue* __this, ::g::Fuse::Drawing::Tesselation::Vertex* a, ::g::Fuse::Drawing::Tesselation::Vertex* b, bool* __retval)
{
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.VertexQueue", "Leq(Fuse.Drawing.Tesselation.Vertex,Fuse.Drawing.Tesselation.Vertex)");
    return *__retval = !uPtr(a)->VertLeq(b), void();
}

// public VertexQueue New() :473
void VertexQueue__New1_fn(VertexQueue** __retval)
{
    *__retval = VertexQueue::New1();
}

// public VertexQueue() [instance] :473
void VertexQueue::ctor_1()
{
    uStackFrame __("Fuse.Drawing.Tesselation.Collections.VertexQueue", ".ctor()");
    ::g::Fuse::Drawing::Tesselation::Vertex* collection1;
    ::g::Fuse::Drawing::Tesselation::Collections::PriorityQueue__ctor__fn(this, (collection1 = ::g::Fuse::Drawing::Tesselation::Vertex::New1(), uPtr(collection1)->S = 3.4028230607370965e+38, collection1));
}

// public VertexQueue New() [static] :473
VertexQueue* VertexQueue::New1()
{
    VertexQueue* obj2 = (VertexQueue*)uNew(VertexQueue_typeof());
    obj2->ctor_1();
    return obj2;
}
// }

}}}}} // ::g::Fuse::Drawing::Tesselation::Collections
