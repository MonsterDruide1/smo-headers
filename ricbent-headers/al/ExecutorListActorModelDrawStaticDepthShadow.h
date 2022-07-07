#pragma once

namespace al { 

class ExecutorListActorModelDrawStaticDepthShadow
{
public:
    ExecutorListActorModelDrawStaticDepthShadow(char const*, int, al::ExecuteSystemInitInfo const&);
    createDrawer(char const*) const;
    ~ExecutorListActorModelDrawStaticDepthShadow();
};

} 
