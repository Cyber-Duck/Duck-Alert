// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Action-1.h>
#include <Uno.ArgumentException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.InvalidOperationException.h>
#include <Uno.IO.BinaryReader.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.MemoryStream.h>
#include <Uno.IO.Stream.h>
#include <Uno.IO.StreamReader.h>
#include <Uno.Long.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.Threading.Monitor.h>
#include <Uno.Type.h>
#include <Uno.UX.AddOperator.h>
#include <Uno.UX.BinaryOperator.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.DivideOperator.h>
#include <Uno.UX.Expression-1.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Float2Value.h>
#include <Uno.UX.Float3Value.h>
#include <Uno.UX.Float4Value.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.IValueConvertible.h>
#include <Uno.UX.MultiplyOperator.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.NumberValue.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.SelectorRegistry.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Size2.h>
#include <Uno.UX.Size2Value.h>
#include <Uno.UX.SizeValue.h>
#include <Uno.UX.StreamExtensions.h>
#include <Uno.UX.StringValue.h>
#include <Uno.UX.SubtractOperator.h>
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>
#include <Uno.UX.UXAutoNameTableAttribute.h>
#include <Uno.UX.UXComponentsAttribute.h>
#include <Uno.UX.UXConstructorAttribute.h>
#include <Uno.UX.UXContentAttribute.h>
#include <Uno.UX.UXFileNameAttribute.h>
#include <Uno.UX.UXFreestandingAttribute.h>
#include <Uno.UX.UXGlobalModuleAttribute.h>
#include <Uno.UX.UXGlobalResourceAttribute.h>
#include <Uno.UX.UXLineNumberAttribute.h>
#include <Uno.UX.UXNameAttribute.h>
#include <Uno.UX.UXPrimaryAttribute.h>
#include <Uno.UX.UXSourceFileNameAttribute.h>
#include <Uno.UX.UXValueBindingArgumentAttribute.h>
#include <Uno.UX.UXValueBindingTargetAttribute.h>
#include <Uno.UX.Value.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uString* STRINGS[15];
static uType* TYPES[27];

namespace g{
namespace Uno{
namespace UX{

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/$.uno
// ----------------------------------------------------------------

// public sealed class AddOperator :383
// {
static void AddOperator_build(uType* type)
{
    type->SetFields(6);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)AddOperator__New2_fn, 0, true, AddOperator_typeof(), 0));
}

::g::Uno::UX::BinaryOperator_type* AddOperator_typeof()
{
    static uSStrong< ::g::Uno::UX::BinaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::BinaryOperator_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(AddOperator);
    options.TypeSize = sizeof(::g::Uno::UX::BinaryOperator_type);
    type = (::g::Uno::UX::BinaryOperator_type*)uClassType::New("Uno.UX.AddOperator", options);
    type->fp_build_ = AddOperator_build;
    type->fp_ctor_ = (void*)AddOperator__New2_fn;
    type->fp_Compute = (void(*)(::g::Uno::UX::BinaryOperator*, ::g::Uno::UX::Value*, ::g::Uno::UX::Value*, ::g::Uno::UX::Value**))AddOperator__Compute_fn;
    return type;
}

// public generated AddOperator() :383
void AddOperator__ctor_2_fn(AddOperator* __this)
{
    __this->ctor_2();
}

// protected override sealed Uno.UX.Value Compute(Uno.UX.Value a, Uno.UX.Value b) :385
void AddOperator__Compute_fn(AddOperator* __this, ::g::Uno::UX::Value* a, ::g::Uno::UX::Value* b, ::g::Uno::UX::Value** __retval)
{
    uStackFrame __("Uno.UX.AddOperator", "Compute(Uno.UX.Value,Uno.UX.Value)");
    return *__retval = uPtr(a)->Add(b), void();
}

// public generated AddOperator New() :383
void AddOperator__New2_fn(AddOperator** __retval)
{
    *__retval = AddOperator::New2();
}

// public generated AddOperator() [instance] :383
void AddOperator::ctor_2()
{
    uStackFrame __("Uno.UX.AddOperator", ".ctor()");
    ctor_1();
}

// public generated AddOperator New() [static] :383
AddOperator* AddOperator::New2()
{
    AddOperator* obj1 = (AddOperator*)uNew(AddOperator_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/$.uno
// ----------------------------------------------------------------

// public abstract class BinaryOperator :340
// {
static void BinaryOperator_build(uType* type)
{
    type->SetFields(1,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::UX::BinaryOperator, _hasLeft), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::UX::BinaryOperator, _hasRight), 0,
        ::g::Uno::UX::Value_typeof(), offsetof(::g::Uno::UX::BinaryOperator, _left), 0,
        ::g::Uno::UX::Value_typeof(), offsetof(::g::Uno::UX::BinaryOperator, _right), 0,
        ::g::Uno::UX::Property_typeof(), offsetof(::g::Uno::UX::BinaryOperator, _Target), 0);
    type->Reflection.SetFunctions(6,
        new uFunction("get_Left", NULL, (void*)BinaryOperator__get_Left_fn, 0, false, ::g::Uno::UX::Value_typeof(), 0),
        new uFunction("set_Left", NULL, (void*)BinaryOperator__set_Left_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Value_typeof()),
        new uFunction("get_Right", NULL, (void*)BinaryOperator__get_Right_fn, 0, false, ::g::Uno::UX::Value_typeof(), 0),
        new uFunction("set_Right", NULL, (void*)BinaryOperator__set_Right_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Value_typeof()),
        new uFunction("get_Target", NULL, (void*)BinaryOperator__get_Target_fn, 0, false, ::g::Uno::UX::Property_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)BinaryOperator__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Property_typeof()));
}

BinaryOperator_type* BinaryOperator_typeof()
{
    static uSStrong<BinaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(BinaryOperator);
    options.TypeSize = sizeof(BinaryOperator_type);
    type = (BinaryOperator_type*)uClassType::New("Uno.UX.BinaryOperator", options);
    type->fp_build_ = BinaryOperator_build;
    return type;
}

// protected generated BinaryOperator() :340
void BinaryOperator__ctor_1_fn(BinaryOperator* __this)
{
    __this->ctor_1();
}

// public Uno.UX.Value get_Left() :354
void BinaryOperator__get_Left_fn(BinaryOperator* __this, ::g::Uno::UX::Value** __retval)
{
    *__retval = __this->Left();
}

// public void set_Left(Uno.UX.Value value) :355
void BinaryOperator__set_Left_fn(BinaryOperator* __this, ::g::Uno::UX::Value* value)
{
    __this->Left(value);
}

// public Uno.UX.Value get_Right() :365
void BinaryOperator__get_Right_fn(BinaryOperator* __this, ::g::Uno::UX::Value** __retval)
{
    *__retval = __this->Right();
}

// public void set_Right(Uno.UX.Value value) :366
void BinaryOperator__set_Right_fn(BinaryOperator* __this, ::g::Uno::UX::Value* value)
{
    __this->Right(value);
}

// private void SetValue(Uno.UX.Value v) :374
void BinaryOperator__SetValue_fn(BinaryOperator* __this, ::g::Uno::UX::Value* v)
{
    __this->SetValue(v);
}

// public generated Uno.UX.Property get_Target() :344
void BinaryOperator__get_Target_fn(BinaryOperator* __this, ::g::Uno::UX::Property** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Uno.UX.Property value) :345
void BinaryOperator__set_Target_fn(BinaryOperator* __this, ::g::Uno::UX::Property* value)
{
    __this->Target(value);
}

// protected generated BinaryOperator() [instance] :340
void BinaryOperator::ctor_1()
{
    uStackFrame __("Uno.UX.BinaryOperator", ".ctor()");
    ctor_();
}

// public Uno.UX.Value get_Left() [instance] :354
::g::Uno::UX::Value* BinaryOperator::Left()
{
    uStackFrame __("Uno.UX.BinaryOperator", "get_Left()");
    return _left;
}

// public void set_Left(Uno.UX.Value value) [instance] :355
void BinaryOperator::Left(::g::Uno::UX::Value* value)
{
    uStackFrame __("Uno.UX.BinaryOperator", "set_Left(Uno.UX.Value)");
    _left = value;
    _hasLeft = true;

    if (_hasRight)
        SetValue(Compute(_left, _right));
}

// public Uno.UX.Value get_Right() [instance] :365
::g::Uno::UX::Value* BinaryOperator::Right()
{
    uStackFrame __("Uno.UX.BinaryOperator", "get_Right()");
    return _right;
}

// public void set_Right(Uno.UX.Value value) [instance] :366
void BinaryOperator::Right(::g::Uno::UX::Value* value)
{
    uStackFrame __("Uno.UX.BinaryOperator", "set_Right(Uno.UX.Value)");
    _right = value;
    _hasRight = true;

    if (_hasLeft)
        SetValue(Compute(_left, _right));
}

// private void SetValue(Uno.UX.Value v) [instance] :374
void BinaryOperator::SetValue(::g::Uno::UX::Value* v)
{
    uStackFrame __("Uno.UX.BinaryOperator", "SetValue(Uno.UX.Value)");

    if (Target() != NULL)
        uPtr(Target())->SetAsObject(::g::Uno::UX::Value::Cast(uPtr(Target())->PropertyType(), v), NULL);
}

// public generated Uno.UX.Property get_Target() [instance] :344
::g::Uno::UX::Property* BinaryOperator::Target()
{
    uStackFrame __("Uno.UX.BinaryOperator", "get_Target()");
    return _Target;
}

// public generated void set_Target(Uno.UX.Property value) [instance] :345
void BinaryOperator::Target(::g::Uno::UX::Property* value)
{
    uStackFrame __("Uno.UX.BinaryOperator", "set_Target(Uno.UX.Property)");
    _Target = value;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/$.uno
// ----------------------------------------------------------------

// public sealed class BundleFileSource :8
// {
static void BundleFileSource_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof());
    type->SetFields(2,
        ::g::Uno::IO::BundleFile_typeof(), offsetof(::g::Uno::UX::BundleFileSource, BundleFile), 0);
    type->Reflection.SetFields(1,
        new uField("BundleFile", 2));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)BundleFileSource__New1_fn, 0, true, BundleFileSource_typeof(), 1, ::g::Uno::IO::BundleFile_typeof()));
}

::g::Uno::UX::FileSource_type* BundleFileSource_typeof()
{
    static uSStrong< ::g::Uno::UX::FileSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::FileSource_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(BundleFileSource);
    options.TypeSize = sizeof(::g::Uno::UX::FileSource_type);
    type = (::g::Uno::UX::FileSource_type*)uClassType::New("Uno.UX.BundleFileSource", options);
    type->fp_build_ = BundleFileSource_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))BundleFileSource__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))BundleFileSource__GetHashCode_fn;
    type->fp_OpenRead = (void(*)(::g::Uno::UX::FileSource*, ::g::Uno::IO::Stream**))BundleFileSource__OpenRead_fn;
    type->fp_ReadAllBytes = (void(*)(::g::Uno::UX::FileSource*, uArray**))BundleFileSource__ReadAllBytes_fn;
    type->fp_ReadAllText = (void(*)(::g::Uno::UX::FileSource*, uString**))BundleFileSource__ReadAllText_fn;
    return type;
}

// public BundleFileSource(Uno.IO.BundleFile bundleFile) :11
void BundleFileSource__ctor_1_fn(BundleFileSource* __this, ::g::Uno::IO::BundleFile* bundleFile)
{
    __this->ctor_1(bundleFile);
}

// public override sealed bool Equals(object o) :37
void BundleFileSource__Equals_fn(BundleFileSource* __this, uObject* o, bool* __retval)
{
    uStackFrame __("Uno.UX.BundleFileSource", "Equals(object)");
    BundleFileSource* bfs = uAs<BundleFileSource*>(o, BundleFileSource_typeof());

    if (bfs == NULL)
        return *__retval = false, void();

    return *__retval = ::g::Uno::Object::Equals(uPtr(uPtr(bfs)->BundleFile), __this->BundleFile), void();
}

// public override sealed int GetHashCode() :46
void BundleFileSource__GetHashCode_fn(BundleFileSource* __this, int* __retval)
{
    uStackFrame __("Uno.UX.BundleFileSource", "GetHashCode()");
    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(__this->BundleFile)), void();
}

// public BundleFileSource New(Uno.IO.BundleFile bundleFile) :11
void BundleFileSource__New1_fn(::g::Uno::IO::BundleFile* bundleFile, BundleFileSource** __retval)
{
    *__retval = BundleFileSource::New1(bundleFile);
}

// private void OnChanged(Uno.IO.BundleFile bf) :17
void BundleFileSource__OnChanged_fn(BundleFileSource* __this, ::g::Uno::IO::BundleFile* bf)
{
    __this->OnChanged(bf);
}

// public override sealed Uno.IO.Stream OpenRead() :22
void BundleFileSource__OpenRead_fn(BundleFileSource* __this, ::g::Uno::IO::Stream** __retval)
{
    uStackFrame __("Uno.UX.BundleFileSource", "OpenRead()");
    return *__retval = uPtr(__this->BundleFile)->OpenRead(), void();
}

// public override sealed byte[] ReadAllBytes() :27
void BundleFileSource__ReadAllBytes_fn(BundleFileSource* __this, uArray** __retval)
{
    uStackFrame __("Uno.UX.BundleFileSource", "ReadAllBytes()");
    return *__retval = uPtr(__this->BundleFile)->ReadAllBytes(), void();
}

// public override sealed string ReadAllText() :32
void BundleFileSource__ReadAllText_fn(BundleFileSource* __this, uString** __retval)
{
    uStackFrame __("Uno.UX.BundleFileSource", "ReadAllText()");
    return *__retval = uPtr(__this->BundleFile)->ReadAllText(), void();
}

// public BundleFileSource(Uno.IO.BundleFile bundleFile) [instance] :11
void BundleFileSource::ctor_1(::g::Uno::IO::BundleFile* bundleFile)
{
    uStackFrame __("Uno.UX.BundleFileSource", ".ctor(Uno.IO.BundleFile)");
    ctor_(uPtr(bundleFile)->SourcePath());
    BundleFile = bundleFile;
    uPtr(BundleFile)->add_Changed(uDelegate::New(::TYPES[0/*Uno.Action<Uno.IO.BundleFile>*/], (void*)BundleFileSource__OnChanged_fn, this));
}

// private void OnChanged(Uno.IO.BundleFile bf) [instance] :17
void BundleFileSource::OnChanged(::g::Uno::IO::BundleFile* bf)
{
    uStackFrame __("Uno.UX.BundleFileSource", "OnChanged(Uno.IO.BundleFile)");
    OnDataChanged();
}

// public BundleFileSource New(Uno.IO.BundleFile bundleFile) [static] :11
BundleFileSource* BundleFileSource::New1(::g::Uno::IO::BundleFile* bundleFile)
{
    BundleFileSource* obj1 = (BundleFileSource*)uNew(BundleFileSource_typeof());
    obj1->ctor_1(bundleFile);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/$.uno
// ----------------------------------------------------------------

// public sealed class DivideOperator :401
// {
static void DivideOperator_build(uType* type)
{
    type->SetFields(6);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DivideOperator__New2_fn, 0, true, DivideOperator_typeof(), 0));
}

::g::Uno::UX::BinaryOperator_type* DivideOperator_typeof()
{
    static uSStrong< ::g::Uno::UX::BinaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::BinaryOperator_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(DivideOperator);
    options.TypeSize = sizeof(::g::Uno::UX::BinaryOperator_type);
    type = (::g::Uno::UX::BinaryOperator_type*)uClassType::New("Uno.UX.DivideOperator", options);
    type->fp_build_ = DivideOperator_build;
    type->fp_ctor_ = (void*)DivideOperator__New2_fn;
    type->fp_Compute = (void(*)(::g::Uno::UX::BinaryOperator*, ::g::Uno::UX::Value*, ::g::Uno::UX::Value*, ::g::Uno::UX::Value**))DivideOperator__Compute_fn;
    return type;
}

// public generated DivideOperator() :401
void DivideOperator__ctor_2_fn(DivideOperator* __this)
{
    __this->ctor_2();
}

// protected override sealed Uno.UX.Value Compute(Uno.UX.Value a, Uno.UX.Value b) :403
void DivideOperator__Compute_fn(DivideOperator* __this, ::g::Uno::UX::Value* a, ::g::Uno::UX::Value* b, ::g::Uno::UX::Value** __retval)
{
    uStackFrame __("Uno.UX.DivideOperator", "Compute(Uno.UX.Value,Uno.UX.Value)");
    return *__retval = uPtr(a)->Divide(b), void();
}

// public generated DivideOperator New() :401
void DivideOperator__New2_fn(DivideOperator** __retval)
{
    *__retval = DivideOperator::New2();
}

// public generated DivideOperator() [instance] :401
void DivideOperator::ctor_2()
{
    uStackFrame __("Uno.UX.DivideOperator", ".ctor()");
    ctor_1();
}

// public generated DivideOperator New() [static] :401
DivideOperator* DivideOperator::New2()
{
    DivideOperator* obj1 = (DivideOperator*)uNew(DivideOperator_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.40.8/actions/$.uno
// ----------------------------------------------------------------

// public delegate T Expression<T>() :611
uDelegateType* Expression_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.UX.Expression`1", 0, 1);
    type->SetSignature(type->T(0));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/$.uno
// ----------------------------------------------------------------

// public abstract class FileSource :261
// {
static void FileSource_build(uType* type)
{
    ::STRINGS[0] = uString::Const("File name can't be null");
    ::STRINGS[1] = uString::Const("name");
    ::TYPES[1] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof());
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::UX::FileSource, Name), 0,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof()), offsetof(::g::Uno::UX::FileSource, DataChanged1), 0);
    type->Reflection.SetFields(1,
        new uField("Name", 0));
    type->Reflection.SetFunctions(6,
        new uFunction("add_DataChanged", NULL, (void*)FileSource__add_DataChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof())),
        new uFunction("remove_DataChanged", NULL, (void*)FileSource__remove_DataChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof())),
        new uFunction("OnDataChanged", NULL, (void*)FileSource__OnDataChanged_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("OpenRead", NULL, NULL, offsetof(FileSource_type, fp_OpenRead), false, ::g::Uno::IO::Stream_typeof(), 0),
        new uFunction("ReadAllBytes", NULL, NULL, offsetof(FileSource_type, fp_ReadAllBytes), false, ::g::Uno::Byte_typeof()->Array(), 0),
        new uFunction("ReadAllText", NULL, NULL, offsetof(FileSource_type, fp_ReadAllText), false, ::g::Uno::String_typeof(), 0));
}

FileSource_type* FileSource_typeof()
{
    static uSStrong<FileSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FileSource);
    options.TypeSize = sizeof(FileSource_type);
    type = (FileSource_type*)uClassType::New("Uno.UX.FileSource", options);
    type->fp_build_ = FileSource_build;
    type->fp_ReadAllBytes = FileSource__ReadAllBytes_fn;
    type->fp_ReadAllText = FileSource__ReadAllText_fn;
    return type;
}

// protected FileSource(string name) :274
void FileSource__ctor__fn(FileSource* __this, uString* name)
{
    __this->ctor_(name);
}

// public generated void add_DataChanged(Uno.EventHandler<Uno.EventArgs> value) :265
void FileSource__add_DataChanged_fn(FileSource* __this, uDelegate* value)
{
    __this->add_DataChanged(value);
}

// public generated void remove_DataChanged(Uno.EventHandler<Uno.EventArgs> value) :265
void FileSource__remove_DataChanged_fn(FileSource* __this, uDelegate* value)
{
    __this->remove_DataChanged(value);
}

// public void OnDataChanged() :267
void FileSource__OnDataChanged_fn(FileSource* __this)
{
    __this->OnDataChanged();
}

// public static implicit operator Uno.UX.FileSource(Uno.IO.BundleFile bundleFile) :282
void FileSource__op_Implicit_fn(::g::Uno::IO::BundleFile* bundleFile, FileSource** __retval)
{
    *__retval = FileSource::op_Implicit(bundleFile);
}

// public virtual byte[] ReadAllBytes() :289
void FileSource__ReadAllBytes_fn(FileSource* __this, uArray** __retval)
{
    uStackFrame __("Uno.UX.FileSource", "ReadAllBytes()");
    return *__retval = ::g::Uno::UX::StreamExtensions::ReadAllBytes(::g::Uno::IO::BinaryReader::New1(__this->OpenRead())), void();
}

// public virtual string ReadAllText() :294
void FileSource__ReadAllText_fn(FileSource* __this, uString** __retval)
{
    uStackFrame __("Uno.UX.FileSource", "ReadAllText()");
    return *__retval = ::g::Uno::IO::StreamReader::New1(__this->OpenRead())->ReadToEnd(), void();
}

// protected FileSource(string name) [instance] :274
void FileSource::ctor_(uString* name)
{
    uStackFrame __("Uno.UX.FileSource", ".ctor(string)");

    if (::g::Uno::String::op_Equality(name, NULL))
        U_THROW(::g::Uno::ArgumentException::New5(::STRINGS[0/*"File name c...*/], ::STRINGS[1/*"name"*/]));

    Name = name;
}

// public generated void add_DataChanged(Uno.EventHandler<Uno.EventArgs> value) [instance] :265
void FileSource::add_DataChanged(uDelegate* value)
{
    uStackFrame __("Uno.UX.FileSource", "add_DataChanged(Uno.EventHandler<Uno.EventArgs>)");
    DataChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(DataChanged1, value), ::TYPES[1/*Uno.EventHandler<Uno.EventArgs>*/]);
}

// public generated void remove_DataChanged(Uno.EventHandler<Uno.EventArgs> value) [instance] :265
void FileSource::remove_DataChanged(uDelegate* value)
{
    uStackFrame __("Uno.UX.FileSource", "remove_DataChanged(Uno.EventHandler<Uno.EventArgs>)");
    DataChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(DataChanged1, value), ::TYPES[1/*Uno.EventHandler<Uno.EventArgs>*/]);
}

// public void OnDataChanged() [instance] :267
void FileSource::OnDataChanged()
{
    uStackFrame __("Uno.UX.FileSource", "OnDataChanged()");
    uDelegate* dataChanged = DataChanged1;

    if (::g::Uno::Delegate::op_Inequality(dataChanged, NULL))
        uPtr(dataChanged)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// public static implicit operator Uno.UX.FileSource(Uno.IO.BundleFile bundleFile) [static] :282
FileSource* FileSource::op_Implicit(::g::Uno::IO::BundleFile* bundleFile)
{
    uStackFrame __("Uno.UX.FileSource", "op_Implicit(Uno.IO.BundleFile)~Uno.UX.FileSource");
    return ::g::Uno::UX::BundleFileSource::New1(bundleFile);
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/$.uno
// ----------------------------------------------------------------

// internal sealed class Float2Value :1234
// {
static void Float2Value_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Float2_typeof();
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Uno::UX::Float2Value, _value), 0);
}

::g::Uno::UX::Value_type* Float2Value_typeof()
{
    static uSStrong< ::g::Uno::UX::Value_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Value_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Float2Value);
    options.TypeSize = sizeof(::g::Uno::UX::Value_type);
    type = (::g::Uno::UX::Value_type*)uClassType::New("Uno.UX.Float2Value", options);
    type->fp_build_ = Float2Value_build;
    type->fp_Add = (void(*)(::g::Uno::UX::Value*, ::g::Uno::UX::Value*, ::g::Uno::UX::Value**))Float2Value__Add_fn;
    type->fp_Divide = (void(*)(::g::Uno::UX::Value*, ::g::Uno::UX::Value*, ::g::Uno::UX::Value**))Float2Value__Divide_fn;
    type->fp_Multiply = (void(*)(::g::Uno::UX::Value*, ::g::Uno::UX::Value*, ::g::Uno::UX::Value**))Float2Value__Multiply_fn;
    type->fp_Subtract = (void(*)(::g::Uno::UX::Value*, ::g::Uno::UX::Value*, ::g::Uno::UX::Value**))Float2Value__Subtract_fn;
    type->fp_ToDouble = (void(*)(::g::Uno::UX::Value*, double*))Float2Value__ToDouble_fn;
    type->fp_ToFloat = (void(*)(::g::Uno::UX::Value*, float*))Float2Value__ToFloat_fn;
    type->fp_ToFloat2 = (void(*)(::g::Uno::UX::Value*, ::g::Uno::Float2*))Float2Value__ToFloat2_fn;
    type->fp_ToObject = (void(*)(::g::Uno::UX::Value*, uObject**))Float2Value__ToObject_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Float2Value__ToString_fn;
    return type;
}

// public Float2Value(float2 value) :1237
void Float2Value__ctor_1_fn(Float2Value* __this, ::g::Uno::Float2* value)
{
    __this->ctor_1(*value);
}

// public override sealed Uno.UX.Value Add(Uno.UX.Value v) :1242
void Float2Value__Add_fn(Float2Value* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval)
{
    uStackFrame __("Uno.UX.Float2Value", "Add(Uno.UX.Value)");
    return *__retval = ::g::Uno::UX::Value::op_Implicit2(::g::Uno::Float2__op_Addition2(__this->_value, uPtr(v)->ToFloat2())), void();
}

// public override sealed Uno.UX.Value Divide(Uno.UX.Value v) :1245
void Float2Value__Divide_fn(Float2Value* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval)
{
    uStackFrame __("Uno.UX.Float2Value", "Divide(Uno.UX.Value)");
    return *__retval = ::g::Uno::UX::Value::op_Implicit2(::g::Uno::Float2__op_Division2(__this->_value, uPtr(v)->ToFloat2())), void();
}

// public override sealed Uno.UX.Value Multiply(Uno.UX.Value v) :1244
void Float2Value__Multiply_fn(Float2Value* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval)
{
    uStackFrame __("Uno.UX.Float2Value", "Multiply(Uno.UX.Value)");
    return *__retval = ::g::Uno::UX::Value::op_Implicit2(::g::Uno::Float2__op_Multiply2(__this->_value, uPtr(v)->ToFloat2())), void();
}

// public Float2Value New(float2 value) :1237
void Float2Value__New1_fn(::g::Uno::Float2* value, Float2Value** __retval)
{
    *__retval = Float2Value::New1(*value);
}

// public override sealed Uno.UX.Value Subtract(Uno.UX.Value v) :1243
void Float2Value__Subtract_fn(Float2Value* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval)
{
    uStackFrame __("Uno.UX.Float2Value", "Subtract(Uno.UX.Value)");
    return *__retval = ::g::Uno::UX::Value::op_Implicit2(::g::Uno::Float2__op_Subtraction2(__this->_value, uPtr(v)->ToFloat2())), void();
}

// public override sealed double ToDouble() :1238
void Float2Value__ToDouble_fn(Float2Value* __this, double* __retval)
{
    uStackFrame __("Uno.UX.Float2Value", "ToDouble()");
    return *__retval = (double)__this->_value.X, void();
}

// public override sealed float ToFloat() :1240
void Float2Value__ToFloat_fn(Float2Value* __this, float* __retval)
{
    uStackFrame __("Uno.UX.Float2Value", "ToFloat()");
    return *__retval = __this->_value.X, void();
}

// public override sealed float2 ToFloat2() :1241
void Float2Value__ToFloat2_fn(Float2Value* __this, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Uno.UX.Float2Value", "ToFloat2()");
    return *__retval = __this->_value, void();
}

// public override sealed object ToObject() :1239
void Float2Value__ToObject_fn(Float2Value* __this, uObject** __retval)
{
    uStackFrame __("Uno.UX.Float2Value", "ToObject()");
    return *__retval = uBox(::TYPES[2/*float2*/], __this->_value), void();
}

// public override sealed string ToString() :1246
void Float2Value__ToString_fn(Float2Value* __this, uString** __retval)
{
    uStackFrame __("Uno.UX.Float2Value", "ToString()");
    return *__retval = __this->_value.ToString(::TYPES[2/*float2*/]), void();
}

// public Float2Value(float2 value) [instance] :1237
void Float2Value::ctor_1(::g::Uno::Float2 value)
{
    uStackFrame __("Uno.UX.Float2Value", ".ctor(float2)");
    ctor_();
    _value = value;
}

// public Float2Value New(float2 value) [static] :1237
Float2Value* Float2Value::New1(::g::Uno::Float2 value)
{
    Float2Value* obj1 = (Float2Value*)uNew(Float2Value_typeof());
    obj1->ctor_1(value);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/$.uno
// ----------------------------------------------------------------

// internal sealed class Float3Value :1249
// {
static void Float3Value_build(uType* type)
{
    ::TYPES[3] = ::g::Uno::Float3_typeof();
    type->SetFields(0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Uno::UX::Float3Value, _value), 0);
}

::g::Uno::UX::Value_type* Float3Value_typeof()
{
    static uSStrong< ::g::Uno::UX::Value_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Value_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Float3Value);
    options.TypeSize = sizeof(::g::Uno::UX::Value_type);
    type = (::g::Uno::UX::Value_type*)uClassType::New("Uno.UX.Float3Value", options);
    type->fp_build_ = Float3Value_build;
    type->fp_Add = (void(*)(::g::Uno::UX::Value*, ::g::Uno::UX::Value*, ::g::Uno::UX::Value**))Float3Value__Add_fn;
    type->fp_Divide = (void(*)(::g::Uno::UX::Value*, ::g::Uno::UX::Value*, ::g::Uno::UX::Value**))Float3Value__Divide_fn;
    type->fp_Multiply = (void(*)(::g::Uno::UX::Value*, ::g::Uno::UX::Value*, ::g::Uno::UX::Value**))Float3Value__Multiply_fn;
    type->fp_Subtract = (void(*)(::g::Uno::UX::Value*, ::g::Uno::UX::Value*, ::g::Uno::UX::Value**))Float3Value__Subtract_fn;
    type->fp_ToDouble = (void(*)(::g::Uno::UX::Value*, double*))Float3Value__ToDouble_fn;
    type->fp_ToFloat = (void(*)(::g::Uno::UX::Value*, float*))Float3Value__ToFloat_fn;
    type->fp_ToFloat2 = (void(*)(::g::Uno::UX::Value*, ::g::Uno::Float2*))Float3Value__ToFloat2_fn;
    type->fp_ToFloat3 = (void(*)(::g::Uno::UX::Value*, ::g::Uno::Float3*))Float3Value__ToFloat3_fn;
    type->fp_ToFloat4 = (void(*)(::g::Uno::UX::Value*, ::g::Uno::Float4*))Float3Value__ToFloat4_fn;
    type->fp_ToObject = (void(*)(::g::Uno::UX::Value*, uObject**))Float3Value__ToObject_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Float3Value__ToString_fn;
    return type;
}

// public Float3Value(float3 value) :1252
void Float3Value__ctor_1_fn(Float3Value* __this, ::g::Uno::Float3* value)
{
    __this->ctor_1(*value);
}

// public override sealed Uno.UX.Value Add(Uno.UX.Value v) :1259
void Float3Value__Add_fn(Float3Value* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval)
{
    uStackFrame __("Uno.UX.Float3Value", "Add(Uno.UX.Value)");
    return *__retval = ::g::Uno::UX::Value::op_Implicit3(::g::Uno::Float3__op_Addition2(__this->_value, uPtr(v)->ToFloat3())), void();
}

// public override sealed Uno.UX.Value Divide(Uno.UX.Value v) :1262
void Float3Value__Divide_fn(Float3Value* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval)
{
    uStackFrame __("Uno.UX.Float3Value", "Divide(Uno.UX.Value)");
    return *__retval = ::g::Uno::UX::Value::op_Implicit3(::g::Uno::Float3__op_Division2(__this->_value, uPtr(v)->ToFloat3())), void();
}

// public override sealed Uno.UX.Value Multiply(Uno.UX.Value v) :1261
void Float3Value__Multiply_fn(Float3Value* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval)
{
    uStackFrame __("Uno.UX.Float3Value", "Multiply(Uno.UX.Value)");
    return *__retval = ::g::Uno::UX::Value::op_Implicit3(::g::Uno::Float3__op_Multiply2(__this->_value, uPtr(v)->ToFloat3())), void();
}

// public Float3Value New(float3 value) :1252
void Float3Value__New1_fn(::g::Uno::Float3* value, Float3Value** __retval)
{
    *__retval = Float3Value::New1(*value);
}

// public override sealed Uno.UX.Value Subtract(Uno.UX.Value v) :1260
void Float3Value__Subtract_fn(Float3Value* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval)
{
    uStackFrame __("Uno.UX.Float3Value", "Subtract(Uno.UX.Value)");
    return *__retval = ::g::Uno::UX::Value::op_Implicit3(::g::Uno::Float3__op_Subtraction2(__this->_value, uPtr(v)->ToFloat3())), void();
}

// public override sealed double ToDouble() :1253
void Float3Value__ToDouble_fn(Float3Value* __this, double* __retval)
{
    uStackFrame __("Uno.UX.Float3Value", "ToDouble()");
    return *__retval = (double)__this->_value.X, void();
}

// public override sealed float ToFloat() :1255
void Float3Value__ToFloat_fn(Float3Value* __this, float* __retval)
{
    uStackFrame __("Uno.UX.Float3Value", "ToFloat()");
    return *__retval = __this->_value.X, void();
}

// public override sealed float2 ToFloat2() :1256
void Float3Value__ToFloat2_fn(Float3Value* __this, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Uno.UX.Float3Value", "ToFloat2()");
    ::g::Uno::Float3 ind1 = __this->_value;
    return *__retval = ::g::Uno::Float2__New2(ind1.X, ind1.Y), void();
}

// public override sealed float3 ToFloat3() :1257
void Float3Value__ToFloat3_fn(Float3Value* __this, ::g::Uno::Float3* __retval)
{
    uStackFrame __("Uno.UX.Float3Value", "ToFloat3()");
    return *__retval = __this->_value, void();
}

// public override sealed float4 ToFloat4() :1258
void Float3Value__ToFloat4_fn(Float3Value* __this, ::g::Uno::Float4* __retval)
{
    uStackFrame __("Uno.UX.Float3Value", "ToFloat4()");
    return *__retval = ::g::Uno::Float4__New8(__this->_value, 1.0f), void();
}

// public override sealed object ToObject() :1254
void Float3Value__ToObject_fn(Float3Value* __this, uObject** __retval)
{
    uStackFrame __("Uno.UX.Float3Value", "ToObject()");
    return *__retval = uBox(::TYPES[3/*float3*/], __this->_value), void();
}

// public override sealed string ToString() :1263
void Float3Value__ToString_fn(Float3Value* __this, uString** __retval)
{
    uStackFrame __("Uno.UX.Float3Value", "ToString()");
    return *__retval = __this->_value.ToString(::TYPES[3/*float3*/]), void();
}

// public Float3Value(float3 value) [instance] :1252
void Float3Value::ctor_1(::g::Uno::Float3 value)
{
    uStackFrame __("Uno.UX.Float3Value", ".ctor(float3)");
    ctor_();
    _value = value;
}

// public Float3Value New(float3 value) [static] :1252
Float3Value* Float3Value::New1(::g::Uno::Float3 value)
{
    Float3Value* obj2 = (Float3Value*)uNew(Float3Value_typeof());
    obj2->ctor_1(value);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/$.uno
// ----------------------------------------------------------------

// internal sealed class Float4Value :1266
// {
static void Float4Value_build(uType* type)
{
    ::TYPES[4] = ::g::Uno::Float4_typeof();
    type->SetFields(0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Uno::UX::Float4Value, _value), 0);
}

::g::Uno::UX::Value_type* Float4Value_typeof()
{
    static uSStrong< ::g::Uno::UX::Value_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Value_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Float4Value);
    options.TypeSize = sizeof(::g::Uno::UX::Value_type);
    type = (::g::Uno::UX::Value_type*)uClassType::New("Uno.UX.Float4Value", options);
    type->fp_build_ = Float4Value_build;
    type->fp_Add = (void(*)(::g::Uno::UX::Value*, ::g::Uno::UX::Value*, ::g::Uno::UX::Value**))Float4Value__Add_fn;
    type->fp_Divide = (void(*)(::g::Uno::UX::Value*, ::g::Uno::UX::Value*, ::g::Uno::UX::Value**))Float4Value__Divide_fn;
    type->fp_Multiply = (void(*)(::g::Uno::UX::Value*, ::g::Uno::UX::Value*, ::g::Uno::UX::Value**))Float4Value__Multiply_fn;
    type->fp_Subtract = (void(*)(::g::Uno::UX::Value*, ::g::Uno::UX::Value*, ::g::Uno::UX::Value**))Float4Value__Subtract_fn;
    type->fp_ToDouble = (void(*)(::g::Uno::UX::Value*, double*))Float4Value__ToDouble_fn;
    type->fp_ToFloat = (void(*)(::g::Uno::UX::Value*, float*))Float4Value__ToFloat_fn;
    type->fp_ToFloat2 = (void(*)(::g::Uno::UX::Value*, ::g::Uno::Float2*))Float4Value__ToFloat2_fn;
    type->fp_ToFloat3 = (void(*)(::g::Uno::UX::Value*, ::g::Uno::Float3*))Float4Value__ToFloat3_fn;
    type->fp_ToFloat4 = (void(*)(::g::Uno::UX::Value*, ::g::Uno::Float4*))Float4Value__ToFloat4_fn;
    type->fp_ToObject = (void(*)(::g::Uno::UX::Value*, uObject**))Float4Value__ToObject_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Float4Value__ToString_fn;
    return type;
}

// public Float4Value(float4 value) :1269
void Float4Value__ctor_1_fn(Float4Value* __this, ::g::Uno::Float4* value)
{
    __this->ctor_1(*value);
}

// public override sealed Uno.UX.Value Add(Uno.UX.Value v) :1276
void Float4Value__Add_fn(Float4Value* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval)
{
    uStackFrame __("Uno.UX.Float4Value", "Add(Uno.UX.Value)");
    return *__retval = ::g::Uno::UX::Value::op_Implicit4(::g::Uno::Float4__op_Addition2(__this->_value, uPtr(v)->ToFloat4())), void();
}

// public override sealed Uno.UX.Value Divide(Uno.UX.Value v) :1279
void Float4Value__Divide_fn(Float4Value* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval)
{
    uStackFrame __("Uno.UX.Float4Value", "Divide(Uno.UX.Value)");
    return *__retval = ::g::Uno::UX::Value::op_Implicit4(::g::Uno::Float4__op_Division2(__this->_value, uPtr(v)->ToFloat4())), void();
}

// public override sealed Uno.UX.Value Multiply(Uno.UX.Value v) :1278
void Float4Value__Multiply_fn(Float4Value* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval)
{
    uStackFrame __("Uno.UX.Float4Value", "Multiply(Uno.UX.Value)");
    return *__retval = ::g::Uno::UX::Value::op_Implicit4(::g::Uno::Float4__op_Multiply2(__this->_value, uPtr(v)->ToFloat4())), void();
}

// public Float4Value New(float4 value) :1269
void Float4Value__New1_fn(::g::Uno::Float4* value, Float4Value** __retval)
{
    *__retval = Float4Value::New1(*value);
}

// public override sealed Uno.UX.Value Subtract(Uno.UX.Value v) :1277
void Float4Value__Subtract_fn(Float4Value* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval)
{
    uStackFrame __("Uno.UX.Float4Value", "Subtract(Uno.UX.Value)");
    return *__retval = ::g::Uno::UX::Value::op_Implicit4(::g::Uno::Float4__op_Subtraction2(__this->_value, uPtr(v)->ToFloat4())), void();
}

// public override sealed double ToDouble() :1270
void Float4Value__ToDouble_fn(Float4Value* __this, double* __retval)
{
    uStackFrame __("Uno.UX.Float4Value", "ToDouble()");
    return *__retval = (double)__this->_value.X, void();
}

// public override sealed float ToFloat() :1272
void Float4Value__ToFloat_fn(Float4Value* __this, float* __retval)
{
    uStackFrame __("Uno.UX.Float4Value", "ToFloat()");
    return *__retval = __this->_value.X, void();
}

// public override sealed float2 ToFloat2() :1273
void Float4Value__ToFloat2_fn(Float4Value* __this, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Uno.UX.Float4Value", "ToFloat2()");
    ::g::Uno::Float4 ind1 = __this->_value;
    return *__retval = ::g::Uno::Float2__New2(ind1.X, ind1.Y), void();
}

// public override sealed float3 ToFloat3() :1274
void Float4Value__ToFloat3_fn(Float4Value* __this, ::g::Uno::Float3* __retval)
{
    uStackFrame __("Uno.UX.Float4Value", "ToFloat3()");
    ::g::Uno::Float4 ind2 = __this->_value;
    return *__retval = ::g::Uno::Float3__New2(ind2.X, ind2.Y, ind2.Z), void();
}

// public override sealed float4 ToFloat4() :1275
void Float4Value__ToFloat4_fn(Float4Value* __this, ::g::Uno::Float4* __retval)
{
    uStackFrame __("Uno.UX.Float4Value", "ToFloat4()");
    return *__retval = __this->_value, void();
}

// public override sealed object ToObject() :1271
void Float4Value__ToObject_fn(Float4Value* __this, uObject** __retval)
{
    uStackFrame __("Uno.UX.Float4Value", "ToObject()");
    return *__retval = uBox(::TYPES[4/*float4*/], __this->_value), void();
}

// public override sealed string ToString() :1280
void Float4Value__ToString_fn(Float4Value* __this, uString** __retval)
{
    uStackFrame __("Uno.UX.Float4Value", "ToString()");
    return *__retval = __this->_value.ToString(::TYPES[4/*float4*/]), void();
}

// public Float4Value(float4 value) [instance] :1269
void Float4Value::ctor_1(::g::Uno::Float4 value)
{
    uStackFrame __("Uno.UX.Float4Value", ".ctor(float4)");
    ctor_();
    _value = value;
}

// public Float4Value New(float4 value) [static] :1269
Float4Value* Float4Value::New1(::g::Uno::Float4 value)
{
    Float4Value* obj3 = (Float4Value*)uNew(Float4Value_typeof());
    obj3->ctor_1(value);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/$.uno
// ----------------------------------------------------------------

// public abstract interface IPropertyListener :204
// {
uInterfaceType* IPropertyListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.UX.IPropertyListener", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("OnPropertyChanged", NULL, NULL, offsetof(IPropertyListener, fp_OnPropertyChanged), false, uVoid_typeof(), 2, ::g::Uno::UX::PropertyObject_typeof(), ::g::Uno::UX::Selector_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/$.uno
// ----------------------------------------------------------------

// public abstract interface IValueConvertible :1008
// {
uInterfaceType* IValueConvertible_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.UX.IValueConvertible", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("ToValue", NULL, NULL, offsetof(IValueConvertible, fp_ToValue), false, ::g::Uno::UX::Value_typeof(), 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/$.uno
// ----------------------------------------------------------------

// public sealed class MultiplyOperator :395
// {
static void MultiplyOperator_build(uType* type)
{
    type->SetFields(6);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MultiplyOperator__New2_fn, 0, true, MultiplyOperator_typeof(), 0));
}

::g::Uno::UX::BinaryOperator_type* MultiplyOperator_typeof()
{
    static uSStrong< ::g::Uno::UX::BinaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::BinaryOperator_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(MultiplyOperator);
    options.TypeSize = sizeof(::g::Uno::UX::BinaryOperator_type);
    type = (::g::Uno::UX::BinaryOperator_type*)uClassType::New("Uno.UX.MultiplyOperator", options);
    type->fp_build_ = MultiplyOperator_build;
    type->fp_ctor_ = (void*)MultiplyOperator__New2_fn;
    type->fp_Compute = (void(*)(::g::Uno::UX::BinaryOperator*, ::g::Uno::UX::Value*, ::g::Uno::UX::Value*, ::g::Uno::UX::Value**))MultiplyOperator__Compute_fn;
    return type;
}

// public generated MultiplyOperator() :395
void MultiplyOperator__ctor_2_fn(MultiplyOperator* __this)
{
    __this->ctor_2();
}

// protected override sealed Uno.UX.Value Compute(Uno.UX.Value a, Uno.UX.Value b) :397
void MultiplyOperator__Compute_fn(MultiplyOperator* __this, ::g::Uno::UX::Value* a, ::g::Uno::UX::Value* b, ::g::Uno::UX::Value** __retval)
{
    uStackFrame __("Uno.UX.MultiplyOperator", "Compute(Uno.UX.Value,Uno.UX.Value)");
    return *__retval = uPtr(a)->Multiply(b), void();
}

// public generated MultiplyOperator New() :395
void MultiplyOperator__New2_fn(MultiplyOperator** __retval)
{
    *__retval = MultiplyOperator::New2();
}

// public generated MultiplyOperator() [instance] :395
void MultiplyOperator::ctor_2()
{
    uStackFrame __("Uno.UX.MultiplyOperator", ".ctor()");
    ctor_1();
}

// public generated MultiplyOperator New() [static] :395
MultiplyOperator* MultiplyOperator::New2()
{
    MultiplyOperator* obj1 = (MultiplyOperator*)uNew(MultiplyOperator_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/$.uno
// ----------------------------------------------------------------

// public sealed class NameTable :426
// {
// static NameTable() :426
static void NameTable__cctor__fn(uType* __type)
{
    NameTable::Empty_ = NameTable::New1(NULL, uArray::New(::TYPES[5/*string[]*/], 0));
}

static void NameTable_build(uType* type)
{
    ::TYPES[5] = ::g::Uno::String_typeof()->Array();
    ::TYPES[6] = ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof());
    ::TYPES[7] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::UX::Property_typeof());
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof()), offsetof(::g::Uno::UX::NameTable, _objects), 0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Property_typeof()), offsetof(::g::Uno::UX::NameTable, _properties), 0,
        ::g::Uno::String_typeof()->Array(), offsetof(::g::Uno::UX::NameTable, Entries), 0,
        NameTable_typeof(), offsetof(::g::Uno::UX::NameTable, ParentTable), 0,
        uObject_typeof(), offsetof(::g::Uno::UX::NameTable, _This), 0,
        NameTable_typeof(), (uintptr_t)&::g::Uno::UX::NameTable::Empty_, uFieldFlagsStatic);
    type->Reflection.SetFields(3,
        new uField("Empty", 5),
        new uField("Entries", 2),
        new uField("ParentTable", 3));
    type->Reflection.SetFunctions(6,
        new uFunction(".ctor", NULL, (void*)NameTable__New1_fn, 0, true, NameTable_typeof(), 2, NameTable_typeof(), ::g::Uno::String_typeof()->Array()),
        new uFunction("get_Objects", NULL, (void*)NameTable__get_Objects_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(uObject_typeof()), 0),
        new uFunction("get_Properties", NULL, (void*)NameTable__get_Properties_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Property_typeof()), 0),
        new uFunction("set_Properties", NULL, (void*)NameTable__set_Properties_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Property_typeof())),
        new uFunction("get_This", NULL, (void*)NameTable__get_This_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_This", NULL, (void*)NameTable__set_This_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()));
}

uType* NameTable_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(NameTable);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.NameTable", options);
    type->fp_build_ = NameTable_build;
    type->fp_cctor_ = NameTable__cctor__fn;
    return type;
}

// public NameTable(Uno.UX.NameTable parentTable, string[] entries) :446
void NameTable__ctor__fn(NameTable* __this, NameTable* parentTable, uArray* entries)
{
    __this->ctor_(parentTable, entries);
}

// public NameTable New(Uno.UX.NameTable parentTable, string[] entries) :446
void NameTable__New1_fn(NameTable* parentTable, uArray* entries, NameTable** __retval)
{
    *__retval = NameTable::New1(parentTable, entries);
}

// public Uno.Collections.IList<object> get_Objects() :433
void NameTable__get_Objects_fn(NameTable* __this, uObject** __retval)
{
    *__retval = __this->Objects();
}

// public Uno.Collections.IList<Uno.UX.Property> get_Properties() :438
void NameTable__get_Properties_fn(NameTable* __this, uObject** __retval)
{
    *__retval = __this->Properties();
}

// public void set_Properties(Uno.Collections.IList<Uno.UX.Property> value) :439
void NameTable__set_Properties_fn(NameTable* __this, uObject* value)
{
    __this->Properties(value);
}

// public generated object get_This() :442
void NameTable__get_This_fn(NameTable* __this, uObject** __retval)
{
    *__retval = __this->This();
}

// public generated void set_This(object value) :442
void NameTable__set_This_fn(NameTable* __this, uObject* value)
{
    __this->This(value);
}

uSStrong<NameTable*> NameTable::Empty_;

// public NameTable(Uno.UX.NameTable parentTable, string[] entries) [instance] :446
void NameTable::ctor_(NameTable* parentTable, uArray* entries)
{
    uStackFrame __("Uno.UX.NameTable", ".ctor(Uno.UX.NameTable,string[])");
    _objects = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[6/*Uno.Collections.List<object>*/]));
    _properties = (uObject*)((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[7/*Uno.Collections.List<Uno.UX.Property>*/]));
    ParentTable = parentTable;
    Entries = entries;
}

// public Uno.Collections.IList<object> get_Objects() [instance] :433
uObject* NameTable::Objects()
{
    uStackFrame __("Uno.UX.NameTable", "get_Objects()");
    return (uObject*)_objects;
}

// public Uno.Collections.IList<Uno.UX.Property> get_Properties() [instance] :438
uObject* NameTable::Properties()
{
    uStackFrame __("Uno.UX.NameTable", "get_Properties()");
    uObject* ind1 = _properties;
    return (ind1 != NULL) ? ind1 : (uObject*)uPtr(ParentTable)->Properties();
}

// public void set_Properties(Uno.Collections.IList<Uno.UX.Property> value) [instance] :439
void NameTable::Properties(uObject* value)
{
    uStackFrame __("Uno.UX.NameTable", "set_Properties(Uno.Collections.IList<Uno.UX.Property>)");
    _properties = value;
}

// public generated object get_This() [instance] :442
uObject* NameTable::This()
{
    uStackFrame __("Uno.UX.NameTable", "get_This()");
    return _This;
}

// public generated void set_This(object value) [instance] :442
void NameTable::This(uObject* value)
{
    uStackFrame __("Uno.UX.NameTable", "set_This(object)");
    _This = value;
}

// public NameTable New(Uno.UX.NameTable parentTable, string[] entries) [static] :446
NameTable* NameTable::New1(NameTable* parentTable, uArray* entries)
{
    NameTable* obj2 = (NameTable*)uNew(NameTable_typeof());
    obj2->ctor_(parentTable, entries);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/$.uno
// ----------------------------------------------------------------

// internal sealed class NumberValue :1181
// {
static void NumberValue_build(uType* type)
{
    ::TYPES[8] = ::g::Uno::Double_typeof();
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Uno::UX::NumberValue, _value), 0);
}

::g::Uno::UX::Value_type* NumberValue_typeof()
{
    static uSStrong< ::g::Uno::UX::Value_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Value_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(NumberValue);
    options.TypeSize = sizeof(::g::Uno::UX::Value_type);
    type = (::g::Uno::UX::Value_type*)uClassType::New("Uno.UX.NumberValue", options);
    type->fp_build_ = NumberValue_build;
    type->fp_Add = (void(*)(::g::Uno::UX::Value*, ::g::Uno::UX::Value*, ::g::Uno::UX::Value**))NumberValue__Add_fn;
    type->fp_Divide = (void(*)(::g::Uno::UX::Value*, ::g::Uno::UX::Value*, ::g::Uno::UX::Value**))NumberValue__Divide_fn;
    type->fp_Multiply = (void(*)(::g::Uno::UX::Value*, ::g::Uno::UX::Value*, ::g::Uno::UX::Value**))NumberValue__Multiply_fn;
    type->fp_Subtract = (void(*)(::g::Uno::UX::Value*, ::g::Uno::UX::Value*, ::g::Uno::UX::Value**))NumberValue__Subtract_fn;
    type->fp_ToDouble = (void(*)(::g::Uno::UX::Value*, double*))NumberValue__ToDouble_fn;
    type->fp_ToObject = (void(*)(::g::Uno::UX::Value*, uObject**))NumberValue__ToObject_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))NumberValue__ToString_fn;
    return type;
}

// public NumberValue(double value) :1184
void NumberValue__ctor_1_fn(NumberValue* __this, double* value)
{
    __this->ctor_1(*value);
}

// public override sealed Uno.UX.Value Add(Uno.UX.Value v) :1187
void NumberValue__Add_fn(NumberValue* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval)
{
    uStackFrame __("Uno.UX.NumberValue", "Add(Uno.UX.Value)");
    return *__retval = ::g::Uno::UX::Value::op_Implicit(__this->_value + uPtr(v)->ToDouble()), void();
}

// public override sealed Uno.UX.Value Divide(Uno.UX.Value v) :1190
void NumberValue__Divide_fn(NumberValue* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval)
{
    uStackFrame __("Uno.UX.NumberValue", "Divide(Uno.UX.Value)");
    return *__retval = ::g::Uno::UX::Value::op_Implicit(__this->_value / uPtr(v)->ToDouble()), void();
}

// public override sealed Uno.UX.Value Multiply(Uno.UX.Value v) :1189
void NumberValue__Multiply_fn(NumberValue* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval)
{
    uStackFrame __("Uno.UX.NumberValue", "Multiply(Uno.UX.Value)");
    return *__retval = ::g::Uno::UX::Value::op_Implicit(__this->_value * uPtr(v)->ToDouble()), void();
}

// public NumberValue New(double value) :1184
void NumberValue__New1_fn(double* value, NumberValue** __retval)
{
    *__retval = NumberValue::New1(*value);
}

// public override sealed Uno.UX.Value Subtract(Uno.UX.Value v) :1188
void NumberValue__Subtract_fn(NumberValue* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval)
{
    uStackFrame __("Uno.UX.NumberValue", "Subtract(Uno.UX.Value)");
    return *__retval = ::g::Uno::UX::Value::op_Implicit(__this->_value - uPtr(v)->ToDouble()), void();
}

// public override sealed double ToDouble() :1185
void NumberValue__ToDouble_fn(NumberValue* __this, double* __retval)
{
    uStackFrame __("Uno.UX.NumberValue", "ToDouble()");
    return *__retval = __this->_value, void();
}

// public override sealed object ToObject() :1186
void NumberValue__ToObject_fn(NumberValue* __this, uObject** __retval)
{
    uStackFrame __("Uno.UX.NumberValue", "ToObject()");
    return *__retval = uBox(::TYPES[8/*double*/], __this->_value), void();
}

// public override sealed string ToString() :1191
void NumberValue__ToString_fn(NumberValue* __this, uString** __retval)
{
    uStackFrame __("Uno.UX.NumberValue", "ToString()");
    double ind1;
    return *__retval = ::g::Uno::Double::ToString((ind1 = __this->_value, ind1), ::TYPES[8/*double*/]), void();
}

// public NumberValue(double value) [instance] :1184
void NumberValue::ctor_1(double value)
{
    uStackFrame __("Uno.UX.NumberValue", ".ctor(double)");
    ctor_();
    _value = value;
}

// public NumberValue New(double value) [static] :1184
NumberValue* NumberValue::New1(double value)
{
    NumberValue* obj2 = (NumberValue*)uNew(NumberValue_typeof());
    obj2->ctor_1(value);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/$.uno
// ----------------------------------------------------------------

// public abstract class Property :472
// {
static void Property_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), offsetof(::g::Uno::UX::Property, _name), 0);
    type->Reflection.SetFunctions(8,
        new uFunction("AddListener", NULL, (void*)Property__AddListener_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("GetAsObject", NULL, NULL, offsetof(Property_type, fp_GetAsObject), false, uObject_typeof(), 0),
        new uFunction("get_Name", NULL, (void*)Property__get_Name_fn, 0, false, ::g::Uno::UX::Selector_typeof(), 0),
        new uFunction("get_Object", NULL, NULL, offsetof(Property_type, fp_get_Object), false, ::g::Uno::UX::PropertyObject_typeof(), 0),
        new uFunction("get_PropertyType", NULL, NULL, offsetof(Property_type, fp_get_PropertyType), false, ::g::Uno::Type_typeof(), 0),
        new uFunction("RemoveListener", NULL, (void*)Property__RemoveListener_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetAsObject", NULL, NULL, offsetof(Property_type, fp_SetAsObject), false, uVoid_typeof(), 2, uObject_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("get_SupportsOriginSetter", NULL, NULL, offsetof(Property_type, fp_get_SupportsOriginSetter), false, ::g::Uno::Bool_typeof(), 0));
}

Property_type* Property_typeof()
{
    static uSStrong<Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Property);
    options.TypeSize = sizeof(Property_type);
    type = (Property_type*)uClassType::New("Uno.UX.Property", options);
    type->fp_build_ = Property_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Property__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Property__GetHashCode_fn;
    type->fp_SetAsObject = Property__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = Property__get_SupportsOriginSetter_fn;
    return type;
}

// protected Property(Uno.UX.Selector name) :481
void Property__ctor__fn(Property* __this, ::g::Uno::UX::Selector* name)
{
    __this->ctor_(*name);
}

// public void AddListener(Uno.UX.IPropertyListener listener) :486
void Property__AddListener_fn(Property* __this, uObject* listener)
{
    __this->AddListener(listener);
}

// public override sealed bool Equals(object obj) :496
void Property__Equals_fn(Property* __this, uObject* obj, bool* __retval)
{
    uStackFrame __("Uno.UX.Property", "Equals(object)");
    Property* p = uAs<Property*>(obj, Property_typeof());

    if (p == NULL)
        return *__retval = false, void();

    return *__retval = (uPtr(p)->Object() == __this->Object()) && ::g::Uno::UX::Selector__op_Equality(uPtr(p)->Name(), __this->_name), void();
}

// public override sealed int GetHashCode() :503
void Property__GetHashCode_fn(Property* __this, int* __retval)
{
    uStackFrame __("Uno.UX.Property", "GetHashCode()");
    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(__this->Object())) ^ __this->Name().Handle(), void();
}

// public Uno.UX.Selector get_Name() :479
void Property__get_Name_fn(Property* __this, ::g::Uno::UX::Selector* __retval)
{
    *__retval = __this->Name();
}

// public void RemoveListener(Uno.UX.IPropertyListener listener) :491
void Property__RemoveListener_fn(Property* __this, uObject* listener)
{
    __this->RemoveListener(listener);
}

// public virtual void SetAsObject(object value, Uno.UX.IPropertyListener origin) :509
void Property__SetAsObject_fn(Property* __this, uObject* value, uObject* origin)
{
}

// public virtual bool get_SupportsOriginSetter() :475
void Property__get_SupportsOriginSetter_fn(Property* __this, bool* __retval)
{
    uStackFrame __("Uno.UX.Property", "get_SupportsOriginSetter()");
    return *__retval = false, void();
}

// protected Property(Uno.UX.Selector name) [instance] :481
void Property::ctor_(::g::Uno::UX::Selector name)
{
    uStackFrame __("Uno.UX.Property", ".ctor(Uno.UX.Selector)");
    _name = name;
}

// public void AddListener(Uno.UX.IPropertyListener listener) [instance] :486
void Property::AddListener(uObject* listener)
{
    uStackFrame __("Uno.UX.Property", "AddListener(Uno.UX.IPropertyListener)");
    uPtr(Object())->AddPropertyListener(listener);
}

// public Uno.UX.Selector get_Name() [instance] :479
::g::Uno::UX::Selector Property::Name()
{
    uStackFrame __("Uno.UX.Property", "get_Name()");
    return _name;
}

// public void RemoveListener(Uno.UX.IPropertyListener listener) [instance] :491
void Property::RemoveListener(uObject* listener)
{
    uStackFrame __("Uno.UX.Property", "RemoveListener(Uno.UX.IPropertyListener)");
    uPtr(Object())->RemovePropertyListener(listener);
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/$.uno
// ----------------------------------------------------------------

// public abstract class Property<T> :512
// {
static void Property1_build(uType* type)
{
    ::TYPES[9] = ::g::Uno::Type_typeof();
    type->SetFields(1);
    type->Reflection.SetFunctions(2,
        new uFunction("Get", NULL, NULL, offsetof(Property1_type, fp_Get), false, type->T(0), 0),
        new uFunction("Set", NULL, NULL, offsetof(Property1_type, fp_Set), false, uVoid_typeof(), 2, type->T(0), ::g::Uno::UX::IPropertyListener_typeof()));
}

Property1_type* Property1_typeof()
{
    static uSStrong<Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property_typeof();
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(Property1);
    options.TypeSize = sizeof(Property1_type);
    type = (Property1_type*)uClassType::New("Uno.UX.Property`1", options);
    type->fp_build_ = Property1_build;
    type->fp_Get = Property1__Get_fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::Property*, uObject**))Property1__GetAsObject_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::Property*, uType**))Property1__get_PropertyType_fn;
    type->fp_Set = Property1__Set_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::Property*, uObject*, uObject*))Property1__SetAsObject_fn;
    return type;
}

// protected Property(Uno.UX.Selector name) :514
void Property1__ctor_1_fn(Property1* __this, ::g::Uno::UX::Selector* name)
{
    __this->ctor_1(*name);
}

// public virtual T Get() :518
void Property1__Get_fn(Property1* __this, uTRef __retval)
{
    uStackFrame __("Uno.UX.Property`1", "Get()");
    U_THROW(::g::Uno::Exception::New1());
}

// public override sealed object GetAsObject() :521
void Property1__GetAsObject_fn(Property1* __this, uObject** __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(Property1_typeof())->T(0),
    };
    uStackFrame __("Uno.UX.Property`1", "GetAsObject()");
    uT ret1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return *__retval = uBoxPtr(__types[0], (__this->Get_ex(&ret1), ret1)), void();
}

// public override sealed Uno.Type get_PropertyType() :516
void Property1__get_PropertyType_fn(Property1* __this, uType** __retval)
{
    uStackFrame __("Uno.UX.Property`1", "get_PropertyType()");
    return *__retval = __this->__type->GetBase(Property1_typeof())->T(0), void();
}

// public virtual void Set(T value, Uno.UX.IPropertyListener origin) :519
void Property1__Set_fn(Property1* __this, void* value, uObject* origin)
{
    uStackFrame __("Uno.UX.Property`1", "Set(T,Uno.UX.IPropertyListener)");
    U_THROW(::g::Uno::Exception::New1());
}

// public override sealed void SetAsObject(object value, Uno.UX.IPropertyListener origin) :525
void Property1__SetAsObject_fn(Property1* __this, uObject* value, uObject* origin)
{
    uStackFrame __("Uno.UX.Property`1", "SetAsObject(object,Uno.UX.IPropertyListener)");
    __this->Set_ex(uUnboxAny(__this->__type->GetBase(Property1_typeof())->T(0), value), origin);
}

// protected Property(Uno.UX.Selector name) [instance] :514
void Property1::ctor_1(::g::Uno::UX::Selector name)
{
    uStackFrame __("Uno.UX.Property`1", ".ctor(Uno.UX.Selector)");
    ctor_(name);
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/$.uno
// ----------------------------------------------------------------

// public class PropertyObject :209
// {
static void PropertyObject_build(uType* type)
{
    ::TYPES[10] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::UX::IPropertyListener_typeof());
    ::TYPES[11] = ::g::Uno::UX::IPropertyListener_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::UX::IPropertyListener_typeof()), offsetof(::g::Uno::UX::PropertyObject, _propListeners), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("AddPropertyListener", NULL, (void*)PropertyObject__AddPropertyListener_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("EmulatePropertyChanged", NULL, (void*)PropertyObject__EmulatePropertyChanged_fn, 0, true, uVoid_typeof(), 3, PropertyObject_typeof(), ::g::Uno::UX::Selector_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction(".ctor", NULL, (void*)PropertyObject__New1_fn, 0, true, PropertyObject_typeof(), 0),
        new uFunction("RemovePropertyListener", NULL, (void*)PropertyObject__RemovePropertyListener_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::IPropertyListener_typeof()));
}

uType* PropertyObject_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(PropertyObject);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.PropertyObject", options);
    type->fp_build_ = PropertyObject_build;
    type->fp_ctor_ = (void*)PropertyObject__New1_fn;
    return type;
}

// public generated PropertyObject() :209
void PropertyObject__ctor__fn(PropertyObject* __this)
{
    __this->ctor_();
}

// public void AddPropertyListener(Uno.UX.IPropertyListener listener) :214
void PropertyObject__AddPropertyListener_fn(PropertyObject* __this, uObject* listener)
{
    __this->AddPropertyListener(listener);
}

// public static void EmulatePropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector sel, Uno.UX.IPropertyListener origin) :247
void PropertyObject__EmulatePropertyChanged_fn(PropertyObject* obj, ::g::Uno::UX::Selector* sel, uObject* origin)
{
    PropertyObject::EmulatePropertyChanged(obj, *sel, origin);
}

// public generated PropertyObject New() :209
void PropertyObject__New1_fn(PropertyObject** __retval)
{
    *__retval = PropertyObject::New1();
}

// protected void OnPropertyChanged(Uno.UX.Selector property) :242
void PropertyObject__OnPropertyChanged_fn(PropertyObject* __this, ::g::Uno::UX::Selector* property)
{
    __this->OnPropertyChanged(*property);
}

// protected void OnPropertyChanged(Uno.UX.Selector property, Uno.UX.IPropertyListener origin) :229
void PropertyObject__OnPropertyChanged1_fn(PropertyObject* __this, ::g::Uno::UX::Selector* property, uObject* origin)
{
    __this->OnPropertyChanged1(*property, origin);
}

// public void RemovePropertyListener(Uno.UX.IPropertyListener listener) :223
void PropertyObject__RemovePropertyListener_fn(PropertyObject* __this, uObject* listener)
{
    __this->RemovePropertyListener(listener);
}

// public generated PropertyObject() [instance] :209
void PropertyObject::ctor_()
{
}

// public void AddPropertyListener(Uno.UX.IPropertyListener listener) [instance] :214
void PropertyObject::AddPropertyListener(uObject* listener)
{
    uStackFrame __("Uno.UX.PropertyObject", "AddPropertyListener(Uno.UX.IPropertyListener)");

    if (_propListeners == NULL)
        _propListeners = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[10/*Uno.Collections.List<Uno.UX.IPropertyListener>*/]));

    ::g::Uno::Collections::List__Add_fn(uPtr(_propListeners), listener);
}

// protected void OnPropertyChanged(Uno.UX.Selector property) [instance] :242
void PropertyObject::OnPropertyChanged(::g::Uno::UX::Selector property)
{
    uStackFrame __("Uno.UX.PropertyObject", "OnPropertyChanged(Uno.UX.Selector)");
    OnPropertyChanged1(property, uAs<uObject*>(this, ::TYPES[11/*Uno.UX.IPropertyListener*/]));
}

// protected void OnPropertyChanged(Uno.UX.Selector property, Uno.UX.IPropertyListener origin) [instance] :229
void PropertyObject::OnPropertyChanged1(::g::Uno::UX::Selector property, uObject* origin)
{
    uStackFrame __("Uno.UX.PropertyObject", "OnPropertyChanged(Uno.UX.Selector,Uno.UX.IPropertyListener)");
    uObject* ret2;
    ::g::Uno::UX::Selector property_ = property;

    if (_propListeners != NULL)

        for (int i = 0; i < uPtr(_propListeners)->Count(); i++)
        {
            uObject* listener = (::g::Uno::Collections::List__get_Item_fn(uPtr(_propListeners), uCRef<int>(i), &ret2), ret2);

            if (listener != origin)
                ::g::Uno::UX::IPropertyListener::OnPropertyChanged(uInterface(uPtr(listener), ::TYPES[11/*Uno.UX.IPropertyListener*/]), this, property_);
        }
}

// public void RemovePropertyListener(Uno.UX.IPropertyListener listener) [instance] :223
void PropertyObject::RemovePropertyListener(uObject* listener)
{
    uStackFrame __("Uno.UX.PropertyObject", "RemovePropertyListener(Uno.UX.IPropertyListener)");
    bool ret3;
    ::g::Uno::Collections::List__Remove_fn(uPtr(_propListeners), listener, &ret3);

    if (uPtr(_propListeners)->Count() == 0)
        _propListeners = NULL;
}

// public static void EmulatePropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector sel, Uno.UX.IPropertyListener origin) [static] :247
void PropertyObject::EmulatePropertyChanged(PropertyObject* obj, ::g::Uno::UX::Selector sel, uObject* origin)
{
    uStackFrame __("Uno.UX.PropertyObject", "EmulatePropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector,Uno.UX.IPropertyListener)");
    uPtr(obj)->OnPropertyChanged1(sel, origin);
}

// public generated PropertyObject New() [static] :209
PropertyObject* PropertyObject::New1()
{
    PropertyObject* obj1 = (PropertyObject*)uNew(PropertyObject_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/$.uno
// ----------------------------------------------------------------

// public sealed class Resource :602
// {
// static Resource() :602
static void Resource__cctor__fn(uType* __type)
{
    Resource::_globals_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[12/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>*/]));
    Resource::_listeners_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[13/*Uno.Collections.List<Uno.Action<string>>*/]));
}

static void Resource_build(uType* type)
{
    ::TYPES[12] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof()));
    ::TYPES[13] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof()));
    ::TYPES[14] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof()));
    ::TYPES[15] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof()));
    ::TYPES[16] = ::g::Uno::Collections::List_typeof();
    ::TYPES[6] = ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof());
    type->SetPrecalc(
        ::g::Uno::Collections::List_typeof()->MakeType(type->U(0)));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::UX::Resource, _Key), 0,
        uObject_typeof(), offsetof(::g::Uno::UX::Resource, _Value), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof())), (uintptr_t)&::g::Uno::UX::Resource::_globals_, uFieldFlagsStatic,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof())), (uintptr_t)&::g::Uno::UX::Resource::_listeners_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(9,
        new uFunction("AddGlobalKeyListener", NULL, (void*)Resource__AddGlobalKeyListener_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof())),
        new uFunction("GetGlobalKey", NULL, (void*)Resource__GetGlobalKey_fn, 0, true, ::g::Uno::String_typeof(), 1, uObject_typeof()),
        new uFunction("GetGlobalsOfType`1", type, (void*)Resource__GetGlobalsOfType_fn, 0, true, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->U(0)), 0),
        new uFunction("get_Key", NULL, (void*)Resource__get_Key_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Resource__New1_fn, 0, true, Resource_typeof(), 2, ::g::Uno::String_typeof(), uObject_typeof()),
        new uFunction("RemoveGlobalKeyListener", NULL, (void*)Resource__RemoveGlobalKeyListener_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof())),
        new uFunction("SetGlobalKey", NULL, (void*)Resource__SetGlobalKey_fn, 0, true, uVoid_typeof(), 2, uObject_typeof(), ::g::Uno::String_typeof()),
        new uFunction("TryFindGlobal", NULL, (void*)Resource__TryFindGlobal_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::String_typeof(), ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof()), uObject_typeof()->ByRef()),
        new uFunction("get_Value", NULL, (void*)Resource__get_Value_fn, 0, false, uObject_typeof(), 0));
}

uType* Resource_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.MethodTypeCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(Resource);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.Resource", options);
    type->fp_build_ = Resource_build;
    type->fp_cctor_ = Resource__cctor__fn;
    return type;
}

// public Resource(string key, object value) :608
void Resource__ctor__fn(Resource* __this, uString* key, uObject* value)
{
    __this->ctor_(key, value);
}

// public static void AddGlobalKeyListener(Uno.Action<string> listener) :622
void Resource__AddGlobalKeyListener_fn(uDelegate* listener)
{
    Resource::AddGlobalKeyListener(listener);
}

// public static string GetGlobalKey(object obj) :672
void Resource__GetGlobalKey_fn(uObject* obj, uString** __retval)
{
    *__retval = Resource::GetGlobalKey(obj);
}

// public static Uno.Collections.IEnumerable<T> GetGlobalsOfType<T>() :684
void Resource__GetGlobalsOfType_fn(uType* __type, uObject** __retval)
{
    *__retval = Resource::GetGlobalsOfType(__type);
}

// public generated string get_Key() :604
void Resource__get_Key_fn(Resource* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(string value) :604
void Resource__set_Key_fn(Resource* __this, uString* value)
{
    __this->Key(value);
}

// public Resource New(string key, object value) :608
void Resource__New1_fn(uString* key, uObject* value, Resource** __retval)
{
    *__retval = Resource::New1(key, value);
}

// public static void RemoveGlobalKeyListener(Uno.Action<string> listener) :632
void Resource__RemoveGlobalKeyListener_fn(uDelegate* listener)
{
    Resource::RemoveGlobalKeyListener(listener);
}

// public static void SetGlobalKey(object obj, string key) :649
void Resource__SetGlobalKey_fn(uObject* obj, uString* key)
{
    Resource::SetGlobalKey(obj, key);
}

// public static bool TryFindGlobal(string key, Uno.Predicate<object> acceptor, object& res) :705
void Resource__TryFindGlobal_fn(uString* key, uDelegate* acceptor, uObject** res, bool* __retval)
{
    *__retval = Resource::TryFindGlobal(key, acceptor, res);
}

// public generated object get_Value() :605
void Resource__get_Value_fn(Resource* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// private generated void set_Value(object value) :605
void Resource__set_Value_fn(Resource* __this, uObject* value)
{
    __this->Value(value);
}

uSStrong< ::g::Uno::Collections::Dictionary*> Resource::_globals_;
uSStrong< ::g::Uno::Collections::List*> Resource::_listeners_;

// public Resource(string key, object value) [instance] :608
void Resource::ctor_(uString* key, uObject* value)
{
    uStackFrame __("Uno.UX.Resource", ".ctor(string,object)");
    Key(key);
    Value(value);
}

// public generated string get_Key() [instance] :604
uString* Resource::Key()
{
    uStackFrame __("Uno.UX.Resource", "get_Key()");
    return _Key;
}

// private generated void set_Key(string value) [instance] :604
void Resource::Key(uString* value)
{
    uStackFrame __("Uno.UX.Resource", "set_Key(string)");
    _Key = value;
}

// public generated object get_Value() [instance] :605
uObject* Resource::Value()
{
    uStackFrame __("Uno.UX.Resource", "get_Value()");
    return _Value;
}

// private generated void set_Value(object value) [instance] :605
void Resource::Value(uObject* value)
{
    uStackFrame __("Uno.UX.Resource", "set_Value(object)");
    _Value = value;
}

// public static void AddGlobalKeyListener(Uno.Action<string> listener) [static] :622
void Resource::AddGlobalKeyListener(uDelegate* listener)
{
    uStackFrame __("Uno.UX.Resource", "AddGlobalKeyListener(Uno.Action<string>)");
    Resource_typeof()->Init();
    ::g::Uno::Threading::Monitor::Enter(Resource::_listeners());

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(Resource::_listeners());
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::List__Add_fn(uPtr(Resource::_listeners()), listener);
    }
}

// public static string GetGlobalKey(object obj) [static] :672
uString* Resource::GetGlobalKey(uObject* obj)
{
    uStackFrame __("Uno.UX.Resource", "GetGlobalKey(object)");
    Resource_typeof()->Init();
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong< ::g::Uno::Collections::List*> > ret6;
    bool ret7;
    ::g::Uno::Threading::Monitor::Enter(Resource::_globals());

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(Resource::_globals());
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        for (::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong< ::g::Uno::Collections::List*> > enum4 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(Resource::_globals()), &ret6), ret6); enum4.MoveNext(::TYPES[14/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>.Enumerator*/]); )
        {
            ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong< ::g::Uno::Collections::List*> > list = enum4.Current(::TYPES[14/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>.Enumerator*/]);

            if ((::g::Uno::Collections::List__Contains_fn(uPtr(list.Value(::TYPES[15/*Uno.Collections.KeyValuePair<string, Uno.Collections.List<object>>*/])), obj, &ret7), ret7))
                return list.Key(::TYPES[15/*Uno.Collections.KeyValuePair<string, Uno.Collections.List<object>>*/]);
        }
    }

    return NULL;
}

// public static Uno.Collections.IEnumerable<T> GetGlobalsOfType<T>() [static] :684
uObject* Resource::GetGlobalsOfType(uType* __type)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.List<T>*/),
        __type->U(0),
    };
    uStackFrame __("Uno.UX.Resource", "GetGlobalsOfType`1()");
    Resource_typeof()->Init();
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong< ::g::Uno::Collections::List*> > ret8;
    uObject* ret9;
    ::g::Uno::Collections::List* result = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[0]);
    ::g::Uno::Threading::Monitor::Enter(Resource::_globals());

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(Resource::_globals());
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        for (::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong< ::g::Uno::Collections::List*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(Resource::_globals()), &ret8), ret8); enum1.MoveNext(::TYPES[14/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>.Enumerator*/]); )
        {
            ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong< ::g::Uno::Collections::List*> > entry = enum1.Current(::TYPES[14/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>.Enumerator*/]);
            ::g::Uno::Collections::List* list = entry.Value(::TYPES[15/*Uno.Collections.KeyValuePair<string, Uno.Collections.List<object>>*/]);

            for (int i = uPtr(list)->Count(); (i--) > 0; )
            {
                uObject* v = (::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i), &ret9), ret9);

                if (uIs(v, __types[1]))
                    ::g::Uno::Collections::List__Add_fn(uPtr(result), uUnboxAny(__types[1], v));
            }
        }
    }

    return (uObject*)result;
}

// public Resource New(string key, object value) [static] :608
Resource* Resource::New1(uString* key, uObject* value)
{
    Resource* obj5 = (Resource*)uNew(Resource_typeof());
    obj5->ctor_(key, value);
    return obj5;
}

// public static void RemoveGlobalKeyListener(Uno.Action<string> listener) [static] :632
void Resource::RemoveGlobalKeyListener(uDelegate* listener)
{
    uStackFrame __("Uno.UX.Resource", "RemoveGlobalKeyListener(Uno.Action<string>)");
    Resource_typeof()->Init();
    bool ret10;
    ::g::Uno::Threading::Monitor::Enter(Resource::_listeners());

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(Resource::_listeners());
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::List__Remove_fn(uPtr(Resource::_listeners()), listener, &ret10);
    }
}

// public static void SetGlobalKey(object obj, string key) [static] :649
void Resource::SetGlobalKey(uObject* obj, uString* key)
{
    uStackFrame __("Uno.UX.Resource", "SetGlobalKey(object,string)");
    Resource_typeof()->Init();
    bool ret11;
    bool ret12;
    ::g::Uno::Threading::Monitor::Enter(Resource::_globals());

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(Resource::_globals());
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::List* objs;

        if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(Resource::_globals()), key, (void**)(&objs), &ret11), ret11))
        {
            objs = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[6/*Uno.Collections.List<object>*/]);
            ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Resource::_globals()), key, objs);
        }

        if (!(::g::Uno::Collections::List__Contains_fn(uPtr(objs), obj, &ret12), ret12))
            ::g::Uno::Collections::List__Add_fn(uPtr(objs), obj);
    }

    uArray* listeners = NULL;
    ::g::Uno::Threading::Monitor::Enter(Resource::_listeners());

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(Resource::_listeners());
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        listeners = (uArray*)uPtr(Resource::_listeners())->ToArray();
    }

    for (int index2 = 0, length3 = uPtr(listeners)->Length(); index2 < length3; ++index2)
    {
        uDelegate* listener = uPtr(listeners)->Strong<uDelegate*>(index2);
        uPtr(listener)->InvokeVoid(key);
    }
}

// public static bool TryFindGlobal(string key, Uno.Predicate<object> acceptor, object& res) [static] :705
bool Resource::TryFindGlobal(uString* key, uDelegate* acceptor, uObject** res)
{
    uStackFrame __("Uno.UX.Resource", "TryFindGlobal(string,Uno.Predicate<object>,object&)");
    Resource_typeof()->Init();
    bool ret13;
    uObject* ret14;
    bool ret15;
    ::g::Uno::Collections::List* list;
    ::g::Uno::Threading::Monitor::Enter(Resource::_globals());

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(Resource::_globals());
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(Resource::_globals()), key, (void**)(&list), &ret13), ret13))

            for (int i = uPtr(list)->Count(); (i--) > 0; )
            {
                uObject* v = (::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i), &ret14), ret14);

                if ((uPtr(acceptor)->Invoke(&ret15, 1, v), ret15))
                {
                    *res = v;
                    return true;
                }
            }
    }

    *res = NULL;
    return false;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/$.uno
// ----------------------------------------------------------------

// public struct Selector :128
// {
static void Selector_build(uType* type)
{
    ::TYPES[17] = ::g::Uno::String_typeof();
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::UX::Selector, _handle), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_IsNull", NULL, (void*)Selector__get_IsNull_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Selector__New1_fn, 0, true, Selector_typeof(), 1, ::g::Uno::String_typeof()));
}

uStructType* Selector_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ValueSize = sizeof(Selector);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.UX.Selector", options);
    type->fp_build_ = Selector_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Selector__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Selector__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Selector__ToString_fn;
    return type;
}

// public Selector(string value) :136
void Selector__ctor__fn(Selector* __this, uString* value)
{
    __this->ctor_(value);
}

// public override sealed bool Equals(object obj) :151
void Selector__Equals_fn(Selector* __this, uType* __type, uObject* obj, bool* __retval)
{
    uStackFrame __("Uno.UX.Selector", "Equals(object)");

    if (uIs(obj, Selector_typeof()))
    {
        Selector sel = uUnbox<Selector>(Selector_typeof(), obj);
        return *__retval = sel._handle == __this->_handle, void();
    }

    uString* s = uAs<uString*>(obj, ::TYPES[17/*string*/]);

    if (::g::Uno::String::op_Inequality(s, NULL))
        return *__retval = __this->Equals(Selector_typeof(), uBox(Selector_typeof(), Selector__New1(s))), void();

    return *__retval = false, void();
}

// public override sealed int GetHashCode() :146
void Selector__GetHashCode_fn(Selector* __this, uType* __type, int* __retval)
{
    uStackFrame __("Uno.UX.Selector", "GetHashCode()");
    return *__retval = __this->_handle, void();
}

// internal int get_Handle() :133
void Selector__get_Handle_fn(Selector* __this, int* __retval)
{
    *__retval = __this->Handle();
}

// public bool get_IsNull() :143
void Selector__get_IsNull_fn(Selector* __this, bool* __retval)
{
    *__retval = __this->IsNull();
}

// public Selector New(string value) :136
void Selector__New1_fn(uString* value, Selector* __retval)
{
    *__retval = Selector__New1(value);
}

// public static operator ==(Uno.UX.Selector a, Uno.UX.Selector b) :178
void Selector__op_Equality_fn(Selector* a, Selector* b, bool* __retval)
{
    *__retval = Selector__op_Equality(*a, *b);
}

// public static implicit operator Uno.UX.Selector(string s) :168
void Selector__op_Implicit_fn(uString* s, Selector* __retval)
{
    *__retval = Selector__op_Implicit(s);
}

// public static implicit operator string(Uno.UX.Selector s) :173
void Selector__op_Implicit1_fn(Selector* s, uString** __retval)
{
    *__retval = Selector__op_Implicit1(*s);
}

// public static operator !=(Uno.UX.Selector a, Uno.UX.Selector b) :183
void Selector__op_Inequality_fn(Selector* a, Selector* b, bool* __retval)
{
    *__retval = Selector__op_Inequality(*a, *b);
}

// public override sealed string ToString() :188
void Selector__ToString_fn(Selector* __this, uType* __type, uString** __retval)
{
    uStackFrame __("Uno.UX.Selector", "ToString()");

    if (__this->_handle == 0)
        return *__retval = NULL, void();

    return *__retval = ::g::Uno::UX::SelectorRegistry::GetValue(__this->_handle), void();
}

// public Selector(string value) [instance] :136
void Selector::ctor_(uString* value)
{
    uStackFrame __("Uno.UX.Selector", ".ctor(string)");
    _handle = ::g::Uno::UX::SelectorRegistry::GetHandle(value);
}

// internal int get_Handle() [instance] :133
int Selector::Handle()
{
    uStackFrame __("Uno.UX.Selector", "get_Handle()");
    return _handle;
}

// public bool get_IsNull() [instance] :143
bool Selector::IsNull()
{
    uStackFrame __("Uno.UX.Selector", "get_IsNull()");
    return _handle == 0;
}

// public Selector New(string value) [static] :136
Selector Selector__New1(uString* value)
{
    Selector obj1;
    obj1.ctor_(value);
    return obj1;
}

// public static operator ==(Uno.UX.Selector a, Uno.UX.Selector b) [static] :178
bool Selector__op_Equality(Selector a, Selector b)
{
    uStackFrame __("Uno.UX.Selector", "==(Uno.UX.Selector,Uno.UX.Selector)");
    return a._handle == b._handle;
}

// public static implicit operator Uno.UX.Selector(string s) [static] :168
Selector Selector__op_Implicit(uString* s)
{
    uStackFrame __("Uno.UX.Selector", "op_Implicit(string)~Uno.UX.Selector");
    return Selector__New1(s);
}

// public static implicit operator string(Uno.UX.Selector s) [static] :173
uString* Selector__op_Implicit1(Selector s)
{
    uStackFrame __("Uno.UX.Selector", "op_Implicit(Uno.UX.Selector)~string");
    return s.ToString(Selector_typeof());
}

// public static operator !=(Uno.UX.Selector a, Uno.UX.Selector b) [static] :183
bool Selector__op_Inequality(Selector a, Selector b)
{
    uStackFrame __("Uno.UX.Selector", "!=(Uno.UX.Selector,Uno.UX.Selector)");
    return a._handle != b._handle;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/$.uno
// ----------------------------------------------------------------

// internal static class SelectorRegistry :97
// {
// static SelectorRegistry() :97
static void SelectorRegistry__cctor__fn(uType* __type)
{
    SelectorRegistry::_mutex_ = ::g::Uno::Object::New();
    SelectorRegistry::_stringToHandle_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[18/*Uno.Collections.Dictionary<string, int>*/]));
    SelectorRegistry::_handleToString_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[19/*Uno.Collections.Dictionary<int, string>*/]));
    SelectorRegistry::_counter_ = 1;
}

static void SelectorRegistry_build(uType* type)
{
    ::TYPES[18] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Int_typeof());
    ::TYPES[19] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::String_typeof());
    type->SetFields(0,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Uno::UX::SelectorRegistry::_counter_, uFieldFlagsStatic,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::String_typeof()), (uintptr_t)&::g::Uno::UX::SelectorRegistry::_handleToString_, uFieldFlagsStatic,
        uObject_typeof(), (uintptr_t)&::g::Uno::UX::SelectorRegistry::_mutex_, uFieldFlagsStatic,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Int_typeof()), (uintptr_t)&::g::Uno::UX::SelectorRegistry::_stringToHandle_, uFieldFlagsStatic);
}

uClassType* SelectorRegistry_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.UX.SelectorRegistry", options);
    type->fp_build_ = SelectorRegistry_build;
    type->fp_cctor_ = SelectorRegistry__cctor__fn;
    return type;
}

// internal static int GetHandle(string value) :104
void SelectorRegistry__GetHandle_fn(uString* value, int* __retval)
{
    *__retval = SelectorRegistry::GetHandle(value);
}

// public static string GetValue(int handle) :119
void SelectorRegistry__GetValue_fn(int* handle, uString** __retval)
{
    *__retval = SelectorRegistry::GetValue(*handle);
}

int SelectorRegistry::_counter_;
uSStrong< ::g::Uno::Collections::Dictionary*> SelectorRegistry::_handleToString_;
uSStrong<uObject*> SelectorRegistry::_mutex_;
uSStrong< ::g::Uno::Collections::Dictionary*> SelectorRegistry::_stringToHandle_;

// internal static int GetHandle(string value) [static] :104
int SelectorRegistry::GetHandle(uString* value)
{
    uStackFrame __("Uno.UX.SelectorRegistry", "GetHandle(string)");
    SelectorRegistry_typeof()->Init();
    bool ret1;
    ::g::Uno::Threading::Monitor::Enter(SelectorRegistry::_mutex());

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(SelectorRegistry::_mutex());
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        int handle;

        if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(SelectorRegistry::_stringToHandle()), value, &handle, &ret1), ret1))
        {
            handle = SelectorRegistry::_counter()++;
            ::g::Uno::Collections::Dictionary__Add_fn(uPtr(SelectorRegistry::_stringToHandle()), value, uCRef<int>(handle));
            ::g::Uno::Collections::Dictionary__Add_fn(uPtr(SelectorRegistry::_handleToString()), uCRef<int>(handle), value);
        }

        return handle;
    }
}

// public static string GetValue(int handle) [static] :119
uString* SelectorRegistry::GetValue(int handle)
{
    uStackFrame __("Uno.UX.SelectorRegistry", "GetValue(int)");
    SelectorRegistry_typeof()->Init();
    uString* ret2;
    ::g::Uno::Threading::Monitor::Enter(SelectorRegistry::_mutex());

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(SelectorRegistry::_mutex());
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(SelectorRegistry::_handleToString()), uCRef<int>(handle), &ret2), ret2);
    }
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/$.uno
// ----------------------------------------------------------------

// public struct Size :761
// {
static void Size_build(uType* type)
{
    ::STRINGS[2] = uString::Const(" (unspecified unit)");
    ::STRINGS[3] = uString::Const("pt");
    ::STRINGS[4] = uString::Const("px");
    ::STRINGS[5] = uString::Const("%");
    ::STRINGS[6] = uString::Const(" (");
    ::STRINGS[7] = uString::Const(")");
    ::TYPES[20] = ::g::Uno::Float_typeof();
    ::TYPES[21] = ::g::Uno::Int_typeof();
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::UX::Size, Value), 0,
        ::g::Uno::UX::Unit_typeof(), offsetof(::g::Uno::UX::Size, Unit), 0);
    type->Reflection.SetFields(2,
        new uField("Unit", 1),
        new uField("Value", 0));
    type->Reflection.SetFunctions(7,
        new uFunction("get_Auto", NULL, (void*)Size__get_Auto_fn, 0, true, Size_typeof(), 0),
        new uFunction("DetermineUnit", NULL, (void*)Size__DetermineUnit_fn, 0, false, ::g::Uno::UX::Unit_typeof(), 0),
        new uFunction("get_IsAuto", NULL, (void*)Size__get_IsAuto_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Size__New1_fn, 0, true, Size_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::UX::Unit_typeof()),
        new uFunction("Percent", NULL, (void*)Size__Percent_fn, 0, true, Size_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Pixels", NULL, (void*)Size__Pixels_fn, 0, true, Size_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Points", NULL, (void*)Size__Points_fn, 0, true, Size_typeof(), 1, ::g::Uno::Float_typeof()));
}

uStructType* Size_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(Size);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.UX.Size", options);
    type->fp_build_ = Size_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Size__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Size__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Size__ToString_fn;
    return type;
}

// public Size(float value, Uno.UX.Unit unit) :766
void Size__ctor__fn(Size* __this, float* value, int* unit)
{
    __this->ctor_(*value, *unit);
}

// public static Uno.UX.Size get_Auto() :831
void Size__get_Auto_fn(Size* __retval)
{
    *__retval = Size__Auto();
}

// private static Uno.UX.Unit Combine(Uno.UX.Unit a, Uno.UX.Unit b) :787
void Size__Combine_fn(int* a, int* b, int* __retval)
{
    *__retval = Size::Combine(*a, *b);
}

// public Uno.UX.Unit DetermineUnit() :795
void Size__DetermineUnit_fn(Size* __this, int* __retval)
{
    *__retval = __this->DetermineUnit();
}

// public override sealed bool Equals(object obj) :862
void Size__Equals_fn(Size* __this, uType* __type, uObject* obj, bool* __retval)
{
    uStackFrame __("Uno.UX.Size", "Equals(object)");

    if (uIs(obj, Size_typeof()))
    {
        Size s = uUnbox<Size>(Size_typeof(), obj);

        if (s.Unit != __this->Unit)
            return *__retval = false, void();

        if (s.Value != __this->Value)
            return *__retval = false, void();

        return *__retval = true, void();
    }
    else  if (uIs(obj, ::TYPES[20/*float*/]))
    {
        if ((__this->Unit != 2) && (__this->Unit != 1))
            return *__retval = false, void();

        float f = uUnbox<float>(::TYPES[20/*float*/], obj);

        if (f != __this->Value)
            return *__retval = false, void();

        return *__retval = true, void();
    }
    else 
        return *__retval = false, void();
}

// public override sealed int GetHashCode() :881
void Size__GetHashCode_fn(Size* __this, uType* __type, int* __retval)
{
    uStackFrame __("Uno.UX.Size", "GetHashCode()");
    float ind7;
    return *__retval = ::g::Uno::Float::GetHashCode((ind7 = __this->Value, ind7), ::TYPES[20/*float*/]), void();
}

// public bool get_IsAuto() :833
void Size__get_IsAuto_fn(Size* __this, bool* __retval)
{
    *__retval = __this->IsAuto();
}

// public Size New(float value, Uno.UX.Unit unit) :766
void Size__New1_fn(float* value, int* unit, Size* __retval)
{
    *__retval = Size__New1(*value, *unit);
}

// public static operator +(Uno.UX.Size a, Uno.UX.Size b) :801
void Size__op_Addition_fn(Size* a, Size* b, Size* __retval)
{
    *__retval = Size__op_Addition(*a, *b);
}

// public static operator /(Uno.UX.Size a, float b) :816
void Size__op_Division_fn(Size* a, float* b, Size* __retval)
{
    *__retval = Size__op_Division(*a, *b);
}

// public static operator ==(Uno.UX.Size a, Uno.UX.Size b) :821
void Size__op_Equality_fn(Size* a, Size* b, bool* __retval)
{
    *__retval = Size__op_Equality(*a, *b);
}

// public static explicit operator float(Uno.UX.Size s) :782
void Size__op_Explicit_fn(Size* s, float* __retval)
{
    *__retval = Size__op_Explicit(*s);
}

// public static implicit operator Uno.UX.Size(float unspecifiedUnits) :772
void Size__op_Implicit_fn(float* unspecifiedUnits, Size* __retval)
{
    *__retval = Size__op_Implicit(*unspecifiedUnits);
}

// public static implicit operator Uno.UX.Size(int unspecifiedUnits) :777
void Size__op_Implicit1_fn(int* unspecifiedUnits, Size* __retval)
{
    *__retval = Size__op_Implicit1(*unspecifiedUnits);
}

// public static operator !=(Uno.UX.Size a, Uno.UX.Size b) :826
void Size__op_Inequality_fn(Size* a, Size* b, bool* __retval)
{
    *__retval = Size__op_Inequality(*a, *b);
}

// public static operator *(Uno.UX.Size a, float b) :811
void Size__op_Multiply_fn(Size* a, float* b, Size* __retval)
{
    *__retval = Size__op_Multiply(*a, *b);
}

// public static operator -(Uno.UX.Size a, Uno.UX.Size b) :806
void Size__op_Subtraction_fn(Size* a, Size* b, Size* __retval)
{
    *__retval = Size__op_Subtraction(*a, *b);
}

// public static Uno.UX.Size Percent(float value) :845
void Size__Percent_fn(float* value, Size* __retval)
{
    *__retval = Size__Percent(*value);
}

// public static Uno.UX.Size Pixels(float value) :840
void Size__Pixels_fn(float* value, Size* __retval)
{
    *__retval = Size__Pixels(*value);
}

// public static Uno.UX.Size Points(float value) :835
void Size__Points_fn(float* value, Size* __retval)
{
    *__retval = Size__Points(*value);
}

// public override sealed string ToString() :850
void Size__ToString_fn(Size* __this, uType* __type, uString** __retval)
{
    uStackFrame __("Uno.UX.Size", "ToString()");
    float ind1;
    float ind2;
    float ind3;
    float ind4;
    float ind5;
    int ind6;

    switch (__this->Unit)
    {
        case 1:
            return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::Float::ToString((ind1 = __this->Value, ind1), ::TYPES[20/*float*/]), ::STRINGS[2/*" (unspecifi...*/]), void();
        case 2:
            return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::Float::ToString((ind2 = __this->Value, ind2), ::TYPES[20/*float*/]), ::STRINGS[3/*"pt"*/]), void();
        case 3:
            return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::Float::ToString((ind3 = __this->Value, ind3), ::TYPES[20/*float*/]), ::STRINGS[4/*"px"*/]), void();
        case 4:
            return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::Float::ToString((ind4 = __this->Value, ind4), ::TYPES[20/*float*/]), ::STRINGS[5/*"%"*/]), void();
        default:
            return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Float::ToString((ind5 = __this->Value, ind5), ::TYPES[20/*float*/]), ::STRINGS[6/*" ("*/]), ::g::Uno::Int::ToString((ind6 = __this->Unit, ind6), ::TYPES[21/*int*/])), ::STRINGS[7/*")"*/]), void();
    }
}

// public Size(float value, Uno.UX.Unit unit) [instance] :766
void Size::ctor_(float value, int unit)
{
    uStackFrame __("Uno.UX.Size", ".ctor(float,Uno.UX.Unit)");
    Value = value;
    Unit = unit;
}

// public Uno.UX.Unit DetermineUnit() [instance] :795
int Size::DetermineUnit()
{
    uStackFrame __("Uno.UX.Size", "DetermineUnit()");

    if (Unit == 1)
        return 2;
    else 
        return Unit;
}

// public bool get_IsAuto() [instance] :833
bool Size::IsAuto()
{
    uStackFrame __("Uno.UX.Size", "get_IsAuto()");
    return Unit == 0;
}

// private static Uno.UX.Unit Combine(Uno.UX.Unit a, Uno.UX.Unit b) [static] :787
int Size::Combine(int a, int b)
{
    uStackFrame __("Uno.UX.Size", "Combine(Uno.UX.Unit,Uno.UX.Unit)");

    if (a == b)
        return a;

    if (a == 1)
        return b;

    if (b == 1)
        return a;

    return 1;
}

// public Size New(float value, Uno.UX.Unit unit) [static] :766
Size Size__New1(float value, int unit)
{
    Size obj8;
    obj8.ctor_(value, unit);
    return obj8;
}

// public static operator +(Uno.UX.Size a, Uno.UX.Size b) [static] :801
Size Size__op_Addition(Size a, Size b)
{
    uStackFrame __("Uno.UX.Size", "+(Uno.UX.Size,Uno.UX.Size)");
    return Size__New1(a.Value + b.Value, Size::Combine(a.Unit, b.Unit));
}

// public static operator /(Uno.UX.Size a, float b) [static] :816
Size Size__op_Division(Size a, float b)
{
    uStackFrame __("Uno.UX.Size", "/(Uno.UX.Size,float)");
    return Size__New1(a.Value / b, a.Unit);
}

// public static operator ==(Uno.UX.Size a, Uno.UX.Size b) [static] :821
bool Size__op_Equality(Size a, Size b)
{
    uStackFrame __("Uno.UX.Size", "==(Uno.UX.Size,Uno.UX.Size)");
    return (a.Value == b.Value) && (a.Unit == b.Unit);
}

// public static explicit operator float(Uno.UX.Size s) [static] :782
float Size__op_Explicit(Size s)
{
    uStackFrame __("Uno.UX.Size", "op_Explicit(Uno.UX.Size)~float");
    return s.Value;
}

// public static implicit operator Uno.UX.Size(float unspecifiedUnits) [static] :772
Size Size__op_Implicit(float unspecifiedUnits)
{
    uStackFrame __("Uno.UX.Size", "op_Implicit(float)~Uno.UX.Size");
    return Size__New1(unspecifiedUnits, 1);
}

// public static implicit operator Uno.UX.Size(int unspecifiedUnits) [static] :777
Size Size__op_Implicit1(int unspecifiedUnits)
{
    uStackFrame __("Uno.UX.Size", "op_Implicit(int)~Uno.UX.Size");
    return Size__New1((float)unspecifiedUnits, 1);
}

// public static operator !=(Uno.UX.Size a, Uno.UX.Size b) [static] :826
bool Size__op_Inequality(Size a, Size b)
{
    uStackFrame __("Uno.UX.Size", "!=(Uno.UX.Size,Uno.UX.Size)");
    return (a.Value != b.Value) || (a.Unit != b.Unit);
}

// public static operator *(Uno.UX.Size a, float b) [static] :811
Size Size__op_Multiply(Size a, float b)
{
    uStackFrame __("Uno.UX.Size", "*(Uno.UX.Size,float)");
    return Size__New1(a.Value * b, a.Unit);
}

// public static operator -(Uno.UX.Size a, Uno.UX.Size b) [static] :806
Size Size__op_Subtraction(Size a, Size b)
{
    uStackFrame __("Uno.UX.Size", "-(Uno.UX.Size,Uno.UX.Size)");
    return Size__New1(a.Value - b.Value, Size::Combine(a.Unit, b.Unit));
}

// public static Uno.UX.Size Percent(float value) [static] :845
Size Size__Percent(float value)
{
    uStackFrame __("Uno.UX.Size", "Percent(float)");
    return Size__New1(value, 4);
}

// public static Uno.UX.Size Pixels(float value) [static] :840
Size Size__Pixels(float value)
{
    uStackFrame __("Uno.UX.Size", "Pixels(float)");
    return Size__New1(value, 3);
}

// public static Uno.UX.Size Points(float value) [static] :835
Size Size__Points(float value)
{
    uStackFrame __("Uno.UX.Size", "Points(float)");
    return Size__New1(value, 2);
}

// public static Uno.UX.Size get_Auto() [static] :831
Size Size__Auto()
{
    uStackFrame __("Uno.UX.Size", "get_Auto()");
    return Size__New1(0.0f, 0);
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/$.uno
// ----------------------------------------------------------------

// public struct Size2 :899
// {
static void Size2_build(uType* type)
{
    ::STRINGS[8] = uString::Const(", ");
    ::TYPES[22] = ::g::Uno::UX::Size_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Size_typeof(), offsetof(::g::Uno::UX::Size2, X), 0,
        ::g::Uno::UX::Size_typeof(), offsetof(::g::Uno::UX::Size2, Y), 0);
    type->Reflection.SetFields(2,
        new uField("X", 0),
        new uField("Y", 1));
    type->Reflection.SetFunctions(2,
        new uFunction("get_Auto", NULL, (void*)Size2__get_Auto_fn, 0, true, Size2_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Size2__New1_fn, 0, true, Size2_typeof(), 2, ::g::Uno::UX::Size_typeof(), ::g::Uno::UX::Size_typeof()));
}

uStructType* Size2_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(Size2);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.UX.Size2", options);
    type->fp_build_ = Size2_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Size2__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Size2__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Size2__ToString_fn;
    return type;
}

// public Size2(Uno.UX.Size x, Uno.UX.Size y) :904
void Size2__ctor__fn(Size2* __this, ::g::Uno::UX::Size* x, ::g::Uno::UX::Size* y)
{
    __this->ctor_(*x, *y);
}

// public static Uno.UX.Size2 get_Auto() :959
void Size2__get_Auto_fn(Size2* __retval)
{
    *__retval = Size2__Auto();
}

// public override sealed bool Equals(object obj) :982
void Size2__Equals_fn(Size2* __this, uType* __type, uObject* obj, bool* __retval)
{
    uStackFrame __("Uno.UX.Size2", "Equals(object)");

    if (uIs(obj, Size2_typeof()))
    {
        Size2 s = uUnbox<Size2>(Size2_typeof(), obj);

        if (::g::Uno::UX::Size__op_Inequality(s.X, __this->X))
            return *__retval = false, void();

        if (::g::Uno::UX::Size__op_Inequality(s.Y, __this->Y))
            return *__retval = false, void();

        return *__retval = true, void();
    }
    else 
        return *__retval = false, void();
}

// public override sealed int GetHashCode() :994
void Size2__GetHashCode_fn(Size2* __this, uType* __type, int* __retval)
{
    uStackFrame __("Uno.UX.Size2", "GetHashCode()");
    ::g::Uno::UX::Size ind3;
    ::g::Uno::UX::Size ind4;
    return *__retval = (ind3 = __this->X, (&ind3))->GetHashCode(::TYPES[22/*Uno.UX.Size*/]) ^ (ind4 = __this->Y, (&ind4))->GetHashCode(::TYPES[22/*Uno.UX.Size*/]), void();
}

// public Size2 New(Uno.UX.Size x, Uno.UX.Size y) :904
void Size2__New1_fn(::g::Uno::UX::Size* x, ::g::Uno::UX::Size* y, Size2* __retval)
{
    *__retval = Size2__New1(*x, *y);
}

// public static operator +(Uno.UX.Size2 a, Uno.UX.Size2 b) :927
void Size2__op_Addition_fn(Size2* a, Size2* b, Size2* __retval)
{
    *__retval = Size2__op_Addition(*a, *b);
}

// public static operator /(Uno.UX.Size2 a, float b) :942
void Size2__op_Division_fn(Size2* a, float* b, Size2* __retval)
{
    *__retval = Size2__op_Division(*a, *b);
}

// public static operator ==(Uno.UX.Size2 a, Uno.UX.Size2 b) :947
void Size2__op_Equality_fn(Size2* a, Size2* b, bool* __retval)
{
    *__retval = Size2__op_Equality(*a, *b);
}

// public static explicit operator float2(Uno.UX.Size2 v) :920
void Size2__op_Explicit_fn(Size2* v, ::g::Uno::Float2* __retval)
{
    *__retval = Size2__op_Explicit(*v);
}

// public static implicit operator Uno.UX.Size2(float2 unspecifiedUnitsVector) :910
void Size2__op_Implicit1_fn(::g::Uno::Float2* unspecifiedUnitsVector, Size2* __retval)
{
    *__retval = Size2__op_Implicit1(*unspecifiedUnitsVector);
}

// public static operator !=(Uno.UX.Size2 a, Uno.UX.Size2 b) :952
void Size2__op_Inequality_fn(Size2* a, Size2* b, bool* __retval)
{
    *__retval = Size2__op_Inequality(*a, *b);
}

// public static operator *(Uno.UX.Size2 a, float b) :937
void Size2__op_Multiply_fn(Size2* a, float* b, Size2* __retval)
{
    *__retval = Size2__op_Multiply(*a, *b);
}

// public static operator -(Uno.UX.Size2 a, Uno.UX.Size2 b) :932
void Size2__op_Subtraction_fn(Size2* a, Size2* b, Size2* __retval)
{
    *__retval = Size2__op_Subtraction(*a, *b);
}

// public override sealed string ToString() :977
void Size2__ToString_fn(Size2* __this, uType* __type, uString** __retval)
{
    uStackFrame __("Uno.UX.Size2", "ToString()");
    ::g::Uno::UX::Size ind1;
    ::g::Uno::UX::Size ind2;
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2((ind1 = __this->X, (&ind1))->ToString(::TYPES[22/*Uno.UX.Size*/]), ::STRINGS[8/*", "*/]), (ind2 = __this->Y, (&ind2))->ToString(::TYPES[22/*Uno.UX.Size*/])), void();
}

// public Size2(Uno.UX.Size x, Uno.UX.Size y) [instance] :904
void Size2::ctor_(::g::Uno::UX::Size x, ::g::Uno::UX::Size y)
{
    uStackFrame __("Uno.UX.Size2", ".ctor(Uno.UX.Size,Uno.UX.Size)");
    X = x;
    Y = y;
}

// public Size2 New(Uno.UX.Size x, Uno.UX.Size y) [static] :904
Size2 Size2__New1(::g::Uno::UX::Size x, ::g::Uno::UX::Size y)
{
    Size2 obj5;
    obj5.ctor_(x, y);
    return obj5;
}

// public static operator +(Uno.UX.Size2 a, Uno.UX.Size2 b) [static] :927
Size2 Size2__op_Addition(Size2 a, Size2 b)
{
    uStackFrame __("Uno.UX.Size2", "+(Uno.UX.Size2,Uno.UX.Size2)");
    return Size2__New1(::g::Uno::UX::Size__op_Addition(a.X, b.X), ::g::Uno::UX::Size__op_Addition(a.Y, b.Y));
}

// public static operator /(Uno.UX.Size2 a, float b) [static] :942
Size2 Size2__op_Division(Size2 a, float b)
{
    uStackFrame __("Uno.UX.Size2", "/(Uno.UX.Size2,float)");
    return Size2__New1(::g::Uno::UX::Size__op_Division(a.X, b), ::g::Uno::UX::Size__op_Division(a.Y, b));
}

// public static operator ==(Uno.UX.Size2 a, Uno.UX.Size2 b) [static] :947
bool Size2__op_Equality(Size2 a, Size2 b)
{
    uStackFrame __("Uno.UX.Size2", "==(Uno.UX.Size2,Uno.UX.Size2)");
    return ::g::Uno::UX::Size__op_Equality(a.X, b.X) && ::g::Uno::UX::Size__op_Equality(a.Y, b.Y);
}

// public static explicit operator float2(Uno.UX.Size2 v) [static] :920
::g::Uno::Float2 Size2__op_Explicit(Size2 v)
{
    uStackFrame __("Uno.UX.Size2", "op_Explicit(Uno.UX.Size2)~float2");
    ::g::Uno::UX::Size x = v.X;
    ::g::Uno::UX::Size y = v.Y;
    return ::g::Uno::Float2__New2(x.Value, y.Value);
}

// public static implicit operator Uno.UX.Size2(float2 unspecifiedUnitsVector) [static] :910
Size2 Size2__op_Implicit1(::g::Uno::Float2 unspecifiedUnitsVector)
{
    uStackFrame __("Uno.UX.Size2", "op_Implicit(float2)~Uno.UX.Size2");
    return Size2__New1(::g::Uno::UX::Size__op_Implicit(unspecifiedUnitsVector.X), ::g::Uno::UX::Size__op_Implicit(unspecifiedUnitsVector.Y));
}

// public static operator !=(Uno.UX.Size2 a, Uno.UX.Size2 b) [static] :952
bool Size2__op_Inequality(Size2 a, Size2 b)
{
    uStackFrame __("Uno.UX.Size2", "!=(Uno.UX.Size2,Uno.UX.Size2)");
    return ::g::Uno::UX::Size__op_Inequality(a.X, b.X) || ::g::Uno::UX::Size__op_Inequality(a.Y, b.Y);
}

// public static operator *(Uno.UX.Size2 a, float b) [static] :937
Size2 Size2__op_Multiply(Size2 a, float b)
{
    uStackFrame __("Uno.UX.Size2", "*(Uno.UX.Size2,float)");
    return Size2__New1(::g::Uno::UX::Size__op_Multiply(a.X, b), ::g::Uno::UX::Size__op_Multiply(a.Y, b));
}

// public static operator -(Uno.UX.Size2 a, Uno.UX.Size2 b) [static] :932
Size2 Size2__op_Subtraction(Size2 a, Size2 b)
{
    uStackFrame __("Uno.UX.Size2", "-(Uno.UX.Size2,Uno.UX.Size2)");
    return Size2__New1(::g::Uno::UX::Size__op_Subtraction(a.X, b.X), ::g::Uno::UX::Size__op_Subtraction(a.Y, b.Y));
}

// public static Uno.UX.Size2 get_Auto() [static] :959
Size2 Size2__Auto()
{
    uStackFrame __("Uno.UX.Size2", "get_Auto()");
    return Size2__New1(::g::Uno::UX::Size__Auto(), ::g::Uno::UX::Size__Auto());
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/$.uno
// ----------------------------------------------------------------

// internal sealed class Size2Value :1218
// {
static void Size2Value_build(uType* type)
{
    ::TYPES[23] = ::g::Uno::UX::Size2_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Size2_typeof(), offsetof(::g::Uno::UX::Size2Value, _value), 0);
}

::g::Uno::UX::Value_type* Size2Value_typeof()
{
    static uSStrong< ::g::Uno::UX::Value_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Value_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Size2Value);
    options.TypeSize = sizeof(::g::Uno::UX::Value_type);
    type = (::g::Uno::UX::Value_type*)uClassType::New("Uno.UX.Size2Value", options);
    type->fp_build_ = Size2Value_build;
    type->fp_Add = (void(*)(::g::Uno::UX::Value*, ::g::Uno::UX::Value*, ::g::Uno::UX::Value**))Size2Value__Add_fn;
    type->fp_Divide = (void(*)(::g::Uno::UX::Value*, ::g::Uno::UX::Value*, ::g::Uno::UX::Value**))Size2Value__Divide_fn;
    type->fp_Multiply = (void(*)(::g::Uno::UX::Value*, ::g::Uno::UX::Value*, ::g::Uno::UX::Value**))Size2Value__Multiply_fn;
    type->fp_Subtract = (void(*)(::g::Uno::UX::Value*, ::g::Uno::UX::Value*, ::g::Uno::UX::Value**))Size2Value__Subtract_fn;
    type->fp_ToDouble = (void(*)(::g::Uno::UX::Value*, double*))Size2Value__ToDouble_fn;
    type->fp_ToFloat2 = (void(*)(::g::Uno::UX::Value*, ::g::Uno::Float2*))Size2Value__ToFloat2_fn;
    type->fp_ToObject = (void(*)(::g::Uno::UX::Value*, uObject**))Size2Value__ToObject_fn;
    type->fp_ToSize = (void(*)(::g::Uno::UX::Value*, ::g::Uno::UX::Size*))Size2Value__ToSize_fn;
    type->fp_ToSize2 = (void(*)(::g::Uno::UX::Value*, ::g::Uno::UX::Size2*))Size2Value__ToSize2_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Size2Value__ToString_fn;
    return type;
}

// public Size2Value(Uno.UX.Size2 value) :1221
void Size2Value__ctor_1_fn(Size2Value* __this, ::g::Uno::UX::Size2* value)
{
    __this->ctor_1(*value);
}

// public override sealed Uno.UX.Value Add(Uno.UX.Value v) :1227
void Size2Value__Add_fn(Size2Value* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval)
{
    uStackFrame __("Uno.UX.Size2Value", "Add(Uno.UX.Value)");
    return *__retval = ::g::Uno::UX::Value::op_Implicit9(::g::Uno::UX::Size2__op_Addition(__this->_value, uPtr(v)->ToSize2())), void();
}

// public override sealed Uno.UX.Value Divide(Uno.UX.Value v) :1230
void Size2Value__Divide_fn(Size2Value* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval)
{
    uStackFrame __("Uno.UX.Size2Value", "Divide(Uno.UX.Value)");
    return *__retval = ::g::Uno::UX::Value::op_Implicit9(::g::Uno::UX::Size2__op_Division(__this->_value, uPtr(v)->ToFloat())), void();
}

// public override sealed Uno.UX.Value Multiply(Uno.UX.Value v) :1229
void Size2Value__Multiply_fn(Size2Value* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval)
{
    uStackFrame __("Uno.UX.Size2Value", "Multiply(Uno.UX.Value)");
    return *__retval = ::g::Uno::UX::Value::op_Implicit9(::g::Uno::UX::Size2__op_Multiply(__this->_value, uPtr(v)->ToFloat())), void();
}

// public Size2Value New(Uno.UX.Size2 value) :1221
void Size2Value__New1_fn(::g::Uno::UX::Size2* value, Size2Value** __retval)
{
    *__retval = Size2Value::New1(*value);
}

// public override sealed Uno.UX.Value Subtract(Uno.UX.Value v) :1228
void Size2Value__Subtract_fn(Size2Value* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval)
{
    uStackFrame __("Uno.UX.Size2Value", "Subtract(Uno.UX.Value)");
    return *__retval = ::g::Uno::UX::Value::op_Implicit9(::g::Uno::UX::Size2__op_Subtraction(__this->_value, uPtr(v)->ToSize2())), void();
}

// public override sealed double ToDouble() :1222
void Size2Value__ToDouble_fn(Size2Value* __this, double* __retval)
{
    uStackFrame __("Uno.UX.Size2Value", "ToDouble()");
    return *__retval = (double)::g::Uno::UX::Size__op_Explicit(__this->_value.X), void();
}

// public override sealed float2 ToFloat2() :1226
void Size2Value__ToFloat2_fn(Size2Value* __this, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Uno.UX.Size2Value", "ToFloat2()");
    return *__retval = ::g::Uno::Float2__New2(::g::Uno::UX::Size__op_Explicit(__this->_value.X), ::g::Uno::UX::Size__op_Explicit(__this->_value.Y)), void();
}

// public override sealed object ToObject() :1223
void Size2Value__ToObject_fn(Size2Value* __this, uObject** __retval)
{
    uStackFrame __("Uno.UX.Size2Value", "ToObject()");
    return *__retval = uBox(::TYPES[23/*Uno.UX.Size2*/], __this->_value), void();
}

// public override sealed Uno.UX.Size ToSize() :1224
void Size2Value__ToSize_fn(Size2Value* __this, ::g::Uno::UX::Size* __retval)
{
    uStackFrame __("Uno.UX.Size2Value", "ToSize()");
    return *__retval = __this->_value.X, void();
}

// public override sealed Uno.UX.Size2 ToSize2() :1225
void Size2Value__ToSize2_fn(Size2Value* __this, ::g::Uno::UX::Size2* __retval)
{
    uStackFrame __("Uno.UX.Size2Value", "ToSize2()");
    return *__retval = __this->_value, void();
}

// public override sealed string ToString() :1231
void Size2Value__ToString_fn(Size2Value* __this, uString** __retval)
{
    uStackFrame __("Uno.UX.Size2Value", "ToString()");
    return *__retval = __this->_value.ToString(::TYPES[23/*Uno.UX.Size2*/]), void();
}

// public Size2Value(Uno.UX.Size2 value) [instance] :1221
void Size2Value::ctor_1(::g::Uno::UX::Size2 value)
{
    uStackFrame __("Uno.UX.Size2Value", ".ctor(Uno.UX.Size2)");
    ctor_();
    _value = value;
}

// public Size2Value New(Uno.UX.Size2 value) [static] :1221
Size2Value* Size2Value::New1(::g::Uno::UX::Size2 value)
{
    Size2Value* obj1 = (Size2Value*)uNew(Size2Value_typeof());
    obj1->ctor_1(value);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/$.uno
// ----------------------------------------------------------------

// internal sealed class SizeValue :1204
// {
static void SizeValue_build(uType* type)
{
    ::TYPES[22] = ::g::Uno::UX::Size_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Size_typeof(), offsetof(::g::Uno::UX::SizeValue, _value), 0);
}

::g::Uno::UX::Value_type* SizeValue_typeof()
{
    static uSStrong< ::g::Uno::UX::Value_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Value_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(SizeValue);
    options.TypeSize = sizeof(::g::Uno::UX::Value_type);
    type = (::g::Uno::UX::Value_type*)uClassType::New("Uno.UX.SizeValue", options);
    type->fp_build_ = SizeValue_build;
    type->fp_Add = (void(*)(::g::Uno::UX::Value*, ::g::Uno::UX::Value*, ::g::Uno::UX::Value**))SizeValue__Add_fn;
    type->fp_Divide = (void(*)(::g::Uno::UX::Value*, ::g::Uno::UX::Value*, ::g::Uno::UX::Value**))SizeValue__Divide_fn;
    type->fp_Multiply = (void(*)(::g::Uno::UX::Value*, ::g::Uno::UX::Value*, ::g::Uno::UX::Value**))SizeValue__Multiply_fn;
    type->fp_Subtract = (void(*)(::g::Uno::UX::Value*, ::g::Uno::UX::Value*, ::g::Uno::UX::Value**))SizeValue__Subtract_fn;
    type->fp_ToDouble = (void(*)(::g::Uno::UX::Value*, double*))SizeValue__ToDouble_fn;
    type->fp_ToObject = (void(*)(::g::Uno::UX::Value*, uObject**))SizeValue__ToObject_fn;
    type->fp_ToSize = (void(*)(::g::Uno::UX::Value*, ::g::Uno::UX::Size*))SizeValue__ToSize_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))SizeValue__ToString_fn;
    return type;
}

// public SizeValue(Uno.UX.Size value) :1207
void SizeValue__ctor_1_fn(SizeValue* __this, ::g::Uno::UX::Size* value)
{
    __this->ctor_1(*value);
}

// public override sealed Uno.UX.Value Add(Uno.UX.Value v) :1211
void SizeValue__Add_fn(SizeValue* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval)
{
    uStackFrame __("Uno.UX.SizeValue", "Add(Uno.UX.Value)");
    return *__retval = ::g::Uno::UX::Value::op_Implicit8(::g::Uno::UX::Size__op_Addition(__this->_value, uPtr(v)->ToSize())), void();
}

// public override sealed Uno.UX.Value Divide(Uno.UX.Value v) :1214
void SizeValue__Divide_fn(SizeValue* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval)
{
    uStackFrame __("Uno.UX.SizeValue", "Divide(Uno.UX.Value)");
    return *__retval = ::g::Uno::UX::Value::op_Implicit8(::g::Uno::UX::Size__op_Division(__this->_value, uPtr(v)->ToFloat())), void();
}

// public override sealed Uno.UX.Value Multiply(Uno.UX.Value v) :1213
void SizeValue__Multiply_fn(SizeValue* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval)
{
    uStackFrame __("Uno.UX.SizeValue", "Multiply(Uno.UX.Value)");
    return *__retval = ::g::Uno::UX::Value::op_Implicit8(::g::Uno::UX::Size__op_Multiply(__this->_value, uPtr(v)->ToFloat())), void();
}

// public SizeValue New(Uno.UX.Size value) :1207
void SizeValue__New1_fn(::g::Uno::UX::Size* value, SizeValue** __retval)
{
    *__retval = SizeValue::New1(*value);
}

// public override sealed Uno.UX.Value Subtract(Uno.UX.Value v) :1212
void SizeValue__Subtract_fn(SizeValue* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval)
{
    uStackFrame __("Uno.UX.SizeValue", "Subtract(Uno.UX.Value)");
    return *__retval = ::g::Uno::UX::Value::op_Implicit8(::g::Uno::UX::Size__op_Subtraction(__this->_value, uPtr(v)->ToSize())), void();
}

// public override sealed double ToDouble() :1208
void SizeValue__ToDouble_fn(SizeValue* __this, double* __retval)
{
    uStackFrame __("Uno.UX.SizeValue", "ToDouble()");
    return *__retval = (double)::g::Uno::UX::Size__op_Explicit(__this->_value), void();
}

// public override sealed object ToObject() :1209
void SizeValue__ToObject_fn(SizeValue* __this, uObject** __retval)
{
    uStackFrame __("Uno.UX.SizeValue", "ToObject()");
    return *__retval = uBox(::TYPES[22/*Uno.UX.Size*/], __this->_value), void();
}

// public override sealed Uno.UX.Size ToSize() :1210
void SizeValue__ToSize_fn(SizeValue* __this, ::g::Uno::UX::Size* __retval)
{
    uStackFrame __("Uno.UX.SizeValue", "ToSize()");
    return *__retval = __this->_value, void();
}

// public override sealed string ToString() :1215
void SizeValue__ToString_fn(SizeValue* __this, uString** __retval)
{
    uStackFrame __("Uno.UX.SizeValue", "ToString()");
    return *__retval = __this->_value.ToString(::TYPES[22/*Uno.UX.Size*/]), void();
}

// public SizeValue(Uno.UX.Size value) [instance] :1207
void SizeValue::ctor_1(::g::Uno::UX::Size value)
{
    uStackFrame __("Uno.UX.SizeValue", ".ctor(Uno.UX.Size)");
    ctor_();
    _value = value;
}

// public SizeValue New(Uno.UX.Size value) [static] :1207
SizeValue* SizeValue::New1(::g::Uno::UX::Size value)
{
    SizeValue* obj1 = (SizeValue*)uNew(SizeValue_typeof());
    obj1->ctor_1(value);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/$.uno
// ----------------------------------------------------------------

// internal static class StreamExtensions :300
// {
static void StreamExtensions_build(uType* type)
{
    ::STRINGS[9] = uString::Const("Bug in Uno compiler, this case should never ever happen.");
    ::TYPES[24] = ::g::Uno::IDisposable_typeof();
    ::TYPES[25] = ::g::Uno::Byte_typeof()->Array();
}

uClassType* StreamExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.UX.StreamExtensions", options);
    type->fp_build_ = StreamExtensions_build;
    return type;
}

// public static byte[] ReadAllBytes(Uno.IO.BinaryReader reader) :302
void StreamExtensions__ReadAllBytes_fn(::g::Uno::IO::BinaryReader* reader, uArray** __retval)
{
    *__retval = StreamExtensions::ReadAllBytes(reader);
}

// public static byte[] ToArray(Uno.IO.MemoryStream memoryStream) :320
void StreamExtensions__ToArray_fn(::g::Uno::IO::MemoryStream* memoryStream, uArray** __retval)
{
    *__retval = StreamExtensions::ToArray(memoryStream);
}

// public static byte[] ReadAllBytes(Uno.IO.BinaryReader reader) [static] :302
uArray* StreamExtensions::ReadAllBytes(::g::Uno::IO::BinaryReader* reader)
{
    uStackFrame __("Uno.UX.StreamExtensions", "ReadAllBytes(Uno.IO.BinaryReader)");
    int bufferSize = 4096;
    ::g::Uno::IO::MemoryStream* ms = ::g::Uno::IO::MemoryStream::New1();

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)ms), ::TYPES[24/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        uArray* buffer;

        do
        {
            buffer = uPtr(reader)->ReadBytes(4096);
            uPtr(ms)->Write(buffer, 0, uPtr(buffer)->Length());
        }
        while (uPtr(buffer)->Length() == 4096);

        return StreamExtensions::ToArray(ms);
    }

    U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[9/*"Bug in Uno ...*/]));
}

// public static byte[] ToArray(Uno.IO.MemoryStream memoryStream) [static] :320
uArray* StreamExtensions::ToArray(::g::Uno::IO::MemoryStream* memoryStream)
{
    uStackFrame __("Uno.UX.StreamExtensions", "ToArray(Uno.IO.MemoryStream)");
    uArray* buffer = uPtr(memoryStream)->GetBuffer();
    uArray* bytes = uArray::New(::TYPES[25/*byte[]*/], (int)memoryStream->Length());

    for (int i = 0; (int64_t)i < memoryStream->Length(); ++i)
        uPtr(bytes)->Item<uint8_t>(i) = uPtr(buffer)->Item<uint8_t>(i);

    return bytes;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/$.uno
// ----------------------------------------------------------------

// internal sealed class StringValue :1194
// {
static void StringValue_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::UX::StringValue, _value), 0);
}

::g::Uno::UX::Value_type* StringValue_typeof()
{
    static uSStrong< ::g::Uno::UX::Value_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Value_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(StringValue);
    options.TypeSize = sizeof(::g::Uno::UX::Value_type);
    type = (::g::Uno::UX::Value_type*)uClassType::New("Uno.UX.StringValue", options);
    type->fp_build_ = StringValue_build;
    type->fp_Add = (void(*)(::g::Uno::UX::Value*, ::g::Uno::UX::Value*, ::g::Uno::UX::Value**))StringValue__Add_fn;
    type->fp_ToDouble = (void(*)(::g::Uno::UX::Value*, double*))StringValue__ToDouble_fn;
    type->fp_ToObject = (void(*)(::g::Uno::UX::Value*, uObject**))StringValue__ToObject_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))StringValue__ToString_fn;
    return type;
}

// public StringValue(string value) :1197
void StringValue__ctor_1_fn(StringValue* __this, uString* value)
{
    __this->ctor_1(value);
}

// public override sealed Uno.UX.Value Add(Uno.UX.Value v) :1200
void StringValue__Add_fn(StringValue* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval)
{
    uStackFrame __("Uno.UX.StringValue", "Add(Uno.UX.Value)");
    return *__retval = ::g::Uno::UX::Value::op_Implicit6(::g::Uno::String::op_Addition2(__this->_value, ::g::Uno::Object::ToString(uPtr(v)))), void();
}

// public StringValue New(string value) :1197
void StringValue__New1_fn(uString* value, StringValue** __retval)
{
    *__retval = StringValue::New1(value);
}

// public override sealed double ToDouble() :1198
void StringValue__ToDouble_fn(StringValue* __this, double* __retval)
{
    uStackFrame __("Uno.UX.StringValue", "ToDouble()");
    return *__retval = ::g::Uno::Double::Parse(__this->_value), void();
}

// public override sealed object ToObject() :1199
void StringValue__ToObject_fn(StringValue* __this, uObject** __retval)
{
    uStackFrame __("Uno.UX.StringValue", "ToObject()");
    return *__retval = __this->_value, void();
}

// public override sealed string ToString() :1201
void StringValue__ToString_fn(StringValue* __this, uString** __retval)
{
    uStackFrame __("Uno.UX.StringValue", "ToString()");
    return *__retval = __this->_value, void();
}

// public StringValue(string value) [instance] :1197
void StringValue::ctor_1(uString* value)
{
    uStackFrame __("Uno.UX.StringValue", ".ctor(string)");
    ctor_();
    _value = value;
}

// public StringValue New(string value) [static] :1197
StringValue* StringValue::New1(uString* value)
{
    StringValue* obj1 = (StringValue*)uNew(StringValue_typeof());
    obj1->ctor_1(value);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/$.uno
// ----------------------------------------------------------------

// public sealed class SubtractOperator :389
// {
static void SubtractOperator_build(uType* type)
{
    type->SetFields(6);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)SubtractOperator__New2_fn, 0, true, SubtractOperator_typeof(), 0));
}

::g::Uno::UX::BinaryOperator_type* SubtractOperator_typeof()
{
    static uSStrong< ::g::Uno::UX::BinaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::BinaryOperator_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(SubtractOperator);
    options.TypeSize = sizeof(::g::Uno::UX::BinaryOperator_type);
    type = (::g::Uno::UX::BinaryOperator_type*)uClassType::New("Uno.UX.SubtractOperator", options);
    type->fp_build_ = SubtractOperator_build;
    type->fp_ctor_ = (void*)SubtractOperator__New2_fn;
    type->fp_Compute = (void(*)(::g::Uno::UX::BinaryOperator*, ::g::Uno::UX::Value*, ::g::Uno::UX::Value*, ::g::Uno::UX::Value**))SubtractOperator__Compute_fn;
    return type;
}

// public generated SubtractOperator() :389
void SubtractOperator__ctor_2_fn(SubtractOperator* __this)
{
    __this->ctor_2();
}

// protected override sealed Uno.UX.Value Compute(Uno.UX.Value a, Uno.UX.Value b) :391
void SubtractOperator__Compute_fn(SubtractOperator* __this, ::g::Uno::UX::Value* a, ::g::Uno::UX::Value* b, ::g::Uno::UX::Value** __retval)
{
    uStackFrame __("Uno.UX.SubtractOperator", "Compute(Uno.UX.Value,Uno.UX.Value)");
    return *__retval = uPtr(a)->Subtract(b), void();
}

// public generated SubtractOperator New() :389
void SubtractOperator__New2_fn(SubtractOperator** __retval)
{
    *__retval = SubtractOperator::New2();
}

// public generated SubtractOperator() [instance] :389
void SubtractOperator::ctor_2()
{
    uStackFrame __("Uno.UX.SubtractOperator", ".ctor()");
    ctor_1();
}

// public generated SubtractOperator New() [static] :389
SubtractOperator* SubtractOperator::New2()
{
    SubtractOperator* obj1 = (SubtractOperator*)uNew(SubtractOperator_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/$.uno
// ----------------------------------------------------------------

// public abstract class Template :67
// {
static void Template_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::UX::Template, _isDefault), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::UX::Template, _key), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_IsDefault", NULL, (void*)Template__get_IsDefault_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Key", NULL, (void*)Template__get_Key_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("New", NULL, NULL, offsetof(Template_type, fp_New1), false, uObject_typeof(), 0));
}

Template_type* Template_typeof()
{
    static uSStrong<Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Template);
    options.TypeSize = sizeof(Template_type);
    type = (Template_type*)uClassType::New("Uno.UX.Template", options);
    type->fp_build_ = Template_build;
    return type;
}

// protected Template(string key, bool isDefault) :77
void Template__ctor__fn(Template* __this, uString* key, bool* isDefault)
{
    __this->ctor_(key, *isDefault);
}

// public bool get_IsDefault() :75
void Template__get_IsDefault_fn(Template* __this, bool* __retval)
{
    *__retval = __this->IsDefault();
}

// public string get_Key() :71
void Template__get_Key_fn(Template* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// protected Template(string key, bool isDefault) [instance] :77
void Template::ctor_(uString* key, bool isDefault)
{
    uStackFrame __("Uno.UX.Template", ".ctor(string,bool)");
    _key = key;
    _isDefault = isDefault;
}

// public bool get_IsDefault() [instance] :75
bool Template::IsDefault()
{
    uStackFrame __("Uno.UX.Template", "get_IsDefault()");
    return _isDefault;
}

// public string get_Key() [instance] :71
uString* Template::Key()
{
    uStackFrame __("Uno.UX.Template", "get_Key()");
    return _key;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/$.uno
// ----------------------------------------------------------------

// public enum Unit :738
uEnumType* Unit_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.UX.Unit", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Auto", 0LL,
        "Unspecified", 1LL,
        "Points", 2LL,
        "Pixels", 3LL,
        "Percent", 4LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/$.uno
// ----------------------------------------------------------------

// public sealed class UXAutoNameTableAttribute :453
// {
static void UXAutoNameTableAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXAutoNameTableAttribute__New1_fn, 0, true, UXAutoNameTableAttribute_typeof(), 0));
}

uType* UXAutoNameTableAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(UXAutoNameTableAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXAutoNameTableAttribute", options);
    type->fp_build_ = UXAutoNameTableAttribute_build;
    type->fp_ctor_ = (void*)UXAutoNameTableAttribute__New1_fn;
    return type;
}

// public generated UXAutoNameTableAttribute() :453
void UXAutoNameTableAttribute__ctor_1_fn(UXAutoNameTableAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXAutoNameTableAttribute New() :453
void UXAutoNameTableAttribute__New1_fn(UXAutoNameTableAttribute** __retval)
{
    *__retval = UXAutoNameTableAttribute::New1();
}

// public generated UXAutoNameTableAttribute() [instance] :453
void UXAutoNameTableAttribute::ctor_1()
{
    uStackFrame __("Uno.UX.UXAutoNameTableAttribute", ".ctor()");
    ctor_();
}

// public generated UXAutoNameTableAttribute New() [static] :453
UXAutoNameTableAttribute* UXAutoNameTableAttribute::New1()
{
    UXAutoNameTableAttribute* obj1 = (UXAutoNameTableAttribute*)uNew(UXAutoNameTableAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/attributes/$.uno
// ---------------------------------------------------------------------------

// public sealed class UXComponentsAttribute :123
// {
static void UXComponentsAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXComponentsAttribute__New1_fn, 0, true, UXComponentsAttribute_typeof(), 0));
}

uType* UXComponentsAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(UXComponentsAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXComponentsAttribute", options);
    type->fp_build_ = UXComponentsAttribute_build;
    type->fp_ctor_ = (void*)UXComponentsAttribute__New1_fn;
    return type;
}

// public generated UXComponentsAttribute() :123
void UXComponentsAttribute__ctor_1_fn(UXComponentsAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXComponentsAttribute New() :123
void UXComponentsAttribute__New1_fn(UXComponentsAttribute** __retval)
{
    *__retval = UXComponentsAttribute::New1();
}

// public generated UXComponentsAttribute() [instance] :123
void UXComponentsAttribute::ctor_1()
{
    uStackFrame __("Uno.UX.UXComponentsAttribute", ".ctor()");
    ctor_();
}

// public generated UXComponentsAttribute New() [static] :123
UXComponentsAttribute* UXComponentsAttribute::New1()
{
    UXComponentsAttribute* obj1 = (UXComponentsAttribute*)uNew(UXComponentsAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/attributes/$.uno
// ---------------------------------------------------------------------------

// public sealed class UXConstructorAttribute :135
// {
static void UXConstructorAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXConstructorAttribute__New1_fn, 0, true, UXConstructorAttribute_typeof(), 0));
}

uType* UXConstructorAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(UXConstructorAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXConstructorAttribute", options);
    type->fp_build_ = UXConstructorAttribute_build;
    type->fp_ctor_ = (void*)UXConstructorAttribute__New1_fn;
    return type;
}

// public generated UXConstructorAttribute() :135
void UXConstructorAttribute__ctor_1_fn(UXConstructorAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXConstructorAttribute New() :135
void UXConstructorAttribute__New1_fn(UXConstructorAttribute** __retval)
{
    *__retval = UXConstructorAttribute::New1();
}

// public generated UXConstructorAttribute() [instance] :135
void UXConstructorAttribute::ctor_1()
{
    uStackFrame __("Uno.UX.UXConstructorAttribute", ".ctor()");
    ctor_();
}

// public generated UXConstructorAttribute New() [static] :135
UXConstructorAttribute* UXConstructorAttribute::New1()
{
    UXConstructorAttribute* obj1 = (UXConstructorAttribute*)uNew(UXConstructorAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/attributes/$.uno
// ---------------------------------------------------------------------------

// public sealed class UXContentAttribute :146
// {
static void UXContentAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXContentAttribute__New1_fn, 0, true, UXContentAttribute_typeof(), 0));
}

uType* UXContentAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(UXContentAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXContentAttribute", options);
    type->fp_build_ = UXContentAttribute_build;
    type->fp_ctor_ = (void*)UXContentAttribute__New1_fn;
    return type;
}

// public generated UXContentAttribute() :146
void UXContentAttribute__ctor_1_fn(UXContentAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXContentAttribute New() :146
void UXContentAttribute__New1_fn(UXContentAttribute** __retval)
{
    *__retval = UXContentAttribute::New1();
}

// public generated UXContentAttribute() [instance] :146
void UXContentAttribute::ctor_1()
{
    uStackFrame __("Uno.UX.UXContentAttribute", ".ctor()");
    ctor_();
}

// public generated UXContentAttribute New() [static] :146
UXContentAttribute* UXContentAttribute::New1()
{
    UXContentAttribute* obj1 = (UXContentAttribute*)uNew(UXContentAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/attributes/$.uno
// ---------------------------------------------------------------------------

// public sealed class UXFileNameAttribute :235
// {
static void UXFileNameAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXFileNameAttribute__New1_fn, 0, true, UXFileNameAttribute_typeof(), 0));
}

uType* UXFileNameAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(UXFileNameAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXFileNameAttribute", options);
    type->fp_build_ = UXFileNameAttribute_build;
    type->fp_ctor_ = (void*)UXFileNameAttribute__New1_fn;
    return type;
}

// public generated UXFileNameAttribute() :235
void UXFileNameAttribute__ctor_1_fn(UXFileNameAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXFileNameAttribute New() :235
void UXFileNameAttribute__New1_fn(UXFileNameAttribute** __retval)
{
    *__retval = UXFileNameAttribute::New1();
}

// public generated UXFileNameAttribute() [instance] :235
void UXFileNameAttribute::ctor_1()
{
    uStackFrame __("Uno.UX.UXFileNameAttribute", ".ctor()");
    ctor_();
}

// public generated UXFileNameAttribute New() [static] :235
UXFileNameAttribute* UXFileNameAttribute::New1()
{
    UXFileNameAttribute* obj1 = (UXFileNameAttribute*)uNew(UXFileNameAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/attributes/$.uno
// ---------------------------------------------------------------------------

// public sealed class UXFreestandingAttribute :173
// {
static void UXFreestandingAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXFreestandingAttribute__New1_fn, 0, true, UXFreestandingAttribute_typeof(), 0));
}

uType* UXFreestandingAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(UXFreestandingAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXFreestandingAttribute", options);
    type->fp_build_ = UXFreestandingAttribute_build;
    type->fp_ctor_ = (void*)UXFreestandingAttribute__New1_fn;
    return type;
}

// public generated UXFreestandingAttribute() :173
void UXFreestandingAttribute__ctor_1_fn(UXFreestandingAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXFreestandingAttribute New() :173
void UXFreestandingAttribute__New1_fn(UXFreestandingAttribute** __retval)
{
    *__retval = UXFreestandingAttribute::New1();
}

// public generated UXFreestandingAttribute() [instance] :173
void UXFreestandingAttribute::ctor_1()
{
    uStackFrame __("Uno.UX.UXFreestandingAttribute", ".ctor()");
    ctor_();
}

// public generated UXFreestandingAttribute New() [static] :173
UXFreestandingAttribute* UXFreestandingAttribute::New1()
{
    UXFreestandingAttribute* obj1 = (UXFreestandingAttribute*)uNew(UXFreestandingAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/attributes/$.uno
// ---------------------------------------------------------------------------

// public sealed class UXGlobalModuleAttribute :195
// {
static void UXGlobalModuleAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXGlobalModuleAttribute__New1_fn, 0, true, UXGlobalModuleAttribute_typeof(), 0));
}

uType* UXGlobalModuleAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(UXGlobalModuleAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXGlobalModuleAttribute", options);
    type->fp_build_ = UXGlobalModuleAttribute_build;
    type->fp_ctor_ = (void*)UXGlobalModuleAttribute__New1_fn;
    return type;
}

// public UXGlobalModuleAttribute() :197
void UXGlobalModuleAttribute__ctor_1_fn(UXGlobalModuleAttribute* __this)
{
    __this->ctor_1();
}

// public UXGlobalModuleAttribute New() :197
void UXGlobalModuleAttribute__New1_fn(UXGlobalModuleAttribute** __retval)
{
    *__retval = UXGlobalModuleAttribute::New1();
}

// public UXGlobalModuleAttribute() [instance] :197
void UXGlobalModuleAttribute::ctor_1()
{
    uStackFrame __("Uno.UX.UXGlobalModuleAttribute", ".ctor()");
    ctor_();
}

// public UXGlobalModuleAttribute New() [static] :197
UXGlobalModuleAttribute* UXGlobalModuleAttribute::New1()
{
    UXGlobalModuleAttribute* obj1 = (UXGlobalModuleAttribute*)uNew(UXGlobalModuleAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/attributes/$.uno
// ---------------------------------------------------------------------------

// public sealed class UXGlobalResourceAttribute :183
// {
static void UXGlobalResourceAttribute_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::UX::UXGlobalResourceAttribute, Alias), 0);
    type->Reflection.SetFields(1,
        new uField("Alias", 0));
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)UXGlobalResourceAttribute__New1_fn, 0, true, UXGlobalResourceAttribute_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)UXGlobalResourceAttribute__New2_fn, 0, true, UXGlobalResourceAttribute_typeof(), 1, ::g::Uno::String_typeof()));
}

uType* UXGlobalResourceAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(UXGlobalResourceAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXGlobalResourceAttribute", options);
    type->fp_build_ = UXGlobalResourceAttribute_build;
    type->fp_ctor_ = (void*)UXGlobalResourceAttribute__New1_fn;
    return type;
}

// public UXGlobalResourceAttribute() :192
void UXGlobalResourceAttribute__ctor_1_fn(UXGlobalResourceAttribute* __this)
{
    __this->ctor_1();
}

// public UXGlobalResourceAttribute(string alias) :187
void UXGlobalResourceAttribute__ctor_2_fn(UXGlobalResourceAttribute* __this, uString* alias)
{
    __this->ctor_2(alias);
}

// public UXGlobalResourceAttribute New() :192
void UXGlobalResourceAttribute__New1_fn(UXGlobalResourceAttribute** __retval)
{
    *__retval = UXGlobalResourceAttribute::New1();
}

// public UXGlobalResourceAttribute New(string alias) :187
void UXGlobalResourceAttribute__New2_fn(uString* alias, UXGlobalResourceAttribute** __retval)
{
    *__retval = UXGlobalResourceAttribute::New2(alias);
}

// public UXGlobalResourceAttribute() [instance] :192
void UXGlobalResourceAttribute::ctor_1()
{
    uStackFrame __("Uno.UX.UXGlobalResourceAttribute", ".ctor()");
    ctor_();
}

// public UXGlobalResourceAttribute(string alias) [instance] :187
void UXGlobalResourceAttribute::ctor_2(uString* alias)
{
    uStackFrame __("Uno.UX.UXGlobalResourceAttribute", ".ctor(string)");
    ctor_();
    Alias = alias;
}

// public UXGlobalResourceAttribute New() [static] :192
UXGlobalResourceAttribute* UXGlobalResourceAttribute::New1()
{
    UXGlobalResourceAttribute* obj2 = (UXGlobalResourceAttribute*)uNew(UXGlobalResourceAttribute_typeof());
    obj2->ctor_1();
    return obj2;
}

// public UXGlobalResourceAttribute New(string alias) [static] :187
UXGlobalResourceAttribute* UXGlobalResourceAttribute::New2(uString* alias)
{
    UXGlobalResourceAttribute* obj1 = (UXGlobalResourceAttribute*)uNew(UXGlobalResourceAttribute_typeof());
    obj1->ctor_2(alias);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/attributes/$.uno
// ---------------------------------------------------------------------------

// public sealed class UXLineNumberAttribute :221
// {
static void UXLineNumberAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXLineNumberAttribute__New1_fn, 0, true, UXLineNumberAttribute_typeof(), 0));
}

uType* UXLineNumberAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(UXLineNumberAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXLineNumberAttribute", options);
    type->fp_build_ = UXLineNumberAttribute_build;
    type->fp_ctor_ = (void*)UXLineNumberAttribute__New1_fn;
    return type;
}

// public generated UXLineNumberAttribute() :221
void UXLineNumberAttribute__ctor_1_fn(UXLineNumberAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXLineNumberAttribute New() :221
void UXLineNumberAttribute__New1_fn(UXLineNumberAttribute** __retval)
{
    *__retval = UXLineNumberAttribute::New1();
}

// public generated UXLineNumberAttribute() [instance] :221
void UXLineNumberAttribute::ctor_1()
{
    uStackFrame __("Uno.UX.UXLineNumberAttribute", ".ctor()");
    ctor_();
}

// public generated UXLineNumberAttribute New() [static] :221
UXLineNumberAttribute* UXLineNumberAttribute::New1()
{
    UXLineNumberAttribute* obj1 = (UXLineNumberAttribute*)uNew(UXLineNumberAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/attributes/$.uno
// ---------------------------------------------------------------------------

// public sealed class UXNameAttribute :230
// {
static void UXNameAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXNameAttribute__New1_fn, 0, true, UXNameAttribute_typeof(), 0));
}

uType* UXNameAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(UXNameAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXNameAttribute", options);
    type->fp_build_ = UXNameAttribute_build;
    type->fp_ctor_ = (void*)UXNameAttribute__New1_fn;
    return type;
}

// public generated UXNameAttribute() :230
void UXNameAttribute__ctor_1_fn(UXNameAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXNameAttribute New() :230
void UXNameAttribute__New1_fn(UXNameAttribute** __retval)
{
    *__retval = UXNameAttribute::New1();
}

// public generated UXNameAttribute() [instance] :230
void UXNameAttribute::ctor_1()
{
    uStackFrame __("Uno.UX.UXNameAttribute", ".ctor()");
    ctor_();
}

// public generated UXNameAttribute New() [static] :230
UXNameAttribute* UXNameAttribute::New1()
{
    UXNameAttribute* obj1 = (UXNameAttribute*)uNew(UXNameAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/attributes/$.uno
// ---------------------------------------------------------------------------

// public sealed class UXPrimaryAttribute :283
// {
static void UXPrimaryAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXPrimaryAttribute__New1_fn, 0, true, UXPrimaryAttribute_typeof(), 0));
}

uType* UXPrimaryAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(UXPrimaryAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXPrimaryAttribute", options);
    type->fp_build_ = UXPrimaryAttribute_build;
    type->fp_ctor_ = (void*)UXPrimaryAttribute__New1_fn;
    return type;
}

// public generated UXPrimaryAttribute() :283
void UXPrimaryAttribute__ctor_1_fn(UXPrimaryAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXPrimaryAttribute New() :283
void UXPrimaryAttribute__New1_fn(UXPrimaryAttribute** __retval)
{
    *__retval = UXPrimaryAttribute::New1();
}

// public generated UXPrimaryAttribute() [instance] :283
void UXPrimaryAttribute::ctor_1()
{
    uStackFrame __("Uno.UX.UXPrimaryAttribute", ".ctor()");
    ctor_();
}

// public generated UXPrimaryAttribute New() [static] :283
UXPrimaryAttribute* UXPrimaryAttribute::New1()
{
    UXPrimaryAttribute* obj1 = (UXPrimaryAttribute*)uNew(UXPrimaryAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/attributes/$.uno
// ---------------------------------------------------------------------------

// public sealed class UXSourceFileNameAttribute :291
// {
static void UXSourceFileNameAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXSourceFileNameAttribute__New1_fn, 0, true, UXSourceFileNameAttribute_typeof(), 0));
}

uType* UXSourceFileNameAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(UXSourceFileNameAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXSourceFileNameAttribute", options);
    type->fp_build_ = UXSourceFileNameAttribute_build;
    type->fp_ctor_ = (void*)UXSourceFileNameAttribute__New1_fn;
    return type;
}

// public generated UXSourceFileNameAttribute() :291
void UXSourceFileNameAttribute__ctor_1_fn(UXSourceFileNameAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXSourceFileNameAttribute New() :291
void UXSourceFileNameAttribute__New1_fn(UXSourceFileNameAttribute** __retval)
{
    *__retval = UXSourceFileNameAttribute::New1();
}

// public generated UXSourceFileNameAttribute() [instance] :291
void UXSourceFileNameAttribute::ctor_1()
{
    uStackFrame __("Uno.UX.UXSourceFileNameAttribute", ".ctor()");
    ctor_();
}

// public generated UXSourceFileNameAttribute New() [static] :291
UXSourceFileNameAttribute* UXSourceFileNameAttribute::New1()
{
    UXSourceFileNameAttribute* obj1 = (UXSourceFileNameAttribute*)uNew(UXSourceFileNameAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/attributes/$.uno
// ---------------------------------------------------------------------------

// public sealed class UXValueBindingArgumentAttribute :319
// {
static void UXValueBindingArgumentAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXValueBindingArgumentAttribute__New1_fn, 0, true, UXValueBindingArgumentAttribute_typeof(), 0));
}

uType* UXValueBindingArgumentAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(UXValueBindingArgumentAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXValueBindingArgumentAttribute", options);
    type->fp_build_ = UXValueBindingArgumentAttribute_build;
    type->fp_ctor_ = (void*)UXValueBindingArgumentAttribute__New1_fn;
    return type;
}

// public generated UXValueBindingArgumentAttribute() :319
void UXValueBindingArgumentAttribute__ctor_1_fn(UXValueBindingArgumentAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXValueBindingArgumentAttribute New() :319
void UXValueBindingArgumentAttribute__New1_fn(UXValueBindingArgumentAttribute** __retval)
{
    *__retval = UXValueBindingArgumentAttribute::New1();
}

// public generated UXValueBindingArgumentAttribute() [instance] :319
void UXValueBindingArgumentAttribute::ctor_1()
{
    uStackFrame __("Uno.UX.UXValueBindingArgumentAttribute", ".ctor()");
    ctor_();
}

// public generated UXValueBindingArgumentAttribute New() [static] :319
UXValueBindingArgumentAttribute* UXValueBindingArgumentAttribute::New1()
{
    UXValueBindingArgumentAttribute* obj1 = (UXValueBindingArgumentAttribute*)uNew(UXValueBindingArgumentAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/attributes/$.uno
// ---------------------------------------------------------------------------

// public sealed class UXValueBindingTargetAttribute :329
// {
static void UXValueBindingTargetAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXValueBindingTargetAttribute__New1_fn, 0, true, UXValueBindingTargetAttribute_typeof(), 0));
}

uType* UXValueBindingTargetAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(UXValueBindingTargetAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXValueBindingTargetAttribute", options);
    type->fp_build_ = UXValueBindingTargetAttribute_build;
    type->fp_ctor_ = (void*)UXValueBindingTargetAttribute__New1_fn;
    return type;
}

// public generated UXValueBindingTargetAttribute() :329
void UXValueBindingTargetAttribute__ctor_1_fn(UXValueBindingTargetAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXValueBindingTargetAttribute New() :329
void UXValueBindingTargetAttribute__New1_fn(UXValueBindingTargetAttribute** __retval)
{
    *__retval = UXValueBindingTargetAttribute::New1();
}

// public generated UXValueBindingTargetAttribute() [instance] :329
void UXValueBindingTargetAttribute::ctor_1()
{
    uStackFrame __("Uno.UX.UXValueBindingTargetAttribute", ".ctor()");
    ctor_();
}

// public generated UXValueBindingTargetAttribute New() [static] :329
UXValueBindingTargetAttribute* UXValueBindingTargetAttribute::New1()
{
    UXValueBindingTargetAttribute* obj1 = (UXValueBindingTargetAttribute*)uNew(UXValueBindingTargetAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/$.uno
// ----------------------------------------------------------------

// public abstract class Value :1029
// {
static void Value_build(uType* type)
{
    ::STRINGS[10] = uString::Const("Add");
    ::STRINGS[11] = uString::Const("Divide");
    ::STRINGS[12] = uString::Const("Multiply");
    ::STRINGS[13] = uString::Const(" does not support operator ");
    ::STRINGS[14] = uString::Const("Subtract");
    ::TYPES[17] = ::g::Uno::String_typeof();
    ::TYPES[26] = ::g::Uno::UX::IValueConvertible_typeof();
    ::TYPES[20] = ::g::Uno::Float_typeof();
    ::TYPES[8] = ::g::Uno::Double_typeof();
    ::TYPES[21] = ::g::Uno::Int_typeof();
    ::TYPES[22] = ::g::Uno::UX::Size_typeof();
    ::TYPES[23] = ::g::Uno::UX::Size2_typeof();
    ::TYPES[2] = ::g::Uno::Float2_typeof();
    ::TYPES[3] = ::g::Uno::Float3_typeof();
    ::TYPES[4] = ::g::Uno::Float4_typeof();
    ::TYPES[9] = ::g::Uno::Type_typeof();
    type->Reflection.SetFunctions(15,
        new uFunction("Add", NULL, NULL, offsetof(Value_type, fp_Add), false, Value_typeof(), 1, Value_typeof()),
        new uFunction("Cast", NULL, (void*)Value__Cast_fn, 0, true, uObject_typeof(), 2, ::g::Uno::Type_typeof(), uObject_typeof()),
        new uFunction("Divide", NULL, NULL, offsetof(Value_type, fp_Divide), false, Value_typeof(), 1, Value_typeof()),
        new uFunction("Multiply", NULL, NULL, offsetof(Value_type, fp_Multiply), false, Value_typeof(), 1, Value_typeof()),
        new uFunction("Subtract", NULL, NULL, offsetof(Value_type, fp_Subtract), false, Value_typeof(), 1, Value_typeof()),
        new uFunction("ToAbstract", NULL, (void*)Value__ToAbstract_fn, 0, true, uObject_typeof(), 1, uObject_typeof()),
        new uFunction("ToDouble", NULL, NULL, offsetof(Value_type, fp_ToDouble), false, ::g::Uno::Double_typeof(), 0),
        new uFunction("ToFloat", NULL, NULL, offsetof(Value_type, fp_ToFloat), false, ::g::Uno::Float_typeof(), 0),
        new uFunction("ToFloat2", NULL, NULL, offsetof(Value_type, fp_ToFloat2), false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("ToFloat3", NULL, NULL, offsetof(Value_type, fp_ToFloat3), false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("ToFloat4", NULL, NULL, offsetof(Value_type, fp_ToFloat4), false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("ToInt", NULL, (void*)Value__ToInt_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("ToObject", NULL, NULL, offsetof(Value_type, fp_ToObject), false, uObject_typeof(), 0),
        new uFunction("ToSize", NULL, NULL, offsetof(Value_type, fp_ToSize), false, ::g::Uno::UX::Size_typeof(), 0),
        new uFunction("ToSize2", NULL, NULL, offsetof(Value_type, fp_ToSize2), false, ::g::Uno::UX::Size2_typeof(), 0));
}

Value_type* Value_typeof()
{
    static uSStrong<Value_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Value);
    options.TypeSize = sizeof(Value_type);
    type = (Value_type*)uClassType::New("Uno.UX.Value", options);
    type->fp_build_ = Value_build;
    type->fp_Add = Value__Add_fn;
    type->fp_Divide = Value__Divide_fn;
    type->fp_Multiply = Value__Multiply_fn;
    type->fp_Subtract = Value__Subtract_fn;
    type->fp_ToFloat = Value__ToFloat_fn;
    type->fp_ToFloat2 = Value__ToFloat2_fn;
    type->fp_ToFloat3 = Value__ToFloat3_fn;
    type->fp_ToFloat4 = Value__ToFloat4_fn;
    type->fp_ToSize = Value__ToSize_fn;
    type->fp_ToSize2 = Value__ToSize2_fn;
    return type;
}

// protected generated Value() :1029
void Value__ctor__fn(Value* __this)
{
    __this->ctor_();
}

// public virtual Uno.UX.Value Add(Uno.UX.Value v) :1099
void Value__Add_fn(Value* __this, Value* v, Value** __retval)
{
    uStackFrame __("Uno.UX.Value", "Add(Uno.UX.Value)");
    U_THROW(__this->NotSupported(::STRINGS[10/*"Add"*/]));
}

// public static object Cast(Uno.Type targetType, object value) :1047
void Value__Cast_fn(uType* targetType, uObject* value, uObject** __retval)
{
    *__retval = Value::Cast(targetType, value);
}

// public virtual Uno.UX.Value Divide(Uno.UX.Value v) :1114
void Value__Divide_fn(Value* __this, Value* v, Value** __retval)
{
    uStackFrame __("Uno.UX.Value", "Divide(Uno.UX.Value)");
    U_THROW(__this->NotSupported(::STRINGS[11/*"Divide"*/]));
}

// public virtual Uno.UX.Value Multiply(Uno.UX.Value v) :1109
void Value__Multiply_fn(Value* __this, Value* v, Value** __retval)
{
    uStackFrame __("Uno.UX.Value", "Multiply(Uno.UX.Value)");
    U_THROW(__this->NotSupported(::STRINGS[12/*"Multiply"*/]));
}

// private Uno.Exception NotSupported([string op]) :1053
void Value__NotSupported_fn(Value* __this, uString* op, ::g::Uno::Exception** __retval)
{
    *__retval = __this->NotSupported(op);
}

// public static implicit operator Uno.UX.Value(double f) :1120
void Value__op_Implicit_fn(double* f, Value** __retval)
{
    *__retval = Value::op_Implicit(*f);
}

// public static implicit operator Uno.UX.Value(float2 f) :1126
void Value__op_Implicit2_fn(::g::Uno::Float2* f, Value** __retval)
{
    *__retval = Value::op_Implicit2(*f);
}

// public static implicit operator Uno.UX.Value(float3 f) :1127
void Value__op_Implicit3_fn(::g::Uno::Float3* f, Value** __retval)
{
    *__retval = Value::op_Implicit3(*f);
}

// public static implicit operator Uno.UX.Value(float4 f) :1128
void Value__op_Implicit4_fn(::g::Uno::Float4* f, Value** __retval)
{
    *__retval = Value::op_Implicit4(*f);
}

// public static implicit operator Uno.UX.Value(string f) :1123
void Value__op_Implicit6_fn(uString* f, Value** __retval)
{
    *__retval = Value::op_Implicit6(f);
}

// public static implicit operator Uno.UX.Value(Uno.UX.Size f) :1124
void Value__op_Implicit8_fn(::g::Uno::UX::Size* f, Value** __retval)
{
    *__retval = Value::op_Implicit8(*f);
}

// public static implicit operator Uno.UX.Value(Uno.UX.Size2 f) :1125
void Value__op_Implicit9_fn(::g::Uno::UX::Size2* f, Value** __retval)
{
    *__retval = Value::op_Implicit9(*f);
}

// public virtual Uno.UX.Value Subtract(Uno.UX.Value v) :1104
void Value__Subtract_fn(Value* __this, Value* v, Value** __retval)
{
    uStackFrame __("Uno.UX.Value", "Subtract(Uno.UX.Value)");
    U_THROW(__this->NotSupported(::STRINGS[14/*"Subtract"*/]));
}

// public static object ToAbstract(object value) :1130
void Value__ToAbstract_fn(uObject* value, uObject** __retval)
{
    *__retval = Value::ToAbstract(value);
}

// public virtual float ToFloat() :1061
void Value__ToFloat_fn(Value* __this, float* __retval)
{
    uStackFrame __("Uno.UX.Value", "ToFloat()");
    return *__retval = (float)__this->ToDouble(), void();
}

// public virtual float2 ToFloat2() :1076
void Value__ToFloat2_fn(Value* __this, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Uno.UX.Value", "ToFloat2()");
    float f = __this->ToFloat();
    return *__retval = ::g::Uno::Float2__New2(f, f), void();
}

// public virtual float3 ToFloat3() :1087
void Value__ToFloat3_fn(Value* __this, ::g::Uno::Float3* __retval)
{
    uStackFrame __("Uno.UX.Value", "ToFloat3()");
    float f = __this->ToFloat();
    return *__retval = ::g::Uno::Float3__New2(f, f, f), void();
}

// public virtual float4 ToFloat4() :1093
void Value__ToFloat4_fn(Value* __this, ::g::Uno::Float4* __retval)
{
    uStackFrame __("Uno.UX.Value", "ToFloat4()");
    ::g::Uno::Float2 f = __this->ToFloat2();
    return *__retval = ::g::Uno::Float4__New2(f.X, f.Y, f.X, f.Y), void();
}

// public int ToInt() :1066
void Value__ToInt_fn(Value* __this, int* __retval)
{
    *__retval = __this->ToInt();
}

// public virtual Uno.UX.Size ToSize() :1071
void Value__ToSize_fn(Value* __this, ::g::Uno::UX::Size* __retval)
{
    uStackFrame __("Uno.UX.Value", "ToSize()");
    return *__retval = ::g::Uno::UX::Size__op_Implicit(__this->ToFloat()), void();
}

// public virtual Uno.UX.Size2 ToSize2() :1082
void Value__ToSize2_fn(Value* __this, ::g::Uno::UX::Size2* __retval)
{
    uStackFrame __("Uno.UX.Value", "ToSize2()");
    return *__retval = ::g::Uno::UX::Size2__op_Implicit1(__this->ToFloat2()), void();
}

// private static object ToSpecific(Uno.Type t, object obj) :1159
void Value__ToSpecific_fn(uType* t, uObject* obj, uObject** __retval)
{
    *__retval = Value::ToSpecific(t, obj);
}

// protected generated Value() [instance] :1029
void Value::ctor_()
{
}

// private Uno.Exception NotSupported([string op]) [instance] :1053
::g::Uno::Exception* Value::NotSupported(uString* op)
{
    uStackFrame __("Uno.UX.Value", "NotSupported([string])");
    return ::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Type::FullName(uPtr(::g::Uno::Object::GetType(this))), ::STRINGS[13/*" does not s...*/]), op));
}

// public int ToInt() [instance] :1066
int Value::ToInt()
{
    uStackFrame __("Uno.UX.Value", "ToInt()");
    return (int)ToDouble();
}

// public static object Cast(Uno.Type targetType, object value) [static] :1047
uObject* Value::Cast(uType* targetType, uObject* value)
{
    uStackFrame __("Uno.UX.Value", "Cast(Uno.Type,object)");
    uObject* abs = Value::ToAbstract(value);
    return Value::ToSpecific(targetType, abs);
}

// public static implicit operator Uno.UX.Value(double f) [static] :1120
Value* Value::op_Implicit(double f)
{
    uStackFrame __("Uno.UX.Value", "op_Implicit(double)~Uno.UX.Value");
    return ::g::Uno::UX::NumberValue::New1(f);
}

// public static implicit operator Uno.UX.Value(float2 f) [static] :1126
Value* Value::op_Implicit2(::g::Uno::Float2 f)
{
    uStackFrame __("Uno.UX.Value", "op_Implicit(float2)~Uno.UX.Value");
    return ::g::Uno::UX::Float2Value::New1(f);
}

// public static implicit operator Uno.UX.Value(float3 f) [static] :1127
Value* Value::op_Implicit3(::g::Uno::Float3 f)
{
    uStackFrame __("Uno.UX.Value", "op_Implicit(float3)~Uno.UX.Value");
    return ::g::Uno::UX::Float3Value::New1(f);
}

// public static implicit operator Uno.UX.Value(float4 f) [static] :1128
Value* Value::op_Implicit4(::g::Uno::Float4 f)
{
    uStackFrame __("Uno.UX.Value", "op_Implicit(float4)~Uno.UX.Value");
    return ::g::Uno::UX::Float4Value::New1(f);
}

// public static implicit operator Uno.UX.Value(string f) [static] :1123
Value* Value::op_Implicit6(uString* f)
{
    uStackFrame __("Uno.UX.Value", "op_Implicit(string)~Uno.UX.Value");
    return ::g::Uno::UX::StringValue::New1(f);
}

// public static implicit operator Uno.UX.Value(Uno.UX.Size f) [static] :1124
Value* Value::op_Implicit8(::g::Uno::UX::Size f)
{
    uStackFrame __("Uno.UX.Value", "op_Implicit(Uno.UX.Size)~Uno.UX.Value");
    return ::g::Uno::UX::SizeValue::New1(f);
}

// public static implicit operator Uno.UX.Value(Uno.UX.Size2 f) [static] :1125
Value* Value::op_Implicit9(::g::Uno::UX::Size2 f)
{
    uStackFrame __("Uno.UX.Value", "op_Implicit(Uno.UX.Size2)~Uno.UX.Value");
    return ::g::Uno::UX::Size2Value::New1(f);
}

// public static object ToAbstract(object value) [static] :1130
uObject* Value::ToAbstract(uObject* value)
{
    uStackFrame __("Uno.UX.Value", "ToAbstract(object)");

    if (value == NULL)
        return NULL;

    uType* t = ::g::Uno::Object::GetType(uPtr(value));

    if (::g::Uno::Type::IsEnum(uPtr(t)))
        return value;

    if (uIs(value, ::TYPES[17/*string*/]))
        return ::g::Uno::UX::StringValue::New1(uCast<uString*>(value, ::TYPES[17/*string*/]));

    if (uIs(value, ::TYPES[26/*Uno.UX.IValueConvertible*/]))
        return ::g::Uno::UX::IValueConvertible::ToValue(uInterface(uPtr((uObject*)value), ::TYPES[26/*Uno.UX.IValueConvertible*/]));

    if (uIs(value, Value_typeof()))
        return value;

    if (uIs(value, ::TYPES[20/*float*/]))
        return ::g::Uno::UX::NumberValue::New1((double)uUnbox<float>(::TYPES[20/*float*/], value));

    if (uIs(value, ::TYPES[8/*double*/]))
        return ::g::Uno::UX::NumberValue::New1(uUnbox<double>(::TYPES[8/*double*/], value));

    if (uIs(value, ::TYPES[21/*int*/]))
        return ::g::Uno::UX::NumberValue::New1((double)uUnbox<int>(::TYPES[21/*int*/], value));

    if (uIs(value, ::TYPES[22/*Uno.UX.Size*/]))
        return ::g::Uno::UX::SizeValue::New1(uUnbox< ::g::Uno::UX::Size>(::TYPES[22/*Uno.UX.Size*/], value));

    if (uIs(value, ::TYPES[23/*Uno.UX.Size2*/]))
        return ::g::Uno::UX::Size2Value::New1(uUnbox< ::g::Uno::UX::Size2>(::TYPES[23/*Uno.UX.Size2*/], value));

    if (uIs(value, ::TYPES[2/*float2*/]))
        return ::g::Uno::UX::Float2Value::New1(uUnbox< ::g::Uno::Float2>(::TYPES[2/*float2*/], value));

    if (uIs(value, ::TYPES[3/*float3*/]))
        return ::g::Uno::UX::Float3Value::New1(uUnbox< ::g::Uno::Float3>(::TYPES[3/*float3*/], value));

    if (uIs(value, ::TYPES[4/*float4*/]))
        return ::g::Uno::UX::Float4Value::New1(uUnbox< ::g::Uno::Float4>(::TYPES[4/*float4*/], value));

    return value;
}

// private static object ToSpecific(Uno.Type t, object obj) [static] :1159
uObject* Value::ToSpecific(uType* t, uObject* obj)
{
    uStackFrame __("Uno.UX.Value", "ToSpecific(Uno.Type,object)");
    Value* v = uAs<Value*>(obj, Value_typeof());

    if (v != NULL)
    {
        if (::g::Uno::Type::op_Equality(t, ::TYPES[17/*string*/]))
            return ::g::Uno::Object::ToString(uPtr(v));

        if (::g::Uno::Type::op_Equality(t, uObject_typeof()))
            return uPtr(v)->ToObject();

        if (::g::Uno::Type::op_Equality(t, Value_typeof()))
            return v;

        if (::g::Uno::Type::op_Equality(t, ::TYPES[20/*float*/]))
            return uBox(::TYPES[20/*float*/], uPtr(v)->ToFloat());

        if (::g::Uno::Type::op_Equality(t, ::TYPES[8/*double*/]))
            return uBox(::TYPES[8/*double*/], uPtr(v)->ToDouble());

        if (::g::Uno::Type::op_Equality(t, ::TYPES[21/*int*/]))
            return uBox<int>(::TYPES[21/*int*/], uPtr(v)->ToInt());

        if (::g::Uno::Type::op_Equality(t, ::TYPES[22/*Uno.UX.Size*/]))
            return uBox(::TYPES[22/*Uno.UX.Size*/], uPtr(v)->ToSize());

        if (::g::Uno::Type::op_Equality(t, ::TYPES[23/*Uno.UX.Size2*/]))
            return uBox(::TYPES[23/*Uno.UX.Size2*/], uPtr(v)->ToSize2());

        if (::g::Uno::Type::op_Equality(t, ::TYPES[2/*float2*/]))
            return uBox(::TYPES[2/*float2*/], uPtr(v)->ToFloat2());

        if (::g::Uno::Type::op_Equality(t, ::TYPES[3/*float3*/]))
            return uBox(::TYPES[3/*float3*/], uPtr(v)->ToFloat3());

        if (::g::Uno::Type::op_Equality(t, ::TYPES[4/*float4*/]))
            return uBox(::TYPES[4/*float4*/], uPtr(v)->ToFloat4());
    }

    return obj;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/$.uno
// ----------------------------------------------------------------

// public class ValueChangedArgs<T> :460
// {
static void ValueChangedArgs_build(uType* type)
{
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", type, (void*)ValueChangedArgs__New2_fn, 0, true, type, 1, type->T(0)),
        new uFunction("get_Value", NULL, (void*)ValueChangedArgs__get_Value_fn, 0, false, type->T(0), 0));
}

uType* ValueChangedArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(ValueChangedArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.ValueChangedArgs`1", options);
    type->fp_build_ = ValueChangedArgs_build;
    return type;
}

// public ValueChangedArgs(T value) :464
void ValueChangedArgs__ctor_1_fn(ValueChangedArgs* __this, void* value)
{
    uStackFrame __("Uno.UX.ValueChangedArgs`1", ".ctor(T)");
    __this->ctor_();
    ValueChangedArgs__set_Value_fn(__this, value);
}

// public ValueChangedArgs New(T value) :464
void ValueChangedArgs__New2_fn(uType* __type, void* value, ValueChangedArgs** __retval)
{
    ValueChangedArgs* obj1 = (ValueChangedArgs*)uNew(__type);
    ValueChangedArgs__ctor_1_fn(obj1, value);
    return *__retval = obj1, void();
}

// public generated T get_Value() :462
void ValueChangedArgs__get_Value_fn(ValueChangedArgs* __this, uTRef __retval)
{
    uStackFrame __("Uno.UX.ValueChangedArgs`1", "get_Value()");
    return __retval.Store(__this->_Value()), void();
}

// private generated void set_Value(T value) :462
void ValueChangedArgs__set_Value_fn(ValueChangedArgs* __this, void* value)
{
    uStackFrame __("Uno.UX.ValueChangedArgs`1", "set_Value(T)");
    __this->_Value() = value;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/ux/$.uno
// ----------------------------------------------------------------

// public delegate void ValueChangedHandler<T>(object sender, Uno.UX.ValueChangedArgs<T> args) :470
uDelegateType* ValueChangedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.UX.ValueChangedHandler`1", 2, 1);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(type->T(0)));
    return type;
}

}}} // ::g::Uno::UX
