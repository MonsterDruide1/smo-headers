#pragma once

class ShineChip
{
public:
    ShineChip(char const*, bool, bool);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    makeActorAlive();
    makeActorDead();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    endClipped();
    isGot() const;
    exeAppear();
    exeWait();
    exeGot();
    exeStored();
    exeGoAppear();
};
