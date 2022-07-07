#pragma once

namespace al { 

class ExecutorListActorModelDrawDeferredSilhouette
{
public:
    ExecutorListActorModelDrawDeferredSilhouette(char const*, int, al::ExecuteSystemInitInfo const&);
    createDrawer(char const*) const;
    ~ExecutorListActorModelDrawDeferredSilhouette();
};

} 
