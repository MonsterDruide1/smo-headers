#pragma once

class CapAppearTarget
{
public:
    CapAppearTarget(char const*, CapAppearMapParts*);
    init(al::ActorInitInfo const&);
    appear();
    switchAppear();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeReaction();
    exeAppear();
    exeDisappear();
    exeDead();
};
