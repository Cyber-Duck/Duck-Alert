// This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/graphics/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Graphics{struct VertexAttributeTypeHelpers;}}}

namespace g{
namespace Uno{
namespace Graphics{

// public static class VertexAttributeTypeHelpers :1591
// {
uClassType* VertexAttributeTypeHelpers_typeof();
void VertexAttributeTypeHelpers__GetStrideInBytes_fn(int* type, int* __retval);

struct VertexAttributeTypeHelpers : uObject
{
    static int GetStrideInBytes(int type);
};
// }

}}} // ::g::Uno::Graphics
