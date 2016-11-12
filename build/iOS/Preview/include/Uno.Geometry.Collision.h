// This file was generated based on /usr/local/share/uno/Packages/Uno.Geometry/0.40.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Geometry{struct Box;}}}
namespace g{namespace Uno{namespace Geometry{struct Collision;}}}
namespace g{namespace Uno{namespace Geometry{struct Ray;}}}
namespace g{namespace Uno{namespace Geometry{struct Sphere;}}}
namespace g{namespace Uno{namespace Geometry{struct Triangle;}}}

namespace g{
namespace Uno{
namespace Geometry{

// public static class Collision :42
// {
uClassType* Collision_typeof();
void Collision__RayIntersectsBox_fn(::g::Uno::Geometry::Ray* ray, ::g::Uno::Geometry::Box* box, float* distance, bool* __retval);
void Collision__RayIntersectsSphere_fn(::g::Uno::Geometry::Ray* ray, ::g::Uno::Geometry::Sphere* sphere, float* distance, bool* __retval);
void Collision__RayIntersectsTriangle_fn(::g::Uno::Geometry::Ray* ray, ::g::Uno::Geometry::Triangle* triangle, float* distance, bool* __retval);

struct Collision : uObject
{
    static bool RayIntersectsBox(::g::Uno::Geometry::Ray ray, ::g::Uno::Geometry::Box box, float* distance);
    static bool RayIntersectsSphere(::g::Uno::Geometry::Ray ray, ::g::Uno::Geometry::Sphere sphere, float* distance);
    static bool RayIntersectsTriangle(::g::Uno::Geometry::Ray ray, ::g::Uno::Geometry::Triangle triangle, float* distance);
};
// }

}}} // ::g::Uno::Geometry
