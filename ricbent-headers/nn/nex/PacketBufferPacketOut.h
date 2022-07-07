#pragma once

namespace nn { namespace nex { 

class PacketBufferPacketOut
{
public:
    PacketBufferPacketOut(nn::nex::PRUDPEndPoint*, nn::nex::PacketType, unsigned short, nn::nex::Buffer*, unsigned int);
    ~PacketBufferPacketOut();
};

} } 
