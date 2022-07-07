#pragma once

class BarrelStack2D
{
public:
    BarrelStack2D(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    doBreak();
    exeWait();
    exeBreak();
    getActorDimensionKeeper() const;
};
