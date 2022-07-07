#pragma once

class PlayerWetControl
{
public:
    PlayerWetControl(al::LiveActor const*, al::LiveActor*, PlayerAreaChecker const*);
    isWet() const;
    reset();
    updateModelRoughness(float);
    recordInWater();
    recordWet();
    recordWaterSurface();
    recordHeavyLandPuddle();
    recordPuddleRolling();
    recordForestWaterFall();
    recordWaterSplash();
    recordWetBySensor();
    update();
};
