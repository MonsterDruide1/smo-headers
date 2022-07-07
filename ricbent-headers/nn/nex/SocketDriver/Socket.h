#pragma once

namespace nn { namespace nex { namespace SocketDriver { 

class Socket
{
public:
    IsReadyToDelete() const;
    DoWork();
    SetUri(nn::nex::String const&);
    CloseForTest();
    SetMulticastAddress(unsigned int);
    Listen();
    IsListening() const;
    Accept(nn::nex::SocketDriver::InetAddress*, nn::nex::SocketDriver::Socket**);
    Recv(unsigned char*, unsigned long, unsigned long*, nn::nex::SocketDriver::_SocketFlag);
    SetTTL(unsigned char);
    GetRawSocketHandle() const;
    GetClassNameString() const;
    ~Socket();
};

} } } 
