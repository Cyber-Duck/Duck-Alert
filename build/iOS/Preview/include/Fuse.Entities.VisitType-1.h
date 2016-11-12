// This file was generated based on /usr/local/share/uno/Packages/Fuse.Entities/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Entities{struct VisitType;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Entities{

// internal abstract class VisitType<T> :1589
// {
struct VisitType_type : uType
{
    void(*fp_Visit1)(::g::Fuse::Entities::VisitType*, void*, bool*);
};

VisitType_type* VisitType_typeof();
void VisitType__ctor__fn(VisitType* __this);
void VisitType__Visit_fn(VisitType* __this, ::g::Fuse::Node* node, bool* __retval);

struct VisitType : uObject
{
    void ctor_();
    bool Visit(::g::Fuse::Node* node);
    template<class T>
    bool Visit1(T node) { bool __retval; return (((VisitType_type*)__type)->fp_Visit1)(this, uConstrain(__type->GetBase(VisitType_typeof())->T(0), node), &__retval), __retval; }
    void Visit1_ex(void* node, bool* __retval) { (((VisitType_type*)__type)->fp_Visit1)(this, node, __retval); }
};
// }

}}} // ::g::Fuse::Entities
