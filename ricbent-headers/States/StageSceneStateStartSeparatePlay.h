#pragma once

class StageSceneStateStartSeparatePlay
{
public:
    StageSceneStateStartSeparatePlay(char const*, StageSceneStatePauseMenu*, al::LayoutInitInfo const&, al::WipeSimple*, al::GamePadSystem*, FooterParts*);
    appear();
    startTreeHouse();
    isNeedRequestGraphicsPreset() const;
    isDrawViewRenderer() const;
    exeAppear();
    exeWait();
    getScene();
    exeBack();
    exeFadeOut();
    exeApplet();
    exeFadeIn();
    exeWaitDraw();
    ~StageSceneStateStartSeparatePlay();
};
