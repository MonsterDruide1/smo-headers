#pragma once

namespace nn { namespace nex { 

class _DDL_BasicAccountInfo
{
public:
    operator=(nn::nex::_DDL_BasicAccountInfo const&);
    operator==(nn::nex::_DDL_BasicAccountInfo const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_BasicAccountInfo const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_BasicAccountInfo*);
    ~_DDL_BasicAccountInfo();
};

} } 
