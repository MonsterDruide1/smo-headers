#pragma once

namespace al { 

class DynamicModelShaderVariation
{
public:
    DynamicModelShaderVariation();
    request(char const*, char const*);
    tryUpdate();
};

} 
