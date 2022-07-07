#pragma once

class CapMessageAreaChecker
{
public:
    CapMessageAreaChecker();
    initByPlacementInfo(al::LiveActor*, al::ActorInitInfo const&);
    check(al::LiveActor const*) const;
    isInPlayer(al::LiveActor const*) const;
    checkAimList(al::LiveActor const*) const;
    checkAim(al::LiveActor const*, sead::Vector3<float> const&) const;
};
