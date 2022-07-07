#pragma once

namespace nn { namespace nex { namespace BerkeleySocketDriver { 

class BerkeleySocket
{
public:
    BerkeleySocket();
    BerkeleySocket(nn::nex::BerkeleySocketDriver::BerkeleySocket const&, int);
    ~BerkeleySocket();
    Open(nn::nex::TransportProtocol::Type);
    SetAsync(bool);
    SetBroadcastMode(bool);
    Bind(unsigned short&);
    LastSocketErrorToResult(char const*, long);
    GetLastSocketError(long);
    RecvFrom(unsigned char*, unsigned long, nn::nex::SocketDriver::InetAddress*, unsigned long*, nn::nex::SocketDriver::_SocketFlag);
    SendTo(unsigned char const*, unsigned long, nn::nex::SocketDriver::InetAddress const&, unsigned long*);
    SendToMulti(unsigned char*, unsigned long);
    Connect(nn::nex::SocketDriver::InetAddress const&);
    RunConnectThread(nn::nex::BerkeleySocketDriver::BerkeleySocket*);
    Listen();
    IsListening() const;
    Accept(nn::nex::SocketDriver::InetAddress*, nn::nex::SocketDriver::Socket**);
    Recv(unsigned char*, unsigned long, unsigned long*, nn::nex::SocketDriver::_SocketFlag);
    Send(unsigned char const*, unsigned long, unsigned long*);
    Close();
    CloseForTest();
    Shutdown();
    SetMulticastAddress(unsigned int);
    SetTTL(unsigned char);
    IsAcceptedSocket() const;
    GetRawSocketHandle() const;
    GetClassNameString() const;
};

} } } 
