#pragma once

namespace nn { namespace nex { 

class TransportStreamManager
{
public:
    TransportStreamManager();
    ~TransportStreamManager();
    UnregisterStream(nn::nex::Stream::Type, unsigned char);
    RegisterStream(nn::nex::Stream*, unsigned char, unsigned char*);
    GetStream(nn::nex::VirtualPort const&);
    IsStreamTypeRegistered(nn::nex::Stream::Type);
    GetNBStreamByStreamType(nn::nex::Stream::Type);
    GetNbStream();
    GetStreamImpl(nn::nex::VirtualPort const&);
    IsDuplicateReorderingPacket(nn::nex::Packet*);
    DemuxIncomingPacket(nn::nex::Packet*);
    DoWork(nn::nex::Time const*);
};

} } 
