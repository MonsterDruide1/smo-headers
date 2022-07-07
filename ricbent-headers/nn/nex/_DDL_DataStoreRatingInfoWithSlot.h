#pragma once

namespace nn { namespace nex { 

class _DDL_DataStoreRatingInfoWithSlot
{
public:
    ~_DDL_DataStoreRatingInfoWithSlot();
    operator=(nn::nex::_DDL_DataStoreRatingInfoWithSlot const&);
    operator==(nn::nex::_DDL_DataStoreRatingInfoWithSlot const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_DataStoreRatingInfoWithSlot const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_DataStoreRatingInfoWithSlot*);
};

} } 
