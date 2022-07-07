#pragma once

namespace nn { namespace nex { 

class QueuingSocket
{
public:
    FillPacketQueueFromBuffer(nn::nex::Buffer*, nn::nex::InetAddress const*, nn::nex::PacketQueue*, nn::nex::TransportStreamManager*, bool*);
    RecvAndQueueIncomingBuffer(unsigned int);
    RetransmitFromHistoryPacketQueue(nn::nex::PacketQueue*, nn::nex::qChain<nn::nex::Packet*, nn::nex::ChainPolicyHistoryPacket<nn::nex::Packet*> >*, unsigned short);
    CreateBufferFromPacketQueue(nn::nex::PacketQueue*, nn::nex::qChain<nn::nex::Packet*, nn::nex::ChainPolicyHistoryPacket<nn::nex::Packet*> >*, unsigned int);
    DequeueAndSendOutgoingBuffer();
    QueuingSocket(nn::nex::TransportProtocol::Type, nn::nex::RootTransport*, unsigned int);
    ~QueuingSocket();
    Bind(nn::nex::InetAddress*, bool);
    Send(nn::nex::Buffer const&, nn::nex::InetAddress const&);
    OutputQueue(nn::nex::Buffer const&, nn::nex::InetAddress const&);
    SendBuffer(nn::nex::Buffer const&, nn::nex::InetAddress const&);
    IsRecvDataExists() const;
    Recv(nn::nex::Buffer*, nn::nex::InetAddress*);
    RecvNonBlock(nn::nex::Buffer*, nn::nex::InetAddress*);
    RecvBuffer(nn::nex::Buffer*, nn::nex::InetAddress*);
    ExtractIncomingPacket(nn::nex::TransportStreamManager*, nn::nex::InetAddress const*, nn::nex::Buffer*, bool*);
    QueueSize() const;
    InputFlooded();
    OutputFlooded();
};

} } 
