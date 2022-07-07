#pragma once

class CapAppearMapParts
{
public:
    CapAppearMapParts(char const*);
    init(al::ActorInitInfo const&);
    listenAppear();
    startWait();
    killAll();
    control();
    appear();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeAppear();
    exeAppearEnd();
    exeWait();
    exeReaction();
    exeWaitForever();
    exeDisappear();
};
