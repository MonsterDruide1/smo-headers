#pragma once

class MoonBasementFloor
{
public:
    MoonBasementFloor(char const*);
    init(al::ActorInitInfo const&);
    startFallBySwitch();
    movement();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeFallSignStart();
    exeFallSign();
    exeFallSignBySwitch();
    exeFall();
};
