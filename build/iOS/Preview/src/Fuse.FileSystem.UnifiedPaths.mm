// This file was generated based on /usr/local/share/uno/Packages/Fuse.FileSystem/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.FileSystem.UnifiedPaths.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Fuse{
namespace FileSystem{

// internal static extern class UnifiedPaths :1380
// {
static void UnifiedPaths_build(uType* type)
{
}

uClassType* UnifiedPaths_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.FileSystem.UnifiedPaths", options);
    type->fp_build_ = UnifiedPaths_build;
    return type;
}

// public static string GetCacheDirectory() :1384
void UnifiedPaths__GetCacheDirectory_fn(uString** __retval)
{
    *__retval = UnifiedPaths::GetCacheDirectory();
}

// public static string GetDataDirectory() :1391
void UnifiedPaths__GetDataDirectory_fn(uString** __retval)
{
    *__retval = UnifiedPaths::GetDataDirectory();
}

// public static string GetCacheDirectory() [static] :1384
uString* UnifiedPaths::GetCacheDirectory()
{
    uStackFrame __("Fuse.FileSystem.UnifiedPaths", "GetCacheDirectory()");
    @autoreleasepool
    {
        return ::uObjC::UnoString([] () -> ::NSString*
        {
            return NSTemporaryDirectory();
        } ());
        
    }
    
}

// public static string GetDataDirectory() [static] :1391
uString* UnifiedPaths::GetDataDirectory()
{
    uStackFrame __("Fuse.FileSystem.UnifiedPaths", "GetDataDirectory()");
    @autoreleasepool
    {
        return ::uObjC::UnoString([] () -> ::NSString*
        {
            return NSSearchPathForDirectoriesInDomains(NSLibraryDirectory, NSUserDomainMask, YES)[0];
        } ());
        
    }
    
}
// }

}}} // ::g::Fuse::FileSystem
