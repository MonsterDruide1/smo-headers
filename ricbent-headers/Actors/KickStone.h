#pragma once

class KickStone
{
public:
    KickStone(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    movement();
    control();
    kill();
    updateCollider();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    endWait();
    exeFall();
    exeRoll();
    exeWater();
    exeRestartPrepare();
    exeEatPrepare();
    exeEatBy();
    exeHold();
    endHold();
};
