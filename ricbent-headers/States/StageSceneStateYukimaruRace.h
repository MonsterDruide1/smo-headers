#pragma once

class StageSceneStateYukimaruRace
{
public:
    tryCreate(al::Scene*, al::ActorInitInfo const&, StageSceneLayout*, SceneAudioSystemPauseController*, StageSceneStateSnapShot*);
    StageSceneStateYukimaruRace(al::Scene*, al::ActorInitInfo const&, StageSceneLayout*, SceneAudioSystemPauseController*, StageSceneStateSnapShot*);
    init();
    appear();
    isPause() const;
    exeIntroCamera();
    exeCountDown();
    exeRace();
    exePause();
    exeSnapShot();
    exeFinish();
    exeResult();
    exeResultEnd();
    ~StageSceneStateYukimaruRace();
};
