#pragma once

namespace nn { namespace nex { namespace ClientWebSocketDriver { 

class ClientWebSocket
{
public:
    ClientWebSocket();
    ~ClientWebSocket();
    Open(nn::nex::TransportProtocol::Type);
    Bind(unsigned short&);
    DoWork();
    RecvFrom(unsigned char*, unsigned long, nn::nex::SocketDriver::InetAddress*, unsigned long*, nn::nex::SocketDriver::_SocketFlag);
    SendTo(unsigned char const*, unsigned long, nn::nex::SocketDriver::InetAddress const&, unsigned long*);
    Connect(nn::nex::SocketDriver::InetAddress const&);
    Listen();
    IsListening() const;
    Accept(nn::nex::SocketDriver::InetAddress*, nn::nex::SocketDriver::Socket**);
    Recv(unsigned char*, unsigned long, unsigned long*, nn::nex::SocketDriver::_SocketFlag);
    Send(unsigned char const*, unsigned long, unsigned long*);
    Close();
    Shutdown();
    SetTTL(unsigned char);
    GetRawSocketHandle() const;
    SetAsync(bool);
    IsAcceptedSocket() const;
    GetClassNameString() const;
    SetUri(nn::nex::String const&);
};

} } } 
