#pragma once

class ShellActorStateReaction
{
public:
    ShellActorStateReaction(al::LiveActor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    receiveMsgWithoutTrample(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    receiveMsgNoReaction(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isCapReaction() const;
    exeReactionStart();
    exeReactionWait();
    exeReactionShell();
    exeReactionCap();
    exeReactionCapShell();
    exeReactionEnd();
    ~ShellActorStateReaction();
};
