#pragma once

class Objex
{
public:
    Objex(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeAttackSlide();
    exeDamage();
    exeAppearCrystal();
    exeWaitCrystal();
};
