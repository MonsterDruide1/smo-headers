#pragma once

class KillerLauncherDot
{
public:
    KillerLauncherDot(char const*);
    init(al::ActorInitInfo const&);
    startLaunch();
    endLaunch();
    initAfterPlacement();
    appear();
    kill();
    control();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeLaunch();
    exeSleep();
    exeDelay();
    getActorDimensionKeeper() const;
};
