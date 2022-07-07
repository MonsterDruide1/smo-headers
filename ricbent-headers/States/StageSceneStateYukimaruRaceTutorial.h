#pragma once

class StageSceneStateYukimaruRaceTutorial
{
public:
    tryCreate(al::Scene*, al::ActorInitInfo const&, al::LayoutInitInfo const&, GameDataHolder const*, StageSceneStateSnapShot*);
    StageSceneStateYukimaruRaceTutorial(al::Scene*, al::ActorInitInfo const&, al::LayoutInitInfo const&, GameDataHolder const*, StageSceneStateSnapShot*);
    isPause() const;
    exeInit();
    exePlay();
    exePause();
    exePauseDecide();
    exePauseCancel();
    exeSnapShot();
    ~StageSceneStateYukimaruRaceTutorial();
};
