#pragma once

class StageSceneStateRaceIntroCamera
{
public:
    StageSceneStateRaceIntroCamera(al::Scene*, al::ActorInitInfo const&, StageSceneLayout*, bool);
    appear();
    exeMove();
    ~StageSceneStateRaceIntroCamera();
};
