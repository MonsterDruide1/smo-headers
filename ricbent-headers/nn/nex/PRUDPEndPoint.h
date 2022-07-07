#pragma once

namespace nn { namespace nex { 

class PRUDPEndPoint
{
public:
    GetNbReliablePending(unsigned char);
    IsIdle(unsigned char);
    GetReliableBufferPacketCount() const;
    GetReliableBufferPacketCount(unsigned char) const;
    GetReliableBufferPacketCounts(nn::nex::qVector<unsigned long>&) const;
    SetCalcRetransmissionTimeoutCallback(unsigned int (*)(unsigned int, unsigned short));
    SetKeepAliveTimeout(unsigned int);
    StopPing();
    StartPing();
    DecideMaxUserReliableSubStreams(unsigned short);
    PRUDPEndPoint(nn::nex::ConnectionOrientedStream*, nn::nex::StationURL const*, nn::nex::LogicalClockTmpl<unsigned short, short>*, unsigned char);
    ~PRUDPEndPoint();
    CancelPacketTimeout(nn::nex::PacketOut*);
    _Connect(nn::nex::Buffer*, nn::nex::Buffer*, void (*)(nn::nex::EndPoint*, nn::nex::qResult, nn::nex::UserContext const*), nn::nex::UserContext const&, unsigned int);
    SendReliable(nn::nex::PacketOut*);
    _Disconnect(void (*)(nn::nex::EndPoint*, nn::nex::qResult, nn::nex::UserContext const*), nn::nex::UserContext const&, unsigned int);
    SendAggregateAck();
    SendPacket(nn::nex::PacketOut*);
    SetSupportedFunctionsFlags();
    IsNegotiationConnectionSignatureVersion(nn::nex::Packet const*);
    Frag(nn::nex::Buffer*, unsigned int, unsigned long, nn::nex::PacketType, unsigned short, bool, unsigned int, unsigned char);
    _Send(nn::nex::Buffer*, unsigned int, bool, unsigned char, unsigned int);
    GetMaxPacketSize();
    HandleSlidingWindowPushError();
    SendNextReliable(unsigned char);
    GetTimeoutMultiplier(unsigned short, nn::nex::StreamSettings&) const;
    ComputeRetransmitTimeout(nn::nex::PacketOut const*);
    Defrag(nn::nex::PacketIn*);
    HandlerDispatch(nn::nex::Buffer*, nn::nex::PacketIn*);
    Dispatch(nn::nex::PacketIn*, nn::nex::Time);
    SendAggregateAck(nn::nex::Buffer*, unsigned short, unsigned char);
    GetNetFaultString(unsigned int);
    SignalFaultEvent(nn::nex::NetFaultReason, bool);
    ProcessFaultEvent(nn::nex::NetFaultReason);
    SendResetDisconnectPacket();
    IsDuplicateReorderingPacket(nn::nex::PacketIn*);
    InitUnreliableSeq(nn::nex::PacketOut*);
    SendACK(nn::nex::PacketIn*);
    IsAnyPacketProcessed();
    ServiceIncomingPacket(nn::nex::PacketIn*);
    PacketAcknowledged(nn::nex::Time const&, nn::nex::LogicalClockTmpl<unsigned short, short> const&, unsigned char);
    PacketAggregateAcknoledged(nn::nex::Packet*);
    AdjustRTT(nn::nex::Packet const*, nn::nex::PacketOut const*);
    AdjustRTT(nn::nex::Time const&, nn::nex::PacketOut const*);
    ServiceTimeout(nn::nex::PacketOut*, nn::nex::Time const&);
    TimeToPing();
    SetConnectionState(nn::nex::EndPoint::_ConnectionState);
    CompleteIO(nn::nex::qResult);
    AnalyzeRttRto(unsigned int);
    ResetEndPointInfo();
    GetEndPointInfo(nn::nex::EndPointInfo*) const;
    PacketLossRateInReceiveUnreliable();
    PacketLossRateInReceiveUnreliable(float*, unsigned long*);
    TotalPacketsInReceiveUnreliableIsOver(unsigned long);
    SetHybridPartialFaultProcessingMode(bool);
    GetMaxSubStreamID() const;
    IsNotConnected();
    IsConnecting();
    IsDisconnecting();
    IsFaulty();
    IsConnected();
    PeerIsConnected();
    PeerIsDisconnected();
    SetMaxSilenceTime(unsigned int);
    GetKeepAliveTimeout();
    GetMaxSilenceTime();
    SetPeerConnected();
    SetPeerDisconnected();
    GetConnectionState() const;
    GetSignaledFaultError() const;
    GetRTT() const;
    GetRTTAverage() const;
    GetSupportedFunctionsFlags() const;
    SetEncryptionKey(nn::nex::Key const&);
    GetEncryptionKey();
    INITIAL_DISCONNECT_PACKET_RTO;
    MAX_DISCONNECT_PACKET_RTO;
    s_pfCalcRetransmissionTimeoutCallback;
    s_bRecoverPartialFault;
    s_sessionID;
};

} } 
