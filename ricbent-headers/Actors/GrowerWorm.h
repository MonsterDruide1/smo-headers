#pragma once

class GrowerWorm
{
public:
    GrowerWorm(char const*);
    init(al::ActorInitInfo const&);
    onKill();
    appear();
    isEnableReAppear() const;
    exeWait();
    exeAppear();
    exeMove();
    exeTurn();
    exeBornSign();
    exeBorn();
    exeBornDead();
    exeDead();
    exePressDown();
    exeBlowDown();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
};
