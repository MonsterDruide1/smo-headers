#pragma once

namespace nn { namespace nex { 

class _DDL_DataStoreSpecificMetaInfo
{
public:
    operator=(nn::nex::_DDL_DataStoreSpecificMetaInfo const&);
    operator==(nn::nex::_DDL_DataStoreSpecificMetaInfo const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_DataStoreSpecificMetaInfo const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_DataStoreSpecificMetaInfo*);
    ~_DDL_DataStoreSpecificMetaInfo();
};

} } 
