#pragma once

namespace al { 

class ExecutorListActorModelDrawPlayerChromakey
{
public:
    ExecutorListActorModelDrawPlayerChromakey(char const*, int, al::ExecuteSystemInitInfo const&);
    createDrawer(char const*) const;
    ~ExecutorListActorModelDrawPlayerChromakey();
};

} 
