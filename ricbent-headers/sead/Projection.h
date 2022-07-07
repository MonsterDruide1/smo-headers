#pragma once

namespace sead { 

class Projection
{
public:
    Projection();
    ~Projection();
    getProjectionMatrix() const;
    updateMatrixImpl_() const;
    getProjectionMatrixMutable();
    getDeviceProjectionMatrix() const;
    cameraPosToScreenPos(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    screenPosToCameraPos(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    screenPosToCameraPos(sead::Vector3<float>*, sead::Vector2<float> const&) const;
    updateAttributesForDirectProjection();
    project(sead::Vector2<float>*, sead::Vector3<float> const&, sead::Viewport const&) const;
    unproject(sead::Vector3<float>*, sead::Vector3<float> const&, sead::Camera const&) const;
    unprojectRay(sead::Ray<sead::Vector3<float> >*, sead::Vector3<float> const&, sead::Camera const&) const;
    doUpdateDeviceMatrix(sead::Matrix44<float>*, sead::Matrix44<float> const&, sead::Graphics::DevicePosture) const;
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
};

} 
