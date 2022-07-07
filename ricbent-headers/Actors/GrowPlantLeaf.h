#pragma once

class GrowPlantLeaf
{
public:
    GrowPlantLeaf();
    init(al::ActorInitInfo const&);
    appear();
    startGrow();
    endGrow();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
};
