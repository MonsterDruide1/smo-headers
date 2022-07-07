#pragma once

class KuriboWingHackState
{
public:
    KuriboWingHackState(al::LiveActor*, IUsePlayerHack**);
    appear();
    control();
    kill();
    exeWait();
    exeWalk();
    exeLand();
    exeFly();
    exeFall();
    exeAttackTrample();
    attackSensor(al::HitSensor*, al::HitSensor*);
    resetFlyLimit(sead::Vector3<float> const&);
    ~KuriboWingHackState();
};
