#pragma once

namespace PlayerFunction {

initMarioModelActor(al::LiveActor*, al::ActorInitInfo const&, char const*, char const*, al::AudioKeeper*, bool);
setupMarioFaceEarringVisibility(al::LiveActor*, PlayerCostumeInfo const*);
setupMarioHeadStrapVisibility(al::LiveActor*, PlayerCostumeInfo const*);
initMarioModelActorCloset(PlayerJointControlPartsDynamics**, al::LiveActor*, al::ActorInitInfo const&, char const*, char const*, PlayerConst const*, sead::Vector3<float>*, sead::Vector3<float>*, PlayerJointControlFollowMtxPtr**, sead::Matrix34<float>*);
initMarioModelActorDemo(PlayerJointControlPartsDynamics**, al::LiveActor*, al::ActorInitInfo const&, char const*, char const*, PlayerConst const*, sead::Vector3<float>*, sead::Vector3<float>*, bool);
initMarioModelActor2D(al::LiveActor*, al::ActorInitInfo const&, char const*, bool);
initYoshiModelActor(al::LiveActor*, al::ActorInitInfo const&, char const*);
createCapModelName(sead::BufferedSafeStringBase<char>*, char const*);
initCapModelActor(al::LiveActor*, al::ActorInitInfo const&, char const*);
initCapModelActorDemo(al::LiveActor*, al::ActorInitInfo const&, char const*);
initYoshiTongueParamHolder(al::LiveActor*);
isNeedHairControl(PlayerBodyCostumeInfo const*, char const*);
isInvisibleCap(PlayerCostumeInfo const*);
showHairVisibility(al::LiveActor*);
hideHairVisibility(al::LiveActor*);
syncBodyHairVisibility(al::LiveActor*, al::LiveActor*);
getMarioFaceNoseShrinkScale(sead::Vector3<float>*);
getMarioFaceBigEarScale(sead::Vector3<float>*);
syncMarioFaceBeardVisibility(al::LiveActor*, al::LiveActor*);
setupMarioFaceBeardVisibility(al::LiveActor*, PlayerCostumeInfo const*);
syncMarioHeadStrapVisibility(al::LiveActor*);
setupClosetPlayerModel(al::LiveActor*, al::LiveActor*, al::LiveActor**, sead::Vector3<float>*, sead::Vector3<float>*, sead::Matrix34<float>*, sead::Vector3<float>*, char const**, sead::Matrix34<float>*, sead::Vector3<float>*, PlayerJointControlFollowMtxPtr*, PlayerCostumeInfo const*);
updateClosetHeadPartsMtx(al::LiveActor*, al::LiveActor const*, sead::Matrix34<float> const*, sead::Vector3<float> const&, char const*, sead::Matrix34<float> const*, sead::Vector3<float> const&, bool, sead::Matrix34<float>*);
createMarioConst(char const*);
createYoshiConst(al::LiveActor*, char const*, char const*);
createPlayerDitherAnimator(al::LiveActor*, float);
isPlayerHitPointOne(al::LiveActor const*);
isPlayerDeadStatus(al::LiveActor const*);
isPlayerDeadWipeStart(al::LiveActor const*);
isPlayerDeadEnableCoinAppear(al::LiveActor const*);
getPlayerDeadWipeInfo(al::LiveActor const*, char const**, int*);
isPlayerDeadDrawForward(al::LiveActor const*);
getPlayerInputPort(al::LiveActor const*);
getPlayerViewMtx(al::LiveActor const*);
calcPlayerInputVec(sead::Vector3<float>*, al::LiveActor const*);
tryActivateAmiiboPreventDamage(al::LiveActor const*);
getPlayerDepthGroundShadowName();
changeDepthShadowMapSizeHigh(al::LiveActor*);
changeDepthShadowMapSizeNormal(al::LiveActor*);
createPlayerStainDecorationPartsArray(sead::PtrArray<sead::SafeStringBase<char> >*, al::LiveActor*);
validatePlayerStain(al::LiveActor*, sead::PtrArray<sead::SafeStringBase<char> > const&);
invalidatePlayerStain(al::LiveActor*, sead::PtrArray<sead::SafeStringBase<char> > const&);
setupPlayerStain(al::LiveActor*, sead::PtrArray<sead::SafeStringBase<char> > const&, int, sead::Color4f const&, float, float, float, float);

} 
