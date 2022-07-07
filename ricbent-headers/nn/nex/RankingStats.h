#pragma once

namespace nn { namespace nex { 

class RankingStats
{
public:
    GetValue(nn::nex::RankingConstants::StatsFlag) const;
    ~RankingStats();
};

} } 
