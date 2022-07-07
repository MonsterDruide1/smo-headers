#pragma once

class StageSceneStateTalk
{
public:
    StageSceneStateTalk(char const*, al::Scene*, EventFlowSceneExecuteCtrl*, StageSceneLayout*, CinemaCaption*, PlayGuideSkip*, StageSceneStateMiniGameRanking*, StageSceneStateSkipDemo*, StageSceneStateWorldMap*, StageSceneStateGetShine*, StageSceneStateGetShineMain*, StageSceneStateCollectionList*, GameDataHolder*, al::WipeSimple*);
    appear();
    kill();
    exeTalk();
    exeGetShine();
    exeGetShineMain();
    exeOpenBgmList();
    exeOpenShineList();
    exeMiniGameRanking();
    exeSkipDemo();
    exeWorldMapStart();
    exeWorldMap();
    ~StageSceneStateTalk();
};
