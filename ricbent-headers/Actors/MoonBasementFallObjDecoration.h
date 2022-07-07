#pragma once

class MoonBasementFallObjDecoration
{
public:
    MoonBasementFallObjDecoration(char const*);
    init(al::ActorInitInfo const&);
    turnEffectOff();
    startFalling();
    stopFalling();
    initAfterPlacement();
    exeStandBy();
    exeAppear();
    exeFall();
    exeVanish();
    exeVanishNoEffect();
};
