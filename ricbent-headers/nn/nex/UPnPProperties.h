#pragma once

namespace nn { namespace nex { 

class UPnPProperties
{
public:
    UPnPProperties();
    ~UPnPProperties();
    SetUPnPPortOpen(bool);
    IsUPnPPortOpen() const;
    SetMappedPort(unsigned short);
    GetMappedPort() const;
};

} } 
