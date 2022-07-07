#pragma once

namespace al { 

class ExecutorListActorModelDrawDitherChromakey
{
public:
    ExecutorListActorModelDrawDitherChromakey(char const*, int, al::ExecuteSystemInitInfo const&);
    createDrawer(char const*) const;
    ~ExecutorListActorModelDrawDitherChromakey();
};

} 
