#pragma once

class MoonBasementFallObj
{
public:
    MoonBasementFallObj(char const*);
    init(al::ActorInitInfo const&);
    appear();
    movement();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isEnableStartFall() const;
    exeFall();
};
