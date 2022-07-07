#pragma once

namespace nn { namespace nex { 

class _DDL_DataStoreRatingInfo
{
public:
    ~_DDL_DataStoreRatingInfo();
    operator=(nn::nex::_DDL_DataStoreRatingInfo const&);
    operator==(nn::nex::_DDL_DataStoreRatingInfo const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_DataStoreRatingInfo const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_DataStoreRatingInfo*);
};

} } 
