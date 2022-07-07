#pragma once

class HipDropRepairParts
{
public:
    HipDropRepairParts(char const*);
    init(al::ActorInitInfo const&);
    startHide();
    startShow();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeOn();
    exeOnWait();
};
