#pragma once

class RouteGuideArrow
{
public:
    RouteGuideArrow(char const*);
    makeActorAlive();
    makeActorDead();
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    control();
    getGuideTrans() const;
    setGuideAlpha(float);
    validateGuide();
    invalidateGuide();
    getActorDimensionKeeper() const;
};
