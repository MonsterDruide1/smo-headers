#pragma once

class RotateTarget
{
public:
    getAliveTargetNum() const;
    RotateTarget(char const*);
    init(al::ActorInitInfo const&);
    saveKill();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    exeRotate();
    exeSlowdown();
    exeStop();
    exeBreak();
};
