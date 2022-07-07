#pragma once

class KoopaNumberCounter
{
public:
    KoopaNumberCounter(al::ActorInitInfo const&);
    isValidFireBeam() const;
    getDamage() const;
    isShowCapWide() const;
    startBeam();
    isFirstBeam() const;
    isLastBeam() const;
    addBeamCountAndCheckEnd();
    isEnableStartDamageBall() const;
    tryStartDamageBall();
    isBombDamageBall(int) const;
    addDamageBallCountAndCheckEnd();
    addDamageBallContinueSkipCountAndCheckSkip();
    isDamageBallContinueSkipped() const;
    tryStartAttackTail(KoopaCap*);
    isExecuteAttackTailTwice() const;
    addAttackTailCountAndCheckEnd();
    isGuardPunchHitAction() const;
    getPunchHitSeParamPtr() const;
    addPunchHitCountAndPowerUpCap(KoopaCap*);
    recoverPunchHitCount(KoopaCap*);
    startPunchHitAction(al::LiveActor*) const;
    makeDamageAnimSeName(sead::BufferedSafeStringBase<char>*) const;
    receiveDamageAndCheckDead(KoopaCap*);
};
