#pragma once

class YukimaruStateHack
{
public:
    YukimaruStateHack(Yukimaru*);
    start(al::HitSensor*, al::HitSensor*, bool);
    tryStartDirect(al::SensorMsg const*);
    onHackShadowAndSilhouette();
    appear();
    kill();
    offHackShadowAndSilhouette();
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWaitEnterMario();
    exeHackStart();
    exeMove();
    exeCancel();
    exeDamage();
    exeKill();
    exeTalkDemo();
    isEndCancel() const;
    isEndDamage() const;
    isEndKill() const;
    updateMoveNoInput();
    updateScale();
    resetMoveEffect();
    isTriggerJump() const;
    isHoldJump() const;
    calcInputVec(sead::Vector3<float>*) const;
    ~YukimaruStateHack();
};
