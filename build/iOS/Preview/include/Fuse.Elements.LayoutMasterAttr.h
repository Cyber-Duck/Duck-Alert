// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Elements{struct LayoutMasterAttr;}}}

namespace g{
namespace Fuse{
namespace Elements{

// public static class LayoutMasterAttr :3151
// {
uClassType* LayoutMasterAttr_typeof();
void LayoutMasterAttr__GetLayoutMasterMode_fn(::g::Fuse::Elements::Element* elm, int* __retval);
void LayoutMasterAttr__SetLayoutMasterMode_fn(::g::Fuse::Elements::Element* elm, int* mode);

struct LayoutMasterAttr : uObject
{
    static int GetLayoutMasterMode(::g::Fuse::Elements::Element* elm);
    static void SetLayoutMasterMode(::g::Fuse::Elements::Element* elm, int mode);
};
// }

}}} // ::g::Fuse::Elements
