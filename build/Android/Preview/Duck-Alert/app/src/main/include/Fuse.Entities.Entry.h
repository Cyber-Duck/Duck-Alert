// This file was generated based on /usr/local/share/uno/Packages/Fuse.Entities/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4x4.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Entities{struct Entry;}}}
namespace g{namespace Fuse{namespace Entities{struct Mesh;}}}

namespace g{
namespace Fuse{
namespace Entities{

// internal struct Entry :961
// {
uStructType* Entry_typeof();
void Entry__ctor__fn(Entry* __this, ::g::Fuse::Entities::Mesh* m, ::g::Uno::Float4x4* t, ::g::Uno::Float4x4* worldInverse);
void Entry__New1_fn(::g::Fuse::Entities::Mesh* m, ::g::Uno::Float4x4* t, ::g::Uno::Float4x4* worldInverse, Entry* __retval);

struct Entry
{
    uStrong< ::g::Fuse::Entities::Mesh*> Mesh;
    ::g::Uno::Float4x4 World;
    ::g::Uno::Float4x4 WorldInverse;

    void ctor_(::g::Fuse::Entities::Mesh* m, ::g::Uno::Float4x4 t, ::g::Uno::Float4x4 worldInverse);
};

Entry Entry__New1(::g::Fuse::Entities::Mesh* m, ::g::Uno::Float4x4 t, ::g::Uno::Float4x4 worldInverse);
// }

}}} // ::g::Fuse::Entities
