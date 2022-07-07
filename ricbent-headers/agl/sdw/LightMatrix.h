#pragma once

namespace agl { namespace sdw { 

class LightMatrix
{
public:
    update(sead::Vector3<float> const&);
    update(sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, float, float, float, float);
    update(sead::Matrix34<float> const&, sead::Matrix44<float> const&);
    calcLightSpace(sead::Matrix34<float>*, sead::Matrix44<float>*, sead::Matrix34<float> const&) const;
    calcLightSpace(sead::Matrix34<float>*, sead::Matrix44<float>*, sead::Vector3<float> const&) const;
    LightMatrix();
    LightMatrix(sead::Vector3<float> const&);
    LightMatrix(sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, float, float, float, float);
    LightMatrix(sead::Matrix34<float> const&, sead::Matrix44<float> const&);
};

} } 
