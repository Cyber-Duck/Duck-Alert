// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/0.40.8/ios/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct OSVersion;}}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class OSVersion :1296
// {
uType* OSVersion_typeof();
void OSVersion__ctor__fn(OSVersion* __this, int* major, int* minor, int* patch);
void OSVersion__New1_fn(int* major, int* minor, int* patch, OSVersion** __retval);
void OSVersion__ToString_fn(OSVersion* __this, uString** __retval);

struct OSVersion : uObject
{
    int Major;
    int Minor;
    int Patch;

    void ctor_(int major, int minor, int patch);
    static OSVersion* New1(int major, int minor, int patch);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
