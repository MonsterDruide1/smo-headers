#pragma once

class CityStreetlight
{
public:
    CityStreetlight(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    calcAnim();
    exeWaitOn();
    exeWaitOff();
};
