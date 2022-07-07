#pragma once

class KoopaRingBeamEmitter
{
public:
    KoopaRingBeamEmitter(al::ActorInitInfo const&, bool);
    emit(sead::Vector3<float> const&);
    emitHipDrop(sead::Vector3<float> const&);
    emitAttackTail(sead::Vector3<float> const&);
    cancelAll();
    killAll();
    killForDemoAll();
};
