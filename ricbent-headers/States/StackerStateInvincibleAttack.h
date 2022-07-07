#pragma once

class StackerStateInvincibleAttack
{
public:
    StackerStateInvincibleAttack(Stacker*, StackerCap*, al::DeriveActorGroup<StackerCap>*);
    appear();
    kill();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeStart();
    exeAttackStart();
    exeAttack();
    move(float);
    exeAttackBoostStart();
    exeAttackBoost();
    exeEnd();
    exePress();
    ~StackerStateInvincibleAttack();
};
