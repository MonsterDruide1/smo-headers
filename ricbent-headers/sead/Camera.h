#pragma once

namespace sead { 

class Camera
{
public:
    ~Camera();
    getWorldPosByMatrix(sead::Vector3<float>*) const;
    getLookVectorByMatrix(sead::Vector3<float>*) const;
    getRightVectorByMatrix(sead::Vector3<float>*) const;
    getUpVectorByMatrix(sead::Vector3<float>*) const;
    worldPosToCameraPosByMatrix(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    cameraPosToWorldPosByMatrix(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    projectByMatrix(sead::Vector2<float>*, sead::Vector3<float> const&, sead::Projection const&, sead::Viewport const&) const;
    unprojectRayByMatrix(sead::Ray<sead::Vector3<float> >*, sead::Vector3<float> const&) const;
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
};

} 
