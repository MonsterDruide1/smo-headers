#pragma once

class StageSceneStateGetShineGrand
{
public:
    StageSceneStateGetShineGrand(char const*, al::Scene*, al::SceneInitInfo const&, al::ActorInitInfo const&, al::LayoutInitInfo const&);
    appear();
    kill();
    exeDemoGetFirst();
    exeDemoGetStart();
    exeDemoAppearShineGetLayout();
    exeDemoWipeClose();
    exeDemoWipeWait();
    exeDemoWipeOpen();
    exeDemoEnd();
    isDrawChromakey() const;
    isEnableWipeClose() const;
    ~StageSceneStateGetShineGrand();
};
