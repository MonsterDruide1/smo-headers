#pragma once

namespace nn { namespace nex { 

class _DDL_DataStoreRatingTarget
{
public:
    ~_DDL_DataStoreRatingTarget();
    operator=(nn::nex::_DDL_DataStoreRatingTarget const&);
    operator==(nn::nex::_DDL_DataStoreRatingTarget const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_DataStoreRatingTarget const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_DataStoreRatingTarget*);
};

} } 
