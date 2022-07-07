#pragma once

namespace al { 

class StageSyncCounter
{
public:
    StageSyncCounter();
    initAfterPlacementSceneObj(al::ActorInitInfo const&);
    execute();
    getSceneObjName() const;
    ~StageSyncCounter();
};

} 
