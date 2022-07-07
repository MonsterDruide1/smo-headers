#pragma once

class TimeBalloonHintArrow
{
public:
    TimeBalloonHintArrow();
    init(al::ActorInitInfo const&);
    appear();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    updateTrans();
    exeWaitBeforeAlpha();
    exeAlpha();
    updateRotate(sead::Vector3<float> const&);
    startAlphaNerve();
};
