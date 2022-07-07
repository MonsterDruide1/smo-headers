#pragma once

namespace al { 

class ExecutorListActorModelDrawDeferredFootPrint
{
public:
    ExecutorListActorModelDrawDeferredFootPrint(char const*, int, al::ExecuteSystemInitInfo const&);
    createDrawer(char const*) const;
    ~ExecutorListActorModelDrawDeferredFootPrint();
};

} 
