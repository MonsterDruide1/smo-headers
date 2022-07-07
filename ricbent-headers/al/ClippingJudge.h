#pragma once

namespace al { 

class ClippingJudge
{
public:
    ClippingJudge(al::ClippingFarAreaObserver const*, al::SceneCameraInfo const*);
    update();
    isJudgedToClipFrustumUnUseFarLevel(sead::Vector3<float> const&, float, float) const;
    isJudgedToClipFrustumCore(sead::Vector3<float> const&, float, float) const;
    isJudgedToClipFrustum(sead::Vector3<float> const&, float, float, int) const;
    isJudgedToClipFrustumCore(sead::Vector3<float> const&, float, float, float) const;
    isInClipFrustum(sead::Vector3<float> const&, float, float, int) const;
    isInClipFrustumAllView(sead::Vector3<float> const&, float, float) const;
    isJudgedToClipFrustumUnUseFarLevelObb(sead::Matrix34<float> const*, sead::BoundBox3<float> const&, float) const;
    isJudgedToClipFrustumCoreObb(sead::Matrix34<float> const*, sead::BoundBox3<float> const&, float) const;
    isJudgedToClipFrustumObb(sead::Matrix34<float> const*, sead::BoundBox3<float> const&, float, int) const;
    isJudgedToClipFrustumCoreObb(sead::Matrix34<float> const*, sead::BoundBox3<float> const&, float, float) const;
    isInClipFrustumObb(sead::Matrix34<float> const*, sead::BoundBox3<float> const&, float, int) const;
};

} 
