// This file was generated based on /usr/local/share/uno/Packages/Experimental.Http/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Experimental{namespace Http{struct LoaderConst;}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandler;}}}}

namespace g{
namespace Experimental{
namespace Http{

// internal static class LoaderConst :701
// {
uClassType* LoaderConst_typeof();

struct LoaderConst : uObject
{
    static uSStrong< ::g::Uno::Net::Http::HttpMessageHandler*> Handler_;
    static uSStrong< ::g::Uno::Net::Http::HttpMessageHandler*>& Handler() { return Handler_; }
};
// }

}}} // ::g::Experimental::Http
