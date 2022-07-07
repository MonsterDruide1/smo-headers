#pragma once

class BlockQuestion
{
public:
    BlockQuestion(char const*);
    init(al::ActorInitInfo const&);
    listenApeear();
    listenKill();
    initAfterPlacement();
    appear();
    control();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    attackSensor(al::HitSensor*, al::HitSensor*);
    exeSingleItem();
    exeTenCoin();
    exeDead();
};
