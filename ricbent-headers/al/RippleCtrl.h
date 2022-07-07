#pragma once

namespace al { 

class RippleCtrl
{
public:
    RippleCtrl(al::LiveActor*);
    tryCreate(al::LiveActor*);
    init(al::ActorInitInfo const&);
    calcPoseQuat(sead::Quat<float>*) const;
    calcOffsetedTrans(sead::Vector3<float>*) const;
    tryCreateFlowMap();
    initAfterPlacement();
    update();
    calcIsInArea(sead::Vector3<float> const&) const;
    isCollide(int, int) const;
    calcPos(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    getCollidePos(int, int) const;
    calcNormal(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    tryAddRipple(sead::Vector3<float> const&, float, float);
    tryAddRippleWithRange(sead::Vector3<float> const&, float, float, float, float);
    tryAddQuadRipple(sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, float);
    setFieldScale(float);
    getTypeName() const;
    forceResetCount();
};

} 
