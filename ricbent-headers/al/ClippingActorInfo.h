#pragma once

namespace al { 

class ClippingActorInfo
{
public:
    ClippingActorInfo(al::LiveActor*);
    setTypeToSphere(float, sead::Vector3<float> const*);
    startClipped();
    endClipped();
    updateClipping(al::ClippingJudge const*);
    judgeClipping(al::ClippingJudge const*) const;
    updateClipping(al::ClippingRequestKeeper*, al::ClippingJudge const*);
    isGroupClipping() const;
    isGroupClippingInit() const;
    setTypeToObb(sead::BoundBox3<float> const&, sead::Matrix34<float> const*);
    setGroupClippingId(al::ActorInitInfo const&);
    setFarClipLevel20M();
    updateFarClipLevel();
    setFarClipLevelMax();
    isFarClipLevelMax() const;
    checkActiveViewGroupAny() const;
    initViewGroup(al::ViewIdHolder const*);
    registerViewGroupFarClipFlag(bool const*);
};

} 
