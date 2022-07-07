#pragma once

namespace al { 

class ExecutorListActorModelDrawDepthOnly
{
public:
    ExecutorListActorModelDrawDepthOnly(char const*, int, al::ExecuteSystemInitInfo const&);
    createDrawer(char const*) const;
    ~ExecutorListActorModelDrawDepthOnly();
};

} 
