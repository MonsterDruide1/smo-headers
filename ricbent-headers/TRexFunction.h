#pragma once

namespace TRexFunction {

sendMsgTRexAttackToAllCollidedCollision(TRex const*);
updateMaterialCodeByFootCollide(TRex*, TRexFootIK const*);
appearFootPrint(al::LiveActorGroup*, TRex const*, bool);
updatePatrolRouteRider(TRexPatrolRouteRider*, TRex const*);
executePatrolTurn(al::IUseNerve*, TRex*, sead::Vector3<float>*, sead::Vector3<float>*);
calcBlendAnimFrameRateByIndex(TRex const*, int);
tryStartPatrolTurnPoint(al::IUseNerve*, TRex const*, al::Nerve const*, sead::Vector3<float>*, sead::Vector3<float>*, sead::Vector3<float> const&, float);
updatePatrolRunSpeed(TRex*, sead::Vector3<float>*);
updatePatrolDashSpeed(TRex*, sead::Vector3<float>*, float);
updatePatrolFindTurn(TRexHackTurnInfo*, TRex*, sead::Vector3<float> const&, float, TRexCollisionAnalyzer const*);
updateFallPoseAndVelocity(TRex*, float);
createTRexScrollBreakMapPartsBreakJudge(TRex const*, al::ActorInitInfo const&);

} 
