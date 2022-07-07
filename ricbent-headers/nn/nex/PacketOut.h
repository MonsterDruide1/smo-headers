#pragma once

namespace nn { namespace nex { 

class PacketOut
{
public:
    SetInternalPayload(nn::nex::Buffer*);
    PacketOut(nn::nex::PRUDPEndPoint*, nn::nex::PacketType, unsigned short, nn::nex::Buffer*, unsigned int);
    Initialize(nn::nex::PRUDPEndPoint*, nn::nex::PacketType, unsigned short, nn::nex::Buffer*, unsigned int, nn::nex::Timeout*);
    ~PacketOut();
    IsBundlableWithPortTypeCheck(nn::nex::PacketOut*);
    ReadyToSend();
};

} } 
