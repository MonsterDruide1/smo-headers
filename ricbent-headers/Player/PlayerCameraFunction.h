#pragma once

namespace PlayerCameraFunction {

calcCameraMoveInput(sead::Vector2<float>*, al::LiveActor const*);
tryCalcCameraSubMoveInput(sead::Vector2<float>*, al::LiveActor const*);
checkNoCollisionForPlayerSubjectiveCamera(al::LiveActor const*, al::CameraTicket const*, bool);
isInvalidatePlayerInput(al::LiveActor const*);
isTriggerCameraReset(al::LiveActor const*);
isTriggerCameraSubjective(al::LiveActor const*);
isHoldCameraZoom(al::LiveActor const*);
isHoldCameraSnapShotZoomIn(al::LiveActor const*);
isHoldCameraSnapShotZoomOut(al::LiveActor const*);
isHoldCameraSnapShotRollLeft(al::LiveActor const*);
isHoldCameraSnapShotRollRight(al::LiveActor const*);
isCameraInWater(al::LiveActor const*);
isCameraClimbPole(al::LiveActor const*);
isCameraGrabCeil(al::LiveActor const*);
isCameraWallCatch(al::LiveActor const*);
isCameraMoonGravity(al::LiveActor const*);
isFailureCameraSubjective(al::LiveActor const*);
setCameraHackName(al::LiveActor*, HackObjInfo const*);
resetCameraHackName(al::LiveActor*);
tryCalcPlayerRecoveryTarget(sead::Vector3<float>*, al::AreaObj const**, al::LiveActor const*);

} 
