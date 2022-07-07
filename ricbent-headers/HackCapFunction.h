#pragma once

namespace HackCapFunction {

resetPositionAndCollision(al::LiveActor*, PlayerColliderHackCap*);
isKeepSeparateHold(PlayerSeparateCapFlag const*, IJudge*, bool);
calcSeparateJumpGravity(bool*, int*, bool*, int*, al::LiveActor const*, PlayerColliderHackCap const*, PlayerInput const*, float, int);
updateSeparateWaitMove(al::LiveActor*, sead::Vector3<float>*, PlayerColliderHackCap const*, al::LiveActor const*, PlayerInput const*, float, float, float, sead::Vector3<float> const&);
updateSeparateWaitJump(al::LiveActor*, sead::Vector3<float>*, float*, PlayerColliderHackCap const*, al::LiveActor const*, PlayerInput const*, float, float, float, float, sead::Vector3<float> const&);

} 
