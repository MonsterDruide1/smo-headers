#pragma once

namespace sead { 

class OrthoCamera
{
public:
    OrthoCamera();
    OrthoCamera(sead::Vector2<float> const&, float);
    OrthoCamera(sead::OrthoProjection const&);
    ~OrthoCamera();
    setByOrthoProjection(sead::OrthoProjection const&);
    setRotation(float);
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
};

} 
