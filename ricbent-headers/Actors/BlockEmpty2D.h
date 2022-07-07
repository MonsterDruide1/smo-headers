#pragma once

class BlockEmpty2D
{
public:
    BlockEmpty2D(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    control();
    appear();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    getActorDimensionKeeper() const;
};
