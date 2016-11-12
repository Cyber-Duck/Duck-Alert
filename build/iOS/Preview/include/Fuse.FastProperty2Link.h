// This file was generated based on /usr/local/share/uno/Packages/FuseCore/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct FastProperty2Link;}}

namespace g{
namespace Fuse{

// internal class FastProperty2Link :5629
// {
uType* FastProperty2Link_typeof();
void FastProperty2Link__ctor__fn(FastProperty2Link* __this, int* p);
void FastProperty2Link__New1_fn(int* p, FastProperty2Link** __retval);

struct FastProperty2Link : uObject
{
    uStrong<FastProperty2Link*> Next;
    int Property;

    void ctor_(int p);
    static FastProperty2Link* New1(int p);
};
// }

}} // ::g::Fuse
