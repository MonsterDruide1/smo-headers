#pragma once

class StageSceneStateScenarioCamera
{
public:
    StageSceneStateScenarioCamera(char const*, al::Scene*, char const*, int, al::LiveActor*);
    setStateSkipDemo(StageSceneStateSkipDemo*);
    appear();
    kill();
    tryStart();
    isExistEnableCamera() const;
    exeCamera();
    exeSkip();
    ~StageSceneStateScenarioCamera();
};
