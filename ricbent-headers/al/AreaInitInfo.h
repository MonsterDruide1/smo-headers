#pragma once

namespace al { 

class AreaInitInfo
{
public:
    AreaInitInfo();
    AreaInitInfo(al::PlacementInfo const&, al::StageSwitchDirector*, al::SceneObjHolder*);
    AreaInitInfo(al::PlacementInfo const&, al::AreaInitInfo const&);
    set(al::PlacementInfo const&, al::StageSwitchDirector*, al::SceneObjHolder*);
};

} 
