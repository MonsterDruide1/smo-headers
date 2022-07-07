#pragma once

class NexCachedRankingDownloader
{
public:
    ~NexCachedRankingDownloader();
    init(al::ActorInitInfo const&);
    getRankingDirector() const;
    isAvailableRanking() const;
    requestDownloadCachedTop(RankingCategory);
    isFinished() const;
    isSuccess() const;
    isFailure() const;
    isErrorRankingNotFound() const;
    getCachedResultNum() const;
    getCachedResultMaxNum() const;
    getCachedResultOrder(unsigned int*, int);
    getCachedResultScore(unsigned int*, int);
    getCachedResultNameW(sead::WFixedSafeString<128>*, int);
    getCachedPrincipalId(unsigned long*, int) const;
    tryGetRankingData(nn::nex::RankingRankData const*, int) const;
    exeGetCachedTopRanking();
    exeFinish();
};
