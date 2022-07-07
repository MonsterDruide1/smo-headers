#pragma once

namespace nn { namespace nex { 

class StationProbeList
{
public:
    Reset();
    StationProbeList();
    StationProbeList(nn::nex::qList<nn::nex::StationURL> const&);
    AddStationURL(nn::nex::StationURL const&);
    ~StationProbeList();
    GetProbeByCID(unsigned int);
    GetPingStats() const;
    EveryoneReached() const;
    AnyoneFailed() const;
    Update();
    Trace(unsigned long);
};

} } 
