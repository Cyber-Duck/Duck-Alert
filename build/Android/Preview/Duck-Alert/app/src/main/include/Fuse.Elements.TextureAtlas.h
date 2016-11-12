// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/0.40.8/caching/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Int2.h>
#include <Uno.Object.h>
#include <Uno.Recti.h>
namespace g{namespace Fuse{namespace Elements{struct TextureAtlas;}}}

namespace g{
namespace Fuse{
namespace Elements{

// internal sealed class TextureAtlas :1502
// {
uType* TextureAtlas_typeof();
void TextureAtlas__ctor__fn(TextureAtlas* __this, ::g::Uno::Int2* size);
void TextureAtlas__AddRect_fn(TextureAtlas* __this, ::g::Uno::Int2* size, ::g::Uno::Recti* ret, bool* __retval);
void TextureAtlas__New1_fn(::g::Uno::Int2* size, TextureAtlas** __retval);
void TextureAtlas__get_Size_fn(TextureAtlas* __this, ::g::Uno::Int2* __retval);
void TextureAtlas__set_Size_fn(TextureAtlas* __this, ::g::Uno::Int2* value);

struct TextureAtlas : uObject
{
    ::g::Uno::Recti _allocatedLine;
    ::g::Uno::Recti _allocatedLines;
    ::g::Uno::Int2 _Size;

    void ctor_(::g::Uno::Int2 size);
    bool AddRect(::g::Uno::Int2 size, ::g::Uno::Recti* ret);
    ::g::Uno::Int2 Size();
    void Size(::g::Uno::Int2 value);
    static TextureAtlas* New1(::g::Uno::Int2 size);
};
// }

}}} // ::g::Fuse::Elements
