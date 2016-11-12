// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.40.8/textcontrols/fallbacktextedit/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{struct DegreeSpan;}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FallbackTextEdit{

// internal sealed class DegreeSpan :19
// {
uType* DegreeSpan_typeof();
void DegreeSpan__ctor__fn(DegreeSpan* __this, float* a, float* b);
void DegreeSpan__IsWithinBounds_fn(DegreeSpan* __this, float* x, bool* __retval);
void DegreeSpan__New1_fn(float* a, float* b, DegreeSpan** __retval);

struct DegreeSpan : uObject
{
    float _a;
    float _b;

    void ctor_(float a, float b);
    bool IsWithinBounds(float x);
    static DegreeSpan* New1(float a, float b);
};
// }

}}}} // ::g::Fuse::Controls::FallbackTextEdit
