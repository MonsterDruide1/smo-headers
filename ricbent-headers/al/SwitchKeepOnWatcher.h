#pragma once

namespace al { 

class SwitchKeepOnWatcher
{
public:
    SwitchKeepOnWatcher(char const*);
    init(al::ActorInitInfo const&);
    exeOff();
    exeCount();
    exeOn();
};

} 
