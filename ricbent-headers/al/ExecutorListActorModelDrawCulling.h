#pragma once

namespace al { 

class ExecutorListActorModelDrawCulling
{
public:
    ExecutorListActorModelDrawCulling(char const*, int, al::ExecuteSystemInitInfo const&);
    createDrawer(char const*) const;
    ~ExecutorListActorModelDrawCulling();
};

} 
