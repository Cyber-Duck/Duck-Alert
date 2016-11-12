// This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/runtime/implementation/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Runtime{namespace Implementation{struct DebugImpl;}}}}

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{

// internal static class DebugImpl :582
// {
uClassType* DebugImpl_typeof();
void DebugImpl__Log_fn(uString* message, int* type);

struct DebugImpl : uObject
{
    static void Log(uString* message, int type);
};
// }

}}}} // ::g::Uno::Runtime::Implementation
