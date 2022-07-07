#pragma once

class StageSceneStateRaceCountDown
{
public:
    StageSceneStateRaceCountDown(al::Scene*, al::ActorInitInfo const&, al::LiveActor*, RaceLayout*);
    StageSceneStateRaceCountDown(al::Scene*, al::ActorInitInfo const&, al::LiveActor*, RaceCountDownLayout*);
    appear();
    exeStartWait();
    exeCountDownYukimaru();
    exeCountDownRaceMan();
    ~StageSceneStateRaceCountDown();
};
