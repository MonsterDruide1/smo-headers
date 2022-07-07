#pragma once

namespace nn { namespace nex { 

class _DDL_DynamicData
{
public:
    operator=(nn::nex::_DDL_DynamicData const&);
    operator==(nn::nex::_DDL_DynamicData const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_DynamicData const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_DynamicData*);
    Clone() const;
    GetDataType() const;
    IsA(nn::nex::String const&) const;
    StreamIn(nn::nex::Message*) const;
    StreamOut(nn::nex::Message*);
    DynamicCast(nn::nex::Data*);
    DynamicCast(nn::nex::Data const*);
    IsAKindOf(nn::nex::String const&) const;
    ~_DDL_DynamicData();
};

} } 
