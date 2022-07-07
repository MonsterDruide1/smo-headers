#pragma once

namespace nn { namespace nex { 

class _DDL_RankingScoreData
{
public:
    ~_DDL_RankingScoreData();
    operator=(nn::nex::_DDL_RankingScoreData const&);
    operator==(nn::nex::_DDL_RankingScoreData const&) const;
    Add(nn::nex::Message*, nn::nex::_DDL_RankingScoreData const&);
    Extract(nn::nex::Message*, nn::nex::_DDL_RankingScoreData*);
};

} } 
