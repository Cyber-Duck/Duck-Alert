// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/android/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct Helpers;}}}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// internal static class Helpers :408
// {
uClassType* Helpers_typeof();
void Helpers__DecodeColor_fn(int* color, ::g::Uno::Float4* __retval);
void Helpers__EncodeColor_fn(::g::Uno::Float4* c, int* __retval);

struct Helpers : uObject
{
    static ::g::Uno::Float4 DecodeColor(int color);
    static int EncodeColor(::g::Uno::Float4 c);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
