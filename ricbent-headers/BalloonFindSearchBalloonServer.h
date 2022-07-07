#pragma once

class BalloonFindSearchBalloonServer
{
public:
    BalloonFindSearchBalloonServer(IUseTimeBalloonConst const*);
    getOwnerName() const;
    played();
    broke();
    getPrizeCoin() const;
    getEntryCoin() const;
    getRetryCoin() const;
    setImageTo(al::LiveActor*) const;
    getTextureForLayout() const;
    setup(nn::nex::DataStoreSearchBalloonResult const&);
    getPrincipalID() const;
    getPos() const;
    getPlayerRank() const;
    getDataId() const;
    isFriendBalloon() const;
    getOwnerAchievementDataId() const;
};
