#pragma once

namespace al { 

class ExecutorListActorModelDrawDepthXlu
{
public:
    ExecutorListActorModelDrawDepthXlu(char const*, int, al::ExecuteSystemInitInfo const&);
    createDrawer(char const*) const;
    ~ExecutorListActorModelDrawDepthXlu();
};

} 
