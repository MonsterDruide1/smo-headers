#pragma once

namespace al { 

class ExecutorListActorModelDrawForwardPostEffectMask
{
public:
    ExecutorListActorModelDrawForwardPostEffectMask(char const*, int, al::ExecuteSystemInitInfo const&);
    createDrawer(char const*) const;
    ~ExecutorListActorModelDrawForwardPostEffectMask();
};

} 
