#pragma once

namespace al { 

class GraphicsParamRequestInterpKeeperImpl
{
public:
    GraphicsParamRequestInterpKeeperImpl(al::GraphicsSystemInfo*, int, char const*, char const*, char const*);
    initStageResource(al::Resource const*, char const*, char const*);
    isExistNamedParamAtLeastOne() const;
    getParamDirName() const;
    getParamTypeName() const;
    getParamIo();
};

} 
