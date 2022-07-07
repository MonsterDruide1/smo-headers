#pragma once

class BossForestCameraController
{
public:
    BossForestCameraController(BossForest*, al::ActorInitInfo const&, sead::Vector3<float> const*);
    calcCameraTargetPos() const;
    tryStartCamera();
    tryStartCameraOld();
    tryEndCamera();
    tryEndCameraOld();
    tryRestartCamera();
    tryRestartCameraOld();
    allowNearCamera();
    allowNearCameraOld();
    disallowNearCamera();
    disallowNearCameraOld();
    exeOld();
    endOld();
    exeTower();
    control();
    endTower();
    ~BossForestCameraController();
};
