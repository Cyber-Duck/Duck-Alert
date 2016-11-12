// This file was generated based on /usr/local/share/uno/Packages/FuseCore/0.40.8/resources/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Resources.IDeferredDisposable.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Resources{struct DisposalPolicy;}}}
namespace g{namespace Fuse{namespace Resources{struct PolicyDeferredDisposable;}}}

namespace g{
namespace Fuse{
namespace Resources{

// internal abstract class PolicyDeferredDisposable :199
// {
struct PolicyDeferredDisposable_type : uType
{
    ::g::Fuse::Resources::IDeferredDisposable interface0;
    ::g::Uno::IDisposable interface1;
    void(*fp_Dispose)(::g::Fuse::Resources::PolicyDeferredDisposable*);
};

PolicyDeferredDisposable_type* PolicyDeferredDisposable_typeof();
void PolicyDeferredDisposable__ctor__fn(PolicyDeferredDisposable* __this);
void PolicyDeferredDisposable__CanDispose_fn(PolicyDeferredDisposable* __this, int* dr, bool* __retval);
void PolicyDeferredDisposable__get_IsPinned_fn(PolicyDeferredDisposable* __this, bool* __retval);
void PolicyDeferredDisposable__MarkUsed_fn(PolicyDeferredDisposable* __this);

struct PolicyDeferredDisposable : uObject
{
    uStrong< ::g::Fuse::Resources::DisposalPolicy*> Policy;

    void ctor_();
    bool CanDispose(int dr);
    void Dispose() { (((PolicyDeferredDisposable_type*)__type)->fp_Dispose)(this); }
    bool IsPinned();
    void MarkUsed();
};
// }

}}} // ::g::Fuse::Resources
