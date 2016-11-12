// This file was generated based on /usr/local/share/uno/Packages/Uno.Geometry/0.40.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Geometry.Plane.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Geometry{struct Frustum;}}}

namespace g{
namespace Uno{
namespace Geometry{

// public struct Frustum :1464
// {
uStructType* Frustum_typeof();
void Frustum__Normalize_fn(Frustum* __this);

struct Frustum
{
    ::g::Uno::Geometry::Plane Near;
    ::g::Uno::Geometry::Plane Far;
    ::g::Uno::Geometry::Plane Top;
    ::g::Uno::Geometry::Plane Bottom;
    ::g::Uno::Geometry::Plane Left;
    ::g::Uno::Geometry::Plane Right;

    void Normalize();
};
// }

}}} // ::g::Uno::Geometry
