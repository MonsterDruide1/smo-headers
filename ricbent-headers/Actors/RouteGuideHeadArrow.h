#pragma once

class RouteGuideHeadArrow
{
public:
    RouteGuideHeadArrow(char const*);
    init(al::ActorInitInfo const&);
    exeAppear();
    updatePose();
    exeWait();
    exeEnd();
    forceEnd();
    update(sead::Vector3<float> const&, sead::Vector3<float> const&, bool, bool);
    tryEnd();
};
