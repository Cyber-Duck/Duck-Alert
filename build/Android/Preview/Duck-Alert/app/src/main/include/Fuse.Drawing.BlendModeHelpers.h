// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Drawing{struct BlendModeHelpers;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// public static class BlendModeHelpers :17
// {
uClassType* BlendModeHelpers_typeof();
void BlendModeHelpers__GetDstAlpha_fn(int* mode, int* __retval);
void BlendModeHelpers__GetDstRgb_fn(int* mode, int* __retval);
void BlendModeHelpers__GetSrcAlpha_fn(int* mode, int* __retval);
void BlendModeHelpers__GetSrcRgb_fn(int* mode, int* __retval);

struct BlendModeHelpers : uObject
{
    static uSStrong<uString*> _invalidBlendMode_;
    static uSStrong<uString*>& _invalidBlendMode() { return BlendModeHelpers_typeof()->Init(), _invalidBlendMode_; }

    static int GetDstAlpha(int mode);
    static int GetDstRgb(int mode);
    static int GetSrcAlpha(int mode);
    static int GetSrcRgb(int mode);
};
// }

}}} // ::g::Fuse::Drawing
