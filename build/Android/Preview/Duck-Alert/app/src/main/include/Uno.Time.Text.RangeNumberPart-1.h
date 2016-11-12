// This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/time/text/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Time.Text.IPatternPart-1.h>
#include <Uno.Time.Text.PatternPart-2.h>
namespace g{namespace Uno{namespace Time{namespace Text{struct RangeNumberPart;}}}}

namespace g{
namespace Uno{
namespace Time{
namespace Text{

// internal sealed class RangeNumberPart<T> :902
// {
::g::Uno::Time::Text::PatternPart_type* RangeNumberPart_typeof();
void RangeNumberPart__ctor_1_fn(RangeNumberPart* __this, int* size, int* maxSize, uDelegate* setter, uDelegate* getter);
void RangeNumberPart__New1_fn(uType* __type, int* size, int* maxSize, uDelegate* setter, uDelegate* getter, RangeNumberPart** __retval);
void RangeNumberPart__Read_fn(RangeNumberPart* __this, uString* line, int* position, void* value, int* __retval);
void RangeNumberPart__Write_fn(RangeNumberPart* __this, void* value, uString** __retval);

struct RangeNumberPart : ::g::Uno::Time::Text::PatternPart
{
    int _maxSize;

    void ctor_1(int size, int maxSize, uDelegate* setter, uDelegate* getter);
    static RangeNumberPart* New1(uType* __type, int size, int maxSize, uDelegate* setter, uDelegate* getter);
};
// }

}}}} // ::g::Uno::Time::Text
