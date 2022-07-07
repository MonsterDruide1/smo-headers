#pragma once

class BalloonFindMyBalloonServer
{
public:
    BalloonFindMyBalloonServer();
    setImageTo(al::LiveActor*) const;
    getOwnerName() const;
    setup(nn::nex::DataStoreFetchMyInfosBalloonResult const&);
    getPos() const;
    getPlayerRank() const;
    setPos(sead::Vector3<float> const&);
    setPlayerRank(int);
    getPayCoinNum() const;
    getPlayedCount() const;
    getBrokeCount() const;
    getFriendPlayedCount() const;
};
