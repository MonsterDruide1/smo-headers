#pragma once

class BalloonFindMyAchievementHolder
{
public:
    BalloonFindMyAchievementHolder(nn::nex::DataStoreFetchMyInfosResult const*, BalloonFindMyAchievementUploader*);
    prepare();
    setup(nn::nex::DataStoreFetchMyInfosResult const*);
    isReady() const;
    getTotalPlayedCoinNum() const;
    getTotalFindCoinNum() const;
    getTotalPlayedCount() const;
    getTotalFindCount() const;
    getMaxChainPlayedCount() const;
    getMaxChainFindCount() const;
};
