#pragma once

namespace al { 

class StageSwitchWatcher
{
public:
    StageSwitchWatcher(al::StageSwitchListener*, al::StageSwitchAccesser*);
    update();
};

} 
