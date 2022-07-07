#pragma once

namespace al { 

class RippleTextureController
{
public:
    RippleTextureController(char const*);
    initParam(al::ParameterIo*, al::ByamlIter const*, al::IUseHioNode*, al::GraphicsSystemInfo*, sead::Vector3<float> const&, sead::Quat<float> const&);
    update(sead::Vector3<float> const&, sead::Vector3<float> const&, bool);
    replaceTexture(al::LiveActor*, char const*, char const*, int, int);
    getTexRange() const;
    getCenterPos() const;
    setFieldScale(float);
};

} 
