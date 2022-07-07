#pragma once

class BirdPlayerGlideCtrl
{
public:
    BirdPlayerGlideCtrl(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    validateGlideOnNose();
    invalidateGlideOnNose();
    validateGlideOnSitDownHead();
    invalidateGlideOnSitDownHead();
    addDemoActorAndFlyAway();
    exeInvalid();
    exeValidOnNose();
    exeValidOnSitDownHead();
    exeWaitFlyAway();
    getSceneObjName() const;
    ~BirdPlayerGlideCtrl();
};
