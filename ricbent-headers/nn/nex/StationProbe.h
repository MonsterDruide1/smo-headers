#pragma once

namespace nn { namespace nex { 

class StationProbe
{
public:
    StationProbe();
    StationProbe(nn::nex::StationContactInfo const&);
    ~StationProbe();
    Update();
    Trace(unsigned long);
};

} } 
