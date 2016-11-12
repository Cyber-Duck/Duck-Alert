// This file was generated based on /usr/local/share/uno/Packages/Fuse.Entities/0.40.8/processing/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Entities.Mesh.h>
#include <Fuse.IOutput-1.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct Polygon;}}}
namespace g{namespace Fuse{namespace Entities{namespace Processing{struct Extrude;}}}}

namespace g{
namespace Fuse{
namespace Entities{
namespace Processing{

// internal sealed class Extrude :27
// {
struct Extrude_type : uType
{
    ::g::Fuse::IOutput interface0;
};

Extrude_type* Extrude_typeof();
void Extrude__ctor__fn(Extrude* __this);
void Extrude__get_Depth_fn(Extrude* __this, float* __retval);
void Extrude__set_Depth_fn(Extrude* __this, float* value);
void Extrude__Invalidate_fn(Extrude* __this);
void Extrude__New1_fn(Extrude** __retval);
void Extrude__get_Output_fn(Extrude* __this, ::g::Fuse::Entities::Mesh** __retval);
void Extrude__add_OutputChanged_fn(Extrude* __this, uDelegate* value);
void Extrude__remove_OutputChanged_fn(Extrude* __this, uDelegate* value);
void Extrude__get_SmoothingThreshold_fn(Extrude* __this, float* __retval);
void Extrude__set_SmoothingThreshold_fn(Extrude* __this, float* value);
void Extrude__get_Source_fn(Extrude* __this, uObject** __retval);
void Extrude__set_Source_fn(Extrude* __this, uObject* value);

struct Extrude : uObject
{
    float _depth;
    uStrong< ::g::Fuse::Entities::Mesh*> _output;
    float _smoothingThreshold;
    uStrong<uObject*> _source;
    uStrong<uDelegate*> OutputChanged1;

    void ctor_();
    float Depth();
    void Depth(float value);
    void Invalidate();
    ::g::Fuse::Entities::Mesh* Output();
    void add_OutputChanged(uDelegate* value);
    void remove_OutputChanged(uDelegate* value);
    float SmoothingThreshold();
    void SmoothingThreshold(float value);
    uObject* Source();
    void Source(uObject* value);
    static Extrude* New1();
};
// }

}}}} // ::g::Fuse::Entities::Processing
