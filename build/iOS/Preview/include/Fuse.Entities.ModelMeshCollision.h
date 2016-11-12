// This file was generated based on /usr/local/share/uno/Packages/Fuse.Entities/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Entities{struct ModelMeshCollision;}}}
namespace g{namespace Uno{namespace Content{namespace Models{struct ModelMesh;}}}}
namespace g{namespace Uno{namespace Geometry{struct Ray;}}}

namespace g{
namespace Fuse{
namespace Entities{

// internal sealed class ModelMeshCollision :1448
// {
uType* ModelMeshCollision_typeof();
void ModelMeshCollision__ctor__fn(ModelMeshCollision* __this);
void ModelMeshCollision__New1_fn(ModelMeshCollision** __retval);
void ModelMeshCollision__RayIntersectsModelMesh_fn(::g::Uno::Geometry::Ray* objRay, ::g::Uno::Content::Models::ModelMesh* modelMesh, float* outDistance, bool* __retval);

struct ModelMeshCollision : uObject
{
    void ctor_();
    static ModelMeshCollision* New1();
    static bool RayIntersectsModelMesh(::g::Uno::Geometry::Ray objRay, ::g::Uno::Content::Models::ModelMesh* modelMesh, float* outDistance);
};
// }

}}} // ::g::Fuse::Entities
