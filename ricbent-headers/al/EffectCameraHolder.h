#pragma once

namespace al { 

class EffectCameraHolder
{
public:
    EffectCameraHolder();
    setCameraDirector(al::CameraDirector*);
    getViewMtxPtr() const;
    getFovy() const;
    getCameraPos() const;
    calcScreenPosFromWorldPos(sead::Vector2<float>*, sead::Vector3<float> const&) const;
    calcFollowScaleByFovy() const;
    calcFarClipRateByFovy() const;
    tryMakeBillboardMtx(sead::Matrix34<float>*, sead::Vector3<float> const&) const;
    tryMakeYBillboardMtx(sead::Matrix34<float>*, sead::Vector3<float> const&) const;
    tryMakeCameraFrontMtx(sead::Matrix34<float>*) const;
};

} 
