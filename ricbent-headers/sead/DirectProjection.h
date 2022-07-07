#pragma once

namespace sead { 

class DirectProjection
{
public:
    DirectProjection();
    DirectProjection(sead::Matrix44<float> const&, sead::Graphics::DevicePosture);
    setProjectionMatrix(sead::Matrix44<float> const&, sead::Graphics::DevicePosture);
    ~DirectProjection();
    getNear() const;
    getFar() const;
    getFovy() const;
    getAspect() const;
    getOffset(sead::Vector2<float>*) const;
    updateAttributesForDirectProjection();
    doUpdateMatrix(sead::Matrix44<float>*) const;
    doScreenPosToCameraPosTo(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    getProjectionType() const;
};

} 
