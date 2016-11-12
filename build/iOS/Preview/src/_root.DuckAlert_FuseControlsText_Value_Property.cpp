// This file was generated based on /Users/JLMacAir/development/hackathons/Duck-Alert/build/iOS/Preview/cache/ux11/Duck-Alert.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.DuckAlert_FuseControlsText_Value_Property.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class DuckAlert_FuseControlsText_Value_Property :1
// {
static void DuckAlert_FuseControlsText_Value_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()));
    type->SetFields(1,
        ::g::Fuse::Controls::Text_typeof(), offsetof(::g::DuckAlert_FuseControlsText_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* DuckAlert_FuseControlsText_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(DuckAlert_FuseControlsText_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("DuckAlert_FuseControlsText_Value_Property", options);
    type->fp_build_ = DuckAlert_FuseControlsText_Value_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))DuckAlert_FuseControlsText_Value_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))DuckAlert_FuseControlsText_Value_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))DuckAlert_FuseControlsText_Value_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))DuckAlert_FuseControlsText_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public DuckAlert_FuseControlsText_Value_Property(Fuse.Controls.Text obj, Uno.UX.Selector name) :4
void DuckAlert_FuseControlsText_Value_Property__ctor_2_fn(DuckAlert_FuseControlsText_Value_Property* __this, ::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed string Get() :6
void DuckAlert_FuseControlsText_Value_Property__Get_fn(DuckAlert_FuseControlsText_Value_Property* __this, uString** __retval)
{
    uStackFrame __("DuckAlert_FuseControlsText_Value_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Value(), void();
}

// public DuckAlert_FuseControlsText_Value_Property New(Fuse.Controls.Text obj, Uno.UX.Selector name) :4
void DuckAlert_FuseControlsText_Value_Property__New1_fn(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name, DuckAlert_FuseControlsText_Value_Property** __retval)
{
    *__retval = DuckAlert_FuseControlsText_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :5
void DuckAlert_FuseControlsText_Value_Property__get_Object_fn(DuckAlert_FuseControlsText_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("DuckAlert_FuseControlsText_Value_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :7
void DuckAlert_FuseControlsText_Value_Property__Set_fn(DuckAlert_FuseControlsText_Value_Property* __this, uString* v, uObject* origin)
{
    uStackFrame __("DuckAlert_FuseControlsText_Value_Property", "Set(string,Uno.UX.IPropertyListener)");
    uPtr(__this->_obj)->SetValue(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :8
void DuckAlert_FuseControlsText_Value_Property__get_SupportsOriginSetter_fn(DuckAlert_FuseControlsText_Value_Property* __this, bool* __retval)
{
    uStackFrame __("DuckAlert_FuseControlsText_Value_Property", "get_SupportsOriginSetter()");
    return *__retval = true, void();
}

// public DuckAlert_FuseControlsText_Value_Property(Fuse.Controls.Text obj, Uno.UX.Selector name) [instance] :4
void DuckAlert_FuseControlsText_Value_Property::ctor_2(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("DuckAlert_FuseControlsText_Value_Property", ".ctor(Fuse.Controls.Text,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public DuckAlert_FuseControlsText_Value_Property New(Fuse.Controls.Text obj, Uno.UX.Selector name) [static] :4
DuckAlert_FuseControlsText_Value_Property* DuckAlert_FuseControlsText_Value_Property::New1(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name)
{
    DuckAlert_FuseControlsText_Value_Property* obj1 = (DuckAlert_FuseControlsText_Value_Property*)uNew(DuckAlert_FuseControlsText_Value_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
