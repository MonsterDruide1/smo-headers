#pragma once

class PlayerFireBall2D3D
{
public:
    PlayerFireBall2D3D(al::LiveActor const*);
    init(al::ActorInitInfo const&);
    shoot(bool);
    exeMove();
    boundWall(sead::Vector3<float> const&, sead::Vector3<float> const&);
    applyGravity();
    turn(sead::Vector3<float> const&);
    exeDead();
    updateCollider();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
};
