#pragma once

namespace alCameraFunction {

initCameraNoPlacementInfoNoSave(al::CameraPoser*, al::IUseCamera const*, al::PlacementId const*, char const*, int, sead::Matrix34<float> const&);
initCameraNoSave(al::CameraPoser*, al::IUseCamera const*, al::ActorInitInfo const&, char const*, int);
initCamera(al::CameraPoser*, al::IUseCamera const*, al::ActorInitInfo const&, char const*, int);
initCameraNoSave(al::CameraPoser*, al::IUseCamera const*, al::PlacementInfo const&, char const*, int);
initCameraNoPlacementInfo(al::CameraPoser*, al::IUseCamera const*, al::PlacementId const*, char const*, int, sead::Matrix34<float> const&);
requestCameraShakeLoop(al::IUseCamera const*, char const*);
initCamera(al::CameraPoser*, al::IUseCamera const*, al::PlacementInfo const&, char const*, int);
initAreaCamera(al::IUseCamera const*, al::PlacementInfo const&, char const*);
initForceAreaCamera(al::IUseCamera const*, al::PlacementInfo const&, char const*);
initPriorityBossField(al::CameraTicket*);
initPriorityCapture(al::CameraTicket*);
initPriorityObject(al::CameraTicket*);
initPrioritySafetyPointRecovery(al::CameraTicket*);
initPriorityDemoTalk(al::CameraTicket*);
initPriorityDemo(al::CameraTicket*);
initPriorityDemo2(al::CameraTicket*);
isCurrentCameraPriorityPlayer(al::IUseCamera const*, int);
setPoserNearClipDistance(al::CameraTicket*, float);
getNearClipDistance(al::IUseCamera const*, int);
validateCameraArea2D(al::IUseCamera*);
invalidateCameraArea2D(al::IUseCamera*);
validateCameraAreaKids(al::IUseCamera*);
isValidCameraAreaKids(al::CameraFlagCtrl const*);
onSeparatePlayMode(al::IUseCamera*);
offSeparatePlayMode(al::IUseCamera*);
validateResetPoseNextCamera(al::CameraTicket*);
validateKeepPreSelfPoseNextCamera(al::CameraTicket*);
validateCameraInterpoleEaseOut(al::CameraTicket*);
onForceCollideAtStartInterpole(al::CameraTicket*);
initCameraSettingCloudSea(al::IUseCamera*, float);
initMirrorAreaCamera(al::IUseCamera const*, al::PlacementInfo const&, char const*);

} 
