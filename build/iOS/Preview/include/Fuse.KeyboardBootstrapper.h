// This file was generated based on /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct KeyboardBootstrapper;}}
namespace g{namespace Uno{namespace Platform{struct KeyEventArgs;}}}
namespace g{namespace Uno{namespace Platform{struct TextInputEventArgs;}}}

namespace g{
namespace Fuse{

// internal sealed class KeyboardBootstrapper :8898
// {
uType* KeyboardBootstrapper_typeof();
void KeyboardBootstrapper__ctor__fn(KeyboardBootstrapper* __this);
void KeyboardBootstrapper__New1_fn(KeyboardBootstrapper** __retval);
void KeyboardBootstrapper__OnKeyPressed_fn(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args);
void KeyboardBootstrapper__OnKeyReleased_fn(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args);
void KeyboardBootstrapper__OnTextInput_fn(uObject* sender, ::g::Uno::Platform::TextInputEventArgs* args);

struct KeyboardBootstrapper : uObject
{
    void ctor_();
    static KeyboardBootstrapper* New1();
    static void OnKeyPressed(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args);
    static void OnKeyReleased(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args);
    static void OnTextInput(uObject* sender, ::g::Uno::Platform::TextInputEventArgs* args);
};
// }

}} // ::g::Fuse
