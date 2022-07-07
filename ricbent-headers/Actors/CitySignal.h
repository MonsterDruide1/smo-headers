#pragma once

class CitySignal
{
public:
    CitySignal(char const*);
    init(al::ActorInitInfo const&);
    movement();
    calcAnim();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWaitRed();
    exeWaitBlue();
    exeWaitOff();
};
