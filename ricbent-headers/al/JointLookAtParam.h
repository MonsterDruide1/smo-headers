#pragma once

namespace al { 

class JointLookAtParam
{
public:
    JointLookAtParam(int, float, sead::Vector2<float> const&, sead::Vector2<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&);
    JointLookAtParam();
};

} 
