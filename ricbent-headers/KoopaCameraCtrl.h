#pragma once

class KoopaCameraCtrl
{
public:
    KoopaCameraCtrl(al::LiveActor const*, al::ActorInitInfo const&);
    KoopaCameraCtrl(al::LiveActor const*, al::LiveActor const*, al::ActorInitInfo const&, sead::Vector3<float> const&);
    update();
    updateTargetTrans();
    initFireBeamStartCamera(al::ActorInitInfo const&);
    tryStartFireBeamStartCamera(sead::Vector3<float> const&, sead::Vector3<float> const&);
    isExistDemoCameraAnim(char const*) const;
    isPlayingDemoCameraAnim(char const*) const;
    startDemoCamera(char const*);
    endDemoCamera();
    tryEndDemoCamera();
    invalidateDemoCameraAngleSwing();
    validateDemoCameraAngleSwing();
    switchKoopaSubTarget();
    startTargetInterpole(int, int);
    switchKoopaAndCapSubTarget();
    resetAllCameraSubTarget();
    getTargetName() const;
    calcTrans(sead::Vector3<float>*) const;
    getCameraDirector() const;
};
