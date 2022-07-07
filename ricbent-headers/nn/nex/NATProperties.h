#pragma once

namespace nn { namespace nex { 

class NATProperties
{
public:
    GetInterfacePort() const;
    GetNATMapping() const;
    GetNATMappingPortIncrement() const;
    NATProperties();
    ~NATProperties();
    SetInterfaceAddress(nn::nex::String const&);
    GetInterfaceAddress() const;
    SetInterfacePort(unsigned short);
    SetPublicAddress(nn::nex::String const&);
    GetPublicAddress() const;
    SetPublicPort(unsigned short);
    GetPublicPort() const;
    SetNATMapping(nn::nex::NATProperties::MappingProperties);
    SetNATFiltering(nn::nex::NATProperties::FilteringProperties);
    GetNATFiltering() const;
    SetNATMappingPortIncrement(unsigned int);
    GetPortIncreaseProperties() const;
    ConvertMappingPropertiesToStr(nn::nex::NATProperties::MappingProperties);
    ConvertFilteringPropertiesToStr(nn::nex::NATProperties::FilteringProperties);
    ConvertPortIncreasePropertiesToStr(nn::nex::NATProperties::PortIncreaseProperties);
    GetAllProperties();
    ConvertAllPropertiesToInteger(nn::nex::NATProperties::AllProperties const&);
    ConvertIntegerToAllProperties(unsigned int);
};

} } 
