#pragma once

class BombTailBomb
{
public:
    BombTailBomb(char const*, al::LiveActor const*);
    init(al::ActorInitInfo const&);
    tryStartFollow(char const*);
    kill();
    calcAnim();
    isChanceBomb() const;
    changeAtOnGround(sead::Vector3<float> const*);
    startWaitForDemo(BombTailDamage*, sead::Matrix34<float> const*);
    startBattle();
    setTailThrowTargetPos(sead::Vector3<float> const&);
    startAppear(BombTailDamage*, sead::Matrix34<float> const*);
    startPrepareAttackChance(BombTailDamage*, sead::Matrix34<float> const*);
    startPopUp(sead::Vector3<float> const&, sead::Vector3<float> const&, BombTailDamage*, int);
    startExplosion(bool);
    isReflect() const;
    isReflectChance() const;
    isLandChance() const;
    isExplosioned() const;
    calcThrowChancePos(sead::Vector3<float>*, float);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    startAttackChanceSign(bool, bool);
    startAttackStart(al::LiveActor*);
    startThrow(float);
    invalidateFollowForChanceReflect();
    syncReflectChance();
    tryChanceEnd();
    exeBeforeBattleStart();
    exeAppear();
    exeAppearChance();
    exeFollowWait();
    exeThrowPopup();
    exeBound();
    exeLand();
    exeLandChance();
    exeThrow();
    exeReflect();
    exeReflectCorrect();
    exeExplosionSign();
    exeBlowDown();
    exeExplosion();
    validateFollowForChanceReflect();
};
