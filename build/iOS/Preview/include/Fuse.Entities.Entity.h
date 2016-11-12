// This file was generated based on /usr/local/share/uno/Packages/Fuse.Entities/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Entities{struct Component;}}}
namespace g{namespace Fuse{namespace Entities{struct Entity;}}}
namespace g{namespace Fuse{namespace Entities{struct Frustum;}}}
namespace g{namespace Fuse{namespace Entities{struct MeshRenderer;}}}
namespace g{namespace Fuse{namespace Entities{struct Transform3D;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct VisualBounds;}}
namespace g{namespace Uno{namespace Content{namespace Models{struct Model;}}}}
namespace g{namespace Uno{namespace Geometry{struct Box;}}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Entities{

// public sealed class Entity :350
// {
::g::Fuse::Visual_type* Entity_typeof();
void Entity__ctor_3_fn(Entity* __this);
void Entity__ctor_4_fn(Entity* __this, uArray* initComponents);
void Entity__Draw_fn(Entity* __this, ::g::Fuse::DrawContext* dc);
void Entity__FindAllComponents_fn(Entity* __this, uType* __type, uDelegate* callback, bool* recursive);
void Entity__FindComponent_fn(Entity* __this, uType* __type, uObject** __retval);
void Entity__FromModel_fn(::g::Uno::Content::Models::Model* model, Entity** __retval);
void Entity__get_Frustum_fn(Entity* __this, ::g::Fuse::Entities::Frustum** __retval);
void Entity__get_FrustumComponent_fn(Entity* __this, uObject** __retval);
void Entity__get_HitTestBounds_fn(Entity* __this, ::g::Fuse::VisualBounds** __retval);
void Entity__get_LocalBounds_fn(Entity* __this, ::g::Uno::Geometry::Box* __retval);
void Entity__get_MeshRenderer_fn(Entity* __this, ::g::Fuse::Entities::MeshRenderer** __retval);
void Entity__set_MeshRenderer_fn(Entity* __this, ::g::Fuse::Entities::MeshRenderer* value);
void Entity__New2_fn(Entity** __retval);
void Entity__New3_fn(uArray* initComponents, Entity** __retval);
void Entity__get_ParentEntity_fn(Entity* __this, Entity** __retval);
void Entity__get_Transform_fn(Entity* __this, ::g::Fuse::Entities::Transform3D** __retval);
void Entity__get_WorldForward_fn(Entity* __this, ::g::Uno::Float3* __retval);
void Entity__get_WorldRight_fn(Entity* __this, ::g::Uno::Float3* __retval);
void Entity__get_WorldRotationQuaternion_fn(Entity* __this, ::g::Uno::Float4* __retval);
void Entity__set_WorldRotationQuaternion_fn(Entity* __this, ::g::Uno::Float4* value);
void Entity__get_WorldUp_fn(Entity* __this, ::g::Uno::Float3* __retval);

struct Entity : ::g::Fuse::Visual
{
    uStrong<uObject*> _frustumComponent;
    uStrong< ::g::Fuse::Entities::MeshRenderer*> _MeshRenderer;

    void ctor_3();
    void ctor_4(uArray* initComponents);
    void FindAllComponents(uType* __type, uDelegate* callback, bool recursive);
    uObject* FindComponent(uType* __type);
    ::g::Fuse::Entities::Frustum* Frustum();
    uObject* FrustumComponent();
    ::g::Fuse::Entities::MeshRenderer* MeshRenderer();
    void MeshRenderer(::g::Fuse::Entities::MeshRenderer* value);
    Entity* ParentEntity();
    ::g::Fuse::Entities::Transform3D* Transform();
    ::g::Uno::Float3 WorldForward();
    ::g::Uno::Float3 WorldRight();
    ::g::Uno::Float4 WorldRotationQuaternion();
    void WorldRotationQuaternion(::g::Uno::Float4 value);
    ::g::Uno::Float3 WorldUp();
    static Entity* FromModel(::g::Uno::Content::Models::Model* model);
    static Entity* New2();
    static Entity* New3(uArray* initComponents);
};
// }

}}} // ::g::Fuse::Entities
