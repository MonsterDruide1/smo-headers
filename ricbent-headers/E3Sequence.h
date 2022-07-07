#pragma once

class E3Sequence
{
public:
    E3Sequence(char const*);
    ~E3Sequence();
    isDisposable() const;
    destroySceneHeap(bool);
    init(al::SequenceInitInfo const&);
    initSystem();
    deleteScene();
    update();
    isEnableSave() const;
    drawMain() const;
    exeLoadStationedResource();
    exeTitle();
    exeStageSelect();
    exeEndCard();
    exeSoftReset();
    exeInitSystem();
    exeLoadWorldResource();
    exeLoadWorldResourceWithBoot();
    exeLoadStage();
    exePlayStage();
    exeDestroy();
    updateDestroy();
    exeDestroyToRebootEnd();
    exeMiss();
    exeMissCoinSub();
    exeMissEnd();
    isAbleReset();
    getCurrentScene() const;
};
