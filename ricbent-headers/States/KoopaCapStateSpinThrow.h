#pragma once

class KoopaCapStateSpinThrow
{
public:
    KoopaCapStateSpinThrow(al::LiveActor*);
    startSpinThrowChase(sead::Vector3<float> const*, float, bool);
    exeSpinStart();
    exeSpin();
    ~KoopaCapStateSpinThrow();
};
