#pragma once

namespace al { 

class StageSwitchKeeper
{
public:
    StageSwitchKeeper();
    init(al::StageSwitchDirector*, al::PlacementInfo const&);
    tryGetStageSwitchAccesser(char const*) const;
};

} 
