#pragma once

class PlayerPainPartsKeeper
{
public:
    PlayerPainPartsKeeper(al::LiveActor const*, PlayerCostumeInfo const*);
    update();
    updateNeedle();
    resetPosition();
    isEnableNosePain() const;
    isInvalidNoseDynamics() const;
    createNoseNeedle(PlayerModelHolder const*, al::ActorInitInfo const&);
    appearNeedle();
};
