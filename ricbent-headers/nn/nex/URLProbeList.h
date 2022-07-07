#pragma once

namespace nn { namespace nex { 

class URLProbeList
{
public:
    FindProbe(unsigned int);
    FindProbe(nn::nex::StationURL const&);
    URLProbeList();
    ~URLProbeList();
    UpdateProbe(nn::nex::StationURL const&, nn::nex::Time);
    RemoveProbe(nn::nex::StationURL const&);
    Trace(unsigned long);
};

} } 
