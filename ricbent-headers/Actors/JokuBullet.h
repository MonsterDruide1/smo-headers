#pragma once

class JokuBullet
{
public:
    JokuBullet(char const*);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    turnToPlayer(sead::Vector3<float>);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    exeWait();
    exeFly();
    exeExplodeSign();
    exeExplode();
};
