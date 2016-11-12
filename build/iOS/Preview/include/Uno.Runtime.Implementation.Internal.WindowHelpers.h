// This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/runtime/implementation/internal/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Platform{struct Window;}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{struct WindowHelpers;}}}}}
namespace Xli { class Window; }

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{
namespace Internal{

// public static class WindowHelpers :1717
// {
uClassType* WindowHelpers_typeof();
void WindowHelpers__GetPlatformWindowHandle_fn(::g::Uno::Platform::Window* wnd, ::Xli::Window** __retval);

struct WindowHelpers : uObject
{
    static ::Xli::Window* GetPlatformWindowHandle(::g::Uno::Platform::Window* wnd);
};
// }

}}}}} // ::g::Uno::Runtime::Implementation::Internal
