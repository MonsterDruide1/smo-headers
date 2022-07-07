#pragma once

class FixMapParts2D
{
public:
    FixMapParts2D(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    getActorDimensionKeeper() const;
};
