#pragma once

class StageSceneStateMiss
{
public:
    StageSceneStateMiss(char const*, al::Scene*, al::LayoutInitInfo const&, GameDataHolder*, StageSceneLayout*, al::SubCameraRenderer*);
    appear();
    kill();
    checkMiss() const;
    exeMiss();
    isPlayerDeadWipeStart() const;
    exeMissWipe();
    ~StageSceneStateMiss();
};
