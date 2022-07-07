#pragma once

class Togezo
{
public:
    Togezo(char const*);
    init(al::ActorInitInfo const&);
    listenAppear();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    attackSensor(al::HitSensor*, al::HitSensor*);
    control();
    updateCollider();
    exeWait();
    exeWander();
    exeTurn();
    exeFind();
    exeChase();
    exeFall();
    exeLand();
    exeAttack();
    exeCapHit();
    exeBlowDown();
};
