#pragma once

class KoopaCapPlayerBinder
{
public:
    KoopaCapPlayerBinder(KoopaLandPointHolder const*);
    kill();
    tryReceiveMsgBindStart(al::SensorMsg const*);
    startPrepareCatchKoopaCapAndTryStartPuppetImmediately(al::HitSensor*);
    tryStartPuppetCatchKoopaCap(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    startPrepareKnockBackPunchL(al::HitSensor*);
    startPrepareKnockBackPunchR(al::HitSensor*);
    tryStartPuppetKnockBackPunch(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    startPrepareFinishPunchL(al::HitSensor*);
    startPrepareFinishPunchR(al::HitSensor*);
    tryStartPuppetFinishPunch(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    tryStartPunchAndFocusTarget(al::SensorMsg const*, al::HitSensor*, al::HitSensor*, sead::Vector3<float> const&);
    startPunchFinishKeepBind(bool);
    tryCancelBind(al::SensorMsg const*);
    copyPuppetQT(al::LiveActor*) const;
    tryStartPunchAction(bool);
    endPunchBind();
    tryCancelPunchFinishBind();
    exeWait();
    exeCatchKoopaCapPrepare();
    exeCatchKoopaCap();
    exePunchPrepare();
    exePunch();
    exePunchKnockBackPrepare();
    exePunchKnockBack();
    exePunchFinishPrepare();
    exePunchFinish();
    ~KoopaCapPlayerBinder();
};
