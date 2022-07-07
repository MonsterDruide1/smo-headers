#pragma once

class Long
{
public:
    Long(char const*, bool);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    appear();
    appearWait();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    startColorAnim(int);
    trySink();
    exeAppear();
    exeWait();
    exeTurn();
    exeChase();
    exeSink();
    exeFall();
    exeAttackSuccess();
    exeReaction();
    exePressDown();
};
