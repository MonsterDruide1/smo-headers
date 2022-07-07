#pragma once

namespace nn { namespace nex { 

class _DDL_RankingRankData
{
public:
    _DDL_RankingRankData(nn::nex::_DDL_RankingRankData const&);
    ~_DDL_RankingRankData();
    operator=(nn::nex::_DDL_RankingRankData const&);
    operator==(nn::nex::_DDL_RankingRankData const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_RankingRankData const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_RankingRankData*);
};

} } 
