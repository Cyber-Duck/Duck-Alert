// This file was generated based on /usr/local/share/uno/Packages/Uno.Net.Sockets/0.40.2/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Sockets{struct Socket;}}}}
namespace g{namespace Uno{namespace Net{struct EndPoint;}}}

namespace g{
namespace Uno{
namespace Net{
namespace Sockets{

// public sealed class Socket :677
// {
struct Socket_type : uType
{
    ::g::Uno::IDisposable interface0;
};

Socket_type* Socket_typeof();
void Socket__ctor__fn(Socket* __this, int* addressFamily, int* socketType, int* protocolType);
void Socket__Close_fn(Socket* __this);
void Socket__Connect1_fn(Socket* __this, ::g::Uno::Net::EndPoint* endPoint);
void Socket__Dispose_fn(Socket* __this);
void Socket__Dispose1_fn(Socket* __this, bool* disposing);
void Socket__New1_fn(int* addressFamily, int* socketType, int* protocolType, Socket** __retval);
void Socket__Poll_fn(Socket* __this, int* milliseconds, int* mode, bool* __retval);
void Socket__Receive2_fn(Socket* __this, uArray* buffer, int* offset, int* length, int* flags, int* __retval);
void Socket__Send1_fn(Socket* __this, uArray* buffer, int* offset, int* length, int* __retval);
void Socket__Shutdown_fn(Socket* __this, int* how);
void Socket__UpdateRemoteEndPoint_fn(Socket* __this);

struct Socket : uObject
{
    bool _connected;
    int _handle;
    uStrong< ::g::Uno::Net::EndPoint*> _localEndPoint;
    uStrong< ::g::Uno::Net::EndPoint*> _remoteEndPoint;

    void ctor_(int addressFamily, int socketType, int protocolType);
    void Close();
    void Connect1(::g::Uno::Net::EndPoint* endPoint);
    void Dispose();
    void Dispose1(bool disposing);
    bool Poll(int milliseconds, int mode);
    int Receive2(uArray* buffer, int offset, int length, int flags);
    int Send1(uArray* buffer, int offset, int length);
    void Shutdown(int how);
    void UpdateRemoteEndPoint();
    static Socket* New1(int addressFamily, int socketType, int protocolType);
};
// }

}}}} // ::g::Uno::Net::Sockets
