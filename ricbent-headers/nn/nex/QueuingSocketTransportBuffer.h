#pragma once

namespace nn { namespace nex { 

class QueuingSocketTransportBuffer
{
public:
    SendBufferToSocket();
    RecvBufferFromSocket(bool);
    QueuingSocketTransportBuffer(nn::nex::TransportProtocol::Type, nn::nex::RootTransport*, unsigned int, nn::nex::Condition*, nn::nex::TransportBuffer*);
    ~QueuingSocketTransportBuffer();
    SendBuffer(nn::nex::Buffer const&, nn::nex::InetAddress const&);
    IsRecvDataExists() const;
    RecvBuffer(nn::nex::Buffer*, nn::nex::InetAddress*);
};

} } 
