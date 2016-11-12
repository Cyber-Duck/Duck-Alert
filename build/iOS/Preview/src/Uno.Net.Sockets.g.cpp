// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <errno.h>
#include <netdb.h>
#include <netinet/in.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>
#include <Uno.ArgumentException.h>
#include <Uno.ArgumentOutOfRangeException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.IO.SeekOrigin.h>
#include <Uno.Long.h>
#include <Uno.Net.EndPoint.h>
#include <Uno.Net.IPAddress.h>
#include <Uno.Net.IPEndPoint.h>
#include <Uno.Net.NetworkHelpers.h>
#include <Uno.Net.Sockets.AddressFamily.h>
#include <Uno.Net.Sockets.NetworkStream.h>
#include <Uno.Net.Sockets.ProtocolType.h>
#include <Uno.Net.Sockets.SelectMode.h>
#include <Uno.Net.Sockets.Socket.h>
#include <Uno.Net.Sockets.Socket.SocketHandle.h>
#include <Uno.Net.Sockets.SocketException.h>
#include <Uno.Net.Sockets.SocketFlags.h>
#include <Uno.Net.Sockets.SocketHelpers.h>
#include <Uno.Net.Sockets.SocketShutdown.h>
#include <Uno.Net.Sockets.SocketType.h>
#include <Uno.String.h>
static uString* STRINGS[4];
static uType* TYPES[1];

namespace g{
namespace Uno{
namespace Net{
namespace Sockets{

// /usr/local/share/uno/Packages/Uno.Net.Sockets/0.40.2/$.uno
// ----------------------------------------------------------

// public enum AddressFamily :425
uEnumType* AddressFamily_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Net.Sockets.AddressFamily", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "InterNetwork", 2LL,
        "InterNetworkV6", 23LL);
    return type;
}

// /usr/local/share/uno/Packages/Uno.Net.Sockets/0.40.2/$.uno
// ----------------------------------------------------------

// public sealed class NetworkStream :348
// {
static void NetworkStream_build(uType* type)
{
    ::STRINGS[0] = uString::Const("sent != byteCount");
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::IO::Stream_type, interface0));
    type->SetFields(0,
        ::g::Uno::Net::Sockets::Socket_typeof(), offsetof(::g::Uno::Net::Sockets::NetworkStream, _socket), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NetworkStream__New1_fn, 0, true, NetworkStream_typeof(), 1, ::g::Uno::Net::Sockets::Socket_typeof()));
}

::g::Uno::IO::Stream_type* NetworkStream_typeof()
{
    static uSStrong< ::g::Uno::IO::Stream_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::IO::Stream_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NetworkStream);
    options.TypeSize = sizeof(::g::Uno::IO::Stream_type);
    type = (::g::Uno::IO::Stream_type*)uClassType::New("Uno.Net.Sockets.NetworkStream", options);
    type->fp_build_ = NetworkStream_build;
    type->fp_get_CanRead = (void(*)(::g::Uno::IO::Stream*, bool*))NetworkStream__get_CanRead_fn;
    type->fp_get_CanSeek = (void(*)(::g::Uno::IO::Stream*, bool*))NetworkStream__get_CanSeek_fn;
    type->fp_get_CanWrite = (void(*)(::g::Uno::IO::Stream*, bool*))NetworkStream__get_CanWrite_fn;
    type->fp_Flush = (void(*)(::g::Uno::IO::Stream*))NetworkStream__Flush_fn;
    type->fp_get_Length = (void(*)(::g::Uno::IO::Stream*, int64_t*))NetworkStream__get_Length_fn;
    type->fp_get_Position = (void(*)(::g::Uno::IO::Stream*, int64_t*))NetworkStream__get_Position_fn;
    type->fp_set_Position = (void(*)(::g::Uno::IO::Stream*, int64_t*))NetworkStream__set_Position_fn;
    type->fp_Read = (void(*)(::g::Uno::IO::Stream*, uArray*, int*, int*, int*))NetworkStream__Read_fn;
    type->fp_Seek = (void(*)(::g::Uno::IO::Stream*, int64_t*, int*, int64_t*))NetworkStream__Seek_fn;
    type->fp_SetLength = (void(*)(::g::Uno::IO::Stream*, int64_t*))NetworkStream__SetLength_fn;
    type->fp_Write = (void(*)(::g::Uno::IO::Stream*, uArray*, int*, int*))NetworkStream__Write_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::IO::Stream__Dispose_fn;
    return type;
}

// public NetworkStream(Uno.Net.Sockets.Socket socket) :354
void NetworkStream__ctor_1_fn(NetworkStream* __this, ::g::Uno::Net::Sockets::Socket* socket)
{
    __this->ctor_1(socket);
}

// public override sealed bool get_CanRead() :374
void NetworkStream__get_CanRead_fn(NetworkStream* __this, bool* __retval)
{
    uStackFrame __("Uno.Net.Sockets.NetworkStream", "get_CanRead()");
    return *__retval = true, void();
}

// public override sealed bool get_CanSeek() :384
void NetworkStream__get_CanSeek_fn(NetworkStream* __this, bool* __retval)
{
    uStackFrame __("Uno.Net.Sockets.NetworkStream", "get_CanSeek()");
    return *__retval = false, void();
}

// public override sealed bool get_CanWrite() :379
void NetworkStream__get_CanWrite_fn(NetworkStream* __this, bool* __retval)
{
    uStackFrame __("Uno.Net.Sockets.NetworkStream", "get_CanWrite()");
    return *__retval = true, void();
}

// public override sealed void Flush() :405
void NetworkStream__Flush_fn(NetworkStream* __this)
{
}

// public override sealed long get_Length() :361
void NetworkStream__get_Length_fn(NetworkStream* __this, int64_t* __retval)
{
    uStackFrame __("Uno.Net.Sockets.NetworkStream", "get_Length()");
    return *__retval = 0LL, void();
}

// public NetworkStream New(Uno.Net.Sockets.Socket socket) :354
void NetworkStream__New1_fn(::g::Uno::Net::Sockets::Socket* socket, NetworkStream** __retval)
{
    *__retval = NetworkStream::New1(socket);
}

// public override sealed long get_Position() :366
void NetworkStream__get_Position_fn(NetworkStream* __this, int64_t* __retval)
{
    uStackFrame __("Uno.Net.Sockets.NetworkStream", "get_Position()");
    return *__retval = 0LL, void();
}

// public override sealed void set_Position(long value) :367
void NetworkStream__set_Position_fn(NetworkStream* __this, int64_t* value)
{
}

// public override sealed int Read(byte[] dst, int byteOffset, int byteCount) :387
void NetworkStream__Read_fn(NetworkStream* __this, uArray* dst, int* byteOffset, int* byteCount, int* __retval)
{
    uStackFrame __("Uno.Net.Sockets.NetworkStream", "Read(byte[],int,int)");
    int byteOffset_ = *byteOffset;
    int byteCount_ = *byteCount;
    return *__retval = uPtr(__this->_socket)->Receive2(dst, byteOffset_, byteCount_, 0), void();
}

// public override sealed long Seek(long byteOffset, Uno.IO.SeekOrigin origin) :400
void NetworkStream__Seek_fn(NetworkStream* __this, int64_t* byteOffset, int* origin, int64_t* __retval)
{
    uStackFrame __("Uno.Net.Sockets.NetworkStream", "Seek(long,Uno.IO.SeekOrigin)");
    return *__retval = 0LL, void();
}

// public override sealed void SetLength(long value) :370
void NetworkStream__SetLength_fn(NetworkStream* __this, int64_t* value)
{
}

// public override sealed void Write(byte[] src, int byteOffset, int byteCount) :392
void NetworkStream__Write_fn(NetworkStream* __this, uArray* src, int* byteOffset, int* byteCount)
{
    uStackFrame __("Uno.Net.Sockets.NetworkStream", "Write(byte[],int,int)");
    int byteOffset_ = *byteOffset;
    int byteCount_ = *byteCount;
    int sent = uPtr(__this->_socket)->Send1(src, byteOffset_, byteCount_);

    if (sent != byteCount_)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"sent != byt...*/]));
}

// public NetworkStream(Uno.Net.Sockets.Socket socket) [instance] :354
void NetworkStream::ctor_1(::g::Uno::Net::Sockets::Socket* socket)
{
    uStackFrame __("Uno.Net.Sockets.NetworkStream", ".ctor(Uno.Net.Sockets.Socket)");
    ctor_();
    _socket = socket;
}

// public NetworkStream New(Uno.Net.Sockets.Socket socket) [static] :354
NetworkStream* NetworkStream::New1(::g::Uno::Net::Sockets::Socket* socket)
{
    NetworkStream* obj1 = (NetworkStream*)uNew(NetworkStream_typeof());
    obj1->ctor_1(socket);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Sockets/0.40.2/$.uno
// ----------------------------------------------------------

// public enum ProtocolType :438
uEnumType* ProtocolType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Net.Sockets.ProtocolType", ::g::Uno::Int_typeof(), 1);
    type->SetLiterals(
        "Tcp", 6LL);
    return type;
}

// /usr/local/share/uno/Packages/Uno.Net.Sockets/0.40.2/$.uno
// ----------------------------------------------------------

// public enum SelectMode :444
uEnumType* SelectMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Net.Sockets.SelectMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Read", 0LL,
        "Write", 1LL,
        "Error", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Uno.Net.Sockets/0.40.2/$.uno
// ----------------------------------------------------------

// public sealed class Socket :677
// {
// ~Socket() :960
static void Socket__Finalize_fn(Socket* __this)
{
    uStackFrame __("Uno.Net.Sockets.Socket", "Finalize()");
    __this->Dispose1(false);
}

static void Socket_build(uType* type)
{
    ::STRINGS[1] = uString::Const("EndPoint not supported: ");
    ::STRINGS[2] = uString::Const("Offset and length out of range");
    ::STRINGS[3] = uString::Const("Not connected!");
    ::TYPES[0] = ::g::Uno::Net::IPEndPoint_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Socket_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Net::Sockets::Socket, _connected), 0,
        Socket__SocketHandle_typeof(), offsetof(::g::Uno::Net::Sockets::Socket, _handle), 0,
        ::g::Uno::Net::EndPoint_typeof(), offsetof(::g::Uno::Net::Sockets::Socket, _localEndPoint), 0,
        ::g::Uno::Net::EndPoint_typeof(), offsetof(::g::Uno::Net::Sockets::Socket, _remoteEndPoint), 0);
    type->Reflection.SetFunctions(8,
        new uFunction("Close", NULL, (void*)Socket__Close_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Connect", NULL, (void*)Socket__Connect1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Net::EndPoint_typeof()),
        new uFunction("Dispose", NULL, (void*)Socket__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Socket__New1_fn, 0, true, Socket_typeof(), 3, ::g::Uno::Net::Sockets::AddressFamily_typeof(), ::g::Uno::Net::Sockets::SocketType_typeof(), ::g::Uno::Net::Sockets::ProtocolType_typeof()),
        new uFunction("Poll", NULL, (void*)Socket__Poll_fn, 0, false, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Net::Sockets::SelectMode_typeof()),
        new uFunction("Receive", NULL, (void*)Socket__Receive2_fn, 0, false, ::g::Uno::Int_typeof(), 4, ::g::Uno::Byte_typeof()->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Net::Sockets::SocketFlags_typeof()),
        new uFunction("Send", NULL, (void*)Socket__Send1_fn, 0, false, ::g::Uno::Int_typeof(), 3, ::g::Uno::Byte_typeof()->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("Shutdown", NULL, (void*)Socket__Shutdown_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Net::Sockets::SocketShutdown_typeof()));
}

Socket_type* Socket_typeof()
{
    static uSStrong<Socket_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Socket);
    options.TypeSize = sizeof(Socket_type);
    type = (Socket_type*)uClassType::New("Uno.Net.Sockets.Socket", options);
    type->fp_build_ = Socket_build;
    type->fp_Finalize = (void(*)(uObject*))Socket__Finalize_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Socket__Dispose_fn;
    return type;
}

// public Socket(Uno.Net.Sockets.AddressFamily addressFamily, Uno.Net.Sockets.SocketType socketType, Uno.Net.Sockets.ProtocolType protocolType) :690
void Socket__ctor__fn(Socket* __this, int* addressFamily, int* socketType, int* protocolType)
{
    __this->ctor_(*addressFamily, *socketType, *protocolType);
}

// public void Close() :931
void Socket__Close_fn(Socket* __this)
{
    __this->Close();
}

// public void Connect(Uno.Net.EndPoint endPoint) :772
void Socket__Connect1_fn(Socket* __this, ::g::Uno::Net::EndPoint* endPoint)
{
    __this->Connect1(endPoint);
}

// public void Dispose() :955
void Socket__Dispose_fn(Socket* __this)
{
    __this->Dispose();
}

// protected void Dispose(bool disposing) :936
void Socket__Dispose1_fn(Socket* __this, bool* disposing)
{
    __this->Dispose1(*disposing);
}

// public Socket New(Uno.Net.Sockets.AddressFamily addressFamily, Uno.Net.Sockets.SocketType socketType, Uno.Net.Sockets.ProtocolType protocolType) :690
void Socket__New1_fn(int* addressFamily, int* socketType, int* protocolType, Socket** __retval)
{
    *__retval = Socket::New1(*addressFamily, *socketType, *protocolType);
}

// public bool Poll(int milliseconds, Uno.Net.Sockets.SelectMode mode) :889
void Socket__Poll_fn(Socket* __this, int* milliseconds, int* mode, bool* __retval)
{
    *__retval = __this->Poll(*milliseconds, *mode);
}

// public int Receive(byte[] buffer, int offset, int length, Uno.Net.Sockets.SocketFlags flags) :824
void Socket__Receive2_fn(Socket* __this, uArray* buffer, int* offset, int* length, int* flags, int* __retval)
{
    *__retval = __this->Receive2(buffer, *offset, *length, *flags);
}

// public int Send(byte[] buffer, int offset, int length) :806
void Socket__Send1_fn(Socket* __this, uArray* buffer, int* offset, int* length, int* __retval)
{
    *__retval = __this->Send1(buffer, *offset, *length);
}

// public void Shutdown(Uno.Net.Sockets.SocketShutdown how) :902
void Socket__Shutdown_fn(Socket* __this, int* how)
{
    __this->Shutdown(*how);
}

// private void UpdateRemoteEndPoint() :743
void Socket__UpdateRemoteEndPoint_fn(Socket* __this)
{
    __this->UpdateRemoteEndPoint();
}

// public Socket(Uno.Net.Sockets.AddressFamily addressFamily, Uno.Net.Sockets.SocketType socketType, Uno.Net.Sockets.ProtocolType protocolType) [instance] :690
void Socket::ctor_(int addressFamily, int socketType, int protocolType)
{
    uStackFrame __("Uno.Net.Sockets.Socket", ".ctor(Uno.Net.Sockets.AddressFamily,Uno.Net.Sockets.SocketType,Uno.Net.Sockets.ProtocolType)");
    int family = ::g::Uno::Net::Sockets::SocketHelpers::GetFamily(addressFamily);
    int type = ::g::Uno::Net::Sockets::SocketHelpers::GetType1(socketType);
    int protocol = ::g::Uno::Net::Sockets::SocketHelpers::GetProtocol(protocolType);
    _handle = socket(family, type, protocol);

    if (_handle < 0)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::Net::NetworkHelpers::GetError()));
}

// public void Close() [instance] :931
void Socket::Close()
{
    uStackFrame __("Uno.Net.Sockets.Socket", "Close()");
    Dispose();
}

// public void Connect(Uno.Net.EndPoint endPoint) [instance] :772
void Socket::Connect1(::g::Uno::Net::EndPoint* endPoint)
{
    uStackFrame __("Uno.Net.Sockets.Socket", "Connect(Uno.Net.EndPoint)");
    ::g::Uno::Net::IPEndPoint* ipEndPoint = uAs< ::g::Uno::Net::IPEndPoint*>(endPoint, ::TYPES[0/*Uno.Net.IPEndPoint*/]);

    if (ipEndPoint != NULL)
    {
        int result = ::g::Uno::Net::Sockets::SocketHelpers::Connect(_handle, ::g::Uno::Net::Sockets::SocketHelpers::GetFamily(uPtr(ipEndPoint)->AddressFamily()), uPtr(uPtr(ipEndPoint)->Address())->GetAddressBytes(), uPtr(uPtr(ipEndPoint)->Address())->ScopeId(), uPtr(ipEndPoint)->Port());

        if (result < 0)
            U_THROW(::g::Uno::Net::Sockets::SocketException::New4(::g::Uno::Net::NetworkHelpers::GetError()));

        _localEndPoint = ::g::Uno::Net::Sockets::SocketHelpers::GetLocalEndPoint(_handle);

        if (_localEndPoint == NULL)
            U_THROW(::g::Uno::Net::Sockets::SocketException::New4(::g::Uno::Net::NetworkHelpers::GetError()));
    }
    else 
        U_THROW(::g::Uno::ArgumentException::New4(::g::Uno::String::op_Addition1(::STRINGS[1/*"EndPoint no...*/], endPoint)));

    UpdateRemoteEndPoint();
    _connected = true;
}

// public void Dispose() [instance] :955
void Socket::Dispose()
{
    uStackFrame __("Uno.Net.Sockets.Socket", "Dispose()");
    Dispose1(true);
}

// protected void Dispose(bool disposing) [instance] :936
void Socket::Dispose1(bool disposing)
{
    uStackFrame __("Uno.Net.Sockets.Socket", "Dispose(bool)");
    bool disposing_ = disposing;

    if (!disposing_)
        return;

    int result;
    result = close(_handle);

    if (result < 0)
        U_THROW(::g::Uno::Net::Sockets::SocketException::New4(::g::Uno::Net::NetworkHelpers::GetError()));
}

// public bool Poll(int milliseconds, Uno.Net.Sockets.SelectMode mode) [instance] :889
bool Socket::Poll(int milliseconds, int mode)
{
    uStackFrame __("Uno.Net.Sockets.Socket", "Poll(int,Uno.Net.Sockets.SelectMode)");
    int result = ::g::Uno::Net::Sockets::SocketHelpers::Poll(_handle, milliseconds, mode);

    if (result < 0)
        U_THROW(::g::Uno::Net::Sockets::SocketException::New4(::g::Uno::Net::NetworkHelpers::GetError()));

    return result > 0;
}

// public int Receive(byte[] buffer, int offset, int length, Uno.Net.Sockets.SocketFlags flags) [instance] :824
int Socket::Receive2(uArray* buffer, int offset, int length, int flags)
{
    uStackFrame __("Uno.Net.Sockets.Socket", "Receive(byte[],int,int,Uno.Net.Sockets.SocketFlags)");

    if ((offset + length) > uPtr(buffer)->Length())
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[2/*"Offset and ...*/]));

    int ret = recv(_handle, (char *)buffer->Ptr() + offset, length, 0);

    if (ret < 0)
        U_THROW(::g::Uno::Net::Sockets::SocketException::New4(::g::Uno::Net::NetworkHelpers::GetError()));

    return ret;
}

// public int Send(byte[] buffer, int offset, int length) [instance] :806
int Socket::Send1(uArray* buffer, int offset, int length)
{
    uStackFrame __("Uno.Net.Sockets.Socket", "Send(byte[],int,int)");
    int ret = send(_handle, (char *)buffer->Ptr() + offset, length, 0);

    if (ret < 0)
        U_THROW(::g::Uno::Net::Sockets::SocketException::New4(::g::Uno::Net::NetworkHelpers::GetError()));

    return ret;
}

// public void Shutdown(Uno.Net.Sockets.SocketShutdown how) [instance] :902
void Socket::Shutdown(int how)
{
    uStackFrame __("Uno.Net.Sockets.Socket", "Shutdown(Uno.Net.Sockets.SocketShutdown)");

    if (!_connected)
        U_THROW(::g::Uno::Net::Sockets::SocketException::New4(::STRINGS[3/*"Not connect...*/]));

    int result = ::g::Uno::Net::Sockets::SocketHelpers::Shutdown(_handle, ::g::Uno::Net::Sockets::SocketHelpers::GetSocketShudown(how));

    if (result < 0)
        U_THROW(::g::Uno::Net::Sockets::SocketException::New4(::g::Uno::Net::NetworkHelpers::GetError()));

    _connected = false;
}

// private void UpdateRemoteEndPoint() [instance] :743
void Socket::UpdateRemoteEndPoint()
{
    uStackFrame __("Uno.Net.Sockets.Socket", "UpdateRemoteEndPoint()");
    _remoteEndPoint = ::g::Uno::Net::Sockets::SocketHelpers::GetRemoteEndPoint(_handle);

    if (_remoteEndPoint == NULL)
        U_THROW(::g::Uno::Net::Sockets::SocketException::New4(::g::Uno::Net::NetworkHelpers::GetError()));
}

// public Socket New(Uno.Net.Sockets.AddressFamily addressFamily, Uno.Net.Sockets.SocketType socketType, Uno.Net.Sockets.ProtocolType protocolType) [static] :690
Socket* Socket::New1(int addressFamily, int socketType, int protocolType)
{
    Socket* obj1 = (Socket*)uNew(Socket_typeof());
    obj1->ctor_(addressFamily, socketType, protocolType);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Sockets/0.40.2/$.uno
// ----------------------------------------------------------

// public sealed class SocketException :967
// {
static void SocketException_build(uType* type)
{
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)SocketException__New4_fn, 0, true, SocketException_typeof(), 1, ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* SocketException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(SocketException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.Net.Sockets.SocketException", options);
    type->fp_build_ = SocketException_build;
    return type;
}

// public SocketException(string message) :969
void SocketException__ctor_3_fn(SocketException* __this, uString* message)
{
    __this->ctor_3(message);
}

// public SocketException New(string message) :969
void SocketException__New4_fn(uString* message, SocketException** __retval)
{
    *__retval = SocketException::New4(message);
}

// public SocketException(string message) [instance] :969
void SocketException::ctor_3(uString* message)
{
    ctor_1(message);
}

// public SocketException New(string message) [static] :969
SocketException* SocketException::New4(uString* message)
{
    SocketException* obj1 = (SocketException*)uNew(SocketException_typeof());
    obj1->ctor_3(message);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Sockets/0.40.2/$.uno
// ----------------------------------------------------------

// public enum SocketFlags :461
uEnumType* SocketFlags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Net.Sockets.SocketFlags", ::g::Uno::Int_typeof(), 1);
    type->SetLiterals(
        "None", 0LL);
    return type;
}

// /usr/local/share/uno/Packages/Uno.Net.Sockets/0.40.2/$.uno
// ----------------------------------------------------------

// internal extern struct Socket.SocketHandle :684
// {
static void Socket__SocketHandle_build(uType* type)
{
}

uStructType* Socket__SocketHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(int);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Net.Sockets.Socket.SocketHandle", options);
    type->fp_build_ = Socket__SocketHandle_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Sockets/0.40.2/$.uno
// ----------------------------------------------------------

// internal sealed extern class SocketHelpers :472
// {
static void SocketHelpers_build(uType* type)
{
}

uType* SocketHelpers_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(SocketHelpers);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Sockets.SocketHelpers", options);
    type->fp_build_ = SocketHelpers_build;
    return type;
}

// public static int Connect(Uno.Net.Sockets.Socket.SocketHandle sock, int family, byte[] address, long scopeId, int port) :559
void SocketHelpers__Connect_fn(int* sock, int* family, uArray* address, int64_t* scopeId, int* port, int* __retval)
{
    *__retval = SocketHelpers::Connect(*sock, *family, address, *scopeId, *port);
}

// public static int GetFamily(Uno.Net.Sockets.AddressFamily addressFamily) :474
void SocketHelpers__GetFamily_fn(int* addressFamily, int* __retval)
{
    *__retval = SocketHelpers::GetFamily(*addressFamily);
}

// public static Uno.Net.IPEndPoint GetLocalEndPoint(Uno.Net.Sockets.Socket.SocketHandle sock) :513
void SocketHelpers__GetLocalEndPoint_fn(int* sock, ::g::Uno::Net::IPEndPoint** __retval)
{
    *__retval = SocketHelpers::GetLocalEndPoint(*sock);
}

// public static int GetProtocol(Uno.Net.Sockets.ProtocolType protocolType) :493
void SocketHelpers__GetProtocol_fn(int* protocolType, int* __retval)
{
    *__retval = SocketHelpers::GetProtocol(*protocolType);
}

// public static Uno.Net.IPEndPoint GetRemoteEndPoint(Uno.Net.Sockets.Socket.SocketHandle sock) :538
void SocketHelpers__GetRemoteEndPoint_fn(int* sock, ::g::Uno::Net::IPEndPoint** __retval)
{
    *__retval = SocketHelpers::GetRemoteEndPoint(*sock);
}

// public static int GetSocketShudown(Uno.Net.Sockets.SocketShutdown socketShutdown) :502
void SocketHelpers__GetSocketShudown_fn(int* socketShutdown, int* __retval)
{
    *__retval = SocketHelpers::GetSocketShudown(*socketShutdown);
}

// public static int GetType(Uno.Net.Sockets.SocketType socketType) :484
void SocketHelpers__GetType1_fn(int* socketType, int* __retval)
{
    *__retval = SocketHelpers::GetType1(*socketType);
}

// public static int Poll(Uno.Net.Sockets.Socket.SocketHandle sock, int milliseconds, Uno.Net.Sockets.SelectMode mode) :611
void SocketHelpers__Poll_fn(int* sock, int* milliseconds, int* mode, int* __retval)
{
    *__retval = SocketHelpers::Poll(*sock, *milliseconds, *mode);
}

// public static extern int Shutdown(Uno.Net.Sockets.Socket.SocketHandle sock, int how) :658
void SocketHelpers__Shutdown_fn(int* sock, int* how, int* __retval)
{
    *__retval = SocketHelpers::Shutdown(*sock, *how);
}

// public static int Connect(Uno.Net.Sockets.Socket.SocketHandle sock, int family, byte[] address, long scopeId, int port) [static] :559
int SocketHelpers::Connect(int sock, int family, uArray* address, int64_t scopeId, int port)
{
    uStackFrame __("Uno.Net.Sockets.SocketHelpers", "Connect(Uno.Net.Sockets.Socket.SocketHandle,int,byte[],long,int)");
    sockaddr_storage ss = { 0 };
    			socklen_t size;
    
    			if (family == AF_INET)
    			{
    				sockaddr_in *sa = (sockaddr_in *)&ss;
    				size = sizeof(*sa);
    				sa->sin_family = family;
    				sa->sin_port = htons(port);
    				memcpy(&sa->sin_addr.s_addr, address->Ptr(), 4);
    			}
    			else
    			{
    				sockaddr_in6 *sa = (sockaddr_in6 *)&ss;
    				size = sizeof(*sa);
    				sa->sin6_family = family;
    				sa->sin6_port = htons(port);
    				memcpy(&sa->sin6_addr, address->Ptr(), 16);
    				sa->sin6_scope_id = (unsigned long)scopeId;
    			}
    
    			return connect(sock, (sockaddr *)&ss, size);
}

// public static int GetFamily(Uno.Net.Sockets.AddressFamily addressFamily) [static] :474
int SocketHelpers::GetFamily(int addressFamily)
{
    uStackFrame __("Uno.Net.Sockets.SocketHelpers", "GetFamily(Uno.Net.Sockets.AddressFamily)");
    switch (addressFamily)
    			{
    				case 2: return AF_INET;
    				case 23: return AF_INET6;
    				default: U_THROW(::g::Uno::Exception::New2(uString::Utf8("Invalid value for AddressFamily")));
    			}
}

// public static Uno.Net.IPEndPoint GetLocalEndPoint(Uno.Net.Sockets.Socket.SocketHandle sock) [static] :513
::g::Uno::Net::IPEndPoint* SocketHelpers::GetLocalEndPoint(int sock)
{
    uStackFrame __("Uno.Net.Sockets.SocketHelpers", "GetLocalEndPoint(Uno.Net.Sockets.Socket.SocketHandle)");
    sockaddr_storage ss = { 0 };
    			socklen_t len = sizeof(ss);
    
    			int result = getsockname(sock, (sockaddr *)&ss, &len);
    			if (result < 0)
    				return NULL;
    
    			sockaddr_in *sa = (sockaddr_in *)&ss;
    			::g::Uno::Net::IPAddress* ipAddress;
    			if (sa->sin_family == AF_INET)
    			{
    				uArray* tmp = uArray::New(::g::Uno::Byte_typeof()->Array(), 4, &sa->sin_addr.s_addr);
    				ipAddress = ::g::Uno::Net::IPAddress::New1(tmp);
    			}
    			else
    			{
    				sockaddr_in6 *sa6 = (sockaddr_in6 *)&ss;
    				uArray* tmp = uArray::New(::g::Uno::Byte_typeof()->Array(), 16, &sa6->sin6_addr);
    				ipAddress = ::g::Uno::Net::IPAddress::New2(tmp, sa6->sin6_scope_id);
    			}
    			return ::g::Uno::Net::IPEndPoint::New1(ipAddress, ntohs(sa->sin_port));
}

// public static int GetProtocol(Uno.Net.Sockets.ProtocolType protocolType) [static] :493
int SocketHelpers::GetProtocol(int protocolType)
{
    uStackFrame __("Uno.Net.Sockets.SocketHelpers", "GetProtocol(Uno.Net.Sockets.ProtocolType)");
    switch (protocolType)
    			{
    				case 6: return IPPROTO_TCP;
    				default: U_THROW(::g::Uno::Exception::New2(uString::Utf8("Invalid value for ProtocolType")));
    			}
}

// public static Uno.Net.IPEndPoint GetRemoteEndPoint(Uno.Net.Sockets.Socket.SocketHandle sock) [static] :538
::g::Uno::Net::IPEndPoint* SocketHelpers::GetRemoteEndPoint(int sock)
{
    uStackFrame __("Uno.Net.Sockets.SocketHelpers", "GetRemoteEndPoint(Uno.Net.Sockets.Socket.SocketHandle)");
    sockaddr_storage ss = { 0 };
    			socklen_t len = sizeof(ss);
    
    			sockaddr_in *sa = (sockaddr_in *)&ss;
    			::g::Uno::Net::IPAddress* ipAddress;
    			if (sa->sin_family == AF_INET)
    			{
    				uArray* tmp = uArray::New(::g::Uno::Byte_typeof()->Array(), 4, &sa->sin_addr.s_addr);
    				ipAddress = ::g::Uno::Net::IPAddress::New1(tmp);
    			}
    			else
    			{
    				sockaddr_in6 *sa6 = (sockaddr_in6 *)&ss;
    				uArray* tmp = uArray::New(::g::Uno::Byte_typeof()->Array(), 16, &sa6->sin6_addr);
    				ipAddress = ::g::Uno::Net::IPAddress::New2(tmp, sa6->sin6_scope_id);
    			}
    			return ::g::Uno::Net::IPEndPoint::New1(ipAddress, ntohs(sa->sin_port));
}

// public static int GetSocketShudown(Uno.Net.Sockets.SocketShutdown socketShutdown) [static] :502
int SocketHelpers::GetSocketShudown(int socketShutdown)
{
    uStackFrame __("Uno.Net.Sockets.SocketHelpers", "GetSocketShudown(Uno.Net.Sockets.SocketShutdown)");
    switch (socketShutdown)
    			{
    				case 0: return SHUT_RD;
    				case 1: return SHUT_WR;
    				case 2: return SHUT_RDWR;
    				default: U_THROW(::g::Uno::Exception::New2(uString::Utf8("Invalid value for SocketShutdown")));
    			}
}

// public static int GetType(Uno.Net.Sockets.SocketType socketType) [static] :484
int SocketHelpers::GetType1(int socketType)
{
    uStackFrame __("Uno.Net.Sockets.SocketHelpers", "GetType(Uno.Net.Sockets.SocketType)");
    switch (socketType)
    			{
    				case 1: return SOCK_STREAM;
    				default: U_THROW(::g::Uno::Exception::New2(uString::Utf8("Invalid value for SocketType")));
    			}
}

// public static int Poll(Uno.Net.Sockets.Socket.SocketHandle sock, int milliseconds, Uno.Net.Sockets.SelectMode mode) [static] :611
int SocketHelpers::Poll(int sock, int milliseconds, int mode)
{
    uStackFrame __("Uno.Net.Sockets.SocketHelpers", "Poll(Uno.Net.Sockets.Socket.SocketHandle,int,Uno.Net.Sockets.SelectMode)");
    struct timeval timeout = { 0 };
    			timeout.tv_usec = milliseconds % 1000000;
    			timeout.tv_sec = milliseconds / 1000000;
    
    			fd_set fds;
    			FD_ZERO(&fds);
    			FD_SET(sock, &fds);
    
    			switch (mode)
    			{
    				case 0:  return select(sock + 1, &fds, NULL, NULL, &timeout);
    				case 1: return select(sock + 1, NULL, &fds, NULL, &timeout);
    				case 2: return select(sock + 1, NULL, NULL, &fds, &timeout);
    				default: U_THROW(::g::Uno::Exception::New2(uString::Utf8("Invalid value for ProtocolType")));
    			}
}

// public static extern int Shutdown(Uno.Net.Sockets.Socket.SocketHandle sock, int how) [static] :658
int SocketHelpers::Shutdown(int sock, int how)
{
    uStackFrame __("Uno.Net.Sockets.SocketHelpers", "Shutdown(Uno.Net.Sockets.Socket.SocketHandle,int)");
    int result = shutdown(sock, how);
    			if (result < 0 && errno == ENOTCONN)
    				return 0;
    			return result;
}
// }

// /usr/local/share/uno/Packages/Uno.Net.Sockets/0.40.2/$.uno
// ----------------------------------------------------------

// public enum SocketShutdown :452
uEnumType* SocketShutdown_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Net.Sockets.SocketShutdown", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Receive", 0LL,
        "Send", 1LL,
        "Both", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Uno.Net.Sockets/0.40.2/$.uno
// ----------------------------------------------------------

// public enum SocketType :432
uEnumType* SocketType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Net.Sockets.SocketType", ::g::Uno::Int_typeof(), 1);
    type->SetLiterals(
        "Stream", 1LL);
    return type;
}

}}}} // ::g::Uno::Net::Sockets
