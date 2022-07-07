#pragma once

namespace nn { namespace nex { 

class RelayStream
{
public:
    BuildRelayPacket(nn::nex::Buffer*, nn::nex::RelayType);
    RelayStream();
    ReceiveIncomingPacket(unsigned short, unsigned char, nn::nex::Packet*);
    DoWork(nn::nex::Time const*);
    ~RelayStream();
};

} } 
