#pragma once

namespace nn { namespace nex { 

class ConnectionOrientedStream
{
public:
    ConnectionOrientedStream(nn::nex::Stream::Type, nn::nex::RootTransport*);
    ~ConnectionOrientedStream();
    Initialize();
    Teardown();
    StartListen(unsigned char, unsigned char*);
    StopListen();
    AddPIDEndPointAssociation(unsigned long, nn::nex::EndPoint*);
    RemovePIDEndPointAssociation(unsigned long, nn::nex::EndPoint*);
    FindEndPointByPID(unsigned long);
    AddCIDEndPointAssociation(unsigned int, nn::nex::EndPoint*);
    RemoveCIDEndPointAssociation(unsigned int, nn::nex::EndPoint*);
    FindEndPointByCID(unsigned int);
    GetAllConnectionIDs() const;
    GetEndPointNumber();
    LockEndPointMap();
    UnlockEndPointMap();
    Trace(unsigned long);
    RegisterEventHandler(nn::nex::TransportEventHandler*);
    OpenEndPoint(nn::nex::EndPoint*);
    CloseEndPoint(nn::nex::EndPoint*);
    SendBroadcast(nn::nex::StationURL*, nn::nex::Buffer*);
    Send(nn::nex::StationURL*, nn::nex::Buffer*);
    AddEndPointToGroup(nn::nex::EndPoint*, nn::nex::EndPointGroup*);
    RemoveEndPointFromGroup(nn::nex::EndPoint*, nn::nex::EndPointGroup*);
    GetPreferredPortNumber();
};

} } 
