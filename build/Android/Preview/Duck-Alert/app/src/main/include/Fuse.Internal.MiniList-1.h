// This file was generated based on /usr/local/share/uno/Packages/FuseCore/0.40.8/internal/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct MiniList;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Internal{

// internal struct MiniList<T> :837
// {
uStructType* MiniList_typeof();
void MiniList__Add_fn(MiniList* __this, uType* __type, uObject* value);
void MiniList__Clear_fn(MiniList* __this, uType* __type);
void MiniList__Contains_fn(MiniList* __this, uType* __type, uObject* value, bool* __retval);
void MiniList__get_Count_fn(MiniList* __this, uType* __type, int* __retval);
void MiniList__get_Item_fn(MiniList* __this, uType* __type, int* index, uObject** __retval);
void MiniList__Remove_fn(MiniList* __this, uType* __type, uObject* value);

struct MiniList
{
    uStrong<uObject*> _single;
    uStrong< ::g::Uno::Collections::List*> _list;

    void Add(uType* __type, uObject* value);
    void Clear(uType* __type);
    bool Contains(uType* __type, uObject* value);
    int Count(uType* __type);
    uObject* Item(uType* __type, int index);
    void Remove(uType* __type, uObject* value);
};
// }

}}} // ::g::Fuse::Internal
