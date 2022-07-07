#pragma once

class KillerLauncher
{
public:
    KillerLauncher(char const*);
    init(al::ActorInitInfo const&);
    startLaunch();
    endLaunch();
    killAll();
    killAllAndThis();
    control();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeStop();
    exeDelay();
    exeWait();
    exeStandBy();
    exeLaunch();
};
