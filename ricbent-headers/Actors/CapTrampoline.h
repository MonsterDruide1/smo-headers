#pragma once

class CapTrampoline
{
public:
    CapTrampoline(char const*);
    init(al::ActorInitInfo const&);
    listenAppear();
    initAfterPlacement();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    exeWait();
    exeOpenStart();
    exeOpen();
    exeReOpen();
    exeJump();
    exePressReaction();
    exeClose();
};
