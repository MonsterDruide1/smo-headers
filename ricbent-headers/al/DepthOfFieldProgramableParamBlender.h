#pragma once

namespace al { 

class DepthOfFieldProgramableParamBlender
{
public:
    DepthOfFieldProgramableParamBlender(agl::pfx::DepthOfField const*);
    update();
    startBlendParam(al::DepthOfFieldProgramableParam const*, int);
    endBlendParam(int);
    resetBlendParam();
    calcParam(al::DepthOfFieldProgramableParam*) const;
    isActive() const;
    exeDeactive();
    exeStart();
    exeWait();
    exeEnd();
    ~DepthOfFieldProgramableParamBlender();
};

} 
