#pragma once

class GrowFlowerSeed
{
public:
    GrowFlowerSeed(char const*, bool);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    tryEmitEffectFish();
    kill();
    movement();
    control();
    vanish();
    updateCollider();
    exeWait();
    exeWaitWater();
    exeHold();
    exeThrow();
    exeImplant();
    exeInGround();
    exeRevival();
    exeSink();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    getShine() const;
};
