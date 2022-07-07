#pragma once

class Coin2D
{
public:
    Coin2D(char const*);
    init(al::ActorInitInfo const&);
    listenAppear();
    initAfterPlacement();
    control();
    appear();
    endClipped();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    appearCountUp();
    exeAppear();
    exeWait();
    exeGot();
    exeCountUp();
    get();
    isGot() const;
    getActorDimensionKeeper() const;
};
