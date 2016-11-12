// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Diagnostics.h>
#include <Fuse.iOSDevice.h>
#include <Fuse.Node.h>
#include <Fuse.OSVersion.h>
#include <Fuse.Platform.ApplicationState.h>
#include <Fuse.Platform.Lifecycle.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.FutureFactory-1.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeEvent.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativePromise-2.h>
#include <Fuse.Scripting.NativeProperty-2.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ResultConverter-2.h>
#include <Fuse.Scripting.ResultFactory-1.h>
#include <Fuse.Scripting.ValueConverter-2.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UserEventDispatch.h>
#include <FuseJS.Base64.h>
#include <FuseJS.Bundle.h>
#include <FuseJS.Bundle.ReadClosure.h>
#include <FuseJS.Environment.h>
#include <FuseJS.FileReaderImpl.FileReadCommand.h>
#include <FuseJS.FileReaderImpl.h>
#include <FuseJS.Globals.h>
#include <FuseJS.Lifecycle.h>
#include <FuseJS.RaiseEvent.h>
#include <FuseJS.UserEvents.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Func-1.h>
#include <Uno.Int.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.File.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.Text.Ascii.h>
#include <Uno.Text.Base64.h>
#include <Uno.Text.Utf8.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[44];
static uType* TYPES[24];

namespace g{
namespace FuseJS{

// /usr/local/share/uno/Packages/FuseJS/0.40.8/$.uno
// -------------------------------------------------

// public sealed class Base64 :404
// {
static void Base64_build(uType* type)
{
    ::STRINGS[0] = uString::Const("FuseJS/Base64");
    ::STRINGS[1] = uString::Const("encodeAscii");
    ::STRINGS[2] = uString::Const("decodeAscii");
    ::STRINGS[3] = uString::Const("encodeUtf8");
    ::STRINGS[4] = uString::Const("decodeUtf8");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(5,
        Base64_typeof(), (uintptr_t)&::g::FuseJS::Base64::_instance_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Base64__New2_fn, 0, true, Base64_typeof(), 0));
}

::g::Fuse::Scripting::NativeModule_type* Base64_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Base64);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("FuseJS.Base64", options);
    type->fp_build_ = Base64_build;
    type->fp_ctor_ = (void*)Base64__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public Base64() :408
void Base64__ctor_2_fn(Base64* __this)
{
    __this->ctor_2();
}

// private object DecodeAscii(Fuse.Scripting.Context context, object[] args) :449
void Base64__DecodeAscii_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->DecodeAscii(context, args);
}

// private object DecodeUtf8(Fuse.Scripting.Context context, object[] args) :491
void Base64__DecodeUtf8_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->DecodeUtf8(context, args);
}

// private object EncodeAscii(Fuse.Scripting.Context context, object[] args) :428
void Base64__EncodeAscii_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->EncodeAscii(context, args);
}

// private object EncodeUtf8(Fuse.Scripting.Context context, object[] args) :470
void Base64__EncodeUtf8_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->EncodeUtf8(context, args);
}

// public Base64 New() :408
void Base64__New2_fn(Base64** __retval)
{
    *__retval = Base64::New2();
}

uSStrong<Base64*> Base64::_instance_;

// public Base64() [instance] :408
void Base64::ctor_2()
{
    uStackFrame __("FuseJS.Base64", ".ctor()");
    ctor_1();

    if (Base64::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(Base64::_instance_ = this, ::STRINGS[0/*"FuseJS/Base64"*/]);
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[1/*"encodeAscii"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)Base64__EncodeAscii_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[2/*"decodeAscii"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)Base64__DecodeAscii_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[3/*"encodeUtf8"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)Base64__EncodeUtf8_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[4/*"decodeUtf8"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)Base64__DecodeUtf8_fn, this)));
}

// private object DecodeAscii(Fuse.Scripting.Context context, object[] args) [instance] :449
uObject* Base64::DecodeAscii(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("FuseJS.Base64", "DecodeAscii(Fuse.Scripting.Context,object[])");

    if (uPtr(args)->Length() > 0)
    {
        uString* str = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);

        if (::g::Uno::String::op_Inequality(str, NULL))
            return ::g::Uno::Text::Ascii::GetString(::g::Uno::Text::Base64::GetBytes(str));
    }

    return NULL;
}

// private object DecodeUtf8(Fuse.Scripting.Context context, object[] args) [instance] :491
uObject* Base64::DecodeUtf8(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("FuseJS.Base64", "DecodeUtf8(Fuse.Scripting.Context,object[])");

    if (uPtr(args)->Length() > 0)
    {
        uString* str = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);

        if (::g::Uno::String::op_Inequality(str, NULL))
            return ::g::Uno::Text::Utf8::GetString(::g::Uno::Text::Base64::GetBytes(str));
    }

    return NULL;
}

// private object EncodeAscii(Fuse.Scripting.Context context, object[] args) [instance] :428
uObject* Base64::EncodeAscii(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("FuseJS.Base64", "EncodeAscii(Fuse.Scripting.Context,object[])");

    if (uPtr(args)->Length() > 0)
    {
        uString* str = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);

        if (::g::Uno::String::op_Inequality(str, NULL))
            return ::g::Uno::Text::Base64::GetString(::g::Uno::Text::Ascii::GetBytes(str));
    }

    return NULL;
}

// private object EncodeUtf8(Fuse.Scripting.Context context, object[] args) [instance] :470
uObject* Base64::EncodeUtf8(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("FuseJS.Base64", "EncodeUtf8(Fuse.Scripting.Context,object[])");

    if (uPtr(args)->Length() > 0)
    {
        uString* str = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);

        if (::g::Uno::String::op_Inequality(str, NULL))
            return ::g::Uno::Text::Base64::GetString(::g::Uno::Text::Utf8::GetBytes(str));
    }

    return NULL;
}

// public Base64 New() [static] :408
Base64* Base64::New2()
{
    Base64* obj1 = (Base64*)uNew(Base64_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseJS/0.40.8/$.uno
// -------------------------------------------------

// public sealed class Bundle :526
// {
static void Bundle_build(uType* type)
{
    ::STRINGS[5] = uString::Const("FuseJS/Bundle");
    ::STRINGS[6] = uString::Const("readSync");
    ::STRINGS[7] = uString::Const("read");
    ::STRINGS[8] = uString::Const("");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[3] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[4] = ::g::Uno::Exception_typeof();
    ::TYPES[5] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[6] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[7] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof());
    ::TYPES[8] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[9] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(5,
        Bundle_typeof(), (uintptr_t)&::g::FuseJS::Bundle::_instance_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Bundle__New2_fn, 0, true, Bundle_typeof(), 0));
}

::g::Fuse::Scripting::NativeModule_type* Bundle_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Bundle);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("FuseJS.Bundle", options);
    type->fp_build_ = Bundle_build;
    type->fp_ctor_ = (void*)Bundle__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public Bundle() :530
void Bundle__ctor_2_fn(Bundle* __this)
{
    __this->ctor_2();
}

// public Bundle New() :530
void Bundle__New2_fn(Bundle** __retval)
{
    *__retval = Bundle::New2();
}

// private static object Read(Fuse.Scripting.Context c, object[] args) :596
void Bundle__Read_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = Bundle::Read(c, args);
}

// private static string Read(string filename) :606
void Bundle__Read1_fn(uString* filename, uString** __retval)
{
    *__retval = Bundle::Read1(filename);
}

// private static Uno.Threading.Future<string> ReadAsync(object[] args) :570
void Bundle__ReadAsync_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Bundle::ReadAsync(args);
}

// private static Uno.Threading.Future<string> ReadAsync(string filename) :623
void Bundle__ReadAsync1_fn(uString* filename, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Bundle::ReadAsync1(filename);
}

// private static bool TryGetBundleFile(string sourcePath, Uno.IO.BundleFile& bundleFile) :538
void Bundle__TryGetBundleFile_fn(uString* sourcePath, ::g::Uno::IO::BundleFile** bundleFile, bool* __retval)
{
    *__retval = Bundle::TryGetBundleFile(sourcePath, bundleFile);
}

uSStrong<Bundle*> Bundle::_instance_;

// public Bundle() [instance] :530
void Bundle::ctor_2()
{
    uStackFrame __("FuseJS.Bundle", ".ctor()");
    ctor_1();

    if (Bundle::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(Bundle::_instance_ = this, ::STRINGS[5/*"FuseJS/Bundle"*/]);
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[6/*"readSync"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)Bundle__Read_fn)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[2/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[7/*"read"*/], uDelegate::New(::TYPES[3/*Fuse.Scripting.FutureFactory<string>*/], (void*)Bundle__ReadAsync_fn), NULL));
}

// public Bundle New() [static] :530
Bundle* Bundle::New2()
{
    Bundle* obj2 = (Bundle*)uNew(Bundle_typeof());
    obj2->ctor_2();
    return obj2;
}

// private static object Read(Fuse.Scripting.Context c, object[] args) [static] :596
uObject* Bundle::Read(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uStackFrame __("FuseJS.Bundle", "Read(Fuse.Scripting.Context,object[])");

    if (uPtr(args)->Length() > 0)
    {
        uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);
        return Bundle::Read1(filename);
    }

    return ::STRINGS[8/*""*/];
}

// private static string Read(string filename) [static] :606
uString* Bundle::Read1(uString* filename)
{
    uStackFrame __("FuseJS.Bundle", "Read(string)");

    try
    {
        ::g::Uno::IO::BundleFile* bundleFile;

        if (Bundle::TryGetBundleFile(filename, &bundleFile))
            return uPtr(bundleFile)->ReadAllText();

        return ::STRINGS[8/*""*/];
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        return ::STRINGS[8/*""*/];
    }
}

// private static Uno.Threading.Future<string> ReadAsync(object[] args) [static] :570
::g::Uno::Threading::Future1* Bundle::ReadAsync(uArray* args)
{
    uStackFrame __("FuseJS.Bundle", "ReadAsync(object[])");

    if (uPtr(args)->Length() > 0)
    {
        uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);
        return Bundle::ReadAsync1((filename != NULL) ? filename : ::STRINGS[8/*""*/]);
    }

    return Bundle::ReadAsync1(::STRINGS[8/*""*/]);
}

// private static Uno.Threading.Future<string> ReadAsync(string filename) [static] :623
::g::Uno::Threading::Future1* Bundle::ReadAsync1(uString* filename)
{
    uStackFrame __("FuseJS.Bundle", "ReadAsync(string)");
    return (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run(::TYPES[5/*Uno.Threading.Promise<string>*/], uDelegate::New(::TYPES[6/*Uno.Func<string>*/], (void*)Bundle__ReadClosure__Invoke_fn, Bundle__ReadClosure::New1(filename)));
}

// private static bool TryGetBundleFile(string sourcePath, Uno.IO.BundleFile& bundleFile) [static] :538
bool Bundle::TryGetBundleFile(uString* sourcePath, ::g::Uno::IO::BundleFile** bundleFile)
{
    uStackFrame __("FuseJS.Bundle", "TryGetBundleFile(string,Uno.IO.BundleFile&)");
    ::g::Uno::IO::BundleFile* ret3;
    *bundleFile = NULL;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(::g::Uno::IO::Bundle::AllFiles()), ::TYPES[7/*Uno.Collections.IEnumerable<Uno.IO.BundleFile>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[8/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Uno::IO::BundleFile* bf = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[9/*Uno.Collections.IEnumerator<Uno.IO.BundleFile>*/]), &ret3), ret3);

        if (::g::Uno::String::op_Equality(uPtr(bf)->SourcePath(), sourcePath))
        {
            *bundleFile = bf;
            return true;
        }
    }

    return false;
}
// }

// /usr/local/share/uno/Packages/FuseJS/0.40.8/$.uno
// -------------------------------------------------

// public sealed class Environment :353
// {
static void Environment_build(uType* type)
{
    ::STRINGS[9] = uString::Const("FuseJS/Environment");
    ::STRINGS[10] = uString::Const("android");
    ::STRINGS[11] = uString::Const("ios");
    ::STRINGS[12] = uString::Const("mobile");
    ::STRINGS[13] = uString::Const("desktop");
    ::STRINGS[14] = uString::Const("preview");
    ::STRINGS[15] = uString::Const("mobileOSVersion");
    ::STRINGS[8] = uString::Const("");
    ::TYPES[10] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof());
    ::TYPES[11] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[6] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::String_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(5,
        Environment_typeof(), (uintptr_t)&::g::FuseJS::Environment::_instance_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Environment__New2_fn, 0, true, Environment_typeof(), 0));
}

::g::Fuse::Scripting::NativeModule_type* Environment_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Environment);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("FuseJS.Environment", options);
    type->fp_build_ = Environment_build;
    type->fp_ctor_ = (void*)Environment__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public Environment() :357
void Environment__ctor_2_fn(Environment* __this)
{
    __this->ctor_2();
}

// private static string GetMobileOSVersion() :369
void Environment__GetMobileOSVersion_fn(uString** __retval)
{
    *__retval = Environment::GetMobileOSVersion();
}

// public Environment New() :357
void Environment__New2_fn(Environment** __retval)
{
    *__retval = Environment::New2();
}

uSStrong<Environment*> Environment::_instance_;

// public Environment() [instance] :357
void Environment::ctor_2()
{
    uStackFrame __("FuseJS.Environment", ".ctor()");
    ::g::Fuse::Scripting::NativeProperty* ret2;
    ::g::Fuse::Scripting::NativeProperty* ret3;
    ::g::Fuse::Scripting::NativeProperty* ret4;
    ::g::Fuse::Scripting::NativeProperty* ret5;
    ::g::Fuse::Scripting::NativeProperty* ret6;
    ctor_1();

    if (Environment::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(Environment::_instance_ = this, ::STRINGS[9/*"FuseJS/Envi...*/]);
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[10/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[10/*"android"*/], uCRef(false), &ret2), ret2));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[10/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[11/*"ios"*/], uCRef(true), &ret3), ret3));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[10/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[12/*"mobile"*/], uCRef(true), &ret4), ret4));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[10/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[13/*"desktop"*/], uCRef(false), &ret5), ret5));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[10/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[14/*"preview"*/], uCRef(true), &ret6), ret6));
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[11/*Fuse.Scripting.NativeProperty<string, string>*/], ::STRINGS[15/*"mobileOSVer...*/], uDelegate::New(::TYPES[6/*Uno.Func<string>*/], (void*)Environment__GetMobileOSVersion_fn), NULL, NULL));
}

// private static string GetMobileOSVersion() [static] :369
uString* Environment::GetMobileOSVersion()
{
    uStackFrame __("FuseJS.Environment", "GetMobileOSVersion()");
    return uPtr(::g::Fuse::iOSDevice::OperatingSystemVersion())->ToString();
    return ::STRINGS[8/*""*/];
}

// public Environment New() [static] :357
Environment* Environment::New2()
{
    Environment* obj1 = (Environment*)uNew(Environment_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseJS/0.40.8/$.uno
// -------------------------------------------------

// private sealed class FileReaderImpl.FileReadCommand :661
// {
static void FileReaderImpl__FileReadCommand_build(uType* type)
{
    ::STRINGS[16] = uString::Const("PNG");
    ::STRINGS[17] = uString::Const("png");
    ::STRINGS[18] = uString::Const("jpeg");
    ::STRINGS[19] = uString::Const("data:image/");
    ::STRINGS[20] = uString::Const(";base64,");
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::FuseJS::FileReaderImpl__FileReadCommand, _path), 0);
}

uType* FileReaderImpl__FileReadCommand_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(FileReaderImpl__FileReadCommand);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("FuseJS.FileReaderImpl.FileReadCommand", options);
    type->fp_build_ = FileReaderImpl__FileReadCommand_build;
    return type;
}

// public FileReadCommand(string path) :664
void FileReaderImpl__FileReadCommand__ctor__fn(FileReaderImpl__FileReadCommand* __this, uString* path)
{
    __this->ctor_(path);
}

// public FileReadCommand New(string path) :664
void FileReaderImpl__FileReadCommand__New1_fn(uString* path, FileReaderImpl__FileReadCommand** __retval)
{
    *__retval = FileReaderImpl__FileReadCommand::New1(path);
}

// public string ReadAsDataURL() :672
void FileReaderImpl__FileReadCommand__ReadAsDataURL_fn(FileReaderImpl__FileReadCommand* __this, uString** __retval)
{
    *__retval = __this->ReadAsDataURL();
}

// public string ReadAsText() :668
void FileReaderImpl__FileReadCommand__ReadAsText_fn(FileReaderImpl__FileReadCommand* __this, uString** __retval)
{
    *__retval = __this->ReadAsText();
}

// public FileReadCommand(string path) [instance] :664
void FileReaderImpl__FileReadCommand::ctor_(uString* path)
{
    uStackFrame __("FuseJS.FileReaderImpl.FileReadCommand", ".ctor(string)");
    _path = path;
}

// public string ReadAsDataURL() [instance] :672
uString* FileReaderImpl__FileReadCommand::ReadAsDataURL()
{
    uStackFrame __("FuseJS.FileReaderImpl.FileReadCommand", "ReadAsDataURL()");
    uArray* file = ::g::Uno::IO::File::ReadAllBytes(_path);
    uString* type = ::g::Uno::String::EndsWith(uPtr(::g::Uno::String::ToUpper(uPtr(_path))), ::STRINGS[16/*"PNG"*/]) ? ::STRINGS[17/*"png"*/] : ::STRINGS[18/*"jpeg"*/];
    uString* base64 = ::g::Uno::Text::Base64::GetString(file);
    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[19/*"data:image/"*/], type), ::STRINGS[20/*";base64,"*/]), base64);
}

// public string ReadAsText() [instance] :668
uString* FileReaderImpl__FileReadCommand::ReadAsText()
{
    uStackFrame __("FuseJS.FileReaderImpl.FileReadCommand", "ReadAsText()");
    return ::g::Uno::IO::File::ReadAllText(_path);
}

// public FileReadCommand New(string path) [static] :664
FileReaderImpl__FileReadCommand* FileReaderImpl__FileReadCommand::New1(uString* path)
{
    FileReaderImpl__FileReadCommand* obj1 = (FileReaderImpl__FileReadCommand*)uNew(FileReaderImpl__FileReadCommand_typeof());
    obj1->ctor_(path);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseJS/0.40.8/$.uno
// -------------------------------------------------

// public sealed class FileReaderImpl :659
// {
static void FileReaderImpl_build(uType* type)
{
    ::STRINGS[21] = uString::Const("FuseJS/FileReaderImpl");
    ::STRINGS[22] = uString::Const("readAsDataURL");
    ::STRINGS[23] = uString::Const("readAsText");
    ::TYPES[2] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[3] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[5] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[6] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::String_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(5,
        FileReaderImpl_typeof(), (uintptr_t)&::g::FuseJS::FileReaderImpl::_instance_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)FileReaderImpl__New2_fn, 0, true, FileReaderImpl_typeof(), 0));
}

::g::Fuse::Scripting::NativeModule_type* FileReaderImpl_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(FileReaderImpl);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("FuseJS.FileReaderImpl", options);
    type->fp_build_ = FileReaderImpl_build;
    type->fp_ctor_ = (void*)FileReaderImpl__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public FileReaderImpl() :682
void FileReaderImpl__ctor_2_fn(FileReaderImpl* __this)
{
    __this->ctor_2();
}

// public FileReaderImpl New() :682
void FileReaderImpl__New2_fn(FileReaderImpl** __retval)
{
    *__retval = FileReaderImpl::New2();
}

// private static Uno.Threading.Future<string> readAsDataURL(object[] args) :690
void FileReaderImpl__readAsDataURL_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = FileReaderImpl::readAsDataURL(args);
}

// private static Uno.Threading.Future<string> readAsText(object[] args) :696
void FileReaderImpl__readAsText_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = FileReaderImpl::readAsText(args);
}

uSStrong<FileReaderImpl*> FileReaderImpl::_instance_;

// public FileReaderImpl() [instance] :682
void FileReaderImpl::ctor_2()
{
    uStackFrame __("FuseJS.FileReaderImpl", ".ctor()");
    ctor_1();

    if (FileReaderImpl::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(FileReaderImpl::_instance_ = this, ::STRINGS[21/*"FuseJS/File...*/]);
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[2/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[22/*"readAsDataURL"*/], uDelegate::New(::TYPES[3/*Fuse.Scripting.FutureFactory<string>*/], (void*)FileReaderImpl__readAsDataURL_fn), NULL));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[2/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[23/*"readAsText"*/], uDelegate::New(::TYPES[3/*Fuse.Scripting.FutureFactory<string>*/], (void*)FileReaderImpl__readAsText_fn), NULL));
}

// public FileReaderImpl New() [static] :682
FileReaderImpl* FileReaderImpl::New2()
{
    FileReaderImpl* obj1 = (FileReaderImpl*)uNew(FileReaderImpl_typeof());
    obj1->ctor_2();
    return obj1;
}

// private static Uno.Threading.Future<string> readAsDataURL(object[] args) [static] :690
::g::Uno::Threading::Future1* FileReaderImpl::readAsDataURL(uArray* args)
{
    uStackFrame __("FuseJS.FileReaderImpl", "readAsDataURL(object[])");
    uString* path = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);
    return (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run(::TYPES[5/*Uno.Threading.Promise<string>*/], uDelegate::New(::TYPES[6/*Uno.Func<string>*/], (void*)FileReaderImpl__FileReadCommand__ReadAsDataURL_fn, FileReaderImpl__FileReadCommand::New1(path)));
}

// private static Uno.Threading.Future<string> readAsText(object[] args) [static] :696
::g::Uno::Threading::Future1* FileReaderImpl::readAsText(uArray* args)
{
    uStackFrame __("FuseJS.FileReaderImpl", "readAsText(object[])");
    uString* path = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);
    return (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run(::TYPES[5/*Uno.Threading.Promise<string>*/], uDelegate::New(::TYPES[6/*Uno.Func<string>*/], (void*)FileReaderImpl__FileReadCommand__ReadAsText_fn, FileReaderImpl__FileReadCommand::New1(path)));
}
// }

// /usr/local/share/uno/Packages/FuseJS/0.40.8/$.uno
// -------------------------------------------------

// public sealed class Globals :10
// {
static void Globals_build(uType* type)
{
    ::STRINGS[24] = uString::Const("FuseJS/Globals");
    ::STRINGS[23] = uString::Const("readAsText");
    ::STRINGS[25] = uString::Const("Globals.readAsText(): Exactly one argument expected");
    ::STRINGS[26] = uString::Const("Globals.readAsText(): Argument must be string");
    ::STRINGS[27] = uString::Const("Globals.readAsText(): Global resource file '");
    ::STRINGS[28] = uString::Const("' not found");
    ::TYPES[2] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[12] = ::g::Fuse::Scripting::ResultFactory_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[13] = ::g::Uno::UX::BundleFileSource_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[14] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(5,
        Globals_typeof(), (uintptr_t)&::g::FuseJS::Globals::_instance_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Globals__New2_fn, 0, true, Globals_typeof(), 0));
}

::g::Fuse::Scripting::NativeModule_type* Globals_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Globals);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("FuseJS.Globals", options);
    type->fp_build_ = Globals_build;
    type->fp_ctor_ = (void*)Globals__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public Globals() :13
void Globals__ctor_2_fn(Globals* __this)
{
    __this->ctor_2();
}

// private static bool FileSourceAcceptor(object obj) :37
void Globals__FileSourceAcceptor_fn(uObject* obj, bool* __retval)
{
    *__retval = Globals::FileSourceAcceptor(obj);
}

// public Globals New() :13
void Globals__New2_fn(Globals** __retval)
{
    *__retval = Globals::New2();
}

// private static string readAsText(object[] args) :20
void Globals__readAsText_fn(uArray* args, uString** __retval)
{
    *__retval = Globals::readAsText(args);
}

uSStrong<Globals*> Globals::_instance_;

// public Globals() [instance] :13
void Globals::ctor_2()
{
    uStackFrame __("FuseJS.Globals", ".ctor()");
    ctor_1();

    if (Globals::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(Globals::_instance_ = this, ::STRINGS[24/*"FuseJS/Glob...*/]);
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New2(::TYPES[2/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[23/*"readAsText"*/], uDelegate::New(::TYPES[12/*Fuse.Scripting.ResultFactory<string>*/], (void*)Globals__readAsText_fn), NULL));
}

// private static bool FileSourceAcceptor(object obj) [static] :37
bool Globals::FileSourceAcceptor(uObject* obj)
{
    uStackFrame __("FuseJS.Globals", "FileSourceAcceptor(object)");
    return uIs(obj, ::TYPES[13/*Uno.UX.BundleFileSource*/]);
}

// public Globals New() [static] :13
Globals* Globals::New2()
{
    Globals* obj1 = (Globals*)uNew(Globals_typeof());
    obj1->ctor_2();
    return obj1;
}

// private static string readAsText(object[] args) [static] :20
uString* Globals::readAsText(uArray* args)
{
    uStackFrame __("FuseJS.Globals", "readAsText(object[])");

    if (uPtr(args)->Length() != 1)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[25/*"Globals.rea...*/]));

    uString* key = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);

    if (args->Length() != 1)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[26/*"Globals.rea...*/]));

    uObject* res;

    if (::g::Uno::UX::Resource::TryFindGlobal(key, uDelegate::New(::TYPES[14/*Uno.Predicate<object>*/], (void*)Globals__FileSourceAcceptor_fn), &res))
    {
        ::g::Uno::UX::BundleFileSource* fs = uCast< ::g::Uno::UX::BundleFileSource*>(res, ::TYPES[13/*Uno.UX.BundleFileSource*/]);
        return uPtr(fs)->ReadAllText();
    }

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[27/*"Globals.rea...*/], key), ::STRINGS[28/*"' not found"*/])));
}
// }

// /usr/local/share/uno/Packages/FuseJS/0.40.8/$.uno
// -------------------------------------------------

// public sealed class Lifecycle :132
// {
static void Lifecycle_build(uType* type)
{
    ::STRINGS[29] = uString::Const("FuseJS/Lifecycle");
    ::STRINGS[30] = uString::Const("onEnteringForeground");
    ::STRINGS[31] = uString::Const("onEnteringInteractive");
    ::STRINGS[32] = uString::Const("onExitedInteractive");
    ::STRINGS[33] = uString::Const("onEnteringBackground");
    ::STRINGS[34] = uString::Const("state");
    ::STRINGS[35] = uString::Const("BACKGROUND");
    ::STRINGS[36] = uString::Const("FOREGROUND");
    ::STRINGS[37] = uString::Const("INTERACTIVE");
    ::TYPES[15] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::Int_typeof());
    ::TYPES[16] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[17] = ::g::Fuse::Scripting::ValueConverter_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::Int_typeof());
    ::TYPES[18] = ::g::Uno::EventHandler_typeof();
    ::TYPES[19] = uObject_typeof()->Array();
    ::TYPES[20] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Platform::ApplicationState_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(5,
        ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()), (uintptr_t)&::g::FuseJS::Lifecycle::_background_, uFieldFlagsStatic,
        ::g::Fuse::Scripting::NativeEvent_typeof(), (uintptr_t)&::g::FuseJS::Lifecycle::_enteringBackground_, uFieldFlagsStatic,
        ::g::Fuse::Scripting::NativeEvent_typeof(), (uintptr_t)&::g::FuseJS::Lifecycle::_enteringForeground_, uFieldFlagsStatic,
        ::g::Fuse::Scripting::NativeEvent_typeof(), (uintptr_t)&::g::FuseJS::Lifecycle::_enteringInteractive_, uFieldFlagsStatic,
        ::g::Fuse::Scripting::NativeEvent_typeof(), (uintptr_t)&::g::FuseJS::Lifecycle::_exitedInteractive_, uFieldFlagsStatic,
        ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()), (uintptr_t)&::g::FuseJS::Lifecycle::_foreground_, uFieldFlagsStatic,
        Lifecycle_typeof(), (uintptr_t)&::g::FuseJS::Lifecycle::_instance_, uFieldFlagsStatic,
        ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()), (uintptr_t)&::g::FuseJS::Lifecycle::_interactive_, uFieldFlagsStatic,
        ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()), (uintptr_t)&::g::FuseJS::Lifecycle::_state_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Lifecycle__New2_fn, 0, true, Lifecycle_typeof(), 0));
}

::g::Fuse::Scripting::NativeModule_type* Lifecycle_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 14;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Lifecycle);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("FuseJS.Lifecycle", options);
    type->fp_build_ = Lifecycle_build;
    type->fp_ctor_ = (void*)Lifecycle__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public Lifecycle() :145
void Lifecycle__ctor_2_fn(Lifecycle* __this)
{
    __this->ctor_2();
}

// private static int Converter(Fuse.Scripting.Context context, int state) :293
void Lifecycle__Converter_fn(::g::Fuse::Scripting::Context* context, int* state, int* __retval)
{
    *__retval = Lifecycle::Converter(context, *state);
}

// private static int GetApplicationStateBackground() :175
void Lifecycle__GetApplicationStateBackground_fn(int* __retval)
{
    *__retval = Lifecycle::GetApplicationStateBackground();
}

// private static int GetApplicationStateForeground() :183
void Lifecycle__GetApplicationStateForeground_fn(int* __retval)
{
    *__retval = Lifecycle::GetApplicationStateForeground();
}

// private static int GetApplicationStateInteractive() :191
void Lifecycle__GetApplicationStateInteractive_fn(int* __retval)
{
    *__retval = Lifecycle::GetApplicationStateInteractive();
}

// private static int GetCurrentState() :207
void Lifecycle__GetCurrentState_fn(int* __retval)
{
    *__retval = Lifecycle::GetCurrentState();
}

// public Lifecycle New() :145
void Lifecycle__New2_fn(Lifecycle** __retval)
{
    *__retval = Lifecycle::New2();
}

// private static void OnEnteringBackground(Fuse.Platform.ApplicationState newState) :286
void Lifecycle__OnEnteringBackground_fn(int* newState)
{
    Lifecycle::OnEnteringBackground(*newState);
}

// private static void OnEnteringForeground(Fuse.Platform.ApplicationState newState) :232
void Lifecycle__OnEnteringForeground_fn(int* newState)
{
    Lifecycle::OnEnteringForeground(*newState);
}

// private static void OnEnteringInteractive(Fuse.Platform.ApplicationState newState) :250
void Lifecycle__OnEnteringInteractive_fn(int* newState)
{
    Lifecycle::OnEnteringInteractive(*newState);
}

// private static void OnExitedInteractive(Fuse.Platform.ApplicationState newState) :268
void Lifecycle__OnExitedInteractive_fn(int* newState)
{
    Lifecycle::OnExitedInteractive(*newState);
}

// private static void OnJsInitialized(object sender, Uno.EventArgs args) :212
void Lifecycle__OnJsInitialized_fn(uObject* sender, ::g::Uno::EventArgs* args)
{
    Lifecycle::OnJsInitialized(sender, args);
}

uSStrong< ::g::Fuse::Scripting::NativeProperty*> Lifecycle::_background_;
uSStrong< ::g::Fuse::Scripting::NativeEvent*> Lifecycle::_enteringBackground_;
uSStrong< ::g::Fuse::Scripting::NativeEvent*> Lifecycle::_enteringForeground_;
uSStrong< ::g::Fuse::Scripting::NativeEvent*> Lifecycle::_enteringInteractive_;
uSStrong< ::g::Fuse::Scripting::NativeEvent*> Lifecycle::_exitedInteractive_;
uSStrong< ::g::Fuse::Scripting::NativeProperty*> Lifecycle::_foreground_;
uSStrong<Lifecycle*> Lifecycle::_instance_;
uSStrong< ::g::Fuse::Scripting::NativeProperty*> Lifecycle::_interactive_;
uSStrong< ::g::Fuse::Scripting::NativeProperty*> Lifecycle::_state_;

// public Lifecycle() [instance] :145
void Lifecycle::ctor_2()
{
    uStackFrame __("FuseJS.Lifecycle", ".ctor()");
    ctor_1();

    if (Lifecycle::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(Lifecycle::_instance_ = this, ::STRINGS[29/*"FuseJS/Life...*/]);
    Lifecycle::_enteringForeground_ = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[30/*"onEnteringF...*/], true);
    Lifecycle::_enteringInteractive_ = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[31/*"onEnteringI...*/], true);
    Lifecycle::_exitedInteractive_ = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[32/*"onExitedInt...*/], true);
    Lifecycle::_enteringBackground_ = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[33/*"onEnteringB...*/], true);
    Lifecycle::_state_ = ((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[15/*Fuse.Scripting.NativeProperty<int, int>*/], ::STRINGS[34/*"state"*/], uDelegate::New(::TYPES[16/*Uno.Func<int>*/], (void*)Lifecycle__GetCurrentState_fn), NULL, uDelegate::New(::TYPES[17/*Fuse.Scripting.ValueConverter<int, int>*/], (void*)Lifecycle__Converter_fn)));
    Lifecycle::_background_ = ((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[15/*Fuse.Scripting.NativeProperty<int, int>*/], ::STRINGS[35/*"BACKGROUND"*/], uDelegate::New(::TYPES[16/*Uno.Func<int>*/], (void*)Lifecycle__GetApplicationStateBackground_fn), NULL, NULL));
    Lifecycle::_foreground_ = ((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[15/*Fuse.Scripting.NativeProperty<int, int>*/], ::STRINGS[36/*"FOREGROUND"*/], uDelegate::New(::TYPES[16/*Uno.Func<int>*/], (void*)Lifecycle__GetApplicationStateForeground_fn), NULL, NULL));
    Lifecycle::_interactive_ = ((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[15/*Fuse.Scripting.NativeProperty<int, int>*/], ::STRINGS[37/*"INTERACTIVE"*/], uDelegate::New(::TYPES[16/*Uno.Func<int>*/], (void*)Lifecycle__GetApplicationStateInteractive_fn), NULL, NULL));
    AddMember(Lifecycle::_state_);
    AddMember(Lifecycle::_enteringForeground_);
    AddMember(Lifecycle::_enteringInteractive_);
    AddMember(Lifecycle::_exitedInteractive_);
    AddMember(Lifecycle::_enteringBackground_);
    AddMember(Lifecycle::_background_);
    AddMember(Lifecycle::_foreground_);
    AddMember(Lifecycle::_interactive_);
    add_Evaluated(uDelegate::New(::TYPES[18/*Uno.EventHandler*/], (void*)Lifecycle__OnJsInitialized_fn));
}

// private static int Converter(Fuse.Scripting.Context context, int state) [static] :293
int Lifecycle::Converter(::g::Fuse::Scripting::Context* context, int state)
{
    uStackFrame __("FuseJS.Lifecycle", "Converter(Fuse.Scripting.Context,int)");
    return state;
}

// private static int GetApplicationStateBackground() [static] :175
int Lifecycle::GetApplicationStateBackground()
{
    uStackFrame __("FuseJS.Lifecycle", "GetApplicationStateBackground()");
    return 1;
}

// private static int GetApplicationStateForeground() [static] :183
int Lifecycle::GetApplicationStateForeground()
{
    uStackFrame __("FuseJS.Lifecycle", "GetApplicationStateForeground()");
    return 2;
}

// private static int GetApplicationStateInteractive() [static] :191
int Lifecycle::GetApplicationStateInteractive()
{
    uStackFrame __("FuseJS.Lifecycle", "GetApplicationStateInteractive()");
    return 3;
}

// private static int GetCurrentState() [static] :207
int Lifecycle::GetCurrentState()
{
    uStackFrame __("FuseJS.Lifecycle", "GetCurrentState()");
    return ::g::Fuse::Platform::Lifecycle::State();
}

// public Lifecycle New() [static] :145
Lifecycle* Lifecycle::New2()
{
    Lifecycle* obj1 = (Lifecycle*)uNew(Lifecycle_typeof());
    obj1->ctor_2();
    return obj1;
}

// private static void OnEnteringBackground(Fuse.Platform.ApplicationState newState) [static] :286
void Lifecycle::OnEnteringBackground(int newState)
{
    uStackFrame __("FuseJS.Lifecycle", "OnEnteringBackground(Fuse.Platform.ApplicationState)");
    ::g::Fuse::Scripting::NativeEvent* handler = Lifecycle::_enteringBackground_;

    if (handler != NULL)
        uPtr(Lifecycle::_enteringBackground_)->RaiseAsync(uArray::New(::TYPES[19/*object[]*/], 0));
}

// private static void OnEnteringForeground(Fuse.Platform.ApplicationState newState) [static] :232
void Lifecycle::OnEnteringForeground(int newState)
{
    uStackFrame __("FuseJS.Lifecycle", "OnEnteringForeground(Fuse.Platform.ApplicationState)");
    ::g::Fuse::Scripting::NativeEvent* handler = Lifecycle::_enteringForeground_;

    if (handler != NULL)
        uPtr(Lifecycle::_enteringForeground_)->RaiseAsync(uArray::New(::TYPES[19/*object[]*/], 0));
}

// private static void OnEnteringInteractive(Fuse.Platform.ApplicationState newState) [static] :250
void Lifecycle::OnEnteringInteractive(int newState)
{
    uStackFrame __("FuseJS.Lifecycle", "OnEnteringInteractive(Fuse.Platform.ApplicationState)");
    ::g::Fuse::Scripting::NativeEvent* handler = Lifecycle::_enteringInteractive_;

    if (handler != NULL)
        uPtr(Lifecycle::_enteringInteractive_)->RaiseAsync(uArray::New(::TYPES[19/*object[]*/], 0));
}

// private static void OnExitedInteractive(Fuse.Platform.ApplicationState newState) [static] :268
void Lifecycle::OnExitedInteractive(int newState)
{
    uStackFrame __("FuseJS.Lifecycle", "OnExitedInteractive(Fuse.Platform.ApplicationState)");
    ::g::Fuse::Scripting::NativeEvent* handler = Lifecycle::_exitedInteractive_;

    if (handler != NULL)
        uPtr(Lifecycle::_exitedInteractive_)->RaiseAsync(uArray::New(::TYPES[19/*object[]*/], 0));
}

// private static void OnJsInitialized(object sender, Uno.EventArgs args) [static] :212
void Lifecycle::OnJsInitialized(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("FuseJS.Lifecycle", "OnJsInitialized(object,Uno.EventArgs)");
    ::g::Fuse::Platform::Lifecycle::add_EnteringForeground(uDelegate::New(::TYPES[20/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)Lifecycle__OnEnteringForeground_fn));
    ::g::Fuse::Platform::Lifecycle::add_EnteringInteractive(uDelegate::New(::TYPES[20/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)Lifecycle__OnEnteringInteractive_fn));
    ::g::Fuse::Platform::Lifecycle::add_ExitedInteractive(uDelegate::New(::TYPES[20/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)Lifecycle__OnExitedInteractive_fn));
    ::g::Fuse::Platform::Lifecycle::add_EnteringBackground(uDelegate::New(::TYPES[20/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)Lifecycle__OnEnteringBackground_fn));
}
// }

// /usr/local/share/uno/Packages/FuseJS/0.40.8/$.uno
// -------------------------------------------------

// internal sealed class RaiseEvent :713
// {
static void RaiseEvent_build(uType* type)
{
    ::STRINGS[38] = uString::Const("Cannot find message with name: ");
    ::STRINGS[39] = uString::Const("/usr/local/share/uno/Packages/FuseJS/0.40.8/$.uno");
    ::STRINGS[40] = uString::Const("Raise");
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof()), offsetof(::g::FuseJS::RaiseEvent, Args), 0,
        ::g::Uno::String_typeof(), offsetof(::g::FuseJS::RaiseEvent, Name), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::FuseJS::RaiseEvent, Source), 0);
}

uType* RaiseEvent_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(RaiseEvent);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("FuseJS.RaiseEvent", options);
    type->fp_build_ = RaiseEvent_build;
    type->fp_ctor_ = (void*)RaiseEvent__New1_fn;
    return type;
}

// public generated RaiseEvent() :713
void RaiseEvent__ctor__fn(RaiseEvent* __this)
{
    __this->ctor_();
}

// public generated RaiseEvent New() :713
void RaiseEvent__New1_fn(RaiseEvent** __retval)
{
    *__retval = RaiseEvent::New1();
}

// public void Raise() :720
void RaiseEvent__Raise_fn(RaiseEvent* __this)
{
    __this->Raise();
}

// public generated RaiseEvent() [instance] :713
void RaiseEvent::ctor_()
{
}

// public void Raise() [instance] :720
void RaiseEvent::Raise()
{
    uStackFrame __("FuseJS.RaiseEvent", "Raise()");
    ::g::Fuse::UserEventDispatch* dispatch = ::g::Fuse::UserEventDispatch::GetByName(::g::Uno::UX::Selector__op_Implicit(Name));

    if (dispatch == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(::STRINGS[38/*"Cannot find...*/], Name), this, ::STRINGS[39/*"/usr/local/...*/], 725, ::STRINGS[40/*"Raise"*/]);
        return;
    }

    uPtr(dispatch)->DirectRaise(Source, Args);
}

// public generated RaiseEvent New() [static] :713
RaiseEvent* RaiseEvent::New1()
{
    RaiseEvent* obj1 = (RaiseEvent*)uNew(RaiseEvent_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseJS/0.40.8/$.uno
// -------------------------------------------------

// private sealed class Bundle.ReadClosure :628
// {
static void Bundle__ReadClosure_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::FuseJS::Bundle__ReadClosure, _filename), 0);
}

uType* Bundle__ReadClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Bundle__ReadClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("FuseJS.Bundle.ReadClosure", options);
    type->fp_build_ = Bundle__ReadClosure_build;
    return type;
}

// public ReadClosure(string filename) :632
void Bundle__ReadClosure__ctor__fn(Bundle__ReadClosure* __this, uString* filename)
{
    __this->ctor_(filename);
}

// public string Invoke() :637
void Bundle__ReadClosure__Invoke_fn(Bundle__ReadClosure* __this, uString** __retval)
{
    *__retval = __this->Invoke();
}

// public ReadClosure New(string filename) :632
void Bundle__ReadClosure__New1_fn(uString* filename, Bundle__ReadClosure** __retval)
{
    *__retval = Bundle__ReadClosure::New1(filename);
}

// public ReadClosure(string filename) [instance] :632
void Bundle__ReadClosure::ctor_(uString* filename)
{
    uStackFrame __("FuseJS.Bundle.ReadClosure", ".ctor(string)");
    _filename = filename;
}

// public string Invoke() [instance] :637
uString* Bundle__ReadClosure::Invoke()
{
    uStackFrame __("FuseJS.Bundle.ReadClosure", "Invoke()");
    return ::g::FuseJS::Bundle::Read1(_filename);
}

// public ReadClosure New(string filename) [static] :632
Bundle__ReadClosure* Bundle__ReadClosure::New1(uString* filename)
{
    Bundle__ReadClosure* obj1 = (Bundle__ReadClosure*)uNew(Bundle__ReadClosure_typeof());
    obj1->ctor_(filename);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseJS/0.40.8/$.uno
// -------------------------------------------------

// public sealed class UserEvents :735
// {
static void UserEvents_build(uType* type)
{
    ::STRINGS[41] = uString::Const("FuseJS/UserEvents");
    ::STRINGS[42] = uString::Const("raise");
    ::STRINGS[43] = uString::Const("The FuseJS/UserEvents `Raise` function is deprecated. Use the `object.raise` on a named event instead.");
    ::STRINGS[39] = uString::Const("/usr/local/share/uno/Packages/FuseJS/0.40.8/$.uno");
    ::STRINGS[40] = uString::Const("Raise");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[21] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[22] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof());
    ::TYPES[23] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(5,
        UserEvents_typeof(), (uintptr_t)&::g::FuseJS::UserEvents::_instance_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::FuseJS::UserEvents::_warn_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)UserEvents__New2_fn, 0, true, UserEvents_typeof(), 0),
        new uFunction("Raise", NULL, (void*)UserEvents__Raise_fn, 0, true, uObject_typeof(), 2, ::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array()));
}

::g::Fuse::Scripting::NativeModule_type* UserEvents_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(UserEvents);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("FuseJS.UserEvents", options);
    type->fp_build_ = UserEvents_build;
    type->fp_ctor_ = (void*)UserEvents__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public UserEvents() :738
void UserEvents__ctor_2_fn(UserEvents* __this)
{
    __this->ctor_2();
}

// public UserEvents New() :738
void UserEvents__New2_fn(UserEvents** __retval)
{
    *__retval = UserEvents::New2();
}

// public static object Raise(Fuse.Scripting.Context context, object[] args) :751
void UserEvents__Raise_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = UserEvents::Raise(context, args);
}

uSStrong<UserEvents*> UserEvents::_instance_;
bool UserEvents::_warn_;

// public UserEvents() [instance] :738
void UserEvents::ctor_2()
{
    uStackFrame __("FuseJS.UserEvents", ".ctor()");
    ctor_1();

    if (UserEvents::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(UserEvents::_instance_ = this, ::STRINGS[41/*"FuseJS/User...*/]);
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[42/*"raise"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)UserEvents__Raise_fn)));
}

// public UserEvents New() [static] :738
UserEvents* UserEvents::New2()
{
    UserEvents* obj4 = (UserEvents*)uNew(UserEvents_typeof());
    obj4->ctor_2();
    return obj4;
}

// public static object Raise(Fuse.Scripting.Context context, object[] args) [static] :751
uObject* UserEvents::Raise(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("FuseJS.UserEvents", "Raise(Fuse.Scripting.Context,object[])");

    if (!UserEvents::_warn_)
    {
        ::g::Fuse::Diagnostics::Deprecated(::STRINGS[43/*"The FuseJS/...*/], context, ::STRINGS[39/*"/usr/local/...*/], 756, ::STRINGS[40/*"Raise"*/]);
        UserEvents::_warn_ = true;
    }

    uString* eventName = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);
    ::g::Uno::Collections::Dictionary* postArgs = NULL;
    ::g::Fuse::Scripting::Object* p = (args->Length() > 1) ? uAs< ::g::Fuse::Scripting::Object*>(args->Strong<uObject*>(1), ::TYPES[21/*Fuse.Scripting.Object*/]) : NULL;

    if (p != NULL)
    {
        uArray* keys = uPtr(p)->Keys();
        postArgs = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[22/*Uno.Collections.Dictionary<string, object>*/]);

        for (int index2 = 0, length3 = uPtr(keys)->Length(); index2 < length3; ++index2)
        {
            uString* key = uPtr(keys)->Strong<uString*>(index2);
            ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(postArgs), key, uPtr(p)->Item(key));
        }
    }

    ::g::FuseJS::RaiseEvent* re = ::g::FuseJS::RaiseEvent::New1();
    re->Source = NULL;
    re->Name = eventName;
    re->Args = postArgs;
    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[23/*Uno.Action*/], (void*)::g::FuseJS::RaiseEvent__Raise_fn, re));
    return NULL;
}
// }

}} // ::g::FuseJS
