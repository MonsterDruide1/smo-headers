#pragma once

namespace nn { namespace nex { 

class _DDL_DataStorePermission
{
public:
    ~_DDL_DataStorePermission();
    operator==(nn::nex::_DDL_DataStorePermission const&) const;
    operator=(nn::nex::_DDL_DataStorePermission const&);
    Add(nn::nex::Message*, nn::nex::_DDL_DataStorePermission const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_DataStorePermission*);
};

} } 
