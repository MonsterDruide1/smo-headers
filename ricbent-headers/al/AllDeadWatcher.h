#pragma once

namespace al { 

class AllDeadWatcher
{
public:
    AllDeadWatcher(char const*);
    init(al::ActorInitInfo const&);
    appear();
    kill();
    exeWatch();
    exeWait();
};

} 
