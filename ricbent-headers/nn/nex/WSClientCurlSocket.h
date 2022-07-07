#pragma once

namespace nn { namespace nex { 

class WSClientCurlSocket
{
public:
    Recv(void*, unsigned long, unsigned long*);
    Send(void const*, unsigned long, unsigned long*);
    Init(nn::nex::WSSConfig const*);
    Connect(nn::nex::String const&);
    PushRecvBuffer(void const*, unsigned long);
    WSClientCurlSocket(unsigned long);
    ~WSClientCurlSocket();
    StaticSocketOptCallback(void*, int, curlsocktype);
    SocketOptCallback(int, curlsocktype);
    StaticCurlSslContextCallback(void*, void*, void*);
};

} } 
