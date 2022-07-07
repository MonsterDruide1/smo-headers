#pragma once

namespace nn { namespace nex { 

class ConnectionOrientedSocketManager
{
public:
    PrepareToConnect();
    AddSocket(nn::nex::InetAddress const&, nn::nex::SharedPtr<nn::nex::SocketDriver::Socket> const&);
    PrepareToListen(unsigned long);
    DoWork();
    RemoveSocket(nn::nex::SharedPtr<nn::nex::SocketDriver::Socket>);
    AcquireAcceptedSocket(nn::nex::InetAddress const&);
    ReleaseAcceptedSocket(nn::nex::InetAddress const&);
    SendDatagram(unsigned char const*, unsigned long, nn::nex::InetAddress const&);
    ReceiveDatagram(unsigned char*, unsigned long, unsigned long*, nn::nex::InetAddress*, nn::nex::SocketDriver::_SocketFlag);
    ConnectionOrientedSocketManager(bool, nn::nex::SocketDriver*);
    RemoveSocketCompletely(nn::nex::SharedPtr<nn::nex::SocketDriver::Socket>);
    FindSendingInfo(nn::nex::InetAddress const&);
    UpdateReceivableSockets(unsigned int);
    ReceiveDatagramFromOneSocket(nn::nex::SharedPtr<nn::nex::SocketDriver::Socket> const&, unsigned char*, unsigned long, unsigned long*, nn::nex::InetAddress*, nn::nex::SocketDriver::_SocketFlag);
    FindReceivingInfo(nn::nex::SharedPtr<nn::nex::SocketDriver::Socket> const&);
    ProcessRemovedSocket();
    MoveToClosedSocket(nn::nex::SendingInfo const&, nn::nex::ReceivingInfo const&);
    PurgeClosedSocket();
    ~ConnectionOrientedSocketManager();
    BLOCKING_RECV_TIMEOUT_MS;
};

} } 
