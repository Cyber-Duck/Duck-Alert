// This file was generated based on /usr/local/share/uno/Packages/Fuse.Entities/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Entities.VisitType-1.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Entities{struct VisitAction;}}}

namespace g{
namespace Fuse{
namespace Entities{

// internal sealed class VisitAction<T> :1582
// {
::g::Fuse::Entities::VisitType_type* VisitAction_typeof();
void VisitAction__ctor_1_fn(VisitAction* __this, uDelegate* visit);
void VisitAction__New1_fn(uType* __type, uDelegate* visit, VisitAction** __retval);
void VisitAction__Visit1_fn(VisitAction* __this, void* t, bool* __retval);

struct VisitAction : ::g::Fuse::Entities::VisitType
{
    uStrong<uDelegate*> _visit;

    void ctor_1(uDelegate* visit);
    static VisitAction* New1(uType* __type, uDelegate* visit);
};
// }

}}} // ::g::Fuse::Entities
