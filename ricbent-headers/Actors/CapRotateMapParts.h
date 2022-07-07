#pragma once

class CapRotateMapParts
{
public:
    CapRotateMapParts(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    getRotateCount() const;
    deactivate();
    exeWait();
};
