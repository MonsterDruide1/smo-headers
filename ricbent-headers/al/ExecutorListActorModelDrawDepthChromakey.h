#pragma once

namespace al { 

class ExecutorListActorModelDrawDepthChromakey
{
public:
    ExecutorListActorModelDrawDepthChromakey(char const*, int, al::ExecuteSystemInitInfo const&);
    createDrawer(char const*) const;
    ~ExecutorListActorModelDrawDepthChromakey();
};

} 
