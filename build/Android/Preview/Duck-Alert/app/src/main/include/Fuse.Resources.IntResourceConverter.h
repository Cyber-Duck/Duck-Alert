// This file was generated based on /usr/local/share/uno/Packages/FuseCore/0.40.8/resources/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Resources.IResourceConverter-1.h>
#include <Fuse.Resources.NumericResourceConverter-1.h>
#include <Uno.Int.h>
namespace g{namespace Fuse{namespace Resources{struct IntResourceConverter;}}}

namespace g{
namespace Fuse{
namespace Resources{

// internal sealed class IntResourceConverter :371
// {
::g::Fuse::Resources::NumericResourceConverter_type* IntResourceConverter_typeof();
void IntResourceConverter__ctor_1_fn(IntResourceConverter* __this);
void IntResourceConverter__Convert_fn(IntResourceConverter* __this, uObject* o, int* __retval);
void IntResourceConverter__New1_fn(IntResourceConverter** __retval);

struct IntResourceConverter : ::g::Fuse::Resources::NumericResourceConverter
{
    void ctor_1();
    static IntResourceConverter* New1();
};
// }

}}} // ::g::Fuse::Resources
