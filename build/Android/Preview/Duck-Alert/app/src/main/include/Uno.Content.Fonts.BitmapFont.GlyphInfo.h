// This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/content/fonts/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
#include <Uno.UShort2.h>
namespace g{namespace Uno{namespace Content{namespace Fonts{struct BitmapFont__GlyphInfo;}}}}

namespace g{
namespace Uno{
namespace Content{
namespace Fonts{

// public struct BitmapFont.GlyphInfo :10
// {
uStructType* BitmapFont__GlyphInfo_typeof();

struct BitmapFont__GlyphInfo
{
    float Advance;
    ::g::Uno::Float2 Bearing;
    ::g::Uno::Float2 Size;
    ::g::Uno::UShort2 UpperLeft;
    ::g::Uno::UShort2 LowerRight;
};
// }

}}}} // ::g::Uno::Content::Fonts
