#pragma once

class StageSceneStateStageMap
{
public:
    StageSceneStateStageMap(char const*, al::Scene*, MapLayout*);
    init();
    appear();
    startRace();
    endRace();
    exeOpen();
    setOpenInCollectionList();
    exeOpenInCollectionList();
    exeCheckpointWarpTutorialWait();
    exeCheckpointWarpTutorial();
    exeCheckpointWarpTutorialWaitDecide();
    exeWait();
    tryCloseMap();
    exeScroll();
    tryBindIcon(float);
    exeAdsorb();
    exeWaitAdsorb();
    tryCheckpointWarp(GameDataHolderAccessor, MapIconInfo const*);
    exeIconSelectMove();
    exeMoveIconAdsorbRange();
    isEndClose() const;
    isEndCheckpointWarp() const;
    calcWarpCheckpointIndex() const;
    isWarpHome() const;
    isAdsorbWarpIcon() const;
    isEnableChangeOut() const;
    closeMap();
    changeOut(bool);
    changeIn(bool);
    exeEndClose();
    exeChangeOut();
    getBackgroundLayout();
    isEnableOpenList() const;
    openList();
    exeChangeIn();
    exeEndCheckpointWarp();
    ~StageSceneStateStageMap();
};
