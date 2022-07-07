#pragma once

namespace nn { namespace nex { 

class _DDL_AuthenticationInfo
{
public:
    ~_DDL_AuthenticationInfo();
    operator=(nn::nex::_DDL_AuthenticationInfo const&);
    operator==(nn::nex::_DDL_AuthenticationInfo const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_AuthenticationInfo const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_AuthenticationInfo*);
    Clone() const;
    GetDataType() const;
    IsA(nn::nex::String const&) const;
    StreamIn(nn::nex::Message*) const;
    StreamOut(nn::nex::Message*);
    DynamicCast(nn::nex::Data*);
    DynamicCast(nn::nex::Data const*);
    IsAKindOf(nn::nex::String const&) const;
};

} } 
