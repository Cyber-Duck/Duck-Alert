// This file was generated based on /usr/local/share/uno/Packages/Fuse.iOS/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct OSVersion;}}

namespace g{
namespace Fuse{

// public sealed extern class OSVersion :262
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

}} // ::g::Fuse
