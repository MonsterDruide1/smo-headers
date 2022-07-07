#pragma once

class KoopaDoveEmitter
{
public:
    tryCreate(al::ActorInitInfo const&);
    KoopaDoveEmitter(al::ActorInitInfo const&);
    tryEmitForFirstJumpEnd();
    emitForDamageCollide(sead::Vector3<float> const&, sead::Vector3<float> const&);
};
