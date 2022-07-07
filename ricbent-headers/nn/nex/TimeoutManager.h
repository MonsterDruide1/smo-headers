#pragma once

namespace nn { namespace nex { 

class TimeoutManager
{
public:
    CancelPacketTimeout(nn::nex::PacketOut*);
    SchedulePacketTimeout(nn::nex::PacketOut*);
    ServicePacketTimeouts(nn::nex::Time const&);
    ForceSetPacketTimeouts(nn::nex::Time);
    TimeoutManager();
    ~TimeoutManager();
    SetQuickTimeout();
    SetPacketQuickTimeout(nn::nex::PacketType);
};

} } 
