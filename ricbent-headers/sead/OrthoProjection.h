#pragma once

namespace sead { 

class OrthoProjection
{
public:
    ~OrthoProjection();
    OrthoProjection();
    OrthoProjection(float, float, float, float, float, float);
    OrthoProjection(float, float, sead::BoundBox2<float> const&);
    OrthoProjection(float, float, sead::Viewport const&);
    getNear() const;
    getFar() const;
    getFovy() const;
    getAspect() const;
    getOffset(sead::Vector2<float>*) const;
    setByViewport(sead::Viewport const&);
    setTBLR(float, float, float, float);
    setBoundBox(sead::BoundBox2<float> const&);
    doUpdateMatrix(sead::Matrix44<float>*) const;
    doScreenPosToCameraPosTo(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    createDividedProjection(sead::OrthoProjection*, int, int, int, int) const;
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    getProjectionType() const;
};

} 
