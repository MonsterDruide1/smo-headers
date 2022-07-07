#pragma once

class NexRankingUploader
{
public:
    NexRankingUploader(char const*, char const*);
    ~NexRankingUploader();
    init(al::ActorInitInfo const&);
    getRankingDirector() const;
    isAvailableRanking() const;
    uploadScore(unsigned int, RankingCategory, bool);
    uploadName(sead::WFixedSafeString<128> const&);
    uploadAccountNickname();
    tryLoadNickName();
    isSuccess() const;
    isFailure() const;
    exeUploadScore();
    exeUploadCommonData();
    exeEnd();
};
