#pragma once

namespace nn { namespace nex { 

class _DDL_DataStoreReqPostInfoV1
{
public:
    ~_DDL_DataStoreReqPostInfoV1();
    operator=(nn::nex::_DDL_DataStoreReqPostInfoV1 const&);
    operator==(nn::nex::_DDL_DataStoreReqPostInfoV1 const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_DataStoreReqPostInfoV1 const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_DataStoreReqPostInfoV1*);
};

} } 
