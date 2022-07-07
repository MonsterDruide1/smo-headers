#pragma once

namespace nn { namespace nex { 

class _DDL_DataStoreSpecificMetaInfoV1
{
public:
    operator=(nn::nex::_DDL_DataStoreSpecificMetaInfoV1 const&);
    operator==(nn::nex::_DDL_DataStoreSpecificMetaInfoV1 const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_DataStoreSpecificMetaInfoV1 const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_DataStoreSpecificMetaInfoV1*);
    ~_DDL_DataStoreSpecificMetaInfoV1();
};

} } 
