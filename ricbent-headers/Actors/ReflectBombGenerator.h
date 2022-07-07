#pragma once

class ReflectBombGenerator
{
public:
    ReflectBombGenerator(char const*);
    init(al::ActorInitInfo const&);
    startLaunch();
    endLaunch();
    control();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeStop();
    exeDelay();
    exeWait();
    findReflectBomb() const;
    exeStandBy();
    exeLaunch();
};
