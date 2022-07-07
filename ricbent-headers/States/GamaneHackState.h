#pragma once

class GamaneHackState
{
public:
    GamaneHackState(al::LiveActor*);
    initialize(al::ActorInitInfo const&);
    appear();
    kill();
    attackSensor(al::HitSensor*, al::HitSensor*);
    isJump() const;
    tryJump();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isHackEnd() const;
    exeWait();
    updateMovement();
    judgeShoot();
    shoot(int);
    exeMove();
    exeQuickTurn();
    exeFall();
    exeJump();
    exeLand();
    exeSwingAttack();
    exeEnd();
    ~GamaneHackState();
};
