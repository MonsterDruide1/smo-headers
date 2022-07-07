#pragma once

class LavaStewVeget
{
public:
    LavaStewVeget(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeBreak();
    control();
    updateFinder();
    isExistSurface() const;
    approachSurface();
    syncSurfaceUp();
};
