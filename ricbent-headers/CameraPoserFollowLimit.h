#pragma once

class CameraPoserFollowLimit
{
public:
    CameraPoserFollowLimit(char const*);
    init();
    isUseDistanceCurve() const;
    initByPlacementObj(al::PlacementInfo const&);
    loadParam(al::ByamlIter const&);
    start(al::CameraStartInfo const&);
    getAngleDegreeV() const;
    isInvalidCollider() const;
    calcDistanceRaw() const;
    calcDistance() const;
    tryStartWater(bool);
    movement();
    update();
    calcCameraPose(sead::LookAtCamera*) const;
    receiveRequestFromObject(al::CameraObjectRequestInfo const&);
    startSnapShotMode();
    endSnapShotMode();
    isEnableRotateByPad() const;
    exeFollow();
    trySwitchLimitObj();
    updateInputOrSubTargetTurnH();
    exeResetAngle();
    endWater();
    exeFollowRail();
    exeFollowRailUserCtrl();
    updateRotateSpeedInputH();
    exeWater();
    exeWaterRadicon();
    startTurnBrake(int);
    requestTurnToDirection(al::CameraTurnInfo const*);
    invalidateAutoResetLowAngleV();
};
