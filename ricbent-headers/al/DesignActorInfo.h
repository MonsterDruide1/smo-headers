#pragma once

namespace al { 

class DesignActorInfo
{
public:
    DesignActorInfo(al::LiveActor*, al::ActorInitInfo const&, al::ActorInitInfo const&, sead::Matrix34<float> const&);
};

} 
