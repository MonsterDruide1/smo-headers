#pragma once

namespace nn { namespace nex { 

class _DDL_RankingCachedResult
{
public:
    ~_DDL_RankingCachedResult();
    operator=(nn::nex::_DDL_RankingCachedResult const&);
    operator==(nn::nex::_DDL_RankingCachedResult const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_RankingCachedResult const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_RankingCachedResult*);
};

} } 
