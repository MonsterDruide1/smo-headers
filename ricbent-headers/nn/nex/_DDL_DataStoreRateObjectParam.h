#pragma once

namespace nn { namespace nex { 

class _DDL_DataStoreRateObjectParam
{
public:
    ~_DDL_DataStoreRateObjectParam();
    operator=(nn::nex::_DDL_DataStoreRateObjectParam const&);
    operator==(nn::nex::_DDL_DataStoreRateObjectParam const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_DataStoreRateObjectParam const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_DataStoreRateObjectParam*);
};

} } 
