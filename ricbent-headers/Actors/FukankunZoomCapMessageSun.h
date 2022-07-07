#pragma once

class FukankunZoomCapMessageSun
{
public:
    FukankunZoomCapMessageSun(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    exeWait();
};
