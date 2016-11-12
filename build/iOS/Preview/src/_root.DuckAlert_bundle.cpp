// This file was generated based on /Users/JLMacAir/development/hackathons/Duck-Alert/Duck-Alert.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.DuckAlert_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[2];

namespace g{

// public static generated class DuckAlert_bundle :0
// {
// static DuckAlert_bundle() :0
static void DuckAlert_bundle__cctor__fn(uType* __type)
{
    DuckAlert_bundle::app97cdb1de_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"Duck-Alert"*/]))->GetFile(::STRINGS[1/*"app-5cf0a2c...*/]);
}

static void DuckAlert_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Duck-Alert");
    ::STRINGS[1] = uString::Const("app-5cf0a2c6.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::DuckAlert_bundle::app97cdb1de_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("app97cdb1de", 0));
}

uClassType* DuckAlert_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("DuckAlert_bundle", options);
    type->fp_build_ = DuckAlert_bundle_build;
    type->fp_cctor_ = DuckAlert_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> DuckAlert_bundle::app97cdb1de_;
// }

} // ::g
