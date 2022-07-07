#pragma once

class BlockBrick
{
public:
    BlockBrick(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    attackSensor(al::HitSensor*, al::HitSensor*);
    control();
    exeSingleItem();
    exeTenCoin();
    exeItemEmpty();
    exeDead();
};
