#pragma once

class MoonBasementSlideObj
{
public:
    MoonBasementSlideObj(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeSlide();
};
