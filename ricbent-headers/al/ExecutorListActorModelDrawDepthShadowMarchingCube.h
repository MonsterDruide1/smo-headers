#pragma once

namespace al { 

class ExecutorListActorModelDrawDepthShadowMarchingCube
{
public:
    ExecutorListActorModelDrawDepthShadowMarchingCube(char const*, int, al::ExecuteSystemInitInfo const&);
    createDrawer(char const*) const;
    ~ExecutorListActorModelDrawDepthShadowMarchingCube();
};

} 
