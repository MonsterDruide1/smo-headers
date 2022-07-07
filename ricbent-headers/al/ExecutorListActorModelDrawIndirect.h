#pragma once

namespace al { 

class ExecutorListActorModelDrawIndirect
{
public:
    ExecutorListActorModelDrawIndirect(char const*, int, al::ExecuteSystemInitInfo const&);
    createDrawer(char const*) const;
    ~ExecutorListActorModelDrawIndirect();
};

} 
