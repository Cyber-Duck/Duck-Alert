// This file was generated based on /usr/local/share/uno/Packages/Fuse.Entities/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Entities.TriangleMeshIntersecter.h>
#include <Uno.Float3.h>
namespace g{namespace Fuse{namespace Entities{struct IndexedArrayMeshIntersecter;}}}
namespace g{namespace Uno{namespace Geometry{struct Triangle;}}}

namespace g{
namespace Fuse{
namespace Entities{

// internal sealed class IndexedArrayMeshIntersecter :2703
// {
::g::Fuse::Entities::TriangleMeshIntersecter_type* IndexedArrayMeshIntersecter_typeof();
void IndexedArrayMeshIntersecter__ctor_1_fn(IndexedArrayMeshIntersecter* __this, uArray* positions, uArray* indices);
void IndexedArrayMeshIntersecter__GetTriangle_fn(IndexedArrayMeshIntersecter* __this, int* t, ::g::Uno::Geometry::Triangle* __retval);
void IndexedArrayMeshIntersecter__New1_fn(uArray* positions, uArray* indices, IndexedArrayMeshIntersecter** __retval);

struct IndexedArrayMeshIntersecter : ::g::Fuse::Entities::TriangleMeshIntersecter
{
    uStrong<uArray*> _indices;
    uStrong<uArray*> _positions;

    void ctor_1(uArray* positions, uArray* indices);
    static IndexedArrayMeshIntersecter* New1(uArray* positions, uArray* indices);
};
// }

}}} // ::g::Fuse::Entities
