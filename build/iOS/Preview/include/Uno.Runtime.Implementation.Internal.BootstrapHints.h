// This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/runtime/implementation/internal/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{struct BootstrapHints;}}}}}

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{
namespace Internal{

// public static class BootstrapHints :444
// {
uClassType* BootstrapHints_typeof();
void BootstrapHints__get_MaxFps_fn(int* __retval);
void BootstrapHints__set_MaxFps_fn(int* value);

struct BootstrapHints : uObject
{
    static int _MaxFps_;
    static int& _MaxFps() { return _MaxFps_; }

    static int MaxFps();
    static void MaxFps(int value);
};
// }

}}}}} // ::g::Uno::Runtime::Implementation::Internal
