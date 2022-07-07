#pragma once

class KoopaRingBeam
{
public:
    KoopaRingBeam(char const*);
    init(al::ActorInitInfo const&);
    initLineLight(al::ActorInitInfo const&);
    killForDemo();
    kill();
    control();
    calcAnim();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    emit(sead::Vector3<float> const&, sead::Vector3<float> const&);
    emitHipDrop(sead::Vector3<float> const&, sead::Vector3<float> const&, int);
    emitAttackTail(sead::Vector3<float> const&, sead::Vector3<float> const&);
    cancel();
    exeDelayHipDrop();
    exeAttack();
    exeAttackHipDrop();
    exeAttackTail();
    exeAttackCancel();
    exeAttackEnd();
};
