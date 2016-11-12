// This file was generated based on /usr/local/share/uno/Packages/Fuse.Entities/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Entities{struct TriangleMeshIntersecter;}}}
namespace g{namespace Uno{namespace Geometry{struct Ray;}}}
namespace g{namespace Uno{namespace Geometry{struct Triangle;}}}

namespace g{
namespace Fuse{
namespace Entities{

// internal abstract class TriangleMeshIntersecter :2650
// {
struct TriangleMeshIntersecter_type : uType
{
    void(*fp_GetTriangle)(::g::Fuse::Entities::TriangleMeshIntersecter*, int*, ::g::Uno::Geometry::Triangle*);
};

TriangleMeshIntersecter_type* TriangleMeshIntersecter_typeof();
void TriangleMeshIntersecter__ctor__fn(TriangleMeshIntersecter* __this, int* count);
void TriangleMeshIntersecter__IntersectsRay_fn(TriangleMeshIntersecter* __this, ::g::Uno::Geometry::Ray* objRay, float* outDistance, bool* __retval);

struct TriangleMeshIntersecter : uObject
{
    int _count;

    void ctor_(int count);
    ::g::Uno::Geometry::Triangle GetTriangle(int index);
    bool IntersectsRay(::g::Uno::Geometry::Ray objRay, float* outDistance);
};

}}} // ::g::Fuse::Entities

#include <Uno.Geometry.Ray.h>
#include <Uno.Geometry.Triangle.h>

namespace g{
namespace Fuse{
namespace Entities{

inline ::g::Uno::Geometry::Triangle TriangleMeshIntersecter::GetTriangle(int index) { ::g::Uno::Geometry::Triangle __retval; return (((TriangleMeshIntersecter_type*)__type)->fp_GetTriangle)(this, &index, &__retval), __retval; }
// }

}}} // ::g::Fuse::Entities
