#pragma once

class StageSceneStateBreakCageShine
{
public:
    tryCreate(al::Scene*, al::ActorInitInfo const&);
    StageSceneStateBreakCageShine(char const*, al::Scene*, al::DeriveActorGroup<CageShineWatcher>*);
    appear();
    kill();
    exeWait();
    ~StageSceneStateBreakCageShine();
};
