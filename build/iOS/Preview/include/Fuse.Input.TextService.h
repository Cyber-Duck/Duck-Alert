// This file was generated based on /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Input{struct TextEntered;}}}
namespace g{namespace Fuse{namespace Input{struct TextEnteredArgs;}}}
namespace g{namespace Fuse{namespace Input{struct TextService;}}}
namespace g{namespace Fuse{struct VisualEvent;}}

namespace g{
namespace Fuse{
namespace Input{

// public static class TextService :1489
// {
uClassType* TextService_typeof();
void TextService__RaiseTextEntered_fn(uString* text, bool* __retval);
void TextService__get_TextEntered_fn(::g::Fuse::VisualEvent** __retval);

struct TextService : uObject
{
    static uSStrong< ::g::Fuse::Input::TextEntered*> _textEntered_;
    static uSStrong< ::g::Fuse::Input::TextEntered*>& _textEntered() { return TextService_typeof()->Init(), _textEntered_; }

    static bool RaiseTextEntered(uString* text);
    static ::g::Fuse::VisualEvent* TextEntered();
};
// }

}}} // ::g::Fuse::Input
