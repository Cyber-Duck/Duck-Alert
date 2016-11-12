// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing.Polygons/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.LineCapImpl.h>
namespace g{namespace Fuse{namespace Drawing{struct RoundCap;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal sealed class RoundCap :92
// {
::g::Fuse::Drawing::LineCapImpl_type* RoundCap_typeof();
void RoundCap__ctor_1_fn(RoundCap* __this);
void RoundCap__Create_fn(RoundCap* __this, ::g::Uno::Float2* from, ::g::Uno::Float2* to, uObject** __retval);
void RoundCap__New1_fn(RoundCap** __retval);

struct RoundCap : ::g::Fuse::Drawing::LineCapImpl
{
    void ctor_1();
    static RoundCap* New1();
};
// }

}}} // ::g::Fuse::Drawing
