// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.uno/ux11/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Outracks{namespace Simulator{struct DeveloperMenu;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property;}

namespace g{

// internal sealed class OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property :329
// {
::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property_typeof();
void OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property__ctor_2_fn(OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property* __this, ::g::Outracks::Simulator::DeveloperMenu* obj, ::g::Uno::UX::Selector* name);
void OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property__Get_fn(OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property* __this, float* __retval);
void OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property__New1_fn(::g::Outracks::Simulator::DeveloperMenu* obj, ::g::Uno::UX::Selector* name, OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property** __retval);
void OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property__get_Object_fn(OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property__Set_fn(OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property* __this, float* v, uObject* origin);
void OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property* __this, bool* __retval);

struct OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Outracks::Simulator::DeveloperMenu*> _obj;

    void ctor_2(::g::Outracks::Simulator::DeveloperMenu* obj, ::g::Uno::UX::Selector name);
    static OutracksSimulatorClientUno_OutracksSimulatorDeveloperMenu_Opacity_Property* New1(::g::Outracks::Simulator::DeveloperMenu* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
