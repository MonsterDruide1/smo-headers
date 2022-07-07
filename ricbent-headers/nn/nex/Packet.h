#pragma once

namespace nn { namespace nex { 

class Packet
{
public:
    SetPayload(nn::nex::Buffer*);
    GetOverhead();
    Packet();
    ~Packet();
    GetSize();
    m_wmNbPackets;
};

} } 
