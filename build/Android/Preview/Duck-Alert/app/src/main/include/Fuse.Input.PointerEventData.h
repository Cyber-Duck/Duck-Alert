// This file was generated based on /usr/local/share/uno/Packages/FuseCore/0.40.8/input/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Input{struct PointerEventData;}}}

namespace g{
namespace Fuse{
namespace Input{

// public sealed class PointerEventData :700
// {
uType* PointerEventData_typeof();
void PointerEventData__ctor__fn(PointerEventData* __this);
void PointerEventData__New1_fn(PointerEventData** __retval);

struct PointerEventData : uObject
{
    bool IsPrimary;
    int PointerType;
    int PointIndex;
    double Timestamp;
    ::g::Uno::Float2 WheelDelta;
    int WheelDeltaMode;
    ::g::Uno::Float2 WindowPoint;

    void ctor_();
    static PointerEventData* New1();
};
// }

}}} // ::g::Fuse::Input
