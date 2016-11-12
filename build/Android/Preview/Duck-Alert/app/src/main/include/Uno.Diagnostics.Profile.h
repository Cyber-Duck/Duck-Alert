// This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/diagnostics/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Diagnostics{struct Profile;}}}

namespace g{
namespace Uno{
namespace Diagnostics{

// public static class Profile :294
// {
uClassType* Profile_typeof();

struct Profile : uObject
{
    static double StartTimeStamp_;
    static double& StartTimeStamp() { return StartTimeStamp_; }
};
// }

}}} // ::g::Uno::Diagnostics
