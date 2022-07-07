#pragma once

class StackerCap
{
public:
    StackerCap(char const*, al::LiveActor*);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    killAppearItem();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    kill();
    control();
    appear();
    appearOnHead();
    appearOnGround();
    startAttack();
    endAttack();
    blow(sead::Vector3<float> const&);
    setMove();
    isOnHead() const;
    isBoost() const;
    startInvincible();
    exeAppear();
    exeAppearInvincible();
    exeOnHead();
    exeOnHeadAttack();
    exeTakeOff();
    move();
    exeFall();
    exeLand();
    exeMove();
    exeMoveBoostStart();
    exeMoveBoost();
    exeInvincibleAttack();
    exePressDown();
    startRest();
    endRest();
    exeRestStart();
    exeRest();
    exeRestEnd();
};
