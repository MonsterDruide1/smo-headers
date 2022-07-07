#pragma once

class StageSceneStateCarryMeat
{
public:
    StageSceneStateCarryMeat(char const*, al::Scene*);
    setState(StageSceneStateSkipDemo*);
    appear();
    kill();
    exeFindMeat();
    exeCarryMeat();
    exeSkipDemoFindMeat();
    exeSkipDemoCarryMeat();
    ~StageSceneStateCarryMeat();
};
