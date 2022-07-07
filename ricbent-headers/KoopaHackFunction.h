#pragma once

namespace KoopaHackFunction {

startStopKoopaHack(al::LiveActor*);
endStopKoopaHack(al::LiveActor*);
resetPostureKoopaHack(al::LiveActor*, sead::Quat<float> const&, sead::Vector3<float> const&);
isStopKoopaHack(al::LiveActor const*);
isStatusDemoForSceneKoopaHack(al::LiveActor const*);
setStatusDemoForSceneKoopaHack(al::LiveActor const*);
resetStatusDemoForSceneKoopaHack(al::LiveActor const*);

} 
