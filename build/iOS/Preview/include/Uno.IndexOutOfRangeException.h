// This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/exceptions/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Uno{struct IndexOutOfRangeException;}}

namespace g{
namespace Uno{

// public sealed class IndexOutOfRangeException :209
// {
::g::Uno::Exception_type* IndexOutOfRangeException_typeof();
void IndexOutOfRangeException__ctor_3_fn(IndexOutOfRangeException* __this);
void IndexOutOfRangeException__New4_fn(IndexOutOfRangeException** __retval);

struct IndexOutOfRangeException : ::g::Uno::Exception
{
    void ctor_3();
    static IndexOutOfRangeException* New4();
};
// }

}} // ::g::Uno
