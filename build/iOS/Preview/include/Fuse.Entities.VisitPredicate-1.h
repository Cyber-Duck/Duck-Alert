// This file was generated based on /usr/local/share/uno/Packages/Fuse.Entities/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Entities.VisitType-1.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Entities{struct VisitPredicate;}}}

namespace g{
namespace Fuse{
namespace Entities{

// internal sealed class VisitPredicate<T> :1575
// {
::g::Fuse::Entities::VisitType_type* VisitPredicate_typeof();
void VisitPredicate__ctor_1_fn(VisitPredicate* __this, uDelegate* visit);
void VisitPredicate__New1_fn(uType* __type, uDelegate* visit, VisitPredicate** __retval);
void VisitPredicate__Visit1_fn(VisitPredicate* __this, void* t, bool* __retval);

struct VisitPredicate : ::g::Fuse::Entities::VisitType
{
    uStrong<uDelegate*> _visit;

    void ctor_1(uDelegate* visit);
    static VisitPredicate* New1(uType* __type, uDelegate* visit);
};
// }

}}} // ::g::Fuse::Entities
