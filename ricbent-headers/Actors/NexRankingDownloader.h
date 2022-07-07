#pragma once

class NexRankingDownloader
{
public:
    ~NexRankingDownloader();
    init(al::ActorInitInfo const&);
    getRankingDirector() const;
    isAvailableRanking() const;
    requestDownload(RankingCategory, int, bool, bool);
    isFinished() const;
    isSuccess() const;
    isFailure() const;
    isErrorRankingNotFound() const;
    getResultNum() const;
    getResultOrder(unsigned int*, int);
    getResultScore(unsigned int*, int);
    getResultNameW(sead::WFixedSafeString<128>*, int);
    getResultName(sead::FixedSafeString<128>*, int);
    getPrincipalId(unsigned long*, int) const;
    tryGetRankingData(nn::nex::RankingRankData const*, int) const;
    exeGetRanking();
    exeFinish();
};
