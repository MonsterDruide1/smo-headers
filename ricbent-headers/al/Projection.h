#pragma once

namespace al { 

class Projection
{
public:
    Projection();
    init();
    calcMtx();
    Projection(al::Projection const&);
    copyFrom(al::Projection const&);
    getTop() const;
    getBottom() const;
    getLeft() const;
    getRight() const;
    getNear() const;
    getFar() const;
    setProjTBLRNF(float, float, float, float, float, float);
    Projection(float, float, float, float);
    setProj(float, float, float, float);
    setFovy(float);
    setAspect(float);
    setNear(float);
    setFar(float);
    calcNearClipHeight();
    calcNearClipWidth();
    setTop(float);
    setBottom(float);
    setLeft(float);
    setRight(float);
    setOffset(sead::Vector2<float> const&);
    merge(al::Projection const&, al::Projection const&);
    getAspect() const;
    getOffset() const;
    getFovy() const;
    getProjMtx() const;
    getProjInvMtx() const;
};

} 
