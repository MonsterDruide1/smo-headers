#pragma once

namespace al { 

class ExecutorListActorModelDrawDeferredOnly
{
public:
    ExecutorListActorModelDrawDeferredOnly(char const*, int, al::ExecuteSystemInitInfo const&);
    createDrawer(char const*) const;
    ~ExecutorListActorModelDrawDeferredOnly();
};

} 
