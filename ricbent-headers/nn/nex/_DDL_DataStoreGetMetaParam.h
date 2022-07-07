#pragma once

namespace nn { namespace nex { 

class _DDL_DataStoreGetMetaParam
{
public:
    ~_DDL_DataStoreGetMetaParam();
    operator=(nn::nex::_DDL_DataStoreGetMetaParam const&);
    operator==(nn::nex::_DDL_DataStoreGetMetaParam const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_DataStoreGetMetaParam const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_DataStoreGetMetaParam*);
};

} } 
