// This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/time/text/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.Time.Offset.h>
#include <Uno.Time.Text.IPatternPart-1.h>
#include <Uno.Time.Text.PatternPart-2.h>
namespace g{namespace Uno{namespace Time{namespace Text{struct OffsetPatternPart;}}}}

namespace g{
namespace Uno{
namespace Time{
namespace Text{

// internal sealed class OffsetPatternPart<T> :1057
// {
::g::Uno::Time::Text::PatternPart_type* OffsetPatternPart_typeof();
void OffsetPatternPart__ctor_1_fn(OffsetPatternPart* __this, uDelegate* setter, uDelegate* getter);
void OffsetPatternPart__New1_fn(uType* __type, uDelegate* setter, uDelegate* getter, OffsetPatternPart** __retval);
void OffsetPatternPart__Read_fn(OffsetPatternPart* __this, uString* line, int* position, void* value, int* __retval);
void OffsetPatternPart__Write_fn(OffsetPatternPart* __this, void* value, uString** __retval);

struct OffsetPatternPart : ::g::Uno::Time::Text::PatternPart
{
    void ctor_1(uDelegate* setter, uDelegate* getter);
    static OffsetPatternPart* New1(uType* __type, uDelegate* setter, uDelegate* getter);
};
// }

}}}} // ::g::Uno::Time::Text
