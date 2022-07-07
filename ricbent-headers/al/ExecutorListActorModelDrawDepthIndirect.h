#pragma once

namespace al { 

class ExecutorListActorModelDrawDepthIndirect
{
public:
    ExecutorListActorModelDrawDepthIndirect(char const*, int, al::ExecuteSystemInitInfo const&);
    createDrawer(char const*) const;
    ~ExecutorListActorModelDrawDepthIndirect();
};

} 
