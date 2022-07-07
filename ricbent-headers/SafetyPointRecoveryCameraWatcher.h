#pragma once

class SafetyPointRecoveryCameraWatcher
{
public:
    SafetyPointRecoveryCameraWatcher(al::CameraDirector*, al::PlayerHolder const*, al::AreaObjGroup const*, al::AreaObjGroup const*);
    execute();
    exeDeactive();
    exeActive();
    exeActiveGoalCamera();
    exeActiveObjectCamera();
    ~SafetyPointRecoveryCameraWatcher();
    getCameraDirector() const;
};
