#pragma once

namespace nn { namespace nex { 

class RoutingStream
{
public:
    BuildRoutingPacket(nn::nex::Buffer*, nn::nex::PacketType, nn::nex::InetAddress const&);
    RoutingStream();
    ReceiveIncomingPacket(unsigned short, unsigned char, nn::nex::Packet*);
    ExtractPayloadInfo(nn::nex::Buffer*, nn::nex::InetAddress*, nn::nex::Buffer&);
    GetHistoryCount(nn::nex::InetAddress const*);
    CleanHostRoutingHistory();
    SetDenyForAddress(nn::nex::InetAddress const*);
    DoWork(nn::nex::Time const*);
    ~RoutingStream();
};

} } 
