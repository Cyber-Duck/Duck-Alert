// This file was generated based on /usr/local/share/uno/Packages/Experimental.Http/0.40.8/internal/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Experimental{namespace Http{namespace Internal{struct DateUtil;}}}}

namespace g{
namespace Experimental{
namespace Http{
namespace Internal{

// internal static class DateUtil :7
// {
uClassType* DateUtil_typeof();
void DateUtil__get_TimestampNow_fn(int* __retval);

struct DateUtil : uObject
{
    static int TimestampNow();
};
// }

}}}} // ::g::Experimental::Http::Internal
