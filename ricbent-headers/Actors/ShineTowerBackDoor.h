#pragma once

class ShineTowerBackDoor
{
public:
    ShineTowerBackDoor(char const*);
    init(al::ActorInitInfo const&);
    control();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    attachToHostJoint(al::LiveActor const*, char const*);
    isEnter() const;
    exeWait();
    exeEnter();
    exeReaction();
    exeReactionWait();
};
