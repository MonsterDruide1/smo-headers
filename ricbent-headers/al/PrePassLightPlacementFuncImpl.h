#pragma once

namespace al { namespace PrePassLightPlacementFuncImpl {

setClippingInfoImpl(al::LiveActor*, float, sead::Vector3<float> const*);
makeMtxSRT(sead::Matrix34<float>*, al::LiveActor const*);
initLppActor(al::LiveActor*, al::PrePassLightBase*, sead::Matrix34<float>*, al::ActorInitInfo const&);

} } 
