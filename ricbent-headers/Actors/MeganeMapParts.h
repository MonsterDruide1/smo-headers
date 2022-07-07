#pragma once

class MeganeMapParts
{
public:
    MeganeMapParts(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    updateAlpha();
    exeHide();
    exeOn();
    exeShow();
    exeOff();
    exeSwitchAppear();
    control();
};
