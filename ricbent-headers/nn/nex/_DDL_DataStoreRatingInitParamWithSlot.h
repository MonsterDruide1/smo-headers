#pragma once

namespace nn { namespace nex { 

class _DDL_DataStoreRatingInitParamWithSlot
{
public:
    ~_DDL_DataStoreRatingInitParamWithSlot();
    operator=(nn::nex::_DDL_DataStoreRatingInitParamWithSlot const&);
    operator==(nn::nex::_DDL_DataStoreRatingInitParamWithSlot const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_DataStoreRatingInitParamWithSlot const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_DataStoreRatingInitParamWithSlot*);
};

} } 
