#pragma once

namespace al { 

class LightMapParamHolder
{
public:
    LightMapParamHolder();
    load();
    registerLightMapParam(char const*);
    findLightMapParam(char const*);
};

} 
