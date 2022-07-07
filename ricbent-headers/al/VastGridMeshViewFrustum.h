#pragma once

namespace al { 

class VastGridMeshViewFrustum
{
public:
    VastGridMeshViewFrustum();
    getPos(int) const;
    getPlaneWorldPosX() const;
    getPlaneWorldNegX() const;
    getPlaneWorldPosY() const;
    getPlaneWorldNegY() const;
    getPlaneWorldPosZ() const;
    getPlaneWorldNegZ() const;
    buildFromMtx(sead::Matrix34<float> const&, sead::Matrix44<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&);
    buildFromTwoFrustumMerge(al::VastGridMeshViewFrustum const&, al::VastGridMeshViewFrustum const&, sead::Vector3<float> const&, sead::Vector3<float> const&);
    isInside(sead::Vector3<float> const&, float) const;
    isAllPointsOutOfBoxRough(sead::BoundBox3<float> const&) const;
    isInside(sead::BoundBox3<float> const&) const;
};

} 
