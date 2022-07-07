#pragma once

class StageSceneStateGetShineMainWithCageShine
{
public:
    tryCreate(al::Scene*, al::ActorInitInfo const&);
    StageSceneStateGetShineMainWithCageShine(char const*, al::Scene*, StageSceneStateBreakCageShine*);
    init();
    appear();
    kill();
    setState(StageSceneStateGetShineMain*, StageSceneStateScenarioCamera*, StageSceneStateRecoverLife*, StageSceneStateGetShineMainLast*);
    exeDemoGetShine();
    exeDemoBreakCageShine();
    exeDemoScenarioCamera();
    exeDemoRecoverLife();
    exeDemoEnd();
    ~StageSceneStateGetShineMainWithCageShine();
};
