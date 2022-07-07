#pragma once

namespace al { 

class DiskInterpolator
{
public:
    DiskInterpolator();
    startInterp(sead::Vector3<float> const&, sead::Vector3<float> const&, float, float, float, float, sead::Matrix34<float> const*, sead::Matrix34<float> const*, sead::Vector3<float> const&, float);
    nextStep();
    calcInterpPos(sead::Vector3<float>*) const;
    getMoveVector(sead::Vector3<float>*);
    calcInterp(sead::Vector3<float>*, float*, float*, sead::Vector3<float>*, sead::Matrix34<float>*, sead::Vector3<float>*) const;
};

} 
