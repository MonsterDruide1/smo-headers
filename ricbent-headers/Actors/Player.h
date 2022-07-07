#pragma once

class Player
{
public:
    Player(char const*, char const*, int);
    init(al::ActorInitInfo const&);
    exeWait();
    exeRun();
    exeJump();
    exeFall();
    exeDamage();
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
};
