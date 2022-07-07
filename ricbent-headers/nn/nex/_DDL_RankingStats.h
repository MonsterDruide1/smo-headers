#pragma once

namespace nn { namespace nex { 

class _DDL_RankingStats
{
public:
    operator=(nn::nex::_DDL_RankingStats const&);
    operator==(nn::nex::_DDL_RankingStats const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_RankingStats const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_RankingStats*);
    ~_DDL_RankingStats();
};

} } 
