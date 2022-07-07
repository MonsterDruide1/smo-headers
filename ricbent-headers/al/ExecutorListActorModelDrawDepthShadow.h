#pragma once

namespace al { 

class ExecutorListActorModelDrawDepthShadow
{
public:
    ExecutorListActorModelDrawDepthShadow(char const*, int, al::ExecuteSystemInitInfo const&);
    createDrawer(char const*) const;
    ~ExecutorListActorModelDrawDepthShadow();
};

} 
