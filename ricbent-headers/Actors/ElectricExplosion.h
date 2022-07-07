#pragma once

class ElectricExplosion
{
public:
    ElectricExplosion(char const*, al::LiveActor*);
    init(al::ActorInitInfo const&);
    attack(int);
    attackSensor(al::HitSensor*, al::HitSensor*);
    exeWait();
    exeAttack();
};
