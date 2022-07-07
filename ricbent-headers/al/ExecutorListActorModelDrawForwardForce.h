#pragma once

namespace al { 

class ExecutorListActorModelDrawForwardForce
{
public:
    ExecutorListActorModelDrawForwardForce(char const*, int, al::ExecuteSystemInitInfo const&);
    createDrawer(char const*) const;
    ~ExecutorListActorModelDrawForwardForce();
};

} 
