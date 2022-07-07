#pragma once

namespace al { 

class ExecutorListActorModelDrawDeferredOpa
{
public:
    ExecutorListActorModelDrawDeferredOpa(char const*, int, al::ExecuteSystemInitInfo const&);
    createDrawer(char const*) const;
    ~ExecutorListActorModelDrawDeferredOpa();
};

} 
