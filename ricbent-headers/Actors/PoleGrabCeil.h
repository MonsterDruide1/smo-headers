#pragma once

class PoleGrabCeil
{
public:
    PoleGrabCeil(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    control();
    exeWait();
    exeGrab();
    exeGrabEnd();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
};
