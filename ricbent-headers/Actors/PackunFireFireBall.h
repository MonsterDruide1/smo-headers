#pragma once

class PackunFireFireBall
{
public:
    PackunFireFireBall(al::LiveActor*);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    killBySwitch();
    setParam(sead::Vector3<float> const&, sead::Quat<float> const&, bool);
    appear();
    exeMove();
    exeYoshiTongueEatBind();
};
