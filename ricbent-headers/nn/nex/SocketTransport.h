#pragma once

namespace nn { namespace nex { 

class SocketTransport
{
public:
    SocketTransport();
    ResetAnalyzeInfo();
    TerminateTransport();
    ~SocketTransport();
    Initialize();
    StartTransport();
    BindSocket(unsigned short, unsigned short*, nn::nex::TransportProtocol::Type, bool, bool, bool);
    Connect(nn::nex::StationURL const*, nn::nex::TransportProtocol::Type, unsigned short);
    GetSocket(nn::nex::SocketTransport::ProtocolAndPort const&);
    OpenSocket(unsigned short, unsigned short*, bool, nn::nex::TransportProtocol::Type, bool, bool, bool, bool);
    OpenUdpSocket(unsigned short, unsigned short*);
    NotifyCreateEndPoint(nn::nex::TransportProtocol::Type, unsigned short, nn::nex::InetAddress const&);
    NotifyDeleteEndPoint(nn::nex::TransportProtocol::Type, unsigned short, nn::nex::InetAddress const&);
    CloseSocket();
    CloseUdpSocket(unsigned short);
    CloseSocket(nn::nex::TransportProtocol::Type, unsigned short);
    GetListenPortLocalUrls(nn::nex::qList<nn::nex::StationURL>*);
    GetNbListeningPorts();
    GetTransportStatus(nn::nex::TransportProtocol::Type, unsigned short);
    Send(nn::nex::TransportProtocol::Type, unsigned short, nn::nex::Stream::Type, unsigned char, unsigned char, nn::nex::PacketOut*, bool);
    Send(nn::nex::TransportProtocol::Type, nn::nex::StationURL*, nn::nex::Buffer*);
    FillPacketQueueFromBuffer(nn::nex::QueuingSocket*, nn::nex::Buffer*, nn::nex::InetAddress const*);
    Receive(nn::nex::TransportProtocol::Type, unsigned short, nn::nex::Buffer*, nn::nex::InetAddress const*);
    GetRouter();
    TransportJobMethod();
    DeliverIncoming(nn::nex::Time const&);
    DeliverOutgoing(nn::nex::Time const&);
    DeliverIncomingBuffer();
    DeliverOutgoingImpl(nn::nex::Time const&);
    DeliverOutgoingBuffer(nn::nex::QueuingSocket*, nn::nex::Buffer*, nn::nex::InetAddress const&, unsigned short);
    RouteRelaySendMultiMessage(nn::nex::Buffer*, unsigned short);
    GetPacketQueueSize() const;
    GetEstimatedPacketQueueMemoryUsage() const;
    GetBufferSetEmptyDropCount(unsigned int&, unsigned int&) const;
    LogAnalyzeInfo(nn::nex::EventLog::LogLevel);
    GetBerkeleySocketSendToMultiCount();
    GetBerkeleySocketSendToCount();
    GetBerkeleySocketRecvFromCount();
    GetBerkeleySocketRecvFromTryCount();
    ClearPacketInPacketBufferPool();
    GetRelay();
    StopTransportThreadImpl();
};

} } 
