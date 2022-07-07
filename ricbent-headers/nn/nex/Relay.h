#pragma once

namespace nn { namespace nex { 

class Relay
{
public:
    EnableRelay(bool);
    SetSrcPublicAddress(nn::nex::StationURL const&);
    Clean();
    SetGameServerID(unsigned int);
    AddRelay(nn::nex::InetAddress const&, nn::nex::InetAddress const&, bool);
    SetRelayGatheringID(unsigned int);
    Exists();
    Relay();
    ~Relay();
    UnregisterStream();
    SetTransport(nn::nex::RootTransport*);
    GetMTU();
    HasRelay(nn::nex::InetAddress const*, nn::nex::InetAddress const*);
    ShouldRelay(nn::nex::InetAddress const*);
    GetGameServerID();
    GetRelayGatheringID();
    RelayMessage(nn::nex::Buffer*, nn::nex::InetAddress const*, unsigned short);
    PingMessage(nn::nex::Buffer*, nn::nex::RelayPingProtocolHeader const*, nn::nex::InetAddress const*, unsigned short);
};

} } 
