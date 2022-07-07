#pragma once

class SenobiMoveMapParts
{
public:
    SenobiMoveMapParts(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    exeWait();
    exeMove();
    exeStop();
    exeStopEnd();
    exeBack();
};
