#pragma once

class StageSceneStateSnapShot
{
public:
    StageSceneStateSnapShot(char const*, al::Scene*, ControllerGuideSnapShotCtrl*, SceneAudioSystemPauseController*, InputSeparator*, NpcEventDirector*);
    appear();
    kill();
    tryStart();
    exeWait();
    ~StageSceneStateSnapShot();
};
