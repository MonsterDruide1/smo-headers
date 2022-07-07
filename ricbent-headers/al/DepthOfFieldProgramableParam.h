#pragma once

namespace al { 

class DepthOfFieldProgramableParam
{
public:
    DepthOfFieldProgramableParam();
    DepthOfFieldProgramableParam(float, float);
    copyFrom(al::DepthOfFieldProgramableParam const&);
};

} 
