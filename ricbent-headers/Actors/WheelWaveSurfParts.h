#pragma once

class WheelWaveSurfParts
{
public:
    WheelWaveSurfParts(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    control();
    updateFinder();
    getBaseTrans(sead::Vector3<float>*) const;
    isExistSurface() const;
    approachSurface();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    appearAndSetStart();
    exeWait();
    exeMove();
};
