#pragma once

class BrosStateHackMovement
{
public:
    BrosStateHackMovement(BrosHackBase*, al::ActorInitInfo const&, IUsePlayerHack**);
    init();
    appear();
    control();
    kill();
    isEndReset();
    isEndEnemyMovement();
    exeStart();
    exeWait();
    tryCollideJump();
    exeJump();
    exeJumpEnd();
    exeJumpAttack();
    exeAttack();
    exeFall();
    exeEndReset();
    exeEndEnemyMovement();
    exeSlide();
    exeBlow();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    ~BrosStateHackMovement();
};
