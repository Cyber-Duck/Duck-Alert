// This file was generated based on /usr/local/share/uno/Packages/Uno.Geometry/0.40.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float3.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Geometry{struct Triangle;}}}

namespace g{
namespace Uno{
namespace Geometry{

// public struct Triangle :1731
// {
uStructType* Triangle_typeof();
void Triangle__ctor__fn(Triangle* __this, ::g::Uno::Float3* a, ::g::Uno::Float3* b, ::g::Uno::Float3* c);
void Triangle__New1_fn(::g::Uno::Float3* a, ::g::Uno::Float3* b, ::g::Uno::Float3* c, Triangle* __retval);

struct Triangle
{
    ::g::Uno::Float3 A;
    ::g::Uno::Float3 B;
    ::g::Uno::Float3 C;

    void ctor_(::g::Uno::Float3 a, ::g::Uno::Float3 b, ::g::Uno::Float3 c);
};

Triangle Triangle__New1(::g::Uno::Float3 a, ::g::Uno::Float3 b, ::g::Uno::Float3 c);
// }

}}} // ::g::Uno::Geometry
