#pragma once

namespace al { 

class ExecutorListActorModelDrawDeferred
{
public:
    ExecutorListActorModelDrawDeferred(char const*, int, al::ExecuteSystemInitInfo const&);
    createDrawer(char const*) const;
    ~ExecutorListActorModelDrawDeferred();
};

} 
