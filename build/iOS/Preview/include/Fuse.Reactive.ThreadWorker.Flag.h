// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker__Flag;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class ThreadWorker.Flag :2105
// {
uType* ThreadWorker__Flag_typeof();
void ThreadWorker__Flag__ctor__fn(ThreadWorker__Flag* __this);
void ThreadWorker__Flag__New1_fn(ThreadWorker__Flag** __retval);
void ThreadWorker__Flag__Process_fn(ThreadWorker__Flag* __this);

struct ThreadWorker__Flag : uObject
{
    bool _processed;

    void ctor_();
    void Process();
    static ThreadWorker__Flag* New1();
};
// }

}}} // ::g::Fuse::Reactive
