#pragma once

class MapPartsStateCapRotate
{
public:
    MapPartsStateCapRotate(al::LiveActor*);
    initParam(al::ActorInitInfo const&);
    initParam(float, float, float, float);
    appear();
    exeWait();
    tryReceiveMsgRotate(al::SensorMsg const*, al::HitSensor*);
    exeRotate();
    ~MapPartsStateCapRotate();
};
