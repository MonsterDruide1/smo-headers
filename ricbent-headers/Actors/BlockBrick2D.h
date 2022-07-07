#pragma once

class BlockBrick2D
{
public:
    BlockBrick2D(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    control();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    attackSensor(al::HitSensor*, al::HitSensor*);
    exeSingleItem();
    exeTenCoin();
    exeItemEmpty();
    exeBreak();
    getActorDimensionKeeper() const;
};
