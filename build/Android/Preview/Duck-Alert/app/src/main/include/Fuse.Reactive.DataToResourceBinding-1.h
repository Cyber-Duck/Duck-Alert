// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.INameListener.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Scripting.IObserver.h>
#include <Uno.Object.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Reactive{struct DataToResourceBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class DataToResourceBinding<T> :451
// {
::g::Fuse::Reactive::DataBinding_type* DataToResourceBinding_typeof();
void DataToResourceBinding__ctor_4_fn(DataToResourceBinding* __this, ::g::Uno::UX::Property1* target, uString* key);
void DataToResourceBinding__AcceptFunction_fn(DataToResourceBinding* __this, uObject* obj, bool* __retval);
void DataToResourceBinding__New3_fn(uType* __type, ::g::Uno::UX::Property1* target, uString* key, DataToResourceBinding** __retval);
void DataToResourceBinding__OnChanged_fn(DataToResourceBinding* __this);
void DataToResourceBinding__PushValue_fn(DataToResourceBinding* __this, uObject* value);

struct DataToResourceBinding : ::g::Fuse::Reactive::DataBinding
{
    uStrong<uString*> _key;

    void ctor_4(::g::Uno::UX::Property1* target, uString* key);
    bool AcceptFunction(uObject* obj);
    void OnChanged();
    static DataToResourceBinding* New3(uType* __type, ::g::Uno::UX::Property1* target, uString* key);
};
// }

}}} // ::g::Fuse::Reactive
