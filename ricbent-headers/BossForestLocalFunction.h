#pragma once

namespace BossForestLocalFunction {

isBattleLv2(BossForest const*);
createCollisionParts(BossForest*, al::ActorInitInfo const&, sead::Matrix34<float>*);
isPunchMsg(al::SensorMsg const*);
calcGroundPos(sead::Vector3<float>*, al::LiveActor*);
tryAppearBarrierModel(BossForest*);
waitBarrierModel(BossForest*);
breakBarrierModel(BossForest*);
appearLifeParts(al::LiveActor*);
setVisAnimDomeDamage(al::LiveActor*, float);
assignLifePartsName(BossForestSatellite*, int);
isLastPhase(int);
hideHackSenobi(BossForest const*);
showHackSenobi(BossForest const*, sead::Quat<float> const&, sead::Vector3<float> const&);
getBossForestSenobi(BossForest const*, int);
startActionSatellite(BossForestSatellite*, char const*);
startSatelliteMove(BossForestSatellite*);
startSatelliteWait(BossForestSatellite*, bool);
countActiveSatellitesNum(BossForest const*);
isHitCollisionHead(al::HitSensor const*, al::HitSensor const*);
setupLifePartsEffectMtx(BossForest*, sead::Matrix34<float> const*, int);
offEyesJointControl(BossForest*);
onEyesJointControl(BossForest*);
invalidateAllCollisionParts(BossForest*);
validateAllCollisionParts(BossForest*);

} 
