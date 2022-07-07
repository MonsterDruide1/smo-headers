#pragma once

class FixMapPartsFukankunZoomCapMessage
{
public:
    FixMapPartsFukankunZoomCapMessage(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    appear();
    movement();
    calcAnim();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
};
