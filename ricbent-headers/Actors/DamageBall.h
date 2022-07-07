#pragma once

class DamageBall
{
public:
    DamageBall(char const*, char const*, float, bool, bool);
    init(al::ActorInitInfo const&);
    setLife(int);
    control();
    destroy(bool);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isMoving() const;
    exeAppear();
    exeMoveFront();
    exeMove();
    exeFlyMove();
    exeDestroy();
    launch(sead::Vector3<float> const&, sead::Quat<float> const&, sead::Vector3<float> const&, float, bool, bool, int);
};
