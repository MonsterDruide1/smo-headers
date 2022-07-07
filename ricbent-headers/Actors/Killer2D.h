#pragma once

class Killer2D
{
public:
    Killer2D(char const*, bool, bool);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    appear();
    control();
    updateCollider();
    isStandBy() const;
    launch(int);
    exeAppear();
    exeStandBy();
    exeMove();
    exeWaitForDead();
    exeFallDown();
    exeExplode();
    getActorDimensionKeeper() const;
};
