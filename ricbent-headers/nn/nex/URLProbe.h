#pragma once

namespace nn { namespace nex { 

class URLProbe
{
public:
    Trace(unsigned long);
    Update(nn::nex::StationURL const&, nn::nex::Time);
    UpdateIsNeeded(nn::nex::Time) const;
    ~URLProbe();
    URLProbe(nn::nex::StationURL const&, int, int, unsigned int);
};

} } 
