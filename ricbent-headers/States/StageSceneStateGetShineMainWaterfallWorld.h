#pragma once

class StageSceneStateGetShineMainWaterfallWorld
{
public:
    tryCreate(al::Scene*, al::ActorInitInfo const&);
    StageSceneStateGetShineMainWaterfallWorld(char const*, al::Scene*, WaterfallWorldFallDownBridge*);
    init();
    appear();
    kill();
    setStateGetShine(StageSceneStateGetShineMain*);
    setStateScenarioCamera(StageSceneStateScenarioCamera*);
    setStateRecoverLife(StageSceneStateRecoverLife*);
    setStateGetShineLast(StageSceneStateGetShineMainLast*);
    exeDemoGetShine();
    exeDemoDownBridge();
    exeDemoScenarioCamera();
    exeDemoRecoverLife();
    exeDemoCapManHeroTalkFirstMoonGet();
    exeDemoEnd();
    ~StageSceneStateGetShineMainWaterfallWorld();
};
