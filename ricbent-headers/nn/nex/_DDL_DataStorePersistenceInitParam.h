#pragma once

namespace nn { namespace nex { 

class _DDL_DataStorePersistenceInitParam
{
public:
    operator=(nn::nex::_DDL_DataStorePersistenceInitParam const&);
    operator==(nn::nex::_DDL_DataStorePersistenceInitParam const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_DataStorePersistenceInitParam const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_DataStorePersistenceInitParam*);
    ~_DDL_DataStorePersistenceInitParam();
};

} } 
