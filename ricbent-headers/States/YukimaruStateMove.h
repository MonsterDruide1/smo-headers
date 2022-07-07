#pragma once

class YukimaruStateMove
{
public:
    YukimaruStateMove(al::LiveActor*, YukimaruInput*, sead::Quat<float>*);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    startRun(bool);
    resetInput();
    exeRunStart();
    updateMove();
    exeRun();
    exeJump();
    exeJumpEnd();
    updateMoveNoInput();
    updateMove(YukimaruInput*);
    reactionBound(float, bool);
    updateScale();
    startScaleBoundReaction(float);
    resetEffect();
    ~YukimaruStateMove();
};
