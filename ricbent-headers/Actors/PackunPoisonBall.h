#pragma once

class PackunPoisonBall
{
public:
    PackunPoisonBall(al::LiveActor*, bool);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    killBySwitch();
    setParam(sead::Vector3<float> const&, sead::Quat<float> const&, bool, float, float, float);
    appear();
    exeMove();
    exeFall();
    exePaint();
};
