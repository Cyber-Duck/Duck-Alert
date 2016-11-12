// This file was generated based on /usr/local/share/uno/Packages/Uno.Geometry/0.40.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float3.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Geometry{struct Sphere;}}}

namespace g{
namespace Uno{
namespace Geometry{

// public struct Sphere :1632
// {
uStructType* Sphere_typeof();
void Sphere__ctor__fn(Sphere* __this, ::g::Uno::Float3* center, float* radius);
void Sphere__New1_fn(::g::Uno::Float3* center, float* radius, Sphere* __retval);

struct Sphere
{
    ::g::Uno::Float3 Center;
    float Radius;

    void ctor_(::g::Uno::Float3 center, float radius);
};

Sphere Sphere__New1(::g::Uno::Float3 center, float radius);
// }

}}} // ::g::Uno::Geometry
