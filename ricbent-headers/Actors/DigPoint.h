#pragma once

class DigPoint
{
public:
    DigPoint(char const*);
    init(al::ActorInitInfo const&);
    appear();
    kill();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    tryUpdateHintTrans(sead::Vector3<float> const&);
    emitGlowEffect();
    exeWait();
    exeItemDelay();
};
