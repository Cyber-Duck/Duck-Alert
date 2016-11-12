// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.IParentObserver.h>
#include <Fuse.Navigation.IBaseNavigation.h>
#include <Fuse.Navigation.INavigation.h>
#include <Fuse.Navigation.ISeekableNavigation.h>
#include <Fuse.Navigation.StructuredNavigation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Navigation{struct HierarchicalNavigation;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class HierarchicalNavigation :3171
// {
::g::Fuse::Navigation::StructuredNavigation_type* HierarchicalNavigation_typeof();
void HierarchicalNavigation__ctor_5_fn(HierarchicalNavigation* __this);
void HierarchicalNavigation__New2_fn(HierarchicalNavigation** __retval);
void HierarchicalNavigation__get_ReuseExistingVisual_fn(HierarchicalNavigation* __this, bool* __retval);
void HierarchicalNavigation__set_ReuseExistingVisual_fn(HierarchicalNavigation* __this, bool* value);

struct HierarchicalNavigation : ::g::Fuse::Navigation::StructuredNavigation
{
    void ctor_5();
    bool ReuseExistingVisual();
    void ReuseExistingVisual(bool value);
    static HierarchicalNavigation* New2();
};
// }

}}} // ::g::Fuse::Navigation
