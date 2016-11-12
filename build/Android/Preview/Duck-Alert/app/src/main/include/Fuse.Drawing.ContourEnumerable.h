// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing.Paths/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.Contour.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct ContourEnumerable;}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal sealed class ContourEnumerable :13
// {
struct ContourEnumerable_type : uType
{
    ::g::Uno::Collections::IEnumerable interface0;
};

ContourEnumerable_type* ContourEnumerable_typeof();
void ContourEnumerable__ctor__fn(ContourEnumerable* __this, ::g::Fuse::Drawing::PathGeometry* head, ::g::Uno::Float2* scale);
void ContourEnumerable__GetEnumerator_fn(ContourEnumerable* __this, uObject** __retval);
void ContourEnumerable__New1_fn(::g::Fuse::Drawing::PathGeometry* head, ::g::Uno::Float2* scale, ContourEnumerable** __retval);

struct ContourEnumerable : uObject
{
    uStrong< ::g::Fuse::Drawing::PathGeometry*> _head;
    ::g::Uno::Float2 _scale;

    void ctor_(::g::Fuse::Drawing::PathGeometry* head, ::g::Uno::Float2 scale);
    uObject* GetEnumerator();
    static ContourEnumerable* New1(::g::Fuse::Drawing::PathGeometry* head, ::g::Uno::Float2 scale);
};
// }

}}} // ::g::Fuse::Drawing
