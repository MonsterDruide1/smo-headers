#pragma once

namespace ShibakenFunction {

tryStartReaction(al::IUseNerve*, ActorStateReactionBase*, al::Nerve const*, al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
chaseToPlayerAndTryStop(Shibaken*);
addFallVelocityToGround(Shibaken*, float);
chaseToTarget(Shibaken*, sead::Vector3<float> const&, float, bool, bool);
isGroundNormal(sead::Vector3<float> const&, Shibaken const*);
limitFallVelocityOnGround(Shibaken*);
chaseToTargetWalk(Shibaken*, sead::Vector3<float> const&);
chaseToTargetWalkSniff(Shibaken*, sead::Vector3<float> const&);
chaseToTargetRun(Shibaken*, sead::Vector3<float> const&);
checkStopChaseByFaceWall(Shibaken const*);
addFallVelocityToGroundAndFitPoseOnGround(Shibaken*, float);
isPlayingMoveAction(Shibaken const*);
tryStartJump(al::IUseNerve*, Shibaken const*, al::Nerve const*);
tryStartJump(al::HostStateBase<Shibaken>*, al::Nerve const*);
checkStopChaseByFaceWall(Shibaken const*, sead::Vector3<float> const&);
executeFindTurnNerve(al::HostStateBase<Shibaken>*, sead::Vector3<float> const&, sead::Quat<float>*, sead::Quat<float>*);
executeReactionNerve(al::HostStateBase<Shibaken>*);
getJumpGravityAccel(Shibaken const*);
getJumpAirFriction(Shibaken const*);
getJumpStartSpeedV(Shibaken const*);

} 
