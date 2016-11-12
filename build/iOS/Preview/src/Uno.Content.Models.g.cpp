// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Byte4.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Content.Models.IndexArray.h>
#include <Uno.Content.Models.Model.h>
#include <Uno.Content.Models.ModelDrawable.h>
#include <Uno.Content.Models.ModelMaterial.h>
#include <Uno.Content.Models.ModelMesh.h>
#include <Uno.Content.Models.ModelNode.h>
#include <Uno.Content.Models.ModelParameter-1.h>
#include <Uno.Content.Models.VertexAttributeArray.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Graphics.IndexType.h>
#include <Uno.Graphics.IndexTypeHelpers.h>
#include <Uno.Graphics.PrimitiveType.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexAttributeTypeHelpers.h>
#include <Uno.Int.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.SByte.h>
#include <Uno.SByte4.h>
#include <Uno.Short.h>
#include <Uno.Short2.h>
#include <Uno.Short4.h>
#include <Uno.String.h>
#include <Uno.UInt.h>
#include <Uno.UShort.h>
#include <Uno.UShort2.h>
#include <Uno.UShort4.h>
static uString* STRINGS[3];
static uType* TYPES[4];

namespace g{
namespace Uno{
namespace Content{
namespace Models{

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/content/models/$.uno
// ----------------------------------------------------------------------------

// public sealed class IndexArray :9
// {
static void IndexArray_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Buffer_typeof(), offsetof(::g::Uno::Content::Models::IndexArray, _buffer), 0,
        ::g::Uno::Graphics::IndexType_typeof(), offsetof(::g::Uno::Content::Models::IndexArray, _type), 0);
    type->Reflection.SetFunctions(6,
        new uFunction("get_Buffer", NULL, (void*)IndexArray__get_Buffer_fn, 0, false, ::g::Uno::Buffer_typeof(), 0),
        new uFunction("get_Count", NULL, (void*)IndexArray__get_Count_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("GetInt", NULL, (void*)IndexArray__GetInt_fn, 0, false, ::g::Uno::Int_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)IndexArray__New2_fn, 0, true, IndexArray_typeof(), 1, ::g::Uno::UInt_typeof()->Array()),
        new uFunction(".ctor", NULL, (void*)IndexArray__New4_fn, 0, true, IndexArray_typeof(), 1, ::g::Uno::UShort_typeof()->Array()),
        new uFunction("get_Type", NULL, (void*)IndexArray__get_Type_fn, 0, false, ::g::Uno::Graphics::IndexType_typeof(), 0));
}

uType* IndexArray_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(IndexArray);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Content.Models.IndexArray", options);
    type->fp_build_ = IndexArray_build;
    return type;
}

// public IndexArray(uint[] data) :45
void IndexArray__ctor_1_fn(IndexArray* __this, uArray* data)
{
    __this->ctor_1(data);
}

// public IndexArray(Uno.Graphics.IndexType type, Uno.Buffer buffer) :29
void IndexArray__ctor_2_fn(IndexArray* __this, int* type, ::g::Uno::Buffer* buffer)
{
    __this->ctor_2(*type, buffer);
}

// public IndexArray(ushort[] data) :40
void IndexArray__ctor_3_fn(IndexArray* __this, uArray* data)
{
    __this->ctor_3(data);
}

// public Uno.Buffer get_Buffer() :21
void IndexArray__get_Buffer_fn(IndexArray* __this, ::g::Uno::Buffer** __retval)
{
    *__retval = __this->Buffer();
}

// public int get_Count() :26
void IndexArray__get_Count_fn(IndexArray* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public int GetInt(int index) :50
void IndexArray__GetInt_fn(IndexArray* __this, int* index, int* __retval)
{
    *__retval = __this->GetInt(*index);
}

// public IndexArray New(uint[] data) :45
void IndexArray__New2_fn(uArray* data, IndexArray** __retval)
{
    *__retval = IndexArray::New2(data);
}

// public IndexArray New(ushort[] data) :40
void IndexArray__New4_fn(uArray* data, IndexArray** __retval)
{
    *__retval = IndexArray::New4(data);
}

// public Uno.Graphics.IndexType get_Type() :16
void IndexArray__get_Type_fn(IndexArray* __this, int* __retval)
{
    *__retval = __this->Type();
}

// public IndexArray(uint[] data) [instance] :45
void IndexArray::ctor_1(uArray* data)
{
    uStackFrame __("Uno.Content.Models.IndexArray", ".ctor(uint[])");
    ctor_2(4, ::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer8(data));
}

// public IndexArray(Uno.Graphics.IndexType type, Uno.Buffer buffer) [instance] :29
void IndexArray::ctor_2(int type, ::g::Uno::Buffer* buffer)
{
    uStackFrame __("Uno.Content.Models.IndexArray", ".ctor(Uno.Graphics.IndexType,Uno.Buffer)");
    _buffer = buffer;
    _type = type;
}

// public IndexArray(ushort[] data) [instance] :40
void IndexArray::ctor_3(uArray* data)
{
    uStackFrame __("Uno.Content.Models.IndexArray", ".ctor(ushort[])");
    ctor_2(2, ::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer9(data));
}

// public Uno.Buffer get_Buffer() [instance] :21
::g::Uno::Buffer* IndexArray::Buffer()
{
    uStackFrame __("Uno.Content.Models.IndexArray", "get_Buffer()");
    return _buffer;
}

// public int get_Count() [instance] :26
int IndexArray::Count()
{
    uStackFrame __("Uno.Content.Models.IndexArray", "get_Count()");
    return uPtr(_buffer)->SizeInBytes() / ::g::Uno::Graphics::IndexTypeHelpers::GetStrideInBytes(_type);
}

// public int GetInt(int index) [instance] :50
int IndexArray::GetInt(int index)
{
    uStackFrame __("Uno.Content.Models.IndexArray", "GetInt(int)");

    switch (_type)
    {
        case 1:
            return (int)uPtr(_buffer)->GetByte(index);
        case 2:
            return (int)uPtr(_buffer)->GetUShort(index * 2, true);
        case 4:
            return (int)uPtr(_buffer)->GetUInt(index * 4, true);
        default:
            return 0;
    }
}

// public Uno.Graphics.IndexType get_Type() [instance] :16
int IndexArray::Type()
{
    uStackFrame __("Uno.Content.Models.IndexArray", "get_Type()");
    return _type;
}

// public IndexArray New(uint[] data) [static] :45
IndexArray* IndexArray::New2(uArray* data)
{
    IndexArray* obj4 = (IndexArray*)uNew(IndexArray_typeof());
    obj4->ctor_1(data);
    return obj4;
}

// public IndexArray New(ushort[] data) [static] :40
IndexArray* IndexArray::New4(uArray* data)
{
    IndexArray* obj3 = (IndexArray*)uNew(IndexArray_typeof());
    obj3->ctor_3(data);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/content/models/$.uno
// ----------------------------------------------------------------------------

// public sealed class Model :78
// {
static void Model_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Content::Models::ModelNode_typeof(), offsetof(::g::Uno::Content::Models::Model, _root), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("get_Root", NULL, (void*)Model__get_Root_fn, 0, false, ::g::Uno::Content::Models::ModelNode_typeof(), 0));
}

uType* Model_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Model);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Content.Models.Model", options);
    type->fp_build_ = Model_build;
    return type;
}

// public Uno.Content.Models.ModelNode get_Root() :91
void Model__get_Root_fn(Model* __this, ::g::Uno::Content::Models::ModelNode** __retval)
{
    *__retval = __this->Root();
}

// public Uno.Content.Models.ModelNode get_Root() [instance] :91
::g::Uno::Content::Models::ModelNode* Model::Root()
{
    uStackFrame __("Uno.Content.Models.Model", "get_Root()");
    return _root;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/content/models/$.uno
// ----------------------------------------------------------------------------

// public sealed class ModelDrawable :220
// {
static void ModelDrawable_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Content::Models::ModelMesh_typeof(), offsetof(::g::Uno::Content::Models::ModelDrawable, _mesh), 0,
        ::g::Uno::Content::Models::ModelMaterial_typeof(), offsetof(::g::Uno::Content::Models::ModelDrawable, _optionalMaterial), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Mesh", NULL, (void*)ModelDrawable__get_Mesh_fn, 0, false, ::g::Uno::Content::Models::ModelMesh_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)ModelDrawable__New1_fn, 0, true, ModelDrawable_typeof(), 2, ::g::Uno::Content::Models::ModelMesh_typeof(), ::g::Uno::Content::Models::ModelMaterial_typeof()));
}

uType* ModelDrawable_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ModelDrawable);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Content.Models.ModelDrawable", options);
    type->fp_build_ = ModelDrawable_build;
    return type;
}

// public ModelDrawable(Uno.Content.Models.ModelMesh mesh, [Uno.Content.Models.ModelMaterial optionalMaterial]) :228
void ModelDrawable__ctor__fn(ModelDrawable* __this, ::g::Uno::Content::Models::ModelMesh* mesh, ::g::Uno::Content::Models::ModelMaterial* optionalMaterial)
{
    __this->ctor_(mesh, optionalMaterial);
}

// public Uno.Content.Models.ModelMesh get_Mesh() :223
void ModelDrawable__get_Mesh_fn(ModelDrawable* __this, ::g::Uno::Content::Models::ModelMesh** __retval)
{
    *__retval = __this->Mesh();
}

// public ModelDrawable New(Uno.Content.Models.ModelMesh mesh, [Uno.Content.Models.ModelMaterial optionalMaterial]) :228
void ModelDrawable__New1_fn(::g::Uno::Content::Models::ModelMesh* mesh, ::g::Uno::Content::Models::ModelMaterial* optionalMaterial, ModelDrawable** __retval)
{
    *__retval = ModelDrawable::New1(mesh, optionalMaterial);
}

// public ModelDrawable(Uno.Content.Models.ModelMesh mesh, [Uno.Content.Models.ModelMaterial optionalMaterial]) [instance] :228
void ModelDrawable::ctor_(::g::Uno::Content::Models::ModelMesh* mesh, ::g::Uno::Content::Models::ModelMaterial* optionalMaterial)
{
    uStackFrame __("Uno.Content.Models.ModelDrawable", ".ctor(Uno.Content.Models.ModelMesh,[Uno.Content.Models.ModelMaterial])");
    _mesh = mesh;
    _optionalMaterial = optionalMaterial;
}

// public Uno.Content.Models.ModelMesh get_Mesh() [instance] :223
::g::Uno::Content::Models::ModelMesh* ModelDrawable::Mesh()
{
    uStackFrame __("Uno.Content.Models.ModelDrawable", "get_Mesh()");
    return _mesh;
}

// public ModelDrawable New(Uno.Content.Models.ModelMesh mesh, [Uno.Content.Models.ModelMaterial optionalMaterial]) [static] :228
ModelDrawable* ModelDrawable::New1(::g::Uno::Content::Models::ModelMesh* mesh, ::g::Uno::Content::Models::ModelMaterial* optionalMaterial)
{
    ModelDrawable* obj1 = (ModelDrawable*)uNew(ModelDrawable_typeof());
    obj1->ctor_(mesh, optionalMaterial);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/content/models/$.uno
// ----------------------------------------------------------------------------

// public sealed class ModelMaterial :253
// {
static void ModelMaterial_build(uType* type)
{
}

uType* ModelMaterial_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(ModelMaterial);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Content.Models.ModelMaterial", options);
    type->fp_build_ = ModelMaterial_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/content/models/$.uno
// ----------------------------------------------------------------------------

// public sealed class ModelMesh :612
// {
static void ModelMesh_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Normal");
    ::STRINGS[1] = uString::Const("Position");
    ::STRINGS[2] = uString::Const("TexCoord");
    ::TYPES[0] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Content::Models::VertexAttributeArray_typeof()));
    ::TYPES[1] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[2] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Content::Models::VertexAttributeArray_typeof()));
    ::TYPES[3] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Content::Models::VertexAttributeArray_typeof());
    type->SetFields(0,
        ::g::Uno::Content::Models::IndexArray_typeof(), offsetof(::g::Uno::Content::Models::ModelMesh, _indices), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Content::Models::ModelMesh, _name), 0,
        ::g::Uno::Graphics::PrimitiveType_typeof(), offsetof(::g::Uno::Content::Models::ModelMesh, _primitiveType), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Content::Models::VertexAttributeArray_typeof()), offsetof(::g::Uno::Content::Models::ModelMesh, _vertexAttributes), 0);
    type->Reflection.SetFunctions(11,
        new uFunction("get_IndexCount", NULL, (void*)ModelMesh__get_IndexCount_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_Indices", NULL, (void*)ModelMesh__get_Indices_fn, 0, false, ::g::Uno::Content::Models::IndexArray_typeof(), 0),
        new uFunction("get_Name", NULL, (void*)ModelMesh__get_Name_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)ModelMesh__New1_fn, 0, true, ModelMesh_typeof(), 4, ::g::Uno::String_typeof(), ::g::Uno::Graphics::PrimitiveType_typeof(), ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Content::Models::VertexAttributeArray_typeof()), ::g::Uno::Content::Models::IndexArray_typeof()),
        new uFunction("get_Normals", NULL, (void*)ModelMesh__get_Normals_fn, 0, false, ::g::Uno::Content::Models::VertexAttributeArray_typeof(), 0),
        new uFunction("get_Positions", NULL, (void*)ModelMesh__get_Positions_fn, 0, false, ::g::Uno::Content::Models::VertexAttributeArray_typeof(), 0),
        new uFunction("get_PrimitiveType", NULL, (void*)ModelMesh__get_PrimitiveType_fn, 0, false, ::g::Uno::Graphics::PrimitiveType_typeof(), 0),
        new uFunction("get_TexCoords", NULL, (void*)ModelMesh__get_TexCoords_fn, 0, false, ::g::Uno::Content::Models::VertexAttributeArray_typeof(), 0),
        new uFunction("TryGetVertexAttribute", NULL, (void*)ModelMesh__TryGetVertexAttribute_fn, 0, false, ::g::Uno::Content::Models::VertexAttributeArray_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_VertexAttributes", NULL, (void*)ModelMesh__get_VertexAttributes_fn, 0, false, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Content::Models::VertexAttributeArray_typeof())), 0),
        new uFunction("get_VertexCount", NULL, (void*)ModelMesh__get_VertexCount_fn, 0, false, ::g::Uno::Int_typeof(), 0));
}

uType* ModelMesh_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(ModelMesh);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Content.Models.ModelMesh", options);
    type->fp_build_ = ModelMesh_build;
    return type;
}

// public ModelMesh(string name, Uno.Graphics.PrimitiveType type, Uno.Collections.Dictionary<string, Uno.Content.Models.VertexAttributeArray> vertexAttributes, [Uno.Content.Models.IndexArray indices]) :639
void ModelMesh__ctor__fn(ModelMesh* __this, uString* name, int* type, ::g::Uno::Collections::Dictionary* vertexAttributes, ::g::Uno::Content::Models::IndexArray* indices)
{
    __this->ctor_(name, *type, vertexAttributes, indices);
}

// public int get_IndexCount() :649
void ModelMesh__get_IndexCount_fn(ModelMesh* __this, int* __retval)
{
    *__retval = __this->IndexCount();
}

// public Uno.Content.Models.IndexArray get_Indices() :621
void ModelMesh__get_Indices_fn(ModelMesh* __this, ::g::Uno::Content::Models::IndexArray** __retval)
{
    *__retval = __this->Indices();
}

// public string get_Name() :615
void ModelMesh__get_Name_fn(ModelMesh* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// public ModelMesh New(string name, Uno.Graphics.PrimitiveType type, Uno.Collections.Dictionary<string, Uno.Content.Models.VertexAttributeArray> vertexAttributes, [Uno.Content.Models.IndexArray indices]) :639
void ModelMesh__New1_fn(uString* name, int* type, ::g::Uno::Collections::Dictionary* vertexAttributes, ::g::Uno::Content::Models::IndexArray* indices, ModelMesh** __retval)
{
    *__retval = ModelMesh::New1(name, *type, vertexAttributes, indices);
}

// public Uno.Content.Models.VertexAttributeArray get_Normals() :685
void ModelMesh__get_Normals_fn(ModelMesh* __this, ::g::Uno::Content::Models::VertexAttributeArray** __retval)
{
    *__retval = __this->Normals();
}

// public Uno.Content.Models.VertexAttributeArray get_Positions() :675
void ModelMesh__get_Positions_fn(ModelMesh* __this, ::g::Uno::Content::Models::VertexAttributeArray** __retval)
{
    *__retval = __this->Positions();
}

// public Uno.Graphics.PrimitiveType get_PrimitiveType() :618
void ModelMesh__get_PrimitiveType_fn(ModelMesh* __this, int* __retval)
{
    *__retval = __this->PrimitiveType();
}

// public Uno.Content.Models.VertexAttributeArray get_TexCoords() :680
void ModelMesh__get_TexCoords_fn(ModelMesh* __this, ::g::Uno::Content::Models::VertexAttributeArray** __retval)
{
    *__retval = __this->TexCoords();
}

// public Uno.Content.Models.VertexAttributeArray TryGetVertexAttribute(string name) :632
void ModelMesh__TryGetVertexAttribute_fn(ModelMesh* __this, uString* name, ::g::Uno::Content::Models::VertexAttributeArray** __retval)
{
    *__retval = __this->TryGetVertexAttribute(name);
}

// public Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>> get_VertexAttributes() :625
void ModelMesh__get_VertexAttributes_fn(ModelMesh* __this, uObject** __retval)
{
    *__retval = __this->VertexAttributes();
}

// public int get_VertexCount() :654
void ModelMesh__get_VertexCount_fn(ModelMesh* __this, int* __retval)
{
    *__retval = __this->VertexCount();
}

// public ModelMesh(string name, Uno.Graphics.PrimitiveType type, Uno.Collections.Dictionary<string, Uno.Content.Models.VertexAttributeArray> vertexAttributes, [Uno.Content.Models.IndexArray indices]) [instance] :639
void ModelMesh::ctor_(uString* name, int type, ::g::Uno::Collections::Dictionary* vertexAttributes, ::g::Uno::Content::Models::IndexArray* indices)
{
    uStackFrame __("Uno.Content.Models.ModelMesh", ".ctor(string,Uno.Graphics.PrimitiveType,Uno.Collections.Dictionary<string, Uno.Content.Models.VertexAttributeArray>,[Uno.Content.Models.IndexArray])");
    _name = name;
    _primitiveType = type;
    _vertexAttributes = vertexAttributes;
    _indices = indices;
}

// public int get_IndexCount() [instance] :649
int ModelMesh::IndexCount()
{
    uStackFrame __("Uno.Content.Models.ModelMesh", "get_IndexCount()");
    return (Indices() != NULL) ? uPtr(Indices())->Count() : -1;
}

// public Uno.Content.Models.IndexArray get_Indices() [instance] :621
::g::Uno::Content::Models::IndexArray* ModelMesh::Indices()
{
    uStackFrame __("Uno.Content.Models.ModelMesh", "get_Indices()");
    return _indices;
}

// public string get_Name() [instance] :615
uString* ModelMesh::Name()
{
    uStackFrame __("Uno.Content.Models.ModelMesh", "get_Name()");
    return _name;
}

// public Uno.Content.Models.VertexAttributeArray get_Normals() [instance] :685
::g::Uno::Content::Models::VertexAttributeArray* ModelMesh::Normals()
{
    uStackFrame __("Uno.Content.Models.ModelMesh", "get_Normals()");
    return TryGetVertexAttribute(::STRINGS[0/*"Normal"*/]);
}

// public Uno.Content.Models.VertexAttributeArray get_Positions() [instance] :675
::g::Uno::Content::Models::VertexAttributeArray* ModelMesh::Positions()
{
    uStackFrame __("Uno.Content.Models.ModelMesh", "get_Positions()");
    return TryGetVertexAttribute(::STRINGS[1/*"Position"*/]);
}

// public Uno.Graphics.PrimitiveType get_PrimitiveType() [instance] :618
int ModelMesh::PrimitiveType()
{
    uStackFrame __("Uno.Content.Models.ModelMesh", "get_PrimitiveType()");
    return _primitiveType;
}

// public Uno.Content.Models.VertexAttributeArray get_TexCoords() [instance] :680
::g::Uno::Content::Models::VertexAttributeArray* ModelMesh::TexCoords()
{
    uStackFrame __("Uno.Content.Models.ModelMesh", "get_TexCoords()");
    return TryGetVertexAttribute(::STRINGS[2/*"TexCoord"*/]);
}

// public Uno.Content.Models.VertexAttributeArray TryGetVertexAttribute(string name) [instance] :632
::g::Uno::Content::Models::VertexAttributeArray* ModelMesh::TryGetVertexAttribute(uString* name)
{
    uStackFrame __("Uno.Content.Models.ModelMesh", "TryGetVertexAttribute(string)");
    bool ret4;
    ::g::Uno::Content::Models::VertexAttributeArray* result;
    ::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_vertexAttributes), name, (void**)(&result), &ret4);
    return result;
}

// public Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>> get_VertexAttributes() [instance] :625
uObject* ModelMesh::VertexAttributes()
{
    uStackFrame __("Uno.Content.Models.ModelMesh", "get_VertexAttributes()");
    return (uObject*)_vertexAttributes;
}

// public int get_VertexCount() [instance] :654
int ModelMesh::VertexCount()
{
    uStackFrame __("Uno.Content.Models.ModelMesh", "get_VertexCount()");
    ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong< ::g::Uno::Content::Models::VertexAttributeArray*> > ret5;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(VertexAttributes()), ::TYPES[0/*Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[1/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong< ::g::Uno::Content::Models::VertexAttributeArray*> > attrib = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[2/*Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>>*/]), &ret5), ret5);
        return uPtr(attrib.Value(::TYPES[3/*Uno.Collections.KeyValuePair<string, Uno.Content.Models.VertexAttributeArray>*/]))->Count();
    }

    return 0;
}

// public ModelMesh New(string name, Uno.Graphics.PrimitiveType type, Uno.Collections.Dictionary<string, Uno.Content.Models.VertexAttributeArray> vertexAttributes, [Uno.Content.Models.IndexArray indices]) [static] :639
ModelMesh* ModelMesh::New1(uString* name, int type, ::g::Uno::Collections::Dictionary* vertexAttributes, ::g::Uno::Content::Models::IndexArray* indices)
{
    ModelMesh* obj2 = (ModelMesh*)uNew(ModelMesh_typeof());
    obj2->ctor_(name, type, vertexAttributes, indices);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/content/models/$.uno
// ----------------------------------------------------------------------------

// public sealed class ModelNode :117
// {
static void ModelNode_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(ModelNode_typeof()), offsetof(::g::Uno::Content::Models::ModelNode, _children), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Content::Models::ModelDrawable_typeof()), offsetof(::g::Uno::Content::Models::ModelNode, _drawables), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Content::Models::ModelParameter1_typeof()->MakeType(::g::Uno::Float4x4_typeof())), offsetof(::g::Uno::Content::Models::ModelNode, _transforms), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Children", NULL, (void*)ModelNode__get_Children_fn, 0, false, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(ModelNode_typeof()), 0),
        new uFunction("get_Drawables", NULL, (void*)ModelNode__get_Drawables_fn, 0, false, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Content::Models::ModelDrawable_typeof()), 0),
        new uFunction("get_Transforms", NULL, (void*)ModelNode__get_Transforms_fn, 0, false, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Content::Models::ModelParameter1_typeof()->MakeType(::g::Uno::Float4x4_typeof())), 0));
}

uType* ModelNode_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ModelNode);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Content.Models.ModelNode", options);
    type->fp_build_ = ModelNode_build;
    return type;
}

// public Uno.Collections.IEnumerable<Uno.Content.Models.ModelNode> get_Children() :141
void ModelNode__get_Children_fn(ModelNode* __this, uObject** __retval)
{
    *__retval = __this->Children();
}

// public Uno.Collections.IEnumerable<Uno.Content.Models.ModelDrawable> get_Drawables() :126
void ModelNode__get_Drawables_fn(ModelNode* __this, uObject** __retval)
{
    *__retval = __this->Drawables();
}

// public Uno.Collections.IEnumerable<Uno.Content.Models.ModelParameter<float4x4>> get_Transforms() :123
void ModelNode__get_Transforms_fn(ModelNode* __this, uObject** __retval)
{
    *__retval = __this->Transforms();
}

// public Uno.Collections.IEnumerable<Uno.Content.Models.ModelNode> get_Children() [instance] :141
uObject* ModelNode::Children()
{
    uStackFrame __("Uno.Content.Models.ModelNode", "get_Children()");
    return (uObject*)_children;
}

// public Uno.Collections.IEnumerable<Uno.Content.Models.ModelDrawable> get_Drawables() [instance] :126
uObject* ModelNode::Drawables()
{
    uStackFrame __("Uno.Content.Models.ModelNode", "get_Drawables()");
    return (uObject*)_drawables;
}

// public Uno.Collections.IEnumerable<Uno.Content.Models.ModelParameter<float4x4>> get_Transforms() [instance] :123
uObject* ModelNode::Transforms()
{
    uStackFrame __("Uno.Content.Models.ModelNode", "get_Transforms()");
    return (uObject*)_transforms;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/content/models/$.uno
// ----------------------------------------------------------------------------

// public sealed class ModelParameter<T> :747
// {
static void ModelParameter1_build(uType* type)
{
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(1,
        new uFunction("get_Value", NULL, (void*)ModelParameter1__get_Value_fn, 0, false, type->T(0), 0));
}

uType* ModelParameter1_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(ModelParameter1);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Content.Models.ModelParameter`1", options);
    type->fp_build_ = ModelParameter1_build;
    return type;
}

// public T get_Value() :764
void ModelParameter1__get_Value_fn(ModelParameter1* __this, uTRef __retval)
{
    uStackFrame __("Uno.Content.Models.ModelParameter`1", "get_Value()");
    return __retval.Store(__this->_value()), void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/content/models/$.uno
// ----------------------------------------------------------------------------

// public sealed class VertexAttributeArray :1501
// {
static void VertexAttributeArray_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Buffer_typeof(), offsetof(::g::Uno::Content::Models::VertexAttributeArray, _buffer), 0,
        ::g::Uno::Graphics::VertexAttributeType_typeof(), offsetof(::g::Uno::Content::Models::VertexAttributeArray, _type), 0);
    type->Reflection.SetFunctions(9,
        new uFunction("get_Buffer", NULL, (void*)VertexAttributeArray__get_Buffer_fn, 0, false, ::g::Uno::Buffer_typeof(), 0),
        new uFunction("get_Count", NULL, (void*)VertexAttributeArray__get_Count_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("GetByte4", NULL, (void*)VertexAttributeArray__GetByte4_fn, 0, false, ::g::Uno::Byte4_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("GetByte4Normalized", NULL, (void*)VertexAttributeArray__GetByte4Normalized_fn, 0, false, ::g::Uno::Byte4_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("GetFloat4", NULL, (void*)VertexAttributeArray__GetFloat4_fn, 0, false, ::g::Uno::Float4_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)VertexAttributeArray__New3_fn, 0, true, VertexAttributeArray_typeof(), 1, ::g::Uno::Float2_typeof()->Array()),
        new uFunction(".ctor", NULL, (void*)VertexAttributeArray__New4_fn, 0, true, VertexAttributeArray_typeof(), 1, ::g::Uno::Float3_typeof()->Array()),
        new uFunction(".ctor", NULL, (void*)VertexAttributeArray__New5_fn, 0, true, VertexAttributeArray_typeof(), 1, ::g::Uno::Float4_typeof()->Array()),
        new uFunction("get_Type", NULL, (void*)VertexAttributeArray__get_Type_fn, 0, false, ::g::Uno::Graphics::VertexAttributeType_typeof(), 0));
}

uType* VertexAttributeArray_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(VertexAttributeArray);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Content.Models.VertexAttributeArray", options);
    type->fp_build_ = VertexAttributeArray_build;
    return type;
}

// public VertexAttributeArray(float2[] data) :1532
void VertexAttributeArray__ctor_2_fn(VertexAttributeArray* __this, uArray* data)
{
    __this->ctor_2(data);
}

// public VertexAttributeArray(float3[] data) :1537
void VertexAttributeArray__ctor_3_fn(VertexAttributeArray* __this, uArray* data)
{
    __this->ctor_3(data);
}

// public VertexAttributeArray(float4[] data) :1542
void VertexAttributeArray__ctor_4_fn(VertexAttributeArray* __this, uArray* data)
{
    __this->ctor_4(data);
}

// public VertexAttributeArray(Uno.Graphics.VertexAttributeType type, Uno.Buffer buffer) :1521
void VertexAttributeArray__ctor_7_fn(VertexAttributeArray* __this, int* type, ::g::Uno::Buffer* buffer)
{
    __this->ctor_7(*type, buffer);
}

// public Uno.Buffer get_Buffer() :1513
void VertexAttributeArray__get_Buffer_fn(VertexAttributeArray* __this, ::g::Uno::Buffer** __retval)
{
    *__retval = __this->Buffer();
}

// public int get_Count() :1518
void VertexAttributeArray__get_Count_fn(VertexAttributeArray* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public byte4 GetByte4(int index) :1598
void VertexAttributeArray__GetByte4_fn(VertexAttributeArray* __this, int* index, ::g::Uno::Byte4* __retval)
{
    *__retval = __this->GetByte4(*index);
}

// public byte4 GetByte4Normalized(int index) :1587
void VertexAttributeArray__GetByte4Normalized_fn(VertexAttributeArray* __this, int* index, ::g::Uno::Byte4* __retval)
{
    *__retval = __this->GetByte4Normalized(*index);
}

// public float4 GetFloat4(int index) :1609
void VertexAttributeArray__GetFloat4_fn(VertexAttributeArray* __this, int* index, ::g::Uno::Float4* __retval)
{
    *__retval = __this->GetFloat4(*index);
}

// public VertexAttributeArray New(float2[] data) :1532
void VertexAttributeArray__New3_fn(uArray* data, VertexAttributeArray** __retval)
{
    *__retval = VertexAttributeArray::New3(data);
}

// public VertexAttributeArray New(float3[] data) :1537
void VertexAttributeArray__New4_fn(uArray* data, VertexAttributeArray** __retval)
{
    *__retval = VertexAttributeArray::New4(data);
}

// public VertexAttributeArray New(float4[] data) :1542
void VertexAttributeArray__New5_fn(uArray* data, VertexAttributeArray** __retval)
{
    *__retval = VertexAttributeArray::New5(data);
}

// public Uno.Graphics.VertexAttributeType get_Type() :1508
void VertexAttributeArray__get_Type_fn(VertexAttributeArray* __this, int* __retval)
{
    *__retval = __this->Type();
}

// public VertexAttributeArray(float2[] data) [instance] :1532
void VertexAttributeArray::ctor_2(uArray* data)
{
    uStackFrame __("Uno.Content.Models.VertexAttributeArray", ".ctor(float2[])");
    ctor_7(2, ::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(data));
}

// public VertexAttributeArray(float3[] data) [instance] :1537
void VertexAttributeArray::ctor_3(uArray* data)
{
    uStackFrame __("Uno.Content.Models.VertexAttributeArray", ".ctor(float3[])");
    ctor_7(3, ::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer4(data));
}

// public VertexAttributeArray(float4[] data) [instance] :1542
void VertexAttributeArray::ctor_4(uArray* data)
{
    uStackFrame __("Uno.Content.Models.VertexAttributeArray", ".ctor(float4[])");
    ctor_7(4, ::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer5(data));
}

// public VertexAttributeArray(Uno.Graphics.VertexAttributeType type, Uno.Buffer buffer) [instance] :1521
void VertexAttributeArray::ctor_7(int type, ::g::Uno::Buffer* buffer)
{
    uStackFrame __("Uno.Content.Models.VertexAttributeArray", ".ctor(Uno.Graphics.VertexAttributeType,Uno.Buffer)");
    _buffer = buffer;
    _type = type;
}

// public Uno.Buffer get_Buffer() [instance] :1513
::g::Uno::Buffer* VertexAttributeArray::Buffer()
{
    uStackFrame __("Uno.Content.Models.VertexAttributeArray", "get_Buffer()");
    return _buffer;
}

// public int get_Count() [instance] :1518
int VertexAttributeArray::Count()
{
    uStackFrame __("Uno.Content.Models.VertexAttributeArray", "get_Count()");
    return uPtr(_buffer)->SizeInBytes() / ::g::Uno::Graphics::VertexAttributeTypeHelpers::GetStrideInBytes(_type);
}

// public byte4 GetByte4(int index) [instance] :1598
::g::Uno::Byte4 VertexAttributeArray::GetByte4(int index)
{
    uStackFrame __("Uno.Content.Models.VertexAttributeArray", "GetByte4(int)");

    if (_type == 19)
        return uPtr(_buffer)->GetByte4(index * 4);
    else 
    {
        ::g::Uno::Float4 v = GetFloat4(index);
        return ::g::Uno::Byte4__New2((uint8_t)v.X, (uint8_t)v.Y, (uint8_t)v.Z, (uint8_t)v.W);
    }
}

// public byte4 GetByte4Normalized(int index) [instance] :1587
::g::Uno::Byte4 VertexAttributeArray::GetByte4Normalized(int index)
{
    uStackFrame __("Uno.Content.Models.VertexAttributeArray", "GetByte4Normalized(int)");

    if (_type == 20)
        return uPtr(_buffer)->GetByte4(index * 4);
    else 
    {
        ::g::Uno::Float4 v = ::g::Uno::Float4__op_Multiply1(GetFloat4(index), 255.0f);
        return ::g::Uno::Byte4__New2((uint8_t)v.X, (uint8_t)v.Y, (uint8_t)v.Z, (uint8_t)v.W);
    }
}

// public float4 GetFloat4(int index) [instance] :1609
::g::Uno::Float4 VertexAttributeArray::GetFloat4(int index)
{
    uStackFrame __("Uno.Content.Models.VertexAttributeArray", "GetFloat4(int)");

    switch (_type)
    {
        case 1:
        {
            float v = uPtr(_buffer)->GetFloat(index * 4, true);
            return ::g::Uno::Float4__New2(v, 0.0f, 0.0f, 0.0f);
        }
        case 2:
        {
            ::g::Uno::Float2 v1 = uPtr(_buffer)->GetFloat2((index * 4) * 2, true);
            return ::g::Uno::Float4__New6(v1, 0.0f, 0.0f);
        }
        case 3:
        {
            ::g::Uno::Float3 v2 = uPtr(_buffer)->GetFloat3((index * 4) * 3, true);
            return ::g::Uno::Float4__New8(v2, 0.0f);
        }
        case 4:
        {
            ::g::Uno::Float4 v3 = uPtr(_buffer)->GetFloat4((index * 4) * 4, true);
            return v3;
        }
        case 5:
        {
            int16_t v4 = uPtr(_buffer)->GetShort(index * 2, true);
            return ::g::Uno::Float4__New2((float)v4, 0.0f, 0.0f, 0.0f);
        }
        case 6:
        {
            int16_t v5 = uPtr(_buffer)->GetShort(index * 2, true);
            return ::g::Uno::Float4__op_Multiply2(::g::Uno::Float4__New2((float)v5, 0.0f, 0.0f, 0.0f), ::g::Uno::Float4__New1(3.051851e-05f));
        }
        case 7:
        {
            ::g::Uno::Short2 v6 = uPtr(_buffer)->GetShort2((index * 2) * 2, true);
            return ::g::Uno::Float4__New2((float)v6.X, (float)v6.Y, 0.0f, 0.0f);
        }
        case 8:
        {
            ::g::Uno::Short2 v7 = uPtr(_buffer)->GetShort2((index * 2) * 2, true);
            return ::g::Uno::Float4__op_Multiply2(::g::Uno::Float4__New2((float)v7.X, (float)v7.Y, 0.0f, 0.0f), ::g::Uno::Float4__New1(3.051851e-05f));
        }
        case 9:
        {
            ::g::Uno::Short4 v8 = uPtr(_buffer)->GetShort4((index * 2) * 4, true);
            return ::g::Uno::Float4__New2((float)v8.X, (float)v8.Y, (float)v8.Z, (float)v8.W);
        }
        case 10:
        {
            ::g::Uno::Short4 v9 = uPtr(_buffer)->GetShort4((index * 2) * 4, true);
            return ::g::Uno::Float4__op_Multiply2(::g::Uno::Float4__New2((float)v9.X, (float)v9.Y, (float)v9.Z, (float)v9.W), ::g::Uno::Float4__New1(3.051851e-05f));
        }
        case 11:
        {
            uint16_t v10 = uPtr(_buffer)->GetUShort(index * 2, true);
            return ::g::Uno::Float4__New2((float)v10, 0.0f, 0.0f, 0.0f);
        }
        case 12:
        {
            uint16_t v11 = uPtr(_buffer)->GetUShort(index * 2, true);
            return ::g::Uno::Float4__op_Multiply2(::g::Uno::Float4__New2((float)v11, 0.0f, 0.0f, 0.0f), ::g::Uno::Float4__New1(1.52590219e-05f));
        }
        case 13:
        {
            ::g::Uno::UShort2 v12 = uPtr(_buffer)->GetUShort2((index * 2) * 2, true);
            return ::g::Uno::Float4__New2((float)v12.X, (float)v12.Y, 0.0f, 0.0f);
        }
        case 14:
        {
            ::g::Uno::UShort2 v13 = uPtr(_buffer)->GetUShort2((index * 2) * 2, true);
            return ::g::Uno::Float4__op_Multiply2(::g::Uno::Float4__New2((float)v13.X, (float)v13.Y, 0.0f, 0.0f), ::g::Uno::Float4__New1(1.52590219e-05f));
        }
        case 15:
        {
            ::g::Uno::UShort4 v14 = uPtr(_buffer)->GetUShort4((index * 2) * 4, true);
            return ::g::Uno::Float4__New2((float)v14.X, (float)v14.Y, (float)v14.Z, (float)v14.W);
        }
        case 16:
        {
            ::g::Uno::UShort4 v15 = uPtr(_buffer)->GetUShort4((index * 2) * 4, true);
            return ::g::Uno::Float4__op_Multiply2(::g::Uno::Float4__New2((float)v15.X, (float)v15.Y, (float)v15.Z, (float)v15.W), ::g::Uno::Float4__New1(1.52590219e-05f));
        }
        case 17:
        {
            ::g::Uno::SByte4 v16 = uPtr(_buffer)->GetSByte4(index * 4);
            return ::g::Uno::Float4__New2((float)v16.X, (float)v16.Y, (float)v16.Z, (float)v16.W);
        }
        case 18:
        {
            ::g::Uno::SByte4 v17 = uPtr(_buffer)->GetSByte4(index * 4);
            return ::g::Uno::Float4__op_Multiply2(::g::Uno::Float4__New2((float)v17.X, (float)v17.Y, (float)v17.Z, (float)v17.W), ::g::Uno::Float4__New1(0.007874016f));
        }
        case 19:
        {
            ::g::Uno::Byte4 v18 = uPtr(_buffer)->GetByte4(index * 4);
            return ::g::Uno::Float4__New2((float)v18.X, (float)v18.Y, (float)v18.Z, (float)v18.W);
        }
        case 20:
        {
            ::g::Uno::Byte4 v19 = uPtr(_buffer)->GetByte4(index * 4);
            return ::g::Uno::Float4__op_Multiply2(::g::Uno::Float4__New2((float)v19.X, (float)v19.Y, (float)v19.Z, (float)v19.W), ::g::Uno::Float4__New1(0.003921569f));
        }
        default:
            return ::g::Uno::Float4__New1(0.0f);
    }
}

// public Uno.Graphics.VertexAttributeType get_Type() [instance] :1508
int VertexAttributeArray::Type()
{
    uStackFrame __("Uno.Content.Models.VertexAttributeArray", "get_Type()");
    return _type;
}

// public VertexAttributeArray New(float2[] data) [static] :1532
VertexAttributeArray* VertexAttributeArray::New3(uArray* data)
{
    VertexAttributeArray* obj3 = (VertexAttributeArray*)uNew(VertexAttributeArray_typeof());
    obj3->ctor_2(data);
    return obj3;
}

// public VertexAttributeArray New(float3[] data) [static] :1537
VertexAttributeArray* VertexAttributeArray::New4(uArray* data)
{
    VertexAttributeArray* obj4 = (VertexAttributeArray*)uNew(VertexAttributeArray_typeof());
    obj4->ctor_3(data);
    return obj4;
}

// public VertexAttributeArray New(float4[] data) [static] :1542
VertexAttributeArray* VertexAttributeArray::New5(uArray* data)
{
    VertexAttributeArray* obj5 = (VertexAttributeArray*)uNew(VertexAttributeArray_typeof());
    obj5->ctor_4(data);
    return obj5;
}
// }

}}}} // ::g::Uno::Content::Models
