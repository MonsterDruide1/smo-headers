#pragma once

class BlockBrickBig2D
{
public:
    BlockBrickBig2D(char const*);
    init(al::ActorInitInfo const&);
    startBreak();
    initAfterPlacement();
    kill();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    getActorDimensionKeeper() const;
};
