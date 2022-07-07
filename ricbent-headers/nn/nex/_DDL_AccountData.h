#pragma once

namespace nn { namespace nex { 

class _DDL_AccountData
{
public:
    operator=(nn::nex::_DDL_AccountData const&);
    operator==(nn::nex::_DDL_AccountData const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_AccountData const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_AccountData*);
    ~_DDL_AccountData();
};

} } 
