#pragma once

namespace al { 

class SePlayParam
{
public:
    SePlayParam();
    reset();
    set(al::SePlayParamType, float, float);
    setMul(al::SePlayParamType, float, float);
};

} 
