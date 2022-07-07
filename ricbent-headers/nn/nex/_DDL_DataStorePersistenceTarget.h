#pragma once

namespace nn { namespace nex { 

class _DDL_DataStorePersistenceTarget
{
public:
    ~_DDL_DataStorePersistenceTarget();
    operator==(nn::nex::_DDL_DataStorePersistenceTarget const&) const;
    operator=(nn::nex::_DDL_DataStorePersistenceTarget const&);
    Add(nn::nex::Message*, nn::nex::_DDL_DataStorePersistenceTarget const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_DataStorePersistenceTarget*);
};

} } 
