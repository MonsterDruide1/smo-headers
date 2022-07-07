#pragma once

namespace al { 

class StageSwitchWatcherHolder
{
public:
    StageSwitchWatcherHolder(int);
    add(al::StageSwitchWatcher*);
    movement();
};

} 
