#pragma once

class RouteGuideRailArrow
{
public:
    RouteGuideRailArrow(char const*);
    makeActorAlive();
    makeActorDead();
    init(al::ActorInitInfo const&);
    control();
    getGuideTrans() const;
    setGuideAlpha(float);
    invalidateGuide();
    attach(al::CollisionParts const*);
    setBaseQuatTrans();
    getActorDimensionKeeper() const;
};
