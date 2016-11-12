// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JavaObjectHelper.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Drawing.ResampleMode.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.AlignmentHelpers.h>
#include <Fuse.Elements.StretchDirection.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Elements.StretchSizing.h>
#include <Fuse.Internal.AndroidSystemFont.Alias.h>
#include <Fuse.Internal.AndroidSystemFont.Family.h>
#include <Fuse.Internal.AndroidSystemFont.FontDescriptor.h>
#include <Fuse.Internal.AndroidSystemFont.h>
#include <Fuse.Internal.Blender-1.h>
#include <Fuse.Internal.BlenderMap.h>
#include <Fuse.Internal.DoubleBlender.h>
#include <Fuse.Internal.Float2Blender.h>
#include <Fuse.Internal.Float3Blender.h>
#include <Fuse.Internal.Float4Blender.h>
#include <Fuse.Internal.FloatBlender.h>
#include <Fuse.Internal.FontFaceDescriptor.h>
#include <Fuse.Internal.FrustumMatrix.h>
#include <Fuse.Internal.FuseConfig.h>
#include <Fuse.Internal.IImageContainerOwner.h>
#include <Fuse.Internal.ImageContainer.h>
#include <Fuse.Internal.MiniList-1.h>
#include <Fuse.Internal.ScalarBlender-1.h>
#include <Fuse.Internal.Size2Blender.h>
#include <Fuse.Internal.SizeBlender.h>
#include <Fuse.Internal.SizingContainer.h>
#include <Fuse.Internal.Statistics.h>
#include <Fuse.Internal.SystemFont.h>
#include <Fuse.Internal.VectorUtil.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.Resources.FileImageSource.h>
#include <Fuse.Resources.HttpImageSource.h>
#include <Fuse.Resources.ImageSource.h>
#include <Fuse.Resources.ImageSourceErrorArgs.h>
#include <Fuse.Resources.ImageSourceErrorHandler.h>
#include <Fuse.Resources.MemoryPolicy.h>
#include <Fuse.Resources.MultiDensityImageSource.h>
#include <Fuse.Resources.SystemFileSource.h>
#include <Fuse.SystemFont.Style.h>
#include <Fuse.SystemFont.Weight.h>
#include <jni.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.HashSet-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.ObservableList-1.h>
#include <Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.IndexOutOfRangeException.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IO.File.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Predicate-1.h>
#include <Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Size2.h>
#include <Uno.UX.Unit.h>
#include <Uno.Vector.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[4];
static uType* TYPES[33];

namespace g{
namespace Fuse{
namespace Internal{

// /usr/local/share/uno/Packages/FuseCore/0.40.8/internal/$.uno
// ------------------------------------------------------------

// private struct AndroidSystemFont.Alias :45
// {
static void AndroidSystemFont__Alias_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Internal::AndroidSystemFont__Alias, To), 0,
        ::g::Fuse::SystemFont__Weight_typeof(), offsetof(::g::Fuse::Internal::AndroidSystemFont__Alias, Weight), 0);
}

uStructType* AndroidSystemFont__Alias_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(AndroidSystemFont__Alias);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Internal.AndroidSystemFont.Alias", options);
    type->fp_build_ = AndroidSystemFont__Alias_build;
    return type;
}

// public Alias(string to, Fuse.SystemFont.Weight weight) :50
void AndroidSystemFont__Alias__ctor__fn(AndroidSystemFont__Alias* __this, uString* to, int* weight)
{
    __this->ctor_(to, *weight);
}

// public Alias New(string to, Fuse.SystemFont.Weight weight) :50
void AndroidSystemFont__Alias__New1_fn(uString* to, int* weight, AndroidSystemFont__Alias* __retval)
{
    *__retval = AndroidSystemFont__Alias__New1(to, *weight);
}

// public Alias(string to, Fuse.SystemFont.Weight weight) [instance] :50
void AndroidSystemFont__Alias::ctor_(uString* to, int weight)
{
    uStackFrame __("Fuse.Internal.AndroidSystemFont.Alias", ".ctor(string,Fuse.SystemFont.Weight)");
    To = to;
    Weight = weight;
}

// public Alias New(string to, Fuse.SystemFont.Weight weight) [static] :50
AndroidSystemFont__Alias AndroidSystemFont__Alias__New1(uString* to, int weight)
{
    AndroidSystemFont__Alias obj1;
    obj1.ctor_(to, weight);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/internal/$.uno
// ------------------------------------------------------------

// internal static extern class AndroidSystemFont :13
// {
static void AndroidSystemFont_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::String_typeof();
    ::TYPES[1] = ::g::Uno::Collections::List_typeof()->MakeType(AndroidSystemFont__Family_typeof());
    ::TYPES[2] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), AndroidSystemFont__Alias_typeof());
    ::TYPES[3] = ::g::Uno::Collections::HashSet_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[4] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[5] = ::g::Uno::String_typeof()->Array();
    ::TYPES[6] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Internal::FontFaceDescriptor_typeof());
    ::TYPES[7] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(AndroidSystemFont__Family_typeof());
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), AndroidSystemFont__Alias_typeof()), (uintptr_t)&::g::Fuse::Internal::AndroidSystemFont::_aliases_, uFieldFlagsStatic,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Internal::FontFaceDescriptor_typeof()), (uintptr_t)&::g::Fuse::Internal::AndroidSystemFont::_default_, uFieldFlagsStatic,
        ::g::Uno::Collections::List_typeof()->MakeType(AndroidSystemFont__Family_typeof()), (uintptr_t)&::g::Fuse::Internal::AndroidSystemFont::_families_, uFieldFlagsStatic,
        ::g::Uno::Collections::HashSet_typeof()->MakeType(::g::Uno::String_typeof()), (uintptr_t)&::g::Fuse::Internal::AndroidSystemFont::_familyNames_, uFieldFlagsStatic);
}

uClassType* AndroidSystemFont_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Internal.AndroidSystemFont", options);
    type->fp_build_ = AndroidSystemFont_build;
    return type;
}

// private static void AddAlias(string name, string to, int weight) :223
void AndroidSystemFont__AddAlias_fn(uString* name, uString* to, int* weight)
{
    AndroidSystemFont::AddAlias(name, to, *weight);
}

// private static void AddFamily(string name, string language, string variant) :202
void AndroidSystemFont__AddFamily_fn(uString* name, uString* language, uString* variant)
{
    AndroidSystemFont::AddFamily(name, language, variant);
}

// private static void AddFont(string path, int weight, bool isItalic) :212
void AndroidSystemFont__AddFont_fn(uString* path, int* weight, bool* isItalic)
{
    AndroidSystemFont::AddFont(path, *weight, *isItalic);
}

// private static void AddFonts() :167
void AndroidSystemFont__AddFonts_fn()
{
    AndroidSystemFont::AddFonts();
}

// public static Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> get_Default() :66
void AndroidSystemFont__get_Default_fn(::g::Uno::Collections::List** __retval)
{
    *__retval = AndroidSystemFont::Default();
}

// private static void EnsureFontsAdded() :155
void AndroidSystemFont__EnsureFontsAdded_fn()
{
    AndroidSystemFont::EnsureFontsAdded();
}

// public static Uno.Collections.HashSet<string> get_Families() :80
void AndroidSystemFont__get_Families_fn(::g::Uno::Collections::HashSet** __retval)
{
    *__retval = AndroidSystemFont::Families();
}

// private static Fuse.Internal.FontFaceDescriptor Get(Fuse.Internal.AndroidSystemFont.Family family, Fuse.SystemFont.Style style, Fuse.SystemFont.Weight weight) :130
void AndroidSystemFont__Get_fn(AndroidSystemFont__Family* family, int* style, int* weight, ::g::Fuse::Internal::FontFaceDescriptor** __retval)
{
    *__retval = AndroidSystemFont::Get(*family, *style, *weight);
}

// public static Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> Get(string familyName, Fuse.SystemFont.Style style, Fuse.SystemFont.Weight weight) :95
void AndroidSystemFont__Get1_fn(uString* familyName, int* style, int* weight, ::g::Uno::Collections::List** __retval)
{
    *__retval = AndroidSystemFont::Get1(familyName, *style, *weight);
}

// public static Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> GetFallback(Uno.UX.FileSource file) :87
void AndroidSystemFont__GetFallback_fn(::g::Uno::UX::FileSource* file, ::g::Uno::Collections::List** __retval)
{
    *__retval = AndroidSystemFont::GetFallback(file);
}

// private static void ThrowUno(string message) :197
void AndroidSystemFont__ThrowUno_fn(uString* message)
{
    AndroidSystemFont::ThrowUno(message);
}

// private static Fuse.SystemFont.Weight ToWeight(int w) :221
void AndroidSystemFont__ToWeight_fn(int* w, int* __retval)
{
    *__retval = AndroidSystemFont::ToWeight(*w);
}

uSStrong< ::g::Uno::Collections::Dictionary*> AndroidSystemFont::_aliases_;
uSStrong< ::g::Uno::Collections::List*> AndroidSystemFont::_default_;
uSStrong< ::g::Uno::Collections::List*> AndroidSystemFont::_families_;
uSStrong< ::g::Uno::Collections::HashSet*> AndroidSystemFont::_familyNames_;

// private static void AddAlias(string name, string to, int weight) [static] :223
void AndroidSystemFont::AddAlias(uString* name, uString* to, int weight)
{
    uStackFrame __("Fuse.Internal.AndroidSystemFont", "AddAlias(string,string,int)");
    bool ret2;
    bool ret3;
    bool ret4;

    if (::g::Uno::String::op_Inequality(name, NULL) && !(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(AndroidSystemFont::_aliases_), name, &ret2), ret2))
    {
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(AndroidSystemFont::_aliases_), name, uCRef(AndroidSystemFont__Alias__New1(to, AndroidSystemFont::ToWeight(weight))));

        if (!(::g::Uno::Collections::HashSet__Contains_fn(uPtr(AndroidSystemFont::_familyNames_), name, &ret3), ret3))
            ::g::Uno::Collections::HashSet__Add_fn(uPtr(AndroidSystemFont::_familyNames_), name, &ret4);
    }
}

// private static void AddFamily(string name, string language, string variant) [static] :202
void AndroidSystemFont::AddFamily(uString* name, uString* language, uString* variant)
{
    uStackFrame __("Fuse.Internal.AndroidSystemFont", "AddFamily(string,string,string)");
    bool ret5;
    bool ret6;
    uString* lowerName = ::g::Uno::String::op_Equality(name, NULL) ? uCast<uString*>(NULL, ::TYPES[0/*string*/]) : (uString*)::g::Uno::String::ToLower(uPtr(name));
    ::g::Uno::Collections::List__Add_fn(uPtr(AndroidSystemFont::_families_), uCRef(AndroidSystemFont__Family__New1(lowerName, language, variant)));

    if (::g::Uno::String::op_Inequality(lowerName, NULL) && !(::g::Uno::Collections::HashSet__Contains_fn(uPtr(AndroidSystemFont::_familyNames_), lowerName, &ret5), ret5))
        ::g::Uno::Collections::HashSet__Add_fn(uPtr(AndroidSystemFont::_familyNames_), lowerName, &ret6);
}

// private static void AddFont(string path, int weight, bool isItalic) [static] :212
void AndroidSystemFont::AddFont(uString* path, int weight, bool isItalic)
{
    uStackFrame __("Fuse.Internal.AndroidSystemFont", "AddFont(string,int,bool)");
    AndroidSystemFont__Family ret7;
    ::g::Uno::Collections::List__Add_fn(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(AndroidSystemFont::_families_), uCRef<int>(uPtr(AndroidSystemFont::_families_)->Count() - 1), &ret7), ret7).Fonts), uCRef(AndroidSystemFont__FontDescriptor__New1(path, isItalic ? 1 : 0, AndroidSystemFont::ToWeight(weight))));
}

// private static void AddFonts() [static] :167
void AndroidSystemFont::AddFonts()
{
    uStackFrame __("Fuse.Internal.AndroidSystemFont", "AddFonts()");
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddFonts52", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void EnsureFontsAdded() [static] :155
void AndroidSystemFont::EnsureFontsAdded()
{
    uStackFrame __("Fuse.Internal.AndroidSystemFont", "EnsureFontsAdded()");

    if (AndroidSystemFont::_families_ == NULL)
    {
        AndroidSystemFont::_families_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[1/*Uno.Collections.List<Fuse.Internal.AndroidSystemFont.Family>*/]));
        AndroidSystemFont::_aliases_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[2/*Uno.Collections.Dictionary<string, Fuse.Internal.AndroidSystemFont.Alias>*/]));
        AndroidSystemFont::_familyNames_ = ((::g::Uno::Collections::HashSet*)::g::Uno::Collections::HashSet::New1(::TYPES[3/*Uno.Collections.HashSet<string>*/]));
        AndroidSystemFont::AddFonts();
    }
}

// private static Fuse.Internal.FontFaceDescriptor Get(Fuse.Internal.AndroidSystemFont.Family family, Fuse.SystemFont.Style style, Fuse.SystemFont.Weight weight) [static] :130
::g::Fuse::Internal::FontFaceDescriptor* AndroidSystemFont::Get(AndroidSystemFont__Family family, int style, int weight)
{
    uStackFrame __("Fuse.Internal.AndroidSystemFont", "Get(Fuse.Internal.AndroidSystemFont.Family,Fuse.SystemFont.Style,Fuse.SystemFont.Weight)");
    AndroidSystemFont__FontDescriptor ret8;
    AndroidSystemFont__FontDescriptor ret9;
    int lowestDiff = 2147483647;
    int lowestIndex = -1;

    for (int i = 0; i < uPtr(family.Fonts)->Count(); ++i)
    {
        AndroidSystemFont__FontDescriptor font = (::g::Uno::Collections::List__get_Item_fn(uPtr(family.Fonts), uCRef<int>(i), &ret8), ret8);

        if (::g::Uno::IO::File::Exists(font.FilePath))
        {
            int diff = (100 * ::g::Uno::Math::Abs5(style - font.Style)) + ::g::Uno::Math::Abs5(weight - font.Weight);

            if (diff < lowestDiff)
            {
                lowestDiff = diff;
                lowestIndex = i;

                if (diff == 0)
                    break;
            }
        }
    }

    if (lowestIndex >= 0)
        return ::g::Fuse::Internal::FontFaceDescriptor::New1(::g::Fuse::Resources::SystemFileSource::New1((::g::Uno::Collections::List__get_Item_fn(uPtr(family.Fonts), uCRef<int>(lowestIndex), &ret9), ret9).FilePath), (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[4/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<string>*/], uArray::New(::TYPES[5/*string[]*/], 0))));

    return NULL;
}

// public static Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> Get(string familyName, Fuse.SystemFont.Style style, Fuse.SystemFont.Weight weight) [static] :95
::g::Uno::Collections::List* AndroidSystemFont::Get1(uString* familyName, int style, int weight)
{
    uStackFrame __("Fuse.Internal.AndroidSystemFont", "Get(string,Fuse.SystemFont.Style,Fuse.SystemFont.Weight)");
    bool ret10;
    ::g::Uno::Collections::List__Enumerator<AndroidSystemFont__Family> ret11;
    AndroidSystemFont::EnsureFontsAdded();

    if (::g::Uno::String::op_Inequality(familyName, NULL))
    {
        AndroidSystemFont__Alias alias;

        if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(AndroidSystemFont::_aliases_), familyName, &alias, &ret10), ret10))
            return AndroidSystemFont::Get1(alias.To, style, weight);
    }

    ::g::Uno::Collections::List* result = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[6/*Uno.Collections.List<Fuse.Internal.FontFaceDescriptor>*/]);
    bool realMatch = false;

    for (::g::Uno::Collections::List__Enumerator<AndroidSystemFont__Family> enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(AndroidSystemFont::_families_), &ret11), ret11); enum1.MoveNext(::TYPES[7/*Uno.Collections.List<Fuse.Internal.AndroidSystemFont.Family>.Enumerator*/]); )
    {
        AndroidSystemFont__Family family = enum1.Current(::TYPES[7/*Uno.Collections.List<Fuse.Internal.AndroidSystemFont.Family>.Enumerator*/]);

        if ((::g::Uno::String::op_Equality(familyName, NULL) || ::g::Uno::String::op_Equality(family.Name, NULL)) || ::g::Uno::String::op_Equality(familyName, family.Name))
        {
            realMatch = realMatch || ::g::Uno::String::op_Equality(familyName, family.Name);
            ::g::Fuse::Internal::FontFaceDescriptor* descriptor = AndroidSystemFont::Get(family, style, weight);

            if (descriptor != NULL)
                ::g::Uno::Collections::List__Add_fn(uPtr(result), descriptor);
        }
    }

    if ((realMatch || (style != 0)) || (weight != 3))
        return result;
    else 
        return AndroidSystemFont::Default();
}

// public static Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> GetFallback(Uno.UX.FileSource file) [static] :87
::g::Uno::Collections::List* AndroidSystemFont::GetFallback(::g::Uno::UX::FileSource* file)
{
    uStackFrame __("Fuse.Internal.AndroidSystemFont", "GetFallback(Uno.UX.FileSource)");
    ::g::Uno::Collections::List* result = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[6/*Uno.Collections.List<Fuse.Internal.FontFaceDescriptor>*/]);
    ::g::Uno::Collections::List__Add_fn(result, ::g::Fuse::Internal::FontFaceDescriptor::New1(file, (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[4/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<string>*/], uArray::New(::TYPES[5/*string[]*/], 0)))));
    result->AddRange((uObject*)AndroidSystemFont::Get1(NULL, 0, 3));
    return result;
}

// private static void ThrowUno(string message) [static] :197
void AndroidSystemFont::ThrowUno(uString* message)
{
    uStackFrame __("Fuse.Internal.AndroidSystemFont", "ThrowUno(string)");
    U_THROW(::g::Uno::Exception::New2(message));
}

// private static Fuse.SystemFont.Weight ToWeight(int w) [static] :221
int AndroidSystemFont::ToWeight(int w)
{
    uStackFrame __("Fuse.Internal.AndroidSystemFont", "ToWeight(int)");
    return (w / 100) - 1;
}

// public static Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> get_Default() [static] :66
::g::Uno::Collections::List* AndroidSystemFont::Default()
{
    uStackFrame __("Fuse.Internal.AndroidSystemFont", "get_Default()");
    AndroidSystemFont__Family ret12;

    if (AndroidSystemFont::_default_ == NULL)
    {
        AndroidSystemFont::EnsureFontsAdded();

        if (uPtr(AndroidSystemFont::_families_)->Count() >= 1)
            AndroidSystemFont::_default_ = AndroidSystemFont::Get1((::g::Uno::Collections::List__get_Item_fn(uPtr(AndroidSystemFont::_families_), uCRef<int>(0), &ret12), ret12).Name, 0, 3);
    }

    return AndroidSystemFont::_default_;
}

// public static Uno.Collections.HashSet<string> get_Families() [static] :80
::g::Uno::Collections::HashSet* AndroidSystemFont::Families()
{
    uStackFrame __("Fuse.Internal.AndroidSystemFont", "get_Families()");
    AndroidSystemFont::EnsureFontsAdded();
    return AndroidSystemFont::_familyNames_;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/internal/$.uno
// ------------------------------------------------------------

// internal abstract class Blender<T> :299
// {
static void Blender_build(uType* type)
{
}

Blender_type* Blender_typeof()
{
    static uSStrong<Blender_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(Blender);
    options.TypeSize = sizeof(Blender_type);
    type = (Blender_type*)uClassType::New("Fuse.Internal.Blender`1", options);
    type->fp_build_ = Blender_build;
    return type;
}

// protected generated Blender() :299
void Blender__ctor__fn(Blender* __this)
{
    __this->ctor_();
}

// public double Distance(T a, T b) :316
void Blender__Distance_fn(Blender* __this, void* a, void* b, double* __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(Blender_typeof())->T(0),
    };
    uStackFrame __("Fuse.Internal.Blender`1", "Distance(T,T)");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    double ret1;
    return *__retval = (__this->Length_ex((__this->Sub_ex(a, b, &ret2), ret2), &ret1), ret1), void();
}

// public T ScalarMult(T v, double s) :322
void Blender__ScalarMult_fn(Blender* __this, void* v, double* s, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(Blender_typeof())->T(0),
    };
    uStackFrame __("Fuse.Internal.Blender`1", "ScalarMult(T,double)");
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    double s_ = *s;
    return __retval.Store((__this->Weight_ex(v, uCRef(s_), &ret3), ret3)), void();
}

// public T UnitWeight(T v, double w) :310
void Blender__UnitWeight_fn(Blender* __this, void* v, double* w, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(Blender_typeof())->T(0),
    };
    uStackFrame __("Fuse.Internal.Blender`1", "UnitWeight(T,double)");
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT unit(__types[0], U_ALLOCA(__types[0]->ValueSize));
    double w_ = *w;
    double l;
    unit = (__this->ToUnit_ex(v, &l, &ret4), ret4);
    return __retval.Store((__this->Weight_ex(unit, uCRef(w_), &ret5), ret5)), void();
}

// protected generated Blender() [instance] :299
void Blender::ctor_()
{
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/internal/$.uno
// ------------------------------------------------------------

// internal sealed class BlenderMap :246
// {
// static BlenderMap() :246
static void BlenderMap__cctor__fn(uType* __type)
{
    BlenderMap::_blenders_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[8/*Uno.Collections.Dictionary<Uno.Type, object>*/]));
    BlenderMap::_scalarBlenders_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[8/*Uno.Collections.Dictionary<Uno.Type, object>*/]));
}

static void BlenderMap_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Unsupported blender type: ");
    ::TYPES[8] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Type_typeof(), uObject_typeof());
    ::TYPES[9] = ::g::Uno::Type_typeof();
    ::TYPES[10] = ::g::Fuse::Internal::Blender_typeof();
    ::TYPES[11] = ::g::Fuse::Internal::ScalarBlender_typeof();
    type->SetPrecalc(
        ::g::Fuse::Internal::Blender_typeof()->MakeType(type->U(0)),
        ::g::Fuse::Internal::ScalarBlender_typeof()->MakeType(type->U(0)));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Type_typeof(), uObject_typeof()), (uintptr_t)&::g::Fuse::Internal::BlenderMap::_blenders_, uFieldFlagsStatic,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Type_typeof(), uObject_typeof()), (uintptr_t)&::g::Fuse::Internal::BlenderMap::_scalarBlenders_, uFieldFlagsStatic);
}

uType* BlenderMap_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.MethodTypeCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(BlenderMap);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Internal.BlenderMap", options);
    type->fp_build_ = BlenderMap_build;
    type->fp_ctor_ = (void*)BlenderMap__New1_fn;
    type->fp_cctor_ = BlenderMap__cctor__fn;
    return type;
}

// public generated BlenderMap() :246
void BlenderMap__ctor__fn(BlenderMap* __this)
{
    __this->ctor_();
}

// public static Fuse.Internal.Blender<T> Get<T>() :250
void BlenderMap__Get_fn(uType* __type, ::g::Fuse::Internal::Blender** __retval)
{
    *__retval = BlenderMap::Get(__type);
}

// public static Fuse.Internal.ScalarBlender<T> GetScalar<T>() :280
void BlenderMap__GetScalar_fn(uType* __type, ::g::Fuse::Internal::ScalarBlender** __retval)
{
    *__retval = BlenderMap::GetScalar(__type);
}

// public generated BlenderMap New() :246
void BlenderMap__New1_fn(BlenderMap** __retval)
{
    *__retval = BlenderMap::New1();
}

uSStrong< ::g::Uno::Collections::Dictionary*> BlenderMap::_blenders_;
uSStrong< ::g::Uno::Collections::Dictionary*> BlenderMap::_scalarBlenders_;

// public generated BlenderMap() [instance] :246
void BlenderMap::ctor_()
{
}

// public static Fuse.Internal.Blender<T> Get<T>() [static] :250
::g::Fuse::Internal::Blender* BlenderMap::Get(uType* __type)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Internal.Blender<T>*/),
    };
    uStackFrame __("Fuse.Internal.BlenderMap", "Get`1()");
    BlenderMap_typeof()->Init();
    bool ret2;
    uObject* blender;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(BlenderMap::_blenders()), __type->U(0), (void**)(&blender), &ret2), ret2))
    {
        if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::Float_typeof()))
            blender = ::g::Fuse::Internal::FloatBlender::New1();
        else  if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::Float2_typeof()))
            blender = ::g::Fuse::Internal::Float2Blender::New1();
        else  if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::Float3_typeof()))
            blender = ::g::Fuse::Internal::Float3Blender::New1();
        else  if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::Float4_typeof()))
            blender = ::g::Fuse::Internal::Float4Blender::New1();
        else  if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::Double_typeof()))
            blender = ::g::Fuse::Internal::DoubleBlender::New1();
        else  if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::UX::Size_typeof()))
            blender = ::g::Fuse::Internal::SizeBlender::New1();
        else  if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::UX::Size2_typeof()))
            blender = ::g::Fuse::Internal::Size2Blender::New1();
        else 
            U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[0/*"Unsupported...*/], __type->U(0))));

        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(BlenderMap::_blenders()), __type->U(0), blender);
    }

    return uCast< ::g::Fuse::Internal::Blender*>(blender, __types[0]);
}

// public static Fuse.Internal.ScalarBlender<T> GetScalar<T>() [static] :280
::g::Fuse::Internal::ScalarBlender* BlenderMap::GetScalar(uType* __type)
{
    uType* __types[] = {
        __type->Precalced(1/*Fuse.Internal.ScalarBlender<T>*/),
    };
    uStackFrame __("Fuse.Internal.BlenderMap", "GetScalar`1()");
    BlenderMap_typeof()->Init();
    bool ret3;
    uObject* blender;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(BlenderMap::_scalarBlenders()), __type->U(0), (void**)(&blender), &ret3), ret3))
    {
        if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::Float_typeof()))
            blender = ::g::Fuse::Internal::FloatBlender::New1();
        else  if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::Double_typeof()))
            blender = ::g::Fuse::Internal::DoubleBlender::New1();
        else 
            U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[0/*"Unsupported...*/], __type->U(0))));

        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(BlenderMap::_scalarBlenders()), __type->U(0), blender);
    }

    return uCast< ::g::Fuse::Internal::ScalarBlender*>(blender, __types[0]);
}

// public generated BlenderMap New() [static] :246
BlenderMap* BlenderMap::New1()
{
    BlenderMap* obj1 = (BlenderMap*)uNew(BlenderMap_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/internal/$.uno
// ------------------------------------------------------------

// internal sealed class DoubleBlender :384
// {
static void DoubleBlender_build(uType* type)
{
    type->SetBase(::g::Fuse::Internal::ScalarBlender_typeof()->MakeType(::g::Uno::Double_typeof()));
}

::g::Fuse::Internal::ScalarBlender_type* DoubleBlender_typeof()
{
    static uSStrong< ::g::Fuse::Internal::ScalarBlender_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Internal::ScalarBlender_typeof();
    options.ObjectSize = sizeof(DoubleBlender);
    options.TypeSize = sizeof(::g::Fuse::Internal::ScalarBlender_type);
    type = (::g::Fuse::Internal::ScalarBlender_type*)uClassType::New("Fuse.Internal.DoubleBlender", options);
    type->fp_build_ = DoubleBlender_build;
    type->fp_ctor_ = (void*)DoubleBlender__New1_fn;
    type->fp_Add = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))DoubleBlender__Add_fn;
    type->fp_FromDouble = (void(*)(::g::Fuse::Internal::ScalarBlender*, double*, uTRef))DoubleBlender__FromDouble_fn;
    type->fp_Length = (void(*)(::g::Fuse::Internal::Blender*, void*, double*))DoubleBlender__Length_fn;
    type->fp_Lerp = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, double*, uTRef))DoubleBlender__Lerp_fn;
    type->fp_get_One = (void(*)(::g::Fuse::Internal::Blender*, uTRef))DoubleBlender__get_One_fn;
    type->fp_Sub = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))DoubleBlender__Sub_fn;
    type->fp_ToDouble = (void(*)(::g::Fuse::Internal::ScalarBlender*, void*, double*))DoubleBlender__ToDouble_fn;
    type->fp_ToUnit = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))DoubleBlender__ToUnit_fn;
    type->fp_Weight = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))DoubleBlender__Weight_fn;
    type->fp_get_Zero = (void(*)(::g::Fuse::Internal::Blender*, uTRef))DoubleBlender__get_Zero_fn;
    return type;
}

// public generated DoubleBlender() :384
void DoubleBlender__ctor_2_fn(DoubleBlender* __this)
{
    __this->ctor_2();
}

// public override sealed double Add(double a, double b) :387
void DoubleBlender__Add_fn(DoubleBlender* __this, double* a, double* b, double* __retval)
{
    uStackFrame __("Fuse.Internal.DoubleBlender", "Add(double,double)");
    double a_ = *a;
    double b_ = *b;
    return *__retval = a_ + b_, void();
}

// public override sealed double FromDouble(double a) :399
void DoubleBlender__FromDouble_fn(DoubleBlender* __this, double* a, double* __retval)
{
    uStackFrame __("Fuse.Internal.DoubleBlender", "FromDouble(double)");
    double a_ = *a;
    return *__retval = a_, void();
}

// public override sealed double Length(double a) :397
void DoubleBlender__Length_fn(DoubleBlender* __this, double* a, double* __retval)
{
    uStackFrame __("Fuse.Internal.DoubleBlender", "Length(double)");
    double a_ = *a;
    return *__retval = ::g::Uno::Math::Abs(a_), void();
}

// public override sealed double Lerp(double a, double b, double d) :389
void DoubleBlender__Lerp_fn(DoubleBlender* __this, double* a, double* b, double* d, double* __retval)
{
    uStackFrame __("Fuse.Internal.DoubleBlender", "Lerp(double,double,double)");
    double a_ = *a;
    double b_ = *b;
    double d_ = *d;
    return *__retval = a_ + ((b_ - a_) * d_), void();
}

// public generated DoubleBlender New() :384
void DoubleBlender__New1_fn(DoubleBlender** __retval)
{
    *__retval = DoubleBlender::New1();
}

// public override sealed double get_One() :391
void DoubleBlender__get_One_fn(DoubleBlender* __this, double* __retval)
{
    uStackFrame __("Fuse.Internal.DoubleBlender", "get_One()");
    return *__retval = 1.0, void();
}

// public override sealed double Sub(double a, double b) :388
void DoubleBlender__Sub_fn(DoubleBlender* __this, double* a, double* b, double* __retval)
{
    uStackFrame __("Fuse.Internal.DoubleBlender", "Sub(double,double)");
    double a_ = *a;
    double b_ = *b;
    return *__retval = a_ - b_, void();
}

// public override sealed double ToDouble(double a) :398
void DoubleBlender__ToDouble_fn(DoubleBlender* __this, double* a, double* __retval)
{
    uStackFrame __("Fuse.Internal.DoubleBlender", "ToDouble(double)");
    double a_ = *a;
    return *__retval = a_, void();
}

// public override sealed double ToUnit(double a, double& length) :392
void DoubleBlender__ToUnit_fn(DoubleBlender* __this, double* a, double* length, double* __retval)
{
    uStackFrame __("Fuse.Internal.DoubleBlender", "ToUnit(double,double&)");
    double a_ = *a;
    *length = ::g::Uno::Math::Abs(a_);
    return *__retval = (double)((a_ < 0.0) ? -1 : 1), void();
}

// public override sealed double Weight(double v, double w) :386
void DoubleBlender__Weight_fn(DoubleBlender* __this, double* v, double* w, double* __retval)
{
    uStackFrame __("Fuse.Internal.DoubleBlender", "Weight(double,double)");
    double v_ = *v;
    double w_ = *w;
    return *__retval = v_ * w_, void();
}

// public override sealed double get_Zero() :390
void DoubleBlender__get_Zero_fn(DoubleBlender* __this, double* __retval)
{
    uStackFrame __("Fuse.Internal.DoubleBlender", "get_Zero()");
    return *__retval = 0.0, void();
}

// public generated DoubleBlender() [instance] :384
void DoubleBlender::ctor_2()
{
    uStackFrame __("Fuse.Internal.DoubleBlender", ".ctor()");
    ctor_1();
}

// public generated DoubleBlender New() [static] :384
DoubleBlender* DoubleBlender::New1()
{
    DoubleBlender* obj1 = (DoubleBlender*)uNew(DoubleBlender_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/internal/$.uno
// ------------------------------------------------------------

// private struct AndroidSystemFont.Family :15
// {
static void AndroidSystemFont__Family_build(uType* type)
{
    ::TYPES[12] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Internal::AndroidSystemFont__FontDescriptor_typeof());
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Internal::AndroidSystemFont__Family, Name), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Internal::AndroidSystemFont__Family, Language), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Internal::AndroidSystemFont__Family, Variant), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Internal::AndroidSystemFont__FontDescriptor_typeof()), offsetof(::g::Fuse::Internal::AndroidSystemFont__Family, Fonts), 0);
}

uStructType* AndroidSystemFont__Family_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ValueSize = sizeof(AndroidSystemFont__Family);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Internal.AndroidSystemFont.Family", options);
    type->fp_build_ = AndroidSystemFont__Family_build;
    return type;
}

// public Family(string name, string language, string variant) :22
void AndroidSystemFont__Family__ctor__fn(AndroidSystemFont__Family* __this, uString* name, uString* language, uString* variant)
{
    __this->ctor_(name, language, variant);
}

// public Family New(string name, string language, string variant) :22
void AndroidSystemFont__Family__New1_fn(uString* name, uString* language, uString* variant, AndroidSystemFont__Family* __retval)
{
    *__retval = AndroidSystemFont__Family__New1(name, language, variant);
}

// public Family(string name, string language, string variant) [instance] :22
void AndroidSystemFont__Family::ctor_(uString* name, uString* language, uString* variant)
{
    uStackFrame __("Fuse.Internal.AndroidSystemFont.Family", ".ctor(string,string,string)");
    Name = name;
    Language = language;
    Variant = variant;
    Fonts = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[12/*Uno.Collections.List<Fuse.Internal.AndroidSystemFont.FontDescriptor>*/]));
}

// public Family New(string name, string language, string variant) [static] :22
AndroidSystemFont__Family AndroidSystemFont__Family__New1(uString* name, uString* language, uString* variant)
{
    AndroidSystemFont__Family obj1;
    obj1.ctor_(name, language, variant);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/internal/$.uno
// ------------------------------------------------------------

// internal sealed class Float2Blender :402
// {
static void Float2Blender_build(uType* type)
{
    type->SetBase(::g::Fuse::Internal::Blender_typeof()->MakeType(::g::Uno::Float2_typeof()));
}

::g::Fuse::Internal::Blender_type* Float2Blender_typeof()
{
    static uSStrong< ::g::Fuse::Internal::Blender_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Internal::Blender_typeof();
    options.ObjectSize = sizeof(Float2Blender);
    options.TypeSize = sizeof(::g::Fuse::Internal::Blender_type);
    type = (::g::Fuse::Internal::Blender_type*)uClassType::New("Fuse.Internal.Float2Blender", options);
    type->fp_build_ = Float2Blender_build;
    type->fp_ctor_ = (void*)Float2Blender__New1_fn;
    type->fp_Add = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))Float2Blender__Add_fn;
    type->fp_Length = (void(*)(::g::Fuse::Internal::Blender*, void*, double*))Float2Blender__Length_fn;
    type->fp_Lerp = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, double*, uTRef))Float2Blender__Lerp_fn;
    type->fp_get_One = (void(*)(::g::Fuse::Internal::Blender*, uTRef))Float2Blender__get_One_fn;
    type->fp_Sub = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))Float2Blender__Sub_fn;
    type->fp_ToUnit = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))Float2Blender__ToUnit_fn;
    type->fp_Weight = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))Float2Blender__Weight_fn;
    type->fp_get_Zero = (void(*)(::g::Fuse::Internal::Blender*, uTRef))Float2Blender__get_Zero_fn;
    return type;
}

// public generated Float2Blender() :402
void Float2Blender__ctor_1_fn(Float2Blender* __this)
{
    __this->ctor_1();
}

// public override sealed float2 Add(float2 a, float2 b) :405
void Float2Blender__Add_fn(Float2Blender* __this, ::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Internal.Float2Blender", "Add(float2,float2)");
    ::g::Uno::Float2 a_ = *a;
    ::g::Uno::Float2 b_ = *b;
    return *__retval = ::g::Uno::Float2__op_Addition2(a_, b_), void();
}

// public override sealed double Length(float2 a) :415
void Float2Blender__Length_fn(Float2Blender* __this, ::g::Uno::Float2* a, double* __retval)
{
    uStackFrame __("Fuse.Internal.Float2Blender", "Length(float2)");
    ::g::Uno::Float2 a_ = *a;
    return *__retval = (double)::g::Uno::Vector::Length(a_), void();
}

// public override sealed float2 Lerp(float2 a, float2 b, double d) :407
void Float2Blender__Lerp_fn(Float2Blender* __this, ::g::Uno::Float2* a, ::g::Uno::Float2* b, double* d, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Internal.Float2Blender", "Lerp(float2,float2,double)");
    ::g::Uno::Float2 a_ = *a;
    ::g::Uno::Float2 b_ = *b;
    double d_ = *d;
    return *__retval = ::g::Uno::Math::Lerp2(a_, b_, (float)d_), void();
}

// public generated Float2Blender New() :402
void Float2Blender__New1_fn(Float2Blender** __retval)
{
    *__retval = Float2Blender::New1();
}

// public override sealed float2 get_One() :409
void Float2Blender__get_One_fn(Float2Blender* __this, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Internal.Float2Blender", "get_One()");
    return *__retval = ::g::Uno::Float2__New1(1.0f), void();
}

// public override sealed float2 Sub(float2 a, float2 b) :406
void Float2Blender__Sub_fn(Float2Blender* __this, ::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Internal.Float2Blender", "Sub(float2,float2)");
    ::g::Uno::Float2 a_ = *a;
    ::g::Uno::Float2 b_ = *b;
    return *__retval = ::g::Uno::Float2__op_Subtraction2(a_, b_), void();
}

// public override sealed float2 ToUnit(float2 a, double& length) :410
void Float2Blender__ToUnit_fn(Float2Blender* __this, ::g::Uno::Float2* a, double* length, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Internal.Float2Blender", "ToUnit(float2,double&)");
    ::g::Uno::Float2 a_ = *a;
    *length = (double)::g::Uno::Vector::Length(a_);
    return *__retval = ::g::Uno::Vector::Normalize(a_), void();
}

// public override sealed float2 Weight(float2 v, double w) :404
void Float2Blender__Weight_fn(Float2Blender* __this, ::g::Uno::Float2* v, double* w, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Internal.Float2Blender", "Weight(float2,double)");
    ::g::Uno::Float2 v_ = *v;
    double w_ = *w;
    return *__retval = ::g::Uno::Float2__op_Multiply1(v_, (float)w_), void();
}

// public override sealed float2 get_Zero() :408
void Float2Blender__get_Zero_fn(Float2Blender* __this, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Internal.Float2Blender", "get_Zero()");
    return *__retval = ::g::Uno::Float2__New1(0.0f), void();
}

// public generated Float2Blender() [instance] :402
void Float2Blender::ctor_1()
{
    uStackFrame __("Fuse.Internal.Float2Blender", ".ctor()");
    ctor_();
}

// public generated Float2Blender New() [static] :402
Float2Blender* Float2Blender::New1()
{
    Float2Blender* obj1 = (Float2Blender*)uNew(Float2Blender_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/internal/$.uno
// ------------------------------------------------------------

// internal sealed class Float3Blender :418
// {
static void Float3Blender_build(uType* type)
{
    type->SetBase(::g::Fuse::Internal::Blender_typeof()->MakeType(::g::Uno::Float3_typeof()));
}

::g::Fuse::Internal::Blender_type* Float3Blender_typeof()
{
    static uSStrong< ::g::Fuse::Internal::Blender_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Internal::Blender_typeof();
    options.ObjectSize = sizeof(Float3Blender);
    options.TypeSize = sizeof(::g::Fuse::Internal::Blender_type);
    type = (::g::Fuse::Internal::Blender_type*)uClassType::New("Fuse.Internal.Float3Blender", options);
    type->fp_build_ = Float3Blender_build;
    type->fp_ctor_ = (void*)Float3Blender__New1_fn;
    type->fp_Add = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))Float3Blender__Add_fn;
    type->fp_Length = (void(*)(::g::Fuse::Internal::Blender*, void*, double*))Float3Blender__Length_fn;
    type->fp_Lerp = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, double*, uTRef))Float3Blender__Lerp_fn;
    type->fp_get_One = (void(*)(::g::Fuse::Internal::Blender*, uTRef))Float3Blender__get_One_fn;
    type->fp_Sub = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))Float3Blender__Sub_fn;
    type->fp_ToUnit = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))Float3Blender__ToUnit_fn;
    type->fp_Weight = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))Float3Blender__Weight_fn;
    type->fp_get_Zero = (void(*)(::g::Fuse::Internal::Blender*, uTRef))Float3Blender__get_Zero_fn;
    return type;
}

// public generated Float3Blender() :418
void Float3Blender__ctor_1_fn(Float3Blender* __this)
{
    __this->ctor_1();
}

// public override sealed float3 Add(float3 a, float3 b) :421
void Float3Blender__Add_fn(Float3Blender* __this, ::g::Uno::Float3* a, ::g::Uno::Float3* b, ::g::Uno::Float3* __retval)
{
    uStackFrame __("Fuse.Internal.Float3Blender", "Add(float3,float3)");
    ::g::Uno::Float3 a_ = *a;
    ::g::Uno::Float3 b_ = *b;
    return *__retval = ::g::Uno::Float3__op_Addition2(a_, b_), void();
}

// public override sealed double Length(float3 a) :431
void Float3Blender__Length_fn(Float3Blender* __this, ::g::Uno::Float3* a, double* __retval)
{
    uStackFrame __("Fuse.Internal.Float3Blender", "Length(float3)");
    ::g::Uno::Float3 a_ = *a;
    return *__retval = (double)::g::Uno::Vector::Length1(a_), void();
}

// public override sealed float3 Lerp(float3 a, float3 b, double d) :423
void Float3Blender__Lerp_fn(Float3Blender* __this, ::g::Uno::Float3* a, ::g::Uno::Float3* b, double* d, ::g::Uno::Float3* __retval)
{
    uStackFrame __("Fuse.Internal.Float3Blender", "Lerp(float3,float3,double)");
    ::g::Uno::Float3 a_ = *a;
    ::g::Uno::Float3 b_ = *b;
    double d_ = *d;
    return *__retval = ::g::Uno::Math::Lerp4(a_, b_, (float)d_), void();
}

// public generated Float3Blender New() :418
void Float3Blender__New1_fn(Float3Blender** __retval)
{
    *__retval = Float3Blender::New1();
}

// public override sealed float3 get_One() :425
void Float3Blender__get_One_fn(Float3Blender* __this, ::g::Uno::Float3* __retval)
{
    uStackFrame __("Fuse.Internal.Float3Blender", "get_One()");
    return *__retval = ::g::Uno::Float3__New1(1.0f), void();
}

// public override sealed float3 Sub(float3 a, float3 b) :422
void Float3Blender__Sub_fn(Float3Blender* __this, ::g::Uno::Float3* a, ::g::Uno::Float3* b, ::g::Uno::Float3* __retval)
{
    uStackFrame __("Fuse.Internal.Float3Blender", "Sub(float3,float3)");
    ::g::Uno::Float3 a_ = *a;
    ::g::Uno::Float3 b_ = *b;
    return *__retval = ::g::Uno::Float3__op_Subtraction2(a_, b_), void();
}

// public override sealed float3 ToUnit(float3 a, double& length) :426
void Float3Blender__ToUnit_fn(Float3Blender* __this, ::g::Uno::Float3* a, double* length, ::g::Uno::Float3* __retval)
{
    uStackFrame __("Fuse.Internal.Float3Blender", "ToUnit(float3,double&)");
    ::g::Uno::Float3 a_ = *a;
    *length = (double)::g::Uno::Vector::Length1(a_);
    return *__retval = ::g::Uno::Vector::Normalize1(a_), void();
}

// public override sealed float3 Weight(float3 v, double w) :420
void Float3Blender__Weight_fn(Float3Blender* __this, ::g::Uno::Float3* v, double* w, ::g::Uno::Float3* __retval)
{
    uStackFrame __("Fuse.Internal.Float3Blender", "Weight(float3,double)");
    ::g::Uno::Float3 v_ = *v;
    double w_ = *w;
    return *__retval = ::g::Uno::Float3__op_Multiply1(v_, (float)w_), void();
}

// public override sealed float3 get_Zero() :424
void Float3Blender__get_Zero_fn(Float3Blender* __this, ::g::Uno::Float3* __retval)
{
    uStackFrame __("Fuse.Internal.Float3Blender", "get_Zero()");
    return *__retval = ::g::Uno::Float3__New1(0.0f), void();
}

// public generated Float3Blender() [instance] :418
void Float3Blender::ctor_1()
{
    uStackFrame __("Fuse.Internal.Float3Blender", ".ctor()");
    ctor_();
}

// public generated Float3Blender New() [static] :418
Float3Blender* Float3Blender::New1()
{
    Float3Blender* obj1 = (Float3Blender*)uNew(Float3Blender_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/internal/$.uno
// ------------------------------------------------------------

// internal sealed class Float4Blender :434
// {
static void Float4Blender_build(uType* type)
{
    type->SetBase(::g::Fuse::Internal::Blender_typeof()->MakeType(::g::Uno::Float4_typeof()));
}

::g::Fuse::Internal::Blender_type* Float4Blender_typeof()
{
    static uSStrong< ::g::Fuse::Internal::Blender_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Internal::Blender_typeof();
    options.ObjectSize = sizeof(Float4Blender);
    options.TypeSize = sizeof(::g::Fuse::Internal::Blender_type);
    type = (::g::Fuse::Internal::Blender_type*)uClassType::New("Fuse.Internal.Float4Blender", options);
    type->fp_build_ = Float4Blender_build;
    type->fp_ctor_ = (void*)Float4Blender__New1_fn;
    type->fp_Add = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))Float4Blender__Add_fn;
    type->fp_Length = (void(*)(::g::Fuse::Internal::Blender*, void*, double*))Float4Blender__Length_fn;
    type->fp_Lerp = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, double*, uTRef))Float4Blender__Lerp_fn;
    type->fp_get_One = (void(*)(::g::Fuse::Internal::Blender*, uTRef))Float4Blender__get_One_fn;
    type->fp_Sub = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))Float4Blender__Sub_fn;
    type->fp_ToUnit = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))Float4Blender__ToUnit_fn;
    type->fp_Weight = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))Float4Blender__Weight_fn;
    type->fp_get_Zero = (void(*)(::g::Fuse::Internal::Blender*, uTRef))Float4Blender__get_Zero_fn;
    return type;
}

// public generated Float4Blender() :434
void Float4Blender__ctor_1_fn(Float4Blender* __this)
{
    __this->ctor_1();
}

// public override sealed float4 Add(float4 a, float4 b) :437
void Float4Blender__Add_fn(Float4Blender* __this, ::g::Uno::Float4* a, ::g::Uno::Float4* b, ::g::Uno::Float4* __retval)
{
    uStackFrame __("Fuse.Internal.Float4Blender", "Add(float4,float4)");
    ::g::Uno::Float4 a_ = *a;
    ::g::Uno::Float4 b_ = *b;
    return *__retval = ::g::Uno::Float4__op_Addition2(a_, b_), void();
}

// public override sealed double Length(float4 a) :447
void Float4Blender__Length_fn(Float4Blender* __this, ::g::Uno::Float4* a, double* __retval)
{
    uStackFrame __("Fuse.Internal.Float4Blender", "Length(float4)");
    ::g::Uno::Float4 a_ = *a;
    return *__retval = (double)::g::Uno::Vector::Length2(a_), void();
}

// public override sealed float4 Lerp(float4 a, float4 b, double d) :439
void Float4Blender__Lerp_fn(Float4Blender* __this, ::g::Uno::Float4* a, ::g::Uno::Float4* b, double* d, ::g::Uno::Float4* __retval)
{
    uStackFrame __("Fuse.Internal.Float4Blender", "Lerp(float4,float4,double)");
    ::g::Uno::Float4 a_ = *a;
    ::g::Uno::Float4 b_ = *b;
    double d_ = *d;
    return *__retval = ::g::Uno::Math::Lerp6(a_, b_, (float)d_), void();
}

// public generated Float4Blender New() :434
void Float4Blender__New1_fn(Float4Blender** __retval)
{
    *__retval = Float4Blender::New1();
}

// public override sealed float4 get_One() :441
void Float4Blender__get_One_fn(Float4Blender* __this, ::g::Uno::Float4* __retval)
{
    uStackFrame __("Fuse.Internal.Float4Blender", "get_One()");
    return *__retval = ::g::Uno::Float4__New1(1.0f), void();
}

// public override sealed float4 Sub(float4 a, float4 b) :438
void Float4Blender__Sub_fn(Float4Blender* __this, ::g::Uno::Float4* a, ::g::Uno::Float4* b, ::g::Uno::Float4* __retval)
{
    uStackFrame __("Fuse.Internal.Float4Blender", "Sub(float4,float4)");
    ::g::Uno::Float4 a_ = *a;
    ::g::Uno::Float4 b_ = *b;
    return *__retval = ::g::Uno::Float4__op_Subtraction2(a_, b_), void();
}

// public override sealed float4 ToUnit(float4 a, double& length) :442
void Float4Blender__ToUnit_fn(Float4Blender* __this, ::g::Uno::Float4* a, double* length, ::g::Uno::Float4* __retval)
{
    uStackFrame __("Fuse.Internal.Float4Blender", "ToUnit(float4,double&)");
    ::g::Uno::Float4 a_ = *a;
    *length = (double)::g::Uno::Vector::Length2(a_);
    return *__retval = ::g::Uno::Vector::Normalize2(a_), void();
}

// public override sealed float4 Weight(float4 v, double w) :436
void Float4Blender__Weight_fn(Float4Blender* __this, ::g::Uno::Float4* v, double* w, ::g::Uno::Float4* __retval)
{
    uStackFrame __("Fuse.Internal.Float4Blender", "Weight(float4,double)");
    ::g::Uno::Float4 v_ = *v;
    double w_ = *w;
    return *__retval = ::g::Uno::Float4__op_Multiply1(v_, (float)w_), void();
}

// public override sealed float4 get_Zero() :440
void Float4Blender__get_Zero_fn(Float4Blender* __this, ::g::Uno::Float4* __retval)
{
    uStackFrame __("Fuse.Internal.Float4Blender", "get_Zero()");
    return *__retval = ::g::Uno::Float4__New1(0.0f), void();
}

// public generated Float4Blender() [instance] :434
void Float4Blender::ctor_1()
{
    uStackFrame __("Fuse.Internal.Float4Blender", ".ctor()");
    ctor_();
}

// public generated Float4Blender New() [static] :434
Float4Blender* Float4Blender::New1()
{
    Float4Blender* obj1 = (Float4Blender*)uNew(Float4Blender_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/internal/$.uno
// ------------------------------------------------------------

// internal sealed class FloatBlender :366
// {
static void FloatBlender_build(uType* type)
{
    type->SetBase(::g::Fuse::Internal::ScalarBlender_typeof()->MakeType(::g::Uno::Float_typeof()));
}

::g::Fuse::Internal::ScalarBlender_type* FloatBlender_typeof()
{
    static uSStrong< ::g::Fuse::Internal::ScalarBlender_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Internal::ScalarBlender_typeof();
    options.ObjectSize = sizeof(FloatBlender);
    options.TypeSize = sizeof(::g::Fuse::Internal::ScalarBlender_type);
    type = (::g::Fuse::Internal::ScalarBlender_type*)uClassType::New("Fuse.Internal.FloatBlender", options);
    type->fp_build_ = FloatBlender_build;
    type->fp_ctor_ = (void*)FloatBlender__New1_fn;
    type->fp_Add = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))FloatBlender__Add_fn;
    type->fp_FromDouble = (void(*)(::g::Fuse::Internal::ScalarBlender*, double*, uTRef))FloatBlender__FromDouble_fn;
    type->fp_Length = (void(*)(::g::Fuse::Internal::Blender*, void*, double*))FloatBlender__Length_fn;
    type->fp_Lerp = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, double*, uTRef))FloatBlender__Lerp_fn;
    type->fp_get_One = (void(*)(::g::Fuse::Internal::Blender*, uTRef))FloatBlender__get_One_fn;
    type->fp_Sub = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))FloatBlender__Sub_fn;
    type->fp_ToDouble = (void(*)(::g::Fuse::Internal::ScalarBlender*, void*, double*))FloatBlender__ToDouble_fn;
    type->fp_ToUnit = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))FloatBlender__ToUnit_fn;
    type->fp_Weight = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))FloatBlender__Weight_fn;
    type->fp_get_Zero = (void(*)(::g::Fuse::Internal::Blender*, uTRef))FloatBlender__get_Zero_fn;
    return type;
}

// public generated FloatBlender() :366
void FloatBlender__ctor_2_fn(FloatBlender* __this)
{
    __this->ctor_2();
}

// public override sealed float Add(float a, float b) :369
void FloatBlender__Add_fn(FloatBlender* __this, float* a, float* b, float* __retval)
{
    uStackFrame __("Fuse.Internal.FloatBlender", "Add(float,float)");
    float a_ = *a;
    float b_ = *b;
    return *__retval = a_ + b_, void();
}

// public override sealed float FromDouble(double a) :381
void FloatBlender__FromDouble_fn(FloatBlender* __this, double* a, float* __retval)
{
    uStackFrame __("Fuse.Internal.FloatBlender", "FromDouble(double)");
    double a_ = *a;
    return *__retval = (float)a_, void();
}

// public override sealed double Length(float a) :379
void FloatBlender__Length_fn(FloatBlender* __this, float* a, double* __retval)
{
    uStackFrame __("Fuse.Internal.FloatBlender", "Length(float)");
    float a_ = *a;
    return *__retval = (double)::g::Uno::Math::Abs1(a_), void();
}

// public override sealed float Lerp(float a, float b, double d) :371
void FloatBlender__Lerp_fn(FloatBlender* __this, float* a, float* b, double* d, float* __retval)
{
    uStackFrame __("Fuse.Internal.FloatBlender", "Lerp(float,float,double)");
    float a_ = *a;
    float b_ = *b;
    double d_ = *d;
    return *__retval = a_ + ((b_ - a_) * (float)d_), void();
}

// public generated FloatBlender New() :366
void FloatBlender__New1_fn(FloatBlender** __retval)
{
    *__retval = FloatBlender::New1();
}

// public override sealed float get_One() :373
void FloatBlender__get_One_fn(FloatBlender* __this, float* __retval)
{
    uStackFrame __("Fuse.Internal.FloatBlender", "get_One()");
    return *__retval = 1.0f, void();
}

// public override sealed float Sub(float a, float b) :370
void FloatBlender__Sub_fn(FloatBlender* __this, float* a, float* b, float* __retval)
{
    uStackFrame __("Fuse.Internal.FloatBlender", "Sub(float,float)");
    float a_ = *a;
    float b_ = *b;
    return *__retval = a_ - b_, void();
}

// public override sealed double ToDouble(float a) :380
void FloatBlender__ToDouble_fn(FloatBlender* __this, float* a, double* __retval)
{
    uStackFrame __("Fuse.Internal.FloatBlender", "ToDouble(float)");
    float a_ = *a;
    return *__retval = (double)a_, void();
}

// public override sealed float ToUnit(float a, double& length) :374
void FloatBlender__ToUnit_fn(FloatBlender* __this, float* a, double* length, float* __retval)
{
    uStackFrame __("Fuse.Internal.FloatBlender", "ToUnit(float,double&)");
    float a_ = *a;
    *length = (double)::g::Uno::Math::Abs1(a_);
    return *__retval = (float)((a_ < 0.0f) ? -1 : 1), void();
}

// public override sealed float Weight(float v, double w) :368
void FloatBlender__Weight_fn(FloatBlender* __this, float* v, double* w, float* __retval)
{
    uStackFrame __("Fuse.Internal.FloatBlender", "Weight(float,double)");
    float v_ = *v;
    double w_ = *w;
    return *__retval = v_ * (float)w_, void();
}

// public override sealed float get_Zero() :372
void FloatBlender__get_Zero_fn(FloatBlender* __this, float* __retval)
{
    uStackFrame __("Fuse.Internal.FloatBlender", "get_Zero()");
    return *__retval = 0.0f, void();
}

// public generated FloatBlender() [instance] :366
void FloatBlender::ctor_2()
{
    uStackFrame __("Fuse.Internal.FloatBlender", ".ctor()");
    ctor_1();
}

// public generated FloatBlender New() [static] :366
FloatBlender* FloatBlender::New1()
{
    FloatBlender* obj1 = (FloatBlender*)uNew(FloatBlender_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/internal/$.uno
// ------------------------------------------------------------

// private struct AndroidSystemFont.FontDescriptor :31
// {
static void AndroidSystemFont__FontDescriptor_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Internal::AndroidSystemFont__FontDescriptor, FilePath), 0,
        ::g::Fuse::SystemFont__Style_typeof(), offsetof(::g::Fuse::Internal::AndroidSystemFont__FontDescriptor, Style), 0,
        ::g::Fuse::SystemFont__Weight_typeof(), offsetof(::g::Fuse::Internal::AndroidSystemFont__FontDescriptor, Weight), 0);
}

uStructType* AndroidSystemFont__FontDescriptor_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ValueSize = sizeof(AndroidSystemFont__FontDescriptor);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Internal.AndroidSystemFont.FontDescriptor", options);
    type->fp_build_ = AndroidSystemFont__FontDescriptor_build;
    return type;
}

// public FontDescriptor(string filePath, Fuse.SystemFont.Style style, Fuse.SystemFont.Weight weight) :37
void AndroidSystemFont__FontDescriptor__ctor__fn(AndroidSystemFont__FontDescriptor* __this, uString* filePath, int* style, int* weight)
{
    __this->ctor_(filePath, *style, *weight);
}

// public FontDescriptor New(string filePath, Fuse.SystemFont.Style style, Fuse.SystemFont.Weight weight) :37
void AndroidSystemFont__FontDescriptor__New1_fn(uString* filePath, int* style, int* weight, AndroidSystemFont__FontDescriptor* __retval)
{
    *__retval = AndroidSystemFont__FontDescriptor__New1(filePath, *style, *weight);
}

// public FontDescriptor(string filePath, Fuse.SystemFont.Style style, Fuse.SystemFont.Weight weight) [instance] :37
void AndroidSystemFont__FontDescriptor::ctor_(uString* filePath, int style, int weight)
{
    uStackFrame __("Fuse.Internal.AndroidSystemFont.FontDescriptor", ".ctor(string,Fuse.SystemFont.Style,Fuse.SystemFont.Weight)");
    FilePath = filePath;
    Style = style;
    Weight = weight;
}

// public FontDescriptor New(string filePath, Fuse.SystemFont.Style style, Fuse.SystemFont.Weight weight) [static] :37
AndroidSystemFont__FontDescriptor AndroidSystemFont__FontDescriptor__New1(uString* filePath, int style, int weight)
{
    AndroidSystemFont__FontDescriptor obj1;
    obj1.ctor_(filePath, style, weight);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/internal/$.uno
// ------------------------------------------------------------

// internal sealed class FontFaceDescriptor :1058
// {
static void FontFaceDescriptor_build(uType* type)
{
    ::TYPES[13] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Uno::String_typeof());
    ::TYPES[14] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[15] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[16] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[17] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Uno::String_typeof());
    ::TYPES[18] = ::g::Uno::Predicate_typeof()->MakeType(::g::Uno::String_typeof());
    type->SetFields(0,
        ::g::Uno::UX::FileSource_typeof(), offsetof(::g::Fuse::Internal::FontFaceDescriptor, FileSource), 0,
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Fuse::Internal::FontFaceDescriptor, Styles), 0);
}

uType* FontFaceDescriptor_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FontFaceDescriptor);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Internal.FontFaceDescriptor", options);
    type->fp_build_ = FontFaceDescriptor_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))FontFaceDescriptor__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))FontFaceDescriptor__GetHashCode_fn;
    return type;
}

// public FontFaceDescriptor(Uno.UX.FileSource fileSource, [Uno.Collections.IEnumerable<string> styles]) :1063
void FontFaceDescriptor__ctor__fn(FontFaceDescriptor* __this, ::g::Uno::UX::FileSource* fileSource, uObject* styles)
{
    __this->ctor_(fileSource, styles);
}

// public override sealed bool Equals(object o) :1074
void FontFaceDescriptor__Equals_fn(FontFaceDescriptor* __this, uObject* o, bool* __retval)
{
    uStackFrame __("Fuse.Internal.FontFaceDescriptor", "Equals(object)");
    FontFaceDescriptor* f = uAs<FontFaceDescriptor*>(o, FontFaceDescriptor_typeof());
    return *__retval = ((f != NULL) && ::g::Uno::String::op_Equality(uPtr(__this->FileSource)->Name, uPtr(uPtr(f)->FileSource)->Name)) && ::g::Uno::Collections::EnumerableExtensions::SequenceEqual(::TYPES[13/*Uno.Collections.EnumerableExtensions.SequenceEqual<string>*/], __this->Styles, uPtr(f)->Styles), void();
}

// public override sealed int GetHashCode() :1082
void FontFaceDescriptor__GetHashCode_fn(FontFaceDescriptor* __this, int* __retval)
{
    uStackFrame __("Fuse.Internal.FontFaceDescriptor", "GetHashCode()");
    uString* ret3;
    int hash = 17;
    hash = (hash * 23) + uPtr(uPtr(__this->FileSource)->Name)->GetHashCode();

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(__this->Styles), ::TYPES[14/*Uno.Collections.IEnumerable<string>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[15/*Uno.Collections.IEnumerator*/])); )
    {
        uString* s = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[16/*Uno.Collections.IEnumerator<string>*/]), &ret3), ret3);
        hash = (hash * 23) + uPtr(s)->GetHashCode();
    }

    return *__retval = hash, void();
}

// public bool Match(string styleString) :1069
void FontFaceDescriptor__Match_fn(FontFaceDescriptor* __this, uString* styleString, bool* __retval)
{
    *__retval = __this->Match(styleString);
}

// public FontFaceDescriptor New(Uno.UX.FileSource fileSource, [Uno.Collections.IEnumerable<string> styles]) :1063
void FontFaceDescriptor__New1_fn(::g::Uno::UX::FileSource* fileSource, uObject* styles, FontFaceDescriptor** __retval)
{
    *__retval = FontFaceDescriptor::New1(fileSource, styles);
}

// public FontFaceDescriptor(Uno.UX.FileSource fileSource, [Uno.Collections.IEnumerable<string> styles]) [instance] :1063
void FontFaceDescriptor::ctor_(::g::Uno::UX::FileSource* fileSource, uObject* styles)
{
    uStackFrame __("Fuse.Internal.FontFaceDescriptor", ".ctor(Uno.UX.FileSource,[Uno.Collections.IEnumerable<string>])");
    FileSource = fileSource;
    Styles = styles;
}

// public bool Match(string styleString) [instance] :1069
bool FontFaceDescriptor::Match(uString* styleString)
{
    uStackFrame __("Fuse.Internal.FontFaceDescriptor", "Match(string)");
    return ::g::Uno::Collections::EnumerableExtensions::All(::TYPES[17/*Uno.Collections.EnumerableExtensions.All<string>*/], Styles, uDelegate::New(::TYPES[18/*Uno.Predicate<string>*/], (void*)::g::Uno::String__Contains_fn, uPtr(styleString)));
}

// public FontFaceDescriptor New(Uno.UX.FileSource fileSource, [Uno.Collections.IEnumerable<string> styles]) [static] :1063
FontFaceDescriptor* FontFaceDescriptor::New1(::g::Uno::UX::FileSource* fileSource, uObject* styles)
{
    FontFaceDescriptor* obj2 = (FontFaceDescriptor*)uNew(FontFaceDescriptor_typeof());
    obj2->ctor_(fileSource, styles);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/internal/$.uno
// ------------------------------------------------------------

// internal static class FrustumMatrix :642
// {
static void FrustumMatrix_build(uType* type)
{
}

uClassType* FrustumMatrix_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Internal.FrustumMatrix", options);
    type->fp_build_ = FrustumMatrix_build;
    return type;
}

// public static float4x4 OrthoLH(float width, float height, float near, float far) :644
void FrustumMatrix__OrthoLH_fn(float* width, float* height, float* near, float* far, ::g::Uno::Float4x4* __retval)
{
    *__retval = FrustumMatrix::OrthoLH(*width, *height, *near, *far);
}

// public static float4x4 OrthoLHInverse(float width, float height, float near, float far) :672
void FrustumMatrix__OrthoLHInverse_fn(float* width, float* height, float* near, float* far, ::g::Uno::Float4x4* __retval)
{
    *__retval = FrustumMatrix::OrthoLHInverse(*width, *height, *near, *far);
}

// public static float4x4 OrthoRH(float width, float height, float zNear, float zFar) :665
void FrustumMatrix__OrthoRH_fn(float* width, float* height, float* zNear, float* zFar, ::g::Uno::Float4x4* __retval)
{
    *__retval = FrustumMatrix::OrthoRH(*width, *height, *zNear, *zFar);
}

// public static float4x4 OrthoRHInverse(float width, float height, float zNear, float zFar) :694
void FrustumMatrix__OrthoRHInverse_fn(float* width, float* height, float* zNear, float* zFar, ::g::Uno::Float4x4* __retval)
{
    *__retval = FrustumMatrix::OrthoRHInverse(*width, *height, *zNear, *zFar);
}

// public static float4x4 PerspectiveProjection(float2 viewSize, float znear, float zfar, float distance) :716
void FrustumMatrix__PerspectiveProjection_fn(::g::Uno::Float2* viewSize, float* znear, float* zfar, float* distance, ::g::Uno::Float4x4* __retval)
{
    *__retval = FrustumMatrix::PerspectiveProjection(*viewSize, *znear, *zfar, *distance);
}

// public static float4x4 PerspectiveProjectionInverse(float2 viewSize, float znear, float zfar, float distance) :735
void FrustumMatrix__PerspectiveProjectionInverse_fn(::g::Uno::Float2* viewSize, float* znear, float* zfar, float* distance, ::g::Uno::Float4x4* __retval)
{
    *__retval = FrustumMatrix::PerspectiveProjectionInverse(*viewSize, *znear, *zfar, *distance);
}

// public static float4x4 PerspectiveView(float2 viewSize, float distance, float2 relOrigin) :702
void FrustumMatrix__PerspectiveView_fn(::g::Uno::Float2* viewSize, float* distance, ::g::Uno::Float2* relOrigin, ::g::Uno::Float4x4* __retval)
{
    *__retval = FrustumMatrix::PerspectiveView(*viewSize, *distance, *relOrigin);
}

// public static float4x4 PerspectiveViewInverse(float2 viewSize, float distance, float2 relOrigin) :709
void FrustumMatrix__PerspectiveViewInverse_fn(::g::Uno::Float2* viewSize, float* distance, ::g::Uno::Float2* relOrigin, ::g::Uno::Float4x4* __retval)
{
    *__retval = FrustumMatrix::PerspectiveViewInverse(*viewSize, *distance, *relOrigin);
}

// public static float4x4 OrthoLH(float width, float height, float near, float far) [static] :644
::g::Uno::Float4x4 FrustumMatrix::OrthoLH(float width, float height, float near, float far)
{
    uStackFrame __("Fuse.Internal.FrustumMatrix", "OrthoLH(float,float,float,float)");
    float halfWidth = width * 0.5f;
    float halfHeight = height * 0.5f;
    float left = -halfWidth;
    float right = halfWidth;
    float bottom = -halfHeight;
    float top = halfHeight;
    ::g::Uno::Float4x4 result = ::g::Uno::Float4x4__Identity();
    result.M11 = (2.0f / (right - left));
    result.M22 = (2.0f / (top - bottom));
    result.M33 = (-2.0f / (far - near));
    result.M41 = (-(right + left) / (right - left));
    result.M42 = (-(top + bottom) / (top - bottom));
    result.M43 = ((far + near) / (far - near));
    return result;
}

// public static float4x4 OrthoLHInverse(float width, float height, float near, float far) [static] :672
::g::Uno::Float4x4 FrustumMatrix::OrthoLHInverse(float width, float height, float near, float far)
{
    uStackFrame __("Fuse.Internal.FrustumMatrix", "OrthoLHInverse(float,float,float,float)");
    float halfWidth = width * 0.5f;
    float halfHeight = height * 0.5f;
    ::g::Uno::Float4x4 result = ::g::Uno::Float4x4__Identity();
    result.M11 = halfWidth;
    result.M22 = halfHeight;
    result.M33 = (-(far - near) / 2.0f);
    result.M43 = ((near + far) / 2.0f);
    return result;
}

// public static float4x4 OrthoRH(float width, float height, float zNear, float zFar) [static] :665
::g::Uno::Float4x4 FrustumMatrix::OrthoRH(float width, float height, float zNear, float zFar)
{
    uStackFrame __("Fuse.Internal.FrustumMatrix", "OrthoRH(float,float,float,float)");
    ::g::Uno::Float4x4 result = FrustumMatrix::OrthoLH(width, height, zNear, zFar);
    result.M33 = (result.M33 * -1.0f);
    return result;
}

// public static float4x4 OrthoRHInverse(float width, float height, float zNear, float zFar) [static] :694
::g::Uno::Float4x4 FrustumMatrix::OrthoRHInverse(float width, float height, float zNear, float zFar)
{
    uStackFrame __("Fuse.Internal.FrustumMatrix", "OrthoRHInverse(float,float,float,float)");
    ::g::Uno::Float4x4 result = FrustumMatrix::OrthoLHInverse(width, height, zNear, zFar);
    result.M33 = (result.M33 * -1.0f);
    result.M43 = (result.M43 * -1.0f);
    return result;
}

// public static float4x4 PerspectiveProjection(float2 viewSize, float znear, float zfar, float distance) [static] :716
::g::Uno::Float4x4 FrustumMatrix::PerspectiveProjection(::g::Uno::Float2 viewSize, float znear, float zfar, float distance)
{
    uStackFrame __("Fuse.Internal.FrustumMatrix", "PerspectiveProjection(float2,float,float,float)");
    ::g::Uno::Float4x4 r = uDefault< ::g::Uno::Float4x4>();
    r.M11 = ((2.0f * distance) / viewSize.X);
    r.M22 = ((2.0f * distance) / viewSize.Y);
    r.M33 = (-(znear + zfar) / (znear - zfar));
    r.M34 = 1.0f;
    r.M43 = ((2.0f * (zfar * znear)) / (znear - zfar));
    return r;
}

// public static float4x4 PerspectiveProjectionInverse(float2 viewSize, float znear, float zfar, float distance) [static] :735
::g::Uno::Float4x4 FrustumMatrix::PerspectiveProjectionInverse(::g::Uno::Float2 viewSize, float znear, float zfar, float distance)
{
    uStackFrame __("Fuse.Internal.FrustumMatrix", "PerspectiveProjectionInverse(float2,float,float,float)");
    ::g::Uno::Float4x4 r = uDefault< ::g::Uno::Float4x4>();
    r.M11 = (viewSize.X / (2.0f * distance));
    r.M22 = (viewSize.Y / (2.0f * distance));
    r.M34 = ((znear - zfar) / ((2.0f * zfar) * znear));
    r.M43 = 1.0f;
    r.M44 = ((znear + zfar) / ((2.0f * zfar) * znear));
    return r;
}

// public static float4x4 PerspectiveView(float2 viewSize, float distance, float2 relOrigin) [static] :702
::g::Uno::Float4x4 FrustumMatrix::PerspectiveView(::g::Uno::Float2 viewSize, float distance, ::g::Uno::Float2 relOrigin)
{
    uStackFrame __("Fuse.Internal.FrustumMatrix", "PerspectiveView(float2,float,float2)");
    ::g::Uno::Float4x4 t = ::g::Uno::Matrix::Translation(-relOrigin.X * viewSize.X, -relOrigin.Y * viewSize.Y, distance);
    ::g::Uno::Float4x4 s = ::g::Uno::Matrix::Scaling1(1.0f, -1.0f, 1.0f);
    return ::g::Uno::Matrix::Mul8(t, s);
}

// public static float4x4 PerspectiveViewInverse(float2 viewSize, float distance, float2 relOrigin) [static] :709
::g::Uno::Float4x4 FrustumMatrix::PerspectiveViewInverse(::g::Uno::Float2 viewSize, float distance, ::g::Uno::Float2 relOrigin)
{
    uStackFrame __("Fuse.Internal.FrustumMatrix", "PerspectiveViewInverse(float2,float,float2)");
    ::g::Uno::Float4x4 s = ::g::Uno::Matrix::Scaling1(1.0f, -1.0f, 1.0f);
    ::g::Uno::Float4x4 t = ::g::Uno::Matrix::Translation(relOrigin.X * viewSize.X, relOrigin.Y * viewSize.Y, -distance);
    return ::g::Uno::Matrix::Mul8(s, t);
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/internal/$.uno
// ------------------------------------------------------------

// internal static class FuseConfig :814
// {
static void FuseConfig_build(uType* type)
{
}

uClassType* FuseConfig_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Internal.FuseConfig", options);
    type->fp_build_ = FuseConfig_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.40.8/internal/$.uno
// -----------------------------------------------------------------

// internal abstract interface IImageContainerOwner :14
// {
uInterfaceType* IImageContainerOwner_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Internal.IImageContainerOwner", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.40.8/internal/$.uno
// -----------------------------------------------------------------

// internal sealed class ImageContainer :21
// {
static void ImageContainer_build(uType* type)
{
    ::STRINGS[1] = uString::Const("ResampleMode.Mipmap has been deprecated. Use ResampleMode.Linear instead.");
    ::STRINGS[2] = uString::Const("/usr/local/share/uno/Packages/Fuse.Elements/0.40.8/internal/$.uno");
    ::STRINGS[3] = uString::Const("set_ResampleMode");
    ::TYPES[15] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[19] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof());
    ::TYPES[20] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof());
    ::TYPES[21] = ::g::Fuse::Internal::IImageContainerOwner_typeof();
    ::TYPES[22] = ::g::Fuse::Resources::FileImageSource_typeof();
    ::TYPES[23] = ::g::Fuse::Resources::HttpImageSource_typeof();
    ::TYPES[24] = ::g::Fuse::Resources::MultiDensityImageSource_typeof();
    ::TYPES[25] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof());
    ::TYPES[26] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof());
    ::TYPES[27] = ::g::Uno::EventHandler_typeof();
    ::TYPES[28] = ::g::Fuse::Resources::ImageSourceErrorHandler_typeof();
    ::TYPES[29] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::FileSource_typeof());
    ::TYPES[30] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Uno::UX::FileSource_typeof());
    ::TYPES[31] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof());
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Internal::ImageContainer, _density), 0,
        ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Uno::UX::FileSource_typeof()), offsetof(::g::Fuse::Internal::ImageContainer, _files), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Internal::ImageContainer, _isRooted), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Internal::ImageContainer, _isVisible), 0,
        ::g::Fuse::Resources::MemoryPolicy_typeof(), offsetof(::g::Fuse::Internal::ImageContainer, _memoryPolicy), 0,
        ::g::Fuse::Internal::IImageContainerOwner_typeof(), offsetof(::g::Fuse::Internal::ImageContainer, _owner), uFieldFlagsWeak,
        ::g::Fuse::Drawing::ResampleMode_typeof(), offsetof(::g::Fuse::Internal::ImageContainer, _resampleMode), 0,
        ::g::Fuse::Resources::ImageSource_typeof(), offsetof(::g::Fuse::Internal::ImageContainer, _source), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Internal::ImageContainer, _sourcePinned), 0,
        ::g::Fuse::Internal::SizingContainer_typeof(), offsetof(::g::Fuse::Internal::ImageContainer, Sizing), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Internal::ImageContainer, ParamChanged1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Internal::ImageContainer, SourceChanged1), 0,
        ::g::Fuse::Resources::ImageSourceErrorHandler_typeof(), offsetof(::g::Fuse::Internal::ImageContainer, SourceError1), 0);
}

uType* ImageContainer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.ObjectSize = sizeof(ImageContainer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Internal.ImageContainer", options);
    type->fp_build_ = ImageContainer_build;
    return type;
}

// public ImageContainer([Fuse.Internal.IImageContainerOwner owner]) :26
void ImageContainer__ctor__fn(ImageContainer* __this, uObject* owner)
{
    __this->ctor_(owner);
}

// private void CheckPinning() :227
void ImageContainer__CheckPinning_fn(ImageContainer* __this)
{
    __this->CheckPinning();
}

// public Fuse.Elements.Alignment get_ContentAlignment() :310
void ImageContainer__get_ContentAlignment_fn(ImageContainer* __this, int* __retval)
{
    *__retval = __this->ContentAlignment();
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) :311
void ImageContainer__set_ContentAlignment_fn(ImageContainer* __this, int* value)
{
    __this->ContentAlignment(*value);
}

// private void CreateMultiDensitySource() :149
void ImageContainer__CreateMultiDensitySource_fn(ImageContainer* __this)
{
    __this->CreateMultiDensitySource();
}

// public float get_Density() :68
void ImageContainer__get_Density_fn(ImageContainer* __this, float* __retval)
{
    *__retval = __this->Density();
}

// public void set_Density(float value) :69
void ImageContainer__set_Density_fn(ImageContainer* __this, float* value)
{
    __this->Density(*value);
}

// public Uno.UX.FileSource get_File() :35
void ImageContainer__get_File_fn(ImageContainer* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :40
void ImageContainer__set_File_fn(ImageContainer* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public Uno.Collections.IList<Uno.UX.FileSource> get_Files() :114
void ImageContainer__get_Files_fn(ImageContainer* __this, uObject** __retval)
{
    *__retval = __this->Files();
}

// public texture2D GetTexture() :318
void ImageContainer__GetTexture_fn(ImageContainer* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    *__retval = __this->GetTexture();
}

// public bool get_IsRooted() :215
void ImageContainer__get_IsRooted_fn(ImageContainer* __this, bool* __retval)
{
    *__retval = __this->IsRooted();
}

// public void set_IsRooted(bool value) :216
void ImageContainer__set_IsRooted_fn(ImageContainer* __this, bool* value)
{
    __this->IsRooted(*value);
}

// public bool get_IsVisible() :328
void ImageContainer__get_IsVisible_fn(ImageContainer* __this, bool* __retval)
{
    *__retval = __this->IsVisible();
}

// public void set_IsVisible(bool value) :329
void ImageContainer__set_IsVisible_fn(ImageContainer* __this, bool* value)
{
    __this->IsVisible(*value);
}

// public Fuse.Resources.MemoryPolicy get_MemoryPolicy() :84
void ImageContainer__get_MemoryPolicy_fn(ImageContainer* __this, ::g::Fuse::Resources::MemoryPolicy** __retval)
{
    *__retval = __this->MemoryPolicy();
}

// public void set_MemoryPolicy(Fuse.Resources.MemoryPolicy value) :85
void ImageContainer__set_MemoryPolicy_fn(ImageContainer* __this, ::g::Fuse::Resources::MemoryPolicy* value)
{
    __this->MemoryPolicy(value);
}

// public ImageContainer New([Fuse.Internal.IImageContainerOwner owner]) :26
void ImageContainer__New1_fn(uObject* owner, ImageContainer** __retval)
{
    *__retval = ImageContainer::New1(owner);
}

// private void OnFileAdded(Uno.UX.FileSource file) :121
void ImageContainer__OnFileAdded_fn(ImageContainer* __this, ::g::Uno::UX::FileSource* file)
{
    __this->OnFileAdded(file);
}

// private void OnFileRemoved(Uno.UX.FileSource file) :133
void ImageContainer__OnFileRemoved_fn(ImageContainer* __this, ::g::Uno::UX::FileSource* file)
{
    __this->OnFileRemoved(file);
}

// private void OnParamChanged() :263
void ImageContainer__OnParamChanged_fn(ImageContainer* __this)
{
    __this->OnParamChanged();
}

// private void OnSizingChanged() :281
void ImageContainer__OnSizingChanged_fn(ImageContainer* __this)
{
    __this->OnSizingChanged();
}

// private void OnSourceChanged(object s, object a) :181
void ImageContainer__OnSourceChanged_fn(ImageContainer* __this, uObject* s, uObject* a)
{
    __this->OnSourceChanged(s, a);
}

// private void OnSourceError(object s, Fuse.Resources.ImageSourceErrorArgs args) :191
void ImageContainer__OnSourceError_fn(ImageContainer* __this, uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* args)
{
    __this->OnSourceError(s, args);
}

// public generated void add_ParamChanged(Uno.EventHandler value) :262
void ImageContainer__add_ParamChanged_fn(ImageContainer* __this, uDelegate* value)
{
    __this->add_ParamChanged(value);
}

// public generated void remove_ParamChanged(Uno.EventHandler value) :262
void ImageContainer__remove_ParamChanged_fn(ImageContainer* __this, uDelegate* value)
{
    __this->remove_ParamChanged(value);
}

// private void ReapplyOptions(Fuse.Resources.ImageSource src) :93
void ImageContainer__ReapplyOptions_fn(ImageContainer* __this, ::g::Fuse::Resources::ImageSource* src)
{
    __this->ReapplyOptions(src);
}

// private void ReleaseSource() :197
void ImageContainer__ReleaseSource_fn(ImageContainer* __this)
{
    __this->ReleaseSource();
}

// public Fuse.Drawing.ResampleMode get_ResampleMode() :249
void ImageContainer__get_ResampleMode_fn(ImageContainer* __this, int* __retval)
{
    *__retval = __this->ResampleMode();
}

// public void set_ResampleMode(Fuse.Drawing.ResampleMode value) :250
void ImageContainer__set_ResampleMode_fn(ImageContainer* __this, int* value)
{
    __this->ResampleMode(*value);
}

// public Fuse.Resources.ImageSource get_Source() :163
void ImageContainer__get_Source_fn(ImageContainer* __this, ::g::Fuse::Resources::ImageSource** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(Fuse.Resources.ImageSource value) :164
void ImageContainer__set_Source_fn(ImageContainer* __this, ::g::Fuse::Resources::ImageSource* value)
{
    __this->Source(value);
}

// public generated void add_SourceChanged(Uno.EventHandler value) :180
void ImageContainer__add_SourceChanged_fn(ImageContainer* __this, uDelegate* value)
{
    __this->add_SourceChanged(value);
}

// public generated void remove_SourceChanged(Uno.EventHandler value) :180
void ImageContainer__remove_SourceChanged_fn(ImageContainer* __this, uDelegate* value)
{
    __this->remove_SourceChanged(value);
}

// public generated void add_SourceError(Fuse.Resources.ImageSourceErrorHandler value) :190
void ImageContainer__add_SourceError_fn(ImageContainer* __this, uDelegate* value)
{
    __this->add_SourceError(value);
}

// public generated void remove_SourceError(Fuse.Resources.ImageSourceErrorHandler value) :190
void ImageContainer__remove_SourceError_fn(ImageContainer* __this, uDelegate* value)
{
    __this->remove_SourceError(value);
}

// public Fuse.Elements.StretchDirection get_StretchDirection() :290
void ImageContainer__get_StretchDirection_fn(ImageContainer* __this, int* __retval)
{
    *__retval = __this->StretchDirection();
}

// public void set_StretchDirection(Fuse.Elements.StretchDirection value) :291
void ImageContainer__set_StretchDirection_fn(ImageContainer* __this, int* value)
{
    __this->StretchDirection(*value);
}

// public Fuse.Elements.StretchMode get_StretchMode() :273
void ImageContainer__get_StretchMode_fn(ImageContainer* __this, int* __retval)
{
    *__retval = __this->StretchMode();
}

// public void set_StretchMode(Fuse.Elements.StretchMode value) :274
void ImageContainer__set_StretchMode_fn(ImageContainer* __this, int* value)
{
    __this->StretchMode(*value);
}

// public Fuse.Elements.StretchSizing get_StretchSizing() :300
void ImageContainer__get_StretchSizing_fn(ImageContainer* __this, int* __retval)
{
    *__retval = __this->StretchSizing();
}

// public void set_StretchSizing(Fuse.Elements.StretchSizing value) :301
void ImageContainer__set_StretchSizing_fn(ImageContainer* __this, int* value)
{
    __this->StretchSizing(*value);
}

// public string get_Url() :52
void ImageContainer__get_Url_fn(ImageContainer* __this, uString** __retval)
{
    *__retval = __this->Url();
}

// public void set_Url(string value) :59
void ImageContainer__set_Url_fn(ImageContainer* __this, uString* value)
{
    __this->Url(value);
}

// public ImageContainer([Fuse.Internal.IImageContainerOwner owner]) [instance] :26
void ImageContainer::ctor_(uObject* owner)
{
    uStackFrame __("Fuse.Internal.ImageContainer", ".ctor([Fuse.Internal.IImageContainerOwner])");
    Sizing = ::g::Fuse::Internal::SizingContainer::New1();
    _density = 1.0f;
    _memoryPolicy = ::g::Fuse::Resources::MemoryPolicy::PreloadRetain();
    _resampleMode = 1;
    _isVisible = true;
    _owner = owner;
}

// private void CheckPinning() [instance] :227
void ImageContainer::CheckPinning()
{
    uStackFrame __("Fuse.Internal.ImageContainer", "CheckPinning()");

    if (_source == NULL)
        return;

    bool on = _isRooted;

    if (uPtr(MemoryPolicy())->UnpinInvisible() && !_isVisible)
        on = false;

    if (on != _sourcePinned)
    {
        if (on)
            uPtr(_source)->Pin();
        else 
            uPtr(_source)->Unpin();

        _sourcePinned = on;
    }
}

// public Fuse.Elements.Alignment get_ContentAlignment() [instance] :310
int ImageContainer::ContentAlignment()
{
    uStackFrame __("Fuse.Internal.ImageContainer", "get_ContentAlignment()");
    return uPtr(Sizing)->align;
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) [instance] :311
void ImageContainer::ContentAlignment(int value)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "set_ContentAlignment(Fuse.Elements.Alignment)");

    if (uPtr(Sizing)->SetAlignment(value))
        OnSizingChanged();
}

// private void CreateMultiDensitySource() [instance] :149
void ImageContainer::CreateMultiDensitySource()
{
    uStackFrame __("Fuse.Internal.ImageContainer", "CreateMultiDensitySource()");
    ::g::Fuse::Resources::FileImageSource* collection6;
    float ind11;
    ::g::Fuse::Resources::MemoryPolicy* ind12;
    ::g::Uno::UX::FileSource* ret16;
    ::g::Fuse::Resources::MultiDensityImageSource* s = ::g::Fuse::Resources::MultiDensityImageSource::New2();

    for (uObject* enum5 = (uObject*)uPtr(_files)->GetEnumerator(); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum5), ::TYPES[15/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Uno::UX::FileSource* f = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum5), ::TYPES[19/*Uno.Collections.IEnumerator<Uno.UX.FileSource>*/]), &ret16), ret16);
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(s)->Sources()), ::TYPES[20/*Uno.Collections.ICollection<Fuse.Resources.ImageSource>*/]), (collection6 = ::g::Fuse::Resources::FileImageSource::New3(f), ind11 = Density(), uPtr(collection6)->Density(ind11), ind11, ind12 = MemoryPolicy(), uPtr(collection6)->DefaultPolicy(ind12), ind12, collection6));
    }

    Source(s);
}

// public float get_Density() [instance] :68
float ImageContainer::Density()
{
    uStackFrame __("Fuse.Internal.ImageContainer", "get_Density()");
    return _density;
}

// public void set_Density(float value) [instance] :69
void ImageContainer::Density(float value)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "set_Density(float)");

    if (_density != value)
    {
        _density = value;
        OnParamChanged();
    }
}

// public Uno.UX.FileSource get_File() [instance] :35
::g::Uno::UX::FileSource* ImageContainer::File()
{
    uStackFrame __("Fuse.Internal.ImageContainer", "get_File()");
    ::g::Uno::UX::FileSource* ret18;

    if (_files == NULL)
        return NULL;
    else 
        return (::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(_files), uCRef<int>(0), &ret18), ret18);
}

// public void set_File(Uno.UX.FileSource value) [instance] :40
void ImageContainer::File(::g::Uno::UX::FileSource* value)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "set_File(Uno.UX.FileSource)");
    ::g::Uno::UX::FileSource* ret19;

    if ((((_files == NULL) || (uPtr(_files)->Count() == 0)) || (uPtr(_files)->Count() > 1)) || ((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(_files), uCRef<int>(0), &ret19), ret19) != value))
    {
        _files = NULL;
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Files()), ::TYPES[29/*Uno.Collections.ICollection<Uno.UX.FileSource>*/]), value);
    }
}

// public Uno.Collections.IList<Uno.UX.FileSource> get_Files() [instance] :114
uObject* ImageContainer::Files()
{
    uStackFrame __("Fuse.Internal.ImageContainer", "get_Files()");

    if (_files == NULL)
        _files = ((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[30/*Uno.Collections.ObservableList<Uno.UX.FileSource>*/], uDelegate::New(::TYPES[31/*Uno.Action<Uno.UX.FileSource>*/], (void*)ImageContainer__OnFileAdded_fn, this), uDelegate::New(::TYPES[31/*Uno.Action<Uno.UX.FileSource>*/], (void*)ImageContainer__OnFileRemoved_fn, this)));

    return (uObject*)_files;
}

// public texture2D GetTexture() [instance] :318
::g::Uno::Graphics::Texture2D* ImageContainer::GetTexture()
{
    uStackFrame __("Fuse.Internal.ImageContainer", "GetTexture()");

    if (Source() != NULL)
        return uPtr(Source())->GetTexture();

    return NULL;
}

// public bool get_IsRooted() [instance] :215
bool ImageContainer::IsRooted()
{
    uStackFrame __("Fuse.Internal.ImageContainer", "get_IsRooted()");
    return _isRooted;
}

// public void set_IsRooted(bool value) [instance] :216
void ImageContainer::IsRooted(bool value)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "set_IsRooted(bool)");
    _isRooted = value;
    CheckPinning();
}

// public bool get_IsVisible() [instance] :328
bool ImageContainer::IsVisible()
{
    uStackFrame __("Fuse.Internal.ImageContainer", "get_IsVisible()");
    return _isVisible;
}

// public void set_IsVisible(bool value) [instance] :329
void ImageContainer::IsVisible(bool value)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "set_IsVisible(bool)");

    if (_isVisible != value)
    {
        _isVisible = value;
        CheckPinning();
    }
}

// public Fuse.Resources.MemoryPolicy get_MemoryPolicy() [instance] :84
::g::Fuse::Resources::MemoryPolicy* ImageContainer::MemoryPolicy()
{
    uStackFrame __("Fuse.Internal.ImageContainer", "get_MemoryPolicy()");
    return _memoryPolicy;
}

// public void set_MemoryPolicy(Fuse.Resources.MemoryPolicy value) [instance] :85
void ImageContainer::MemoryPolicy(::g::Fuse::Resources::MemoryPolicy* value)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "set_MemoryPolicy(Fuse.Resources.MemoryPolicy)");
    _memoryPolicy = value;
    ReapplyOptions(Source());
    CheckPinning();
}

// private void OnFileAdded(Uno.UX.FileSource file) [instance] :121
void ImageContainer::OnFileAdded(::g::Uno::UX::FileSource* file)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "OnFileAdded(Uno.UX.FileSource)");
    ::g::Fuse::Resources::FileImageSource* collection3;
    float ind7;
    ::g::Fuse::Resources::MemoryPolicy* ind8;

    if (uPtr(_files)->Count() == 1)
        Source((collection3 = ::g::Fuse::Resources::FileImageSource::New2(), ind7 = Density(), uPtr(collection3)->Density(ind7), ind7, uPtr(collection3)->File(file), file, ind8 = MemoryPolicy(), uPtr(collection3)->DefaultPolicy(ind8), ind8, collection3));
    else 
        CreateMultiDensitySource();
}

// private void OnFileRemoved(Uno.UX.FileSource file) [instance] :133
void ImageContainer::OnFileRemoved(::g::Uno::UX::FileSource* file)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "OnFileRemoved(Uno.UX.FileSource)");
    ::g::Fuse::Resources::FileImageSource* collection4;
    float ind9;
    ::g::Fuse::Resources::MemoryPolicy* ind10;

    if (uPtr(_files)->Count() == 0)
        Source(NULL);
    else  if (uPtr(_files)->Count() == 1)
        Source((collection4 = ::g::Fuse::Resources::FileImageSource::New2(), ind9 = Density(), uPtr(collection4)->Density(ind9), ind9, uPtr(collection4)->File(file), file, ind10 = MemoryPolicy(), uPtr(collection4)->DefaultPolicy(ind10), ind10, collection4));
    else 
        CreateMultiDensitySource();
}

// private void OnParamChanged() [instance] :263
void ImageContainer::OnParamChanged()
{
    uStackFrame __("Fuse.Internal.ImageContainer", "OnParamChanged()");

    if (::g::Uno::Delegate::op_Inequality(ParamChanged1, NULL))
        uPtr(ParamChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());

    if (_owner != NULL)
        ::g::Fuse::Internal::IImageContainerOwner::OnParamChanged(uInterface(uPtr(_owner), ::TYPES[21/*Fuse.Internal.IImageContainerOwner*/]));
}

// private void OnSizingChanged() [instance] :281
void ImageContainer::OnSizingChanged()
{
    uStackFrame __("Fuse.Internal.ImageContainer", "OnSizingChanged()");
    OnParamChanged();

    if (_owner != NULL)
        ::g::Fuse::Internal::IImageContainerOwner::OnSizingChanged(uInterface(uPtr(_owner), ::TYPES[21/*Fuse.Internal.IImageContainerOwner*/]));
}

// private void OnSourceChanged(object s, object a) [instance] :181
void ImageContainer::OnSourceChanged(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "OnSourceChanged(object,object)");
    CheckPinning();

    if (::g::Uno::Delegate::op_Inequality(SourceChanged1, NULL))
        uPtr(SourceChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());

    if (_owner != NULL)
        ::g::Fuse::Internal::IImageContainerOwner::OnSourceChanged(uInterface(uPtr(_owner), ::TYPES[21/*Fuse.Internal.IImageContainerOwner*/]));
}

// private void OnSourceError(object s, Fuse.Resources.ImageSourceErrorArgs args) [instance] :191
void ImageContainer::OnSourceError(uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* args)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "OnSourceError(object,Fuse.Resources.ImageSourceErrorArgs)");

    if (::g::Uno::Delegate::op_Inequality(SourceError1, NULL))
        uPtr(SourceError1)->Invoke(2, this, args);
}

// public generated void add_ParamChanged(Uno.EventHandler value) [instance] :262
void ImageContainer::add_ParamChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "add_ParamChanged(Uno.EventHandler)");
    ParamChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ParamChanged1, value), ::TYPES[27/*Uno.EventHandler*/]);
}

// public generated void remove_ParamChanged(Uno.EventHandler value) [instance] :262
void ImageContainer::remove_ParamChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "remove_ParamChanged(Uno.EventHandler)");
    ParamChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ParamChanged1, value), ::TYPES[27/*Uno.EventHandler*/]);
}

// private void ReapplyOptions(Fuse.Resources.ImageSource src) [instance] :93
void ImageContainer::ReapplyOptions(::g::Fuse::Resources::ImageSource* src)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "ReapplyOptions(Fuse.Resources.ImageSource)");
    ::g::Fuse::Resources::ImageSource* ret17;
    ::g::Fuse::Resources::FileImageSource* f = uAs< ::g::Fuse::Resources::FileImageSource*>(src, ::TYPES[22/*Fuse.Resources.FileImageSource*/]);

    if ((f != NULL) && (MemoryPolicy() != NULL))
        uPtr(f)->DefaultPolicy(MemoryPolicy());

    ::g::Fuse::Resources::HttpImageSource* hf = uAs< ::g::Fuse::Resources::HttpImageSource*>(src, ::TYPES[23/*Fuse.Resources.HttpImageSource*/]);

    if ((hf != NULL) && (MemoryPolicy() != NULL))
        uPtr(hf)->DefaultPolicy(MemoryPolicy());

    ::g::Fuse::Resources::MultiDensityImageSource* mf = uAs< ::g::Fuse::Resources::MultiDensityImageSource*>(Source(), ::TYPES[24/*Fuse.Resources.MultiDensityImageSource*/]);

    if (mf != NULL)

        for (uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(mf)->Sources()), ::TYPES[25/*Uno.Collections.IEnumerable<Fuse.Resources.ImageSource>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[15/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Fuse::Resources::ImageSource* s = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[26/*Uno.Collections.IEnumerator<Fuse.Resources.ImageSource>*/]), &ret17), ret17);
            ReapplyOptions(s);
        }
}

// private void ReleaseSource() [instance] :197
void ImageContainer::ReleaseSource()
{
    uStackFrame __("Fuse.Internal.ImageContainer", "ReleaseSource()");

    if (_source == NULL)
        return;

    uPtr(_source)->remove_Changed(uDelegate::New(::TYPES[27/*Uno.EventHandler*/], (void*)ImageContainer__OnSourceChanged_fn, this));
    uPtr(_source)->remove_Error(uDelegate::New(::TYPES[28/*Fuse.Resources.ImageSourceErrorHandler*/], (void*)ImageContainer__OnSourceError_fn, this));

    if (_sourcePinned)
    {
        uPtr(_source)->Unpin();
        _sourcePinned = false;
    }

    _source = NULL;
}

// public Fuse.Drawing.ResampleMode get_ResampleMode() [instance] :249
int ImageContainer::ResampleMode()
{
    uStackFrame __("Fuse.Internal.ImageContainer", "get_ResampleMode()");
    return _resampleMode;
}

// public void set_ResampleMode(Fuse.Drawing.ResampleMode value) [instance] :250
void ImageContainer::ResampleMode(int value)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "set_ResampleMode(Fuse.Drawing.ResampleMode)");

    if (_resampleMode != value)
    {
        if (value == 2)
            ::g::Fuse::Diagnostics::Deprecated(::STRINGS[1/*"ResampleMod...*/], this, ::STRINGS[2/*"/usr/local/...*/], 255, ::STRINGS[3/*"set_Resampl...*/]);

        _resampleMode = value;
        OnParamChanged();
    }
}

// public Fuse.Resources.ImageSource get_Source() [instance] :163
::g::Fuse::Resources::ImageSource* ImageContainer::Source()
{
    uStackFrame __("Fuse.Internal.ImageContainer", "get_Source()");
    return _source;
}

// public void set_Source(Fuse.Resources.ImageSource value) [instance] :164
void ImageContainer::Source(::g::Fuse::Resources::ImageSource* value)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "set_Source(Fuse.Resources.ImageSource)");

    if (_source != value)
    {
        ReleaseSource();
        _source = value;

        if (_source != NULL)
        {
            uPtr(_source)->add_Changed(uDelegate::New(::TYPES[27/*Uno.EventHandler*/], (void*)ImageContainer__OnSourceChanged_fn, this));
            uPtr(_source)->add_Error(uDelegate::New(::TYPES[28/*Fuse.Resources.ImageSourceErrorHandler*/], (void*)ImageContainer__OnSourceError_fn, this));
        }

        OnSourceChanged(NULL, NULL);
    }
}

// public generated void add_SourceChanged(Uno.EventHandler value) [instance] :180
void ImageContainer::add_SourceChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "add_SourceChanged(Uno.EventHandler)");
    SourceChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(SourceChanged1, value), ::TYPES[27/*Uno.EventHandler*/]);
}

// public generated void remove_SourceChanged(Uno.EventHandler value) [instance] :180
void ImageContainer::remove_SourceChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "remove_SourceChanged(Uno.EventHandler)");
    SourceChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(SourceChanged1, value), ::TYPES[27/*Uno.EventHandler*/]);
}

// public generated void add_SourceError(Fuse.Resources.ImageSourceErrorHandler value) [instance] :190
void ImageContainer::add_SourceError(uDelegate* value)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "add_SourceError(Fuse.Resources.ImageSourceErrorHandler)");
    SourceError1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(SourceError1, value), ::TYPES[28/*Fuse.Resources.ImageSourceErrorHandler*/]);
}

// public generated void remove_SourceError(Fuse.Resources.ImageSourceErrorHandler value) [instance] :190
void ImageContainer::remove_SourceError(uDelegate* value)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "remove_SourceError(Fuse.Resources.ImageSourceErrorHandler)");
    SourceError1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(SourceError1, value), ::TYPES[28/*Fuse.Resources.ImageSourceErrorHandler*/]);
}

// public Fuse.Elements.StretchDirection get_StretchDirection() [instance] :290
int ImageContainer::StretchDirection()
{
    uStackFrame __("Fuse.Internal.ImageContainer", "get_StretchDirection()");
    return uPtr(Sizing)->stretchDirection;
}

// public void set_StretchDirection(Fuse.Elements.StretchDirection value) [instance] :291
void ImageContainer::StretchDirection(int value)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "set_StretchDirection(Fuse.Elements.StretchDirection)");

    if (uPtr(Sizing)->SetStretchDirection(value))
        OnSizingChanged();
}

// public Fuse.Elements.StretchMode get_StretchMode() [instance] :273
int ImageContainer::StretchMode()
{
    uStackFrame __("Fuse.Internal.ImageContainer", "get_StretchMode()");
    return uPtr(Sizing)->stretchMode;
}

// public void set_StretchMode(Fuse.Elements.StretchMode value) [instance] :274
void ImageContainer::StretchMode(int value)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "set_StretchMode(Fuse.Elements.StretchMode)");

    if (uPtr(Sizing)->SetStretchMode(value))
        OnSizingChanged();
}

// public Fuse.Elements.StretchSizing get_StretchSizing() [instance] :300
int ImageContainer::StretchSizing()
{
    uStackFrame __("Fuse.Internal.ImageContainer", "get_StretchSizing()");
    return uPtr(Sizing)->stretchSizing;
}

// public void set_StretchSizing(Fuse.Elements.StretchSizing value) [instance] :301
void ImageContainer::StretchSizing(int value)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "set_StretchSizing(Fuse.Elements.StretchSizing)");

    if (uPtr(Sizing)->SetStretchSizing(value))
        OnSizingChanged();
}

// public string get_Url() [instance] :52
uString* ImageContainer::Url()
{
    uStackFrame __("Fuse.Internal.ImageContainer", "get_Url()");
    ::g::Fuse::Resources::HttpImageSource* http = uAs< ::g::Fuse::Resources::HttpImageSource*>(Source(), ::TYPES[23/*Fuse.Resources.HttpImageSource*/]);

    if (http == NULL)
        return NULL;

    return uPtr(http)->Url();
}

// public void set_Url(string value) [instance] :59
void ImageContainer::Url(uString* value)
{
    uStackFrame __("Fuse.Internal.ImageContainer", "set_Url(string)");
    ::g::Fuse::Resources::HttpImageSource* collection1;
    float ind13;
    ::g::Fuse::Resources::MemoryPolicy* ind14;
    Source((collection1 = ::g::Fuse::Resources::HttpImageSource::New2(), uPtr(collection1)->Url(value), value, ind13 = Density(), uPtr(collection1)->Density(ind13), ind13, ind14 = MemoryPolicy(), uPtr(collection1)->DefaultPolicy(ind14), ind14, collection1));
}

// public ImageContainer New([Fuse.Internal.IImageContainerOwner owner]) [static] :26
ImageContainer* ImageContainer::New1(uObject* owner)
{
    ImageContainer* obj15 = (ImageContainer*)uNew(ImageContainer_typeof());
    obj15->ctor_(owner);
    return obj15;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/internal/$.uno
// ------------------------------------------------------------

// internal struct MiniList<T> :837
// {
static void MiniList_build(uType* type)
{
    ::TYPES[32] = ::g::Uno::Collections::List_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::List_typeof()->MakeType(type->T(0)));
    type->SetFields(0,
        type->T(0), offsetof(::g::Fuse::Internal::MiniList, _single), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Internal::MiniList, _list), 0);
}

uStructType* MiniList_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ValueSize = sizeof(MiniList);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Internal.MiniList`1", options);
    type->fp_build_ = MiniList_build;
    return type;
}

// public void Add(T value) :853
void MiniList__Add_fn(MiniList* __this, uType* __type, uObject* value)
{
    __this->Add(__type, value);
}

// public void Clear() :884
void MiniList__Clear_fn(MiniList* __this, uType* __type)
{
    __this->Clear(__type);
}

// public bool Contains(T value) :891
void MiniList__Contains_fn(MiniList* __this, uType* __type, uObject* value, bool* __retval)
{
    *__retval = __this->Contains(__type, value);
}

// public int get_Count() :845
void MiniList__get_Count_fn(MiniList* __this, uType* __type, int* __retval)
{
    *__retval = __this->Count(__type);
}

// public T get_Item(int index) :904
void MiniList__get_Item_fn(MiniList* __this, uType* __type, int* index, uObject** __retval)
{
    *__retval = __this->Item(__type, *index);
}

// public void Remove(T value) :870
void MiniList__Remove_fn(MiniList* __this, uType* __type, uObject* value)
{
    __this->Remove(__type, value);
}

// public void Add(T value) [instance] :853
void MiniList::Add(uType* __type, uObject* value)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.List<T>*/),
    };
    uStackFrame __("Fuse.Internal.MiniList`1", "Add(T)");

    if (_list == NULL)
    {
        if (_single == NULL)
        {
            _single = value;
            return;
        }

        _list = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[0]));
        ::g::Uno::Collections::List__Add_fn(uPtr(_list), _single);
        _single = NULL;
    }

    ::g::Uno::Collections::List__Add_fn(uPtr(_list), value);
}

// public void Clear() [instance] :884
void MiniList::Clear(uType* __type)
{
    uStackFrame __("Fuse.Internal.MiniList`1", "Clear()");
    _single = NULL;

    if (_list != NULL)
        uPtr(_list)->Clear();
}

// public bool Contains(T value) [instance] :891
bool MiniList::Contains(uType* __type, uObject* value)
{
    uStackFrame __("Fuse.Internal.MiniList`1", "Contains(T)");
    bool ret1;

    if ((_single != NULL) && ::g::Uno::Object::Equals1(_single, value))
        return true;

    if (_list != NULL)
        return (::g::Uno::Collections::List__Contains_fn(uPtr(_list), value, &ret1), ret1);

    return false;
}

// public int get_Count() [instance] :845
int MiniList::Count(uType* __type)
{
    uStackFrame __("Fuse.Internal.MiniList`1", "get_Count()");

    if (_single != NULL)
        return 1;

    return (_list == NULL) ? 0 : uPtr(_list)->Count();
}

// public T get_Item(int index) [instance] :904
uObject* MiniList::Item(uType* __type, int index)
{
    uStackFrame __("Fuse.Internal.MiniList`1", "get_Item(int)");
    uObject* ret3;

    if (_single != NULL)
    {
        if (index != 0)
            U_THROW(::g::Uno::IndexOutOfRangeException::New4());

        return _single;
    }

    if (_list != NULL)
        return (::g::Uno::Collections::List__get_Item_fn(uPtr(_list), uCRef<int>(index), &ret3), ret3);

    U_THROW(::g::Uno::IndexOutOfRangeException::New4());
}

// public void Remove(T value) [instance] :870
void MiniList::Remove(uType* __type, uObject* value)
{
    uStackFrame __("Fuse.Internal.MiniList`1", "Remove(T)");
    bool ret2;

    if (_single == value)
    {
        _single = NULL;
        return;
    }

    if (_list == NULL)
        return;

    ::g::Uno::Collections::List__Remove_fn(uPtr(_list), value, &ret2);
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/internal/$.uno
// ------------------------------------------------------------

// internal abstract class ScalarBlender<T> :360
// {
static void ScalarBlender_build(uType* type)
{
    type->SetBase(::g::Fuse::Internal::Blender_typeof()->MakeType(type->T(0)));
}

ScalarBlender_type* ScalarBlender_typeof()
{
    static uSStrong<ScalarBlender_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Internal::Blender_typeof();
    options.GenericCount = 1;
    options.ObjectSize = sizeof(ScalarBlender);
    options.TypeSize = sizeof(ScalarBlender_type);
    type = (ScalarBlender_type*)uClassType::New("Fuse.Internal.ScalarBlender`1", options);
    type->fp_build_ = ScalarBlender_build;
    return type;
}

// protected generated ScalarBlender() :360
void ScalarBlender__ctor_1_fn(ScalarBlender* __this)
{
    __this->ctor_1();
}

// protected generated ScalarBlender() [instance] :360
void ScalarBlender::ctor_1()
{
    uStackFrame __("Fuse.Internal.ScalarBlender`1", ".ctor()");
    ctor_();
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/internal/$.uno
// ------------------------------------------------------------

// internal sealed class Size2Blender :341
// {
static void Size2Blender_build(uType* type)
{
    type->SetBase(::g::Fuse::Internal::Blender_typeof()->MakeType(::g::Uno::UX::Size2_typeof()));
}

::g::Fuse::Internal::Blender_type* Size2Blender_typeof()
{
    static uSStrong< ::g::Fuse::Internal::Blender_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Internal::Blender_typeof();
    options.ObjectSize = sizeof(Size2Blender);
    options.TypeSize = sizeof(::g::Fuse::Internal::Blender_type);
    type = (::g::Fuse::Internal::Blender_type*)uClassType::New("Fuse.Internal.Size2Blender", options);
    type->fp_build_ = Size2Blender_build;
    type->fp_ctor_ = (void*)Size2Blender__New1_fn;
    type->fp_Add = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))Size2Blender__Add_fn;
    type->fp_Length = (void(*)(::g::Fuse::Internal::Blender*, void*, double*))Size2Blender__Length_fn;
    type->fp_Lerp = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, double*, uTRef))Size2Blender__Lerp_fn;
    type->fp_get_One = (void(*)(::g::Fuse::Internal::Blender*, uTRef))Size2Blender__get_One_fn;
    type->fp_Sub = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))Size2Blender__Sub_fn;
    type->fp_ToUnit = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))Size2Blender__ToUnit_fn;
    type->fp_Weight = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))Size2Blender__Weight_fn;
    type->fp_get_Zero = (void(*)(::g::Fuse::Internal::Blender*, uTRef))Size2Blender__get_Zero_fn;
    return type;
}

// public generated Size2Blender() :341
void Size2Blender__ctor_1_fn(Size2Blender* __this)
{
    __this->ctor_1();
}

// public override sealed Uno.UX.Size2 Add(Uno.UX.Size2 a, Uno.UX.Size2 b) :344
void Size2Blender__Add_fn(Size2Blender* __this, ::g::Uno::UX::Size2* a, ::g::Uno::UX::Size2* b, ::g::Uno::UX::Size2* __retval)
{
    uStackFrame __("Fuse.Internal.Size2Blender", "Add(Uno.UX.Size2,Uno.UX.Size2)");
    ::g::Uno::UX::Size2 a_ = *a;
    ::g::Uno::UX::Size2 b_ = *b;
    return *__retval = ::g::Uno::UX::Size2__op_Addition(a_, b_), void();
}

// public override sealed double Length(Uno.UX.Size2 a) :357
void Size2Blender__Length_fn(Size2Blender* __this, ::g::Uno::UX::Size2* a, double* __retval)
{
    uStackFrame __("Fuse.Internal.Size2Blender", "Length(Uno.UX.Size2)");
    ::g::Uno::UX::Size2 a_ = *a;
    return *__retval = (double)::g::Uno::Vector::Length(::g::Uno::UX::Size2__op_Explicit(a_)), void();
}

// public override sealed Uno.UX.Size2 Lerp(Uno.UX.Size2 a, Uno.UX.Size2 b, double d) :346
void Size2Blender__Lerp_fn(Size2Blender* __this, ::g::Uno::UX::Size2* a, ::g::Uno::UX::Size2* b, double* d, ::g::Uno::UX::Size2* __retval)
{
    uStackFrame __("Fuse.Internal.Size2Blender", "Lerp(Uno.UX.Size2,Uno.UX.Size2,double)");
    ::g::Uno::UX::Size2 a_ = *a;
    ::g::Uno::UX::Size2 b_ = *b;
    double d_ = *d;
    return *__retval = ::g::Uno::UX::Size2__op_Addition(a_, ::g::Uno::UX::Size2__op_Multiply(::g::Uno::UX::Size2__op_Subtraction(b_, a_), (float)d_)), void();
}

// public generated Size2Blender New() :341
void Size2Blender__New1_fn(Size2Blender** __retval)
{
    *__retval = Size2Blender::New1();
}

// public override sealed Uno.UX.Size2 get_One() :348
void Size2Blender__get_One_fn(Size2Blender* __this, ::g::Uno::UX::Size2* __retval)
{
    uStackFrame __("Fuse.Internal.Size2Blender", "get_One()");
    return *__retval = ::g::Uno::UX::Size2__op_Implicit1(::g::Uno::Float2__New2(1.0f, 1.0f)), void();
}

// public override sealed Uno.UX.Size2 Sub(Uno.UX.Size2 a, Uno.UX.Size2 b) :345
void Size2Blender__Sub_fn(Size2Blender* __this, ::g::Uno::UX::Size2* a, ::g::Uno::UX::Size2* b, ::g::Uno::UX::Size2* __retval)
{
    uStackFrame __("Fuse.Internal.Size2Blender", "Sub(Uno.UX.Size2,Uno.UX.Size2)");
    ::g::Uno::UX::Size2 a_ = *a;
    ::g::Uno::UX::Size2 b_ = *b;
    return *__retval = ::g::Uno::UX::Size2__op_Subtraction(a_, b_), void();
}

// public override sealed Uno.UX.Size2 ToUnit(Uno.UX.Size2 a, double& length) :349
void Size2Blender__ToUnit_fn(Size2Blender* __this, ::g::Uno::UX::Size2* a, double* length, ::g::Uno::UX::Size2* __retval)
{
    uStackFrame __("Fuse.Internal.Size2Blender", "ToUnit(Uno.UX.Size2,double&)");
    ::g::Uno::UX::Size2 a_ = *a;
    *length = (double)::g::Uno::Vector::Length(::g::Uno::UX::Size2__op_Explicit(a_));
    ::g::Uno::Float2 v = ::g::Uno::Vector::Normalize(::g::Uno::UX::Size2__op_Explicit(a_));
    ::g::Uno::UX::Size x = a_.X;
    ::g::Uno::UX::Size y = a_.Y;
    return *__retval = ::g::Uno::UX::Size2__New1(::g::Uno::UX::Size__New1(v.X, x.Unit), ::g::Uno::UX::Size__New1(v.Y, y.Unit)), void();
}

// public override sealed Uno.UX.Size2 Weight(Uno.UX.Size2 v, double w) :343
void Size2Blender__Weight_fn(Size2Blender* __this, ::g::Uno::UX::Size2* v, double* w, ::g::Uno::UX::Size2* __retval)
{
    uStackFrame __("Fuse.Internal.Size2Blender", "Weight(Uno.UX.Size2,double)");
    ::g::Uno::UX::Size2 v_ = *v;
    double w_ = *w;
    return *__retval = ::g::Uno::UX::Size2__op_Multiply(v_, (float)w_), void();
}

// public override sealed Uno.UX.Size2 get_Zero() :347
void Size2Blender__get_Zero_fn(Size2Blender* __this, ::g::Uno::UX::Size2* __retval)
{
    uStackFrame __("Fuse.Internal.Size2Blender", "get_Zero()");
    return *__retval = ::g::Uno::UX::Size2__op_Implicit1(::g::Uno::Float2__New2(0.0f, 0.0f)), void();
}

// public generated Size2Blender() [instance] :341
void Size2Blender::ctor_1()
{
    uStackFrame __("Fuse.Internal.Size2Blender", ".ctor()");
    ctor_();
}

// public generated Size2Blender New() [static] :341
Size2Blender* Size2Blender::New1()
{
    Size2Blender* obj1 = (Size2Blender*)uNew(Size2Blender_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/internal/$.uno
// ------------------------------------------------------------

// internal sealed class SizeBlender :325
// {
static void SizeBlender_build(uType* type)
{
    type->SetBase(::g::Fuse::Internal::Blender_typeof()->MakeType(::g::Uno::UX::Size_typeof()));
}

::g::Fuse::Internal::Blender_type* SizeBlender_typeof()
{
    static uSStrong< ::g::Fuse::Internal::Blender_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Internal::Blender_typeof();
    options.ObjectSize = sizeof(SizeBlender);
    options.TypeSize = sizeof(::g::Fuse::Internal::Blender_type);
    type = (::g::Fuse::Internal::Blender_type*)uClassType::New("Fuse.Internal.SizeBlender", options);
    type->fp_build_ = SizeBlender_build;
    type->fp_ctor_ = (void*)SizeBlender__New1_fn;
    type->fp_Add = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))SizeBlender__Add_fn;
    type->fp_Length = (void(*)(::g::Fuse::Internal::Blender*, void*, double*))SizeBlender__Length_fn;
    type->fp_Lerp = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, double*, uTRef))SizeBlender__Lerp_fn;
    type->fp_get_One = (void(*)(::g::Fuse::Internal::Blender*, uTRef))SizeBlender__get_One_fn;
    type->fp_Sub = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))SizeBlender__Sub_fn;
    type->fp_ToUnit = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))SizeBlender__ToUnit_fn;
    type->fp_Weight = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))SizeBlender__Weight_fn;
    type->fp_get_Zero = (void(*)(::g::Fuse::Internal::Blender*, uTRef))SizeBlender__get_Zero_fn;
    return type;
}

// public generated SizeBlender() :325
void SizeBlender__ctor_1_fn(SizeBlender* __this)
{
    __this->ctor_1();
}

// public override sealed Uno.UX.Size Add(Uno.UX.Size a, Uno.UX.Size b) :328
void SizeBlender__Add_fn(SizeBlender* __this, ::g::Uno::UX::Size* a, ::g::Uno::UX::Size* b, ::g::Uno::UX::Size* __retval)
{
    uStackFrame __("Fuse.Internal.SizeBlender", "Add(Uno.UX.Size,Uno.UX.Size)");
    ::g::Uno::UX::Size a_ = *a;
    ::g::Uno::UX::Size b_ = *b;
    return *__retval = ::g::Uno::UX::Size__op_Addition(a_, b_), void();
}

// public override sealed double Length(Uno.UX.Size a) :338
void SizeBlender__Length_fn(SizeBlender* __this, ::g::Uno::UX::Size* a, double* __retval)
{
    uStackFrame __("Fuse.Internal.SizeBlender", "Length(Uno.UX.Size)");
    ::g::Uno::UX::Size a_ = *a;
    return *__retval = (double)::g::Uno::Math::Abs1(a_.Value), void();
}

// public override sealed Uno.UX.Size Lerp(Uno.UX.Size a, Uno.UX.Size b, double d) :330
void SizeBlender__Lerp_fn(SizeBlender* __this, ::g::Uno::UX::Size* a, ::g::Uno::UX::Size* b, double* d, ::g::Uno::UX::Size* __retval)
{
    uStackFrame __("Fuse.Internal.SizeBlender", "Lerp(Uno.UX.Size,Uno.UX.Size,double)");
    ::g::Uno::UX::Size a_ = *a;
    ::g::Uno::UX::Size b_ = *b;
    double d_ = *d;
    return *__retval = ::g::Uno::UX::Size__op_Addition(a_, ::g::Uno::UX::Size__op_Multiply(::g::Uno::UX::Size__op_Subtraction(b_, a_), (float)d_)), void();
}

// public generated SizeBlender New() :325
void SizeBlender__New1_fn(SizeBlender** __retval)
{
    *__retval = SizeBlender::New1();
}

// public override sealed Uno.UX.Size get_One() :332
void SizeBlender__get_One_fn(SizeBlender* __this, ::g::Uno::UX::Size* __retval)
{
    uStackFrame __("Fuse.Internal.SizeBlender", "get_One()");
    return *__retval = ::g::Uno::UX::Size__op_Implicit1(1), void();
}

// public override sealed Uno.UX.Size Sub(Uno.UX.Size a, Uno.UX.Size b) :329
void SizeBlender__Sub_fn(SizeBlender* __this, ::g::Uno::UX::Size* a, ::g::Uno::UX::Size* b, ::g::Uno::UX::Size* __retval)
{
    uStackFrame __("Fuse.Internal.SizeBlender", "Sub(Uno.UX.Size,Uno.UX.Size)");
    ::g::Uno::UX::Size a_ = *a;
    ::g::Uno::UX::Size b_ = *b;
    return *__retval = ::g::Uno::UX::Size__op_Subtraction(a_, b_), void();
}

// public override sealed Uno.UX.Size ToUnit(Uno.UX.Size a, double& length) :333
void SizeBlender__ToUnit_fn(SizeBlender* __this, ::g::Uno::UX::Size* a, double* length, ::g::Uno::UX::Size* __retval)
{
    uStackFrame __("Fuse.Internal.SizeBlender", "ToUnit(Uno.UX.Size,double&)");
    ::g::Uno::UX::Size a_ = *a;
    *length = (double)a_.Value;
    return *__retval = (a_.Value < 0.0f) ? ::g::Uno::UX::Size__New1(-1.0f, a_.Unit) : ::g::Uno::UX::Size__New1(1.0f, a_.Unit), void();
}

// public override sealed Uno.UX.Size Weight(Uno.UX.Size v, double w) :327
void SizeBlender__Weight_fn(SizeBlender* __this, ::g::Uno::UX::Size* v, double* w, ::g::Uno::UX::Size* __retval)
{
    uStackFrame __("Fuse.Internal.SizeBlender", "Weight(Uno.UX.Size,double)");
    ::g::Uno::UX::Size v_ = *v;
    double w_ = *w;
    return *__retval = ::g::Uno::UX::Size__op_Multiply(v_, (float)w_), void();
}

// public override sealed Uno.UX.Size get_Zero() :331
void SizeBlender__get_Zero_fn(SizeBlender* __this, ::g::Uno::UX::Size* __retval)
{
    uStackFrame __("Fuse.Internal.SizeBlender", "get_Zero()");
    return *__retval = ::g::Uno::UX::Size__op_Implicit1(0), void();
}

// public generated SizeBlender() [instance] :325
void SizeBlender::ctor_1()
{
    uStackFrame __("Fuse.Internal.SizeBlender", ".ctor()");
    ctor_();
}

// public generated SizeBlender New() [static] :325
SizeBlender* SizeBlender::New1()
{
    SizeBlender* obj1 = (SizeBlender*)uNew(SizeBlender_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.40.8/internal/$.uno
// -----------------------------------------------------------------

// internal sealed class SizingContainer :351
// {
static void SizingContainer_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Internal::SizingContainer, absoluteZoom), 0,
        ::g::Fuse::Elements::Alignment_typeof(), offsetof(::g::Fuse::Internal::SizingContainer, align), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Internal::SizingContainer, padding), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Internal::SizingContainer, snapToPixels), 0,
        ::g::Fuse::Elements::StretchDirection_typeof(), offsetof(::g::Fuse::Internal::SizingContainer, stretchDirection), 0,
        ::g::Fuse::Elements::StretchMode_typeof(), offsetof(::g::Fuse::Internal::SizingContainer, stretchMode), 0,
        ::g::Fuse::Elements::StretchSizing_typeof(), offsetof(::g::Fuse::Internal::SizingContainer, stretchSizing), 0);
}

uType* SizingContainer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(SizingContainer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Internal.SizingContainer", options);
    type->fp_build_ = SizingContainer_build;
    type->fp_ctor_ = (void*)SizingContainer__New1_fn;
    return type;
}

// public generated SizingContainer() :351
void SizingContainer__ctor__fn(SizingContainer* __this)
{
    __this->ctor_();
}

// public float4 CalcClip(float2 availableSize, float2& origin, float2& contentActualSize) :575
void SizingContainer__CalcClip_fn(SizingContainer* __this, ::g::Uno::Float2* availableSize, ::g::Uno::Float2* origin, ::g::Uno::Float2* contentActualSize, ::g::Uno::Float4* __retval)
{
    *__retval = __this->CalcClip(*availableSize, origin, contentActualSize);
}

// public float2 CalcContentSize(float2 size, int2 pixelSize) :403
void SizingContainer__CalcContentSize_fn(SizingContainer* __this, ::g::Uno::Float2* size, ::g::Uno::Int2* pixelSize, ::g::Uno::Float2* __retval)
{
    *__retval = __this->CalcContentSize(*size, *pixelSize);
}

// public float2 CalcOrigin(float2 availableSize, float2 contentActualSize) :533
void SizingContainer__CalcOrigin_fn(SizingContainer* __this, ::g::Uno::Float2* availableSize, ::g::Uno::Float2* contentActualSize, ::g::Uno::Float2* __retval)
{
    *__retval = __this->CalcOrigin(*availableSize, *contentActualSize);
}

// public float2 CalcScale(float2 availableSize, float2 desiredSize) :398
void SizingContainer__CalcScale_fn(SizingContainer* __this, ::g::Uno::Float2* availableSize, ::g::Uno::Float2* desiredSize, ::g::Uno::Float2* __retval)
{
    *__retval = __this->CalcScale(*availableSize, *desiredSize);
}

// private float2 CalcScale(float2 availableSize, float2 desiredSize, bool autoWidth, bool autoHeight) :449
void SizingContainer__CalcScale1_fn(SizingContainer* __this, ::g::Uno::Float2* availableSize, ::g::Uno::Float2* desiredSize, bool* autoWidth, bool* autoHeight, ::g::Uno::Float2* __retval)
{
    *__retval = __this->CalcScale1(*availableSize, *desiredSize, *autoWidth, *autoHeight);
}

// public float2 ExpandFillSize(float2 size, Fuse.LayoutParams lp) :620
void SizingContainer__ExpandFillSize_fn(SizingContainer* __this, ::g::Uno::Float2* size, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ExpandFillSize(*size, *lp);
}

// public generated SizingContainer New() :351
void SizingContainer__New1_fn(SizingContainer** __retval)
{
    *__retval = SizingContainer::New1();
}

// private float get_PaddingHeight() :396
void SizingContainer__get_PaddingHeight_fn(SizingContainer* __this, float* __retval)
{
    *__retval = __this->PaddingHeight();
}

// private float get_PaddingWidth() :395
void SizingContainer__get_PaddingWidth_fn(SizingContainer* __this, float* __retval)
{
    *__retval = __this->PaddingWidth();
}

// public bool SetAlignment(Fuse.Elements.Alignment a) :374
void SizingContainer__SetAlignment_fn(SizingContainer* __this, int* a, bool* __retval)
{
    *__retval = __this->SetAlignment(*a);
}

// public bool SetStretchDirection(Fuse.Elements.StretchDirection dir) :366
void SizingContainer__SetStretchDirection_fn(SizingContainer* __this, int* dir, bool* __retval)
{
    *__retval = __this->SetStretchDirection(*dir);
}

// public bool SetStretchMode(Fuse.Elements.StretchMode mode) :358
void SizingContainer__SetStretchMode_fn(SizingContainer* __this, int* mode, bool* __retval)
{
    *__retval = __this->SetStretchMode(*mode);
}

// public bool SetStretchSizing(Fuse.Elements.StretchSizing ss) :382
void SizingContainer__SetStretchSizing_fn(SizingContainer* __this, int* ss, bool* __retval)
{
    *__retval = __this->SetStretchSizing(*ss);
}

// private float2 SnapSize(float2 sz) :444
void SizingContainer__SnapSize_fn(SizingContainer* __this, ::g::Uno::Float2* sz, ::g::Uno::Float2* __retval)
{
    *__retval = __this->SnapSize(*sz);
}

// public generated SizingContainer() [instance] :351
void SizingContainer::ctor_()
{
    uStackFrame __("Fuse.Internal.SizingContainer", ".ctor()");
    stretchMode = 5;
    align = 10;
    stretchSizing = 1;
    absoluteZoom = 1.0f;
}

// public float4 CalcClip(float2 availableSize, float2& origin, float2& contentActualSize) [instance] :575
::g::Uno::Float4 SizingContainer::CalcClip(::g::Uno::Float2 availableSize, ::g::Uno::Float2* origin, ::g::Uno::Float2* contentActualSize)
{
    uStackFrame __("Fuse.Internal.SizingContainer", "CalcClip(float2,float2&,float2&)");
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;

    if (((((*origin).X > availableSize.X) || (((*origin).X + (*contentActualSize).X) < 0.0f)) || ((*origin).Y > availableSize.Y)) || (((*origin).Y + (*contentActualSize).Y) < 0.0f))
    {
        *origin = ::g::Uno::Float2__New2(0.0f, 0.0f);
        *contentActualSize = ::g::Uno::Float2__New1(0.0f);
        return ::g::Uno::Float4__New2(0.0f, 0.0f, 1.0f, 1.0f);
    }

    ::g::Uno::Float2 tl = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), ::g::Uno::Float2__op_Division2(::g::Uno::Float2__op_Subtraction2((ind1 = padding, ::g::Uno::Float2__New2(ind1.X, ind1.Y)), *origin), *contentActualSize));
    ::g::Uno::Float2 br = ::g::Uno::Math::Min3(::g::Uno::Float2__New1(1.0f), ::g::Uno::Float2__op_Division2(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Subtraction2(availableSize, *origin), (ind2 = padding, ::g::Uno::Float2__New2(ind2.Z, ind2.W))), *contentActualSize));
    float dx = padding.X - (*origin).X;

    if (dx > 0.0f)
    {
        (*contentActualSize).X = ((*contentActualSize).X - dx);
        (*origin).X = padding.X;
    }

    dx = (((*origin).X + (*contentActualSize).X) - availableSize.X) + padding.Z;

    if (dx > 0.0f)
        (*contentActualSize).X = ((*contentActualSize).X - dx);

    float dy = padding.Y - (*origin).Y;

    if (dy > 0.0f)
    {
        (*contentActualSize).Y = ((*contentActualSize).Y - dy);
        (*origin).Y = padding.Y;
    }

    dy = (((*origin).Y + (*contentActualSize).Y) - availableSize.Y) + padding.W;

    if (dy > 0.0f)
        (*contentActualSize).Y = ((*contentActualSize).Y - dy);

    return ::g::Uno::Float4__New2(tl.X, tl.Y, br.X, br.Y);
}

// public float2 CalcContentSize(float2 size, int2 pixelSize) [instance] :403
::g::Uno::Float2 SizingContainer::CalcContentSize(::g::Uno::Float2 size, ::g::Uno::Int2 pixelSize)
{
    uStackFrame __("Fuse.Internal.SizingContainer", "CalcContentSize(float2,int2)");

    switch (stretchMode)
    {
        case 1:
        {
            if ((pixelSize.X == 0) || (pixelSize.Y == 0))
                return ::g::Uno::Float2__New1(0.0f);

            return ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)pixelSize.X, (float)pixelSize.Y), absoluteZoom);
        }
        case 2:
        {
            if ((pixelSize.X == 0) || (pixelSize.Y == 0))
                return ::g::Uno::Float2__New1(0.0f);

            ::g::Uno::Float2 exact = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)pixelSize.X, (float)pixelSize.Y), absoluteZoom);
            ::g::Uno::Float2 scale = ::g::Uno::Float2__op_Division2(size, exact);

            if (((double)scale.X > 0.75) && ((double)scale.X < 1.5))
                return exact;

            break;
        }
        default:
            break;
    }

    if (!snapToPixels)
        return size;

    return SnapSize(size);
}

// public float2 CalcOrigin(float2 availableSize, float2 contentActualSize) [instance] :533
::g::Uno::Float2 SizingContainer::CalcOrigin(::g::Uno::Float2 availableSize, ::g::Uno::Float2 contentActualSize)
{
    uStackFrame __("Fuse.Internal.SizingContainer", "CalcOrigin(float2,float2)");
    ::g::Uno::Float2 origin = ::g::Uno::Float2__New1(0.0f);

    switch (::g::Fuse::Elements::AlignmentHelpers::GetHorizontalAlign(align))
    {
        case 0:
        case 1:
        {
            origin.X = padding.Item(0);
            break;
        }
        case 2:
        {
            origin.X = (((((availableSize.X - padding.Item(0)) - padding.Item(2)) / 2.0f) - (contentActualSize.X / 2.0f)) + padding.Item(0));
            break;
        }
        case 3:
        {
            origin.X = ((availableSize.X - padding.Item(2)) - contentActualSize.X);
            break;
        }
    }

    switch (::g::Fuse::Elements::AlignmentHelpers::GetVerticalAlign(align))
    {
        case 0:
        case 4:
        {
            origin.Y = padding.Item(1);
            break;
        }
        case 8:
        {
            origin.Y = (((((availableSize.Y - padding.Item(1)) - padding.Item(3)) / 2.0f) - (contentActualSize.Y / 2.0f)) + padding.Item(1));
            break;
        }
        case 12:
        {
            origin.Y = ((availableSize.Y - padding.Item(3)) - contentActualSize.Y);
            break;
        }
    }

    if (snapToPixels)
        origin = SnapSize(origin);

    return origin;
}

// public float2 CalcScale(float2 availableSize, float2 desiredSize) [instance] :398
::g::Uno::Float2 SizingContainer::CalcScale(::g::Uno::Float2 availableSize, ::g::Uno::Float2 desiredSize)
{
    uStackFrame __("Fuse.Internal.SizingContainer", "CalcScale(float2,float2)");
    return CalcScale1(availableSize, desiredSize, false, false);
}

// private float2 CalcScale(float2 availableSize, float2 desiredSize, bool autoWidth, bool autoHeight) [instance] :449
::g::Uno::Float2 SizingContainer::CalcScale1(::g::Uno::Float2 availableSize, ::g::Uno::Float2 desiredSize, bool autoWidth, bool autoHeight)
{
    uStackFrame __("Fuse.Internal.SizingContainer", "CalcScale(float2,float2,bool,bool)");
    ::g::Uno::Float2 d = availableSize;
    d.X = (d.X - PaddingWidth());
    d.Y = (d.Y - PaddingHeight());
    ::g::Uno::Float2 scale = ::g::Uno::Float2__New1(1.0f);

    if ((autoWidth && autoHeight) && !(((stretchMode == 0) || (stretchMode == 1)) || (stretchMode == 2)))
    {
        if (stretchSizing == 0)
            scale = ::g::Uno::Float2__New1(0.0f);
        else 
            scale = ::g::Uno::Float2__New1(1.0f);
    }
    else 
    {
        ::g::Uno::Float2 s = ::g::Uno::Float2__New2((desiredSize.X < 1e-05f) ? 0.0f : d.X / desiredSize.X, (desiredSize.Y < 1e-05f) ? 0.0f : d.Y / desiredSize.Y);

        switch (stretchMode)
        {
            case 0:
            case 1:
            case 2:
            {
                scale = ::g::Uno::Float2__New1(1.0f);
                break;
            }
            case 4:
            case 3:
            {
                scale = autoWidth ? ::g::Uno::Float2__New1(s.Y) : autoHeight ? ::g::Uno::Float2__New1(s.X) : s;
                break;
            }
            case 5:
            {
                float sm = autoWidth ? s.Y : autoHeight ? s.X : ::g::Uno::Math::Min1(s.X, s.Y);
                scale = ::g::Uno::Float2__New1(sm);
                break;
            }
            case 6:
            {
                float sm1 = autoWidth ? s.Y : autoHeight ? s.X : ::g::Uno::Math::Max1(s.X, s.Y);
                scale = ::g::Uno::Float2__New1(sm1);
                break;
            }
        }
    }

    switch (stretchDirection)
    {
        case 0:
            break;
        case 2:
        {
            scale.X = ::g::Uno::Math::Min1(scale.X, 1.0f);
            scale.Y = ::g::Uno::Math::Min1(scale.Y, 1.0f);
            break;
        }
        case 1:
        {
            scale.X = ::g::Uno::Math::Max1(1.0f, scale.X);
            scale.Y = ::g::Uno::Math::Max1(1.0f, scale.Y);
            break;
        }
    }

    if ((snapToPixels && (desiredSize.X > 1e-05f)) && (desiredSize.Y > 1e-05f))
        scale = ::g::Uno::Float2__op_Division2(SnapSize(::g::Uno::Float2__op_Multiply2(scale, desiredSize)), desiredSize);

    return scale;
}

// public float2 ExpandFillSize(float2 size, Fuse.LayoutParams lp) [instance] :620
::g::Uno::Float2 SizingContainer::ExpandFillSize(::g::Uno::Float2 size, ::g::Fuse::LayoutParams lp)
{
    uStackFrame __("Fuse.Internal.SizingContainer", "ExpandFillSize(float2,Fuse.LayoutParams)");
    bool autoWidth = !lp.HasX();
    bool autoHeight = !lp.HasY();
    ::g::Uno::Float2 scale = CalcScale1(lp.Size(), size, autoWidth, autoHeight);
    ::g::Uno::Float2 res = ::g::Uno::Float2__op_Multiply2(scale, size);
    bool recalc = false;

    if (lp.HasMaxX() && (res.X > lp.MaxX()))
    {
        res.X = lp.MaxX();
        recalc = true;
        autoWidth = false;
    }

    if (lp.HasMaxY() && (res.Y > lp.MaxY()))
    {
        res.Y = lp.MaxY();
        recalc = true;
        autoHeight = false;
    }

    if (lp.HasMinX() && (res.X < lp.MinX()))
    {
        res.X = lp.MinX();
        recalc = true;
        autoWidth = false;
    }

    if (lp.HasMinY() && (res.Y < lp.MinY()))
    {
        res.Y = lp.MinY();
        recalc = true;
        autoHeight = false;
    }

    if (recalc)
    {
        scale = CalcScale1(res, size, autoWidth, autoHeight);
        res = ::g::Uno::Float2__op_Multiply2(scale, size);
    }

    return res;
}

// private float get_PaddingHeight() [instance] :396
float SizingContainer::PaddingHeight()
{
    uStackFrame __("Fuse.Internal.SizingContainer", "get_PaddingHeight()");
    return padding.Item(1) + padding.Item(3);
}

// private float get_PaddingWidth() [instance] :395
float SizingContainer::PaddingWidth()
{
    uStackFrame __("Fuse.Internal.SizingContainer", "get_PaddingWidth()");
    return padding.Item(0) + padding.Item(2);
}

// public bool SetAlignment(Fuse.Elements.Alignment a) [instance] :374
bool SizingContainer::SetAlignment(int a)
{
    uStackFrame __("Fuse.Internal.SizingContainer", "SetAlignment(Fuse.Elements.Alignment)");

    if (a == align)
        return false;

    align = a;
    return true;
}

// public bool SetStretchDirection(Fuse.Elements.StretchDirection dir) [instance] :366
bool SizingContainer::SetStretchDirection(int dir)
{
    uStackFrame __("Fuse.Internal.SizingContainer", "SetStretchDirection(Fuse.Elements.StretchDirection)");

    if (dir == stretchDirection)
        return false;

    stretchDirection = dir;
    return true;
}

// public bool SetStretchMode(Fuse.Elements.StretchMode mode) [instance] :358
bool SizingContainer::SetStretchMode(int mode)
{
    uStackFrame __("Fuse.Internal.SizingContainer", "SetStretchMode(Fuse.Elements.StretchMode)");

    if (mode == stretchMode)
        return false;

    stretchMode = mode;
    return true;
}

// public bool SetStretchSizing(Fuse.Elements.StretchSizing ss) [instance] :382
bool SizingContainer::SetStretchSizing(int ss)
{
    uStackFrame __("Fuse.Internal.SizingContainer", "SetStretchSizing(Fuse.Elements.StretchSizing)");

    if (ss == stretchSizing)
        return false;

    stretchSizing = ss;
    return true;
}

// private float2 SnapSize(float2 sz) [instance] :444
::g::Uno::Float2 SizingContainer::SnapSize(::g::Uno::Float2 sz)
{
    uStackFrame __("Fuse.Internal.SizingContainer", "SnapSize(float2)");
    return ::g::Uno::Float2__op_Division1(::g::Uno::Math::Round4(::g::Uno::Float2__op_Multiply1(sz, absoluteZoom)), absoluteZoom);
}

// public generated SizingContainer New() [static] :351
SizingContainer* SizingContainer::New1()
{
    SizingContainer* obj3 = (SizingContainer*)uNew(SizingContainer_typeof());
    obj3->ctor_();
    return obj3;
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/internal/$.uno
// ------------------------------------------------------------

// public static class Statistics :1030
// {
static void Statistics_build(uType* type)
{
    type->Reflection.SetFunctions(2,
        new uFunction("ContinuousFilterAlpha", NULL, (void*)Statistics__ContinuousFilterAlpha_fn, 0, true, ::g::Uno::Double_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("ExponentialMovingAverage", NULL, (void*)Statistics__ExponentialMovingAverage_fn, 0, true, ::g::Uno::Double_typeof(), 4, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()));
}

uClassType* Statistics_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Internal.Statistics", options);
    type->fp_build_ = Statistics_build;
    return type;
}

// public static double ContinuousFilterAlpha(double elapsed, double period) :1041
void Statistics__ContinuousFilterAlpha_fn(double* elapsed, double* period, double* __retval)
{
    *__retval = Statistics::ContinuousFilterAlpha(*elapsed, *period);
}

// public static double ExponentialMovingAverage(double current, double sample, double elapsed, double period) :1034
void Statistics__ExponentialMovingAverage_fn(double* current, double* sample, double* elapsed, double* period, double* __retval)
{
    *__retval = Statistics::ExponentialMovingAverage(*current, *sample, *elapsed, *period);
}

// public static double ContinuousFilterAlpha(double elapsed, double period) [static] :1041
double Statistics::ContinuousFilterAlpha(double elapsed, double period)
{
    uStackFrame __("Fuse.Internal.Statistics", "ContinuousFilterAlpha(double,double)");
    return 1.0 - ::g::Uno::Math::Pow(2.7182818284590451, -elapsed / period);
}

// public static double ExponentialMovingAverage(double current, double sample, double elapsed, double period) [static] :1034
double Statistics::ExponentialMovingAverage(double current, double sample, double elapsed, double period)
{
    uStackFrame __("Fuse.Internal.Statistics", "ExponentialMovingAverage(double,double,double,double)");
    double alpha = Statistics::ContinuousFilterAlpha(elapsed, period);
    return current + (alpha * (sample - current));
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/internal/$.uno
// ------------------------------------------------------------

// internal static class SystemFont :1094
// {
static void SystemFont_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::String_typeof();
}

uClassType* SystemFont_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Internal.SystemFont", options);
    type->fp_build_ = SystemFont_build;
    return type;
}

// public static Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> get_Default() :1098
void SystemFont__get_Default_fn(::g::Uno::Collections::List** __retval)
{
    *__retval = SystemFont::Default();
}

// public static Uno.Collections.HashSet<string> get_Families() :1130
void SystemFont__get_Families_fn(::g::Uno::Collections::HashSet** __retval)
{
    *__retval = SystemFont::Families();
}

// public static Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> Get(string family, [Fuse.SystemFont.Style style], [Fuse.SystemFont.Weight weight]) :1106
void SystemFont__Get_fn(uString* family, int* style, int* weight, ::g::Uno::Collections::List** __retval)
{
    *__retval = SystemFont::Get(family, *style, *weight);
}

// public static Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> GetFallback(Uno.UX.FileSource file) :1116
void SystemFont__GetFallback_fn(::g::Uno::UX::FileSource* file, ::g::Uno::Collections::List** __retval)
{
    *__retval = SystemFont::GetFallback(file);
}

// public static Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> Get(string family, [Fuse.SystemFont.Style style], [Fuse.SystemFont.Weight weight]) [static] :1106
::g::Uno::Collections::List* SystemFont::Get(uString* family, int style, int weight)
{
    uStackFrame __("Fuse.Internal.SystemFont", "Get(string,[Fuse.SystemFont.Style],[Fuse.SystemFont.Weight])");
    return ::g::Fuse::Internal::AndroidSystemFont::Get1(::g::Uno::String::op_Equality(family, NULL) ? uCast<uString*>(NULL, ::TYPES[0/*string*/]) : (uString*)::g::Uno::String::ToLower(uPtr(family)), style, weight);
}

// public static Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> GetFallback(Uno.UX.FileSource file) [static] :1116
::g::Uno::Collections::List* SystemFont::GetFallback(::g::Uno::UX::FileSource* file)
{
    uStackFrame __("Fuse.Internal.SystemFont", "GetFallback(Uno.UX.FileSource)");
    return ::g::Fuse::Internal::AndroidSystemFont::GetFallback(file);
}

// public static Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> get_Default() [static] :1098
::g::Uno::Collections::List* SystemFont::Default()
{
    uStackFrame __("Fuse.Internal.SystemFont", "get_Default()");
    return ::g::Fuse::Internal::AndroidSystemFont::Default();
}

// public static Uno.Collections.HashSet<string> get_Families() [static] :1130
::g::Uno::Collections::HashSet* SystemFont::Families()
{
    uStackFrame __("Fuse.Internal.SystemFont", "get_Families()");
    return ::g::Fuse::Internal::AndroidSystemFont::Families();
}
// }

// /usr/local/share/uno/Packages/FuseCore/0.40.8/internal/$.uno
// ------------------------------------------------------------

// internal static class VectorUtil :1147
// {
static void VectorUtil_build(uType* type)
{
}

uClassType* VectorUtil_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Internal.VectorUtil", options);
    type->fp_build_ = VectorUtil_build;
    return type;
}

// public static float Angle(float2 a, float2 b) :1178
void VectorUtil__Angle_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, float* __retval)
{
    *__retval = VectorUtil::Angle(*a, *b);
}

// public static float DistanceLine(float4 line, float2 p) :1186
void VectorUtil__DistanceLine_fn(::g::Uno::Float4* line, ::g::Uno::Float2* p, float* __retval)
{
    *__retval = VectorUtil::DistanceLine(*line, *p);
}

// public static float2 Projection(float2 a, float2 b) :1152
void VectorUtil__Projection_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval)
{
    *__retval = VectorUtil::Projection(*a, *b);
}

// public static float2 Rejection(float2 a, float2 b) :1168
void VectorUtil__Rejection_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval)
{
    *__retval = VectorUtil::Rejection(*a, *b);
}

// public static float ScalarProjection(float2 a, float2 b) :1160
void VectorUtil__ScalarProjection_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, float* __retval)
{
    *__retval = VectorUtil::ScalarProjection(*a, *b);
}

// public static float Angle(float2 a, float2 b) [static] :1178
float VectorUtil::Angle(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    uStackFrame __("Fuse.Internal.VectorUtil", "Angle(float2,float2)");
    return ::g::Uno::Math::Acos1(::g::Uno::Vector::Dot(a, b) / (::g::Uno::Vector::Length(a) * ::g::Uno::Vector::Length(b)));
}

// public static float DistanceLine(float4 line, float2 p) [static] :1186
float VectorUtil::DistanceLine(::g::Uno::Float4 line, ::g::Uno::Float2 p)
{
    uStackFrame __("Fuse.Internal.VectorUtil", "DistanceLine(float4,float2)");
    return ::g::Uno::Vector::Length(VectorUtil::Rejection(::g::Uno::Float2__op_Subtraction2(p, ::g::Uno::Float2__New2(line.X, line.Y)), ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(line.Z, line.W), ::g::Uno::Float2__New2(line.X, line.Y))));
}

// public static float2 Projection(float2 a, float2 b) [static] :1152
::g::Uno::Float2 VectorUtil::Projection(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    uStackFrame __("Fuse.Internal.VectorUtil", "Projection(float2,float2)");
    return ::g::Uno::Float2__op_Multiply(::g::Uno::Vector::Dot(a, b) / ::g::Uno::Vector::Dot(b, b), b);
}

// public static float2 Rejection(float2 a, float2 b) [static] :1168
::g::Uno::Float2 VectorUtil::Rejection(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    uStackFrame __("Fuse.Internal.VectorUtil", "Rejection(float2,float2)");
    ::g::Uno::Float2 a1 = VectorUtil::Projection(a, b);
    return ::g::Uno::Float2__op_Subtraction2(a, a1);
}

// public static float ScalarProjection(float2 a, float2 b) [static] :1160
float VectorUtil::ScalarProjection(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    uStackFrame __("Fuse.Internal.VectorUtil", "ScalarProjection(float2,float2)");
    return ::g::Uno::Vector::Dot(a, b) / ::g::Uno::Vector::Length(b);
}
// }

}}} // ::g::Fuse::Internal
