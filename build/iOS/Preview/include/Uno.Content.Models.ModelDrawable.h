// This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/content/models/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Content{namespace Models{struct ModelDrawable;}}}}
namespace g{namespace Uno{namespace Content{namespace Models{struct ModelMaterial;}}}}
namespace g{namespace Uno{namespace Content{namespace Models{struct ModelMesh;}}}}

namespace g{
namespace Uno{
namespace Content{
namespace Models{

// public sealed class ModelDrawable :220
// {
uType* ModelDrawable_typeof();
void ModelDrawable__ctor__fn(ModelDrawable* __this, ::g::Uno::Content::Models::ModelMesh* mesh, ::g::Uno::Content::Models::ModelMaterial* optionalMaterial);
void ModelDrawable__get_Mesh_fn(ModelDrawable* __this, ::g::Uno::Content::Models::ModelMesh** __retval);
void ModelDrawable__New1_fn(::g::Uno::Content::Models::ModelMesh* mesh, ::g::Uno::Content::Models::ModelMaterial* optionalMaterial, ModelDrawable** __retval);

struct ModelDrawable : uObject
{
    uStrong< ::g::Uno::Content::Models::ModelMesh*> _mesh;
    uStrong< ::g::Uno::Content::Models::ModelMaterial*> _optionalMaterial;

    void ctor_(::g::Uno::Content::Models::ModelMesh* mesh, ::g::Uno::Content::Models::ModelMaterial* optionalMaterial);
    ::g::Uno::Content::Models::ModelMesh* Mesh();
    static ModelDrawable* New1(::g::Uno::Content::Models::ModelMesh* mesh, ::g::Uno::Content::Models::ModelMaterial* optionalMaterial);
};
// }

}}}} // ::g::Uno::Content::Models
