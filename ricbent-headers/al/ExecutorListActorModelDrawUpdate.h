#pragma once

namespace al { 

class ExecutorListActorModelDrawUpdate
{
public:
    ExecutorListActorModelDrawUpdate(char const*, int, al::ExecuteSystemInitInfo const&);
    createDrawer(char const*) const;
    ~ExecutorListActorModelDrawUpdate();
};

} 
