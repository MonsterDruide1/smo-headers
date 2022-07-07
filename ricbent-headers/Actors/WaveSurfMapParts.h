#pragma once

class WaveSurfMapParts
{
public:
    WaveSurfMapParts(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isExistSurface() const;
    control();
    updateFinder();
    approachSurface();
    syncSurfaceUp();
    exeWait();
    exeSink();
    exeSinkDeep();
    getSurfaceHeight() const;
};
