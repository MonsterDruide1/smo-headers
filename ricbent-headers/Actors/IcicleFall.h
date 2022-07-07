#pragma once

class IcicleFall
{
public:
    IcicleFall(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    attackSensor(al::HitSensor*, al::HitSensor*);
    isFallEnd() const;
    setFallEnd();
    exeWait();
    exeFallSign();
    exeFall();
    exeStop();
};
