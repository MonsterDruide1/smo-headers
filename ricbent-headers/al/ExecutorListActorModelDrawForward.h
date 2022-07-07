#pragma once

namespace al { 

class ExecutorListActorModelDrawForward
{
public:
    ExecutorListActorModelDrawForward(char const*, int, al::ExecuteSystemInitInfo const&);
    createDrawer(char const*) const;
    ~ExecutorListActorModelDrawForward();
};

} 
