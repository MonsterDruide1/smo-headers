#pragma once

namespace nn { namespace nex { 

class SecureEndPoint
{
public:
    SetAssociatedEndPoint(nn::nex::EndPoint*);
    SecureEndPoint(nn::nex::ConnectionOrientedStream*, nn::nex::StationURL const*);
    ~SecureEndPoint();
    GetAssociatedEndPoint();
    RegisterEventHandler(nn::nex::EndPointEventHandler*);
    _Connect(nn::nex::Buffer*, nn::nex::Buffer*, void (*)(nn::nex::EndPoint*, nn::nex::qResult, nn::nex::UserContext const*), nn::nex::UserContext const&, unsigned int);
    _Disconnect(void (*)(nn::nex::EndPoint*, nn::nex::qResult, nn::nex::UserContext const*), nn::nex::UserContext const&, unsigned int);
    CompleteDisconnect();
    DisconnectCallback(nn::nex::EndPoint*, nn::nex::qResult, nn::nex::UserContext const*);
    _Send(nn::nex::Buffer*, unsigned int, bool, unsigned char, unsigned int);
    GetRTT() const;
    GetRTTAverage() const;
    IsNotConnected();
    IsConnecting();
    IsDisconnecting();
    IsFaulty();
    IsConnected();
    PeerIsConnected();
    PeerIsDisconnected();
    SetPeerConnected();
    SetPeerDisconnected();
    GetConnectionState() const;
    SetConnectionState(nn::nex::EndPoint::_ConnectionState);
    SetKeepAliveTimeout(unsigned int);
    GetKeepAliveTimeout();
    SetMaxSilenceTime(unsigned int);
    GetMaxSilenceTime();
    CompleteClose();
    SetEncryptionKey(nn::nex::Key const&);
    GetEncryptionKey();
    SignalFaultEvent(nn::nex::NetFaultReason, bool);
    IsAnyPacketProcessed();
    GetSupportedFunctionsFlags() const;
    GetSignaledFaultError() const;
    ResetEndPointInfo();
    GetEndPointInfo(nn::nex::EndPointInfo*) const;
    GetReliableBufferPacketCount() const;
    GetReliableBufferPacketCounts(nn::nex::qVector<unsigned long>&) const;
    GetMaxSubStreamID() const;
};

} } 
