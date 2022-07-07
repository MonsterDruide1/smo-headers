#pragma once

class Nokonoko2D
{
public:
    Nokonoko2D(char const*);
    init(al::ActorInitInfo const&);
    reset();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    startMove();
    control();
    exeWalk();
    exeKouraStop();
    exeKouraMoveNoTouch();
    exeKouraMove();
    exeKouraEnd();
    exeDamage();
    exeDamagePoison();
    exeHideWait();
    exeAppearWait();
    getActorDimensionKeeper() const;
};
