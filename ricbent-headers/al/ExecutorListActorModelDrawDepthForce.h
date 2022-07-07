#pragma once

namespace al { 

class ExecutorListActorModelDrawDepthForce
{
public:
    ExecutorListActorModelDrawDepthForce(char const*, int, al::ExecuteSystemInitInfo const&);
    createDrawer(char const*) const;
    ~ExecutorListActorModelDrawDepthForce();
};

} 
