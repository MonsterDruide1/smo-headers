#pragma once

namespace nn { namespace nex { 

class SecureStream
{
public:
    SetCredentials(nn::nex::Credentials*);
    SetAssociatedStream(nn::nex::ConnectionOrientedStream*);
    FilterIncomingConnection(nn::nex::Buffer*, nn::nex::Buffer*, nn::nex::EndPoint*);
    SecureStream(nn::nex::SharedPtr<nn::nex::AuthenticationClient>);
    ~SecureStream();
    GetAssociatedStream() const;
    ResponsibleForURL(nn::nex::StationURL const*);
    GetURLType();
    CreateEndPoint(nn::nex::StationURL const*);
    CloseEndPoint(nn::nex::EndPoint*);
    OpenEndPoint(nn::nex::StationURL const*);
    OpenEndPoint(unsigned int);
    FindEndPointByPID(unsigned long);
    FindEndPointByCID(unsigned int);
    GetAllConnectionIDs() const;
    GetEndPointNumber();
    LockEndPointMap();
    UnlockEndPointMap();
    ReceiveIncomingPacket(unsigned short, unsigned char, nn::nex::Packet*);
    DoWork(nn::nex::Time const*);
    GetNbLocalURL();
    GetLocalURL(unsigned int);
    ReleaseURL(nn::nex::StationURL*);
    BuildURL(unsigned int, unsigned long);
    OpenEndPoint(nn::nex::EndPoint*);
    Send(nn::nex::StationURL*, nn::nex::Buffer*);
    IsCapable(unsigned int);
    Send(nn::nex::StationURL*, nn::nex::Buffer*, void (*)(nn::nex::ConnectionOrientedStream*, nn::nex::Buffer*, unsigned int, nn::nex::UserContext*), nn::nex::UserContext const&);
    SetOption(unsigned int, nn::nex::UserContext const&);
    GetOption(unsigned int, nn::nex::UserContext&);
};

} } 
