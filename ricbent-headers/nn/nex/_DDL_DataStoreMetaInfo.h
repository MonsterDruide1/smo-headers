#pragma once

namespace nn { namespace nex { 

class _DDL_DataStoreMetaInfo
{
public:
    ~_DDL_DataStoreMetaInfo();
    _DDL_DataStoreMetaInfo(nn::nex::_DDL_DataStoreMetaInfo const&);
    operator=(nn::nex::_DDL_DataStoreMetaInfo const&);
    operator==(nn::nex::_DDL_DataStoreMetaInfo const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_DataStoreMetaInfo const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_DataStoreMetaInfo*);
};

} } 
