#pragma once

namespace al { 

class StageSwitchDirector
{
public:
    StageSwitchDirector(al::ExecuteDirector*);
    useSwitch(al::StageSwitchAccesser const*);
    findSwitchNoFromObjId(al::PlacementId const*);
    onSwitch(al::StageSwitchAccesser const*);
    offSwitch(al::StageSwitchAccesser const*);
    isOnSwitch(al::StageSwitchAccesser const*);
    addListener(al::StageSwitchListener*, al::StageSwitchAccesser*);
    execute();
};

} 
