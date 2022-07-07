#pragma once

class GotogotonFace
{
public:
    GotogotonFace();
    getEdge(int);
    getEdge(int) const;
    getNextFace(int) const;
    setOppositeFace(GotogotonFace const*);
    setCenter(sead::Vector3<float> const&);
    setNormal(sead::Vector3<float> const&);
    calcNearEdgeIndexToPos(sead::Vector3<float> const&, sead::Quat<float> const&, sead::Vector3<float> const&) const;
    calcNearEdgeIndexToDir(sead::Vector3<float> const&, sead::Quat<float> const&, sead::Vector3<float> const&) const;
    rotate(sead::Quat<float>*, sead::Vector3<float>*, int, sead::Quat<float> const&, sead::Vector3<float> const&, float) const;
    calcOppositeEdgeIndex(int) const;
    calcRotateCenterPos(sead::Vector3<float>*, int, sead::Quat<float> const&, sead::Vector3<float> const&, float) const;
    calcLandEffectMtx(sead::Matrix34<float>*, sead::Quat<float> const&, sead::Vector3<float> const&, int) const;
    calcLandEffectMtxNextFace(sead::Matrix34<float>*, sead::Quat<float> const&, sead::Vector3<float> const&, int) const;
    calcCenterPos(sead::Vector3<float>*, sead::Quat<float> const&, sead::Vector3<float> const&) const;
    calcCenterDir(sead::Vector3<float>*, sead::Quat<float> const&) const;
};
