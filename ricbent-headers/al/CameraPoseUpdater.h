#pragma once

namespace al { 

class CameraPoseUpdater
{
public:
    CameraPoseUpdater(al::SceneCameraInfo*, int);
    ~CameraPoseUpdater();
    init(al::CameraParamTransfer const*, al::CameraStopJudge const*, al::CameraStartParamCtrl*);
    getNearClipDistance() const;
    update();
    trySwitchCamera();
    isActiveInterpole() const;
    startInterpole(int);
    requestCancelInterpole();
    calcCameraPoseWithoutInterpole(sead::LookAtCamera*) const;
    startSnapShotMode(bool);
    endSnapShotMode();
    isSnapShotOrientationRotate90() const;
    isSnapShotOrientationRotate270() const;
    exeActive();
    exeDeactive();
    exeStop();
    exePause();
    exeSnapShot();
    endSnapShot();
    exeSnapShotNoUpdate();
    isCurrentCameraPriority(int) const;
    isInvalidChangeSubjectiveCamera() const;
    isCurrentCameraZooming() const;
    isCurrentCameraEnableRotateByPad() const;
    tryReceiveCameraRequestFromObject(al::CameraObjectRequestInfo const&);
    tryRequestCameraTurnToDirection(al::CameraTurnInfo const*);
};

} 
