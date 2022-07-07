#pragma once

namespace al { 

class SeListenerPoser
{
public:
    SeListenerPoser(sead::SafeStringBase<char> const&, float, bool, sead::Vector3<float> const&, bool, bool, float);
    setBaseToMiddleRatio(float);
    calcListenerPose(sead::Matrix34<float>*, sead::Vector3<float>*, sead::Vector3<float>*, sead::Matrix34<float>*, al::ISeListenerParam const&);
    tryCalcViewMatrix(sead::Matrix34<float>*, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&);
    ~SeListenerPoser();
    getName() const;
    isUseLineListener() const;
};

} 
