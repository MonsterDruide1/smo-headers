#pragma once

namespace KoopaFunction {

initActorKoopa(al::LiveActor*, al::ActorInitInfo const&);
invalidateTailSensors(al::LiveActor*);
initActorKoopaDemoModel(al::LiveActor*, al::ActorInitInfo const&);
initAndCreateDemoModel(al::ActorInitInfo const&);
initAndCreateLinksPeach(al::ActorInitInfo const&);
initAndCreateDemoPeachRing(al::ActorInitInfo const&);
initAndCreateWeaponCapGroup(al::ActorInitInfo const&, KoopaItemHolder*);
initAndCreateDamageBallGroup(al::ActorInitInfo const&, KoopaItemHolder*, sead::Matrix34<float> const*);
initAndCreateDamageBallBombGroup(al::ActorInitInfo const&, KoopaItemHolder*, sead::Matrix34<float> const*);
initAndCreateDemoExecutorLv1(al::LiveActor*, al::ActorInitInfo const&, KoopaCameraCtrl*, al::LiveActor*, KoopaCap*, Peach*);
initAndCreateDemoExecutorLv2(al::LiveActor*, al::ActorInitInfo const&, KoopaCameraCtrl*, al::LiveActor*, KoopaCap*, Peach*);
initAndCreateDemoEventChurch(al::LiveActor*, al::ActorInitInfo const&);
tryGetDemoKoopaSubActor(al::LiveActor const*);
tryGetDemoPeachSubActor(al::LiveActor const*);
validateTailSensors(al::LiveActor*);
isTailSensor(al::HitSensor const*);
calcAnimPost(al::LiveActor*, KoopaCap*);
startCapOnAnim(al::LiveActor*);
startCapOffAnim(al::LiveActor*);
updateFallVelocityToGravity(al::LiveActor*);
updateOnGroundVelocity(al::LiveActor*);
addVelocityToGravityFitCurvedSurface(al::LiveActor*, float);
turnKoopaToTrans(al::LiveActor*, sead::Vector3<float> const&);
turnKoopaToPlayer(al::LiveActor*);
initCapJointSideRotator(al::LiveActor*, float*);
getCapBlowDownParam();
updateCapBlowDownSideDegree(float*, al::LiveActor const*);
getCapGravityTurnRate();
getCapPushLimit();
getLevel1();
getLevel2();
getLevel3();
isLevel1(KoopaNumberCounter const*);
isLevel2(KoopaNumberCounter const*);
isLevelGreater2(KoopaNumberCounter const*);
isLevel3(KoopaNumberCounter const*);
onSwitchBattleKeepOn(al::LiveActor*);
offSwitchBattleKeepOn(al::LiveActor*);
onSwitchGraphicsLevelByHp(al::LiveActor*, int);
onSwitchGraphicsLevelBattleEnd(al::LiveActor*);
createAndInitLinksKoopaDemoModelSkyWorld(al::ActorInitInfo const&, char const*, int);
startHitReactionPunchHitInvincible(al::LiveActor*);

} 
