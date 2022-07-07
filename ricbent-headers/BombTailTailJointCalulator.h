#pragma once

class BombTailTailJointCalulator
{
public:
    BombTailTailJointCalulator(al::LiveActor*, al::LiveActor const*);
    calcTailBombThrow(sead::Matrix34<float> const*, int, float);
    calcTailBombThrowOld(sead::Matrix34<float> const*);
    calcBounce(sead::Matrix34<float> const*, float);
    calcReturn();
    calcBombFollowMtx(sead::Matrix34<float>*, float);
    validateControl();
    controlTailVisAnim();
    resetSampleFromAnim();
};
