#pragma once

class NpcStateReaction
{
public:
    create(al::LiveActor*, NpcStateReactionParam const*);
    createForHuman(al::LiveActor*, NpcStateReactionParam const*);
    createForHackActor(al::LiveActor*, NpcStateReactionParam const*);
    appear();
    kill();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    receiveMsgWithoutTrample(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    receiveMsgNoReaction(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isCapReaction() const;
    exeReaction();
    exeCapReaction();
    NpcStateReaction(al::LiveActor*, bool);
    ~NpcStateReaction();
};
