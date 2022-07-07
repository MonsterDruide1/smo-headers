#pragma once

class CameraAngleVerticalCtrl
{
public:
    CameraAngleVerticalCtrl();
    getInitDefaultAngleDegree();
    loadParam(al::ByamlIter const&);
    start(sead::Vector3<float> const&);
    startUserCtrl();
    update(CameraAngleUpdateInfo const&);
    getDefaultAngleDegree() const;
    setAngleDegree(float);
    startTargetInterpole(float);
    startTargetInterpoleByStep(float, int);
    startResetInterpole();
    startResetInterpoleByStep(int);
    chaseToTargetDegree(float);
    chaseToTargetDegreeBySpeed(float, float);
    isFixInRange() const;
    setRailAngleDegreeRangeAndInterp(float, float, int);
    resetRailAngleDegreeRange();
    startWaterCtrl(int);
    invalidateAutoResetLowAngleV();
    startSnap(float);
    endSnap();
    exeUserCtrl();
    exeWaterCtrl();
    exeHackFlyerCtrl();
    exeInterp();
    exeSnapStart();
    exeSnap();
    exeSnapEnd();
    ~CameraAngleVerticalCtrl();
};
