// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct ClientPanel;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial class ClientPanel :33
// {
::g::Fuse::Controls::Control_type* ClientPanel_typeof();
void ClientPanel__ctor_8_fn(ClientPanel* __this);
void ClientPanel__InitializeUX_fn(ClientPanel* __this);
void ClientPanel__New5_fn(ClientPanel** __retval);

struct ClientPanel : ::g::Fuse::Controls::DockPanel
{
    void ctor_8();
    void InitializeUX();
    static ClientPanel* New5();
};
// }

}}} // ::g::Fuse::Controls
