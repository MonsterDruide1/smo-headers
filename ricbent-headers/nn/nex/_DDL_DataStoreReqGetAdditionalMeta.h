#pragma once

namespace nn { namespace nex { 

class _DDL_DataStoreReqGetAdditionalMeta
{
public:
    ~_DDL_DataStoreReqGetAdditionalMeta();
    operator=(nn::nex::_DDL_DataStoreReqGetAdditionalMeta const&);
    operator==(nn::nex::_DDL_DataStoreReqGetAdditionalMeta const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_DataStoreReqGetAdditionalMeta const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_DataStoreReqGetAdditionalMeta*);
};

} } 
