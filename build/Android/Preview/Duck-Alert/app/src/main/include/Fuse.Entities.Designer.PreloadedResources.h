// This file was generated based on /usr/local/share/uno/Packages/Fuse.Entities/0.40.8/designer/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Entities{namespace Designer{struct PreloadedResources;}}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace Entities{
namespace Designer{

// public static class PreloadedResources :62
// {
uClassType* PreloadedResources_typeof();
void PreloadedResources__Add_fn(uType* __type, uString* descriptor, void* data, uTRef __retval);
void PreloadedResources__Get_fn(uString* descriptor, uObject** __retval);

struct PreloadedResources : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> resources_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& resources() { return PreloadedResources_typeof()->Init(), resources_; }

    template<class T>
    static T Add(uType* __type, uString* descriptor, T data) { T __retval; return PreloadedResources__Add_fn(__type, descriptor, uConstrain(__type->U(0), data), &__retval), __retval; }
    static uObject* Get(uString* descriptor);
};
// }

}}}} // ::g::Fuse::Entities::Designer
