#pragma once

class StageSceneStateGetShineMain
{
public:
    StageSceneStateGetShineMain(char const*, al::Scene*, StageSceneLayout*, al::SceneInitInfo const&, al::ActorInitInfo const&, al::LayoutInitInfo const&, al::LiveActor*, ScenarioStartCameraHolder*, GameDataHolder*);
    appear();
    kill();
    setScenarioCameraState(StageSceneStateScenarioCamera*);
    exeWaitPlayerAnimFirst();
    exeDemoGetStart();
    exeDemoAppearShineGetLayout();
    exeDemoShineCount();
    exeDemoWipeClose();
    exeDemoWipeWait();
    exeDemoLand();
    exeDemoOpenDoorSnow();
    exeDemoRiseMapParts();
    exeDemoScenarioCamera();
    exeDemoLifeRecover();
    exeDemoEnd();
    exeDemoEndCity();
    startDemoEnd();
    isDrawChromakey() const;
    getQuestInfo() const;
    ~StageSceneStateGetShineMain();
};
