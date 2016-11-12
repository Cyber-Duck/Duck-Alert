// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing.Polygons/0.40.8/meshes/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable-1.h>
#include <Fuse.Drawing.Tesselation.HalfEdge.h>
#include <Uno.Collections.IEnumerable-1.h>
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{struct EdgeLoopEnumerable;}}}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Tesselation{

// internal sealed class EdgeLoopEnumerable :14
// {
::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type* EdgeLoopEnumerable_typeof();
void EdgeLoopEnumerable__ctor_1_fn(EdgeLoopEnumerable* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge* anEdge);
void EdgeLoopEnumerable__GetNext_fn(EdgeLoopEnumerable* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge* e, ::g::Fuse::Drawing::Tesselation::HalfEdge** __retval);
void EdgeLoopEnumerable__New1_fn(::g::Fuse::Drawing::Tesselation::HalfEdge* anEdge, EdgeLoopEnumerable** __retval);

struct EdgeLoopEnumerable : ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable
{
    void ctor_1(::g::Fuse::Drawing::Tesselation::HalfEdge* anEdge);
    static EdgeLoopEnumerable* New1(::g::Fuse::Drawing::Tesselation::HalfEdge* anEdge);
};
// }

}}}} // ::g::Fuse::Drawing::Tesselation
