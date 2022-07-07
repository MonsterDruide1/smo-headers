#pragma once

namespace nn { namespace nex { 

class _DDL_Data
{
public:
    operator=(nn::nex::_DDL_Data const&);
    operator==(nn::nex::_DDL_Data const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_Data const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_Data*);
    Clone() const;
    GetDataType() const;
    IsA(nn::nex::String const&) const;
    StreamIn(nn::nex::Message*) const;
    StreamOut(nn::nex::Message*);
    DynamicCast(nn::nex::Data*);
    DynamicCast(nn::nex::Data const*);
    IsAKindOf(nn::nex::String const&) const;
    ~_DDL_Data();
};

} } 
