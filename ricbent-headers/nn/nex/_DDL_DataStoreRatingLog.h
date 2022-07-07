#pragma once

namespace nn { namespace nex { 

class _DDL_DataStoreRatingLog
{
public:
    operator=(nn::nex::_DDL_DataStoreRatingLog const&);
    operator==(nn::nex::_DDL_DataStoreRatingLog const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_DataStoreRatingLog const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_DataStoreRatingLog*);
    ~_DDL_DataStoreRatingLog();
};

} } 
