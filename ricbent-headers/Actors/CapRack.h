#pragma once

class CapRack
{
public:
    CapRack(char const*);
    init(al::ActorInitInfo const&);
    offCapWithStageSwitch();
    initByDoorAreaChangeCap(al::ActorInitInfo const&);
    initAfterPlacement();
    makeActorDead();
    isRack();
    offCap();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    offCapByDoor();
    exeOffWait();
    exeRack();
    exeRackWait();
    exeOff();
    exeFreeze();
};
