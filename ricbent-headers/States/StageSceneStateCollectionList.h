#pragma once

class StageSceneStateCollectionList
{
public:
    StageSceneStateCollectionList(char const*, al::Scene*, al::LayoutInitInfo const&, MapLayout*, StageSceneStateCollectBgm*, SceneAudioSystemPauseController*);
    updateText();
    init();
    appear();
    kill();
    control();
    setOpenByAchievementNpc();
    setOpenByMusicNpc();
    setOpenInWorldMap(int);
    exeViewStageMap();
    exeViewShineList();
    changeLeft();
    changeRight();
    exeViewHackList();
    exeViewSouvenirList();
    exeViewBgmList();
    exeChangeView();
    exeClose();
    ~StageSceneStateCollectionList();
};
