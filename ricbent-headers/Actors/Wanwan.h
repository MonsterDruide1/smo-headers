#pragma once

class Wanwan
{
public:
    Wanwan(char const*);
    init(al::ActorInitInfo const&);
    onDitherRadiusAdd();
    offDitherRadiusAdd();
    forceKill();
    makeActorDead();
    calcAnim();
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
    validateImpactSensor();
    isEnableEnemyAttack() const;
    sendMsgMyPush(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    tryEndCamera();
    isEnableHack() const;
    isEnableTrampleAttack() const;
    isEnableCapAttack() const;
    exeDeactive();
    endDeactive();
    exeWait();
    updateVelocityPull(bool);
    updateVelocityGround(bool);
    exeTurn();
    exeAttackSign();
    exeAttackPull();
    exeAttack();
    tryAttackToCollide();
    exeAttackEnd();
    setNerveReturn();
    exeSwoon();
    exeHack();
    tryStartCamera();
    endHack();
    exeReturn();
    exeReturnEnd();
    exeBackChain();
    updateBack();
    exeBack();
    endBack();
    exeBackEnd();
    exeBackReturn();
    exeBlockAttack();
    exeHit();
    exeHitEnd();
    exeTrampled();
    exeBlowDown();
    exeReset();
    exeHoleIn();
};
