// This file was generated based on /usr/local/share/uno/Packages/Fuse.Entities/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Entities.TriangleMeshIntersecter.h>
namespace g{namespace Fuse{namespace Entities{struct ModelMeshCollision__Direct;}}}
namespace g{namespace Uno{namespace Content{namespace Models{struct VertexAttributeArray;}}}}
namespace g{namespace Uno{namespace Geometry{struct Triangle;}}}

namespace g{
namespace Fuse{
namespace Entities{

// private sealed class ModelMeshCollision.Direct :1486
// {
::g::Fuse::Entities::TriangleMeshIntersecter_type* ModelMeshCollision__Direct_typeof();
void ModelMeshCollision__Direct__ctor_1_fn(ModelMeshCollision__Direct* __this, ::g::Uno::Content::Models::VertexAttributeArray* positions, int* vertexCount);
void ModelMeshCollision__Direct__GetTriangle_fn(ModelMeshCollision__Direct* __this, int* t, ::g::Uno::Geometry::Triangle* __retval);
void ModelMeshCollision__Direct__New1_fn(::g::Uno::Content::Models::VertexAttributeArray* positions, int* vertexCount, ModelMeshCollision__Direct** __retval);

struct ModelMeshCollision__Direct : ::g::Fuse::Entities::TriangleMeshIntersecter
{
    uStrong< ::g::Uno::Content::Models::VertexAttributeArray*> _positions;

    void ctor_1(::g::Uno::Content::Models::VertexAttributeArray* positions, int vertexCount);
    static ModelMeshCollision__Direct* New1(::g::Uno::Content::Models::VertexAttributeArray* positions, int vertexCount);
};
// }

}}} // ::g::Fuse::Entities
