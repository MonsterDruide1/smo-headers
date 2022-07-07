#pragma once

class JokuBomb
{
public:
    JokuBomb(char const*);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    shootReady();
    exeWait();
    exeFall();
    calcFront(sead::Vector3<float>*);
    exeRoll();
    exeExplode();
};
