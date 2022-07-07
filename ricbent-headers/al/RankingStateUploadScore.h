#pragma once

namespace al { 

class RankingStateUploadScore
{
public:
    RankingStateUploadScore(al::IUseRanking*);
    ~RankingStateUploadScore();
    appear();
    setCategory(unsigned int);
    setScore(unsigned int);
    setParam(unsigned long);
    setGroups(unsigned char, unsigned char);
    setOrderByAsc();
    setOrderByDesc();
    setUpdateModeNormal();
    setUpdateModeDeleteOld();
    isSuccess() const;
    isFailure() const;
    exeUpload();
    exeEnd();
};

} 
