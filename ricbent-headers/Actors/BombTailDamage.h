#pragma once

class BombTailDamage
{
public:
    BombTailDamage();
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    startAppear(sead::Vector3<float> const&, int, bool);
    forceDisappear();
    exeBeforeBattle();
    exeDelay();
    exeAppear();
    exeWait();
    exeDisappear();
    exeAppearChance();
    exeWaitChance();
    exeDisappearChance();
};
