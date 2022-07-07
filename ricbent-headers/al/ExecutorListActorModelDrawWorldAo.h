#pragma once

namespace al { 

class ExecutorListActorModelDrawWorldAo
{
public:
    ExecutorListActorModelDrawWorldAo(char const*, int, al::ExecuteSystemInitInfo const&);
    createDrawer(char const*) const;
    ~ExecutorListActorModelDrawWorldAo();
};

} 
