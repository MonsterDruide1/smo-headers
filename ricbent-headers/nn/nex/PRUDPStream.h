#pragma once

namespace nn { namespace nex { 

class PRUDPStream
{
public:
    Send(unsigned short, unsigned char, nn::nex::PacketOut*, nn::nex::Key*);
    ReleaseEndPoint(nn::nex::PRUDPEndPoint*);
    PRUDPStream(nn::nex::Stream::Type, nn::nex::RootTransport*);
    ~PRUDPStream();
    PurgeDeletedEndPoints(nn::nex::Time const&, bool);
    Initialize();
    Teardown();
    StopListen();
    ResponsibleForURL(nn::nex::StationURL const*);
    GetURLType();
    CreateEndPoint(nn::nex::StationURL const*, unsigned short, bool);
    OpenEndPoint(nn::nex::StationURL const*);
    OpenEndPoint(unsigned int);
    OpenEndPoint(nn::nex::EndPoint*);
    CloseEndPoint(nn::nex::EndPoint*);
    ForceCompleteIO();
    ReleaseEndPointImpl(nn::nex::PRUDPEndPoint*);
    AddPIDEndPointAssociation(unsigned long, nn::nex::EndPoint*);
    RemovePIDEndPointAssociation(unsigned long, nn::nex::EndPoint*);
    FindEndPointByPID(unsigned long);
    AddCIDEndPointAssociation(unsigned int, nn::nex::EndPoint*);
    RemoveCIDEndPointAssociation(unsigned int, nn::nex::EndPoint*);
    FindEndPointByCID(unsigned int);
    GetAllConnectionIDs() const;
    GetEndPointNumber();
    SendBroadcast(nn::nex::StationURL*, nn::nex::Buffer*);
    Send(nn::nex::StationURL*, nn::nex::Buffer*);
    IsCapable(unsigned int);
    ServiceConnectionRequest(nn::nex::InetAddress*, nn::nex::Buffer*, unsigned short, unsigned char);
    ServiceUserMsg(nn::nex::InetAddress*, nn::nex::Buffer*);
    CheckSignature(nn::nex::InetAddress*, unsigned short, unsigned char, nn::nex::Packet*);
    VersionNegotiation(nn::nex::Packet*, nn::nex::Packet*);
    ReceiveIncomingPacket(unsigned short, unsigned char, nn::nex::Packet*);
    IsDuplicateReorderingPacket(nn::nex::Packet*);
    CheckSocketStatus(nn::nex::Time const&);
    ServiceTimeouts(nn::nex::Time const&);
    DoWork(nn::nex::Time const*);
    LockEndPointMap();
    UnlockEndPointMap();
    OnSetTerminateImmediately();
    SetMaxSilenceTimeAll(unsigned int);
    CHECK_SOCKET_STATUS_INTERVAL_MS;
    SERVICE_TIMEOUT_INTERVAL_MS;
    PURGE_DELETED_ENDPOINTS_INTERVAL_MS;
    s_bQueuing;
};

} } 
