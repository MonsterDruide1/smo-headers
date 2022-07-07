#pragma once

class SenobiStateHack
{
public:
    SenobiStateHack(Senobi*, al::ActorInitInfo const&, IUsePlayerHack**);
    appear();
    kill();
    endStretch();
    endStretchCamera();
    control();
    updateCameraTarget();
    updateCameraTargetBossBattle();
    updateCameraTargetNormal();
    updatePoseAir();
    tryRequestStretchCamera();
    attackSensor(al::HitSensor*, al::HitSensor*);
    isEnableSendPartsMove(al::HitSensor*, al::HitSensor*) const;
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    updateCollider();
    updateShadow();
    resetCounter();
    getStretchLengthMax() const;
    tryJump(bool);
    tryTurn(bool);
    tryLand();
    tryEndHack();
    setHackStartSwoon();
    isEndCancel() const;
    isEndReset() const;
    exeWaitHackStart();
    exeWaitHackStartSwoon();
    exeHackStart();
    exeMove();
    exeStretch();
    exeShrink();
    exeJump();
    exeBlow();
    exeTrample();
    exeCancelStretch();
    exeLand();
    ~SenobiStateHack();
    getPlayerCollider() const;
};
