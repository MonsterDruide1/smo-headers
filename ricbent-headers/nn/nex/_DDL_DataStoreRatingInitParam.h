#pragma once

namespace nn { namespace nex { 

class _DDL_DataStoreRatingInitParam
{
public:
    ~_DDL_DataStoreRatingInitParam();
    operator=(nn::nex::_DDL_DataStoreRatingInitParam const&);
    operator==(nn::nex::_DDL_DataStoreRatingInitParam const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_DataStoreRatingInitParam const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_DataStoreRatingInitParam*);
};

} } 
