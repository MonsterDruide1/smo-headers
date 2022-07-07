#pragma once

namespace nn { namespace nex { 

class Socket
{
public:
    Socket(nn::nex::TransportProtocol::Type, unsigned int);
    ~Socket();
    Close();
    Open();
    Bind(nn::nex::InetAddress*, bool);
    SetTTL(unsigned char);
    ProcessDriverSocketResult(nn::nex::SocketDriver::_Result, nn::nex::IOCompletionContext*);
    Connect(nn::nex::InetAddress const&);
    Listen();
    DoWork();
    Poll(nn::nex::Socket::PollEvent, nn::nex::Socket::PollEvent*, unsigned int);
    GetAddress();
    AcquireAcceptedSocket(nn::nex::InetAddress const&);
    ReleaseAcceptedSocket(nn::nex::InetAddress const&);
    Shutdown();
    Send(unsigned char const*, unsigned long, nn::nex::InetAddress const&);
    Send(nn::nex::Buffer const&, nn::nex::InetAddress const&);
    RecvImpl(unsigned char*, unsigned long, unsigned long*, nn::nex::InetAddress*, nn::nex::SocketDriver::_SocketFlag);
    Recv(unsigned char*, unsigned long, unsigned long*, nn::nex::InetAddress*);
    RecvNonBlock(unsigned char*, unsigned long, unsigned long*, nn::nex::InetAddress*);
    Recv(nn::nex::Buffer*, nn::nex::InetAddress*);
    RecvNonBlock(nn::nex::Buffer*, nn::nex::InetAddress*);
    GetIOResult(nn::nex::IOCompletionContext*);
    GetBoundPort();
    SetMulticastAddress(unsigned int);
    Trace(unsigned long);
    SOCKET_SUCCESS;
    SOCKET_ERR;
    DEFAULT_TRANSPORT_PROTOCOL_TYPE;
    s_pDefaultUdpSocketDriver;
    s_pDefaultTcpSocketDriver;
    s_pDefaultWebSocketDriver;
    s_numAcceptableSockets;
    s_pSocketDrivers;
};

} } 
