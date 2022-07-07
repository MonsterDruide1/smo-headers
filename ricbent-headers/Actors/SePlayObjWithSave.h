#pragma once

class SePlayObjWithSave
{
public:
    SePlayObjWithSave(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
};
