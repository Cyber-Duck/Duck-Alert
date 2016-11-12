// This file was generated based on /usr/local/share/uno/Packages/Fuse.Entities/0.40.8/internal/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Entities{namespace Internal{struct SceneGraphBuilderVisitor;}}}}
namespace g{namespace Fuse{namespace Entities{struct Entity;}}}
namespace g{namespace Fuse{namespace Entities{struct Material;}}}
namespace g{namespace Fuse{namespace Entities{struct Mesh;}}}
namespace g{namespace Fuse{namespace Entities{struct MeshRenderer;}}}
namespace g{namespace Fuse{namespace Entities{struct Transform3D;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Content{namespace Models{struct ModelDrawable;}}}}
namespace g{namespace Uno{namespace Content{namespace Models{struct ModelNode;}}}}

namespace g{
namespace Fuse{
namespace Entities{
namespace Internal{

// public sealed class SceneGraphBuilderVisitor :201
// {
uType* SceneGraphBuilderVisitor_typeof();
void SceneGraphBuilderVisitor__ctor__fn(SceneGraphBuilderVisitor* __this);
void SceneGraphBuilderVisitor__New1_fn(SceneGraphBuilderVisitor** __retval);
void SceneGraphBuilderVisitor__get_Peek_fn(SceneGraphBuilderVisitor* __this, ::g::Fuse::Entities::Entity** __retval);
void SceneGraphBuilderVisitor__Pop_fn(SceneGraphBuilderVisitor* __this);
void SceneGraphBuilderVisitor__Push_fn(SceneGraphBuilderVisitor* __this, ::g::Fuse::Entities::Entity* e);
void SceneGraphBuilderVisitor__Visit_fn(SceneGraphBuilderVisitor* __this, ::g::Fuse::Entities::Entity* e);
void SceneGraphBuilderVisitor__Visit1_fn(SceneGraphBuilderVisitor* __this, ::g::Fuse::Entities::Entity* e, ::g::Uno::Content::Models::ModelNode* n);
void SceneGraphBuilderVisitor__Visit2_fn(SceneGraphBuilderVisitor* __this, ::g::Fuse::Entities::Material* m);
void SceneGraphBuilderVisitor__Visit3_fn(SceneGraphBuilderVisitor* __this, ::g::Fuse::Entities::Material* m, ::g::Uno::Content::Models::ModelNode* n);
void SceneGraphBuilderVisitor__Visit4_fn(SceneGraphBuilderVisitor* __this, ::g::Fuse::Entities::Mesh* m, ::g::Uno::Content::Models::ModelDrawable* d);
void SceneGraphBuilderVisitor__Visit5_fn(SceneGraphBuilderVisitor* __this, ::g::Fuse::Entities::MeshRenderer* m);
void SceneGraphBuilderVisitor__Visit6_fn(SceneGraphBuilderVisitor* __this, ::g::Fuse::Entities::Transform3D* t);
void SceneGraphBuilderVisitor__Visit7_fn(SceneGraphBuilderVisitor* __this, ::g::Fuse::Entities::Transform3D* t, ::g::Uno::Content::Models::ModelNode* n);

struct SceneGraphBuilderVisitor : uObject
{
    uStrong< ::g::Uno::Collections::List*> _entities;

    void ctor_();
    ::g::Fuse::Entities::Entity* Peek();
    void Pop();
    void Push(::g::Fuse::Entities::Entity* e);
    void Visit(::g::Fuse::Entities::Entity* e);
    void Visit1(::g::Fuse::Entities::Entity* e, ::g::Uno::Content::Models::ModelNode* n);
    void Visit2(::g::Fuse::Entities::Material* m);
    void Visit3(::g::Fuse::Entities::Material* m, ::g::Uno::Content::Models::ModelNode* n);
    void Visit4(::g::Fuse::Entities::Mesh* m, ::g::Uno::Content::Models::ModelDrawable* d);
    void Visit5(::g::Fuse::Entities::MeshRenderer* m);
    void Visit6(::g::Fuse::Entities::Transform3D* t);
    void Visit7(::g::Fuse::Entities::Transform3D* t, ::g::Uno::Content::Models::ModelNode* n);
    static SceneGraphBuilderVisitor* New1();
};
// }

}}}} // ::g::Fuse::Entities::Internal
