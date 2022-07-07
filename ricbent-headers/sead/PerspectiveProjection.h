#pragma once

namespace sead { 

class PerspectiveProjection
{
public:
    PerspectiveProjection();
    setFovy_(float);
    PerspectiveProjection(float, float, float, float);
    ~PerspectiveProjection();
    set(float, float, float, float);
    getNear() const;
    getFar() const;
    getFovy() const;
    getAspect() const;
    getOffset(sead::Vector2<float>*) const;
    doUpdateMatrix(sead::Matrix44<float>*) const;
    doScreenPosToCameraPosTo(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    setFovx(float);
    createDividedProjection(sead::PerspectiveProjection*, int, int, int, int) const;
    getTop() const;
    getBottom() const;
    getLeft() const;
    getRight() const;
    setTBLR(float, float, float, float);
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    getProjectionType() const;
};

} 
