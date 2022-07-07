#pragma once

class GrowPlantDirector
{
public:
    GrowPlantDirector();
    initAfterPlacementSceneObj(al::ActorInitInfo const&);
    registerGrowPlantPlace(GrowPlantGrowPlace*, float);
    registerGrowPlantSeed(GrowPlantSeed*);
    registerRouteGuidePointForPlace(GrowPlantGrowPlace*);
    isPlantEnd(al::PlacementId const&) const;
    isPlantEndAll() const;
    updateGuideWindow();
    control();
    updateRouteGuideGrowPlant();
    invalidateGuideAll();
    isClimb() const;
    isGrowPlantAlready() const;
    onPlaceAlreadyGuide();
    isHoldSeed() const;
    onPlaceAllGuide();
    onGrowSeedGuide();
    ~GrowPlantDirector();
};
