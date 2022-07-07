#pragma once

class CameraDemoKeyMoveMapParts
{
public:
    CameraDemoKeyMoveMapParts(char const*);
    init(al::ActorInitInfo const&);
    start();
    stop();
    appearAndSetStart();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    exeStandBy();
    exeDelay();
    exeWait();
    setWaitEndNerve();
    exeMoveSign();
    exeMove();
    exeStopSign();
    exeStop();
    exeCamera();
};
