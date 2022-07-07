#pragma once

namespace nn { namespace nex { 

class _DDL_StringKeyValue
{
public:
    operator=(nn::nex::_DDL_StringKeyValue const&);
    operator==(nn::nex::_DDL_StringKeyValue const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_StringKeyValue const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_StringKeyValue*);
    Clone() const;
    GetDataType() const;
    IsA(nn::nex::String const&) const;
    StreamIn(nn::nex::Message*) const;
    StreamOut(nn::nex::Message*);
    DynamicCast(nn::nex::Data*);
    DynamicCast(nn::nex::Data const*);
    IsAKindOf(nn::nex::String const&) const;
    ~_DDL_StringKeyValue();
};

} } 
