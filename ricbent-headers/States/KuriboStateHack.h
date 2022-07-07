#pragma once

class KuriboStateHack
{
public:
    KuriboStateHack(KuriboHack*);
    appear();
    calcAnim();
    kill();
    control();
    endHack();
    startHack(al::HitSensor*, al::HitSensor*, al::LiveActor*, bool);
    forceEnd();
    isDemoHackStart() const;
    isDemoHackStartOrHackAnim() const;
    isJumping() const;
    isSandGeyser() const;
    notifyJumpSinkEnd();
    exeDemoHackStart();
    exeDemoHackAnim();
    exeMove();
    updateGravity();
    tryShiftSlide();
    checkTenCoin();
    prepareJump(HackerStateNormalMove*);
    checkShiftSink(HackerStateNormalMove*);
    exeDash();
    exeSink();
    shiftMoveOrDash();
    exeTurn();
    exeJump();
    controlPunchCeiling();
    tryShiftLand();
    exeJumpTurn();
    exeJumpSink();
    exeJumpSinkEnd();
    exeDemoRide();
    endDemoRide();
    exeSandGeyser();
    exeSlide();
    exeLand();
    attackSensor(al::HitSensor*, al::HitSensor*);
    isDemoNerve() const;
    isEnablePunch(al::HitSensor*, al::HitSensor*) const;
    isNerveAir() const;
    isAbove(al::HitSensor*, al::HitSensor*) const;
    isNerveMoveAbove(al::HitSensor*, al::HitSensor*) const;
    isEnableTrample() const;
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    ~KuriboStateHack();
};
