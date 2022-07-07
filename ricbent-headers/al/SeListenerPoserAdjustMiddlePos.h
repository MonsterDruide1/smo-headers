#pragma once

namespace al { 

class SeListenerPoserAdjustMiddlePos
{
public:
    SeListenerPoserAdjustMiddlePos(sead::SafeStringBase<char> const&);
    calcListenerPose(sead::Matrix34<float>*, sead::Vector3<float>*, sead::Vector3<float>*, sead::Matrix34<float>*, al::ISeListenerParam const&);
    ~SeListenerPoserAdjustMiddlePos();
};

} 
