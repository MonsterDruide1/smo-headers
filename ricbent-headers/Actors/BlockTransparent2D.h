#pragma once

class BlockTransparent2D
{
public:
    BlockTransparent2D(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    getActorDimensionKeeper() const;
};
