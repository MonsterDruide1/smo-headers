#pragma once

class BalloonFindDataAccessor
{
public:
    BalloonFindDataAccessor(al::DataStoreDirector*, GameDataHolderAccessor, FriendsProfileDataHolder*, al::FriendsProfileDownloader*);
    update();
    getDataStoreDirector() const;
    startDownloadSearchBalloon(unsigned short, unsigned char);
    getMyBalloonHolder() const;
    getSearchBalloonHolder() const;
    getMyAchievementHolder() const;
    startDownloadMyAchievementAndBalloons();
};
