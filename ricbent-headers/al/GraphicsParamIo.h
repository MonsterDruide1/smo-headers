#pragma once

namespace al { 

class GraphicsParamIo
{
public:
    GraphicsParamIo(char const*, char const*, char const*);
    initSystemResource(al::Resource const*, char const*);
    initResource(al::Resource const*);
    initStageResource(al::Resource const*, char const*, char const*);
};

} 
