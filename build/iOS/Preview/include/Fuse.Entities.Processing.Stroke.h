// This file was generated based on /usr/local/share/uno/Packages/Fuse.Entities/0.40.8/processing/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.Polygon.h>
#include <Fuse.IOutput-1.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Entities{namespace Processing{struct Stroke;}}}}

namespace g{
namespace Fuse{
namespace Entities{
namespace Processing{

// internal sealed class Stroke :108
// {
struct Stroke_type : uType
{
    ::g::Fuse::IOutput interface0;
};

Stroke_type* Stroke_typeof();
void Stroke__ctor__fn(Stroke* __this);
void Stroke__get_EndCap_fn(Stroke* __this, int* __retval);
void Stroke__set_EndCap_fn(Stroke* __this, int* value);
void Stroke__Invalidate_fn(Stroke* __this);
void Stroke__New1_fn(Stroke** __retval);
void Stroke__get_Offset_fn(Stroke* __this, float* __retval);
void Stroke__set_Offset_fn(Stroke* __this, float* value);
void Stroke__get_Output_fn(Stroke* __this, ::g::Fuse::Drawing::Polygon** __retval);
void Stroke__add_OutputChanged_fn(Stroke* __this, uDelegate* value);
void Stroke__remove_OutputChanged_fn(Stroke* __this, uDelegate* value);
void Stroke__get_Source_fn(Stroke* __this, uObject** __retval);
void Stroke__set_Source_fn(Stroke* __this, uObject* value);
void Stroke__get_StartCap_fn(Stroke* __this, int* __retval);
void Stroke__set_StartCap_fn(Stroke* __this, int* value);
void Stroke__get_Width_fn(Stroke* __this, float* __retval);
void Stroke__set_Width_fn(Stroke* __this, float* value);

struct Stroke : uObject
{
    int _endCap;
    float _offset;
    uStrong< ::g::Fuse::Drawing::Polygon*> _output;
    uStrong<uObject*> _source;
    int _startCap;
    float _width;
    uStrong<uDelegate*> OutputChanged1;

    void ctor_();
    int EndCap();
    void EndCap(int value);
    void Invalidate();
    float Offset();
    void Offset(float value);
    ::g::Fuse::Drawing::Polygon* Output();
    void add_OutputChanged(uDelegate* value);
    void remove_OutputChanged(uDelegate* value);
    uObject* Source();
    void Source(uObject* value);
    int StartCap();
    void StartCap(int value);
    float Width();
    void Width(float value);
    static Stroke* New1();
};
// }

}}}} // ::g::Fuse::Entities::Processing
