// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/fusejs/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Http__FuseJSHttpRequest;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandlerRequest;}}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// private sealed class Http.FuseJSHttpRequest :566
// {
uType* Http__FuseJSHttpRequest_typeof();
void Http__FuseJSHttpRequest__ctor__fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Context* context, ::g::Uno::Net::Http::HttpMessageHandlerRequest* req);
void Http__FuseJSHttpRequest__EnableCache_fn(Http__FuseJSHttpRequest* __this, uArray* args, uObject** __retval);
void Http__FuseJSHttpRequest__GetResponseContentByteArray_fn(Http__FuseJSHttpRequest* __this, uArray* args, uObject** __retval);
void Http__FuseJSHttpRequest__GetResponseReasonPhrase_fn(Http__FuseJSHttpRequest* __this, uArray* args, uObject** __retval);
void Http__FuseJSHttpRequest__GetResponseType_fn(Http__FuseJSHttpRequest* __this, uArray* args, uObject** __retval);
void Http__FuseJSHttpRequest__GetState_fn(Http__FuseJSHttpRequest* __this, uArray* args, uObject** __retval);
void Http__FuseJSHttpRequest__New1_fn(::g::Fuse::Scripting::Context* context, ::g::Uno::Net::Http::HttpMessageHandlerRequest* req, Http__FuseJSHttpRequest** __retval);
void Http__FuseJSHttpRequest__get_Obj_fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Object** __retval);
void Http__FuseJSHttpRequest__set_Obj_fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Object* value);
void Http__FuseJSHttpRequest__OnAbort_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res);
void Http__FuseJSHttpRequest__OnDone_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res);
void Http__FuseJSHttpRequest__OnError_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res, uString* error);
void Http__FuseJSHttpRequest__OnProgress_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res, int* current, int* total, bool* hastotal);
void Http__FuseJSHttpRequest__OnStateChanged_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res);
void Http__FuseJSHttpRequest__OnTimeout_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res);
void Http__FuseJSHttpRequest__SendAsync_fn(Http__FuseJSHttpRequest* __this, uArray* args, uObject** __retval);
void Http__FuseJSHttpRequest__SetResponseType_fn(Http__FuseJSHttpRequest* __this, uArray* args, uObject** __retval);

struct Http__FuseJSHttpRequest : uObject
{
    uStrong< ::g::Uno::Net::Http::HttpMessageHandlerRequest*> _req;
    uStrong< ::g::Fuse::Scripting::Object*> _Obj;

    void ctor_(::g::Fuse::Scripting::Context* context, ::g::Uno::Net::Http::HttpMessageHandlerRequest* req);
    uObject* EnableCache(uArray* args);
    uObject* GetResponseContentByteArray(uArray* args);
    uObject* GetResponseReasonPhrase(uArray* args);
    uObject* GetResponseType(uArray* args);
    uObject* GetState(uArray* args);
    ::g::Fuse::Scripting::Object* Obj();
    void Obj(::g::Fuse::Scripting::Object* value);
    void OnAbort(::g::Uno::Net::Http::HttpMessageHandlerRequest* res);
    void OnDone(::g::Uno::Net::Http::HttpMessageHandlerRequest* res);
    void OnError(::g::Uno::Net::Http::HttpMessageHandlerRequest* res, uString* error);
    void OnProgress(::g::Uno::Net::Http::HttpMessageHandlerRequest* res, int current, int total, bool hastotal);
    void OnStateChanged(::g::Uno::Net::Http::HttpMessageHandlerRequest* res);
    void OnTimeout(::g::Uno::Net::Http::HttpMessageHandlerRequest* res);
    uObject* SendAsync(uArray* args);
    uObject* SetResponseType(uArray* args);
    static Http__FuseJSHttpRequest* New1(::g::Fuse::Scripting::Context* context, ::g::Uno::Net::Http::HttpMessageHandlerRequest* req);
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
