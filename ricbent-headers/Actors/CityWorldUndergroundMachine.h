#pragma once

class CityWorldUndergroundMachine
{
public:
    CityWorldUndergroundMachine(char const*);
    init(al::ActorInitInfo const&);
    startMoveSign();
    startStepMoveSign();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    startAcitonSync(char const*);
    exeStartDemoRequest();
    exeMoveSign();
    exeMove();
    exeStepDemoRequest();
    exeStepMoveSign();
    exeShineAppear();
    exeStepMove();
};
