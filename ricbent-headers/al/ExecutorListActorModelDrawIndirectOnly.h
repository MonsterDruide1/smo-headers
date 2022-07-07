#pragma once

namespace al { 

class ExecutorListActorModelDrawIndirectOnly
{
public:
    ExecutorListActorModelDrawIndirectOnly(char const*, int, al::ExecuteSystemInitInfo const&);
    createDrawer(char const*) const;
    ~ExecutorListActorModelDrawIndirectOnly();
};

} 
