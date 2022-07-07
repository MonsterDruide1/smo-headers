#pragma once

class RiseMapParts
{
public:
    RiseMapParts(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isStop() const;
    control();
    setStop();
    setStopPose();
    exeWait();
    exeMove();
    start();
    exePause();
    exeStopBefore();
    exeStop();
    startRise();
};
