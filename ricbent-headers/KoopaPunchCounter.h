#pragma once

class KoopaPunchCounter
{
public:
    KoopaPunchCounter(int);
    isHitGuardAction() const;
    startPhaseCheck(int);
    recoveryPhase();
    addPunch();
    isPunchFinish() const;
    getAnimName() const;
    makeSeInfo(sead::BufferedSafeStringBase<char>*, float*) const;
    isExecuteAttackTailOverTwice() const;
    tryStartAttackTailAndNextPhase();
    getAttackTailNum() const;
};
