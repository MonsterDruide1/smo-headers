#pragma once

class StageSceneStateCheckpointWarp
{
public:
    StageSceneStateCheckpointWarp(char const*, StageScene*, al::LiveActor*, GameDataHolder*, al::CameraTicket*, sead::Vector3<float>*, sead::Vector3<float>*);
    control();
    exeFly();
    exeLand();
    exeFlyToEnd();
    exeEnd();
    ~StageSceneStateCheckpointWarp();
};
