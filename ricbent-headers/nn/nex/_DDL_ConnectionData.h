#pragma once

namespace nn { namespace nex { 

class _DDL_ConnectionData
{
public:
    operator=(nn::nex::_DDL_ConnectionData const&);
    operator==(nn::nex::_DDL_ConnectionData const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_ConnectionData const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_ConnectionData*);
    ~_DDL_ConnectionData();
};

} } 
