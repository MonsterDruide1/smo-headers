#pragma once

class StackerStateNormalAttack
{
public:
    StackerStateNormalAttack(Stacker*);
    appear();
    kill();
    control();
    attackSensor(al::HitSensor*, al::HitSensor*, bool);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*, bool);
    receiveMsgDamage(al::SensorMsg const*, al::HitSensor*, al::HitSensor*, bool);
    isAttack() const;
    isSwoon() const;
    exeFirstWait();
    exeMove();
    exeAttackSuccess();
    exeAttackSign();
    exeAttack();
    exeAttackEnd();
    exeSwoonStart();
    exeSwoon();
    exeSwoonEnd();
    exeSwoonReaction();
    exeBounce();
    exePress();
    ~StackerStateNormalAttack();
};
