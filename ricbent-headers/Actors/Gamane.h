#pragma once

class Gamane
{
public:
    Gamane(char const*);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    startHack(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    endRefract(int);
    control();
    updateRefract();
    endClipped();
    updateCollider();
    exeWait();
    updateMovement();
    startRefract(int);
    exeFind();
    exeRunaway();
    exeFall();
    exeLand();
    exeSwoon();
    exeHackStart();
    exeHack();
    exeTrampled();
    exePressDown();
    exeBlowDown();
};
