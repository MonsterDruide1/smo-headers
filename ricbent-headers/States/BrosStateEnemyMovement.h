#pragma once

class BrosStateEnemyMovement
{
public:
    BrosStateEnemyMovement(BrosHackBase*, al::ActorInitInfo const&, IUsePlayerHack**);
    init();
    appear();
    control();
    cancelHack();
    reset(bool);
    isEndReset();
    isEndHack();
    tryAppearEnemyCap();
    tryBlowDown(sead::Vector3<float> const&, al::HitSensor*);
    exeAppear();
    exeWait();
    exeJumpStart();
    exeJumpStartMove();
    exeFall();
    exeFallJumpEnd();
    exeJump();
    exeJumpEnd();
    exeAttackSign();
    exeAttack();
    exeAttackHit();
    exeBlowDown();
    exePressDown();
    exePressDownBlow();
    exeWaitHack();
    exeEndReset();
    exeEndHack();
    exeHackStartDemoWait();
    exeHackStartDemo();
    exeCapReaction();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    ~BrosStateEnemyMovement();
};
