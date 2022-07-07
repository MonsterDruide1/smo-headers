#pragma once

namespace SenobiLocalFunction {

setTransToStretchPoint(Senobi*);
shrinkBody(Senobi*, float);
calcBodyPos(sead::Vector3<float>*, al::LiveActor const*);
isHitCeil(sead::Vector3<float>*, al::LiveActor const*, PlayerCollisionCheckSphereMove*, sead::Vector3<float> const&, sead::Vector3<float> const&, float);
isHitWall(sead::Vector3<float>*, al::LiveActor*, PlayerCollisionCheckSphereMove*, sead::Vector3<float> const&);
invalidateAllStretchSensors(al::LiveActor*);
updateStretchSensors(al::LiveActor*, float);
isHoldStretchButton(IUsePlayerHack const*);
trySendMsgToLandingGround(al::LiveActor*, IUsePlayerCollision*);
getLeaf(al::LiveActor const*, int);
calcLeavesNum(al::LiveActor const*);
tryTurnToPlayer(al::LiveActor*, float);
hideSenobi(Senobi*);
showSenobi(Senobi*);
getSenobiStretchLength(Senobi const*);
setSenobiStretchLength(Senobi*, float);

} 
