// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/0.40.8/layouts/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyObject.h>
namespace g{namespace Fuse{namespace Layouts{struct DefinitionBase;}}}
namespace g{namespace Fuse{namespace Layouts{struct DefinitionBase__ParseDataItem;}}}

namespace g{
namespace Fuse{
namespace Layouts{

// public abstract class DefinitionBase :780
// {
uType* DefinitionBase_typeof();
void DefinitionBase__ctor_1_fn(DefinitionBase* __this);
void DefinitionBase__get_ActualOffset_fn(DefinitionBase* __this, float* __retval);
void DefinitionBase__set_ActualOffset_fn(DefinitionBase* __this, float* value);
void DefinitionBase__add_Changed_fn(DefinitionBase* __this, uDelegate* value);
void DefinitionBase__remove_Changed_fn(DefinitionBase* __this, uDelegate* value);
void DefinitionBase__get_Implicit_fn(DefinitionBase* __this, bool* __retval);
void DefinitionBase__set_Implicit_fn(DefinitionBase* __this, bool* value);
void DefinitionBase__OnChanged_fn(DefinitionBase* __this);
void DefinitionBase__ParseData_fn(uString* data, uObject** __retval);
void DefinitionBase__ParseDataSingle_fn(uString* data, DefinitionBase__ParseDataItem* __retval);

struct DefinitionBase : ::g::Uno::UX::PropertyObject
{
    float _actualOffset;
    bool _Implicit;
    uStrong<uDelegate*> Changed1;

    void ctor_1();
    float ActualOffset();
    void ActualOffset(float value);
    void add_Changed(uDelegate* value);
    void remove_Changed(uDelegate* value);
    bool Implicit();
    void Implicit(bool value);
    void OnChanged();
    static uObject* ParseData(uString* data);
    static DefinitionBase__ParseDataItem ParseDataSingle(uString* data);
};
// }

}}} // ::g::Fuse::Layouts
