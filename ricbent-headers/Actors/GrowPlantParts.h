#pragma once

class GrowPlantParts
{
public:
    GrowPlantParts(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    exeWait();
    exeGrow();
    exeGrowEnd();
    trySetNerveGrow();
    trySetNerveGrowEnd();
};
