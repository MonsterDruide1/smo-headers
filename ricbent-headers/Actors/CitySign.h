#pragma once

class CitySign
{
public:
    CitySign(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeLightOff();
};
