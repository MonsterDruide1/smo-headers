#pragma once

class SenobiLeaf
{
public:
    SenobiLeaf(char const*);
    init(al::ActorInitInfo const&);
    calcAnim();
    updatePose();
    registerToHost(al::LiveActor*, bool);
};
