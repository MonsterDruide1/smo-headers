#pragma once

namespace al { 

class ExecutorListActorModelDrawDeferredXlu
{
public:
    ExecutorListActorModelDrawDeferredXlu(char const*, int, al::ExecuteSystemInitInfo const&);
    createDrawer(char const*) const;
    ~ExecutorListActorModelDrawDeferredXlu();
};

} 
