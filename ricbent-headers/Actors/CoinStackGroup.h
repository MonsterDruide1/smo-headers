#pragma once

class CoinStackGroup
{
public:
    CoinStackGroup(char const*);
    init(al::ActorInitInfo const&);
    generateCoinStackGroup(al::ActorInitInfo const&, int);
    makeStackAppear();
    makeStackDisappear();
    control();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    makeActorDead();
    makeActorAlive();
    setStackAsCollected(CoinStack*);
    updateClippingInfo(unsigned int);
    validateClipping();
};
