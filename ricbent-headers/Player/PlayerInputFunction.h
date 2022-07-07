#pragma once

namespace PlayerInputFunction {

isSeparatePlaySingleJoy(al::LiveActor const*, int);
isTriggerJump(al::LiveActor const*, int);
isHoldJump(al::LiveActor const*, int);
isReleaseJump(al::LiveActor const*, int);
isTriggerAction(al::LiveActor const*, int);
isHoldAction(al::LiveActor const*, int);
isReleaseAction(al::LiveActor const*, int);
isTriggerSubAction(al::LiveActor const*, int);
isHoldSubAction(al::LiveActor const*, int);
isReleaseSubAction(al::LiveActor const*, int);
isHoldBalloonSet(al::LiveActor const*, int);
isTriggerTalk(al::LiveActor const*, int);
isTriggerStartWorldWarp(al::LiveActor const*, int);
isTriggerCancelWorldWarp(al::LiveActor const*, int);
getMoveInputStick(al::LiveActor const*, int, int);
isHoldCameraReset(al::LiveActor const*, int, int);
getRadiconInputSteeringValue(al::LiveActor const*, int);
getNoInputJudgeKeyMask(al::LiveActor const*, int);
isInputLeftStickNoCameraMove(al::LiveActor const*, int, float);
isTriggerCameraReset(al::LiveActor const*, int);
isTriggerSeparateCameraReset(al::LiveActor const*, int, int);
isTriggerCameraSubjective(al::LiveActor const*, int);
isHoldCameraZoom(al::LiveActor const*, int);
isHoldCameraSnapShotZoomIn(al::LiveActor const*, int);
isHoldCameraSnapShotZoomOut(al::LiveActor const*, int);
isHoldCameraSnapShotRollLeft(al::LiveActor const*, int);
isHoldCameraSnapShotRollRight(al::LiveActor const*, int);
getCameraMoveInput(al::LiveActor const*, int, int, bool);

} 
