#pragma once

namespace GrowSeedUtil {

getGuideLabelName();
isInDeathArea(al::LiveActor const*);
throwToDirection(al::LiveActor*, sead::Vector3<float> const&, float);
throwFromPlayer(al::LiveActor*, float, float);
getPlantPartsAddRadius();
rotateRandom(sead::Quat<float>*);
rotateRandomY(sead::Quat<float>*);
setVelocityForBlow(al::LiveActor*, al::HitSensor*, al::HitSensor*, float, float, float);
setVelocityForReflect(al::LiveActor*, float, float);
checkStrikeArrowBetweenPlayer(al::LiveActor*);
tryEmitEffectWaterSurface(bool, sead::Vector3<float>*, al::LiveActor*);
prepareKillByShineGet(al::LiveActor*, sead::Vector3<float> const&);
isEnableSeedAttackSpeed(al::LiveActor const*, GrowSeedStateWait*, GrowSeedStateWait*, float);

} 
