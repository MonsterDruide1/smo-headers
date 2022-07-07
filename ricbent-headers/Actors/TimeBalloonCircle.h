#pragma once

class TimeBalloonCircle
{
public:
    TimeBalloonCircle();
    init(al::ActorInitInfo const&);
    appear();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    setTrans(sead::Vector3<float> const&);
    startStandby();
    startPlay();
    hideModel();
    exeWait();
    exeOut();
    exeIn();
};
