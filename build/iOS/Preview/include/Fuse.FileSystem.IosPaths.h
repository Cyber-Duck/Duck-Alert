// This file was generated based on /usr/local/share/uno/Packages/Fuse.FileSystem/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace FileSystem{struct IosPaths;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace FileSystem{

// internal sealed extern class IosPaths :1271
// {
uType* IosPaths_typeof();
void IosPaths__ctor__fn(IosPaths* __this);
void IosPaths__GetCachesDirectory_fn(uString** __retval);
void IosPaths__GetDocumentsDirectory_fn(uString** __retval);
void IosPaths__GetLibraryDirectory_fn(uString** __retval);
void IosPaths__GetPathDictionary_fn(::g::Uno::Collections::Dictionary** __retval);
void IosPaths__GetTemporaryDirectory_fn(uString** __retval);
void IosPaths__New1_fn(IosPaths** __retval);

struct IosPaths : uObject
{
    void ctor_();
    static uString* GetCachesDirectory();
    static uString* GetDocumentsDirectory();
    static uString* GetLibraryDirectory();
    static ::g::Uno::Collections::Dictionary* GetPathDictionary();
    static uString* GetTemporaryDirectory();
    static IosPaths* New1();
};
// }

}}} // ::g::Fuse::FileSystem
