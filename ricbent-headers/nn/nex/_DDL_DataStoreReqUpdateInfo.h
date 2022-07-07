#pragma once

namespace nn { namespace nex { 

class _DDL_DataStoreReqUpdateInfo
{
public:
    ~_DDL_DataStoreReqUpdateInfo();
    operator=(nn::nex::_DDL_DataStoreReqUpdateInfo const&);
    operator==(nn::nex::_DDL_DataStoreReqUpdateInfo const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_DataStoreReqUpdateInfo const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_DataStoreReqUpdateInfo*);
};

} } 
