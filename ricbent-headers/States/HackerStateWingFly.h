#pragma once

class HackerStateWingFly
{
public:
    HackerStateWingFly(al::LiveActor*, IUsePlayerHack**, IUsePlayerCollision*);
    appear();
    goFlyRise();
    attackSensor(al::HitSensor*, al::HitSensor*);
    canUpperPunch(al::HitSensor*, al::HitSensor*) const;
    updateFlyLimit();
    judgeStart();
    updateMove();
    isOnGround() const;
    tryUpperPunchToCollision();
    updateFlyAction();
    exeFlyRiseToHighest();
    exeFlyRiseToTop();
    exeFlyTop();
    exeFall();
    exeFallFly();
    exeTrample();
    exeUpperPunch();
    ~HackerStateWingFly();
};
