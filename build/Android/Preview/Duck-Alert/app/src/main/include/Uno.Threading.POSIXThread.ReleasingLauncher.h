// This file was generated based on /usr/local/share/uno/Packages/Uno.Threading/0.40.2/implementation/cpp/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Threading{struct POSIXThread__ReleasingLauncher;}}}

namespace g{
namespace Uno{
namespace Threading{

// private sealed class POSIXThread.ReleasingLauncher :264
// {
uType* POSIXThread__ReleasingLauncher_typeof();
void POSIXThread__ReleasingLauncher__ctor__fn(POSIXThread__ReleasingLauncher* __this, uDelegate* callback);
void POSIXThread__ReleasingLauncher__New1_fn(uDelegate* callback, POSIXThread__ReleasingLauncher** __retval);
void POSIXThread__ReleasingLauncher__Run_fn(POSIXThread__ReleasingLauncher* __this);

struct POSIXThread__ReleasingLauncher : uObject
{
    uStrong<uDelegate*> _callback;

    void ctor_(uDelegate* callback);
    void Run();
    static POSIXThread__ReleasingLauncher* New1(uDelegate* callback);
};
// }

}}} // ::g::Uno::Threading
