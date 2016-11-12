// This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/time/utilities/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Time{struct Preconditions;}}}

namespace g{
namespace Uno{
namespace Time{

// internal static class Preconditions :104
// {
uClassType* Preconditions_typeof();
void Preconditions__CheckArgumentRange_fn(uString* paramName, int* value, int* minInclusive, int* maxInclusive);
void Preconditions__CheckArgumentRange1_fn(uString* paramName, int64_t* value, int64_t* minInclusive, int64_t* maxInclusive);
void Preconditions__CheckNotNull_fn(uType* __type, uObject* argument, uString* paramName, uObject** __retval);

struct Preconditions : uObject
{
    static void CheckArgumentRange(uString* paramName, int value, int minInclusive, int maxInclusive);
    static void CheckArgumentRange1(uString* paramName, int64_t value, int64_t minInclusive, int64_t maxInclusive);
    static uObject* CheckNotNull(uType* __type, uObject* argument, uString* paramName);
};
// }

}}} // ::g::Uno::Time
