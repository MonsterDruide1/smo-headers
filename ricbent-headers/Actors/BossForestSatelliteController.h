#pragma once

class BossForestSatelliteController
{
public:
    BossForestSatelliteController(int);
    init(al::ActorInitInfo const&);
    appear();
    isDead() const;
    checkCoreBroken(al::LiveActor**) const;
    isWait() const;
    isAppeared() const;
    doMove();
    doWait();
    countActiveSatellitesNum() const;
    updateSatellitesPos(float);
    exeAppear();
    exeWait();
    exeMove();
};
