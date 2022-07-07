#pragma once

namespace al { 

class ExecutorListActorModelDrawDepthDither
{
public:
    ExecutorListActorModelDrawDepthDither(char const*, int, al::ExecuteSystemInitInfo const&);
    createDrawer(char const*) const;
    ~ExecutorListActorModelDrawDepthDither();
};

} 
