// This file was generated based on /usr/local/share/uno/Packages/Fuse.Entities/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Entities.TriangleMeshIntersecter.h>
namespace g{namespace Fuse{namespace Entities{struct ModelMeshCollision__Indexed;}}}
namespace g{namespace Uno{namespace Content{namespace Models{struct IndexArray;}}}}
namespace g{namespace Uno{namespace Content{namespace Models{struct VertexAttributeArray;}}}}
namespace g{namespace Uno{namespace Geometry{struct Triangle;}}}

namespace g{
namespace Fuse{
namespace Entities{

// private sealed class ModelMeshCollision.Indexed :1461
// {
::g::Fuse::Entities::TriangleMeshIntersecter_type* ModelMeshCollision__Indexed_typeof();
void ModelMeshCollision__Indexed__ctor_1_fn(ModelMeshCollision__Indexed* __this, ::g::Uno::Content::Models::VertexAttributeArray* positions, ::g::Uno::Content::Models::IndexArray* indices, int* indexCount);
void ModelMeshCollision__Indexed__GetTriangle_fn(ModelMeshCollision__Indexed* __this, int* t, ::g::Uno::Geometry::Triangle* __retval);
void ModelMeshCollision__Indexed__New1_fn(::g::Uno::Content::Models::VertexAttributeArray* positions, ::g::Uno::Content::Models::IndexArray* indices, int* indexCount, ModelMeshCollision__Indexed** __retval);

struct ModelMeshCollision__Indexed : ::g::Fuse::Entities::TriangleMeshIntersecter
{
    uStrong< ::g::Uno::Content::Models::IndexArray*> _indices;
    uStrong< ::g::Uno::Content::Models::VertexAttributeArray*> _positions;

    void ctor_1(::g::Uno::Content::Models::VertexAttributeArray* positions, ::g::Uno::Content::Models::IndexArray* indices, int indexCount);
    static ModelMeshCollision__Indexed* New1(::g::Uno::Content::Models::VertexAttributeArray* positions, ::g::Uno::Content::Models::IndexArray* indices, int indexCount);
};
// }

}}} // ::g::Fuse::Entities
