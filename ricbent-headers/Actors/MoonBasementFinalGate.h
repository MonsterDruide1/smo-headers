#pragma once

class MoonBasementFinalGate
{
public:
    MoonBasementFinalGate(char const*);
    init(al::ActorInitInfo const&);
    kill();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    startBreakPillar(int);
    exeWait();
    exeBreakPillar();
    exeBreak();
    exeBreakLast();
    exeBreakLastAfter();
};
