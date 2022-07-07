#pragma once

namespace al { 

class RankingStateGetRanking
{
public:
    RankingStateGetRanking(al::IUseRanking*, bool);
    ~RankingStateGetRanking();
    appear();
    setCategory(unsigned int);
    setLengthAndOffset(unsigned char, unsigned int);
    setOrderCalculation113();
    setOrderCalculation123();
    setFilterGroupIndex0(unsigned char);
    setFilterGroupIndex1(unsigned char);
    setTimeScopeCustom0();
    setTimeScopeCustom1();
    setRankingModeRange();
    setRankingModeNear();
    setRankingModeFriendRange();
    setRankingModeFriendNear();
    setRankingModeUser();
    isDownloadSucceeded() const;
    exeDownload();
    exeEnd();
};

} 
