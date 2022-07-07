#pragma once

class LifeUpItem2D
{
public:
    LifeUpItem2D(char const*);
    init(al::ActorInitInfo const&);
    appearPopUp();
    appearAmiiboTouch();
    get();
    exePopUp();
    exeWait();
    exeGet();
    exeAutoGetDemo();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    getActorDimensionKeeper() const;
};
