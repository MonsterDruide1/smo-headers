#pragma once

namespace nn { namespace nex { 

class _DDL_DataStoreReqGetInfo
{
public:
    operator=(nn::nex::_DDL_DataStoreReqGetInfo const&);
    operator==(nn::nex::_DDL_DataStoreReqGetInfo const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_DataStoreReqGetInfo const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_DataStoreReqGetInfo*);
    ~_DDL_DataStoreReqGetInfo();
    _DDL_DataStoreReqGetInfo(nn::nex::_DDL_DataStoreReqGetInfo const&);
};

} } 
