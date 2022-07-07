#pragma once

namespace al { 

class RankingStateGetApproxOrder
{
public:
    RankingStateGetApproxOrder(al::IUseRanking*);
    ~RankingStateGetApproxOrder();
    appear();
    setCategory(unsigned int);
    setScore(unsigned int);
    setOrderPtr(unsigned int*);
    setLengthAndOffset(unsigned char, unsigned int);
    setOrderCalculation113();
    setOrderCalculation123();
    setFilterGroupIndex0(unsigned char);
    setFilterGroupIndex1(unsigned char);
    setTimeScopeCustom0();
    setTimeScopeCustom1();
    exeDownload();
};

} 
