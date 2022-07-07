#pragma once

class InputSeparator
{
public:
    InputSeparator(al::IUseSceneObjHolder const*, bool);
    reset();
    update();
    updateForSnapShotMode();
    isTriggerUiLeft();
    checkDominant(bool);
    isTriggerUiRight();
    isTriggerUiUp();
    isTriggerUiDown();
    isHoldUiLeft();
    isHoldUiRight();
    isHoldUiUp();
    isHoldUiDown();
    isRepeatUiLeft();
    isRepeatUiRight();
    isRepeatUiUp();
    isRepeatUiDown();
    isTriggerSnapShotMode();
    isTriggerIncrementPostProcessingFilterPreset();
    isTriggerDecrementPostProcessingFilterPreset();
};
