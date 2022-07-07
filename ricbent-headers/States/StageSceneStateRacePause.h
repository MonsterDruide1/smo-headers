#pragma once

class StageSceneStateRacePause
{
public:
    StageSceneStateRacePause(al::Scene*, al::ActorInitInfo const&, SceneAudioSystemPauseController*);
    appear();
    kill();
    isEndCancel() const;
    isEndContinue() const;
    isEndRetry() const;
    isEndExit() const;
    exeSelect();
    exeDecide();
    exeDecideEnd();
    exeCancel();
    ~StageSceneStateRacePause();
};
