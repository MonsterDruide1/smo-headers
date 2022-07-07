#pragma once

class StageSceneStateRaceManRace
{
public:
    tryCreate(al::Scene*, GameDataHolder*, StageSceneLayout*, StageSceneStateMiss*, StageSceneStateCollectionList*, StageSceneStateGetLifeMaxUpItem*, StageSceneStateWarp*, al::ActorInitInfo const&, SceneAudioSystemPauseController*, StageSceneStateSnapShot*);
    StageSceneStateRaceManRace(al::Scene*, GameDataHolder*, StageSceneLayout*, StageSceneStateMiss*, StageSceneStateCollectionList*, StageSceneStateGetLifeMaxUpItem*, StageSceneStateWarp*, al::ActorInitInfo const&, RaceManRace*, SceneAudioSystemPauseController*, StageSceneStateSnapShot*);
    appear();
    kill();
    isPause() const;
    exeIntroCamera();
    exeCountDown();
    exeRace();
    tryPause();
    exeDemoSceneStartPlayerWalk();
    exeDemoNormal();
    exeGetLifeMaxUpItem();
    exeDemoHackStart();
    exePause();
    exeFinish();
    exeMiss();
    exeAskRetry();
    exeMap();
    exeResult();
    exeResultWaitEnd();
    exeWarp();
    exeSnapShot();
    ~StageSceneStateRaceManRace();
};
