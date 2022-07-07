#pragma once

class AppearSwitchFixMapParts
{
public:
    AppearSwitchFixMapParts(char const*);
    init(al::ActorInitInfo const&);
    appear();
    movement();
    calcAnim();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
};
