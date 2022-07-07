#pragma once

namespace nn { namespace nex { 

class RankingCachedResult
{
public:
    ~RankingCachedResult();
    LocalUpdate(nn::nex::RankingOrderParam const&, nn::nex::RankingScoreData const&, unsigned long, unsigned long, nn::nex::DateTime, void const*, unsigned char);
};

} } 
