#pragma once

class Closet
{
public:
    Closet(char const*);
    init(al::ActorInitInfo const&);
    control();
    isOpenEnd();
    isSelect();
    tryCloseDoor();
    exeWait();
    exeOpen();
    exeSelect();
    exeClose();
    exeWearEnd();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    attackSensor(al::HitSensor*, al::HitSensor*);
};
