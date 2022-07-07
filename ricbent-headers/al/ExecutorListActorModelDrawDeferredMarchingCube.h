#pragma once

namespace al { 

class ExecutorListActorModelDrawDeferredMarchingCube
{
public:
    ExecutorListActorModelDrawDeferredMarchingCube(char const*, int, al::ExecuteSystemInitInfo const&);
    createDrawer(char const*) const;
    ~ExecutorListActorModelDrawDeferredMarchingCube();
};

} 
