#pragma once

namespace nn { namespace nex { 

class _DDL_DataStoreSearchBalloonResult
{
public:
    ~_DDL_DataStoreSearchBalloonResult();
    operator=(nn::nex::_DDL_DataStoreSearchBalloonResult const&);
    operator==(nn::nex::_DDL_DataStoreSearchBalloonResult const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_DataStoreSearchBalloonResult const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_DataStoreSearchBalloonResult*);
};

} } 
