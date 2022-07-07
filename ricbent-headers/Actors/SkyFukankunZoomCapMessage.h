#pragma once

class SkyFukankunZoomCapMessage
{
public:
    SkyFukankunZoomCapMessage(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    control();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
};
