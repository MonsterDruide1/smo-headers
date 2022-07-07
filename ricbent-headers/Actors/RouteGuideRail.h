#pragma once

class RouteGuideRail
{
public:
    RouteGuideRail(char const*);
    init(al::ActorInitInfo const&);
    place(sead::Vector3<float> const&, int, float);
    validate();
    invalidate();
    exeAppear();
    fitGround();
    exeKill();
    initAfterPlacement();
};
