#pragma once

namespace al { 

class SupportFreezeSyncGroupHolder
{
public:
    SupportFreezeSyncGroupHolder();
    initAfterPlacementSceneObj(al::ActorInitInfo const&);
    movement();
    regist(al::LiveActor*, al::ActorInitInfo const&);
    tryFindGroup(al::ActorInitInfo const&);
    ~SupportFreezeSyncGroupHolder();
};

} 
