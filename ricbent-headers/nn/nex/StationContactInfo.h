#pragma once

namespace nn { namespace nex { 

class StationContactInfo
{
public:
    StationContactInfo();
    StationContactInfo(nn::nex::qList<nn::nex::StationURL> const&);
    AddURL(nn::nex::StationURL const&);
    ~StationContactInfo();
    SetConnectionID(unsigned int);
    GetConnectionID() const;
    SortAndFilterTarget(nn::nex::StationContactInfo&) const;
    Trace(unsigned long);
};

} } 
