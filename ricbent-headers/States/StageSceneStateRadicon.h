#pragma once

class StageSceneStateRadicon
{
public:
    StageSceneStateRadicon(char const*, al::Scene*, StageSceneStateCollectionList*, StageSceneStatePauseMenu*, StageSceneStateSnapShot*);
    appear();
    kill();
    exeRadicon();
    exePause();
    exeMap();
    exeSnapShot();
    ~StageSceneStateRadicon();
};
