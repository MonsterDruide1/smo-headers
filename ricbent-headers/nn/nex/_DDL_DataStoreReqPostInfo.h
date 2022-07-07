#pragma once

namespace nn { namespace nex { 

class _DDL_DataStoreReqPostInfo
{
public:
    ~_DDL_DataStoreReqPostInfo();
    operator=(nn::nex::_DDL_DataStoreReqPostInfo const&);
    operator==(nn::nex::_DDL_DataStoreReqPostInfo const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_DataStoreReqPostInfo const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_DataStoreReqPostInfo*);
};

} } 
