#pragma once

class MayorItem
{
public:
    MayorItem(char const*);
    init(al::ActorInitInfo const&);
    control();
    updateCollider();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isHold() const;
    attackSensor(al::HitSensor*, al::HitSensor*);
    exeWait();
    exeHold();
    exeFall();
    exeRepop();
    collectPresent();
    acceptPresent();
    endPresent();
};
