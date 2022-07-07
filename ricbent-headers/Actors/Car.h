#pragma once

class Car
{
public:
    Car(char const*);
    init(al::ActorInitInfo const&);
    kill();
    calcAnim();
    movement();
    control();
    updateMovingSe();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeRun();
    tryBrake();
    exeBrake();
    exeStop();
};
