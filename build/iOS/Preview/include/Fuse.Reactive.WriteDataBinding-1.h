// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.INameListener.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Scripting.IObserver.h>
#include <Uno.Object.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Reactive{struct WriteDataBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class WriteDataBinding<T> :414
// {
::g::Fuse::Reactive::DataBinding_type* WriteDataBinding_typeof();
void WriteDataBinding__ctor_4_fn(WriteDataBinding* __this, ::g::Uno::UX::Property1* target, uString* key);
void WriteDataBinding__New3_fn(uType* __type, ::g::Uno::UX::Property1* target, uString* key, WriteDataBinding** __retval);

struct WriteDataBinding : ::g::Fuse::Reactive::DataBinding
{
    void ctor_4(::g::Uno::UX::Property1* target, uString* key);
    static WriteDataBinding* New3(uType* __type, ::g::Uno::UX::Property1* target, uString* key);
};
// }

}}} // ::g::Fuse::Reactive
