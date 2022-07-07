#pragma once

class ProjectCameraInput
{
public:
    ProjectCameraInput(al::LiveActor const*);
    calcInputStick(sead::Vector2<float>*) const;
    isTriggerReset() const;
    isHoldZoom() const;
    tryCalcSnapShotMoveStick(sead::Vector2<float>*) const;
    isHoldSnapShotZoomIn() const;
    isHoldSnapShotZoomOut() const;
    isHoldSnapShotRollLeft() const;
    isHoldSnapShotRollRight() const;
    calcGyroPose(sead::Vector3<float>*, sead::Vector3<float>*, sead::Vector3<float>*) const;
};
