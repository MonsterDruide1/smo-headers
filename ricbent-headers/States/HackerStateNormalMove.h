#pragma once

class HackerStateNormalMove
{
public:
    HackerStateNormalMove(al::LiveActor*, IUsePlayerHack**, char const*, char const*, char const*);
    appear();
    setLandNerve();
    setupFallTime(int);
    changeWaitAnim(char const*);
    changeRunAnim(char const*);
    changeFallAnim(char const*);
    usePlayerTurnControl(bool);
    usePlayerCollision(IUsePlayerCollision*);
    isWaiting() const;
    isFalling() const;
    exeWait();
    updateGroundWait();
    tryPivot();
    exeMove();
    calcGravityDirLocal(sead::Vector3<float>*) const;
    updateGroundMove();
    exeBrake();
    exePivot();
    exeFall();
    ~HackerStateNormalMove();
};
