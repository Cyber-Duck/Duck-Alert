// This file was generated based on /usr/local/share/uno/Packages/Uno.Geometry/0.40.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float3.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Geometry{struct Plane;}}}

namespace g{
namespace Uno{
namespace Geometry{

// public struct Plane :1517
// {
uStructType* Plane_typeof();
void Plane__ctor_2_fn(Plane* __this, ::g::Uno::Float3* point, ::g::Uno::Float3* normal);
void Plane__New3_fn(::g::Uno::Float3* point, ::g::Uno::Float3* normal, Plane* __retval);
void Plane__Normalize_fn(Plane* __this);

struct Plane
{
    ::g::Uno::Float3 Normal;
    float D;

    void ctor_2(::g::Uno::Float3 point, ::g::Uno::Float3 normal);
    void Normalize();
};

Plane Plane__New3(::g::Uno::Float3 point, ::g::Uno::Float3 normal);
// }

}}} // ::g::Uno::Geometry
