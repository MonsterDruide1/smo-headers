#pragma once

class StageSceneStateWarp
{
public:
    StageSceneStateWarp(char const*, al::Scene*, al::WipeSimple*, GameDataHolder*, LocationNameCtrl*);
    appear();
    kill();
    tryStartWarp();
    tryValidateEndEntranceCamera();
    exeStartWarp();
    exeWaitWarp();
    exeEndWarp();
    ~StageSceneStateWarp();
};
