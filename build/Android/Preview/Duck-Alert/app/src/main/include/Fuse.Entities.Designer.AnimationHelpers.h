// This file was generated based on /usr/local/share/uno/Packages/Fuse.Entities/0.40.8/designer/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Entities{namespace Designer{struct AnimationHelpers;}}}}

namespace g{
namespace Fuse{
namespace Entities{
namespace Designer{

// public static class AnimationHelpers :7
// {
uClassType* AnimationHelpers_typeof();
void AnimationHelpers__Sample_fn(uArray* times, uArray* leftValues, uArray* rightValues, uArray* easing, uArray* leftTangents, uArray* rightTangents, double* time, float* __retval);

struct AnimationHelpers : uObject
{
    static float Sample(uArray* times, uArray* leftValues, uArray* rightValues, uArray* easing, uArray* leftTangents, uArray* rightTangents, double time);
};
// }

}}}} // ::g::Fuse::Entities::Designer
