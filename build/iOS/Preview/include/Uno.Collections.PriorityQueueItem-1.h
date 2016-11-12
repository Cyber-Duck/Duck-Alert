// This file was generated based on /usr/local/share/uno/Packages/FuseCore/0.40.8/internal/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{
namespace Collections{

// internal struct PriorityQueueItem<T> :929
// {
uStructType* PriorityQueueItem_typeof();

template<class T>
struct PriorityQueueItem
{
    T Value;
    float Priority;
};
// }

}}} // ::g::Uno::Collections
