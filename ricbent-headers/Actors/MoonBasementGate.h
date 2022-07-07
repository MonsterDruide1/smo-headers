#pragma once

class MoonBasementGate
{
public:
    MoonBasementGate(char const*);
    init(al::ActorInitInfo const&);
    kill();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    validate();
    moveSlideToTarget(sead::Vector3<float> const&);
    exeInvalid();
    exeWait();
    exeBreak();
    exeBreakAfter();
    exeClimaxCamera();
};
