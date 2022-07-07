#pragma once

class BlockQuestion2D
{
public:
    BlockQuestion2D(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    appear();
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    endClipped();
    exeSingleItem();
    exeTenCoin();
    getActorDimensionKeeper() const;
};
