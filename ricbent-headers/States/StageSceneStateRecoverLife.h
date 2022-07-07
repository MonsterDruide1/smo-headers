#pragma once

class StageSceneStateRecoverLife
{
public:
    StageSceneStateRecoverLife(char const*, StageScene*, StageSceneLayout*);
    appear();
    kill();
    exeDemoLifeRecover();
    ~StageSceneStateRecoverLife();
};
