// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Elements{struct AlignmentHelpers;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Elements{

// public static class AlignmentHelpers :2769
// {
uClassType* AlignmentHelpers_typeof();
void AlignmentHelpers__GetAnchor_fn(int* a, ::g::Uno::Float2* __retval);
void AlignmentHelpers__GetHorizontalAlign_fn(int* a, int* __retval);
void AlignmentHelpers__GetHorizontalSimpleAlign_fn(int* a, int* __retval);
void AlignmentHelpers__GetVerticalAlign_fn(int* a, int* __retval);
void AlignmentHelpers__GetVerticalSimpleAlign_fn(int* a, int* __retval);

struct AlignmentHelpers : uObject
{
    static ::g::Uno::Float2 GetAnchor(int a);
    static int GetHorizontalAlign(int a);
    static int GetHorizontalSimpleAlign(int a);
    static int GetVerticalAlign(int a);
    static int GetVerticalSimpleAlign(int a);
};
// }

}}} // ::g::Fuse::Elements
