// This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/collections/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct ReadOnlyCollection;}}}

namespace g{
namespace Uno{
namespace Collections{

// public sealed class ReadOnlyCollection<T> :1481
// {
struct ReadOnlyCollection_type : uType
{
    ::g::Uno::Collections::IEnumerable interface0;
};

ReadOnlyCollection_type* ReadOnlyCollection_typeof();
void ReadOnlyCollection__ctor__fn(ReadOnlyCollection* __this, uObject* list);
void ReadOnlyCollection__GetEnumerator_fn(ReadOnlyCollection* __this, uObject** __retval);
void ReadOnlyCollection__New1_fn(uType* __type, uObject* list, ReadOnlyCollection** __retval);

struct ReadOnlyCollection : uObject
{
    uStrong<uObject*> _list;

    void ctor_(uObject* list);
    uObject* GetEnumerator();
    static ReadOnlyCollection* New1(uType* __type, uObject* list);
};
// }

}}} // ::g::Uno::Collections
