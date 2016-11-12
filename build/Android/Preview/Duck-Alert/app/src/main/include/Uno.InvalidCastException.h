// This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/exceptions/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Uno{struct InvalidCastException;}}

namespace g{
namespace Uno{

// public sealed class InvalidCastException :226
// {
::g::Uno::Exception_type* InvalidCastException_typeof();
void InvalidCastException__ctor_3_fn(InvalidCastException* __this);
void InvalidCastException__New4_fn(InvalidCastException** __retval);

struct InvalidCastException : ::g::Uno::Exception
{
    void ctor_3();
    static InvalidCastException* New4();
};
// }

}} // ::g::Uno
