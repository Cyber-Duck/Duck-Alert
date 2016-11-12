// This file was generated based on /usr/local/share/uno/Packages/Fuse.Entities/0.40.8/internal/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Entities{namespace Internal{struct SceneGraphBuilder;}}}}
namespace g{namespace Fuse{namespace Entities{namespace Internal{struct SceneGraphBuilderVisitor;}}}}
namespace g{namespace Fuse{namespace Entities{struct Entity;}}}
namespace g{namespace Fuse{namespace Entities{struct Material;}}}
namespace g{namespace Fuse{namespace Entities{struct Mesh;}}}
namespace g{namespace Fuse{namespace Entities{struct MeshRenderer;}}}
namespace g{namespace Fuse{namespace Entities{struct Transform3D;}}}
namespace g{namespace Uno{namespace Content{namespace Models{struct Model;}}}}
namespace g{namespace Uno{namespace Content{namespace Models{struct ModelDrawable;}}}}
namespace g{namespace Uno{namespace Content{namespace Models{struct ModelNode;}}}}
namespace g{namespace Uno{namespace Content{namespace Models{struct ModelParameter1;}}}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Entities{
namespace Internal{

// public sealed class SceneGraphBuilder :14
// {
uType* SceneGraphBuilder_typeof();
void SceneGraphBuilder__ctor__fn(SceneGraphBuilder* __this, ::g::Fuse::Entities::Internal::SceneGraphBuilderVisitor* visitor);
void SceneGraphBuilder__Build_fn(SceneGraphBuilder* __this, ::g::Uno::Content::Models::Model* model, ::g::Fuse::Entities::Entity** __retval);
void SceneGraphBuilder__CreateMaterial_fn(SceneGraphBuilder* __this, ::g::Fuse::Entities::Material** __retval);
void SceneGraphBuilder__CreateMesh_fn(SceneGraphBuilder* __this, ::g::Uno::Content::Models::ModelDrawable* dr, ::g::Fuse::Entities::Mesh** __retval);
void SceneGraphBuilder__CreateMeshRenderer_fn(SceneGraphBuilder* __this, ::g::Fuse::Entities::Material* mat, ::g::Fuse::Entities::MeshRenderer** __retval);
void SceneGraphBuilder__CreateMeshRenderer1_fn(SceneGraphBuilder* __this, ::g::Fuse::Entities::Mesh* mesh, ::g::Fuse::Entities::MeshRenderer** __retval);
void SceneGraphBuilder__CreateNode_fn(SceneGraphBuilder* __this, ::g::Uno::Content::Models::ModelNode* node, bool* isRoot, ::g::Fuse::Entities::Entity** __retval);
void SceneGraphBuilder__CreateTransform_fn(SceneGraphBuilder* __this, ::g::Fuse::Entities::Transform3D** __retval);
void SceneGraphBuilder__IsIdentity_fn(::g::Uno::Float4x4* mat, bool* __retval);
void SceneGraphBuilder__MakeMatrix_fn(uObject* transforms, ::g::Uno::Float4x4* __retval);
void SceneGraphBuilder__New1_fn(::g::Fuse::Entities::Internal::SceneGraphBuilderVisitor* visitor, SceneGraphBuilder** __retval);
void SceneGraphBuilder__TryCreateCompositTransform_fn(SceneGraphBuilder* __this, ::g::Uno::Content::Models::ModelNode* node, ::g::Fuse::Entities::Transform3D** __retval);

struct SceneGraphBuilder : uObject
{
    uStrong< ::g::Fuse::Entities::Internal::SceneGraphBuilderVisitor*> _visitor;

    void ctor_(::g::Fuse::Entities::Internal::SceneGraphBuilderVisitor* visitor);
    ::g::Fuse::Entities::Entity* Build(::g::Uno::Content::Models::Model* model);
    ::g::Fuse::Entities::Material* CreateMaterial();
    ::g::Fuse::Entities::Mesh* CreateMesh(::g::Uno::Content::Models::ModelDrawable* dr);
    ::g::Fuse::Entities::MeshRenderer* CreateMeshRenderer(::g::Fuse::Entities::Material* mat);
    ::g::Fuse::Entities::MeshRenderer* CreateMeshRenderer1(::g::Fuse::Entities::Mesh* mesh);
    ::g::Fuse::Entities::Entity* CreateNode(::g::Uno::Content::Models::ModelNode* node, bool isRoot);
    ::g::Fuse::Entities::Transform3D* CreateTransform();
    ::g::Fuse::Entities::Transform3D* TryCreateCompositTransform(::g::Uno::Content::Models::ModelNode* node);
    static bool IsIdentity(::g::Uno::Float4x4 mat);
    static ::g::Uno::Float4x4 MakeMatrix(uObject* transforms);
    static SceneGraphBuilder* New1(::g::Fuse::Entities::Internal::SceneGraphBuilderVisitor* visitor);
};
// }

}}}} // ::g::Fuse::Entities::Internal
