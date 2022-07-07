#pragma once

namespace al { 

class ExecutorListActorModelDrawDepthDitherIndirect
{
public:
    ExecutorListActorModelDrawDepthDitherIndirect(char const*, int, al::ExecuteSystemInitInfo const&);
    createDrawer(char const*) const;
    ~ExecutorListActorModelDrawDepthDitherIndirect();
};

} 
