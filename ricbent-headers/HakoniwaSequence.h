#pragma once

class HakoniwaSequence
{
public:
    HakoniwaSequence(char const*);
    ~HakoniwaSequence();
    isDisposable() const;
    updatePadSystem();
    destroySceneHeap(bool);
    init(al::SequenceInitInfo const&);
    initSystem();
    update();
    isEnableSave() const;
    drawMain() const;
    exeBootLoadData();
    exeDemoOpening();
    exeLoadWorldResource();
    exeLoadWorldResourceWithBoot();
    exeLoadStage();
    exePlayStage();
    exeDemoWorldWarp();
    exeDemoEnding();
    exeDestroy();
    exeMiss();
    exeMissCoinSub();
    exeMissEnd();
    exeDemoLava();
    exeFadeToNewGame();
    exeChangeLanguage();
    exeWaitWriteData();
    exeWaitLoadData();
    exeWaitWriteDataModeChange();
    exeWaitLoadDataModeChange();
    getCurrentScene() const;
};
