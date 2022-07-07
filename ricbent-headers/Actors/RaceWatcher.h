#pragma once

class RaceWatcher
{
public:
    RaceWatcher(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    registerPlayer(PlayerActorBase*);
    registerNpcPlayer(al::LiveActor*);
    calcRaceProgress(al::LiveActor const*);
    calcRaceProgressPlayer();
    getPlayerRacer() const;
    getWinStageInfo() const;
    getLoseStageInfo() const;
    resetRank();
    startRace();
    endRace();
    isCourseOutPlayer() const;
    exeWait();
    exeRace();
    exeFinish();
    getSceneObjName() const;
    ~RaceWatcher();
};
