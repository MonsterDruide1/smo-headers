#pragma once

class MakeCollisionData
{
public:
    MakeCollisionData(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    appear();
    kill();
    control();
    exeWait();
    exeStop();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
};
