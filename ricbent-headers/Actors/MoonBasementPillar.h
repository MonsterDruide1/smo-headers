#pragma once

class MoonBasementPillar
{
public:
    MoonBasementPillar(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    kill();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isBreakLastHit() const;
    exeWait();
    exeBreak();
    exeBridgeStart();
    exeBridgeStartHit();
    exeBridgeStartHitAfter();
    exeBridge();
    exeBreakLast();
    exeBreakLastHit();
};
