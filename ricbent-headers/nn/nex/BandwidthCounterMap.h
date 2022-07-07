#pragma once

namespace nn { namespace nex { 

class BandwidthCounterMap
{
public:
    BandwidthCounterMap(nn::nex::String const&);
    ~BandwidthCounterMap();
    operator[](unsigned int);
};

} } 
