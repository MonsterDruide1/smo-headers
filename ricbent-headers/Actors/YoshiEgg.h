#pragma once

class YoshiEgg
{
public:
    YoshiEgg(al::LiveActor const*, IUsePlayerCollision const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    initPlacementEgg();
    appearEgg();
    isEndAppear() const;
    isBreak() const;
    exeAppear();
    exeWait();
    exeBreak();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
};
