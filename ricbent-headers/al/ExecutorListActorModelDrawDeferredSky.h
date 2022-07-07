#pragma once

namespace al { 

class ExecutorListActorModelDrawDeferredSky
{
public:
    ExecutorListActorModelDrawDeferredSky(char const*, int, al::ExecuteSystemInitInfo const&);
    createDrawer(char const*) const;
    ~ExecutorListActorModelDrawDeferredSky();
};

} 
