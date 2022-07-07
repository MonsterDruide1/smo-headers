#pragma once

namespace al { 

class RankingStateUploadCommonData
{
public:
    RankingStateUploadCommonData(al::IUseRanking*);
    appear();
    set(void const*, unsigned char);
    isSuccess() const;
    isFailure() const;
    exeUpload();
    exeEnd();
    ~RankingStateUploadCommonData();
};

} 
