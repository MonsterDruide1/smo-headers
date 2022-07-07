#pragma once

class BalloonFindSearchBalloonServerHolder
{
public:
    BalloonFindSearchBalloonServerHolder(BalloonFindSearchBalloonDownloader*, nn::nex::qVector<nn::nex::DataStoreSearchBalloonResultSet>*, BalloonFindSearchBalloonUpdater*, IFriendsProfileDataHolder*, GameDataHolderAccessor);
    getBalloon() const;
    getBalloon(int, int) const;
    getBalloonSetNum() const;
    getBalloonNum(int) const;
    setup(nn::nex::qVector<nn::nex::DataStoreSearchBalloonResultSet> const&);
    prepare();
    isExistBalloonInCurrentWorld() const;
    playedSelectBalloon();
    brokeSelectBalloon();
    process();
    isReady() const;
    select(int, int);
};
