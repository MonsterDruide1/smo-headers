#pragma once

class CapThrowerStateInvincibleAttack
{
public:
    CapThrowerStateInvincibleAttack(CapThrower*);
    setCap(CapThrowerCap*);
    appear();
    kill();
    control();
    exeStart();
    exeLand();
    exeJump();
    exePressDown();
    exeEnd();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    receiveMsgDamage(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isNeedTurnHead() const;
    ~CapThrowerStateInvincibleAttack();
};
