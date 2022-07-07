#pragma once

class StageSceneStateGetLifeMaxUpItem
{
public:
    StageSceneStateGetLifeMaxUpItem(char const*, al::Scene*, StageSceneLayout*);
    appear();
    kill();
    exeDemoGetLifeMaxUpItem();
    ~StageSceneStateGetLifeMaxUpItem();
};
