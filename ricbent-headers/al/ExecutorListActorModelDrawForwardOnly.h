#pragma once

namespace al { 

class ExecutorListActorModelDrawForwardOnly
{
public:
    ExecutorListActorModelDrawForwardOnly(char const*, int, al::ExecuteSystemInitInfo const&);
    createDrawer(char const*) const;
    ~ExecutorListActorModelDrawForwardOnly();
};

} 
