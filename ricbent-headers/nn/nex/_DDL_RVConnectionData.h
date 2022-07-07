#pragma once

namespace nn { namespace nex { 

class _DDL_RVConnectionData
{
public:
    operator=(nn::nex::_DDL_RVConnectionData const&);
    operator==(nn::nex::_DDL_RVConnectionData const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_RVConnectionData const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_RVConnectionData*);
    ~_DDL_RVConnectionData();
};

} } 
