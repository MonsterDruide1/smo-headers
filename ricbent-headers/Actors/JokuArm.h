#pragma once

class JokuArm
{
public:
    JokuArm(char const*);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    appear();
    damage();
    exeWait();
    exeDamage();
};
