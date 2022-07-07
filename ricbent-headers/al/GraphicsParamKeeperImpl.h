#pragma once

namespace al { 

class GraphicsParamKeeperImpl
{
public:
    GraphicsParamKeeperImpl(al::GraphicsSystemInfo*, agl::utl::IParameterIO*, char const*, char const*, int);
    initStageResource(al::Resource const*, char const*, char const*);
    tryFindParamBinary(char const*) const;
    updateRequest();
    tryFindParamOrDefaultBinary(char const*) const;
};

} 
