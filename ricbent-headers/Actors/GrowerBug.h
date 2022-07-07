#pragma once

class GrowerBug
{
public:
    GrowerBug(char const*, bool);
    init(al::ActorInitInfo const&);
    onKill();
    appear();
    updateCollider();
    exeAppear();
    exeWander();
    exeFind();
    exeAttackSign();
    exeAttack();
    exeBurst();
    exeBlowDown();
    exePressDown();
    exeDead();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
};
