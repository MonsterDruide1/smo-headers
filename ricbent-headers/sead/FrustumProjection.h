#pragma once

namespace sead { 

class FrustumProjection
{
public:
    FrustumProjection();
    FrustumProjection(float, float, float, float, float, float);
    FrustumProjection(float, float, sead::BoundBox2<float> const&);
    ~FrustumProjection();
    getNear() const;
    getFar() const;
    doUpdateMatrix(sead::Matrix44<float>*) const;
    doScreenPosToCameraPosTo(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    setTBLR(float, float, float, float);
    setBoundBox(sead::BoundBox2<float> const&);
    createDividedProjection(sead::FrustumProjection*, int, int, int, int) const;
    getFovy() const;
    getAspect() const;
    getOffset(sead::Vector2<float>*) const;
    getOffsetX() const;
    getOffsetY() const;
    setFovyAspectOffset(float, float, sead::Vector2<float> const&);
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    getProjectionType() const;
};

} 
