#pragma once

namespace al { 

class ClippingActorHolder
{
public:
    ClippingActorHolder(int);
    updateAsync(sead::Thread*, long);
    ~ClippingActorHolder();
    update(al::ClippingJudge const*);
    registerActor(al::LiveActor*);
    initGroupClipping(al::LiveActor*, al::ActorInitInfo const&);
    endInit(al::ClippingGroupHolder*);
    validateClipping(al::LiveActor*);
    invalidateClipping(al::LiveActor*);
    addToClippingTarget(al::LiveActor*);
    removeFromClippingTarget(al::LiveActor*);
    onGroupClipping(al::LiveActor*);
    offGroupClipping(al::LiveActor*);
    getClippingRadius(al::LiveActor const*);
    find(al::LiveActor const*) const;
    getClippingCenterPos(al::LiveActor const*);
    setTypeToSphere(al::LiveActor*, float, sead::Vector3<float> const*);
    setTypeToObb(al::LiveActor*, sead::BoundBox3<float> const&);
    getClippingObb(al::LiveActor const*);
    setNearClipDistance(al::LiveActor*, float);
    setFarClipLevel20M(al::LiveActor*);
    setFarClipLevelMax(al::LiveActor*);
    updateFarClipLevel();
};

} 
