#pragma once

class FrailBox
{
public:
    FrailBox(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    checkBelow();
    movement();
    calcAnim();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    exeWait();
    exeFall();
    exeLand();
    exeDamage();
    exeItemDelay();
    exeLinkPlayerStart();
    checkBelowBrokenBox();
};
