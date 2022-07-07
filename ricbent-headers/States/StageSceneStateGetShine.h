#pragma once

class StageSceneStateGetShine
{
public:
    StageSceneStateGetShine(char const*, al::Scene*, StageSceneLayout*, al::SceneInitInfo const&, al::ActorInitInfo const&, al::LayoutInitInfo const&, al::LiveActor*, al::LiveActor*, al::LiveActor*, GameDataHolder*, ProjectItemDirector*);
    appear();
    kill();
    isDrawForward() const;
    setModeEndAndWait();
    setModeHack();
    setModeKeepBind();
    setAchievementName(char const*);
    setShopShine10();
    setLifeRecoverState(StageSceneStateRecoverLife*);
    exeDemoGetFirst();
    exeDemoGet();
    exeDemoShineCount();
    exeDemoLifeRecover();
    exeDemoEndWaitScreenFader();
    exeDemoEnd();
    exeDemoEndAndWait();
    isDemoEnd() const;
    isPowerStar() const;
    ~StageSceneStateGetShine();
};
