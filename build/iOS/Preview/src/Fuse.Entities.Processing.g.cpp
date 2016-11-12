// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Drawing.LineCap.h>
#include <Fuse.Drawing.Polygon.h>
#include <Fuse.Entities.Processing.Extrude.h>
#include <Fuse.Entities.Processing.Stroke.h>
#include <Uno.Action.h>
#include <Uno.Bool.h>
#include <Uno.Content.Models.ModelMesh.h>
#include <Uno.Delegate.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
static uType* TYPES[2];

namespace g{
namespace Fuse{
namespace Entities{
namespace Processing{

// /usr/local/share/uno/Packages/Fuse.Entities/0.40.8/processing/$.uno
// -------------------------------------------------------------------

// internal sealed class Extrude :27
// {
static void Extrude_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::IOutput_typeof()->MakeType(::g::Fuse::Drawing::Polygon_typeof());
    ::TYPES[1] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Fuse::IOutput_typeof()->MakeType(::g::Fuse::Entities::Mesh_typeof()), offsetof(Extrude_type, interface0));
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Entities::Processing::Extrude, _depth), 0,
        ::g::Fuse::Entities::Mesh_typeof(), offsetof(::g::Fuse::Entities::Processing::Extrude, _output), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Entities::Processing::Extrude, _smoothingThreshold), 0,
        ::g::Fuse::IOutput_typeof()->MakeType(::g::Fuse::Drawing::Polygon_typeof()), offsetof(::g::Fuse::Entities::Processing::Extrude, _source), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Entities::Processing::Extrude, OutputChanged1), 0);
}

Extrude_type* Extrude_typeof()
{
    static uSStrong<Extrude_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Extrude);
    options.TypeSize = sizeof(Extrude_type);
    type = (Extrude_type*)uClassType::New("Fuse.Entities.Processing.Extrude", options);
    type->fp_build_ = Extrude_build;
    type->fp_ctor_ = (void*)Extrude__New1_fn;
    type->interface0.fp_get_Output = (void(*)(uObject*, uTRef))Extrude__get_Output_fn;
    type->interface0.fp_add_OutputChanged = (void(*)(uObject*, uDelegate*))Extrude__add_OutputChanged_fn;
    type->interface0.fp_remove_OutputChanged = (void(*)(uObject*, uDelegate*))Extrude__remove_OutputChanged_fn;
    return type;
}

// public generated Extrude() :27
void Extrude__ctor__fn(Extrude* __this)
{
    __this->ctor_();
}

// public float get_Depth() :44
void Extrude__get_Depth_fn(Extrude* __this, float* __retval)
{
    *__retval = __this->Depth();
}

// public void set_Depth(float value) :45
void Extrude__set_Depth_fn(Extrude* __this, float* value)
{
    __this->Depth(*value);
}

// private void Invalidate() :69
void Extrude__Invalidate_fn(Extrude* __this)
{
    __this->Invalidate();
}

// public generated Extrude New() :27
void Extrude__New1_fn(Extrude** __retval)
{
    *__retval = Extrude::New1();
}

// public Fuse.Entities.Mesh get_Output() :80
void Extrude__get_Output_fn(Extrude* __this, ::g::Fuse::Entities::Mesh** __retval)
{
    *__retval = __this->Output();
}

// public generated void add_OutputChanged(Uno.Action value) :75
void Extrude__add_OutputChanged_fn(Extrude* __this, uDelegate* value)
{
    __this->add_OutputChanged(value);
}

// public generated void remove_OutputChanged(Uno.Action value) :75
void Extrude__remove_OutputChanged_fn(Extrude* __this, uDelegate* value)
{
    __this->remove_OutputChanged(value);
}

// public float get_SmoothingThreshold() :33
void Extrude__get_SmoothingThreshold_fn(Extrude* __this, float* __retval)
{
    *__retval = __this->SmoothingThreshold();
}

// public void set_SmoothingThreshold(float value) :34
void Extrude__set_SmoothingThreshold_fn(Extrude* __this, float* value)
{
    __this->SmoothingThreshold(*value);
}

// public Fuse.IOutput<Fuse.Drawing.Polygon> get_Source() :56
void Extrude__get_Source_fn(Extrude* __this, uObject** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(Fuse.IOutput<Fuse.Drawing.Polygon> value) :57
void Extrude__set_Source_fn(Extrude* __this, uObject* value)
{
    __this->Source(value);
}

// public generated Extrude() [instance] :27
void Extrude::ctor_()
{
    uStackFrame __("Fuse.Entities.Processing.Extrude", ".ctor()");
    _smoothingThreshold = 0.1f;
}

// public float get_Depth() [instance] :44
float Extrude::Depth()
{
    uStackFrame __("Fuse.Entities.Processing.Extrude", "get_Depth()");
    return _depth;
}

// public void set_Depth(float value) [instance] :45
void Extrude::Depth(float value)
{
    uStackFrame __("Fuse.Entities.Processing.Extrude", "set_Depth(float)");
    _depth = value;
    Invalidate();
}

// private void Invalidate() [instance] :69
void Extrude::Invalidate()
{
    uStackFrame __("Fuse.Entities.Processing.Extrude", "Invalidate()");
    _output = NULL;

    if (::g::Uno::Delegate::op_Inequality(OutputChanged1, NULL))
        uPtr(OutputChanged1)->InvokeVoid();
}

// public Fuse.Entities.Mesh get_Output() [instance] :80
::g::Fuse::Entities::Mesh* Extrude::Output()
{
    uStackFrame __("Fuse.Entities.Processing.Extrude", "get_Output()");
    ::g::Fuse::Drawing::Polygon* ret2;
    ::g::Fuse::Drawing::Polygon* ret3;

    if (_output != NULL)
        return _output;

    if ((_source == NULL) || ((::g::Fuse::IOutput::get_Output_ex(uInterface(uPtr(_source), ::TYPES[0/*Fuse.IOutput<Fuse.Drawing.Polygon>*/]), &ret2), ret2) == NULL))
        return NULL;

    _output = ::g::Fuse::Entities::Mesh::New2(uPtr((::g::Fuse::IOutput::get_Output_ex(uInterface(uPtr(_source), ::TYPES[0/*Fuse.IOutput<Fuse.Drawing.Polygon>*/]), &ret3), ret3))->Extrude(Depth(), SmoothingThreshold()));
    return _output;
}

// public generated void add_OutputChanged(Uno.Action value) [instance] :75
void Extrude::add_OutputChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Entities.Processing.Extrude", "add_OutputChanged(Uno.Action)");
    OutputChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(OutputChanged1, value), ::TYPES[1/*Uno.Action*/]);
}

// public generated void remove_OutputChanged(Uno.Action value) [instance] :75
void Extrude::remove_OutputChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Entities.Processing.Extrude", "remove_OutputChanged(Uno.Action)");
    OutputChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(OutputChanged1, value), ::TYPES[1/*Uno.Action*/]);
}

// public float get_SmoothingThreshold() [instance] :33
float Extrude::SmoothingThreshold()
{
    uStackFrame __("Fuse.Entities.Processing.Extrude", "get_SmoothingThreshold()");
    return _smoothingThreshold;
}

// public void set_SmoothingThreshold(float value) [instance] :34
void Extrude::SmoothingThreshold(float value)
{
    uStackFrame __("Fuse.Entities.Processing.Extrude", "set_SmoothingThreshold(float)");
    _smoothingThreshold = value;
    Invalidate();
}

// public Fuse.IOutput<Fuse.Drawing.Polygon> get_Source() [instance] :56
uObject* Extrude::Source()
{
    uStackFrame __("Fuse.Entities.Processing.Extrude", "get_Source()");
    return _source;
}

// public void set_Source(Fuse.IOutput<Fuse.Drawing.Polygon> value) [instance] :57
void Extrude::Source(uObject* value)
{
    uStackFrame __("Fuse.Entities.Processing.Extrude", "set_Source(Fuse.IOutput<Fuse.Drawing.Polygon>)");

    if (value == _source)
        return;

    if (_source != NULL)
        ::g::Fuse::IOutput::remove_OutputChanged(uInterface(uPtr(_source), ::TYPES[0/*Fuse.IOutput<Fuse.Drawing.Polygon>*/]), uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)Extrude__Invalidate_fn, this));

    _source = value;

    if (_source != NULL)
        ::g::Fuse::IOutput::add_OutputChanged(uInterface(uPtr(_source), ::TYPES[0/*Fuse.IOutput<Fuse.Drawing.Polygon>*/]), uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)Extrude__Invalidate_fn, this));

    Invalidate();
}

// public generated Extrude New() [static] :27
Extrude* Extrude::New1()
{
    Extrude* obj1 = (Extrude*)uNew(Extrude_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Entities/0.40.8/processing/$.uno
// -------------------------------------------------------------------

// internal sealed class Stroke :108
// {
static void Stroke_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::IOutput_typeof()->MakeType(::g::Fuse::Drawing::Polygon_typeof());
    ::TYPES[1] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Fuse::IOutput_typeof()->MakeType(::g::Fuse::Drawing::Polygon_typeof()), offsetof(Stroke_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Drawing::LineCap_typeof(), offsetof(::g::Fuse::Entities::Processing::Stroke, _endCap), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Entities::Processing::Stroke, _offset), 0,
        ::g::Fuse::Drawing::Polygon_typeof(), offsetof(::g::Fuse::Entities::Processing::Stroke, _output), 0,
        ::g::Fuse::IOutput_typeof()->MakeType(::g::Fuse::Drawing::Polygon_typeof()), offsetof(::g::Fuse::Entities::Processing::Stroke, _source), 0,
        ::g::Fuse::Drawing::LineCap_typeof(), offsetof(::g::Fuse::Entities::Processing::Stroke, _startCap), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Entities::Processing::Stroke, _width), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Entities::Processing::Stroke, OutputChanged1), 0);
}

Stroke_type* Stroke_typeof()
{
    static uSStrong<Stroke_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Stroke);
    options.TypeSize = sizeof(Stroke_type);
    type = (Stroke_type*)uClassType::New("Fuse.Entities.Processing.Stroke", options);
    type->fp_build_ = Stroke_build;
    type->fp_ctor_ = (void*)Stroke__New1_fn;
    type->interface0.fp_get_Output = (void(*)(uObject*, uTRef))Stroke__get_Output_fn;
    type->interface0.fp_add_OutputChanged = (void(*)(uObject*, uDelegate*))Stroke__add_OutputChanged_fn;
    type->interface0.fp_remove_OutputChanged = (void(*)(uObject*, uDelegate*))Stroke__remove_OutputChanged_fn;
    return type;
}

// public generated Stroke() :108
void Stroke__ctor__fn(Stroke* __this)
{
    __this->ctor_();
}

// public Fuse.Drawing.LineCap get_EndCap() :149
void Stroke__get_EndCap_fn(Stroke* __this, int* __retval)
{
    *__retval = __this->EndCap();
}

// public void set_EndCap(Fuse.Drawing.LineCap value) :150
void Stroke__set_EndCap_fn(Stroke* __this, int* value)
{
    __this->EndCap(*value);
}

// private void Invalidate() :174
void Stroke__Invalidate_fn(Stroke* __this)
{
    __this->Invalidate();
}

// public generated Stroke New() :108
void Stroke__New1_fn(Stroke** __retval)
{
    *__retval = Stroke::New1();
}

// public float get_Offset() :125
void Stroke__get_Offset_fn(Stroke* __this, float* __retval)
{
    *__retval = __this->Offset();
}

// public void set_Offset(float value) :126
void Stroke__set_Offset_fn(Stroke* __this, float* value)
{
    __this->Offset(*value);
}

// public Fuse.Drawing.Polygon get_Output() :185
void Stroke__get_Output_fn(Stroke* __this, ::g::Fuse::Drawing::Polygon** __retval)
{
    *__retval = __this->Output();
}

// public generated void add_OutputChanged(Uno.Action value) :180
void Stroke__add_OutputChanged_fn(Stroke* __this, uDelegate* value)
{
    __this->add_OutputChanged(value);
}

// public generated void remove_OutputChanged(Uno.Action value) :180
void Stroke__remove_OutputChanged_fn(Stroke* __this, uDelegate* value)
{
    __this->remove_OutputChanged(value);
}

// public Fuse.IOutput<Fuse.Drawing.Polygon> get_Source() :163
void Stroke__get_Source_fn(Stroke* __this, uObject** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(Fuse.IOutput<Fuse.Drawing.Polygon> value) :164
void Stroke__set_Source_fn(Stroke* __this, uObject* value)
{
    __this->Source(value);
}

// public Fuse.Drawing.LineCap get_StartCap() :137
void Stroke__get_StartCap_fn(Stroke* __this, int* __retval)
{
    *__retval = __this->StartCap();
}

// public void set_StartCap(Fuse.Drawing.LineCap value) :138
void Stroke__set_StartCap_fn(Stroke* __this, int* value)
{
    __this->StartCap(*value);
}

// public float get_Width() :113
void Stroke__get_Width_fn(Stroke* __this, float* __retval)
{
    *__retval = __this->Width();
}

// public void set_Width(float value) :114
void Stroke__set_Width_fn(Stroke* __this, float* value)
{
    __this->Width(*value);
}

// public generated Stroke() [instance] :108
void Stroke::ctor_()
{
}

// public Fuse.Drawing.LineCap get_EndCap() [instance] :149
int Stroke::EndCap()
{
    uStackFrame __("Fuse.Entities.Processing.Stroke", "get_EndCap()");
    return _endCap;
}

// public void set_EndCap(Fuse.Drawing.LineCap value) [instance] :150
void Stroke::EndCap(int value)
{
    uStackFrame __("Fuse.Entities.Processing.Stroke", "set_EndCap(Fuse.Drawing.LineCap)");

    if (value == _endCap)
        return;

    _endCap = value;
    Invalidate();
}

// private void Invalidate() [instance] :174
void Stroke::Invalidate()
{
    uStackFrame __("Fuse.Entities.Processing.Stroke", "Invalidate()");
    _output = NULL;

    if (::g::Uno::Delegate::op_Inequality(OutputChanged1, NULL))
        uPtr(OutputChanged1)->InvokeVoid();
}

// public float get_Offset() [instance] :125
float Stroke::Offset()
{
    uStackFrame __("Fuse.Entities.Processing.Stroke", "get_Offset()");
    return _offset;
}

// public void set_Offset(float value) [instance] :126
void Stroke::Offset(float value)
{
    uStackFrame __("Fuse.Entities.Processing.Stroke", "set_Offset(float)");

    if (value == _offset)
        return;

    _offset = value;
    Invalidate();
}

// public Fuse.Drawing.Polygon get_Output() [instance] :185
::g::Fuse::Drawing::Polygon* Stroke::Output()
{
    uStackFrame __("Fuse.Entities.Processing.Stroke", "get_Output()");
    ::g::Fuse::Drawing::Polygon* ret2;
    ::g::Fuse::Drawing::Polygon* ret3;

    if (_output != NULL)
        return _output;

    if ((_source == NULL) || ((::g::Fuse::IOutput::get_Output_ex(uInterface(uPtr(_source), ::TYPES[0/*Fuse.IOutput<Fuse.Drawing.Polygon>*/]), &ret2), ret2) == NULL))
        return NULL;

    _output = uPtr((::g::Fuse::IOutput::get_Output_ex(uInterface(uPtr(Source()), ::TYPES[0/*Fuse.IOutput<Fuse.Drawing.Polygon>*/]), &ret3), ret3))->Stroke(::g::Uno::Math::Max1(0.1f, Width()), Offset(), StartCap(), EndCap());
    return _output;
}

// public generated void add_OutputChanged(Uno.Action value) [instance] :180
void Stroke::add_OutputChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Entities.Processing.Stroke", "add_OutputChanged(Uno.Action)");
    OutputChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(OutputChanged1, value), ::TYPES[1/*Uno.Action*/]);
}

// public generated void remove_OutputChanged(Uno.Action value) [instance] :180
void Stroke::remove_OutputChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Entities.Processing.Stroke", "remove_OutputChanged(Uno.Action)");
    OutputChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(OutputChanged1, value), ::TYPES[1/*Uno.Action*/]);
}

// public Fuse.IOutput<Fuse.Drawing.Polygon> get_Source() [instance] :163
uObject* Stroke::Source()
{
    uStackFrame __("Fuse.Entities.Processing.Stroke", "get_Source()");
    return _source;
}

// public void set_Source(Fuse.IOutput<Fuse.Drawing.Polygon> value) [instance] :164
void Stroke::Source(uObject* value)
{
    uStackFrame __("Fuse.Entities.Processing.Stroke", "set_Source(Fuse.IOutput<Fuse.Drawing.Polygon>)");

    if (value == _source)
        return;

    if (_source != NULL)
        ::g::Fuse::IOutput::remove_OutputChanged(uInterface(uPtr(_source), ::TYPES[0/*Fuse.IOutput<Fuse.Drawing.Polygon>*/]), uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)Stroke__Invalidate_fn, this));

    _source = value;

    if (_source != NULL)
        ::g::Fuse::IOutput::add_OutputChanged(uInterface(uPtr(_source), ::TYPES[0/*Fuse.IOutput<Fuse.Drawing.Polygon>*/]), uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)Stroke__Invalidate_fn, this));

    Invalidate();
}

// public Fuse.Drawing.LineCap get_StartCap() [instance] :137
int Stroke::StartCap()
{
    uStackFrame __("Fuse.Entities.Processing.Stroke", "get_StartCap()");
    return _startCap;
}

// public void set_StartCap(Fuse.Drawing.LineCap value) [instance] :138
void Stroke::StartCap(int value)
{
    uStackFrame __("Fuse.Entities.Processing.Stroke", "set_StartCap(Fuse.Drawing.LineCap)");

    if (value == _startCap)
        return;

    _startCap = value;
    Invalidate();
}

// public float get_Width() [instance] :113
float Stroke::Width()
{
    uStackFrame __("Fuse.Entities.Processing.Stroke", "get_Width()");
    return _width;
}

// public void set_Width(float value) [instance] :114
void Stroke::Width(float value)
{
    uStackFrame __("Fuse.Entities.Processing.Stroke", "set_Width(float)");

    if (value == _width)
        return;

    _width = value;
    Invalidate();
}

// public generated Stroke New() [static] :108
Stroke* Stroke::New1()
{
    Stroke* obj1 = (Stroke*)uNew(Stroke_typeof());
    obj1->ctor_();
    return obj1;
}
// }

}}}} // ::g::Fuse::Entities::Processing
