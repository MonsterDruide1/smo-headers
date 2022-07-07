#pragma once

namespace al { 

class RankingDirector
{
public:
    RankingDirector();
    ~RankingDirector();
    getNexNetworkStateHolder() const;
    init(nn::nex::Credentials*);
    isAvailable() const;
    startUploadCommonData(void const*, unsigned char);
    tryEndUploadCommonData();
    tryStartUploadScore(nn::nex::RankingScoreData const&);
    tryEndUploadScore();
    startDeleteScore(unsigned int);
    startDeleteScore();
    tryEndDeleteScore();
    startGetRanking(unsigned int, nn::nex::RankingConstants::RankingMode const&, nn::nex::RankingOrderParam const&);
    startGetCachedTopXRanking(unsigned int, nn::nex::RankingOrderParam const&);
    tryEndGetRanking(bool*);
    startGetApproxOrder(unsigned int*, unsigned int, unsigned int, nn::nex::RankingOrderParam const&);
    tryEndGetApproxOrder();
    getSceneObjName() const;
};

} 
