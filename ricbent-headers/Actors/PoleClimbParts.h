#pragma once

class PoleClimbParts
{
public:
    PoleClimbParts(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    movement();
    calcAnim();
    exeWait();
    exeBreak();
    exeReaction();
};
