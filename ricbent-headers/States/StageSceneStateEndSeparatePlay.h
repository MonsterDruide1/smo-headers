#pragma once

class StageSceneStateEndSeparatePlay
{
public:
    StageSceneStateEndSeparatePlay(char const*, StageSceneStatePauseMenu*, al::LayoutInitInfo const&, al::WipeSimple*, al::GamePadSystem*);
    appear();
    isNeedRequestGraphicsPreset() const;
    exeFadeOut();
    exeApplet();
    getScene();
    exeFadeIn();
    exeWaitDraw();
    isDrawViewRenderer() const;
    ~StageSceneStateEndSeparatePlay();
};
