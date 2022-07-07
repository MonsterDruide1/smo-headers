#pragma once

class StageSceneStateGetShineMainSandWorld
{
public:
    StageSceneStateGetShineMainSandWorld(char const*, StageScene*, al::ActorInitInfo const&);
    appear();
    kill();
    setStateGetShine(StageSceneStateGetShineMain*);
    setStateScenarioCamera(StageSceneStateScenarioCamera*);
    setStateRecoverLife(StageSceneStateRecoverLife*);
    setStateGetShineLast(StageSceneStateGetShineMainLast*);
    setPyramid(Pyramid*);
    exeDemoGetShine();
    exeDemoAppearSandWorldHomeLift();
    exeDemoOpenPyramid();
    exeDemoScenarioCamera();
    exeDemoRecoverLife();
    exeDemoEnd();
    isDrawChromakey() const;
    ~StageSceneStateGetShineMainSandWorld();
};
